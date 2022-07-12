#ifndef __C_DATAVIEW_UNIQ_H__
#define __C_DATAVIEW_UNIQ_H__

#if defined( __unix__ ) || defined( __MSP430__ )
#include <stdlib.h> /* for size_t */
#else
typedef unsigned size_t;
#endif

#ifndef STATIC
#define STATIC
#endif


#include "dataview-uniq.h" // Space certified compiler generated

#include "../../system_config.h" // Choose ASN.1 Types to use

#ifdef __NEED_PITCH_VALUE_UPER
int Encode_UPER_PITCH_VALUE(void *pBuffer, size_t iMaxBufferSize, const asn1SccPITCH_VALUE *pSrc);
#endif

#ifdef __NEED_PITCH_VALUE_ACN
int Encode_ACN_PITCH_VALUE(void *pBuffer, size_t iMaxBufferSize, asn1SccPITCH_VALUE *pSrc);
#endif

#ifdef __NEED_PITCH_VALUE_NATIVE
int Encode_NATIVE_PITCH_VALUE(void *pBuffer, size_t iMaxBufferSize, const asn1SccPITCH_VALUE *pSrc);
#endif

#ifdef __NEED_PITCH_VALUE_UPER
int Decode_UPER_PITCH_VALUE(asn1SccPITCH_VALUE *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_PITCH_VALUE_ACN
int Decode_ACN_PITCH_VALUE(asn1SccPITCH_VALUE *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_PITCH_VALUE_NATIVE
int Decode_NATIVE_PITCH_VALUE(asn1SccPITCH_VALUE *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_RESOLUTION_UPER
int Encode_UPER_RESOLUTION(void *pBuffer, size_t iMaxBufferSize, const asn1SccRESOLUTION *pSrc);
#endif

#ifdef __NEED_RESOLUTION_ACN
int Encode_ACN_RESOLUTION(void *pBuffer, size_t iMaxBufferSize, asn1SccRESOLUTION *pSrc);
#endif

#ifdef __NEED_RESOLUTION_NATIVE
int Encode_NATIVE_RESOLUTION(void *pBuffer, size_t iMaxBufferSize, const asn1SccRESOLUTION *pSrc);
#endif

#ifdef __NEED_RESOLUTION_UPER
int Decode_UPER_RESOLUTION(asn1SccRESOLUTION *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_RESOLUTION_ACN
int Decode_ACN_RESOLUTION(asn1SccRESOLUTION *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_RESOLUTION_NATIVE
int Decode_NATIVE_RESOLUTION(asn1SccRESOLUTION *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_VALIDITY_UPER
int Encode_UPER_VALIDITY(void *pBuffer, size_t iMaxBufferSize, const asn1SccVALIDITY *pSrc);
#endif

#ifdef __NEED_VALIDITY_ACN
int Encode_ACN_VALIDITY(void *pBuffer, size_t iMaxBufferSize, asn1SccVALIDITY *pSrc);
#endif

#ifdef __NEED_VALIDITY_NATIVE
int Encode_NATIVE_VALIDITY(void *pBuffer, size_t iMaxBufferSize, const asn1SccVALIDITY *pSrc);
#endif

#ifdef __NEED_VALIDITY_UPER
int Decode_UPER_VALIDITY(asn1SccVALIDITY *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_VALIDITY_ACN
int Decode_ACN_VALIDITY(asn1SccVALIDITY *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_VALIDITY_NATIVE
int Decode_NATIVE_VALIDITY(asn1SccVALIDITY *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_PITCH_SEQ_UPER
int Encode_UPER_PITCH_SEQ(void *pBuffer, size_t iMaxBufferSize, const asn1SccPITCH_SEQ *pSrc);
#endif

#ifdef __NEED_PITCH_SEQ_ACN
int Encode_ACN_PITCH_SEQ(void *pBuffer, size_t iMaxBufferSize, asn1SccPITCH_SEQ *pSrc);
#endif

#ifdef __NEED_PITCH_SEQ_NATIVE
int Encode_NATIVE_PITCH_SEQ(void *pBuffer, size_t iMaxBufferSize, const asn1SccPITCH_SEQ *pSrc);
#endif

#ifdef __NEED_PITCH_SEQ_UPER
int Decode_UPER_PITCH_SEQ(asn1SccPITCH_SEQ *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_PITCH_SEQ_ACN
int Decode_ACN_PITCH_SEQ(asn1SccPITCH_SEQ *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_PITCH_SEQ_NATIVE
int Decode_NATIVE_PITCH_SEQ(asn1SccPITCH_SEQ *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyInteger_UPER
int Encode_UPER_MyInteger(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyInteger *pSrc);
#endif

#ifdef __NEED_MyInteger_ACN
int Encode_ACN_MyInteger(void *pBuffer, size_t iMaxBufferSize, asn1SccMyInteger *pSrc);
#endif

#ifdef __NEED_MyInteger_NATIVE
int Encode_NATIVE_MyInteger(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyInteger *pSrc);
#endif

#ifdef __NEED_MyInteger_UPER
int Decode_UPER_MyInteger(asn1SccMyInteger *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyInteger_ACN
int Decode_ACN_MyInteger(asn1SccMyInteger *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyInteger_NATIVE
int Decode_NATIVE_MyInteger(asn1SccMyInteger *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int32_UPER
int Encode_UPER_T_Int32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int32 *pSrc);
#endif

#ifdef __NEED_T_Int32_ACN
int Encode_ACN_T_Int32(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Int32 *pSrc);
#endif

#ifdef __NEED_T_Int32_NATIVE
int Encode_NATIVE_T_Int32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int32 *pSrc);
#endif

#ifdef __NEED_T_Int32_UPER
int Decode_UPER_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int32_ACN
int Decode_ACN_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int32_NATIVE
int Decode_NATIVE_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt32_UPER
int Encode_UPER_T_UInt32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt32 *pSrc);
#endif

#ifdef __NEED_T_UInt32_ACN
int Encode_ACN_T_UInt32(void *pBuffer, size_t iMaxBufferSize, asn1SccT_UInt32 *pSrc);
#endif

#ifdef __NEED_T_UInt32_NATIVE
int Encode_NATIVE_T_UInt32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt32 *pSrc);
#endif

#ifdef __NEED_T_UInt32_UPER
int Decode_UPER_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt32_ACN
int Decode_ACN_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt32_NATIVE
int Decode_NATIVE_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int8_UPER
int Encode_UPER_T_Int8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int8 *pSrc);
#endif

#ifdef __NEED_T_Int8_ACN
int Encode_ACN_T_Int8(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Int8 *pSrc);
#endif

#ifdef __NEED_T_Int8_NATIVE
int Encode_NATIVE_T_Int8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int8 *pSrc);
#endif

#ifdef __NEED_T_Int8_UPER
int Decode_UPER_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int8_ACN
int Decode_ACN_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int8_NATIVE
int Decode_NATIVE_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt8_UPER
int Encode_UPER_T_UInt8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt8 *pSrc);
#endif

#ifdef __NEED_T_UInt8_ACN
int Encode_ACN_T_UInt8(void *pBuffer, size_t iMaxBufferSize, asn1SccT_UInt8 *pSrc);
#endif

#ifdef __NEED_T_UInt8_NATIVE
int Encode_NATIVE_T_UInt8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt8 *pSrc);
#endif

#ifdef __NEED_T_UInt8_UPER
int Decode_UPER_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt8_ACN
int Decode_ACN_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt8_NATIVE
int Decode_NATIVE_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Boolean_UPER
int Encode_UPER_T_Boolean(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Boolean *pSrc);
#endif

#ifdef __NEED_T_Boolean_ACN
int Encode_ACN_T_Boolean(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Boolean *pSrc);
#endif

#ifdef __NEED_T_Boolean_NATIVE
int Encode_NATIVE_T_Boolean(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Boolean *pSrc);
#endif

#ifdef __NEED_T_Boolean_UPER
int Decode_UPER_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Boolean_ACN
int Decode_ACN_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Boolean_NATIVE
int Decode_NATIVE_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Null_Record_UPER
int Encode_UPER_T_Null_Record(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Null_Record *pSrc);
#endif

#ifdef __NEED_T_Null_Record_ACN
int Encode_ACN_T_Null_Record(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Null_Record *pSrc);
#endif

#ifdef __NEED_T_Null_Record_NATIVE
int Encode_NATIVE_T_Null_Record(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Null_Record *pSrc);
#endif

#ifdef __NEED_T_Null_Record_UPER
int Decode_UPER_T_Null_Record(asn1SccT_Null_Record *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Null_Record_ACN
int Decode_ACN_T_Null_Record(asn1SccT_Null_Record *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Null_Record_NATIVE
int Decode_NATIVE_T_Null_Record(asn1SccT_Null_Record *pDst, void *pBuffer, size_t iBufferSize);
#endif


#endif
