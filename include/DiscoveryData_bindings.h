/******************************************************************/
/* Copyright (C) 2022-2023 OSS Nokalva, Inc.  All rights reserved.*/
/******************************************************************/

/* THIS FILE IS PROPRIETARY MATERIAL OF OSS NOKALVA, INC.
 * AND MAY BE USED ONLY BY DIRECT LICENSEES OF OSS NOKALVA, INC.
 * THIS FILE MAY NOT BE DISTRIBUTED.
 * THIS COPYRIGHT STATEMENT MAY NOT BE REMOVED.*/

/* This file was generated for zhangwen by https://asn1.io/ASN1-C-Compiler/ at 5/15/2024 10:01:40 PM -04:00 */
/* Generated codec: DiscoveryData */
/* ASN.1 compiler version: 0.6.309 */


#ifndef DiscoveryData_bindings_h_INCLUDED_ONCE
#define DiscoveryData_bindings_h_INCLUDED_ONCE



/** A structure representing a value of OBJECT IDENTIFIER type 'RISCV-Unified-Discovery.DiscoveryAdditonalData--1'
*/
typedef struct oss_Uint64Array v_OidValue_Uint64 ;

/** A structure representing a value of UTF8String type 'RISCV-Unified-Discovery.DiscoveryAdditonalData--2'
*/
typedef struct oss_String v_StringValue ;

/** A structure representing a value of OCTET STRING type 'RISCV-Unified-Discovery.DiscoveryAdditonalData--7'
*/
typedef struct oss_ByteArray v_OctetStringValue ;

/** A structure representing a value of BIT STRING type 'RISCV-Unified-Discovery.RVVConfig--1'
*/
typedef struct oss_BitArray v_BitStringValue ;

/** A value of INTEGER type 'RISCV-Unified-Discovery.JEDEC-ID'
*/
typedef oss_int64_t v_IntegerValue_Int64 ;

/** A structure representing a value of SEQUENCE type 'RISCV-Unified-Discovery.DiscoveryAdditonalData'
*/
typedef struct v_DiscoveryAdditonalData_ v_DiscoveryAdditonalData_ ;

/** A structure representing a value of CHOICE type 'RISCV-Unified-Discovery.DiscoveryAdditonalData--6'
*/
typedef struct v_DiscoveryAdditonalData__contentType_ v_DiscoveryAdditonalData__contentType_ ;

/** A structure representing a value of SEQUENCE type 'RISCV-Unified-Discovery.DiscoveryAdditonalData--5'
*/
typedef struct v_DiscoveryAdditonalData__contentType__numeric_ v_DiscoveryAdditonalData__contentType__numeric_ ;

/** A structure representing a value of SEQUENCE type 'RISCV-Unified-Discovery.DiscoveryErrata'
*/
typedef struct v_DiscoveryErrata_ v_DiscoveryErrata_ ;

/** A structure representing a value of SEQUENCE type 'RISCV-Unified-Discovery.RVVConfig'
*/
typedef struct v_RVVConfig_ v_RVVConfig_ ;

/** A structure representing a value of SEQUENCE type 'RISCV-Unified-Discovery.DiscoveryData'
*/
typedef struct v_DiscoveryData_ v_DiscoveryData_ ;

/** A structure representing a value of SEQUENCE type 'RISCV-Unified-Discovery.DiscoveryData--2'
*/
typedef struct v_DiscoveryData__a_ v_DiscoveryData__a_ ;

/** A structure representing a value of SEQUENCE OF type 'RISCV-Unified-Discovery.DiscoveryData--141'
*/
typedef struct v_DiscoveryData__errata_ v_DiscoveryData__errata_ ;

/** A structure representing a value of SEQUENCE OF type 'RISCV-Unified-Discovery.DiscoveryData--143'
*/
typedef struct v_DiscoveryData__ext_ v_DiscoveryData__ext_ ;
void call_all_api_functions (void) ;

/** Initialize a SeqOfValue object
* @param obj The SeqOfValue object to be initialized
*/
void v_DiscoveryData__errata__init_1 (v_DiscoveryData__errata_ * obj) ;

/** Initialize a SeqOfValue object by copying another (only the addresses of the pointed-to Value objects are copied)
* @param obj The SeqOfValue object to be initialized
* @param arrPT An existing SeqOfValue object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void v_DiscoveryData__errata__init_2 (v_DiscoveryData__errata_ * obj, const v_DiscoveryData__errata_ * arrPT, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a SeqOfValue object of a given number of items
* @param obj The SeqOfValue object to be initialized
* @param numItems The initial number of items
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void v_DiscoveryData__errata__init_3 (v_DiscoveryData__errata_ * obj, oss_int32_t numItems, oss_Allocator * allocator, oss_Status * status) ;

/** Deinitialize a SeqOfValue object (the pointed-to Value objects are not affected)
* @param obj The SeqOfValue object to be deinitialized
* @param allocator The Allocator object to be used in the function call
*/
void v_DiscoveryData__errata__term (v_DiscoveryData__errata_ * obj, oss_Allocator * allocator) ;

/** Set an SeqOfValue object to an empty array (the pointed-to Value objects are not affected)
* @param obj The SeqOfValue object to be cleared
*/
void v_DiscoveryData__errata__ClearUnowned (v_DiscoveryData__errata_ * obj) ;

/** Assign an SeqOfValue object from another (only the addresses of the Value objects are copied)
* @param obj The SeqOfValue object to be modified
* @param arrPT An existing SeqOfValue object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void v_DiscoveryData__errata__AssignUnowned (v_DiscoveryData__errata_ * obj, const v_DiscoveryData__errata_ * arrPT, oss_Allocator * allocator, oss_Status * status) ;

/** Add an item to the end of an SeqOfValue object (the pointed-to Value object is not affected)
* @param obj The SeqOfValue object to be modified
* @param pT A Value to be added to the array
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void v_DiscoveryData__errata__AddUnowned (v_DiscoveryData__errata_ * obj, v_DiscoveryErrata_ * pT, oss_Allocator * allocator, oss_Status * status) ;

/** Modify the number of items of an SeqOfValue object (the pointed-to Value objects are not affected)
* @param obj The SeqOfValue object to be modified
* @param numItems The new number of items of the array
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void v_DiscoveryData__errata__ResizeUnowned (v_DiscoveryData__errata_ * obj, oss_int32_t numItems, oss_Allocator * allocator, oss_Status * status) ;

/** Set the item at a given position in a SeqOfValue object to a given value (the pointed-to Value object is not affected)
* @param obj The SeqOfValue object to be modified
* @param loc The zero-based position of the item to be modified
* @param pT The new Value
* @param status The Status object to be possibly modified in case of error
*/
void v_DiscoveryData__errata__SetAtUnowned (v_DiscoveryData__errata_ * obj, oss_int32_t loc, v_DiscoveryErrata_ * pT, oss_Status * status) ;

/** Return the item at a given position in a SeqOfValue object
* @param obj A SeqOfValue object
* @param loc The zero-based position of the item to be returned
* @param status The Status object to be possibly modified in case of error
* @return The Value at the specified position in the array
*/
v_DiscoveryErrata_ * v_DiscoveryData__errata__GetAt (const v_DiscoveryData__errata_ * obj, oss_int32_t loc, oss_Status * status) ;

/** Return the number of items of a SeqOfValue object
* @param obj A SeqOfValue object
* @return The number of items
*/
oss_int32_t v_DiscoveryData__errata__GetCount (const v_DiscoveryData__errata_ * obj) ;

/** Initialize a SeqOfValue object
* @param obj The SeqOfValue object to be initialized
*/
void v_DiscoveryData__ext__init_1 (v_DiscoveryData__ext_ * obj) ;

/** Initialize a SeqOfValue object by copying another (only the addresses of the pointed-to Value objects are copied)
* @param obj The SeqOfValue object to be initialized
* @param arrPT An existing SeqOfValue object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void v_DiscoveryData__ext__init_2 (v_DiscoveryData__ext_ * obj, const v_DiscoveryData__ext_ * arrPT, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a SeqOfValue object of a given number of items
* @param obj The SeqOfValue object to be initialized
* @param numItems The initial number of items
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void v_DiscoveryData__ext__init_3 (v_DiscoveryData__ext_ * obj, oss_int32_t numItems, oss_Allocator * allocator, oss_Status * status) ;

/** Deinitialize a SeqOfValue object (the pointed-to Value objects are not affected)
* @param obj The SeqOfValue object to be deinitialized
* @param allocator The Allocator object to be used in the function call
*/
void v_DiscoveryData__ext__term (v_DiscoveryData__ext_ * obj, oss_Allocator * allocator) ;

/** Set an SeqOfValue object to an empty array (the pointed-to Value objects are not affected)
* @param obj The SeqOfValue object to be cleared
*/
void v_DiscoveryData__ext__ClearUnowned (v_DiscoveryData__ext_ * obj) ;

/** Assign an SeqOfValue object from another (only the addresses of the Value objects are copied)
* @param obj The SeqOfValue object to be modified
* @param arrPT An existing SeqOfValue object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void v_DiscoveryData__ext__AssignUnowned (v_DiscoveryData__ext_ * obj, const v_DiscoveryData__ext_ * arrPT, oss_Allocator * allocator, oss_Status * status) ;

/** Add an item to the end of an SeqOfValue object (the pointed-to Value object is not affected)
* @param obj The SeqOfValue object to be modified
* @param pT A Value to be added to the array
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void v_DiscoveryData__ext__AddUnowned (v_DiscoveryData__ext_ * obj, v_DiscoveryAdditonalData_ * pT, oss_Allocator * allocator, oss_Status * status) ;

/** Modify the number of items of an SeqOfValue object (the pointed-to Value objects are not affected)
* @param obj The SeqOfValue object to be modified
* @param numItems The new number of items of the array
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void v_DiscoveryData__ext__ResizeUnowned (v_DiscoveryData__ext_ * obj, oss_int32_t numItems, oss_Allocator * allocator, oss_Status * status) ;

/** Set the item at a given position in a SeqOfValue object to a given value (the pointed-to Value object is not affected)
* @param obj The SeqOfValue object to be modified
* @param loc The zero-based position of the item to be modified
* @param pT The new Value
* @param status The Status object to be possibly modified in case of error
*/
void v_DiscoveryData__ext__SetAtUnowned (v_DiscoveryData__ext_ * obj, oss_int32_t loc, v_DiscoveryAdditonalData_ * pT, oss_Status * status) ;

/** Return the item at a given position in a SeqOfValue object
* @param obj A SeqOfValue object
* @param loc The zero-based position of the item to be returned
* @param status The Status object to be possibly modified in case of error
* @return The Value at the specified position in the array
*/
v_DiscoveryAdditonalData_ * v_DiscoveryData__ext__GetAt (const v_DiscoveryData__ext_ * obj, oss_int32_t loc, oss_Status * status) ;

/** Return the number of items of a SeqOfValue object
* @param obj A SeqOfValue object
* @return The number of items
*/
oss_int32_t v_DiscoveryData__ext__GetCount (const v_DiscoveryData__ext_ * obj) ;
#ifndef v_DiscoveryAdditonalData__INCLUDED_ONCE
#define v_DiscoveryAdditonalData__INCLUDED_ONCE



/** A structure representing a value of SEQUENCE type 'RISCV-Unified-Discovery.DiscoveryAdditonalData'
*/
struct v_DiscoveryAdditonalData_
{
	struct v_DiscoveryAdditonalData__contentType_ * contentType ;
	v_OctetStringValue * payload ;
}
;
#endif


/** Choice alternative selectors for CHOICE type 'RISCV-Unified-Discovery.DiscoveryAdditonalData--6'
*/
enum e_DiscoveryAdditonalData__contentType_
{
	e_DiscoveryAdditonalData__contentType__Unknown, e_DiscoveryAdditonalData__contentType__oid, e_DiscoveryAdditonalData__contentType__url, e_DiscoveryAdditonalData__contentType__numeric
}
;
#ifndef v_DiscoveryAdditonalData__contentType__INCLUDED_ONCE
#define v_DiscoveryAdditonalData__contentType__INCLUDED_ONCE



/** A structure representing a value of CHOICE type 'RISCV-Unified-Discovery.DiscoveryAdditonalData--6'
*/
struct v_DiscoveryAdditonalData__contentType_
{
	oss_int32_t selectedAlternative ;
	union
	{
		v_OidValue_Uint64 * oid ;
		v_StringValue * url ;
		struct v_DiscoveryAdditonalData__contentType__numeric_ * numeric ;
	}
	val ;
}
;
#endif

#ifndef v_DiscoveryAdditonalData__contentType__numeric__INCLUDED_ONCE
#define v_DiscoveryAdditonalData__contentType__numeric__INCLUDED_ONCE



/** A structure representing a value of SEQUENCE type 'RISCV-Unified-Discovery.DiscoveryAdditonalData--5'
*/
struct v_DiscoveryAdditonalData__contentType__numeric_
{
	v_IntegerValue_Int64 manufacturer ;
	v_IntegerValue_Int64 identifier ;
}
;
#endif


/** Presence flags for the optional components of SEQUENCE type 'RISCV-Unified-Discovery.DiscoveryErrata'
*/
enum e_DiscoveryErrata_
{
	e_DiscoveryErrata__url = 1 << 0
}
;
#ifndef v_DiscoveryErrata__INCLUDED_ONCE
#define v_DiscoveryErrata__INCLUDED_ONCE



/** A structure representing a value of SEQUENCE type 'RISCV-Unified-Discovery.DiscoveryErrata'
*/
struct v_DiscoveryErrata_
{
	oss_uint32_t presence_1 ;
	v_OidValue_Uint64 * oid ;
	v_StringValue * url ;
}
;
#endif

#ifndef v_RVVConfig__INCLUDED_ONCE
#define v_RVVConfig__INCLUDED_ONCE



/** A structure representing a value of SEQUENCE type 'RISCV-Unified-Discovery.RVVConfig'
*/
struct v_RVVConfig_
{
	v_BitStringValue * vlen ;
}
;
#endif


/** Presence flags for the optional components of SEQUENCE type 'RISCV-Unified-Discovery.DiscoveryData'
*/
enum e_DiscoveryData_
{
	e_DiscoveryData__a = 1 << 0, e_DiscoveryData__c = 1 << 1, e_DiscoveryData__d = 1 << 2, e_DiscoveryData__f = 1 << 3, e_DiscoveryData__h = 1 << 4, e_DiscoveryData__m = 1 << 5, e_DiscoveryData__q = 1 << 6, e_DiscoveryData__p = 1 << 7, e_DiscoveryData__v = 1 << 8, e_DiscoveryData__sdext = 1 << 9, e_DiscoveryData__sdtrig = 1 << 10, e_DiscoveryData__sv32 = 1 << 11, e_DiscoveryData__sv39 = 1 << 12, e_DiscoveryData__sv48 = 1 << 13, e_DiscoveryData__sv57
	= 1 << 14, e_DiscoveryData__shgatpa = 1 << 15, e_DiscoveryData__svbare = 1 << 16, e_DiscoveryData__shtvala = 1 << 17, e_DiscoveryData__sstvala = 1 << 18, e_DiscoveryData__shvstvala = 1 << 19, e_DiscoveryData__shcounterenw = 1 << 20, e_DiscoveryData__sscounterenw = 1 << 21, e_DiscoveryData__ssu64xl = 1 << 22, e_DiscoveryData__shvsatpa = 1 << 23, e_DiscoveryData__shvstvecd = 1 << 24, e_DiscoveryData__sstvecd = 1 << 25, e_DiscoveryData__ssccptr
	= 1 << 26, e_DiscoveryData__sm1p11 = 1 << 27, e_DiscoveryData__sm1p12 = 1 << 28, e_DiscoveryData__zfbfmin = 1 << 29, e_DiscoveryData__zic64b = 1 << 30, e_DiscoveryData__ziccamoa = 1 << 31, e_DiscoveryData__ziccif = 1 << 0, e_DiscoveryData__zicclsm = 1 << 1, e_DiscoveryData__ziccrse = 1 << 2, e_DiscoveryData__zve32d = 1 << 3, e_DiscoveryData__zve32f = 1 << 4, e_DiscoveryData__zve32x = 1 << 5, e_DiscoveryData__zve64d = 1 << 6, e_DiscoveryData__zve64f
	= 1 << 7, e_DiscoveryData__zve64x = 1 << 8, e_DiscoveryData__sm1p13 = 1 << 9, e_DiscoveryData__smclic = 1 << 10, e_DiscoveryData__smcdeleg = 1 << 11, e_DiscoveryData__ssccfg = 1 << 12, e_DiscoveryData__smcntrpmf = 1 << 13, e_DiscoveryData__sscofpmf = 1 << 14, e_DiscoveryData__smepmp = 1 << 15, e_DiscoveryData__smrnmi = 1 << 16, e_DiscoveryData__smmpm = 1 << 17, e_DiscoveryData__smnpm = 1 << 18, e_DiscoveryData__ssnpm = 1 << 19, e_DiscoveryData__sspm
	= 1 << 20, e_DiscoveryData__supm = 1 << 21, e_DiscoveryData__smmtt = 1 << 22, e_DiscoveryData__smstateen = 1 << 23, e_DiscoveryData__ssstateen = 1 << 24, e_DiscoveryData__ss1p11 = 1 << 25, e_DiscoveryData__ss1p12 = 1 << 26, e_DiscoveryData__ss1p13 = 1 << 27, e_DiscoveryData__smaia = 1 << 28, e_DiscoveryData__ssaia = 1 << 29, e_DiscoveryData__smcsrind = 1 << 30, e_DiscoveryData__sscsrind = 1 << 31, e_DiscoveryData__ssdtso = 1 << 0, e_DiscoveryData__sstc
	= 1 << 1, e_DiscoveryData__svade = 1 << 2, e_DiscoveryData__svadu = 1 << 3, e_DiscoveryData__svinval = 1 << 4, e_DiscoveryData__svnapot = 1 << 5, e_DiscoveryData__svpbmt = 1 << 6, e_DiscoveryData__za128rs = 1 << 7, e_DiscoveryData__za64rs = 1 << 8, e_DiscoveryData__zaamo = 1 << 9, e_DiscoveryData__zacas = 1 << 10, e_DiscoveryData__zalrsc = 1 << 11, e_DiscoveryData__zawrs = 1 << 12, e_DiscoveryData__zba = 1 << 13, e_DiscoveryData__zbb = 1 <<
	14, e_DiscoveryData__zbc = 1 << 15, e_DiscoveryData__zbkb = 1 << 16, e_DiscoveryData__zbkc = 1 << 17, e_DiscoveryData__zbkx = 1 << 18, e_DiscoveryData__zbs = 1 << 19, e_DiscoveryData__zca = 1 << 20, e_DiscoveryData__zcb = 1 << 21, e_DiscoveryData__zcd = 1 << 22, e_DiscoveryData__zcf = 1 << 23, e_DiscoveryData__zcmp = 1 << 24, e_DiscoveryData__zcmt = 1 << 25, e_DiscoveryData__zfinx = 1 << 26, e_DiscoveryData__zdinx = 1 << 27, e_DiscoveryData__zhinx
	= 1 << 28, e_DiscoveryData__zhinxmin = 1 << 29, e_DiscoveryData__zfa = 1 << 30, e_DiscoveryData__zfh = 1 << 31, e_DiscoveryData__zfhmin = 1 << 0, e_DiscoveryData__zicbom = 1 << 1, e_DiscoveryData__zicbop = 1 << 2, e_DiscoveryData__zicboz = 1 << 3, e_DiscoveryData__zicntr = 1 << 4, e_DiscoveryData__zihpm = 1 << 5, e_DiscoveryData__zicond = 1 << 6, e_DiscoveryData__zicsr = 1 << 7, e_DiscoveryData__zifencei = 1 << 8, e_DiscoveryData__zihintntl
	= 1 << 9, e_DiscoveryData__zihintpause = 1 << 10, e_DiscoveryData__zimop = 1 << 11, e_DiscoveryData__zk = 1 << 12, e_DiscoveryData__zkn = 1 << 13, e_DiscoveryData__zknd = 1 << 14, e_DiscoveryData__zkne = 1 << 15, e_DiscoveryData__zknh = 1 << 16, e_DiscoveryData__zkr = 1 << 17, e_DiscoveryData__zks = 1 << 18, e_DiscoveryData__zksed = 1 << 19, e_DiscoveryData__zksh = 1 << 20, e_DiscoveryData__zkt = 1 << 21, e_DiscoveryData__zmmul = 1 << 22, e_DiscoveryData__ztso
	= 1 << 23, e_DiscoveryData__zvbb = 1 << 24, e_DiscoveryData__zvbc = 1 << 25, e_DiscoveryData__zvfh = 1 << 26, e_DiscoveryData__zvfhmin = 1 << 27, e_DiscoveryData__zvkb = 1 << 28, e_DiscoveryData__zvkg = 1 << 29, e_DiscoveryData__zvkn = 1 << 30, e_DiscoveryData__zvknc = 1 << 31, e_DiscoveryData__zvkned = 1 << 0, e_DiscoveryData__zvkng = 1 << 1, e_DiscoveryData__zvknha = 1 << 2, e_DiscoveryData__zvknhb = 1 << 3, e_DiscoveryData__zvks = 1 << 4,
	e_DiscoveryData__zvksc = 1 << 5, e_DiscoveryData__zvksed = 1 << 6, e_DiscoveryData__zvksg = 1 << 7, e_DiscoveryData__zvksh = 1 << 8, e_DiscoveryData__zvkt = 1 << 9, e_DiscoveryData__errata = 1 << 10, e_DiscoveryData__ext = 1 << 11
}
;
#ifndef v_DiscoveryData__INCLUDED_ONCE
#define v_DiscoveryData__INCLUDED_ONCE



/** A structure representing a value of SEQUENCE type 'RISCV-Unified-Discovery.DiscoveryData'
*/
struct v_DiscoveryData_
{
	oss_uint32_t presence_1 ;
	oss_uint32_t presence_2 ;
	oss_uint32_t presence_3 ;
	oss_uint32_t presence_4 ;
	oss_uint32_t presence_5 ;
	v_IntegerValue_Int64 version ;
	struct v_DiscoveryData__a_ * a ;
	struct v_DiscoveryData__a_ * c ;
	struct v_DiscoveryData__a_ * d ;
	struct v_DiscoveryData__a_ * f ;
	struct v_DiscoveryData__a_ * h ;
	struct v_DiscoveryData__a_ * m ;
	struct v_DiscoveryData__a_ * q ;
	struct v_DiscoveryData__a_ * p ;
	struct v_RVVConfig_ * v ;
	struct v_DiscoveryData__a_ * sdext ;
	struct v_DiscoveryData__a_ * sdtrig ;
	struct v_DiscoveryData__a_ * sv32 ;
	struct v_DiscoveryData__a_ * sv39 ;
	struct v_DiscoveryData__a_ * sv48 ;
	struct v_DiscoveryData__a_ * sv57 ;
	struct v_DiscoveryData__a_ * shgatpa ;
	struct v_DiscoveryData__a_ * svbare ;
	struct v_DiscoveryData__a_ * shtvala ;
	struct v_DiscoveryData__a_ * sstvala ;
	struct v_DiscoveryData__a_ * shvstvala ;
	struct v_DiscoveryData__a_ * shcounterenw ;
	struct v_DiscoveryData__a_ * sscounterenw ;
	struct v_DiscoveryData__a_ * ssu64xl ;
	struct v_DiscoveryData__a_ * shvsatpa ;
	struct v_DiscoveryData__a_ * shvstvecd ;
	struct v_DiscoveryData__a_ * sstvecd ;
	struct v_DiscoveryData__a_ * ssccptr ;
	struct v_DiscoveryData__a_ * sm1p11 ;
	struct v_DiscoveryData__a_ * sm1p12 ;
	struct v_DiscoveryData__a_ * zfbfmin ;
	struct v_DiscoveryData__a_ * zic64b ;
	struct v_DiscoveryData__a_ * ziccamoa ;
	struct v_DiscoveryData__a_ * ziccif ;
	struct v_DiscoveryData__a_ * zicclsm ;
	struct v_DiscoveryData__a_ * ziccrse ;
	struct v_DiscoveryData__a_ * zve32d ;
	struct v_DiscoveryData__a_ * zve32f ;
	struct v_DiscoveryData__a_ * zve32x ;
	struct v_DiscoveryData__a_ * zve64d ;
	struct v_DiscoveryData__a_ * zve64f ;
	struct v_DiscoveryData__a_ * zve64x ;
	struct v_DiscoveryData__a_ * sm1p13 ;
	struct v_DiscoveryData__a_ * smclic ;
	struct v_DiscoveryData__a_ * smcdeleg ;
	struct v_DiscoveryData__a_ * ssccfg ;
	struct v_DiscoveryData__a_ * smcntrpmf ;
	struct v_DiscoveryData__a_ * sscofpmf ;
	struct v_DiscoveryData__a_ * smepmp ;
	struct v_DiscoveryData__a_ * smrnmi ;
	struct v_DiscoveryData__a_ * smmpm ;
	struct v_DiscoveryData__a_ * smnpm ;
	struct v_DiscoveryData__a_ * ssnpm ;
	struct v_DiscoveryData__a_ * sspm ;
	struct v_DiscoveryData__a_ * supm ;
	struct v_DiscoveryData__a_ * smmtt ;
	struct v_DiscoveryData__a_ * smstateen ;
	struct v_DiscoveryData__a_ * ssstateen ;
	struct v_DiscoveryData__a_ * ss1p11 ;
	struct v_DiscoveryData__a_ * ss1p12 ;
	struct v_DiscoveryData__a_ * ss1p13 ;
	struct v_DiscoveryData__a_ * smaia ;
	struct v_DiscoveryData__a_ * ssaia ;
	struct v_DiscoveryData__a_ * smcsrind ;
	struct v_DiscoveryData__a_ * sscsrind ;
	struct v_DiscoveryData__a_ * ssdtso ;
	struct v_DiscoveryData__a_ * sstc ;
	struct v_DiscoveryData__a_ * svade ;
	struct v_DiscoveryData__a_ * svadu ;
	struct v_DiscoveryData__a_ * svinval ;
	struct v_DiscoveryData__a_ * svnapot ;
	struct v_DiscoveryData__a_ * svpbmt ;
	struct v_DiscoveryData__a_ * za128rs ;
	struct v_DiscoveryData__a_ * za64rs ;
	struct v_DiscoveryData__a_ * zaamo ;
	struct v_DiscoveryData__a_ * zacas ;
	struct v_DiscoveryData__a_ * zalrsc ;
	struct v_DiscoveryData__a_ * zawrs ;
	struct v_DiscoveryData__a_ * zba ;
	struct v_DiscoveryData__a_ * zbb ;
	struct v_DiscoveryData__a_ * zbc ;
	struct v_DiscoveryData__a_ * zbkb ;
	struct v_DiscoveryData__a_ * zbkc ;
	struct v_DiscoveryData__a_ * zbkx ;
	struct v_DiscoveryData__a_ * zbs ;
	struct v_DiscoveryData__a_ * zca ;
	struct v_DiscoveryData__a_ * zcb ;
	struct v_DiscoveryData__a_ * zcd ;
	struct v_DiscoveryData__a_ * zcf ;
	struct v_DiscoveryData__a_ * zcmp ;
	struct v_DiscoveryData__a_ * zcmt ;
	struct v_DiscoveryData__a_ * zfinx ;
	struct v_DiscoveryData__a_ * zdinx ;
	struct v_DiscoveryData__a_ * zhinx ;
	struct v_DiscoveryData__a_ * zhinxmin ;
	struct v_DiscoveryData__a_ * zfa ;
	struct v_DiscoveryData__a_ * zfh ;
	struct v_DiscoveryData__a_ * zfhmin ;
	struct v_DiscoveryData__a_ * zicbom ;
	struct v_DiscoveryData__a_ * zicbop ;
	struct v_DiscoveryData__a_ * zicboz ;
	struct v_DiscoveryData__a_ * zicntr ;
	struct v_DiscoveryData__a_ * zihpm ;
	struct v_DiscoveryData__a_ * zicond ;
	struct v_DiscoveryData__a_ * zicsr ;
	struct v_DiscoveryData__a_ * zifencei ;
	struct v_DiscoveryData__a_ * zihintntl ;
	struct v_DiscoveryData__a_ * zihintpause ;
	struct v_DiscoveryData__a_ * zimop ;
	struct v_DiscoveryData__a_ * zk ;
	struct v_DiscoveryData__a_ * zkn ;
	struct v_DiscoveryData__a_ * zknd ;
	struct v_DiscoveryData__a_ * zkne ;
	struct v_DiscoveryData__a_ * zknh ;
	struct v_DiscoveryData__a_ * zkr ;
	struct v_DiscoveryData__a_ * zks ;
	struct v_DiscoveryData__a_ * zksed ;
	struct v_DiscoveryData__a_ * zksh ;
	struct v_DiscoveryData__a_ * zkt ;
	struct v_DiscoveryData__a_ * zmmul ;
	struct v_DiscoveryData__a_ * ztso ;
	struct v_DiscoveryData__a_ * zvbb ;
	struct v_DiscoveryData__a_ * zvbc ;
	struct v_DiscoveryData__a_ * zvfh ;
	struct v_DiscoveryData__a_ * zvfhmin ;
	struct v_DiscoveryData__a_ * zvkb ;
	struct v_DiscoveryData__a_ * zvkg ;
	struct v_DiscoveryData__a_ * zvkn ;
	struct v_DiscoveryData__a_ * zvknc ;
	struct v_DiscoveryData__a_ * zvkned ;
	struct v_DiscoveryData__a_ * zvkng ;
	struct v_DiscoveryData__a_ * zvknha ;
	struct v_DiscoveryData__a_ * zvknhb ;
	struct v_DiscoveryData__a_ * zvks ;
	struct v_DiscoveryData__a_ * zvksc ;
	struct v_DiscoveryData__a_ * zvksed ;
	struct v_DiscoveryData__a_ * zvksg ;
	struct v_DiscoveryData__a_ * zvksh ;
	struct v_DiscoveryData__a_ * zvkt ;
	struct v_DiscoveryData__errata_ * errata ;
	struct v_DiscoveryData__ext_ * ext ;
	struct oss_UnknownExtensionArray unknownExtensions ;
}
;
#endif

#ifndef v_DiscoveryData__a__INCLUDED_ONCE
#define v_DiscoveryData__a__INCLUDED_ONCE



/** A structure representing a value of SEQUENCE type 'RISCV-Unified-Discovery.DiscoveryData--2'
*/
struct v_DiscoveryData__a_
{
	oss_uint8_t dummy ;
}
;
#endif


/** PDU type enumeration
*/
enum e_PduTypeEnum
{
	e_pdu_DiscoveryAdditonalData_ = 1, e_pdu_DiscoveryData_ = 2, e_pdu_DiscoveryErrata_ = 3, e_pdu_JEDEC_ID_ = 4, e_pdu_RVVConfig_ = 5
}
;
#endif
