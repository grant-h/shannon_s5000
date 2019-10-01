Line 105: Released_DeregistrationReq
Line 114: Released_DeregistrationReq : [MISMATCH!!] [Incoming = %s(%d)] [InDb = %s(%d)]
Line 128: ResolvePending_DeregistrationReq
Line 151: Post To InternalQ FAILED
Line 160: ResolvePending_DeregistrationReq : [MISMATCH!!] [Incoming = %s(%d)] [InDb = %s(%d)]
Line 174: Default_RequestProcedure
Line 190: INVALID [%s(%d)] Requested for %s(%s)
Line 210: [CDB] [%s(%d)] Requested for %s(%s)
Line 218: Post To InternalQ FAILED
Line 231: Default_RequestProcedure: Invalid Proc[%d] or ProcCause [%d]
Line 244: Released_UpdateProcedure
Line 254: [CDB] [%s(%d)] Duplicate Update to %s(%s) IGNORED
Line 266: [CDB] [%s(%d)] Updated to %s(%s)
Line 278: Post To InternalQ FAILED
Line 299: Post To InternalQ FAILED
Line 305: Released_UpdateProcedure: Invalid Proc[%d] or ProcCause [%d]
Line 318: Default_UpdateProcedure
Line 341: [CDB] [%s(%d)] Duplicate Update to %s(%s) IGNORED
Line 353: [CDB] [%s(%d)] Updated to %s(%s)
Line 365: Post To InternalQ FAILED
Line 395: Post To InternalQ FAILED
Line 420: Default_UpdateProcedure: Invalid Proc[%d] or ProcCause [%d]
Line 433: Requested_RequestProcedure
Line 438: INVALID [%s(%d)] Requested for %s(%s)
Line 449: [CDB] [%s(%d)] ReRequested for %s(%s), Previous Requested %s(%s)
Line 463: Requested_RequestProcedure: Invalid Proc[%d] or ProcCause [%d]
Line 476: Requested_UpdateProcedure
Line 483: [CDB] [%s(%d)] Updated to %s(%s), Previous Requested %s(%s)
Line 515: Post To InternalQ FAILED
Line 534: Post To InternalQ FAILED
Line 548: Requested_UpdateProcedure: Invalid Proc[%d] or ProcCause [%d]
Line 561: Requested_AllowProcedure
Line 582: [CDB] [%s(%d)] Request Granted(Discrete) for CellSelection Procedure
Line 598: [CDB] [%s(%d)] Request Granted(Continuous) for %s Procedure
Line 612: [Allowed Proc : %s] != [Current Proc : %s]
Line 625: Requested_BlockProcedure
Line 648: [CDB] [%s(%d)] Request Rejected (WithWait) for %s Procedure
Line 666: [CDB] [%s(%d)] Request Rejected (No Wait) for %s Procedure
Line 673: [CDB] [%s(%d)] RollBack to %s(%s) Procedure
Line 717: [Blocked Proc : %s] != [Current Proc : %s]
Line 730: Requested_PauseAck
Line 736: [CDB] [%s(%d)] Pause Ack Received for %s
Line 746: [Pause Acked Proc : %s] != [RollBack Proc : %s]
Line 752: [WARNING][Pause Ack Not Expected in Requested State][Rollback_State = %s]
Line 765: Requested_AbortAck
Line 773: [CDB] [%s(%d)] Abort Ack Received for %s , Rollback saved  to %s(%s)
Line 796: Requested_AbortAck: Invalid Fallback Proc[%d] or Fallback ProcCause [%d]
Line 802: [Abort Acked Proc : %s] != [Rollback Proc : %s]
Line 808: [WARNING][Abort Ack Not Expected in Requested State][Rollback_State = %s]
Line 821: Pending_AllowProcedure
Line 827: [CDB] [%s(%d)] Pending CellSelection Procedure Started discrete
Line 843: [CDB] [%s(%d)] Pending %s Procedure Started Continuous
Line 857: [Allowed Proc : %s] != [Current Proc : %s]
Line 870: Ongoing_AllowProcedure
Line 880: [CDB] [%s(%d)] Ongoing CellSelection Procedure Switched to Discrete
Line 894: [Allowed Proc : %s] != [Current Proc : %s]
Line 907: Ongoing_BlockProcedure
Line 925: [CDB] [%s(%d)] Ongoing %s Procedure Pause Req Sent (No Ack Expected), BlockingProc %s 
Line 949: [CDB] [%s(%d)] Ongoing %s Procedure Pause Req Sent (Pause Ack Expected),  BlockingProc %s 
Line 971: [CDB] Pause Req with Ack for Active 4G and Abort Req for Passive 2G triggered
Line 1005: [CDB] [%s(%d)] Ongoing %s Procedure Abort Req Sent (Abort Ack Expected)
Line 1035: [Blocked Proc : %s] != [Current Proc : %s]
Line 1048: OngoingDiscrete_AllowProcedure
Line 1057: [CDB] [%s(%d)] Ongoing Srrc_CellSelection Procedure Switched to Continuous
Line 1071: [Allowed Proc : %s] != [Current Proc : %s]
Line 1091: Pausing_PauseAck
Line 1104: [CDB] [%s(%d)] Pause Ack Received for %s
Line 1111: Post To InternalQ FAILED
Line 1126: [Pause Acked Proc : %s] != [Current Proc : %s]
Line 1142: [%s(%d)] Pause Ack Not Received for %s
Line 1161: Paused_AllowProcedure
Line 1167: [CDB] [%s(%d)] Paused CellSelection Procedure Resumed Discrete
Line 1183: [CDB] [%s(%d)] Paused %s Procedure Resumed Continuous
Line 1197: [Allowed Proc : %s] != [Current Proc : %s]
Line 1210: Aborting_AbortAck
Line 1223: [CDB] [%s(%d)] Abort Ack Received for %s , Falling back to %s(%s)
Line 1241: Post To InternalQ FAILED
Line 1260: Post To InternalQ FAILED
Line 1274: Aborting_AbortAck: Invalid Fallback Proc[%d] or Fallback ProcCause [%d]
Line 1280: [Abort Acked Proc : %s] != [Current Proc : %s]
Line 1295: [CDB] [%s(%d)] FallBack from %s[%s] to %s[%s]
Line 1327: [CDB] [%s(%d)] Client to use UPDATE ILM
Line 1333: [CDB] [%s(%d)] Client to use REQUEST ILM
Line 1348: Post To InternalQ FAILED
Line 1387: Post To InternalQ FAILED
Line 1430: [%s(%d)] Abort Ack Not Received for %s
Line 1452: [%s(%d)] %s Exceeded Max duration (%d)
Line 1476: [%s(%d)] %s(discrete) Exceeded Max duration (%d)
Line 1500: [SRER] [%s(%d)] Proc timer remaining Time %d msecs
Line 1539: [SRER] [%s(%d)] Started Proc timer for %s for %d msecs
Line 1855: [CDB] [%s(%d)] CGI State update received, State %d
Line 1862: [CDB] [%s(%d)] GetCurrentProcedure(%s)
