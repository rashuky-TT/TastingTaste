#!/usr/bin/python

import DV

FVname = "egse"

tc = {}
tm = {}
errCodes = {}

tm["GetPitchValue"] = {'nodeTypename': 'PITCH-SEQ', 'type': 'SEQUENCE', 'id': 'GetPitchValue', 'isOptional': False, 'alwaysPresent': False, 'alwaysAbsent': False, "children":[{'nodeTypename': '', 'type': 'REAL', 'id': 'pitchVal', 'isOptional': False, 'alwaysPresent': True, 'alwaysAbsent': False, 'minR': -90.00000000000000000000, 'maxR': 90.00000000000000000000},
{'nodeTypename': '', 'type': 'INTEGER', 'id': 'res', 'isOptional': False, 'alwaysPresent': True, 'alwaysAbsent': False, 'minR': 10, 'maxR': 16},
{'nodeTypename': '', 'type': 'ENUMERATED', 'id': 'vali', 'isOptional': False, 'alwaysPresent': True, 'alwaysAbsent': False, 'values':["valid", "invalid"], "valuesInt": {"valid": 0, "invalid": 1}}]}
tc["SetTargetPitch"] = {'nodeTypename': 'PITCH-VALUE', 'type': 'REAL', 'id': 'SetTargetPitch', 'isOptional': False, 'alwaysPresent': False, 'alwaysAbsent': False, 'minR': -90.00000000000000000000, 'maxR': 90.00000000000000000000}
