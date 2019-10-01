Line 177: Ongoing proc on the other stack: %s, Don't start another CS/PS sig
Line 183: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 222: Location Update Type -> %s Cannot be performed, Since MM_ALLOW_CS_REGISTRATION is set to FALSE
Line 231: Location Update Type -> %s Cannot be performed due to T3246 Running
Line 245: Postpoing the Location Update Attempt as Emergency call is pending. LAU Type: %d 
Line 253: Attempting to Perform Location Update.....[24.008]-4.4.1
Line 290: Sending CSFB Status indication to NS, to indicate to SIPC
Line 321: We are waiting for REL CNF from RR/RRC
Line 450: mm_SendLocUpdReqMsg  .... Type -> NORMAL
Line 469: mm_SendLocUpdReqMsg .... Type -> PERIODIC
Line 488: mm_SendLocUpdReqMsg .... Type -> IMSI_ATTACH
Line 495: mm_SendLocUpdReqMsg .... Type -> Invalid LocUpdType in rat mode %d 
Line 552: Sending Invalid Cksn (7) as Update Status is MM_NO_IMSI
Line 607: AdditionalUpdateParam = %d
Line 608: HcommonNasRelVersion = %d
Line 632: Extended T3212 is supported
Line 662: 
Line 702: 
Line 708: 
Line 742: Mobile ID is Present in Loc Upd Acc
Line 750: Network sent IMSI as Mobile ID!!, so delete TMSI
Line 767: Network sent TMSI as Mobile ID.....
Line 768: Old 
Line 771: New 
Line 782: Network Sent NO_ID_TYPE Mobile ID !!!
Line 793: Mobile ID is NOT Present in Loc Upd Acc
Line 827: Starting T3240 timer only for 3 seconds for CMCC Network
Line 830: T3240 duration in seconds %d
Line 881: Received LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 935: The Loc-upd proc. was caused by a Call setup req. Now it can be Processed
Line 940: Network has accepted the Follow On Req, RR Con will be Kept Alive !!!
Line 957: Network has NOT Accepted the Follow On Req, CM Req has to bs Sent After RR Con is Released
Line 1005: Network Sent Equivalent Plmn List !!!
Line 1015: Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Line 1022: EPLMN list of LU Accept is different from one of ATTACH/RAU accept.. Don't remove Equivalent PLMN list
Line 1047: Network Sent Emergency List !!!
Line 1056: Emergency list length is 0 or more than 16, %d
Line 1062: Emergency List ptr is NULL!!!
Line 1070: NewMCC : 0x%x, OldMCC : 0x%x
Line 1071: isMccChanged : %d, isEmerNumberBlank : %d, mm_GetLastSentMcc : 0x%x
Line 1091: Starting T3212 with the value given in Per MS T3212 IE: %d secs
Line 1097: Starting T3212 with the value received from broadcast
Line 1137: (PREVENTION) Don't send LAU_REQ when REL_IND if NW gave wrong LAI. ()
Line 1144: (PREVENTION) Don't send LAU_REQ when REL_IND if NW gave wrong LAI. ()
Line 1161: mm_LaiMismatchCounter is %d
Line 1170: SIM LAI and Cell Data LAI Matching
Line 1203: %s  in  mm_DecodeLocUpdAccMsg ...[24.008]-4.4.4.6
Line 1205: mm_SimDb[MmStackId].mm_UpdateStatus = %s
Line 1241: Loc Upd Acc should not be received in this state !!??
Line 1250: Loc Upd Acc should not be received in this state !!??
Line 1272: %s  in  mm_DecodeLocUpdRejMsg....[24.008]-4.4.4.7
Line 1274: mm_UpdateStatus = %s
Line 1309: Loc Upd Reject Cause -> %s
Line 1418: Entering mm_CheckAndPerformLocUpdForCmReq...
Line 1476: Entering mm_DetermineLocUpdActionForCmReq...
Line 1555: Sending IMSI Detach Message, Establishing RR Connection
Line 1565: Sending IMSI Detach Message, Not Establishing RR Connection
Line 1581: 
Line 1593: Sending IMSI Detach Message, Establishing URRC Connection
Line 1621: 
Line 1627: 
Line 1636: Sending IMSI Detach Message, Not Establishing URRC Connection
Line 1694: Sending of IMSI Detach Message Not Required
Line 2024: copying RAI information, since it might not be saved as part of LAU.
Line 2073: MM will adding this PLMN to FPLMN list
Line 2133: Deleting PS information also
Line 2173: Deleting EPS information also in NON LTE operating mode
Line 2239: FLAI list is not sent to AS for normal cell selection
Line 2454: Performing Location Update Reject Actions...[24.008]-4.4.4.7
Line 2463: Replacing LU reject cause with Network Failure for attempting emer call.
Line 2472: Location Update shall be performed when a New Cell is entered
Line 2597: CSG Not supported, Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG
Line 2652: PMM_CONNECTED -> mm_PerformLocUpdFailPlmnActions Delayed 
Line 2697: Entering mm_ProcessLocUpdRejAbnCaseAToC
Line 2713: Cause Received RR_CELL_CONGEST 
Line 2753: 2 Consecutive Failures Detected in mm_DetermineLocUpdFailureCause
Line 2804: Processing LocUpdRej Abonrmal Case D To H
Line 2806: Loc Upd Reject Cause -> %s
Line 2820: RrRelCoordActionCause -> %s
Line 2860: Not deleting equivalent list when cell data lai is equivalent plmn but not selected PLMN
Line 2881: T3311 restarted to sync with T3211
Line 2963: T3311 restarted to sync with T3211
Line 3101: LAU_ACCEPT discarded due to integrity conditions failure: 4.1.1.1.1 @ 24.008
Line 3138: 
Line 3295: REGNOK_NOSEL is sent because PLMN search will be triggered.
Line 3319: %s  in  mm_DecodeLcsIndMsg
Line 3321: mm_UpdateStatus = %s
Line 3323: NewLcsState =%d 
Line 3447: Invalid Location Update Request, %d
Line 3523: Location Update Attempt Count Reset 
Line 3582: Location Update Type -> %s
Line 3595: Location Update Attempt Count = %d
Line 3667: RR Registration Result -> %s
Line 3709: Location Update Action -> 0x%02X
Line 3714: Location Update Action -> %s
Line 3756: Allow CS Registration Access since MM_ALLOW_CS_REGISTRATION is TRUE
Line 3762: Do Not Allow CS Registration Access since MM_ALLOW_CS_REGISTRATION is FALSE
Line 3784: Network Mode is 1 & GMM Not Registered or Network Mode is 2 -> OK (6 of 6)
Line 3789: CS Domain Access Not Allowed ->  Network Mode is 1 & GMM Registered 
Line 3795: Cell in FORBIDDEN list
Line 3802: CS Domain Access Not Allowed ->  Cell Does Not Support CS !
Line 3808: CS Domain Access Not Allowed ->  MM_NOT_REGISTERED_ERR  !
Line 3814: CS Domain Access Not Allowed ->  GMM_COVERAGE_LOST_ERR  !
Line 3820: CS Domain Access Not Allowed ->  MM_SIM_CONSIDERED_INVALID_ERR  !
Line 3826: CS Domain Access Not Allowed ->  MM_ACCESS_BARRED !
Line 3852: Skip for Checking Cell data
Line 3872: Cell Supports CS Domain -> OK (6 of 6)
Line 3877: CS Domain Access Not Allowed ->  Cell Does Not Support CS 
Line 3882: CS Domain Access Not Allowed ->  MM_NOT_REGISTERED_ERR 
Line 3887: CS Domain Access Not Allowed ->  GMM_COVERAGE_LOST_ERR  
Line 3892: CS Domain Access Not Allowed ->  SIM update status is %s 
Line 3897: CS Domain Access Not Allowed ->  MM_SIM_CONSIDERED_INVALID_ERR 
Line 3902: CS Domain Access Not Allowed ->  MM_ACCESS_BARRED  
Line 3922: Reject Cause -> 0x%02X in mm_PerformGprsAttachRejectCauseProcessing()
Line 3967: AttachType -> %d
