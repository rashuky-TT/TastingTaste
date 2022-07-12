from __future__ import absolute_import


import threading, time, sys, os, ctypes

import DV
try:
    PythonAccess = ctypes.cdll.LoadLibrary("./PythonAccess.so")
except OSError:
    folder = os.path.dirname(os.path.abspath(__file__))
    PythonAccess = ctypes.cdll.LoadLibrary(folder + "/PythonAccess.so")
    sys.path.append(folder)
OpenMsgQueueForReading = PythonAccess.OpenMsgQueueForReading
OpenMsgQueueForReading.restype = ctypes.c_int
CloseMsgQueue =  PythonAccess.CloseMsgQueue
GetMsgQueueBufferSize = PythonAccess.GetMsgQueueBufferSize
GetMsgQueueBufferSize.restype = ctypes.c_int
RetrieveMessageFromQueue = PythonAccess.RetrieveMessageFromQueue
RetrieveMessageFromQueue.restype = ctypes.c_int
import dataview_uniq_asn
i_GetPitchValue = ctypes.c_int.in_dll(PythonAccess, "ii_GetPitchValue").value
i_SetTargetPitch = ctypes.c_int.in_dll(PythonAccess, "ii_SetTargetPitch").value
SendTC_SetTargetPitch = PythonAccess.SendTC_SetTargetPitch

class Poll_egse(threading.Thread):
    def run(self):
        self._bDie = False
        while True:
            if self._bDie:
                return
            queue_name = str(os.geteuid()) + "_egse_PI_Python_queue"
            self._msgQueue = OpenMsgQueueForReading(queue_name.encode("utf-8"))
            if (self._msgQueue != -1): break
            print("Communication channel over %d_egse_PI_Python_queue not established yet...\n" % os.geteuid())
            time.sleep(1)
        bufferSize = GetMsgQueueBufferSize(self._msgQueue)
        self._pMem = ctypes.create_string_buffer(bufferSize).raw
        while not self._bDie:
            self.messageReceivedType = RetrieveMessageFromQueue(self._msgQueue, bufferSize, self._pMem)
            if self.messageReceivedType == -1:
                time.sleep(0.01)
                continue
            ProcessTM(self)

def Invoke_SetTargetPitch(var_PITCH_VALUE):
    if -1 == SendTC_SetTargetPitch(var_PITCH_VALUE._ptr):
        print('Failed to send TC: SetTargetPitch...\n')
        raise IOError("SetTargetPitch")

def ProcessTM(self):
    if self.messageReceivedType == i_GetPitchValue:
        print("\n"+chr(27)+"[32m" + "Received Telemetry: GetPitchValue" + chr(27) + "[0m\n")
        backup = self._pMem
        # Read the data for param pitchData
        var_pitchData = dataview_uniq_asn.PITCH_SEQ()
        var_pitchData.SetData(self._pMem)
        print("Parameter pitchData:")
        var_pitchData.PrintAll()
        print()
        # self._pMem = DV.MovePtrBySizeOf_PITCH_SEQ(self._pMem)
        # Revert the pointer to start of the data
        self._pMem = backup

if __name__ == "__main__":
    poll_egse = Poll_egse()
    poll_egse.start()
    try:
        time.sleep(1e8)
    except:
        poll_egse._bDie = True
        poll_egse.join()