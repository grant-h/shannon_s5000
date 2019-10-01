Line 401: PS : Requested Proc : %s  other Stacks proc : %s
Line 403:  Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 414: Pending SIGNALLING/PLMN Search on other stack- so saving 
Line 420: SIGNALLING on other stack- so saving 
Line 425: CS Call on other stack- so Discarding 
Line 443: Pending CS/ PS SIGNALLING on other stack- so saving request
Line 451: Pending CS call on other stack. Sending resume in PS idle entry!!
Line 469: MM_DSNC - GMM DSDS Wrong Call type : %s
Line 489: Requested Proc : %s  other Stacks proc : %s
Line 491: Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 496: Emergency Call is Received, Treating it has the highest priority !!
Line 509: Saving EST_REQ for CS call. Set SRNC pending proc 
Line 511: Saving EST_REQ 
Line 522:  Discarding EST REQ due to Call on other stack 
Line 538: Pending CS call on other stack. Sending resume in CS idle entry!!
Line 547: Pending CS call on other stack. Sending resume in PS idle entry!!
Line 560: Pending CS/PS SIGNALLING on other stack- so saving current request
Line 568: CS SIGNALLING or CS CALL on other stack- saving request
Line 579: MM_DSNC - MM DSDS Signalling Wrong Call type : %s
Line 608: MM_DSNC - MM DSDS Wrong Call type : %s
Line 623: MM_DSNC - PS : DSDS Proc Type : %s Current Proc : %s
Line 625: MM_DSNC - Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 630: MM_DSNC - PS Proc is already updated with requested proc type
Line 672: MM_DSNC - PS : IDLE Entry Proc Type : %s Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 677: MM_DSNC - PS : IDLE Entry Ongoing Ims Proc %s
Line 685: MM_DSNC - PS Proc is already in IDLE
Line 775: MM_DSNC - No PS procedure are running
Line 808: MM_DSNC - IMS : DSDS Proc Type : %s Current Proc : %s
Line 810: MM_DSNC - Ongoing CS Proc : %s Ongoing PS Proc : %s, Ongoing IMS Proc : %s 
Line 816: MM_DSNC - IMS Proc is already updated with requested proc type
Line 833: IMS PROC : Grant requested for %s 
Line 854: IMS PROC : Grant requested for %s 
Line 878: Updated IMS Proc: %s 
Line 890: MM_DSNC - IMS : IDLE Entry Proc Type : %s,  Ongoing IMS Proc : %s
Line 898: MM_DSNC - IMS Proc is already in IDLE
Line 936: MM_DSNC - IMS : IDLE Entry Proc Type : %s Ongoing CS Proc : %s Ongoing PS Proc : %s, Ongoing IMS Proc : %s
Line 1021: MM_DSNC - IMS : IDLE Entry Completed :  Proc Type : %s Ongoing CS Proc : %s Ongoing PS Proc : %s, Ongoing IMS Proc : %s
Line 1040: MM_DSNC - CS : DSDS Proc Type : %s Current Proc : %s
Line 1042: MM_DSNC - Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1047: MM_DSNC - Here in 2G RAT without DTM support we are aborting an active PS procedure and continuing with CSCALL
Line 1054: MM_DSNC - CS Proc is already updated with requested proc type
Line 1066: Clear SRNC pending proc 
Line 1117: MM_DSNC - CS : IDLE Entry Proc Type : %s Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1121: MM_DSNC - CS : IDLE Entry  Ongong IMS Proc %s
Line 1124: mm_DsDelayCsIdleEntry: %d
Line 1131: MM_DSNC - CS Proc is already in IDLE
Line 1146: MM_DSNC - GmmState = %s
Line 1193: MM_DSNC - No CS procedure are running
Line 1202: MM_DSNC - DSDS CS Resume Not Sent Type of Proc =%s
Line 1227: MM_DSNC - Grant Release for : %s  Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1232: MM_DSNC - Ongoing IMS Proc : %s
Line 1237: MM_DSNC -OldCsProcStatus : %d, OldPsProcStatus : %d 
Line 1242: MM_DSNC - OldImsProcStatus %d 
Line 1250: MM_DSNC -NewCsProcStatus : %d, NewPsProcStatus : %d
Line 1255: MM_DSNC -NewImsProcStatus : %d
Line 1266: MM_DSNC - STANDBY is not requested after GRANT_RELASE_IND so send SRNC_RESUME_REQ
Line 1307: MM_DSNC - In DSDS Resume Req Initiating Attach Procedure ....
Line 1319: MM_DSNC - In DSDS Resume Req Initiating RAU Procedure ....
Line 1344: MM_DSNC - RESUME_REQ with typeofproc IDLE, No need to send ILM to SR_IF
Line 1348: MM_DSNC - Sending MM Resume Req Type of Proc : %s Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1353: Ongoing IMS Proc %s
Line 1379: MM_DSNC - Sending Sig Start Ind Type of Proc : %s domain : %s Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1451: MM_DSNC - No need to Trigger SIG END here, Type of Proc : %s domain : %s
Line 1466: MM_DSNC - No need to Trigger SIG END here, Type of Proc : %s domain : %s
Line 1489: MM_DSNC - Sending Sig End Ind Type of Proc : %s domain : %s Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1493: MM_DSNC - Ongoing IMS Proc : %s
Line 1544: MM_DSNC - Perform Cause : %d
Line 1574: MM_DSNC - CS paging pending on other stack, GMM state - %s
Line 1587: MM_DSNC - Cs sig Ongoing %d, Ps Sig Ongoing %d, Cs Abort Possible %d, Ps Abort Possible %d
Line 1640: CSPAGING_PENDING not expected!!
Line 1648: MM_DSNC - CS paging pending actions processed on other stack, MM state %s
Line 1658: MM_DSNC - CS paging pending actions cant be processed on other stack
Line 1671: MM_DSNC - MM_DS_PERFORM_PSSIG_UNRECOVER
Line 1677: MM_DSNC - PS proc is stuck in CSPSSIG/PS call, Reset it here
Line 1695: MM_DSNC - GMM_REL_REQ triggered already
Line 1711: CELL IND is received on other stack after CS call release, So start resuming this stack
Line 1719: Not defined action in mm_DecodeMmDsdsPerformReq
Line 1734: MM_DSNC - mm_SendMMDsdsPerformReq %d
Line 1763: in mm_DsdsCheckCsEstabAbortPossible, Call Type %d
Line 1784: in mm_DsdsAbortCsEstablishment
Line 1810: in mm_DsdsCheckPsEstabAbortPossible
Line 1827: in mm_DsdsAbortPsEstablishment
Line 1833: MM_DSNC - GMM State Before Suspension is - %s
Line 1852: MM_DSNC - PDP activation/deactivation/modification ongoing..abort same,indicate SM and release grant!!
Line 1864: MM_DSNC - GMM State is Put back to Suspended
Line 1886: MM_DSNC - Other Stack init stauts : %d
Line 1954: Update DSDS Stack info type :%d, value : %d
Line 1971: MM_DSNC - STANDBY_REQ with typeofproc IDLE, No need to send ILM to SR_IF
Line 1975: MM_DSNC - Standby Req for Proc : %s Ongoing CS Proc : %s Ongoing PS Proc : %s ProcCause: %d
Line 2060: MM_DSNC - State Update Ind : %d 
Line 2066: MM_DSNC - Standby Rsp Result: %d 
Line 2072: MM_DSNC - Register Rsp : %d 
Line 2166:  MM is already De-Registered in SRNC context 
Line 2310: MM_DSNC - PCH State -> NON PCH State, during Signaling, Releasing Grant
Line 2321: MM_DSNC - NON PCH State -> PCH State, Reacquiring Signaling Grant
Line 2330: MM_DSNC - RRC State Moved to PowerOn Or Idle
