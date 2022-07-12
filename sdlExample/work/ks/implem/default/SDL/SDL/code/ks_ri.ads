--  DO NOT EDIT THIS FILE, IT WILL BE OVERWRITTEN DURING THE BUILD
--  Generated by TASTE (Kazoo template templates/skeletons/ada-ri-source/function.tmplt)
--  2022-07-12 20:24:53
with Pitchtm;             use Pitchtm;
with Sdlexample_Dataview; use Sdlexample_Dataview;
with Taste_Basictypes;    use Taste_Basictypes;
with adaasn1rtl;
with Interfaces.C.Strings; use Interfaces.C.Strings;

package Ks_RI is

   procedure Getpitch (Pitchdata : in out asn1SccPitch_Seq);

   procedure Check_Queue (Res : out adaasn1rtl.Asn1Boolean)
      with Import, Convention => C, Link_Name => "ks_check_queue";

   --  Return the SDL state as a char * for the MSC tracing function
   function To_C_Pointer (State_As_String : String) return Chars_Ptr is
      (New_String (State_As_String));
end Ks_RI;