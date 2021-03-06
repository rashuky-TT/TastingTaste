/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>

#include "asn1crt_encoding.h"
#include "asn1crt_encoding_uper.h"
#include "asn1crt_encoding_acn.h"

#include "dataview-uniq.h"




flag asn1SccPITCH_VALUE_Equal(const asn1SccPITCH_VALUE* pVal1, const asn1SccPITCH_VALUE* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

void asn1SccPITCH_VALUE_Initialize(asn1SccPITCH_VALUE* pVal)
{
	(void)pVal;


	(*(pVal)) = 0.0000000000000000000E+000;
}

flag asn1SccPITCH_VALUE_IsConstraintValid(const asn1SccPITCH_VALUE* pVal, int* pErrCode)
{
    flag ret = TRUE;
    ret = ((-9.0000000000000000000E+001 <= (*(pVal))) && ((*(pVal)) <= 9.0000000000000000000E+001));
    *pErrCode = ret ? 0 :  ERR_PITCH_VALUE; 

	return ret;
}

flag asn1SccPITCH_VALUE_Encode(const asn1SccPITCH_VALUE* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;


	*pErrCode = 0;
	ret = bCheckConstraints ? asn1SccPITCH_VALUE_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    BitStream_EncodeReal(pBitStrm, (*(pVal)));
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccPITCH_VALUE_Decode(asn1SccPITCH_VALUE* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeReal(pBitStrm, pVal);
	*pErrCode = ret ? 0 : ERR_UPER_DECODE_PITCH_VALUE;

	return ret  && asn1SccPITCH_VALUE_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccPITCH_VALUE_ACN_Encode(const asn1SccPITCH_VALUE* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    *pErrCode = 0;
	ret = bCheckConstraints ? asn1SccPITCH_VALUE_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    Acn_Enc_Real_IEEE754_32_big_endian(pBitStrm, (*(pVal)));
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccPITCH_VALUE_ACN_Decode(asn1SccPITCH_VALUE* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = Acn_Dec_Real_IEEE754_32_big_endian(pBitStrm, pVal);
	*pErrCode = ret ? 0 : ERR_ACN_DECODE_PITCH_VALUE;

    return ret && asn1SccPITCH_VALUE_IsConstraintValid(pVal, pErrCode);
}



flag asn1SccRESOLUTION_Equal(const asn1SccRESOLUTION* pVal1, const asn1SccRESOLUTION* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

void asn1SccRESOLUTION_Initialize(asn1SccRESOLUTION* pVal)
{
	(void)pVal;


	(*(pVal)) = 10;
}

flag asn1SccRESOLUTION_IsConstraintValid(const asn1SccRESOLUTION* pVal, int* pErrCode)
{
    flag ret = TRUE;
    ret = ((10UL <= (*(pVal))) && ((*(pVal)) <= 16UL));
    *pErrCode = ret ? 0 :  ERR_RESOLUTION; 

	return ret;
}

flag asn1SccRESOLUTION_Encode(const asn1SccRESOLUTION* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;


	*pErrCode = 0;
	ret = bCheckConstraints ? asn1SccRESOLUTION_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, (*(pVal)), 10, 16);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccRESOLUTION_Decode(asn1SccRESOLUTION* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 10, 16);
	*pErrCode = ret ? 0 : ERR_UPER_DECODE_RESOLUTION;

	return ret  && asn1SccRESOLUTION_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccRESOLUTION_ACN_Encode(const asn1SccRESOLUTION* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    *pErrCode = 0;
	ret = bCheckConstraints ? asn1SccRESOLUTION_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    Acn_Enc_Int_PositiveInteger_ConstSize_8(pBitStrm, (*(pVal)));
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccRESOLUTION_ACN_Decode(asn1SccRESOLUTION* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = Acn_Dec_Int_PositiveInteger_ConstSize_8(pBitStrm, pVal);
	*pErrCode = ret ? 0 : ERR_ACN_DECODE_RESOLUTION;

    return ret && asn1SccRESOLUTION_IsConstraintValid(pVal, pErrCode);
}



flag asn1SccVALIDITY_Equal(const asn1SccVALIDITY* pVal1, const asn1SccVALIDITY* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

void asn1SccVALIDITY_Initialize(asn1SccVALIDITY* pVal)
{
	(void)pVal;


	(*(pVal)) = asn1Sccvalid;
}

flag asn1SccVALIDITY_IsConstraintValid(const asn1SccVALIDITY* pVal, int* pErrCode)
{
    flag ret = TRUE;
    ret = ((((*(pVal)) == asn1Sccvalid)) || (((*(pVal)) == asn1Sccinvalid)));
    *pErrCode = ret ? 0 :  ERR_VALIDITY; 

	return ret;
}

flag asn1SccVALIDITY_Encode(const asn1SccVALIDITY* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;


	*pErrCode = 0;
	ret = bCheckConstraints ? asn1SccVALIDITY_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    switch((*(pVal))) 
	    {
	        case asn1Sccvalid:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 0, 0, 1);
	        	break;
	        case asn1Sccinvalid:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 1, 0, 1);
	        	break;
	        default:                    /*COVERAGE_IGNORE*/
	    	    *pErrCode = ERR_UPER_ENCODE_VALIDITY; /*COVERAGE_IGNORE*/
	    	    ret = FALSE;            /*COVERAGE_IGNORE*/
	    }
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccVALIDITY_Decode(asn1SccVALIDITY* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	{
	    asn1SccSint enumIndex;
	    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &enumIndex, 0, 1);
	    *pErrCode = ret ? 0 : ERR_UPER_DECODE_VALIDITY;
	    if (ret) {
	        switch(enumIndex) 
	        {
	            case 0: 
	                (*(pVal)) = asn1Sccvalid;
	                break;
	            case 1: 
	                (*(pVal)) = asn1Sccinvalid;
	                break;
	            default:                        /*COVERAGE_IGNORE*/
		            *pErrCode = ERR_UPER_DECODE_VALIDITY;     /*COVERAGE_IGNORE*/
		            ret = FALSE;                /*COVERAGE_IGNORE*/
	        }
	    } else {
	        (*(pVal)) = asn1Sccvalid;             /*COVERAGE_IGNORE*/
	    }
	}

	return ret  && asn1SccVALIDITY_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccVALIDITY_ACN_Encode(const asn1SccVALIDITY* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

	asn1SccUint uIntVal;
    *pErrCode = 0;
	ret = bCheckConstraints ? asn1SccVALIDITY_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    switch((*(pVal))) { 
	        case asn1Sccvalid:
	            uIntVal = 0;
	            break;
	        case asn1Sccinvalid:
	            uIntVal = 1;
	            break;
	        default:                                    /*COVERAGE_IGNORE*/
	            ret = FALSE;                            /*COVERAGE_IGNORE*/
	            *pErrCode = ERR_ACN_ENCODE_VALIDITY;                 /*COVERAGE_IGNORE*/
	    }
	    if (ret) {
	    	Acn_Enc_Int_PositiveInteger_ConstSize_8(pBitStrm, uIntVal);
	    }
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccVALIDITY_ACN_Decode(asn1SccVALIDITY* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;

	asn1SccUint uIntVal;

	ret = Acn_Dec_Int_PositiveInteger_ConstSize_8(pBitStrm, (&(uIntVal)));
	*pErrCode = ret ? 0 : ERR_ACN_DECODE_VALIDITY;
	if (ret) {
	    switch (uIntVal) {
	        case 0:
	            (*(pVal)) = asn1Sccvalid;
	            break;
	        case 1:
	            (*(pVal)) = asn1Sccinvalid;
	            break;
	    default:                                    /*COVERAGE_IGNORE*/
	        ret = FALSE;                            /*COVERAGE_IGNORE*/
	        *pErrCode = ERR_ACN_DECODE_VALIDITY;                 /*COVERAGE_IGNORE*/
	    }
	} /*COVERAGE_IGNORE*/

    return ret && asn1SccVALIDITY_IsConstraintValid(pVal, pErrCode);
}



flag asn1SccPITCH_SEQ_Equal(const asn1SccPITCH_SEQ* pVal1, const asn1SccPITCH_SEQ* pVal2)
{
	flag ret=TRUE;

    ret = (pVal1->pitchVal == pVal2->pitchVal);

    if (ret) {
        ret = (pVal1->res == pVal2->res);

        if (ret) {
            ret = (pVal1->vali == pVal2->vali);

        }

    }

	return ret;

}

void asn1SccPITCH_SEQ_Initialize(asn1SccPITCH_SEQ* pVal)
{
	(void)pVal;



	/*set pitchVal */
	asn1SccPITCH_VALUE_Initialize((&(pVal->pitchVal)));
	/*set res */
	asn1SccRESOLUTION_Initialize((&(pVal->res)));
	/*set vali */
	asn1SccVALIDITY_Initialize((&(pVal->vali)));
}

flag asn1SccPITCH_SEQ_IsConstraintValid(const asn1SccPITCH_SEQ* pVal, int* pErrCode)
{
    flag ret = TRUE;
    ret = asn1SccPITCH_VALUE_IsConstraintValid((&(pVal->pitchVal)), pErrCode);
    if (ret) {
        ret = asn1SccRESOLUTION_IsConstraintValid((&(pVal->res)), pErrCode);
        if (ret) {
            ret = asn1SccVALIDITY_IsConstraintValid((&(pVal->vali)), pErrCode);
        }
    }

	return ret;
}

flag asn1SccPITCH_SEQ_Encode(const asn1SccPITCH_SEQ* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;


	*pErrCode = 0;
	ret = bCheckConstraints ? asn1SccPITCH_SEQ_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    /*Encode pitchVal */
	    ret = asn1SccPITCH_VALUE_Encode((&(pVal->pitchVal)), pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode res */
	        ret = asn1SccRESOLUTION_Encode((&(pVal->res)), pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode vali */
	            ret = asn1SccVALIDITY_Encode((&(pVal->vali)), pBitStrm, pErrCode, FALSE);
	        }
	    }
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccPITCH_SEQ_Decode(asn1SccPITCH_SEQ* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	/*Decode pitchVal */
	ret = asn1SccPITCH_VALUE_Decode((&(pVal->pitchVal)), pBitStrm, pErrCode);
	if (ret) {
	    /*Decode res */
	    ret = asn1SccRESOLUTION_Decode((&(pVal->res)), pBitStrm, pErrCode);
	    if (ret) {
	        /*Decode vali */
	        ret = asn1SccVALIDITY_Decode((&(pVal->vali)), pBitStrm, pErrCode);
	    }
	}

	return ret  && asn1SccPITCH_SEQ_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccPITCH_SEQ_ACN_Encode(const asn1SccPITCH_SEQ* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    *pErrCode = 0;
	ret = bCheckConstraints ? asn1SccPITCH_SEQ_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    /*Encode pitchVal */
	    ret = asn1SccPITCH_VALUE_ACN_Encode((&(pVal->pitchVal)), pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode res */
	        ret = asn1SccRESOLUTION_ACN_Encode((&(pVal->res)), pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode vali */
	            ret = asn1SccVALIDITY_ACN_Encode((&(pVal->vali)), pBitStrm, pErrCode, FALSE);
	        }

	    }

    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccPITCH_SEQ_ACN_Decode(asn1SccPITCH_SEQ* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	/*Decode pitchVal */
	ret = asn1SccPITCH_VALUE_ACN_Decode((&(pVal->pitchVal)), pBitStrm, pErrCode);
	if (ret) {
	    /*Decode res */
	    ret = asn1SccRESOLUTION_ACN_Decode((&(pVal->res)), pBitStrm, pErrCode);
	    if (ret) {
	        /*Decode vali */
	        ret = asn1SccVALIDITY_ACN_Decode((&(pVal->vali)), pBitStrm, pErrCode);
	    }

	}


    return ret && asn1SccPITCH_SEQ_IsConstraintValid(pVal, pErrCode);
}



flag asn1SccMyInteger_Equal(const asn1SccMyInteger* pVal1, const asn1SccMyInteger* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

void asn1SccMyInteger_Initialize(asn1SccMyInteger* pVal)
{
	(void)pVal;


	(*(pVal)) = 0;
}

flag asn1SccMyInteger_IsConstraintValid(const asn1SccMyInteger* pVal, int* pErrCode)
{
    flag ret = TRUE;
    ret = ((*(pVal)) <= 10000UL);
    *pErrCode = ret ? 0 :  ERR_MYINTEGER; 

	return ret;
}

flag asn1SccMyInteger_Encode(const asn1SccMyInteger* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;


	*pErrCode = 0;
	ret = bCheckConstraints ? asn1SccMyInteger_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, (*(pVal)), 0, 10000);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccMyInteger_Decode(asn1SccMyInteger* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 10000);
	*pErrCode = ret ? 0 : ERR_UPER_DECODE_MYINTEGER;

	return ret  && asn1SccMyInteger_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccMyInteger_ACN_Encode(const asn1SccMyInteger* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    *pErrCode = 0;
	ret = bCheckConstraints ? asn1SccMyInteger_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, (*(pVal)), 0, 10000);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccMyInteger_ACN_Decode(asn1SccMyInteger* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 10000);
	*pErrCode = ret ? 0 : ERR_ACN_DECODE_MYINTEGER;

    return ret && asn1SccMyInteger_IsConstraintValid(pVal, pErrCode);
}



flag asn1SccT_Int32_Equal(const asn1SccT_Int32* pVal1, const asn1SccT_Int32* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

void asn1SccT_Int32_Initialize(asn1SccT_Int32* pVal)
{
	(void)pVal;


	(*(pVal)) = 0;
}

flag asn1SccT_Int32_IsConstraintValid(const asn1SccT_Int32* pVal, int* pErrCode)
{
    flag ret = TRUE;
    ret = ((-2147483648LL <= (*(pVal))) && ((*(pVal)) <= 2147483647LL));
    *pErrCode = ret ? 0 :  ERR_T_INT32; 

	return ret;
}

flag asn1SccT_Int32_Encode(const asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;


	*pErrCode = 0;
	ret = bCheckConstraints ? asn1SccT_Int32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, (*(pVal)), -2147483648LL, 2147483647LL);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_Int32_Decode(asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -2147483648LL, 2147483647LL);
	*pErrCode = ret ? 0 : ERR_UPER_DECODE_T_INT32;

	return ret  && asn1SccT_Int32_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccT_Int32_ACN_Encode(const asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    *pErrCode = 0;
	ret = bCheckConstraints ? asn1SccT_Int32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, (*(pVal)), -2147483648LL, 2147483647LL);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_Int32_ACN_Decode(asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -2147483648LL, 2147483647LL);
	*pErrCode = ret ? 0 : ERR_ACN_DECODE_T_INT32;

    return ret && asn1SccT_Int32_IsConstraintValid(pVal, pErrCode);
}



flag asn1SccT_UInt32_Equal(const asn1SccT_UInt32* pVal1, const asn1SccT_UInt32* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

void asn1SccT_UInt32_Initialize(asn1SccT_UInt32* pVal)
{
	(void)pVal;


	(*(pVal)) = 0;
}

flag asn1SccT_UInt32_IsConstraintValid(const asn1SccT_UInt32* pVal, int* pErrCode)
{
    flag ret = TRUE;
    ret = ((*(pVal)) <= 4294967295UL);
    *pErrCode = ret ? 0 :  ERR_T_UINT32; 

	return ret;
}

flag asn1SccT_UInt32_Encode(const asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;


	*pErrCode = 0;
	ret = bCheckConstraints ? asn1SccT_UInt32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, (*(pVal)), 0, 4294967295LL);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_UInt32_Decode(asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 4294967295LL);
	*pErrCode = ret ? 0 : ERR_UPER_DECODE_T_UINT32;

	return ret  && asn1SccT_UInt32_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccT_UInt32_ACN_Encode(const asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    *pErrCode = 0;
	ret = bCheckConstraints ? asn1SccT_UInt32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, (*(pVal)), 0, 4294967295LL);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_UInt32_ACN_Decode(asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 4294967295LL);
	*pErrCode = ret ? 0 : ERR_ACN_DECODE_T_UINT32;

    return ret && asn1SccT_UInt32_IsConstraintValid(pVal, pErrCode);
}



flag asn1SccT_Int8_Equal(const asn1SccT_Int8* pVal1, const asn1SccT_Int8* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

void asn1SccT_Int8_Initialize(asn1SccT_Int8* pVal)
{
	(void)pVal;


	(*(pVal)) = 0;
}

flag asn1SccT_Int8_IsConstraintValid(const asn1SccT_Int8* pVal, int* pErrCode)
{
    flag ret = TRUE;
    ret = ((-128LL <= (*(pVal))) && ((*(pVal)) <= 127LL));
    *pErrCode = ret ? 0 :  ERR_T_INT8; 

	return ret;
}

flag asn1SccT_Int8_Encode(const asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;


	*pErrCode = 0;
	ret = bCheckConstraints ? asn1SccT_Int8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, (*(pVal)), -128, 127);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_Int8_Decode(asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -128, 127);
	*pErrCode = ret ? 0 : ERR_UPER_DECODE_T_INT8;

	return ret  && asn1SccT_Int8_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccT_Int8_ACN_Encode(const asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    *pErrCode = 0;
	ret = bCheckConstraints ? asn1SccT_Int8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, (*(pVal)), -128, 127);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_Int8_ACN_Decode(asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -128, 127);
	*pErrCode = ret ? 0 : ERR_ACN_DECODE_T_INT8;

    return ret && asn1SccT_Int8_IsConstraintValid(pVal, pErrCode);
}



flag asn1SccT_UInt8_Equal(const asn1SccT_UInt8* pVal1, const asn1SccT_UInt8* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

void asn1SccT_UInt8_Initialize(asn1SccT_UInt8* pVal)
{
	(void)pVal;


	(*(pVal)) = 0;
}

flag asn1SccT_UInt8_IsConstraintValid(const asn1SccT_UInt8* pVal, int* pErrCode)
{
    flag ret = TRUE;
    ret = ((*(pVal)) <= 255UL);
    *pErrCode = ret ? 0 :  ERR_T_UINT8; 

	return ret;
}

flag asn1SccT_UInt8_Encode(const asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;


	*pErrCode = 0;
	ret = bCheckConstraints ? asn1SccT_UInt8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, (*(pVal)), 0, 255);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_UInt8_Decode(asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 255);
	*pErrCode = ret ? 0 : ERR_UPER_DECODE_T_UINT8;

	return ret  && asn1SccT_UInt8_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccT_UInt8_ACN_Encode(const asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    *pErrCode = 0;
	ret = bCheckConstraints ? asn1SccT_UInt8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, (*(pVal)), 0, 255);
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_UInt8_ACN_Decode(asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 255);
	*pErrCode = ret ? 0 : ERR_ACN_DECODE_T_UINT8;

    return ret && asn1SccT_UInt8_IsConstraintValid(pVal, pErrCode);
}



flag asn1SccT_Boolean_Equal(const asn1SccT_Boolean* pVal1, const asn1SccT_Boolean* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

void asn1SccT_Boolean_Initialize(asn1SccT_Boolean* pVal)
{
	(void)pVal;


	(*(pVal)) = FALSE;
}

flag asn1SccT_Boolean_IsConstraintValid(const asn1SccT_Boolean* pVal, int* pErrCode)
{
    flag ret = TRUE;
	(void)pVal;
    ret = TRUE;
    *pErrCode = 0;

	return ret;
}

flag asn1SccT_Boolean_Encode(const asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;


	*pErrCode = 0;
	ret = bCheckConstraints ? asn1SccT_Boolean_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    BitStream_AppendBit(pBitStrm,(*(pVal)));
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_Boolean_Decode(asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_ReadBit(pBitStrm, pVal);
	*pErrCode = ret ? 0 : ERR_UPER_DECODE_T_BOOLEAN;

	return ret  && asn1SccT_Boolean_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccT_Boolean_ACN_Encode(const asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    *pErrCode = 0;
	ret = bCheckConstraints ? asn1SccT_Boolean_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
	    BitStream_AppendBit(pBitStrm,(*(pVal)));
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_Boolean_ACN_Decode(asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;


	ret = BitStream_ReadBit(pBitStrm, pVal);
	*pErrCode = ret ? 0 : ERR_ACN_DECODE_T_BOOLEAN;

    return ret && asn1SccT_Boolean_IsConstraintValid(pVal, pErrCode);
}



flag asn1SccT_Null_Record_Equal(const asn1SccT_Null_Record* pVal1, const asn1SccT_Null_Record* pVal2)
{
	(void)pVal1;
	(void)pVal2;
	return TRUE;

}

void asn1SccT_Null_Record_Initialize(asn1SccT_Null_Record* pVal)
{
	(void)pVal;


}

flag asn1SccT_Null_Record_IsConstraintValid(const asn1SccT_Null_Record* pVal, int* pErrCode)
{
    flag ret = TRUE;
	(void)pVal;
    ret = TRUE;
    *pErrCode = 0;

	return ret;
}

flag asn1SccT_Null_Record_Encode(const asn1SccT_Null_Record* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
	(void)pBitStrm;


	*pErrCode = 0;
	ret = bCheckConstraints ? asn1SccT_Null_Record_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_Null_Record_Decode(asn1SccT_Null_Record* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	*pErrCode = 0;
	(void)pBitStrm;



	return ret  && asn1SccT_Null_Record_IsConstraintValid(pVal, pErrCode);
}

flag asn1SccT_Null_Record_ACN_Encode(const asn1SccT_Null_Record* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
	(void)pBitStrm;

    *pErrCode = 0;
	ret = bCheckConstraints ? asn1SccT_Null_Record_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret && *pErrCode == 0) {
    } /*COVERAGE_IGNORE*/

	
    return ret;
}

flag asn1SccT_Null_Record_ACN_Decode(asn1SccT_Null_Record* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	(void)pBitStrm;
	*pErrCode = 0;



    return ret && asn1SccT_Null_Record_IsConstraintValid(pVal, pErrCode);
}

