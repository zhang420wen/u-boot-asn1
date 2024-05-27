// SPDX-License-Identifier: GPL-2.0+
/*
 * Command for accessing SPI flash.
 *
 * Copyright (C) 2008 Atmel Corporation
 */
#include <common.h>
#include <string.h>
#include <stdlib.h>
#include <csr.h>
#include <fdt_support.h>
#include <linux/libfdt.h>
#include "DiscoveryData_api.h"
#include "DiscoveryData_bindings.h"
#include "DiscoveryData_internal.h"

#define FDT_ALIGNMENT           0x1000
#define FDT_EXTRA_SIZE          0x10
#define FDT_CPUS_PATH           "/cpus"
#define FDT_CPU_NODE_PREFIX     "cpu@"
#define FDT_CPU_VECTOR_NODE     "cpu-vector"
#define FDT_CPU_VECTOR_VALUE    "1.0"

struct BER_OSS_ASN_CTX {
	oss_Status status;
	oss_Allocator allocator;
	oss_StringArray errorMessages;
	oss_GCodec gcodec;
	v_DiscoveryData_* pduvalue;
	oss_InputStream in_codedata;
};

const unsigned char g_ber_code_demo[] = {
	0x30, 0x80, 0x80, 0x01, 0x01, 0xa3, 0x80, 0x00, 0x00, 0xa4, 0x80, 0x00, 0x00, 0xa5, 0x80,
	0x00, 0x00, 0xa6, 0x80, 0x00, 0x00, 0xa8, 0x80, 0x00, 0x00, 0xa9, 0x80, 0x00, 0x00, 0xaf, 
	0x80, 0x00, 0x00, 0xb0, 0x80, 0x00, 0x00, 0xb3, 0x80, 0x00, 0x00, 0xb5, 0x80, 0x00, 0x00, 
	0xb8, 0x80, 0x00, 0x00, 0xb9, 0x80, 0x00, 0x00, 0xbc, 0x80, 0x00, 0x00, 0xbd, 0x80, 0x00, 
	0x00, 0xbe, 0x80, 0x00, 0x00, 0xbf, 0x21, 0x80, 0x00, 0x00, 0xbf, 0x22, 0x80, 0x00, 0x00, 
	0xbf, 0x23, 0x80, 0x00, 0x00, 0xbf, 0x24, 0x80, 0x00, 0x00, 0xbf, 0x25, 0x80, 0x00, 0x00,
	0xbf, 0x3c, 0x80, 0x00, 0x00, 0xbf, 0x45, 0x80, 0x00, 0x00, 0xbf, 0x4b, 0x80, 0x00, 0x00, 
	0xbf, 0x4c, 0x80, 0x00, 0x00, 0xbf, 0x4e, 0x80, 0x00, 0x00, 0xbf, 0x6a, 0x80, 0x00, 0x00, 
	0xbf, 0x6b, 0x80, 0x00, 0x00, 0xa1, 0x80, 0x30, 0x80, 0x80, 0x03, 0x14, 0x03, 0x0c, 0x81, 
	0x0d, 0x77, 0x77, 0x77, 0x2e, 0x74, 0x65, 0x73, 0x74, 0x31, 0x2e, 0x63, 0x6f, 0x6d, 0x00, 
	0x00, 0x30, 0x80, 0x80, 0x02, 0x51, 0x03, 0x81, 0x0d, 0x77, 0x77, 0x77, 0x2e, 0x74, 0x65, 
	0x73, 0x74, 0x32, 0x2e, 0x63, 0x6f, 0x6d, 0x00, 0x00, 0x00, 0x00, 0xa2, 0x80, 0x30, 0x80, 
	0xa0, 0x80, 0x80, 0x02, 0x2a, 0x03, 0x00, 0x00, 0x81, 0x08, 0x01, 0x23, 0x45, 0x67, 0x89, 
	0xab, 0xcd, 0xef, 0x00, 0x00, 0x30, 0x80, 0xa0, 0x80, 0x81, 0x0c, 0x77, 0x77, 0x77, 0x2e, 
	0x74, 0x65, 0x73, 0x74, 0x2e, 0x63, 0x6f, 0x6d, 0x00, 0x00, 0x81, 0x08, 0xfe, 0xdc, 0xba, 
	0x98, 0x76, 0x54, 0x32, 0x10, 0x00, 0x00, 0x30, 0x80, 0xa0, 0x80, 0xa2, 0x80, 0x80, 0x08, 
	0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef, 0x81, 0x08, 0xfe, 0xdc, 0xba, 0x98, 0x76, 
	0x54, 0x32, 0x10, 0x00, 0x00, 0x00, 0x00, 0x81, 0x08, 0xfe, 0xdc, 0xba, 0x98, 0x76, 0x54, 
	0x32, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/*
* print the error code
*/
static void print_error_code(const oss_Status* status)
{
	printf("Error code = %d\n", status->errorcode);
}

/*
* print error messages
*/
static void print_error_messages(oss_StringArray* errorMessages, oss_Status* status)
{
	int numErrorMessages = oss_StringArray_GetCount(errorMessages);

	for (int i = 1; i <= numErrorMessages; i++) {
		const oss_String* pstr = oss_StringArray_GetAt(errorMessages, i - 1, status);
		const char* psz = NULL;
		int len = 0;
		if (status->error) {
			return;
		}

		psz = (const char*)oss_String_GetData(pstr);
		len = oss_String_GetLength(pstr);
		printf("%.*s\n", len, psz);
	}
}

/*
* init the OSS_ASN_CTX，return 0 for success, -1 for failure
*/
static int ber_decode_init(struct BER_OSS_ASN_CTX* ctx)
{
	if (ctx == NULL) {
		return -1;
	}

	memset(ctx, 0, sizeof(struct BER_OSS_ASN_CTX));
	oss_Status_init(&ctx->status);
	oss_Allocator_init(&ctx->allocator, NULL, 0, &ctx->status);

	if (ctx->status.error) {
		print_error_code(&ctx->status);
		return -1;
	}

	oss_StringArray_init(&ctx->errorMessages);
	oss_GCodec_init(&ctx->gcodec, &ctx->allocator, &ctx->status);

	if (ctx->status.error) {
		print_error_code(&ctx->status);
		return -1;
	}

	return 0;
}

/*
* set the oss_st CTX,parse the dercode to fill the ctx, return 0 for success, -1 for failure
*/
static int ber_set_oss_st(struct BER_OSS_ASN_CTX* ctx, const unsigned char* data)
{
	oss_bool_t decode_ok = 0;
	int count = 0;
	if (ctx == NULL) {
		return -1;
	}

	while(count < 4096)
	{
		if (memcmp(data + count, "\0\0", 2) != 0) {
			count++;
			continue;
		}

		oss_InputStream_init_pch(&ctx->in_codedata, data, count + 2);
		decode_ok = oss_GCodec_Decode(&ctx->gcodec, oss_EncodingRules_ber,
		e_pdu_DiscoveryData_, &ctx->in_codedata, (oss_Value **)&ctx->pduvalue, &ctx->errorMessages, &ctx->allocator, &ctx->status);
		if (!decode_ok && count < 4096) {
			oss_GCodec_FreeValue(&ctx->gcodec, e_pdu_DiscoveryData_, ctx->pduvalue, &ctx->allocator, &ctx->status);
			count++;
			continue;
		}
		else {
			break;
		}
	}

	if (ctx->status.error) {
		return -1;
	}

	if (!decode_ok) {
		printf("The Decode call failed\n");
		print_error_messages(&ctx->errorMessages, &ctx->status);

		if (ctx->status.error) {
			return -1;
		}

		return -1;
	}
	else {
		printf("The Decode call succeeded\n");
	}
	return 0;
}

/*
* free the oss_st CTX
*/
static void ber_decode_free(struct BER_OSS_ASN_CTX* ctx)
{
	oss_GCodec_FreeValue(&ctx->gcodec, e_pdu_DiscoveryData_,
		ctx->pduvalue, &ctx->allocator, &ctx->status);
}

/*
* resize the fdt
*/
static int asn_fdt_resize(struct fdt_header *blob, struct fdt_header **new_blob) {
	int original_totalsize = 0;
	int new_totalsize = 0;
	int ret = 0;

	ret = fdt_check_header(blob);
	if (ret) {
		printf("FDT blob not valid, returning %s", fdt_strerror(ret));
		return CMD_RET_FAILURE;
	}

	original_totalsize = fdt_totalsize(blob);
	new_totalsize = (original_totalsize + FDT_EXTRA_SIZE 
		+ FDT_ALIGNMENT - 1) & ~(FDT_ALIGNMENT - 1);
	*new_blob = malloc(new_totalsize);

	if (!*new_blob) {
		printf("Failed to allocate memory for the new FDT\n");
		return CMD_RET_FAILURE;
	}

	/* reopen fdt to bigger space */
	ret = fdt_open_into(blob, *new_blob, new_totalsize);
	if (ret) {
		free(*new_blob);
		printf("FDT resize failed: %s\n", fdt_strerror(ret));
		return CMD_RET_FAILURE;
	}
	return 0;
}

/*
* parse the oid data to string
*/
static void oid2string(char* ret, const oss_Uint64Array* obj)
{
	const oss_uint64_t* p;
	oss_uint32_t i = 0;
	oss_uint32_t count = oss_StringArray_GetCount((const oss_StringArray *)obj);

	if (ret == NULL || obj == NULL) {
		return;
	}

	p = oss_Uint64Array_GetData(obj);
	if (p == NULL) {
		return;
	}
		
	for (; i < count; ++i) {
		char tmp[30] = { 0 };
		sprintf(tmp, "%lld", p[i]);
		strcat(ret, tmp);
		if (i != count - 1)
			strcat(ret, ".");
	}
}

/*
* add the errata node to the fdt
*/
static int add_node_errata(struct fdt_header *blob, const int nodeoffset, const struct v_DiscoveryData__errata_* seqofvalue, oss_Allocator* allocator, oss_Status* status)
{
	oss_int32_t numItems = 0;
	int i = 0;
	int j = 0;

	numItems = v_DiscoveryData__errata__GetCount((const void*)seqofvalue); 
	if (numItems == 0) {
		return -1;
	}

	for (i = numItems - 1; i >= 0; i--) {
		int errata_subnode = 0;
		const v_DiscoveryErrata_* item = NULL;
		int ret = 0;
		char ext_sub_name[32] = { 0 };
		char val[128] = { 0 };
		char* str_url = NULL;
		uint32_t len = 0;
		sprintf(ext_sub_name, "errata@%d", j++);
		errata_subnode = fdt_add_subnode(blob, nodeoffset, ext_sub_name);
		if (errata_subnode < 0 && errata_subnode != -FDT_ERR_EXISTS) {
			printf("fdt mknode 'riscv,isa-extension-config/ext/@subnode%d' failed, returning %s\n", i, fdt_strerror(errata_subnode));
			return -1;
		}

		item = v_DiscoveryData__errata__GetAt((const void*)seqofvalue, i, status);
		if (status->error || item == NULL) {
			return -1;
		}

		oid2string(val, item->oid);
		ret = fdt_setprop(blob, errata_subnode, "oid", val, strlen(val) + 1);
		if (ret != 0) {
			printf("set 'riscv,isa-extension-config/errata/@subnode/oid' property \
				failed, returning %s\n", fdt_strerror(ret));
			return ret;
		}

		str_url = (char*)oss_String_GetData(item->url);
		len = oss_String_GetLength(item->url);
		memset(val, 0, sizeof(val));
		memcpy(val, str_url, len);

		ret = fdt_setprop(blob, errata_subnode, "url", val, len + 1);
		if (ret != 0) {
			printf("set 'riscv,isa-extension-config/errata/@subnode/url' property failed, returning %s\n", fdt_strerror(ret));
			return ret;
		}
	}
	return 0;
}

/*
* add the ext node to the fdt,return 0	for success, -1 for failure
*/
static int add_node_ext(struct fdt_header *blob, const int nodeoffset, const struct 
						v_DiscoveryData__ext_* seqofvalue, oss_Allocator* allocator, oss_Status* status)
{
	oss_int32_t numItems = 0;
	int i = 0;
	int j = 0;

	numItems = v_DiscoveryData__ext__GetCount((const void*)seqofvalue);
	if (numItems == 0) {
		return -1;
	}

	for (i = numItems - 1; i >= 0; i--) {
		int ext_subnode = 0;
		int ext_subnode_contentType = 0;
		const v_DiscoveryAdditonalData_* item = NULL;
		int ret = 0;
		char ext_sub_name[32] = { 0 };

		sprintf(ext_sub_name, "ext@%d", j++);
		ext_subnode = fdt_add_subnode(blob, nodeoffset, ext_sub_name);
		if (ext_subnode < 0 && ext_subnode != -FDT_ERR_EXISTS) {
			printf("fdt mknode 'riscv,isa-extension-config/ext/@subnode%d' failed, \
			returning %s\n", i, fdt_strerror(ext_subnode));
			return -1;
		}

		item = v_DiscoveryData__ext__GetAt((const void*)seqofvalue, i, status);
		if (status->error || item == NULL) {
			return -1;
		}

		if (item->contentType->selectedAlternative == e_DiscoveryAdditonalData__contentType__oid) {
			char val[128] = { 0 };
			oid2string(val, item->contentType->val.oid);
			ext_subnode_contentType = fdt_add_subnode(blob, ext_subnode, "contentType");
			if (ext_subnode_contentType < 0 && ext_subnode_contentType != -FDT_ERR_EXISTS) {
				printf("fdt mknode 'riscv,isa-extension-config/ext/@subnode/contentType' failed, \
				returning %s\n", fdt_strerror(ext_subnode));
				return -1;
			}

			ret = fdt_setprop(blob, ext_subnode_contentType, "oid", val, strlen(val) + 1);
			if (ret != 0) {
				printf("set 'riscv,isa-extension-config/ext/@subnode/contentType/oid' property failed, \
				returning %s\n", fdt_strerror(ret));
				return -1;
			}
		} else if (item->contentType->selectedAlternative == e_DiscoveryAdditonalData__contentType__url) {
			char url[128] = { 0 };
			char* str_url = (char*)oss_String_GetData(item->contentType->val.url);
			uint32_t len = oss_String_GetLength(item->contentType->val.url);
			memcpy(url, str_url, len);
			if(str_url == NULL || len == 0) {
				return -1;
			}

			ext_subnode_contentType = fdt_add_subnode(blob, ext_subnode, "contentType");
			if (ext_subnode_contentType < 0 && ext_subnode_contentType != -FDT_ERR_EXISTS) {
				printf("fdt mknode 'riscv,isa-extension-config/ext/@subnode/contentType' failed, \
				returning %s\n", fdt_strerror(ext_subnode));
				return -1;
			}

			ret = fdt_setprop(blob, ext_subnode_contentType, "url", url, len + 1);
			if (ret != 0) {
				printf("set 'riscv,isa-extension-config/ext/@subnode/contentType/url' property \
				failed, returning %s\n", fdt_strerror(ret));
				return -1;
			}
		} else if(item->contentType->selectedAlternative == e_DiscoveryAdditonalData__contentType__numeric) {
			uint32_t manufacturer = 0, identifier = 0;
			int ext_subnode_contentType_numeric = 0;
			ext_subnode_contentType = fdt_add_subnode(blob, ext_subnode, "contentType");
			if (ext_subnode_contentType < 0 && ext_subnode_contentType != -FDT_ERR_EXISTS) {
				printf("fdt mknode 'riscv,isa-extension-config/ext/@subnode/contentType' failed, \
				returning %s\n", fdt_strerror(ext_subnode));
				return -1;
			}

			ext_subnode_contentType_numeric = fdt_add_subnode(blob, ext_subnode_contentType, "numeric");
			if (ext_subnode_contentType_numeric < 0 && ext_subnode_contentType_numeric != -FDT_ERR_EXISTS) {
				printf("fdt mknode 'riscv,isa-extension-config/ext/@subnode/contentType' failed, \
				returning %s\n", fdt_strerror(ext_subnode));
				return -1;
			}

			manufacturer = (unsigned int)item->contentType->val.numeric->manufacturer;
			identifier = (unsigned int)item->contentType->val.numeric->identifier;
			ret = fdt_setprop(blob, ext_subnode_contentType_numeric, "manufacturer", &manufacturer, sizeof(unsigned int));
			if (ret != 0) {
				printf("set 'riscv,isa-extension-config/ext/@subnode/contentType/numeric/manufacturer' \
				property failed, returning %s\n", fdt_strerror(ret));
				return -1;
			}

			ret = fdt_setprop(blob, ext_subnode_contentType_numeric, "identifier", &identifier, sizeof(unsigned int));
			if (ret != 0) {
				printf("set 'riscv,isa-extension-config/ext/@subnode/contentType/numeric/identifier' \
				property failed, returning %s\n", fdt_strerror(ret));
				return -1;
			}
		}

		ret = fdt_setprop(blob, ext_subnode, "payload", oss_ByteArray_GetData_nc(item->payload), oss_ByteArray_GetLength(item->payload));
		if (ret != 0) {
			printf("set 'riscv,isa-extension-config/ext/@subnode/payload' property \
			failed, returning %s\n", fdt_strerror(ret));
			return -1;
		}
	}
	return 0;
}

/*
* convert the ber code to fdt node
*/
static int convertFDTNode(struct fdt_header *blob, const unsigned char* ber_code,
						  int nodeoffset)
{
	int new_nodeoffset = 0;
	char* tmpbuf = NULL;
	int tmpval = 0;
	int ret = 0;
	struct BER_OSS_ASN_CTX ctx;

	ret = fdt_check_header(blob);
	if (ret) {
		printf("fdt blob not valid, returning %s", fdt_strerror(nodeoffset));
		return CMD_RET_FAILURE;
	}

	if (!ber_code) {
		printf("null pointer error\n");
		return CMD_RET_FAILURE;
	}

	if (nodeoffset < 0) {
		/* Not found or something else bad happened. */
		printf("libfdt fdt_path_offset() returned %s\n",
				fdt_strerror(nodeoffset));
		return 1;
	}

	if (-1 == ber_decode_init(&ctx)) {
		printf("ber decode init error\n");
		return CMD_RET_FAILURE;
	}

	if (ber_set_oss_st(&ctx, ber_code) == -1) {
		printf("decoder ber error\n");
		return CMD_RET_FAILURE;
	}

	/* set /cpus/cpu@0/version*/
	tmpval = cpu_to_fdt32(ctx.pduvalue->version);
	ret = fdt_setprop(blob, nodeoffset, "ud_version", &tmpval, sizeof(unsigned int));
	if (ret != 0) {
		printf("set %s property failed, returning %s\n", "ud_version", fdt_strerror(ret));
		return ret;
	}

	tmpval = 0;
	tmpbuf = (char *)malloc(1024);
	if (tmpbuf == NULL) {
		printf("tmpbuf malloc failed\n");
		return CMD_RET_FAILURE;
	}
	memset(tmpbuf, 0, 1024);

#define ADD_RISCV_EXTENSIONS(X) if (ctx.pduvalue->X) {  \
		strcpy(tmpbuf + tmpval, #X);   \
			tmpval += strlen(#X);  \
		tmpval++;                      \
	}

	ADD_RISCV_EXTENSIONS(a);
	ADD_RISCV_EXTENSIONS(c);
	ADD_RISCV_EXTENSIONS(d);
	ADD_RISCV_EXTENSIONS(f);
	ADD_RISCV_EXTENSIONS(h);
	ADD_RISCV_EXTENSIONS(m);
	ADD_RISCV_EXTENSIONS(q);
	ADD_RISCV_EXTENSIONS(p);
	ADD_RISCV_EXTENSIONS(svinval);
	ADD_RISCV_EXTENSIONS(svnapot);
	ADD_RISCV_EXTENSIONS(zaamo);
	ADD_RISCV_EXTENSIONS(zacas);
	ADD_RISCV_EXTENSIONS(zalrsc);
	ADD_RISCV_EXTENSIONS(zawrs);
	ADD_RISCV_EXTENSIONS(zfa);
	ADD_RISCV_EXTENSIONS(zfh);
	ADD_RISCV_EXTENSIONS(zfhmin);
	ADD_RISCV_EXTENSIONS(zicbom);
	ADD_RISCV_EXTENSIONS(zicbop);
	ADD_RISCV_EXTENSIONS(zicboz);
	ADD_RISCV_EXTENSIONS(zicntr);
	ADD_RISCV_EXTENSIONS(zihpm);
	ADD_RISCV_EXTENSIONS(zicond);
	ADD_RISCV_EXTENSIONS(zicsr);
	ADD_RISCV_EXTENSIONS(zifencei);
	ADD_RISCV_EXTENSIONS(zihintntl);
	ADD_RISCV_EXTENSIONS(zihintpause);
	ADD_RISCV_EXTENSIONS(zimop);
	ADD_RISCV_EXTENSIONS(sdext);
	ADD_RISCV_EXTENSIONS(sdtrig);
	ADD_RISCV_EXTENSIONS(shgatpa);
	ADD_RISCV_EXTENSIONS(svbare);
	ADD_RISCV_EXTENSIONS(shtvala);
	ADD_RISCV_EXTENSIONS(sstvala);
	ADD_RISCV_EXTENSIONS(shvstvala);
	ADD_RISCV_EXTENSIONS(shcounterenw);
	ADD_RISCV_EXTENSIONS(sscounterenw);
	ADD_RISCV_EXTENSIONS(ssu64xl);
	ADD_RISCV_EXTENSIONS(shvsatpa);
	ADD_RISCV_EXTENSIONS(shvstvecd);
	ADD_RISCV_EXTENSIONS(sstvecd);
	ADD_RISCV_EXTENSIONS(ssccptr);
	ADD_RISCV_EXTENSIONS(sm1p11);
	ADD_RISCV_EXTENSIONS(sm1p12);
	ADD_RISCV_EXTENSIONS(zfbfmin);
	ADD_RISCV_EXTENSIONS(zic64b);
	ADD_RISCV_EXTENSIONS(ziccamoa);
	ADD_RISCV_EXTENSIONS(ziccif);
	ADD_RISCV_EXTENSIONS(zicclsm);
	ADD_RISCV_EXTENSIONS(ziccrse);
	ADD_RISCV_EXTENSIONS(zve32d);
	ADD_RISCV_EXTENSIONS(zve32f);
	ADD_RISCV_EXTENSIONS(zve32x);
	ADD_RISCV_EXTENSIONS(zve64d);
	ADD_RISCV_EXTENSIONS(zve64f);
	ADD_RISCV_EXTENSIONS(zve64x);
	ADD_RISCV_EXTENSIONS(sm1p13);
	ADD_RISCV_EXTENSIONS(smclic);
	ADD_RISCV_EXTENSIONS(smcdeleg);
	ADD_RISCV_EXTENSIONS(ssccfg);
	ADD_RISCV_EXTENSIONS(smcntrpmf);
	ADD_RISCV_EXTENSIONS(sscofpmf);
	ADD_RISCV_EXTENSIONS(smepmp);
	ADD_RISCV_EXTENSIONS(smrnmi);
	ADD_RISCV_EXTENSIONS(smmpm);
	ADD_RISCV_EXTENSIONS(smnpm);
	ADD_RISCV_EXTENSIONS(ssnpm);
	ADD_RISCV_EXTENSIONS(sspm);
	ADD_RISCV_EXTENSIONS(supm);
	ADD_RISCV_EXTENSIONS(smmtt);
	ADD_RISCV_EXTENSIONS(smstateen);
	ADD_RISCV_EXTENSIONS(ssstateen);
	ADD_RISCV_EXTENSIONS(ss1p11);
	ADD_RISCV_EXTENSIONS(ss1p12);
	ADD_RISCV_EXTENSIONS(ss1p13);
	ADD_RISCV_EXTENSIONS(smaia);
	ADD_RISCV_EXTENSIONS(ssaia);
	ADD_RISCV_EXTENSIONS(smcsrind);
	ADD_RISCV_EXTENSIONS(sscsrind);
	ADD_RISCV_EXTENSIONS(ssdtso);
	ADD_RISCV_EXTENSIONS(sstc);
	ADD_RISCV_EXTENSIONS(svade);
	ADD_RISCV_EXTENSIONS(svadu);
	ADD_RISCV_EXTENSIONS(zba);
	ADD_RISCV_EXTENSIONS(zbb);
	ADD_RISCV_EXTENSIONS(zbc);
	ADD_RISCV_EXTENSIONS(zbkb);
	ADD_RISCV_EXTENSIONS(zbkc);
	ADD_RISCV_EXTENSIONS(zbkx);
	ADD_RISCV_EXTENSIONS(zbs);
	ADD_RISCV_EXTENSIONS(zca);
	ADD_RISCV_EXTENSIONS(zcb);
	ADD_RISCV_EXTENSIONS(zcd);
	ADD_RISCV_EXTENSIONS(zcf);
	ADD_RISCV_EXTENSIONS(zcmp);
	ADD_RISCV_EXTENSIONS(zcmt);
	ADD_RISCV_EXTENSIONS(zfinx);
	ADD_RISCV_EXTENSIONS(zdinx);
	ADD_RISCV_EXTENSIONS(zhinx);
	ADD_RISCV_EXTENSIONS(zhinxmin);
	ADD_RISCV_EXTENSIONS(zk);
	ADD_RISCV_EXTENSIONS(zkn);
	ADD_RISCV_EXTENSIONS(zknd);
	ADD_RISCV_EXTENSIONS(zkne);
	ADD_RISCV_EXTENSIONS(zknh);
	ADD_RISCV_EXTENSIONS(zkr);
	ADD_RISCV_EXTENSIONS(zks);
	ADD_RISCV_EXTENSIONS(zksed);
	ADD_RISCV_EXTENSIONS(zksh);
	ADD_RISCV_EXTENSIONS(zkt);
	ADD_RISCV_EXTENSIONS(zmmul);
	ADD_RISCV_EXTENSIONS(ztso);
	ADD_RISCV_EXTENSIONS(zvbb);
	ADD_RISCV_EXTENSIONS(zvbc);
	ADD_RISCV_EXTENSIONS(zvfh);
	ADD_RISCV_EXTENSIONS(zvfhmin);
	ADD_RISCV_EXTENSIONS(zvkb);
	ADD_RISCV_EXTENSIONS(zvkg);
	ADD_RISCV_EXTENSIONS(zvkn);
	ADD_RISCV_EXTENSIONS(zvknc);
	ADD_RISCV_EXTENSIONS(zvkned);
	ADD_RISCV_EXTENSIONS(zvkng);
	ADD_RISCV_EXTENSIONS(zvknha);
	ADD_RISCV_EXTENSIONS(zvknhb);
	ADD_RISCV_EXTENSIONS(zvks);
	ADD_RISCV_EXTENSIONS(zvksc);
	ADD_RISCV_EXTENSIONS(zvksed);
	ADD_RISCV_EXTENSIONS(zvksg);
	ADD_RISCV_EXTENSIONS(zvksh);
	ADD_RISCV_EXTENSIONS(zvkt);
	ADD_RISCV_EXTENSIONS(v);
	ret = fdt_setprop(blob, nodeoffset, "riscv,isa-extensions", tmpbuf, tmpval);

	if (ret != 0) {
		printf("set %s property failed, returning %s\n", "riscv,isa-extensions", fdt_strerror(ret));
		free(tmpbuf);
		return ret;
	}

	memset(tmpbuf, 0, sizeof(tmpbuf));
	if (ctx.pduvalue->sv57) {
		sprintf(tmpbuf, "riscv,%s", "sv57");
	} else if (ctx.pduvalue->sv48) {
		sprintf(tmpbuf, "riscv,%s", "sv48");
	} else if (ctx.pduvalue->sv39) {
		sprintf(tmpbuf, "riscv,%s", "sv39");
	} else if (ctx.pduvalue->sv32) {
		sprintf(tmpbuf, "riscv,%s", "sv32");
	}

	if (tmpbuf[0]) {
		ret = fdt_setprop(blob, nodeoffset, "mmu-type", tmpbuf, strlen(tmpbuf) + 1);
		if (ret != 0) {
			printf("set %s property failed, returning %s\n", "riscv,isa-extensions", fdt_strerror(ret));
			free(tmpbuf);
			return ret;
		}
	}

	new_nodeoffset = fdt_add_subnode(blob, nodeoffset, "riscv,isa-extension-config");

	if (new_nodeoffset < 0 && new_nodeoffset != -FDT_ERR_EXISTS) {
		printf("fdt mknode 'riscv,isa-extension-config' failed, returning %s\n", fdt_strerror(new_nodeoffset));
		free(tmpbuf);
		return CMD_RET_FAILURE;
	}

	if (ctx.pduvalue->errata) {
		int extnode = 0;
		extnode = fdt_add_subnode(blob, new_nodeoffset, "errata");
		if (extnode < 0 && extnode != -FDT_ERR_EXISTS) {
			printf("fdt mknode 'riscv,isa-extension-config/errata' failed, returning %s\n", fdt_strerror(new_nodeoffset));
			free(tmpbuf);
			return CMD_RET_FAILURE;
		}

		if (add_node_errata(blob, extnode, ctx.pduvalue->errata, &ctx.allocator, &ctx.status)) {
			free(tmpbuf);
			return CMD_RET_FAILURE;
		}
	}

	if (ctx.pduvalue->ext) {
		int extnode = 0;
		extnode = fdt_add_subnode(blob, new_nodeoffset, "ext");
		if (extnode < 0 && extnode != -FDT_ERR_EXISTS) {
			printf("fdt mknode 'riscv,isa-extension-config/ext' failed, returning %s\n", fdt_strerror(new_nodeoffset));
			free(tmpbuf);
			return CMD_RET_FAILURE;
		}

		if (add_node_ext(blob, extnode, ctx.pduvalue->ext, &ctx.allocator, &ctx.status)) {
			free(tmpbuf);
			return CMD_RET_FAILURE;
		}
	}

#undef ADD_RISCV_EXTENSIONS
	ber_decode_free(&ctx);
	free(tmpbuf);
	return 0;
}

static int get_mconfigptr(void) {
	return csr_read(CSR_MCONFIGPTR);
}

static int load_bercode(void)
{
	/* set up */
	unsigned long asn_buf=0x20000000;
	memcpy((void *)asn_buf, g_ber_code_demo, sizeof(g_ber_code_demo));
	/* get register*/
	unsigned long value;
	value = get_mconfigptr();
	printf("value:%lx\n", value);
	return 0;
}
/*
 * Add asn_data to fdt
 */
int asn2fdtdemo(void)
{
	void *dtb_addr = (void *)(uintptr_t)env_get_hex("dtb_addr", 0);
	const char *cpu_node_name = NULL;
	int cpus_offset = 0, offset = 0;
	struct fdt_header *blob, *new_blob = NULL;
	int len = 0;
	int retry = 4;
	char *bootcmd_load = NULL;
	char *pos = NULL;

	blob = (struct fdt_header *)dtb_addr;
	if (fdt_check_header(blob)) {
		printf("Invalid FDT file\n");
		return CMD_RET_FAILURE;
	}

	/* set properties for every cpu@n node */
	cpus_offset = fdt_path_offset(blob, FDT_CPUS_PATH);
	if (cpus_offset < 0) {
		printf ("Cannot find /cpus node");
		return CMD_RET_FAILURE;
	}

	for (offset = fdt_first_subnode(blob, cpus_offset);

		 offset > 0;
		 offset = fdt_next_subnode(blob, offset)) {

		cpu_node_name = fdt_get_name(blob, offset, NULL);
		if (cpu_node_name == NULL) {
			continue;
		}

		if (strncmp(cpu_node_name, FDT_CPU_NODE_PREFIX, 4) == 0) {
			char* p_ber_code = (char*)get_mconfigptr();
			if (p_ber_code == NULL) {
				return CMD_RET_FAILURE;
			}

			while (convertFDTNode(blob, p_ber_code, offset) == -FDT_ERR_NOSPACE) {
				if (retry-- <= 0) {
					printf("FDT resizing failed\n");
					return CMD_RET_FAILURE;
				}
				printf("try to resize fdt...\n");
				if (new_blob) {
					free(new_blob);
					new_blob = NULL;
				}
				if (asn_fdt_resize(blob, &new_blob)) {
					return CMD_RET_FAILURE;
				}
				blob = new_blob;
			}
		}
	}

	if (blob != dtb_addr) {
		memcpy(dtb_addr, blob, fdt_totalsize(blob));
		free(blob);
	}
	return 0;
}

void asn2fdt_test(void)
{
	char *mmc = env_get("mmcdev");
	char *mmcbootpart = env_get("mmcbootpart");
	unsigned long dtb_addr = env_get_hex("dtb_addr", 0);
	char cmd[60] = { 0 };
	char *fdt_file = env_get("fdt_file");

	if (mmc == NULL || mmcbootpart == NULL || dtb_addr == NULL || fdt_file == NULL) {
		printf("asn2dft_test error: some ptr is null!\n");
	}
	
	sprintf(cmd, "ext4load mmc %s:%s %x %s", mmc, mmcbootpart, dtb_addr, fdt_file);
	if (run_command(cmd, 0)) {
		printf("ext4load error!\n");
		return;
	}

	memset(cmd, 0, sizeof(cmd));
	sprintf(cmd, "fdt addr %x", dtb_addr);

	if (run_command(cmd, 0)) {
		printf("fdt addr error!\n");
		return;
	}

	if (load_bercode()) {
		printf("loadbercode error!\n");
		return;
	}

	if (asn2fdtdemo()) {
		printf("asn2dft error!\n");
		return;
	}

	if (run_command("fdt print /cpus/cpu@0", 0)) {
		printf("fdt print error!\n");
		return;
	}
}
