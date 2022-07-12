/* Header file for function EGSE in CPP language
 * Generated by TASTE on 2022-07-12 21:13:59
 * Context Parameters present : NO
 * Provided interfaces : CyclicTask, GetPitchValue
 * Required interfaces : SetTargetPitch
 * User-defined properties for this function:
 * DO NOT EDIT THIS FILE, IT WILL BE OVERWRITTEN DURING THE BUILD
 */

/* The purpose of this file is to provide a wrapper around the user code,
 * with a single interface that is independent of the implementation language
 * of the function. The parameters of each PI are blackboxes encoded
 * in the form specified in the interface view (Native, uPER, or ACN)
*/

#pragma once
#if defined(__unix__) || defined (__MSP430__)
   #include <stdlib.h>
   #include <stdio.h>
#else
   typedef unsigned size_t;
#endif

#ifdef __cplusplus
extern "C" {
#endif

#include "egse.h"

// Function initialization - calls user startup code of all dependent functions
void init_egse(void);


/* Provided interfaces */
void egse_CyclicTask(void);


void egse_GetPitchValue
      (const char *IN_pitchdata, size_t IN_pitchdata_len);


#ifdef __cplusplus
}
#endif

