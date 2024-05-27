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


#ifndef DiscoveryData_api_h_INCLUDED_ONCE
#define DiscoveryData_api_h_INCLUDED_ONCE


typedef unsigned char oss_bool_t ;
typedef signed char oss_int8_t ;
typedef signed short oss_int16_t ;
typedef signed int oss_int32_t ;
typedef signed long long oss_int64_t ;
typedef unsigned char oss_uint8_t ;
typedef unsigned short oss_uint16_t ;
typedef unsigned int oss_uint32_t ;
typedef unsigned long long oss_uint64_t ;
typedef float oss_float32_t ;
typedef double oss_float64_t ;
typedef long double oss_float80_t ;

/** A value of an unspecified type
*/
typedef void oss_Value ;

/** A structure that contains status information
*/
typedef struct oss_Status oss_Status ;

/** A structure that contains error information
*/
typedef struct oss_Exception oss_Exception ;

/** A structure representing a dynamic array of bytes
*/
typedef struct oss_String oss_String ;

/** A structure representing a dynamic array of bytes
*/
typedef struct oss_ByteArray oss_ByteArray ;

/** A structure representing a group of encoding/decoding parameters
*/
typedef struct oss_EncParams oss_EncParams ;

/** A structure that supports stream-oriented writing to a dynamic byte array
*/
typedef struct oss_OutputStream oss_OutputStream ;

/** A structure representing a dynamic array of String objects
*/
typedef struct oss_StringArray oss_StringArray ;

/** A structure representing a dynamic array of 32-bit signed integers
*/
typedef struct oss_Int32Array oss_Int32Array ;

/** A structure representing a dynamic array of 16-bit unsigned integers
*/
typedef struct oss_Uint32Array oss_Uint32Array ;

/** A structure representing a dynamic array of 64-bit signed integers
*/
typedef struct oss_Int64Array oss_Int64Array ;

/** A structure representing a dynamic array of 64-bit unsigned integers
*/
typedef struct oss_Uint64Array oss_Uint64Array ;

/** A structure representing an integer value of arbitrary size
*/
typedef struct oss_BigInteger oss_BigInteger ;

/** A structure representing a dynamic array of BigInteger objects
*/
typedef struct oss_BigIntegerArray oss_BigIntegerArray ;

/** A structure that supports stream-oriented reading from an array of bytes
*/
typedef struct oss_InputStream oss_InputStream ;

/** A structure containing information about an unknown extension
*/
typedef struct oss_UnknownExtension oss_UnknownExtension ;

/** A structure containing encoding/decoding information about an ASN.1 schema
*/
typedef struct oss_GCodec oss_GCodec ;

/** A structure representing a dynamic array of bits
*/
typedef struct oss_BitArray oss_BitArray ;

/** A structure representing a real value with a mantissa and an exponent of arbitrary size
*/
typedef struct oss_BigReal oss_BigReal ;

/** A structure representing a dynamic array of UnknownExtension objects not owned by the array
*/
typedef struct oss_UnknownExtensionArray oss_UnknownExtensionArray ;

/** Structure containing memory allocation information
*/
typedef struct oss_Allocator oss_Allocator ;
#ifndef oss_SpecialReal_INCLUDED_ONCE
#define oss_SpecialReal_INCLUDED_ONCE



/** Special real value enumeration
*/
enum oss_SpecialReal
{
	oss_SpecialReal_Unspecified, oss_SpecialReal_NegativeInfinity, oss_SpecialReal_NegativeZero, oss_SpecialReal_PositiveZero, oss_SpecialReal_PositiveInfinity, oss_SpecialReal_NotANumber
}
;
#endif

#ifndef oss_Severity_INCLUDED_ONCE
#define oss_Severity_INCLUDED_ONCE



/** Error condition severity enumeration
*/
enum oss_Severity
{
	oss_Severity_Unspecified, oss_Severity_Diagnostic, oss_Severity_Informational, oss_Severity_Warning, oss_Severity_SevereError
}
;
#endif

#ifndef oss_EncodingRules_INCLUDED_ONCE
#define oss_EncodingRules_INCLUDED_ONCE



/** Encoding rules enumeration
*/
enum oss_EncodingRules
{
	oss_EncodingRules_none = 0, oss_EncodingRules_ber = 'b', oss_EncodingRules_der = 'd', oss_EncodingRules_oer = 'o', oss_EncodingRules_coer = 'c', oss_EncodingRules_uper = 'u', oss_EncodingRules_cuper = 'v', oss_EncodingRules_per = 'p', oss_EncodingRules_cper = 'q', oss_EncodingRules_jer = 'j', oss_EncodingRules_xer = 'x'
}
;
#endif

#include "DiscoveryData_reserved.h"



/** Initialize a Status object
* @param obj The Status object to be initialized
*/
void oss_Status_init (oss_Status * obj) ;

/** Clear the status
* @param obj The Status object to be cleared
*/
void oss_Status_Clear (oss_Status * obj) ;

/** Tell if the program status is in error
* @param obj A Status object
* @return Nonzero (true) if the status is in error
*/
oss_bool_t oss_Status_IsError (const oss_Status * obj) ;

/** Return an error code if the program status is in error
* @param obj A Status object
* @return The error code, or zero if there is not in an error condition
*/
oss_int32_t oss_Status_GetErrorCode (const oss_Status * obj) ;

/** Initialize a String object
* @param obj The String object to be initialized
*/
void oss_String_init (oss_String * obj) ;

/** Initialize a String object by copying another
* @param obj The String object to be initialized
* @param str An existing String object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_init_copy (oss_String * obj, const oss_String * str, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a String object from a null-terminated string
* @param obj The String object to be initialized
* @param psz A null-terminated string
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_init_psz (oss_String * obj, const char * psz, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a String object from the content of a buffer
* @param obj The String object to be initialized
* @param parrCh A buffer containing a sequence of ASCII characters
* @param len The number of significant ASCII characters in the above buffer
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_init_pch (oss_String * obj, const char * parrCh, oss_int32_t len, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a String object from an ASCII character repeated many times
* @param obj The String object to be initialized
* @param ch An ASCII character
* @param len Number of occurrences of the above character
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_init_ch (oss_String * obj, char ch, oss_int32_t len, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a String object from a ByteArray object
* @param obj The String object to be initialized
* @param arrBy A ByteArray object containing a sequence of UTF-8 bytes
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_init_ba (oss_String * obj, const oss_ByteArray * arrBy, oss_Allocator * allocator, oss_Status * status) ;

/** Deinitialize a String object
* @param obj The String object to be deinitialized
* @param allocator The Allocator object to be used in the function call
*/
void oss_String_term (oss_String * obj, oss_Allocator * allocator) ;

/** Set a String object to an empty string
* @param obj The String object to be cleared
*/
void oss_String_Clear (oss_String * obj) ;

/** Assign a String object from another
* @param obj The String object to be modified
* @param str An existing String object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Assign_copy (oss_String * obj, const oss_String * str, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a String object from a null-terminated string
* @param obj The String object to be modified
* @param psz A null-terminated ASCII string
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Assign_psz (oss_String * obj, const char * psz, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a String object from the content of a buffer
* @param obj The String object to be modified
* @param parrCh A buffer containing a sequence of ASCII characters
* @param len The number of significant ASCII characters in the buffer
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Assign_pch (oss_String * obj, const char * parrCh, oss_int32_t len, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a String object from a character repeated many times
* @param obj The String object to be modified
* @param ch An ASCII character
* @param len Number of occurrences of the above character
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Assign_ch (oss_String * obj, char ch, oss_int32_t len, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a String object from a ByteArray object
* @param obj The String object to be modified
* @param arrBy A ByteArray object containing a sequence of UTF-8 bytes
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Assign_ba (oss_String * obj, const oss_ByteArray * arrBy, oss_Allocator * allocator, oss_Status * status) ;

/** Append the content of a String object to this String object
* @param obj The String object to be modified
* @param str An existing String object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Append_u8 (oss_String * obj, const oss_String * str, oss_Allocator * allocator, oss_Status * status) ;

/** Append a string to this String object
* @param obj The String object to be modified
* @param psz A null-terminated ASCII string
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Append_psz (oss_String * obj, const char * psz, oss_Allocator * allocator, oss_Status * status) ;

/** Append a character to this String object
* @param obj The String object to be modified
* @param ch An ASCII character
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Append_ch (oss_String * obj, char ch, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this String object is equal to another
* @param obj A String object
* @param str A second String object
* @return Nonzero (true) if the two strings are equal
*/
oss_bool_t oss_String_IsEqualTo_u8 (const oss_String * obj, const oss_String * str) ;

/** Tell if this String object is equal to a given string
* @param obj A String object
* @param psz A null-terminated ASCII string
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if the two strings are equal
*/
oss_bool_t oss_String_IsEqualTo_psz (const oss_String * obj, const char * psz, oss_Status * status) ;

/** Return the ASCII character at a given position in a String object (the whole string must be ASCII)
* @param obj A String object
* @param loc The zero-based position of the character to be returned
* @param status The Status object to be possibly modified in case of error
* @return The ASCII character at the specified position in the string
*/
char oss_String_GetAt (const oss_String * obj, oss_int32_t loc, oss_Status * status) ;

/** Return the address of the first byte of a String object
* @param obj A String object
* @return The address of the first byte in the string
*/
const oss_uint8_t * oss_String_GetData (const oss_String * obj) ;

/** Return the number of bytes in a String object
* @param obj A String object
* @return The number of bytes in the string (for an ASCII string, this is also the number of ASCII characters)
*/
oss_int32_t oss_String_GetLength (const oss_String * obj) ;

/** Insert the content of a String object at the specified position in a String object
* @param obj The String object to be modified
* @param loc The zero-based position at which the characters are to be inserted
* @param str An existing String object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Insert_u8 (oss_String * obj, oss_int32_t loc, const oss_String * str, oss_Allocator * allocator, oss_Status * status) ;

/** Insert a string at the specified position in a String object
* @param obj The String object to be modified
* @param loc The zero-based position at which the characters are to be inserted
* @param psz A null-terminated ASCII string
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Insert_psz (oss_String * obj, oss_int32_t loc, const char * psz, oss_Allocator * allocator, oss_Status * status) ;

/** Insert an ASCII character at the specified position in a String object (the whole string must be ASCII)
* @param obj The String object to be modified
* @param loc The zero-based position at which the character is to be inserted
* @param ch An ASCII character
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Insert_ch (oss_String * obj, oss_int32_t loc, char ch, oss_Allocator * allocator, oss_Status * status) ;

/** Remove a given number of bytes from the specified position in a String object
* @param obj The String object to be modified
* @param locStart The zero-based position from which the bytes are to be removed
* @param numBytes The number of bytes to remove
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Remove_len (oss_String * obj, oss_int32_t locStart, oss_int32_t numBytes, oss_Status * status) ;

/** Remove all the bytes from the specified position to the end of the content in a String object
* @param obj The String object to be modified
* @param locStart The zero-based position from which the bytes are to be removed
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Remove (oss_String * obj, oss_int32_t locStart, oss_Status * status) ;

/** Remove all white space characters at the beginning of the content of a String object
* @param obj The String object to be modified
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_TrimLeft (oss_String * obj, oss_Status * status) ;

/** Remove all white space characters at the end of the content of a String object
* @param obj The String object to be modified
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_TrimRight (oss_String * obj, oss_Status * status) ;

/** Replace each occurrence of a given string with another string in a String object
* @param obj The String object to be modified
* @param strOld A String object specifying the string to be searched for
* @param strNew A String object specifying the string that is to replace each occurrence of the above string
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Replace_u8 (oss_String * obj, const oss_String * strOld, const oss_String * strNew, oss_Allocator * allocator, oss_Status * status) ;

/** Replace each occurrence of a given string with another string in a String object
* @param obj The String object to be modified
* @param pszOld A null-terminated string specifying the string to be searched for
* @param pszNew A null-terminated string specifying the string that is to replace each occurrence of the above string
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Replace_psz (oss_String * obj, const char * pszOld, const char * pszNew, oss_Allocator * allocator, oss_Status * status) ;

/** Return the substring of a given length from a specified position in a String object
* @param obj A String object
* @param pStr The address of a String object where the result is to be stored
* @param loc The zero-based position of the substring
* @param len The number of bytes of the substring
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Substr_len (const oss_String * obj, oss_String * pStr, oss_int32_t loc, oss_int32_t len, oss_Allocator * allocator, oss_Status * status) ;

/** Return the substring from a specified position to the end of the content in a String object
* @param obj A String object
* @param pStr The address of a String object where the result is to be stored
* @param loc The zero-based position of the substring
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Substr (const oss_String * obj, oss_String * pStr, oss_int32_t loc, oss_Allocator * allocator, oss_Status * status) ;

/** Return the position of the first occurrence of a given string after the specified position in a String object
* @param obj A String object
* @param str A String object containing the string to be searched for
* @param locStart The zero-based position from which the search is to begin
* @param status The Status object to be possibly modified in case of error
* @return The position of the first occurrence, or -1 if the specified string was not found
*/
oss_int32_t oss_String_IndexOf_u8_loc (const oss_String * obj, const oss_String * str, oss_int32_t locStart, oss_Status * status) ;

/** Return the position of the first occurrence of a given string in the content of a String object
* @param obj A String object
* @param str A String object containing the string to be searched for
* @param status The Status object to be possibly modified in case of error
* @return The position of the first occurrence, or -1 if the specified string was not found
*/
oss_int32_t oss_String_IndexOf_u8 (const oss_String * obj, const oss_String * str, oss_Status * status) ;

/** Return the position of the first occurrence of a given string after the specified position in a String object
* @param obj A String object
* @param psz A null-terminated string containing the ASCII string to be searched for
* @param locStart The zero-based position from which the search is to begin
* @param status The Status object to be possibly modified in case of error
* @return The position of the first occurrence, or -1 if the specified string was not found
*/
oss_int32_t oss_String_IndexOf_psz_loc (const oss_String * obj, const char * psz, oss_int32_t locStart, oss_Status * status) ;

/** Return the position of the first occurrence of a given string in a String object
* @param obj A String object
* @param psz A null-terminated string containing the ASCII string to be searched for
* @param status The Status object to be possibly modified in case of error
* @return The position of the first occurrence, or -1 if the specified string was not found
*/
oss_int32_t oss_String_IndexOf_psz (const oss_String * obj, const char * psz, oss_Status * status) ;

/** Return the position of the first occurrence of a given ASCII character after the specified position in a String object
* @param obj A String object
* @param ch The ASCII character to search for
* @param locStart The zero-based position from which the search is to begin
* @param status The Status object to be possibly modified in case of error
* @return The position of the first occurrence, or -1 if the specified character was not found
*/
oss_int32_t oss_String_IndexOf_ch_loc (const oss_String * obj, char ch, oss_int32_t locStart, oss_Status * status) ;

/** Return the position of the first occurrence of a given ASCII character in a String object
* @param obj A String object
* @param ch The ASCII character to search for
* @param status The Status object to be possibly modified in case of error
* @return The position of the first occurrence, or -1 if the specified character was not found
*/
oss_int32_t oss_String_IndexOf_ch (const oss_String * obj, char ch, oss_Status * status) ;

/** Return the position of the first occurrence of any one of the specified characters after the specified position in a String object
* @param obj A String object
* @param str A String object containing the individual characters to be searched for
* @param locStart The zero-based position from which the search is to begin
* @param status The Status object to be possibly modified in case of error
* @return The position of the first occurrence, or -1 if the specified characters were not found
*/
oss_int32_t oss_String_IndexOfAny_u8_loc (const oss_String * obj, const oss_String * str, oss_int32_t locStart, oss_Status * status) ;

/** Return the position of the first occurrence of any one of the specified characters in a String object
* @param obj A String object
* @param str A String object containing the individual characters to be searched for
* @param status The Status object to be possibly modified in case of error
* @return The position of the first occurrence, or -1 if the specified characters were not found
*/
oss_int32_t oss_String_IndexOfAny_u8 (const oss_String * obj, const oss_String * str, oss_Status * status) ;

/** Return the position of the first occurrence of a character other than the specified characters in a String object
* @param obj A String object
* @param str A String object containing the individual characters to be searched for
* @return The position of the first occurrence, or -1 if the specified characters were not found
*/
oss_int32_t oss_String_IndexOfAnyExcept (const oss_String * obj, const oss_String * str) ;

/** Return the position of the last occurrence of a given ASCII character in a String object
* @param obj A String object
* @param ch The ASCII character to search for
* @return The position of the last occurrence, or -1 if the specified character was not found
*/
oss_int32_t oss_String_LastIndexOf_ch (const oss_String * obj, char ch) ;

/** Return the position of the last occurrence of a character other than the specified characters in a String object
* @param obj A String object
* @param str A String object containing the individual characters to be searched for
* @return The position of the last occurrence, or -1 if the specified characters were not found
*/
oss_int32_t oss_String_LastIndexOfAnyExcept (const oss_String * obj, const oss_String * str) ;

/** Tell if a given string is present in a String object
* @param obj A String object
* @param str A String object containing the string to be searched for
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if the specified string is present
*/
oss_bool_t oss_String_Contains_u8 (const oss_String * obj, const oss_String * str, oss_Status * status) ;

/** Tell if a given string is present in a String object
* @param obj A String object
* @param psz A null-terminated string containing the ASCII string to be searched for
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if the specified string is present
*/
oss_bool_t oss_String_Contains_psz (const oss_String * obj, const char * psz, oss_Status * status) ;

/** Tell if the content of String object starts with a given string
* @param obj A String object
* @param str A String object containing the string to be searched for
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if the specified string is present at the start of the string
*/
oss_bool_t oss_String_StartsWith_u8 (const oss_String * obj, const oss_String * str, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if the content of String object starts with a given string
* @param obj A String object
* @param psz A null-terminated string containing the ASCII string to be searched for
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if the specified string is present at the start of the string
*/
oss_bool_t oss_String_StartsWith_psz (const oss_String * obj, const char * psz, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if the content of String object ends with a given string
* @param obj A String object
* @param str A String object containing the string to be searched for
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if the specified string is present at the end of the string
*/
oss_bool_t oss_String_EndsWith_u8 (const oss_String * obj, const oss_String * str, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if the content of String object ends with a given string
* @param obj A String object
* @param psz A null-terminated string containing the ASCII string to be searched for
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if the specified string is present at the end of the string
*/
oss_bool_t oss_String_EndsWith_psz (const oss_String * obj, const char * psz, oss_Allocator * allocator, oss_Status * status) ;

/** Ensure that the String object can hold a string of the specified number of bytes without further reallocation
* @param obj The String object to be modified
* @param numBytesMinimum The new capacity of the String object (minimum number of bytes
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Reserve (oss_String * obj, oss_int32_t numBytesMinimum, oss_Allocator * allocator, oss_Status * status) ;

/** Return the result of the comparison between two String objects
* @param str1 A String object containing the first string to be compared
* @param str2 A String object containing the second string to be compared
* @return A negative integer if less, zero if equal, a positive integer if greater
*/
oss_int32_t oss_String_Compare (const oss_String * str1, const oss_String * str2) ;

/** Validate a String object and issue an error if the content is invalid
* @param obj A String object
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_Validate (const oss_String * obj, oss_Status * status) ;

/** Validate a String object that is intended to contain only ASCII characters and issue an error if the content is invalid
* @param obj A String object
* @param status The Status object to be possibly modified in case of error
*/
void oss_String_ValidateAscii (const oss_String * obj, oss_Status * status) ;

/** Initialize a ByteArray object
* @param obj The ByteArray object to be initialized
*/
void oss_ByteArray_init (oss_ByteArray * obj) ;

/** Initialize a ByteArray object by copying another
* @param obj The ByteArray object to be initialized
* @param arrBy An existing ByteArray object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_ByteArray_init_copy (oss_ByteArray * obj, const oss_ByteArray * arrBy, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a ByteArray object of a given length (number of bytes)
* @param obj The ByteArray object to be initialized
* @param len The initial length
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_ByteArray_init_size (oss_ByteArray * obj, oss_int32_t len, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a ByteArray object from the content of a buffer
* @param obj The ByteArray object to be initialized
* @param parrBy A buffer containing the bytes to be copied
* @param len The number of significant bytes in the above buffer
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_ByteArray_init_pch (oss_ByteArray * obj, const oss_uint8_t * parrBy, oss_int32_t len, oss_Allocator * allocator, oss_Status * status) ;

/** Deinitialize a ByteArray object
* @param obj The ByteArray object to be deinitialized
* @param allocator The Allocator object to be used in the function call
*/
void oss_ByteArray_term (oss_ByteArray * obj, oss_Allocator * allocator) ;

/** Set a ByteArray object to an empty byte array
* @param obj The ByteArray object to be cleared
*/
void oss_ByteArray_Clear (oss_ByteArray * obj) ;

/** Assign a ByteArray object from another
* @param obj The ByteArray object to be modified
* @param arrBy An existing ByteArray object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_ByteArray_Assign_copy (oss_ByteArray * obj, const oss_ByteArray * arrBy, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a ByteArray object from the content of a buffer
* @param obj The ByteArray object to be modified
* @param parrBy A buffer containing the bytes to be copied
* @param len The number of significant bytes in the above buffer
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_ByteArray_Assign_pch (oss_ByteArray * obj, const oss_uint8_t * parrBy, oss_int32_t len, oss_Allocator * allocator, oss_Status * status) ;

/** Add a byte to the end of a ByteArray object
* @param obj The ByteArray object to be modified
* @param by A byte
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_ByteArray_Add (oss_ByteArray * obj, oss_uint8_t by, oss_Allocator * allocator, oss_Status * status) ;

/** Remove a byte from a given position in a ByteArray object
* @param obj The ByteArray object to be modified
* @param loc The zero-based position of the byte to be removed
* @param status The Status object to be possibly modified in case of error
*/
void oss_ByteArray_Remove (oss_ByteArray * obj, oss_int32_t loc, oss_Status * status) ;

/** Add all the bytes of another ByteArray object to the end of this ByteArray object
* @param obj The ByteArray object to be modified
* @param arrBy An existing ByteArray object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_ByteArray_Append (oss_ByteArray * obj, const oss_ByteArray * arrBy, oss_Allocator * allocator, oss_Status * status) ;

/** Modify the length (number of bytes) of a ByteArray object, setting any added bytes to zeros
* @param obj The ByteArray object to be modified
* @param numBytes The new length of the byte array (number of bytes
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_ByteArray_Resize (oss_ByteArray * obj, oss_int32_t numBytes, oss_Allocator * allocator, oss_Status * status) ;

/** Modify the number of bytes of a ByteArray object, leaving any added bytes uninitialized
* @param obj The ByteArray object to be modified
* @param numBytes The new length of the byte array (number of bytes
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_ByteArray_ResizeNoFill (oss_ByteArray * obj, oss_int32_t numBytes, oss_Allocator * allocator, oss_Status * status) ;

/** Ensure that the ByteArray object can hold the specified number of bytes without further reallocation
* @param obj The ByteArray object to be modified
* @param numBytesMinimum The new capacity of the byte array (minimum number of bytes
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_ByteArray_Reserve (oss_ByteArray * obj, oss_int32_t numBytesMinimum, oss_Allocator * allocator, oss_Status * status) ;

/** Reverse the order of the bytes in the ByteArray object
* @param obj The ByteArray object to be modified
*/
void oss_ByteArray_Reverse (oss_ByteArray * obj) ;

/** Set all the existing bytes in a ByteArray object to the given value without changing its length
* @param obj The ByteArray object to be modified
* @param by The new byte value
*/
void oss_ByteArray_Fill (oss_ByteArray * obj, oss_uint8_t by) ;

/** Set the byte at a given position in a ByteArray object to a given value
* @param obj The ByteArray object to be modified
* @param loc The zero-based position of the byte to be modified
* @param by The new byte value
* @param status The Status object to be possibly modified in case of error
*/
void oss_ByteArray_SetAt (oss_ByteArray * obj, oss_int32_t loc, oss_uint8_t by, oss_Status * status) ;

/** Return the byte at a given position in a ByteArray object
* @param obj A ByteArray object
* @param loc The zero-based position of the byte to be returned
* @param status The Status object to be possibly modified in case of error
* @return The byte at the specified position in the byte array
*/
oss_uint8_t oss_ByteArray_GetAt (const oss_ByteArray * obj, oss_int32_t loc, oss_Status * status) ;

/** Return the address of the first byte of a ByteArray object
* @param obj A ByteArray object
* @return The address of the first byte of the array
*/
const oss_uint8_t * oss_ByteArray_GetData (const oss_ByteArray * obj) ;

/** Return the address of the first byte (modifiable) of a ByteArray object
* @param obj A ByteArray object
* @return The address of the first byte of the array
*/
oss_uint8_t * oss_ByteArray_GetData_nc (oss_ByteArray * obj) ;

/** Return the number of bytes of a ByteArray object
* @param obj A ByteArray object
* @return The length (number of bytes)
*/
oss_int32_t oss_ByteArray_GetLength (const oss_ByteArray * obj) ;

/** Tell if this ByteArray object is equal to a given ByteArray object
* @param obj A ByteArray object
* @param arrBy A second ByteArray object
* @return Nonzero (true) if the two byte arrays are equal
*/
oss_bool_t oss_ByteArray_IsEqualTo_1 (const oss_ByteArray * obj, const oss_ByteArray * arrBy) ;

/** Tell if this ByteArray object is equal to the content of a buffer
* @param obj A ByteArray object
* @param parrBy A buffer containing the bytes to be compared against
* @param len The number of significant bytes in the above buffer
* @return Nonzero (true) if the two byte arrays are equal
*/
oss_bool_t oss_ByteArray_pch (const oss_ByteArray * obj, const oss_uint8_t * parrBy, oss_int32_t len) ;

/** Initialize an EncodingParameterSet object
* @param obj The EncodingParameterSet object to be initialized
*/
void oss_EncParams_init (oss_EncParams * obj) ;

/** Assign an EncodingParameterSet object from another
* @param obj The EncodingParameterSet object to be modified
* @param encodingparameterset An existing EncodingParameterSet object
*/
void oss_EncParams_Assign (oss_EncParams * obj, const oss_EncParams * encodingparameterset) ;

/** Set or clear the CanonicalEncoding parameter
* @param obj The EncodingParameterSet object to be modified
* @param b The setting of the CanonicalEncoding parameter
*/
void oss_EncParams_SetCanonical (oss_EncParams * obj, oss_bool_t b) ;

/** Set or clear the 'AlignedEncoding' parameter
* @param obj The EncodingParameterSet object to be modified
* @param b The setting of the AlignedEncoding parameter
*/
void oss_EncParams_SetAligned (oss_EncParams * obj, oss_bool_t b) ;

/** Set or clear the 'ReversibleEncoding' parameter
* @param obj The EncodingParameterSet object to be modified
* @param b The setting of the AlignedEncoding parameter
*/
void oss_EncParams_SetReversible (oss_EncParams * obj, oss_bool_t b) ;
void oss_EncParams_SetAllowBigIntegers (oss_EncParams * obj, oss_bool_t b) ;
void oss_EncParams_SetAllowBigOids (oss_EncParams * obj, oss_bool_t b) ;
void oss_EncParams_SetAllowBigReals (oss_EncParams * obj, oss_bool_t b) ;
void oss_EncParams_SetTesting1 (oss_EncParams * obj, oss_bool_t b) ;
void oss_EncParams_SetTesting2 (oss_EncParams * obj, oss_bool_t b) ;

/** Return the setting of the AlignedEncoding parameter
* @param obj An EncodingParameterSet object
* @return Nonzero (true) if AlignedEncoding is set
*/
oss_bool_t oss_EncParams_Aligned (const oss_EncParams * obj) ;

/** Return the setting of the CanonicalEncoding parameter
* @param obj An EncodingParameterSet object
* @return Nonzero (true) if CanonicalEncoding is set
*/
oss_bool_t oss_EncParams_Canonical (const oss_EncParams * obj) ;
oss_bool_t oss_EncParams_ReversibleEncoding (const oss_EncParams * obj) ;
oss_bool_t oss_EncParams_AllowBigIntegers (const oss_EncParams * obj) ;
oss_bool_t oss_EncParams_AllowBigOids (const oss_EncParams * obj) ;
oss_bool_t oss_EncParams_AllowBigReals (const oss_EncParams * obj) ;
oss_bool_t oss_EncParams_Testing1 (const oss_EncParams * obj) ;
oss_bool_t oss_EncParams_Testing2 (const oss_EncParams * obj) ;

/** Initialize an OutputStream object
* @param obj The OutputStream object to be initialized
*/
void oss_OutputStream_init (oss_OutputStream * obj) ;

/** Deinitialize an OutputStream object
* @param obj The OutputStream object to be deinitialized
* @param allocator The Allocator object to be used in the function call
*/
void oss_OutputStream_term (oss_OutputStream * obj, oss_Allocator * allocator) ;

/** Deinitialize an OutputStream object
* @param obj The OutputStream object to be deinitialized
* @param allocator The Allocator object to be used in the function call
*/
void oss_OutputStream_term_disp (oss_OutputStream * obj, oss_Allocator * allocator) ;

/** Delete the content of an OutputStream object and reset the writing position
* @param obj The OutputStream object to be reset
*/
void oss_OutputStream_Reset (oss_OutputStream * obj) ;

/** Ensure that the OutputStream object can hold the specified number of bytes without further reallocation
* @param obj The OutputStream object to be modified
* @param numBytesMinimum The new capacity of the array (minimum number of bytes
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_OutputStream_Reserve (oss_OutputStream * obj, oss_int32_t numBytesMinimum, oss_Allocator * allocator, oss_Status * status) ;

/** Return the address of the first byte of the content of an OutputStream object
* @param obj An OutputStream object
* @return The address of the first byte in the stream
*/
const oss_uint8_t * oss_OutputStream_GetData (const oss_OutputStream * obj) ;

/** Return the number of bytes of the content of an OutputStream object
* @param obj An OutputStream object
* @return The number of bytes written to the stream until now
*/
oss_int32_t oss_OutputStream_GetLength (const oss_OutputStream * obj) ;

/** Truncate the content of an OutputStream object to the specified length and set the writing position after the last byte
* @param obj The OutputStream object to be modified
* @param loc The new writing position, which is also the new number of bytes in the output stream
* @param status The Status object to be possibly modified in case of error
*/
void oss_OutputStream_Truncate (oss_OutputStream * obj, oss_int32_t loc, oss_Status * status) ;

/** Copy the content of an OutputStream object to a ByteArray object
* @param obj An OutputStream object
* @param pArrBy A ByteArray object where the content of the output stream is to be copied
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_OutputStream_CopyTo_ba (const oss_OutputStream * obj, oss_ByteArray * pArrBy, oss_Allocator * allocator, oss_Status * status) ;

/** Copy the content of an OutputStream object to a buffer
* @param obj An OutputStream object
* @param parrBy A buffer where the content of the output stream is to be copied
* @param sizeDest The size of the buffer, that is the maximum number of bytes that can be copied to it
* @param status The Status object to be possibly modified in case of error
*/
void oss_OutputStream_CopyTo_pch (const oss_OutputStream * obj, oss_uint8_t * parrBy, oss_int32_t sizeDest, oss_Status * status) ;

/** Initialize a StringArray object
* @param obj The StringArray object to be initialized
*/
void oss_StringArray_init (oss_StringArray * obj) ;

/** Initialize a StringArray object by copying another
* @param obj The StringArray object to be initialized
* @param arrT An existing StringArray object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_StringArray_init_copy (oss_StringArray * obj, const oss_StringArray * arrT, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a StringArray object of a given number of items
* @param obj The StringArray object to be initialized
* @param numItems The initial number of items
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_StringArray_init_size (oss_StringArray * obj, oss_int32_t numItems, oss_Allocator * allocator, oss_Status * status) ;

/** Deinitialize a StringArray object
* @param obj The StringArray object to be deinitialized
* @param allocator The Allocator object to be used in the function call
*/
void oss_StringArray_term (oss_StringArray * obj, oss_Allocator * allocator) ;

/** Set a StringArray object to an empty array
* @param obj The StringArray object to be cleared
* @param allocator The Allocator object to be used in the function call
*/
void oss_StringArray_Clear (oss_StringArray * obj, oss_Allocator * allocator) ;

/** Assign a StringArray object from another
* @param obj The StringArray object to be modified
* @param arrT An existing StringArray object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_StringArray_Assign_copy (oss_StringArray * obj, const oss_StringArray * arrT, oss_Allocator * allocator, oss_Status * status) ;

/** Add an item to the end of a StringArray object
* @param obj The StringArray object to be modified
* @param t A String object to be added to the array
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_StringArray_Add_u8 (oss_StringArray * obj, const oss_String * t, oss_Allocator * allocator, oss_Status * status) ;

/** Add an item to the end of a StringArray object
* @param obj The StringArray object to be modified
* @param psz A null-terminated string from which a String is to be created and added to the array
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_StringArray_Add_psz (oss_StringArray * obj, const char * psz, oss_Allocator * allocator, oss_Status * status) ;

/** Remove the item at a given position in a StringArray object
* @param obj The StringArray object to be modified
* @param loc The zero-based position of the item to be removed
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_StringArray_Remove (oss_StringArray * obj, oss_int32_t loc, oss_Allocator * allocator, oss_Status * status) ;

/** Modify the number of items of a StringArray object
* @param obj The StringArray object to be modified
* @param numItems The new number of items of the array
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_StringArray_Resize (oss_StringArray * obj, oss_int32_t numItems, oss_Allocator * allocator, oss_Status * status) ;

/** Set the item at a given position in a StringArray object to a given value (a String object)
* @param obj The StringArray object to be modified
* @param loc The zero-based position of the item to be modified
* @param t A String object containing the new value of the item
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_StringArray_SetAt_u8 (oss_StringArray * obj, oss_int32_t loc, const oss_String * t, oss_Allocator * allocator, oss_Status * status) ;

/** Return the item at a given position in a StringArray object
* @param obj A StringArray object
* @param loc The zero-based position of the item to be returned
* @param status The Status object to be possibly modified in case of error
* @return The String object at the specified position in the array
*/
const oss_String * oss_StringArray_GetAt (const oss_StringArray * obj, oss_int32_t loc, oss_Status * status) ;

/** Return the number of items in a StringArray object
* @param obj A StringArray object
* @return The number of items
*/
oss_int32_t oss_StringArray_GetCount (const oss_StringArray * obj) ;

/** Initialize an Int32Array object
* @param obj The Int32Array object to be initialized
*/
void oss_Int32Array_init (oss_Int32Array * obj) ;

/** Initialize an Int32Array object by copying another
* @param obj The Int32Array object to be initialized
* @param arrT An existing Int32Array object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Int32Array_init_copy (oss_Int32Array * obj, const oss_Int32Array * arrT, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize an Int32Array object of a given number of items
* @param obj The Int32Array object to be initialized
* @param numItems The initial number of items
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Int32Array_init_size (oss_Int32Array * obj, oss_int32_t numItems, oss_Allocator * allocator, oss_Status * status) ;

/** Deinitialize an Int32Array object
* @param obj The Int32Array object to be deinitialized
* @param allocator The Allocator object to be used in the function call
*/
void oss_Int32Array_term (oss_Int32Array * obj, oss_Allocator * allocator) ;

/** Set an Int32Array object to an empty array
* @param obj The Int32Array object to be cleared
*/
void oss_Int32Array_Clear (oss_Int32Array * obj) ;

/** Assign an Int32Array object from another
* @param obj The Int32Array object to be modified
* @param arrT An existing Int32Array object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Int32Array_Assign_copy (oss_Int32Array * obj, const oss_Int32Array * arrT, oss_Allocator * allocator, oss_Status * status) ;

/** Add an item to the end of an Int32Array object
* @param obj The Int32Array object to be modified
* @param t The integer value to be added to the array
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Int32Array_Add (oss_Int32Array * obj, oss_int32_t t, oss_Allocator * allocator, oss_Status * status) ;

/** Remove the item at a given position in an Int32Array object
* @param obj The Int32Array object to be modified
* @param loc The zero-based position of the item to be removed
* @param status The Status object to be possibly modified in case of error
*/
void oss_Int32Array_Remove (oss_Int32Array * obj, oss_int32_t loc, oss_Status * status) ;

/** Modify the number of items of an Int32Array object
* @param obj The Int32Array object to be modified
* @param numItems The new number of items of the array
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Int32Array_Resize (oss_Int32Array * obj, oss_int32_t numItems, oss_Allocator * allocator, oss_Status * status) ;

/** Ensure that the Int32Array object can hold the specified number of items without further reallocation
* @param obj The Int32Array object to be modified
* @param numItemsMinimum The new capacity of the array (minimum number of items
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Int32Array_Reserve (oss_Int32Array * obj, oss_int32_t numItemsMinimum, oss_Allocator * allocator, oss_Status * status) ;

/** Set the item at a given position in an Int32Array object to a given value
* @param obj The Int32Array object to be modified
* @param loc The zero-based position of the item to be modified
* @param t The new integer value
* @param status The Status object to be possibly modified in case of error
*/
void oss_Int32Array_SetAt (oss_Int32Array * obj, oss_int32_t loc, oss_int32_t t, oss_Status * status) ;

/** Return the item at a given position in an Int32Array object
* @param obj An Int32Array object
* @param loc The zero-based position of the item to be returned
* @param status The Status object to be possibly modified in case of error
* @return The item at the specified position in the array
*/
oss_int32_t oss_Int32Array_GetAt (const oss_Int32Array * obj, oss_int32_t loc, oss_Status * status) ;

/** Return the number of items in an Int32Array object
* @param obj An Int32Array object
* @return The number of items
*/
oss_int32_t oss_Int32Array_GetCount (const oss_Int32Array * obj) ;

/** Return the address of the first item of an Int32Array object
* @param obj An Int32Array object
* @return The address of the first item of the array
*/
const oss_int32_t * oss_Int32Array_GetData (const oss_Int32Array * obj) ;

/** Return the address of the first item (modifiable) of an Int32Array object
* @param obj An Int32Array object
* @return The address of the first item of the array
*/
oss_int32_t * oss_Int32Array_GetData_nc (oss_Int32Array * obj) ;

/** Tell if this Int32Array object is equal to a given Int32Array object
* @param obj An Int32Array object
* @param arrT A second Int32Array object
* @return Nonzero (true) if the two arrays are equal
*/
oss_bool_t oss_Int32Array_IsEqualTo (const oss_Int32Array * obj, const oss_Int32Array * arrT) ;

/** Initialize a Uint32Array object
* @param obj The Uint32Array object to be initialized
*/
void oss_Uint32Array_init (oss_Uint32Array * obj) ;

/** Initialize a Uint32Array object by copying another
* @param obj The Uint32Array object to be initialized
* @param arrT An existing Uint32Array object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Uint32Array_init_copy (oss_Uint32Array * obj, const oss_Uint32Array * arrT, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a Uint32Array object of a given number of items
* @param obj The Uint32Array object to be initialized
* @param numItems The initial number of items
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Uint32Array_init_size (oss_Uint32Array * obj, oss_int32_t numItems, oss_Allocator * allocator, oss_Status * status) ;

/** Add an item to the end of a Uint32Array object
* @param obj The Uint32Array object to be initialized
* @param t The integer value to be added to the array
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Uint32Array_Add (oss_Uint32Array * obj, oss_uint32_t t, oss_Allocator * allocator, oss_Status * status) ;

/** Set the item at a given position in a Uint32Array object to a given value
* @param obj The Uint32Array object to be initialized
* @param loc The zero-based position of the item to be modified
* @param t The new integer value
* @param status The Status object to be possibly modified in case of error
*/
void oss_Uint32Array_SetAt (oss_Uint32Array * obj, oss_int32_t loc, oss_uint32_t t, oss_Status * status) ;

/** Return the item at a given position in a Uint32Array object
* @param obj A Uint32Array object
* @param loc The zero-based position of the item to be returned
* @param status The Status object to be possibly modified in case of error
* @return The item at the specified position in the array
*/
oss_uint32_t oss_Uint32Array_GetAt (const oss_Uint32Array * obj, oss_int32_t loc, oss_Status * status) ;

/** Return the number of items of a Uint32Array object
* @param obj A Uint32Array object
* @return The number of items
*/
oss_int32_t oss_Uint32Array_GetCount (const oss_Uint32Array * obj) ;

/** Initialize an Int64Array object
* @param obj The Int64Array object to be initialized
*/
void oss_Int64Array_init (oss_Int64Array * obj) ;

/** Initialize an Int64Array object by copying another
* @param obj The Int64Array object to be initialized
* @param arrT An existing Int64Array object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Int64Array_init_copy (oss_Int64Array * obj, const oss_Int64Array * arrT, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize an Int64Array object of a given number of items
* @param obj The Int64Array object to be initialized
* @param numItems The initial number of items
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Int64Array_init_size (oss_Int64Array * obj, oss_int32_t numItems, oss_Allocator * allocator, oss_Status * status) ;

/** Deinitialize an Int64Array object
* @param obj The Int64Array object to be deinitialized
* @param allocator The Allocator object to be used in the function call
*/
void oss_Int64Array_term (oss_Int64Array * obj, oss_Allocator * allocator) ;

/** Set an Int64Array object to an empty array
* @param obj The Int64Array object to be cleared
*/
void oss_Int64Array_Clear (oss_Int64Array * obj) ;

/** Assign an Int64Array object from another
* @param obj The Int64Array object to be modified
* @param arrT An existing Int64Array object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Int64Array_Assign_copy (oss_Int64Array * obj, const oss_Int64Array * arrT, oss_Allocator * allocator, oss_Status * status) ;

/** Add an item to the end of an Int64Array object
* @param obj The Int64Array object to be modified
* @param t The integer value to be added to the array
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Int64Array_Add (oss_Int64Array * obj, oss_int64_t t, oss_Allocator * allocator, oss_Status * status) ;

/** Remove the item at a given position in an Int64Array object
* @param obj The Int64Array object to be modified
* @param loc The zero-based position of the item to be removed
* @param status The Status object to be possibly modified in case of error
*/
void oss_Int64Array_Remove (oss_Int64Array * obj, oss_int32_t loc, oss_Status * status) ;

/** Modify the number of items of an Int64Array object
* @param obj The Int64Array object to be modified
* @param numItems The new number of items of the array
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Int64Array_Resize (oss_Int64Array * obj, oss_int32_t numItems, oss_Allocator * allocator, oss_Status * status) ;

/** Ensure that the Int64Array object can hold the specified number of items without further reallocation
* @param obj The Int64Array object to be modified
* @param numItemsMinimum The new capacity of the array (minimum number of items
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Int64Array_Reserve (oss_Int64Array * obj, oss_int32_t numItemsMinimum, oss_Allocator * allocator, oss_Status * status) ;

/** Set the item at a given position in an Int64Array object to a given value
* @param obj The Int64Array object to be modified
* @param loc The zero-based position of the item to be modified
* @param t The new integer value
* @param status The Status object to be possibly modified in case of error
*/
void oss_Int64Array_SetAt (oss_Int64Array * obj, oss_int32_t loc, oss_int64_t t, oss_Status * status) ;

/** Return the item at a given position in an Int64Array object
* @param obj An Int64Array object
* @param loc The zero-based position of the item to be returned
* @param status The Status object to be possibly modified in case of error
* @return The item at the specified position in the array
*/
oss_int64_t oss_Int64Array_GetAt (const oss_Int64Array * obj, oss_int32_t loc, oss_Status * status) ;

/** Return the number of items in an Int64Array object
* @param obj An Int64Array object
* @return The number of items
*/
oss_int32_t oss_Int64Array_GetCount (const oss_Int64Array * obj) ;

/** Return the address of the first item of an Int64Array object
* @param obj An Int64Array object
* @return The address of the first item of the array
*/
const oss_int64_t * oss_Int64Array_GetData (const oss_Int64Array * obj) ;

/** Tell if this Int64Array object is equal to a given Int64Array object
* @param obj An Int64Array object
* @param arrT A second Int64Array object
* @return Nonzero (true) if the two arrays are equal
*/
oss_bool_t oss_Int64Array_IsEqualTo (const oss_Int64Array * obj, const oss_Int64Array * arrT) ;

/** Initialize a Uint64Array object
* @param obj The Uint64Array object to be initialized
*/
void oss_Uint64Array_init (oss_Uint64Array * obj) ;

/** Initialize a Uint64Array object by copying another
* @param obj The Uint64Array object to be initialized
* @param arrT An existing Uint64Array object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Uint64Array_init_copy (oss_Uint64Array * obj, const oss_Uint64Array * arrT, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a Uint64Array object of a given number of items
* @param obj The Uint64Array object to be initialized
* @param numItems The initial number of items
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Uint64Array_init_size (oss_Uint64Array * obj, oss_int32_t numItems, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a Uint64Array object from a string
* @param obj The Uint64Array object to be initialized
* @param psz A null-terminated string containing nonnegative integers separated by dots
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Uint64Array_init_psz (oss_Uint64Array * obj, const char * psz, oss_Allocator * allocator, oss_Status * status) ;

/** Deinitialize a Uint64Array object
* @param obj The Uint64Array object to be deinitialized
* @param allocator The Allocator object to be used in the function call
*/
void oss_Uint64Array_term (oss_Uint64Array * obj, oss_Allocator * allocator) ;

/** Add an item to the end of a Uint64Array object
* @param obj The Uint64Array object to be modified
* @param t The integer value to be added to the array
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_Uint64Array_Add (oss_Uint64Array * obj, oss_uint64_t t, oss_Allocator * allocator, oss_Status * status) ;

/** Set the item at a given position in a Uint64Array object to a given value
* @param obj The Uint64Array object to be modified
* @param loc The zero-based position of the item to be modified
* @param t The new integer value
* @param status The Status object to be possibly modified in case of error
*/
void oss_Uint64Array_SetAt (oss_Uint64Array * obj, oss_int32_t loc, oss_uint64_t t, oss_Status * status) ;

/** Return the item at a given position in a Uint64Array object
* @param obj A Uint64Array object
* @param loc The zero-based position of the item to be returned
* @param status The Status object to be possibly modified in case of error
* @return The item at the specified position in the array
*/
oss_uint64_t oss_Uint64Array_GetAt (const oss_Uint64Array * obj, oss_int32_t loc, oss_Status * status) ;

/** Return the number of items of a Uint64Array object
* @param obj A Uint64Array object
* @return The number of items
*/
oss_int32_t oss_Uint64Array_GetCount (const oss_Uint64Array * obj) ;

/** Return the address of the first item of an Uint64Array object
* @param obj A Uint64Array object
* @return The address of the first item of the array
*/
const oss_uint64_t * oss_Uint64Array_GetData (const oss_Uint64Array * obj) ;

/** Tell if this Uint64Array object is equal to a given Uint64Array object
* @param obj A Uint64Array object
* @param arrT A second Uint64Array object
* @return Nonzero (true) if the two arrays are equal
*/
oss_bool_t oss_Uint64Array_IsEqualTo (const oss_Uint64Array * obj, const oss_Uint64Array * arrT) ;

/** Tell if this Uint64Array object is equal to a given integer array specified as a string
* @param obj A Uint64Array object
* @param psz A null-terminated string containing nonnegative integers separated by dots
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if the two arrays are equal
*/
oss_bool_t oss_Uint64Array_IsEqualTo_psz (const oss_Uint64Array * obj, const char * psz, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BigInteger object
* @param obj The BigInteger object to be initialized
*/
void oss_BigInteger_init (oss_BigInteger * obj) ;

/** Initialize a BigInteger object by copying another
* @param obj The BigInteger object to be initialized
* @param n An existing BigInteger object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_init_copy (oss_BigInteger * obj, const oss_BigInteger * n, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BigInteger object from a 64-bit unsigned integer
* @param obj The BigInteger object to be initialized
* @param ui A 64-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_init_ui64 (oss_BigInteger * obj, oss_uint64_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BigInteger object from a 64-bit signed integer
* @param obj The BigInteger object to be initialized
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_init_i64 (oss_BigInteger * obj, oss_int64_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BigInteger object from a 32-bit unsigned integer
* @param obj The BigInteger object to be initialized
* @param ui A 32-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_init_ui32 (oss_BigInteger * obj, oss_uint32_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BigInteger object from a 32-bit signed integer
* @param obj The BigInteger object to be initialized
* @param i A 32-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_init_i32 (oss_BigInteger * obj, oss_int32_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BigInteger object from a 16-bit unsigned integer
* @param obj The BigInteger object to be initialized
* @param ui A 16-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_init_ui16 (oss_BigInteger * obj, oss_uint16_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BigInteger object from a 16-bit signed integer
* @param obj The BigInteger object to be initialized
* @param i A 16-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_init_i16 (oss_BigInteger * obj, oss_int16_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BigInteger object from an 8-bit unsigned integer
* @param obj The BigInteger object to be initialized
* @param ui An 8-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_init_ui8 (oss_BigInteger * obj, oss_uint8_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BigInteger object from an 8-bit signed integer
* @param obj The BigInteger object to be initialized
* @param i An 8-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_init_i8 (oss_BigInteger * obj, oss_int8_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BigInteger object from a floating point value without a fractional part
* @param obj The BigInteger object to be initialized
* @param d A double
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_init_d (oss_BigInteger * obj, oss_float64_t d, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BigInteger object from a string
* @param obj The BigInteger object to be initialized
* @param psz A null-terminated string to be converted to an integer
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_init_psz (oss_BigInteger * obj, const char * psz, oss_Allocator * allocator, oss_Status * status) ;

/** Deinitialize a BigInteger object
* @param obj The BigInteger object to be deinitialized
* @param allocator The Allocator object to be used in the function call
*/
void oss_BigInteger_term (oss_BigInteger * obj, oss_Allocator * allocator) ;

/** Set a BigInteger object to zero
* @param obj The BigInteger object to be cleared
*/
void oss_BigInteger_Clear (oss_BigInteger * obj) ;

/** Assign a BigInteger object from another
* @param obj The BigInteger object to be modified
* @param n An existing BigInteger object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Assign_copy (oss_BigInteger * obj, const oss_BigInteger * n, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a BigInteger object from a 64-bit unsigned integer
* @param obj The BigInteger object to be modified
* @param ui A 64-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Assign_ui64 (oss_BigInteger * obj, oss_uint64_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a BigInteger object from a 64-bit signed integer
* @param obj The BigInteger object to be modified
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Assign_i64 (oss_BigInteger * obj, oss_int64_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a BigInteger object from a 32-bit unsigned integer
* @param obj The BigInteger object to be modified
* @param ui A 32-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Assign_ui32 (oss_BigInteger * obj, oss_uint32_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a BigInteger object from a 32-bit signed integer
* @param obj The BigInteger object to be modified
* @param i A 32-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Assign_i32 (oss_BigInteger * obj, oss_int32_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a BigInteger object from a 16-bit unsigned integer
* @param obj The BigInteger object to be modified
* @param ui A 16-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Assign_ui16 (oss_BigInteger * obj, oss_uint16_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a BigInteger object from a 16-bit signed integer
* @param obj The BigInteger object to be modified
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Assign_i16 (oss_BigInteger * obj, oss_int16_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a BigInteger object from a 8-bit unsigned integer
* @param obj The BigInteger object to be modified
* @param ui An 8-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Assign_ui8 (oss_BigInteger * obj, oss_uint8_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a BigInteger object from an 8-bit signed integer
* @param obj The BigInteger object to be modified
* @param i An 8-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Assign_i8 (oss_BigInteger * obj, oss_int8_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a BigInteger object from a floating point number without a fractional part
* @param obj The BigInteger object to be modified
* @param d A double
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Assign_d (oss_BigInteger * obj, oss_float64_t d, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a BigInteger object from a string
* @param obj The BigInteger object to be modified
* @param psz A null-terminated string to be converted to an integer
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Assign_psz (oss_BigInteger * obj, const char * psz, oss_Allocator * allocator, oss_Status * status) ;

/** Convert a BigInteger object to a 64-bit unsigned integer
* @param obj A BigInteger object
* @param status The Status object to be possibly modified in case of error
* @return The value of the BigInteger object as a 64-bit unsigned integer
*/
oss_uint64_t oss_BigInteger_ToUint64 (const oss_BigInteger * obj, oss_Status * status) ;

/** Convert a BigInteger object to a 64-bit signed integer
* @param obj A BigInteger object
* @param status The Status object to be possibly modified in case of error
* @return The value of the BigInteger object as a 64-bit signed integer
*/
oss_int64_t oss_BigInteger_ToInt64 (const oss_BigInteger * obj, oss_Status * status) ;

/** Convert a BigInteger object to a 32-bit unsigned integer
* @param obj A BigInteger object
* @param status The Status object to be possibly modified in case of error
* @return The value of the BigInteger object as a 32-bit unsigned integer
*/
oss_uint32_t oss_BigInteger_ToUint32 (const oss_BigInteger * obj, oss_Status * status) ;

/** Convert a BigInteger object to a 32-bit signed integer
* @param obj A BigInteger object
* @param status The Status object to be possibly modified in case of error
* @return The value of the BigInteger object as a 32-bit signed integer
*/
oss_int32_t oss_BigInteger_ToInt32 (const oss_BigInteger * obj, oss_Status * status) ;

/** Convert a BigInteger object to a 16-bit unsigned integer
* @param obj A BigInteger object
* @param status The Status object to be possibly modified in case of error
* @return The value of the BigInteger object as a 16-bit unsigned integer
*/
oss_uint16_t oss_BigInteger_ToUint16 (const oss_BigInteger * obj, oss_Status * status) ;

/** Convert a BigInteger object to a 16-bit signed integer
* @param obj A BigInteger object
* @param status The Status object to be possibly modified in case of error
* @return The value of the BigInteger object as a 16-bit signed integer
*/
oss_int16_t oss_BigInteger_ToInt16 (const oss_BigInteger * obj, oss_Status * status) ;

/** Convert a BigInteger object to an 8-bit unsigned integer
* @param obj A BigInteger object
* @param status The Status object to be possibly modified in case of error
* @return The value of the BigInteger object as an 8-bit unsigned integer
*/
oss_uint8_t oss_BigInteger_ToUint8 (const oss_BigInteger * obj, oss_Status * status) ;

/** Convert a BigInteger object to a 8-bit signed integer
* @param obj A BigInteger object
* @param status The Status object to be possibly modified in case of error
* @return The value of the BigInteger object as an 8-bit signed integer
*/
oss_int8_t oss_BigInteger_ToInt8 (const oss_BigInteger * obj, oss_Status * status) ;

/** Convert a BigInteger object to a floating point number
* @param obj A BigInteger object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return The value of the BigInteger object as a double
*/
oss_float64_t oss_BigInteger_ToBinary64 (const oss_BigInteger * obj, oss_Allocator * allocator, oss_Status * status) ;

/** Change the sign of the BigInteger object
* @param obj The BigInteger object to be modified
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_ChangeSign (oss_BigInteger * obj, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with its absolute value
* @param obj The BigInteger object to be modified
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Absolute (oss_BigInteger * obj, oss_Allocator * allocator, oss_Status * status) ;

/** Add another BigInteger object to this BigInteger object
* @param obj The BigInteger object to be modified
* @param n A second BigInteger object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Add_bi (oss_BigInteger * obj, const oss_BigInteger * n, oss_Allocator * allocator, oss_Status * status) ;

/** Add a 64-bit unsigned integer to this BigInteger object
* @param obj The BigInteger object to be modified
* @param ui A 64-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Add_ui64 (oss_BigInteger * obj, oss_uint64_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Add a 64-bit signed integer to this BigInteger object
* @param obj The BigInteger object to be modified
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Add_i64 (oss_BigInteger * obj, oss_int64_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Add a 32-bit unsigned integer to this BigInteger object
* @param obj The BigInteger object to be modified
* @param ui A 32-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Add_ui32 (oss_BigInteger * obj, oss_uint32_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Add a 32-bit signed integer to this BigInteger object
* @param obj The BigInteger object to be modified
* @param i A 32-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Add_i32 (oss_BigInteger * obj, oss_int32_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Subtract another BigInteger object from this BigInteger object
* @param obj The BigInteger object to be modified
* @param n A second BigInteger object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Subtract_bi (oss_BigInteger * obj, const oss_BigInteger * n, oss_Allocator * allocator, oss_Status * status) ;

/** Subtract a 64-bit unsigned integer from this BigInteger object
* @param obj The BigInteger object to be modified
* @param ui A 64-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Subtract_ui64 (oss_BigInteger * obj, oss_uint64_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Subtract a 64-bit signed integer from this BigInteger object
* @param obj The BigInteger object to be modified
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Subtract_i64 (oss_BigInteger * obj, oss_int64_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Subtract a 32-bit unsigned integer from this BigInteger object
* @param obj The BigInteger object to be modified
* @param ui A 32-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Subtract_ui32 (oss_BigInteger * obj, oss_uint32_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Subtract a 32-bit signed integer from this BigInteger object
* @param obj The BigInteger object to be modified
* @param i A 32-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Subtract_i32 (oss_BigInteger * obj, oss_int32_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Multiply this BigInteger object by another BigInteger object
* @param obj The BigInteger object to be modified
* @param n A second BigInteger object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_MultiplyBy_bi (oss_BigInteger * obj, const oss_BigInteger * n, oss_Allocator * allocator, oss_Status * status) ;

/** Multiply this BigInteger object by a 64-bit unsigned integer
* @param obj The BigInteger object to be modified
* @param ui A 64-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_MultiplyBy_ui64 (oss_BigInteger * obj, oss_uint64_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Multiply this BigInteger object by a 64-bit signed integer
* @param obj The BigInteger object to be modified
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_MultiplyBy_i64 (oss_BigInteger * obj, oss_int64_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Multiply this BigInteger object by a 32-bit unsigned integer
* @param obj The BigInteger object to be modified
* @param ui A 32-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_MultiplyBy_ui32 (oss_BigInteger * obj, oss_uint32_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Multiply this BigInteger object by a 32-bit signed integer
* @param obj The BigInteger object to be modified
* @param i A 32-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_MultiplyBy_i32 (oss_BigInteger * obj, oss_int32_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Divide this BigInteger object by another BigInteger object
* @param obj The BigInteger object to be modified
* @param n A second BigInteger object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_DivideBy_bi (oss_BigInteger * obj, const oss_BigInteger * n, oss_Allocator * allocator, oss_Status * status) ;

/** Divide this BigInteger object by a 64-bit unsigned integer
* @param obj The BigInteger object to be modified
* @param ui A 64-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_DivideBy_ui64 (oss_BigInteger * obj, oss_uint64_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Divide this BigInteger object by a 64-bit signed integer
* @param obj The BigInteger object to be modified
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_DivideBy_i64 (oss_BigInteger * obj, oss_int64_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Divide this BigInteger object by a 32-bit unsigned integer
* @param obj The BigInteger object to be modified
* @param ui A 32-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_DivideBy_ui32 (oss_BigInteger * obj, oss_uint32_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Divide this BigInteger object by a 32-bit signed integer
* @param obj The BigInteger object to be modified
* @param i A 32-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_DivideBy_i32 (oss_BigInteger * obj, oss_int32_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the remainder of its division by another BigInteger object
* @param obj The BigInteger object to be modified
* @param n A second BigInteger object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Remainder_bi (oss_BigInteger * obj, const oss_BigInteger * n, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the remainder of its division by a 64-bit unsigned integer
* @param obj The BigInteger object to be modified
* @param ui A 64-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Remainder_ui64 (oss_BigInteger * obj, oss_uint64_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the remainder of its division by a 64-bit signed integer
* @param obj The BigInteger object to be modified
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Remainder_i64 (oss_BigInteger * obj, oss_int64_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the remainder of its division by a 32-bit unsigned integer
* @param obj The BigInteger object to be modified
* @param ui A 32-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Remainder_ui32 (oss_BigInteger * obj, oss_uint32_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the remainder of its division by a 32-bit signed integer
* @param obj The BigInteger object to be modified
* @param i A 32-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Remainder_i32 (oss_BigInteger * obj, oss_int32_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with its bitwise NOT
* @param obj The BigInteger object to be modified
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Not (oss_BigInteger * obj, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the result of its bitwise OR with another BigInteger object
* @param obj The BigInteger object to be modified
* @param n A second BigInteger object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Or_bi (oss_BigInteger * obj, const oss_BigInteger * n, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the result of its bitwise OR with a 64-bit unsigned integer
* @param obj The BigInteger object to be modified
* @param ui A 64-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Or_ui64 (oss_BigInteger * obj, oss_uint64_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the result of its bitwise OR with a 64-bit signed integer
* @param obj The BigInteger object to be modified
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Or_i64 (oss_BigInteger * obj, oss_int64_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the result of its bitwise OR with a 32-bit unsigned integer
* @param obj The BigInteger object to be modified
* @param ui A 32-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Or_ui32 (oss_BigInteger * obj, oss_uint32_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the result of its bitwise OR with a 32-bit signed integer
* @param obj The BigInteger object to be modified
* @param i A 32-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Or_i32 (oss_BigInteger * obj, oss_int32_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the result of its bitwise AND with another BigInteger object
* @param obj The BigInteger object to be modified
* @param n A second BigInteger object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_And_bi (oss_BigInteger * obj, const oss_BigInteger * n, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the result of its bitwise AND with a 64-bit unsigned integer
* @param obj The BigInteger object to be modified
* @param ui A 64-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_And_ui64 (oss_BigInteger * obj, oss_uint64_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the result of its bitwise AND with a 64-bit signed integer
* @param obj The BigInteger object to be modified
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_And_i64 (oss_BigInteger * obj, oss_int64_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the result of its bitwise AND with a 32-bit unsigned integer
* @param obj The BigInteger object to be modified
* @param ui A 32-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_And_ui32 (oss_BigInteger * obj, oss_uint32_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the result of its bitwise AND with a 32-bit signed integer
* @param obj The BigInteger object to be modified
* @param i A 32-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_And_i32 (oss_BigInteger * obj, oss_int32_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the result of its bitwise XOR with another BigInteger object
* @param obj The BigInteger object to be modified
* @param n A second BigInteger object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Xor_bi (oss_BigInteger * obj, const oss_BigInteger * n, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the result of its bitwise XOR with a 64-bit unsigned integer
* @param obj The BigInteger object to be modified
* @param ui A 64-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Xor_ui64 (oss_BigInteger * obj, oss_uint64_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the result of its bitwise XOR with a 64-bit signed integer
* @param obj The BigInteger object to be modified
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Xor_i64 (oss_BigInteger * obj, oss_int64_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the result of its bitwise XOR with a 32-bit unsigned integer
* @param obj The BigInteger object to be modified
* @param ui A 32-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Xor_ui32 (oss_BigInteger * obj, oss_uint32_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Replace this BigInteger object with the result of its bitwise XOR with a 32-bit signed integer
* @param obj The BigInteger object to be modified
* @param i A 32-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Xor_i32 (oss_BigInteger * obj, oss_int32_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Perform a right shift of this BigInteger object as a signed number
* @param obj The BigInteger object to be modified
* @param numBits The number of bits of the shift
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_RightShift (oss_BigInteger * obj, oss_int32_t numBits, oss_Allocator * allocator, oss_Status * status) ;

/** Perform a left shift of this BigInteger object as a signed number
* @param obj The BigInteger object to be modified
* @param numBits The number of bits of the shift
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_LeftShift (oss_BigInteger * obj, oss_int32_t numBits, oss_Allocator * allocator, oss_Status * status) ;

/** Increment this BigInteger object by one
* @param obj The BigInteger object to be modified
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Increment (oss_BigInteger * obj, oss_Allocator * allocator, oss_Status * status) ;

/** Decrement this BigInteger object by one
* @param obj The BigInteger object to be modified
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Decrement (oss_BigInteger * obj, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is equal to a given BigInteger object
* @param obj A BigInteger object
* @param n A second BigInteger object
* @return Nonzero (true) if equal
*/
oss_bool_t oss_BigInteger_Eq_bi (const oss_BigInteger * obj, const oss_BigInteger * n) ;

/** Tell if this BigInteger object is equal to a given 64-bit unsigned integer
* @param obj A BigInteger object
* @param ui A 64-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if equal
*/
oss_bool_t oss_BigInteger_Eq_ui64 (const oss_BigInteger * obj, oss_uint64_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is equal to a given 64-bit signed integer
* @param obj A BigInteger object
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if equal
*/
oss_bool_t oss_BigInteger_Eq_i64 (const oss_BigInteger * obj, oss_int64_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is equal to a given 32-bit unsigned integer
* @param obj A BigInteger object
* @param ui A 32-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if equal
*/
oss_bool_t oss_BigInteger_Eq_ui32 (const oss_BigInteger * obj, oss_uint32_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is equal to a given 32-bit signed integer
* @param obj A BigInteger object
* @param i A 32-bit signed integer value
* @return Nonzero (true) if equal
*/
oss_bool_t oss_BigInteger_Eq_i32 (const oss_BigInteger * obj, oss_int32_t i) ;

/** Tell if this BigInteger object is not equal to a given BigInteger object
* @param obj A BigInteger object
* @param n A second BigInteger object
* @return Nonzero (true) if not equal
*/
oss_bool_t oss_BigInteger_Ne_bi (const oss_BigInteger * obj, const oss_BigInteger * n) ;

/** Tell if this BigInteger object is not equal to a given 64-bit unsigned integer
* @param obj A BigInteger object
* @param ui A 64-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if not equal
*/
oss_bool_t oss_BigInteger_Ne_ui64 (const oss_BigInteger * obj, oss_uint64_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is not equal to a given 64-bit signed integer
* @param obj A BigInteger object
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if not equal
*/
oss_bool_t oss_BigInteger_Ne_i64 (const oss_BigInteger * obj, oss_int64_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is not equal to a given 32-bit unsigned integer
* @param obj A BigInteger object
* @param ui A 32-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if not equal
*/
oss_bool_t oss_BigInteger_Ne_ui32 (const oss_BigInteger * obj, oss_uint32_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is not equal to a given 32-bit signed integer
* @param obj A BigInteger object
* @param i A 32-bit signed integer value
* @return Nonzero (true) if not equal
*/
oss_bool_t oss_BigInteger_Ne_i32 (const oss_BigInteger * obj, oss_int32_t i) ;

/** Tell if this BigInteger object is less than a given BigInteger object
* @param obj A BigInteger object
* @param n A second BigInteger object
* @return Nonzero (true) if less than
*/
oss_bool_t oss_BigInteger_Lt_bi (const oss_BigInteger * obj, const oss_BigInteger * n) ;

/** Tell if this BigInteger object is less than a given 64-bit unsigned integer
* @param obj A BigInteger object
* @param ui A 64-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if less than
*/
oss_bool_t oss_BigInteger_Lt_ui64 (const oss_BigInteger * obj, oss_uint64_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is less than a given 64-bit signed integer
* @param obj A BigInteger object
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if less than
*/
oss_bool_t oss_BigInteger_Lt_i64 (const oss_BigInteger * obj, oss_int64_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is less than a given 32-bit unsigned integer
* @param obj A BigInteger object
* @param ui A 32-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if less than
*/
oss_bool_t oss_BigInteger_Lt_ui32 (const oss_BigInteger * obj, oss_uint32_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is less than a given 32-bit signed integer
* @param obj A BigInteger object
* @param i A 32-bit signed integer value
* @return Nonzero (true) if less than
*/
oss_bool_t oss_BigInteger_Lt_i32 (const oss_BigInteger * obj, oss_int32_t i) ;

/** Tell if this BigInteger object is less than or equal to a given BigInteger object
* @param obj A BigInteger object
* @param n A second BigInteger object
* @return Nonzero (true) if less than or equal to
*/
oss_bool_t oss_BigInteger_Le_bi (const oss_BigInteger * obj, const oss_BigInteger * n) ;

/** Tell if this BigInteger object is less than or equal to a given 64-bit unsigned integer
* @param obj A BigInteger object
* @param ui A 64-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if less than or equal to
*/
oss_bool_t oss_BigInteger_Le_ui64 (const oss_BigInteger * obj, oss_uint64_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is less than or equal to a given 64-bit signed integer
* @param obj A BigInteger object
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if less than or equal to
*/
oss_bool_t oss_BigInteger_Le_i64 (const oss_BigInteger * obj, oss_int64_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is less than or equal to a given 32-bit unsigned integer
* @param obj A BigInteger object
* @param ui A 32-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if less than or equal to
*/
oss_bool_t oss_BigInteger_Le_ui32 (const oss_BigInteger * obj, oss_uint32_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is less than or equal to a given 32-bit signed integer
* @param obj A BigInteger object
* @param i A 32-bit signed integer value
* @return Nonzero (true) if less than or equal to
*/
oss_bool_t oss_BigInteger_Le_i32 (const oss_BigInteger * obj, oss_int32_t i) ;

/** Tell if this BigInteger object is greater than a given BigInteger object
* @param obj A BigInteger object
* @param n A second BigInteger object
* @return Nonzero (true) if greater than
*/
oss_bool_t oss_BigInteger_Gt_bi (const oss_BigInteger * obj, const oss_BigInteger * n) ;

/** Tell if this BigInteger object is greater than a given 64-bit unsigned integer
* @param obj A BigInteger object
* @param ui A 64-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if greater than
*/
oss_bool_t oss_BigInteger_Gt_ui64 (const oss_BigInteger * obj, oss_uint64_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is greater than a given 64-bit signed integer
* @param obj A BigInteger object
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if greater than
*/
oss_bool_t oss_BigInteger_Gt_i64 (const oss_BigInteger * obj, oss_int64_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is greater than a given 32-bit unsigned integer
* @param obj A BigInteger object
* @param ui A 32-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if greater than
*/
oss_bool_t oss_BigInteger_Gt_ui32 (const oss_BigInteger * obj, oss_uint32_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is greater than a given 32-bit signed integer
* @param obj A BigInteger object
* @param i A 32-bit signed integer value
* @return Nonzero (true) if greater than
*/
oss_bool_t oss_BigInteger_Gt_i32 (const oss_BigInteger * obj, oss_int32_t i) ;

/** Tell if this BigInteger object is greater than or equal to a given BigInteger object
* @param obj A BigInteger object
* @param n A second BigInteger object
* @return Nonzero (true) if greater than or equal to
*/
oss_bool_t oss_BigInteger_Ge_bi (const oss_BigInteger * obj, const oss_BigInteger * n) ;

/** Tell if this BigInteger object is greater than or equal to a given 64-bit unsigned integer
* @param obj A BigInteger object
* @param ui A 64-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if greater than or equal to
*/
oss_bool_t oss_BigInteger_Ge_ui64 (const oss_BigInteger * obj, oss_uint64_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is greater than or equal to a given 64-bit signed integer
* @param obj A BigInteger object
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if greater than or equal to
*/
oss_bool_t oss_BigInteger_Ge_i64 (const oss_BigInteger * obj, oss_int64_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is greater than or equal to a given 32-bit unsigned integer
* @param obj A BigInteger object
* @param ui A 32-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if greater than or equal to
*/
oss_bool_t oss_BigInteger_Ge_ui32 (const oss_BigInteger * obj, oss_uint32_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is greater than or equal to a given 32-bit signed integer
* @param obj A BigInteger object
* @param i A 32-bit signed integer value
* @return Nonzero (true) if greater than or equal to
*/
oss_bool_t oss_BigInteger_Ge_i32 (const oss_BigInteger * obj, oss_int32_t i) ;

/** Return the result of the comparison of this BigInteger object with another BigInteger object
* @param obj A BigInteger object
* @param n A second BigInteger object
* @return A negative integer if less, zero if equal, a positive integer if greater
*/
oss_int32_t oss_BigInteger_CompareTo_bi (const oss_BigInteger * obj, const oss_BigInteger * n) ;

/** Return the result of the comparison of this BigInteger object with a 64-bit unsigned integer
* @param obj A BigInteger object
* @param ui A 64-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return A negative integer if less, zero if equal, a positive integer if greater
*/
oss_int32_t oss_BigInteger_CompareTo_ui64 (const oss_BigInteger * obj, oss_uint64_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Return the result of the comparison of this BigInteger object with a 64-bit signed integer
* @param obj A BigInteger object
* @param i A 64-bit signed integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return A negative integer if less, zero if equal, a positive integer if greater
*/
oss_int32_t oss_BigInteger_CompareTo_i64 (const oss_BigInteger * obj, oss_int64_t i, oss_Allocator * allocator, oss_Status * status) ;

/** Return the result of the comparison of this BigInteger object with a 32-bit unsigned integer
* @param obj A BigInteger object
* @param ui A 32-bit unsigned integer value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return A negative integer if less, zero if equal, a positive integer if greater
*/
oss_int32_t oss_BigInteger_CompareTo_ui32 (const oss_BigInteger * obj, oss_uint32_t ui, oss_Allocator * allocator, oss_Status * status) ;

/** Return the result of the comparison of this BigInteger object with a 32-bit signed integer
* @param obj A BigInteger object
* @param i A 32-bit signed integer value
* @return A negative integer if less, zero if equal, a positive integer if greater
*/
oss_int32_t oss_BigInteger_CompareTo_i32 (const oss_BigInteger * obj, oss_int32_t i) ;

/** Convert a BigInteger object to a string
* @param obj A BigInteger object
* @param pStr The address of a String object where the result is to be stored
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_ToString (const oss_BigInteger * obj, oss_String * pStr, oss_Allocator * allocator, oss_Status * status) ;

/** Convert a BigInteger object to a string with a given minimum number of digits
* @param obj A BigInteger object
* @param pStr The address of a String object where the result is to be stored
* @param numDigitsMinimum The minimum number of digits of the result
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_ToString_len (const oss_BigInteger * obj, oss_String * pStr, oss_int32_t numDigitsMinimum, oss_Allocator * allocator, oss_Status * status) ;

/** Divide the BigInteger object by another BigInteger object and return the quotient and the remainder
* @param nDividend The dividend (an BigInteger object)
* @param nDivisor The divisor (an BigInteger object)
* @param pNQuotient The address of a BigInteger object where the quotient is to be stored
* @param pNRemainder The address of a BigInteger object where the remainder is to be stored
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Divide_bi (const oss_BigInteger * nDividend, const oss_BigInteger * nDivisor, oss_BigInteger * pNQuotient, oss_BigInteger * pNRemainder, oss_Allocator * allocator, oss_Status * status) ;

/** Divide the BigInteger object by a 32-bit signed integer and return the quotient and the remainder
* @param nDividend The dividend (an BigInteger object)
* @param iDivisor The divisor (an integer)
* @param pNQuotient The address of a BigInteger object where the quotient is to be stored
* @param pIRemainder The address of an integer variable where the remainder is to be stored
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigInteger_Divide_i32 (const oss_BigInteger * nDividend, oss_int32_t iDivisor, oss_BigInteger * pNQuotient, oss_int32_t * pIRemainder, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if this BigInteger object is equal to a given BigInteger object
* @param obj A BigInteger object
* @param n A second BigInteger object
* @return Nonzero (true) if equal
*/
oss_bool_t oss_BigInteger_IsEqualTo (const oss_BigInteger * obj, const oss_BigInteger * n) ;

/** Tell if this BigInteger object is equal to a given integer specified as a string
* @param obj A BigInteger object
* @param psz A null-terminated string containing an integer
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if the two integers are equal
*/
oss_bool_t oss_BigInteger_IsEqualTo_psz (const oss_BigInteger * obj, const char * psz, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BigIntegerArray object
* @param obj The BigIntegerArray object to be initialized
*/
void oss_BigIntegerArray_init (oss_BigIntegerArray * obj) ;

/** Initialize a BigIntegerArray object by copying another
* @param obj The BigIntegerArray object to be initialized
* @param arrT An existing VectorOfBigInteger object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigIntegerArray_init_copy (oss_BigIntegerArray * obj, const oss_BigIntegerArray * arrT, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BigIntegerArray object of a given number of items
* @param obj The BigIntegerArray object to be initialized
* @param numItems The initial number of items
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigIntegerArray_init_size (oss_BigIntegerArray * obj, oss_int32_t numItems, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BigIntegerArray object from a string
* @param obj The BigIntegerArray object to be initialized
* @param psz A null-terminated string containing nonnegative integers separated by dots
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigIntegerArray_init_psz (oss_BigIntegerArray * obj, const char * psz, oss_Allocator * allocator, oss_Status * status) ;

/** Deinitialize a BigIntegerArray object
* @param obj The BigIntegerArray object to be deinitialized
* @param allocator The Allocator object to be used in the function call
*/
void oss_BigIntegerArray_term (oss_BigIntegerArray * obj, oss_Allocator * allocator) ;

/** Set a BigIntegerArray object to an empty array
* @param obj The BigIntegerArray object to be modified
* @param allocator The Allocator object to be used in the function call
*/
void oss_BigIntegerArray_Clear (oss_BigIntegerArray * obj, oss_Allocator * allocator) ;

/** Assign a BigIntegerArray object from another
* @param obj The BigIntegerArray object to be modified
* @param arrT An existing VectorOfBigInteger object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigIntegerArray_Assign_copy (oss_BigIntegerArray * obj, const oss_BigIntegerArray * arrT, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a BigIntegerArray object from a string
* @param obj The BigIntegerArray object to be modified
* @param psz A null-terminated string containing nonnegative integers separated by dots
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigIntegerArray_Assign_psz (oss_BigIntegerArray * obj, const char * psz, oss_Allocator * allocator, oss_Status * status) ;

/** Add an item to the end of a BigIntegerArray object
* @param obj The BigIntegerArray object to be modified
* @param t A BigInteger object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigIntegerArray_Add (oss_BigIntegerArray * obj, const oss_BigInteger * t, oss_Allocator * allocator, oss_Status * status) ;

/** Remove the item at a given position in a BigIntegerArray object
* @param obj The BigIntegerArray object to be modified
* @param loc The zero-based position of the item to be removed
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigIntegerArray_Remove (oss_BigIntegerArray * obj, oss_int32_t loc, oss_Allocator * allocator, oss_Status * status) ;

/** Modify the number of items of a BigIntegerArray object
* @param obj The BigIntegerArray object to be modified
* @param numItems The new number of items of the array
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigIntegerArray_Resize (oss_BigIntegerArray * obj, oss_int32_t numItems, oss_Allocator * allocator, oss_Status * status) ;

/** Set the item at a given position in a BigIntegerArray object to a given value
* @param obj The BigIntegerArray object to be modified
* @param loc The zero-based position of the item to be modified
* @param t A BigInteger object containing the new value of the item
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigIntegerArray_SetAt (oss_BigIntegerArray * obj, oss_int32_t loc, const oss_BigInteger * t, oss_Allocator * allocator, oss_Status * status) ;

/** Return the item at a given position in a BigIntegerArray object
* @param obj A BigIntegerArray object
* @param loc The zero-based position of the item to be returned
* @param status The Status object to be possibly modified in case of error
* @return The BigInteger object at the specified position in the array
*/
const oss_BigInteger * oss_BigIntegerArray_GetAt (const oss_BigIntegerArray * obj, oss_int32_t loc, oss_Status * status) ;

/** Return the item (modifiable) at a given position in a BigIntegerArray object
* @param obj A BigIntegerArray object
* @param loc The zero-based position of the item to be returned
* @param status The Status object to be possibly modified in case of error
* @return The BigInteger object at the specified position in the array
*/
oss_BigInteger * oss_BigIntegerArray_GetAt_nc (oss_BigIntegerArray * obj, oss_int32_t loc, oss_Status * status) ;

/** Return the number of items in a BigIntegerArray object
* @param obj A BigIntegerArray object
* @return The number of items
*/
oss_int32_t oss_BigIntegerArray_GetCount (const oss_BigIntegerArray * obj) ;

/** Tell if this BigIntegerArray object is equal to a given BigIntegerArray object
* @param obj A BigIntegerArray object
* @param arrT A second BigIntegerArray object
* @return Nonzero (true) if the two arrays are equal
*/
oss_bool_t oss_BigIntegerArray_IsEqualTo (const oss_BigIntegerArray * obj, const oss_BigIntegerArray * arrT) ;

/** Tell if this BigIntegerArray object is equal to a given integer array specified as a string
* @param obj A BigIntegerArray object
* @param psz A null-terminated string containing nonnegative integers separated by dots
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if the two arrays are equal
*/
oss_bool_t oss_BigIntegerArray_IsEqualTo_psz (const oss_BigIntegerArray * obj, const char * psz, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize an InputStream object for reading data from a ByteArray object
* @param obj The InputStream object to be initialized
* @param pArrBy A ByteArray object whose bytes are to be read
*/
void oss_InputStream_init_ba (oss_InputStream * obj, const oss_ByteArray * pArrBy) ;

/** Initialize an InputStream object for reading data from a buffer
* @param obj The InputStream object to be initialized
* @param parrBy A buffer whose bytes are to be read
* @param size The number of significant bytes in the buffer
*/
void oss_InputStream_init_pch (oss_InputStream * obj, const oss_uint8_t * parrBy, oss_int32_t size) ;
void oss_InputStream_term (oss_InputStream * obj) ;
void oss_InputStream_term_disp (oss_InputStream * obj, oss_Allocator * allocator) ;

/** Reset the reading position
* @param obj The InputStream object to be reset
*/
void oss_InputStream_Reset (oss_InputStream * obj) ;

/** Tell if the current reading position is after the end of the stream
* @param obj An InputStream object
* @return Nonzero (bool) if the current position is after the end of the stream
*/
oss_bool_t oss_InputStream_EndOfStream (const oss_InputStream * obj) ;

/** Return the current reading position in the stream
* @param obj An InputStream object
* @return The current reading position
*/
oss_int32_t oss_InputStream_GetPosition (const oss_InputStream * obj) ;

/** Return the address of the first byte in the stream
* @param obj An InputStream object
* @return The address of the first byte in the stream
*/
const oss_uint8_t * oss_InputStream_GetData (const oss_InputStream * obj) ;

/** Return the number of bytes in the stream
* @param obj An InputStream object
* @return The number of bytes in the stream
*/
oss_int32_t oss_InputStream_GetLength (const oss_InputStream * obj) ;

/** Change the reading position
* @param obj An InputStream object
* @param loc The new reading position within the array of bytes
* @param status The Status object to be possibly modified in case of error
*/
void oss_InputStream_SetPosition (oss_InputStream * obj, oss_int32_t loc, oss_Status * status) ;

/** Put the InputStream object in the error state if the number of bytes still unread is less than the specified number
* @param obj An InputStream object
* @param numBytes The minimum number of bytes that are required to exist after the current reading position
*/
void oss_InputStream_EnsureUnreadBytesAhead (oss_InputStream * obj, oss_int32_t numBytes) ;

/** Put the InputStream object in the error state if there are no more bytes to be read
* @param obj An InputStream object
*/
void oss_InputStream_EnsureUnreadByteAhead (oss_InputStream * obj) ;

/** Read one byte from the stream and return it, or return -1 if there are no more bytes to be read
* @param obj An InputStream object
* @return The byte read, or -1 if the current position is after the end of the stream
*/
oss_int32_t oss_InputStream_ReadByte (oss_InputStream * obj) ;

/** Read a given number of bytes from the stream into a ByteArray object
* @param obj An InputStream object
* @param pArrBy A ByteArray object where the bytes being read are to be stored
* @param numBytes The number of bytes to be read
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return The number of bytes read
*/
oss_int32_t oss_InputStream_Read_1 (oss_InputStream * obj, oss_ByteArray * pArrBy, oss_int32_t numBytes, oss_Allocator * allocator, oss_Status * status) ;

/** Read a given number of bytes from the stream into a buffer
* @param obj An InputStream object
* @param parrByDest A buffer where the bytes being read are to be stored
* @param numBytes The number of bytes to be read
* @return The number of bytes read
*/
oss_int32_t oss_InputStream_Read_2 (oss_InputStream * obj, oss_uint8_t * parrByDest, oss_int32_t numBytes) ;

/** Tell if the InputStream object is in the error state
* @param obj An InputStream object
* @return Nonzero (true) if the stream is in error
*/
oss_bool_t oss_InputStream_IsInError (const oss_InputStream * obj) ;

/** Initialize an UnknownExtension object
* @param obj The UnknownExtension object to be initialized
*/
void oss_UnknownExtension_init (oss_UnknownExtension * obj) ;

/** Initialize an UnknownExtension object by copying another
* @param obj The UnknownExtension object to be initialized
* @param unknownextension An existing UnknownExtension object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_UnknownExtension_init_copy (oss_UnknownExtension * obj, const oss_UnknownExtension * unknownextension, oss_Allocator * allocator, oss_Status * status) ;

/** Clear the content of an UnknownExtension object
* @param obj The UnknownExtension object to be cleared
*/
void oss_UnknownExtension_Clear (oss_UnknownExtension * obj) ;

/** Assign an UnknownExtension object from another
* @param obj The UnknownExtension object to be modified
* @param unknownextension An existing UnknownExtension object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_UnknownExtension_Assign_copy (oss_UnknownExtension * obj, const oss_UnknownExtension * unknownextension, oss_Allocator * allocator, oss_Status * status) ;

/** Return the encoding rules originally used to produce the data in the UnknownExtension
* @param obj An UnknownExtension object
* @return An EncodingRules enumerator
*/
enum oss_EncodingRules oss_UnknownExtension_GetEncodingRules (const oss_UnknownExtension * obj) ;

/** Tell if an UnknownExtension object is equal to another
* @param obj An UnknownExtension object
* @param unknownextension A second UnknownExtension object
* @return Nonzero (true) if the two UnknownExtension objects are equal
*/
oss_bool_t oss_UnknownExtension_IsEqualTo (const oss_UnknownExtension * obj, const oss_UnknownExtension * unknownextension) ;

/** Initialize a GCodec object
* @param obj The GCodec object to be initialized
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_GCodec_init (oss_GCodec * obj, oss_Allocator * allocator, oss_Status * status) ;

/** Deinitialize a GCodec object
* @param obj The GCodec object to be deinitialized
* @param allocator The Allocator object to be used in the function call
*/
void oss_GCodec_term (oss_GCodec * obj, oss_Allocator * allocator) ;

/** Modify the encoding parameters
* @param obj A GCodec object
* @param encodingrules The encoding rules for which the encoding/decoding parameters are to be set
* @param pEncodingparameterset Encoding/decoding parameter settings to be used in all subsequent operations with this GCodec object and with the specified encoding rules
*/
void oss_GCodec_SetEncParams (oss_GCodec * obj, enum oss_EncodingRules encodingrules, const oss_EncParams * pEncodingparameterset) ;

/** Find the PDU type number of an ASN.1 type given a module designator and a type name
* @param obj A GCodec object
* @param pszModuleDesignator A module name, asterisk, or null
* @param pszTypeName A type name
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return The PDU number
*/
oss_int32_t oss_GCodec_FindPduType (const oss_GCodec * obj, const char * pszModuleDesignator, const char * pszTypeName, oss_Allocator * allocator, oss_Status * status) ;

/** Encode a value into an output stream
* @param obj A GCodec object
* @param encodingrules The encoding rules to be used in this operation
* @param iPduTypeNumber PDU number of the ASN.1 type of the value to be encoded
* @param pValue A Value object to be encoded
* @param pOutputstream An OutputStream object to be filled with encoded data
* @param pArrStrErrorMessages A StringArray object to be filled with error messages
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if the operation succeeded
*/
oss_bool_t oss_GCodec_Encode (const oss_GCodec * obj, enum oss_EncodingRules encodingrules, oss_int32_t iPduTypeNumber, const oss_Value * pValue, oss_OutputStream * pOutputstream, oss_StringArray * pArrStrErrorMessages, oss_Allocator * allocator, oss_Status * status) ;

/** Decode a value of a given PDU type from an input stream
* @param obj A GCodec object
* @param encodingrules The encoding rules to be used in this operation
* @param iPduTypeNumber PDU number of the ASN.1 type of the value to be decoded
* @param pInputstream An InputStream object containing encoded data
* @param ppValue Address of a pointer to a Value object to be created
* @param pArrStrErrorMessages A StringArray object to be filled with error messages
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if the operation succeeded
*/
oss_bool_t oss_GCodec_Decode (const oss_GCodec * obj, enum oss_EncodingRules encodingrules, oss_int32_t iPduTypeNumber, oss_InputStream * pInputstream, oss_Value * * ppValue, oss_StringArray * pArrStrErrorMessages, oss_Allocator * allocator, oss_Status * status) ;

/** Validate a value, checking the constraints on its type
* @param obj A GCodec object
* @param iPduTypeNumber PDU number of the ASN.1 type of the value to be validated
* @param pValue A Value object to be validated
* @param pArrStrErrorMessages A StringArray object to be filled with error messages
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if the value is valid
*/
oss_bool_t oss_GCodec_IsValid (const oss_GCodec * obj, oss_int32_t iPduTypeNumber, const oss_Value * pValue, oss_StringArray * pArrStrErrorMessages, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if two values represent the same ASN.1 abstract value
* @param obj A GCodec object
* @param iPduTypeNumber PDU number of the ASN.1 type of the values to be compared
* @param pValue1 The first Value object to be compared
* @param pValue2 The second Value object to be compared
* @param bStrictEquivalence Require equivalence between extension additions
* @param bAcceptSmallNumericDifferences Ignore small differences between real values
* @param pArrStrErrorMessages A StringArray object to be filled with error messages
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if the two values are equivalent
*/
oss_bool_t oss_GCodec_AreEquivalent (const oss_GCodec * obj, oss_int32_t iPduTypeNumber, const oss_Value * pValue1, const oss_Value * pValue2, oss_bool_t bStrictEquivalence, oss_bool_t bAcceptSmallNumericDifferences, oss_StringArray * pArrStrErrorMessages, oss_Allocator * allocator, oss_Status * status) ;

/** Copy an existing value to a new value
* @param obj A GCodec object
* @param iPduTypeNumber PDU number of the ASN.1 type of the value to be copied
* @param pValue A Value object to be duplicated
* @param ppValue Address of a pointer to a Value object to be created
* @param pArrStrErrorMessages A StringArray object to be filled with error messages
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if the operation succeeded
*/
oss_bool_t oss_GCodec_Copy (const oss_GCodec * obj, oss_int32_t iPduTypeNumber, const oss_Value * pValue, oss_Value * * ppValue, oss_StringArray * pArrStrErrorMessages, oss_Allocator * allocator, oss_Status * status) ;

/** Deinitialize and free a value and all of its nested values
* @param obj A GCodec object
* @param iPduTypeNumber PDU number of the ASN.1 type of the value
* @param pValue A Value object to be freed
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_GCodec_FreeValue (const oss_GCodec * obj, oss_int32_t iPduTypeNumber, oss_Value * pValue, oss_Allocator * allocator, oss_Status * status) ;

/** Encode a value to an output stream in JSON
* @param obj A GCodec object
* @param iPduTypeNumber PDU number of the ASN.1 type of the value
* @param pValue A Value object to be printed
* @param pOutputstream An OutputStream object to be filled with a JSON text
* @param pArrStrErrorMessages A StringArray object to be filled with error messages
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return Nonzero (true) if the operation succeeded
*/
oss_bool_t oss_GCodec_ToJson (const oss_GCodec * obj, oss_int32_t iPduTypeNumber, const oss_Value * pValue, oss_OutputStream * pOutputstream, oss_StringArray * pArrStrErrorMessages, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BitArray object
* @param obj The BitArray object to be initialized
*/
void oss_BitArray_init (oss_BitArray * obj) ;

/** Initialize a BitArray object by copying another
* @param obj The BitArray object to be initialized
* @param bitarray An existing BitArray object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BitArray_init_copy (oss_BitArray * obj, const oss_BitArray * bitarray, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BitArray object of a given length (number of bits)
* @param obj The BitArray object to be initialized
* @param numBits The initial length of the BitArray object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BitArray_init_size (oss_BitArray * obj, oss_int32_t numBits, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BitArray object from the content of a buffer
* @param obj The BitArray object to be initialized
* @param parrBy A buffer containing the bits to be copied
* @param numBits The number of significant bits in the above buffer
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BitArray_init_pch (oss_BitArray * obj, const oss_uint8_t * parrBy, oss_int32_t numBits, oss_Allocator * allocator, oss_Status * status) ;

/** Deinitialize a BitArray object
* @param obj The BitArray object to be deinitialized
* @param allocator The Allocator object to be used in the function call
*/
void oss_BitArray_term (oss_BitArray * obj, oss_Allocator * allocator) ;

/** Set a BitArray object to an empty bit array
* @param obj The BitArray object to be cleared
*/
void oss_BitArray_Clear (oss_BitArray * obj) ;

/** Assign a BitArray object from another
* @param obj The BitArray object to be modified
* @param bitarray An existing BitArray object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BitArray_Assign_copy (oss_BitArray * obj, const oss_BitArray * bitarray, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a BitArray object from the content of a buffer
* @param obj The BitArray object to be modified
* @param parrBy A buffer containing the bits to be copied
* @param numBits The number of significant bits in the above buffer
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BitArray_Assign_pch (oss_BitArray * obj, const oss_uint8_t * parrBy, oss_int32_t numBits, oss_Allocator * allocator, oss_Status * status) ;

/** Modify the length (number of bits) of a BitArray object, setting any added bits to zeros
* @param obj The BitArray object to be modified
* @param numBits The new length of the bit array (number of bits)
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BitArray_Resize (oss_BitArray * obj, oss_int32_t numBits, oss_Allocator * allocator, oss_Status * status) ;

/** Modify the length (number of bits) of a BitArray object, leaving any added bits uninitialized
* @param obj The BitArray object to be modified
* @param numBits The new length of the bit array (number of bits)
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BitArray_ResizeNoFill (oss_BitArray * obj, oss_int32_t numBits, oss_Allocator * allocator, oss_Status * status) ;

/** Set or clear the bit at a given position in a BitArray object
* @param obj The BitArray object to be modified
* @param loc The zero-based position of the bit to be modified
* @param b The new setting of the bit
* @param status The Status object to be possibly modified in case of error
*/
void oss_BitArray_SetAt (oss_BitArray * obj, oss_int32_t loc, oss_bool_t b, oss_Status * status) ;

/** Return the bit at a given position in a BitArray object
* @param obj A BitArray object
* @param loc The zero-based position of the bit to be returned
* @param status The Status object to be possibly modified in case of error
* @return The bit at the specified position in the bit array
*/
oss_bool_t oss_BitArray_GetAt (const oss_BitArray * obj, oss_int32_t loc, oss_Status * status) ;

/** Return the length (number of bits) of a BitArray object
* @param obj A BitArray object
* @return The length (number of bits)
*/
oss_int32_t oss_BitArray_GetLength (const oss_BitArray * obj) ;

/** Return the length (number of bits) of a BitArray object, ignoring any zero trailing bits
* @param obj A BitArray object
* @return The length (number of bits)
*/
oss_int32_t oss_BitArray_GetTrimmedLength_1 (const oss_BitArray * obj) ;

/** Tell if this BitArray object is equal to a given BitArray object
* @param obj A BitArray object
* @param bitarray A second BitArray object
* @return Nonzero (true) if the two bit arrays are equal
*/
oss_bool_t oss_BitArray_IsEqualTo_1 (const oss_BitArray * obj, const oss_BitArray * bitarray) ;

/** Tell if this BitArray object is equal to the content of a buffer
* @param obj A BitArray object
* @param parrBy A buffer containing the bits to be compared against
* @param numBits The number of significant bits in the above buffer
* @return Nonzero (true) if the two bit arrays are equal
*/
oss_bool_t oss_BitArray_IsEqualTo_pch (const oss_BitArray * obj, const oss_uint8_t * parrBy, oss_int32_t numBits) ;

/** Tell if this BitArray object is equal to a given BitArray object, ignoring any zero trailing bits
* @param obj A BitArray object
* @param bitarray A second BitArray object
* @return Nonzero (true) if the two bit arrays are equal
*/
oss_bool_t oss_BitArray_IsEqualToTrimmed_1 (const oss_BitArray * obj, const oss_BitArray * bitarray) ;

/** Tell if this BitArray object is equal to the content of a buffer, ignoring any zero trailing bits
* @param obj A BitArray object
* @param parrBy A buffer containing the bits to be compared against
* @param numBits The number of significant bits in the above buffer
* @return Nonzero (true) if the two bit arrays are equal
*/
oss_bool_t oss_BitArray_IsEqualToTrimmed_pch (const oss_BitArray * obj, const oss_uint8_t * parrBy, oss_int32_t numBits) ;

/** Initialize a BigReal object
* @param obj The BigReal object to be initialized
*/
void oss_BigReal_init (oss_BigReal * obj) ;

/** Initialize a BigReal object by copying another
* @param obj The BigReal object to be initialized
* @param r An existing BigReal object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigReal_init_copy (oss_BigReal * obj, const oss_BigReal * r, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BigReal object from a special real value
* @param obj The BigReal object to be initialized
* @param specialreal A SpecialReal value
*/
void oss_BigReal_init_sp (oss_BigReal * obj, enum oss_SpecialReal specialreal) ;

/** Initialize a BigReal object from a mantissa, base, and exponent
* @param obj The BigReal object to be initialized
* @param nMantissa A BigInteger object containing the mantissa
* @param iBase The base (either 2 or 10)
* @param nExponent A BigInteger object containing the exponent
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigReal_init_bi (oss_BigReal * obj, const oss_BigInteger * nMantissa, oss_int32_t iBase, const oss_BigInteger * nExponent, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BigReal object from a floating-point value
* @param obj The BigReal object to be initialized
* @param d A floating-point value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigReal_init_d (oss_BigReal * obj, oss_float64_t d, oss_Allocator * allocator, oss_Status * status) ;

/** Deinitialize a BigReal object
* @param obj The BigReal object to be deinitialized
* @param allocator The Allocator object to be used in the function call
*/
void oss_BigReal_term (oss_BigReal * obj, oss_Allocator * allocator) ;

/** Set a BigReal object to positive zero
* @param obj The BigReal object to be cleared
*/
void oss_BigReal_Clear (oss_BigReal * obj) ;

/** Assign a BigReal object from another
* @param obj The BigReal object to be modified
* @param r An existing BigReal object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigReal_Assign_copy (oss_BigReal * obj, const oss_BigReal * r, oss_Allocator * allocator, oss_Status * status) ;

/** Assign a BigReal object from a special real value
* @param obj The BigReal object to be modified
* @param specialreal A SpecialReal enumerator
*/
void oss_BigReal_Assign_sp (oss_BigReal * obj, enum oss_SpecialReal specialreal) ;

/** Initialize a BigReal object from a mantissa, base, and exponent
* @param obj The BigReal object to be modified
* @param nMantissa A BigInteger object containing the mantissa
* @param iBase The base (either 2 or 10)
* @param nExponent A BigInteger object containing the exponent
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigReal_Assign_bi (oss_BigReal * obj, const oss_BigInteger * nMantissa, oss_int32_t iBase, const oss_BigInteger * nExponent, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize a BigReal object from a floating-point value
* @param obj The BigReal object to be modified
* @param d A floating-point value
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_BigReal_Assign_d (oss_BigReal * obj, oss_float64_t d, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if a BigReal object is equal to another
* @param obj The BigReal object to be compared
* @param r A second BigReal object
* @return Nonzero (true) if the two BigReal objects are equal
*/
oss_bool_t oss_BigReal_IsEqualTo (const oss_BigReal * obj, const oss_BigReal * r) ;

/** Return a floating-point value that approximates a BigReal object
* @param obj A BigReal object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
* @return A double
*/
oss_float64_t oss_BigReal_ToBinary64_1 (const oss_BigReal * obj, oss_Allocator * allocator, oss_Status * status) ;

/** Tell if a BigReal object contains a special real value
* @param obj A BigReal object
* @return Nonzero (true) if the BigReal is a special real value
*/
oss_bool_t oss_BigReal_IsSpecialReal (const oss_BigReal * obj) ;

/** Return a special real enumerator contained in a BigReal object
* @param obj A BigReal object
* @return A SpecialReal enumerator
*/
enum oss_SpecialReal oss_BigReal_GetSpecialReal (const oss_BigReal * obj) ;

/** Tell if a BigReal object contains a mantissa
* @param obj A BigReal object
* @return Nonzero (true) if the BigReal contains a mantissa
*/
oss_bool_t oss_BigReal_HasMantissa (const oss_BigReal * obj) ;

/** Return the mantissa of a BigReal object (a BigInteger object)
* @param obj A BigReal object
* @return The address of a BigInteger object that is the mantissa of the real value
*/
const oss_BigInteger * oss_BigReal_GetMantissa (const oss_BigReal * obj) ;

/** Tell if a BigReal object contains a base
* @param obj A BigReal object
* @return Nonzero (true) if the BigReal contains a base (either 2 or 10)
*/
oss_bool_t oss_BigReal_HasBase (const oss_BigReal * obj) ;

/** Return the base of a BigReal object (either 2 or 10)
* @param obj A BigReal object
* @return The base of the real value (either 2 or 10)
*/
oss_int32_t oss_BigReal_GetBase (const oss_BigReal * obj) ;

/** Tell if a BigReal object contains an exponent
* @param obj A BigReal object
* @return Nonzero (true) if the BigReal contains an exponent
*/
oss_bool_t oss_BigReal_HasExponent (const oss_BigReal * obj) ;

/** Return the exponent of a BigReal object (a BigInteger object)
* @param obj A BigReal object
* @return The address of a BigInteger object that is the exponent of the real value
*/
const oss_BigInteger * oss_BigReal_GetExponent (const oss_BigReal * obj) ;

/** Initialize an UnknownExtensionArray object
* @param obj The UnknownExtensionArray object to be initialized
*/
void oss_UnknownExtensionArray_init_1 (oss_UnknownExtensionArray * obj) ;

/** Initialize an UnknownExtensionArray object by copying another (only the addresses of the pointed-to UnknownExtension objects are copied)
* @param obj The UnknownExtensionArray object to be initialized
* @param arrPT An existing UnknownExtensionArray object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_UnknownExtensionArray_init_2 (oss_UnknownExtensionArray * obj, const oss_UnknownExtensionArray * arrPT, oss_Allocator * allocator, oss_Status * status) ;

/** Initialize an UnknownExtensionArray object of a given number of items
* @param obj The UnknownExtensionArray object to be initialized
* @param numItems The initial number of items
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_UnknownExtensionArray_init_3 (oss_UnknownExtensionArray * obj, oss_int32_t numItems, oss_Allocator * allocator, oss_Status * status) ;

/** Deinitialize an UnknownExtensionArray object (the pointed-to UnknownExtension objects are not affected)
* @param obj The UnknownExtensionArray object to be deinitialized
* @param allocator The Allocator object to be used in the function call
*/
void oss_UnknownExtensionArray_term (oss_UnknownExtensionArray * obj, oss_Allocator * allocator) ;

/** Set an UnknownExtensionArray object to an empty array (the pointed-to UnknownExtension objects are not affected)
* @param obj The UnknownExtensionArray object to be cleared
*/
void oss_UnknownExtensionArray_ClearUnowned (oss_UnknownExtensionArray * obj) ;

/** Assign an UnknownExtensionArray object from another (only the addresses of the UnknownExtension objects are copied)
* @param obj The UnknownExtensionArray object to be modified
* @param arrPT An existing UnknownExtensionArray object
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_UnknownExtensionArray_AssignUnowned (oss_UnknownExtensionArray * obj, const oss_UnknownExtensionArray * arrPT, oss_Allocator * allocator, oss_Status * status) ;

/** Add an item to the end of an UnknownExtensionArray object (the pointed-to UnknownExtension object is not affected)
* @param obj The UnknownExtensionArray object to be modified
* @param pT An UnknownExtension object to be added to the array
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_UnknownExtensionArray_AddUnowned (oss_UnknownExtensionArray * obj, oss_UnknownExtension * pT, oss_Allocator * allocator, oss_Status * status) ;

/** Modify the number of items of an UnknownExtensionArray object (the pointed-to UnknownExtension objects are not affected)
* @param obj The UnknownExtensionArray object to be modified
* @param numItems The new number of items of the array
* @param allocator The Allocator object to be used in the function call
* @param status The Status object to be possibly modified in case of error
*/
void oss_UnknownExtensionArray_ResizeUnowned (oss_UnknownExtensionArray * obj, oss_int32_t numItems, oss_Allocator * allocator, oss_Status * status) ;

/** Set the item at a given position in an UnknownExtensionArray object to a given value (the pointed-to UnknownExtension object is not affected)
* @param obj The UnknownExtensionArray object to be modified
* @param loc The zero-based position of the item to be modified
* @param pT The new UnknownExtension object
* @param status The Status object to be possibly modified in case of error
*/
void oss_UnknownExtensionArray_SetAtUnowned (oss_UnknownExtensionArray * obj, oss_int32_t loc, oss_UnknownExtension * pT, oss_Status * status) ;

/** Return the item at a given position in an UnknownExtensionArray object
* @param obj An UnknownExtensionArray object
* @param loc The zero-based position of the item to be returned
* @param status The Status object to be possibly modified in case of error
* @return The UnknownExtension object at the specified position in the array
*/
oss_UnknownExtension * oss_UnknownExtensionArray_GetAt (const oss_UnknownExtensionArray * obj, oss_int32_t loc, oss_Status * status) ;

/** Return the number of items of an UnknownExtensionArray object
* @param obj An UnknownExtensionArray object
* @return The number of items
*/
oss_int32_t oss_UnknownExtensionArray_GetCount (const oss_UnknownExtensionArray * obj) ;

/** Initialize an Allocator object
* @param obj The Allocator object to be initialized
* @param parrBy The address of a buffer (not used, can be null)
* @param size The size of the above buffer (not used, can be 0)
* @param status The Status object to be possibly modified in case of error
*/
void oss_Allocator_init (oss_Allocator * obj, oss_uint8_t * parrBy, oss_int64_t size, oss_Status * status) ;

/** Deinitialize an Allocator object
* @param obj The Allocator object to be deinitialized
*/
void oss_Allocator_term (oss_Allocator * obj) ;

/** Allocate a memory block
* @param obj An Allocator object
* @param size The size of a memory block to be allocated
* @param status The Status object to be possibly modified in case of error
* @return The address of the newly allocated memory block, or null if the allocation failed
*/
void * oss_Allocator_Allocate (oss_Allocator * obj, oss_int32_t size, oss_Status * status) ;

/** Allocate a memory block and fill it with zeros
* @param obj An Allocator object
* @param size The size of a memory block to be allocated
* @param status The Status object to be possibly modified in case of error
* @return The address of the newly allocated memory block, or null if the allocation failed
*/
void * oss_Allocator_AllocateZero (oss_Allocator * obj, oss_int32_t size, oss_Status * status) ;

/** Free a memory block
* @param obj An Allocator object
* @param pV The address of the memory block to be freed
*/
void oss_Allocator_Free (oss_Allocator * obj, void * pV) ;

/** Reset an Allocator object
* @param obj The Allocator object to be reset
*/
void oss_Allocator_Reset (oss_Allocator * obj) ;
#ifndef oss_Status_INCLUDED_ONCE
#define oss_Status_INCLUDED_ONCE



/** A structure that contains status information
*/
struct oss_Status
{
	oss_bool_t error ;
	oss_int32_t errorcode ;
	struct oss_Exception * private1 ;
	oss_uint8_t private2 [32] ;
}
;
#endif

#ifndef oss_OutputStream_INCLUDED_ONCE
#define oss_OutputStream_INCLUDED_ONCE



/** A structure that supports stream-oriented writing to a dynamic byte array
*/
struct oss_OutputStream
{
	enum O_HZH cls ;
	oss_uint8_t * bytes ;
	oss_int32_t length ;
	oss_int32_t capacity ;
}
;
#endif

#ifndef oss_InputStream_INCLUDED_ONCE
#define oss_InputStream_INCLUDED_ONCE



/** A structure that supports stream-oriented reading from an array of bytes
*/
struct oss_InputStream
{
	enum O_HZH cls ;
	const oss_uint8_t * bytes ;
	oss_int32_t size ;
	oss_int32_t position ;
	oss_bool_t isInError ;
	oss_uint8_t localStorage [8] ;
}
;
#endif

#endif
