#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "dataview-uniq_getset.h"

size_t GetStreamCurrentLength(BitStream *pBitStrm) {
    return pBitStrm->currentByte + ((pBitStrm->currentBit+7)/8);
}

byte *GetBitstreamBuffer(BitStream *pBitStrm) {
    return pBitStrm->buf;
}

byte GetBufferByte(byte *p, size_t off) {
    assert(p);
    return p[off];
}

void SetBufferByte(byte *p, size_t off, byte b) {
    assert(p);
    p[off] = b;
}

void ResetStream(BitStream *pStrm) {
    assert(pStrm);
    assert(pStrm->count >= 0);
    pStrm->currentByte = 0;
    pStrm->currentBit = 0;
}

BitStream *CreateStream(size_t bufferSize) {
    BitStream *pBitStrm = malloc(sizeof(BitStream));
    assert(pBitStrm);
    unsigned char* buf = malloc(bufferSize);
    assert(buf);
    memset(buf, 0x0, bufferSize);
    BitStream_Init(pBitStrm, buf, bufferSize);
    return pBitStrm;
}

void DestroyStream(BitStream *pBitStrm) {
    assert(pBitStrm);
    assert(pBitStrm->buf);
    free(pBitStrm->buf);
    free(pBitStrm);
}


/* REAL */
double PITCH_VALUE__Get(PITCH_VALUE* root)
{
    return (*root);
}

/* REAL */
void PITCH_VALUE__Set(PITCH_VALUE* root, double value)
{
    (*root) = value;
}

/* INTEGER */
asn1SccSint RESOLUTION__Get(RESOLUTION* root)
{
    return (*root);
}

/* INTEGER */
void RESOLUTION__Set(RESOLUTION* root, asn1SccSint value)
{
    (*root) = value;
}

/* ENUMERATED */
int VALIDITY__Get(VALIDITY* root)
{
    return (*root);
}

/* ENUMERATED */
void VALIDITY__Set(VALIDITY* root, int value)
{
    (*root) = value;
}

/* REAL */
double PITCH_SEQ__pitchVal_Get(PITCH_SEQ* root)
{
    return (*root).pitchVal;
}

/* REAL */
void PITCH_SEQ__pitchVal_Set(PITCH_SEQ* root, double value)
{
    (*root).pitchVal = value;
}

/* INTEGER */
asn1SccSint PITCH_SEQ__res_Get(PITCH_SEQ* root)
{
    return (*root).res;
}

/* INTEGER */
void PITCH_SEQ__res_Set(PITCH_SEQ* root, asn1SccSint value)
{
    (*root).res = value;
}

/* ENUMERATED */
int PITCH_SEQ__vali_Get(PITCH_SEQ* root)
{
    return (*root).vali;
}

/* ENUMERATED */
void PITCH_SEQ__vali_Set(PITCH_SEQ* root, int value)
{
    (*root).vali = value;
}

/* INTEGER */
asn1SccSint MyInteger__Get(MyInteger* root)
{
    return (*root);
}

/* INTEGER */
void MyInteger__Set(MyInteger* root, asn1SccSint value)
{
    (*root) = value;
}

/* INTEGER */
asn1SccSint T_Int32__Get(T_Int32* root)
{
    return (*root);
}

/* INTEGER */
void T_Int32__Set(T_Int32* root, asn1SccSint value)
{
    (*root) = value;
}

/* INTEGER */
asn1SccSint T_UInt32__Get(T_UInt32* root)
{
    return (*root);
}

/* INTEGER */
void T_UInt32__Set(T_UInt32* root, asn1SccSint value)
{
    (*root) = value;
}

/* INTEGER */
asn1SccSint T_Int8__Get(T_Int8* root)
{
    return (*root);
}

/* INTEGER */
void T_Int8__Set(T_Int8* root, asn1SccSint value)
{
    (*root) = value;
}

/* INTEGER */
asn1SccSint T_UInt8__Get(T_UInt8* root)
{
    return (*root);
}

/* INTEGER */
void T_UInt8__Set(T_UInt8* root, asn1SccSint value)
{
    (*root) = value;
}

/* BOOLEAN */
flag T_Boolean__Get(T_Boolean* root)
{
    return (*root);
}

/* BOOLEAN */
void T_Boolean__Set(T_Boolean* root, flag value)
{
    (*root) = value;
}

/* Helper functions for NATIVE encodings */

void SetDataFor_PITCH_VALUE(void *dest, void *src)
{
    memcpy(dest, src, sizeof(PITCH_VALUE));
}

byte* MovePtrBySizeOf_PITCH_VALUE(byte *pData)
{
    return pData + sizeof(PITCH_VALUE);
}

byte* CreateInstanceOf_PITCH_VALUE() {
    PITCH_VALUE *p = (PITCH_VALUE*)malloc(sizeof(PITCH_VALUE));
    PITCH_VALUE_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_PITCH_VALUE(byte *pData) {
    free(pData);
}

void SetDataFor_RESOLUTION(void *dest, void *src)
{
    memcpy(dest, src, sizeof(RESOLUTION));
}

byte* MovePtrBySizeOf_RESOLUTION(byte *pData)
{
    return pData + sizeof(RESOLUTION);
}

byte* CreateInstanceOf_RESOLUTION() {
    RESOLUTION *p = (RESOLUTION*)malloc(sizeof(RESOLUTION));
    RESOLUTION_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_RESOLUTION(byte *pData) {
    free(pData);
}

void SetDataFor_VALIDITY(void *dest, void *src)
{
    memcpy(dest, src, sizeof(VALIDITY));
}

byte* MovePtrBySizeOf_VALIDITY(byte *pData)
{
    return pData + sizeof(VALIDITY);
}

byte* CreateInstanceOf_VALIDITY() {
    VALIDITY *p = (VALIDITY*)malloc(sizeof(VALIDITY));
    VALIDITY_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_VALIDITY(byte *pData) {
    free(pData);
}

void SetDataFor_PITCH_SEQ(void *dest, void *src)
{
    memcpy(dest, src, sizeof(PITCH_SEQ));
}

byte* MovePtrBySizeOf_PITCH_SEQ(byte *pData)
{
    return pData + sizeof(PITCH_SEQ);
}

byte* CreateInstanceOf_PITCH_SEQ() {
    PITCH_SEQ *p = (PITCH_SEQ*)malloc(sizeof(PITCH_SEQ));
    PITCH_SEQ_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_PITCH_SEQ(byte *pData) {
    free(pData);
}

void SetDataFor_MyInteger(void *dest, void *src)
{
    memcpy(dest, src, sizeof(MyInteger));
}

byte* MovePtrBySizeOf_MyInteger(byte *pData)
{
    return pData + sizeof(MyInteger);
}

byte* CreateInstanceOf_MyInteger() {
    MyInteger *p = (MyInteger*)malloc(sizeof(MyInteger));
    MyInteger_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_MyInteger(byte *pData) {
    free(pData);
}

void SetDataFor_T_Int32(void *dest, void *src)
{
    memcpy(dest, src, sizeof(T_Int32));
}

byte* MovePtrBySizeOf_T_Int32(byte *pData)
{
    return pData + sizeof(T_Int32);
}

byte* CreateInstanceOf_T_Int32() {
    T_Int32 *p = (T_Int32*)malloc(sizeof(T_Int32));
    T_Int32_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_T_Int32(byte *pData) {
    free(pData);
}

void SetDataFor_T_UInt32(void *dest, void *src)
{
    memcpy(dest, src, sizeof(T_UInt32));
}

byte* MovePtrBySizeOf_T_UInt32(byte *pData)
{
    return pData + sizeof(T_UInt32);
}

byte* CreateInstanceOf_T_UInt32() {
    T_UInt32 *p = (T_UInt32*)malloc(sizeof(T_UInt32));
    T_UInt32_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_T_UInt32(byte *pData) {
    free(pData);
}

void SetDataFor_T_Int8(void *dest, void *src)
{
    memcpy(dest, src, sizeof(T_Int8));
}

byte* MovePtrBySizeOf_T_Int8(byte *pData)
{
    return pData + sizeof(T_Int8);
}

byte* CreateInstanceOf_T_Int8() {
    T_Int8 *p = (T_Int8*)malloc(sizeof(T_Int8));
    T_Int8_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_T_Int8(byte *pData) {
    free(pData);
}

void SetDataFor_T_UInt8(void *dest, void *src)
{
    memcpy(dest, src, sizeof(T_UInt8));
}

byte* MovePtrBySizeOf_T_UInt8(byte *pData)
{
    return pData + sizeof(T_UInt8);
}

byte* CreateInstanceOf_T_UInt8() {
    T_UInt8 *p = (T_UInt8*)malloc(sizeof(T_UInt8));
    T_UInt8_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_T_UInt8(byte *pData) {
    free(pData);
}

void SetDataFor_T_Boolean(void *dest, void *src)
{
    memcpy(dest, src, sizeof(T_Boolean));
}

byte* MovePtrBySizeOf_T_Boolean(byte *pData)
{
    return pData + sizeof(T_Boolean);
}

byte* CreateInstanceOf_T_Boolean() {
    T_Boolean *p = (T_Boolean*)malloc(sizeof(T_Boolean));
    T_Boolean_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_T_Boolean(byte *pData) {
    free(pData);
}

void SetDataFor_T_Null_Record(void *dest, void *src)
{
    memcpy(dest, src, sizeof(T_Null_Record));
}

byte* MovePtrBySizeOf_T_Null_Record(byte *pData)
{
    return pData + sizeof(T_Null_Record);
}

byte* CreateInstanceOf_T_Null_Record() {
    T_Null_Record *p = (T_Null_Record*)malloc(sizeof(T_Null_Record));
    T_Null_Record_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_T_Null_Record(byte *pData) {
    free(pData);
}

void SetDataFor_int(void *dest, void *src)
{
    memcpy(dest, src, sizeof(int));
}

byte* MovePtrBySizeOf_int(byte *pData)
{
    return pData + sizeof(int);
}

byte* CreateInstanceOf_int() {
    int *p = (int*)malloc(sizeof(int));
    *p = 0;
    return (byte*)p;
}

void DestroyInstanceOf_int(byte *pData) {
    free(pData);
}

