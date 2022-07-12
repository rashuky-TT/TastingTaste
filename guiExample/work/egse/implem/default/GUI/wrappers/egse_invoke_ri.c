// Implementation of the glue code in C handling required interfaces

#include <stdlib.h>
#ifdef __unix__
   #include <stdio.h>
   #include "PrintTypesAsASN1.h"
   #include "timeInMS.h"
#endif
#include "C_ASN1_Types.h"
#include "dataview-uniq.h"

extern unsigned egse_initialized;

void egse_RI_SetTargetPitch


      (const asn1SccPITCH_VALUE *IN_pitch);
void egse_RI_SetTargetPitch


      (const asn1SccPITCH_VALUE *IN_pitch)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to KS (corresponding PI: SetTargetPitch)
         printf ("INNER_RI: egse,ks,settargetpitch,settargetpitch,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_egse_settargetpitch
     (void *, size_t);

   vm_egse_settargetpitch
     ((void *)IN_pitch, sizeof(asn1SccPITCH_VALUE));


}

