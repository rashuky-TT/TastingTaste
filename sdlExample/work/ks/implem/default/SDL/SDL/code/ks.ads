-- This file was generated automatically by OpenGEODE: DO NOT MODIFY IT !

with Interfaces,
     Interfaces.C.Strings,
     Ada.Characters.Handling;

use Interfaces,
    Interfaces.C.Strings,
    Ada.Characters.Handling;

with PitchTM;
use PitchTM;
with SDLEXAMPLE_DATAVIEW;
use SDLEXAMPLE_DATAVIEW;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;
with Ks_Datamodel; use Ks_Datamodel;

with Ks_RI;
package Ks with Elaborate_Body is
   ctxt : aliased asn1SccKs_Context :=
      (Init_Done => False,
       others => <>);
   function Get_State return Chars_Ptr is (Ks_RI.To_C_Pointer (asn1SccKs_States'Image (ctxt.State))) with Export, Convention => C, Link_Name => "ks_state";
   procedure Startup with Export, Convention => C, Link_Name => "Ks_startup";
   --  Provided interface "PitchControlLoop"
   procedure PitchControlLoop;
   pragma Export(C, PitchControlLoop, "ks_PI_PitchControlLoop");
   --  Provided interface "SetPitch"
   procedure SetPitch(targetPitch: in out asn1SccPITCH_VALUE);
   pragma Export(C, SetPitch, "ks_PI_SetPitch");
   --  Required interface "GetPitch"
   procedure RI_0_GetPitch (pitchData : in out asn1SccPITCH_SEQ) renames Ks_RI.GetPitch;
   procedure Execute_Transition (Id : Integer);
   CS_Only : constant := 4;
end Ks;