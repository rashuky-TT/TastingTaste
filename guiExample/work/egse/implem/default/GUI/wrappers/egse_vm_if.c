/* Body file for function EGSE
 * Generated by TASTE on 2022-07-12 21:19:51
 * Provided interfaces : GetPitchValue, Poll
 * Required interfaces : SetTargetPitch
 * User-defined properties for this function:
 * Timers              : 
 */
#include "egse_vm_if.h"
#include "C_ASN1_Types.h"
#ifdef __unix__
   #include <stdio.h>
   extern long long getTimeInMilliseconds(void);
#endif




unsigned egse_initialized = 0;
void init_egse(void)
{
   if (0 == egse_initialized) {
      #ifdef __unix__
         // Initialize epoch for the MSC tracing in debug mode
         long long unused = getTimeInMilliseconds();
      #endif
      egse_initialized = 1;
      // Call user code startup function
      extern void egse_startup(void);
      egse_startup();
#ifdef __unix__
      puts ("[TASTE] Initialization completed for function EGSE");
#endif
      egse_initialized = 2;
   }
}
void egse_GetPitchValue
      (const char *IN_pitchdata, size_t IN_pitchdata_len)

{


#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: egse,getpitchvalue,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void egse_PI_GetPitchValue
      (const asn1SccPITCH_SEQ *);





   // Call user code
   egse_PI_GetPitchValue ((asn1SccPITCH_SEQ *)IN_pitchdata);

}


void egse_Poll()
{

   //  Directly call user code, no parameters to pass
   extern void egse_PI_Poll(void);
   egse_PI_Poll();
   // puts ("egse_poll called");
}

