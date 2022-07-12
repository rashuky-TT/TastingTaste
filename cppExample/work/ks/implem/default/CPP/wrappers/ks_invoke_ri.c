// Implementation of the glue code in C handling required interfaces

#include <stdlib.h>
#ifdef __unix__
   #include <stdio.h>
   #include "PrintTypesAsASN1.h"
   #include "timeInMS.h"
#endif
#include "C_ASN1_Types.h"
#include "dataview-uniq.h"

extern unsigned ks_initialized;

void ks_RI_GetPitchValue


      (const asn1SccPITCH_SEQ *IN_pitchdata);
void ks_RI_GetPitchValue


      (const asn1SccPITCH_SEQ *IN_pitchdata)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to EGSE (corresponding PI: GetPitchValue)
         printf ("INNER_RI: ks,egse,getpitchvalue,getpitchvalue,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_ks_getpitchvalue
     (void *, size_t);

   vm_ks_getpitchvalue
     ((void *)IN_pitchdata, sizeof(asn1SccPITCH_SEQ));


}

