#ifndef __GETSET_H__
#define __GETSET_H__

#include "dataview-uniq.h"

size_t GetStreamCurrentLength(BitStream *pBitStrm);
byte *GetBitstreamBuffer(BitStream *pBitStrm);
byte GetBufferByte(byte *p, size_t off);
void SetBufferByte(byte *p, size_t off, byte b);
void ResetStream(BitStream *pStrm);
BitStream *CreateStream(size_t bufferSize);
void DestroyStream(BitStream *pBitStrm);


/* REAL */
double PITCH_VALUE__Get(PITCH_VALUE* root);

/* REAL */
void PITCH_VALUE__Set(PITCH_VALUE* root, double value);

/* INTEGER */
asn1SccSint RESOLUTION__Get(RESOLUTION* root);

/* INTEGER */
void RESOLUTION__Set(RESOLUTION* root, asn1SccSint value);

/* ENUMERATED */
int VALIDITY__Get(VALIDITY* root);

/* ENUMERATED */
void VALIDITY__Set(VALIDITY* root, int value);

/* REAL */
double PITCH_SEQ__pitchVal_Get(PITCH_SEQ* root);

/* REAL */
void PITCH_SEQ__pitchVal_Set(PITCH_SEQ* root, double value);

/* INTEGER */
asn1SccSint PITCH_SEQ__res_Get(PITCH_SEQ* root);

/* INTEGER */
void PITCH_SEQ__res_Set(PITCH_SEQ* root, asn1SccSint value);

/* ENUMERATED */
int PITCH_SEQ__vali_Get(PITCH_SEQ* root);

/* ENUMERATED */
void PITCH_SEQ__vali_Set(PITCH_SEQ* root, int value);

/* INTEGER */
asn1SccSint MyInteger__Get(MyInteger* root);

/* INTEGER */
void MyInteger__Set(MyInteger* root, asn1SccSint value);

/* INTEGER */
asn1SccSint T_Int32__Get(T_Int32* root);

/* INTEGER */
void T_Int32__Set(T_Int32* root, asn1SccSint value);

/* INTEGER */
asn1SccSint T_UInt32__Get(T_UInt32* root);

/* INTEGER */
void T_UInt32__Set(T_UInt32* root, asn1SccSint value);

/* INTEGER */
asn1SccSint T_Int8__Get(T_Int8* root);

/* INTEGER */
void T_Int8__Set(T_Int8* root, asn1SccSint value);

/* INTEGER */
asn1SccSint T_UInt8__Get(T_UInt8* root);

/* INTEGER */
void T_UInt8__Set(T_UInt8* root, asn1SccSint value);

/* BOOLEAN */
flag T_Boolean__Get(T_Boolean* root);

/* BOOLEAN */
void T_Boolean__Set(T_Boolean* root, flag value);

/* Helper functions for NATIVE encodings */

void SetDataFor_PITCH_VALUE(void *dest, void *src);
byte* MovePtrBySizeOf_PITCH_VALUE(byte *pData);
byte* CreateInstanceOf_PITCH_VALUE(void);
void DestroyInstanceOf_PITCH_VALUE(byte *pData);

void SetDataFor_RESOLUTION(void *dest, void *src);
byte* MovePtrBySizeOf_RESOLUTION(byte *pData);
byte* CreateInstanceOf_RESOLUTION(void);
void DestroyInstanceOf_RESOLUTION(byte *pData);

void SetDataFor_VALIDITY(void *dest, void *src);
byte* MovePtrBySizeOf_VALIDITY(byte *pData);
byte* CreateInstanceOf_VALIDITY(void);
void DestroyInstanceOf_VALIDITY(byte *pData);

void SetDataFor_PITCH_SEQ(void *dest, void *src);
byte* MovePtrBySizeOf_PITCH_SEQ(byte *pData);
byte* CreateInstanceOf_PITCH_SEQ(void);
void DestroyInstanceOf_PITCH_SEQ(byte *pData);

void SetDataFor_MyInteger(void *dest, void *src);
byte* MovePtrBySizeOf_MyInteger(byte *pData);
byte* CreateInstanceOf_MyInteger(void);
void DestroyInstanceOf_MyInteger(byte *pData);

void SetDataFor_T_Int32(void *dest, void *src);
byte* MovePtrBySizeOf_T_Int32(byte *pData);
byte* CreateInstanceOf_T_Int32(void);
void DestroyInstanceOf_T_Int32(byte *pData);

void SetDataFor_T_UInt32(void *dest, void *src);
byte* MovePtrBySizeOf_T_UInt32(byte *pData);
byte* CreateInstanceOf_T_UInt32(void);
void DestroyInstanceOf_T_UInt32(byte *pData);

void SetDataFor_T_Int8(void *dest, void *src);
byte* MovePtrBySizeOf_T_Int8(byte *pData);
byte* CreateInstanceOf_T_Int8(void);
void DestroyInstanceOf_T_Int8(byte *pData);

void SetDataFor_T_UInt8(void *dest, void *src);
byte* MovePtrBySizeOf_T_UInt8(byte *pData);
byte* CreateInstanceOf_T_UInt8(void);
void DestroyInstanceOf_T_UInt8(byte *pData);

void SetDataFor_T_Boolean(void *dest, void *src);
byte* MovePtrBySizeOf_T_Boolean(byte *pData);
byte* CreateInstanceOf_T_Boolean(void);
void DestroyInstanceOf_T_Boolean(byte *pData);

void SetDataFor_T_Null_Record(void *dest, void *src);
byte* MovePtrBySizeOf_T_Null_Record(byte *pData);
byte* CreateInstanceOf_T_Null_Record(void);
void DestroyInstanceOf_T_Null_Record(byte *pData);

void SetDataFor_int(void *dest, void *src);
byte* MovePtrBySizeOf_int(byte *pData);
byte* CreateInstanceOf_int(void);
void DestroyInstanceOf_int(byte *pData);


#endif
