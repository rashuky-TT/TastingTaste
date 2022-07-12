-- This file was generated automatically by OpenGEODE: DO NOT MODIFY IT !

with System.IO;
use System.IO;

with Ada.Unchecked_Conversion;
with Ada.Numerics.Generic_Elementary_Functions;

package body Ks is
   procedure p_0_ControlProcedure;
   procedure p_0_ControlProcedure is
      begin
         --  DECISION pitch.pitchVal < targetPitch (12,36)
         --  ANSWER true (14,17)
         if ((ctxt.pitch.pitchval < ctxt.targetPitch)) then
            --  pitch.pitchVal  := pitch.pitchVal  +1.0 (16,25)
            ctxt.pitch.pitchval := (ctxt.pitch.pitchval + 1.0);
            --  ANSWER false (18,17)
         else
            --  DECISION pitch.pitchVal > targetPitch (20,44)
            --  ANSWER true (22,25)
            if ((ctxt.pitch.pitchval > ctxt.targetPitch)) then
               --  pitch.pitchVal := pitch.pitchVal  - 1.0 (24,33)
               ctxt.pitch.pitchval := (ctxt.pitch.pitchval - 1.0);
               --  ANSWER false (26,25)
            else
               null;
            end if;
         end if;
         --  RETURN  (None,None) at 273, 508
         return;
      end p_0_ControlProcedure;
      

   procedure PitchControlLoop is
      begin
         case ctxt.state is
            when asn1Scccontrol =>
               Execute_Transition (3);
            when asn1Sccidle =>
               Execute_Transition (1);
            when others =>
               Execute_Transition (CS_Only);
         end case;
      end PitchControlLoop;
      

   procedure SetTargetPitch(pitch: in out asn1SccPITCH_VALUE) is
      begin
         case ctxt.state is
            when asn1Scccontrol =>
               ctxt.targetpitch := pitch;
               Execute_Transition (2);
            when others =>
               Execute_Transition (CS_Only);
         end case;
      end SetTargetPitch;
      

   procedure Execute_Transition (Id : Integer) is
      trId : Integer := Id;
      begin
         while (trId /= -1) loop
            case trId is
               when 0 =>
                  --  NEXT_STATE Idle (35,18) at 320, 60
                  trId := -1;
                  ctxt.State := asn1SccIdle;
                  goto Continuous_Signals;
               when 1 =>
                  --  NEXT_STATE Control (41,22) at 448, 180
                  trId := -1;
                  ctxt.State := asn1SccControl;
                  goto Continuous_Signals;
               when 2 =>
                  --  NEXT_STATE Control (48,22) at 376, 376
                  trId := -1;
                  ctxt.State := asn1SccControl;
                  goto Continuous_Signals;
               when 3 =>
                  --  Controlprocedure (52,17)
                  p_0_ControlProcedure;
                  --  GetPitchValue(pitch) (54,19)
                  RI_0_GetPitchValue(ctxt.pitch);
                  --  NEXT_STATE Control (56,22) at 549, 486
                  trId := -1;
                  ctxt.State := asn1SccControl;
                  goto Continuous_Signals;
               when CS_Only =>
                  trId := -1;
                  goto Continuous_Signals;
               when others =>
                  null;
            end case;
            <<Continuous_Signals>>
            <<Next_Transition>>
         end loop;
      end Execute_Transition;
      

   procedure Startup is
      begin
         Execute_Transition (0);
         ctxt.Init_Done := True;
      end Startup;
   begin
      Startup;
end Ks;