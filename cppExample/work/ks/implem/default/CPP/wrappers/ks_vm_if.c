/* Body file for function KS
 * Generated by TASTE on 2022-07-12 21:10:35
 * Provided interfaces : PitchControlLoop, SetTargetPitch
 * Required interfaces : GetPitchValue
 * User-defined properties for this function:
 * Timers              : 
 */
#include "ks_vm_if.h"
#include "C_ASN1_Types.h"
#ifdef __unix__
   #include <stdio.h>
   extern long long getTimeInMilliseconds(void);
#endif




unsigned ks_initialized = 0;
void init_ks(void)
{
   if (0 == ks_initialized) {
      #ifdef __unix__
         // Initialize epoch for the MSC tracing in debug mode
         long long unused = getTimeInMilliseconds();
      #endif
      ks_initialized = 1;
      // Call user code startup function
      extern void ks_startup(void);
      ks_startup();
#ifdef __unix__
      puts ("[TASTE] Initialization completed for function KS");
#endif
      ks_initialized = 2;
   }
}
void ks_PitchControlLoop()
{


#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: ks,pitchcontrolloop,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Directly call user code, no parameters to pass
   extern void ks_PI_PitchControlLoop(void);
   ks_PI_PitchControlLoop();
   // puts ("ks_pitchcontrolloop called");
}


void ks_SetTargetPitch
      (const char *IN_pitch, size_t IN_pitch_len)

{


#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: ks,settargetpitch,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void ks_PI_SetTargetPitch
      (const asn1SccPITCH_VALUE *);





   // Call user code
   ks_PI_SetTargetPitch ((asn1SccPITCH_VALUE *)IN_pitch);

}

