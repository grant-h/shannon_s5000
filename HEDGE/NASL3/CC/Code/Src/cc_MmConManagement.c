Line 168: Entering cc_DecodeMmSyncIndMsg....
Line 180: MM Sync IND saved as CC state is CC_CALL_WAIT_MM_SRVCC_CNF
Line 206: MM Sync IND saved for MO call due to Ultra-Flash CSFB
Line 212: Current Rat Mode taken to be -> UMTS in cc_DecodeMmSyncIndMsg...
Line 257: Current Rat Mode taken to be -> GSM in cc_DecodeMmSyncIndMsg...
Line 270: Traffic Channel Assigned in cc_DecodeMmSyncIndMsg...
Line 303: Signalling Channel Assigned in cc_DecodeMmSyncIndMsg...
Line 317: Invalid RAT mode received. So MM_SYNC_IND is not processed
Line 319: RAT Mode is   %d
Line 324: CodecInfoPresent -> %s (Meaningless in GSM)
Line 328: NasSyncInd       -> 0x%02X
Line 330: RabId            -> 0x%02X
Line 339: RAT Handover
Line 345: VCG Already Informed (VCG EST REQ Sent)
Line 357: VCG Not Informed Yet (VCG EST REQ Not Sent)...Saving the Message For later
Line 361: Accept Sync Ind, Inform VCG
Line 375: Data Call, Do not inform VCG
Line 383: VCG Already Informed (VCG EST REQ Sent)
Line 387: Traffic channel assigned..Nothing needs to be done here
Line 391: Only Signalling channel assigned, Wait for traffic channel to Arrive
Line 396: VCG Not Informed Yet (VCG EST REQ Not Sent)...Saving the Message For later
Line 402: Traffic channel assigned..Saving the Message For later
Line 412: Only Signalling channel assigned, Wait for traffic channel to Arrive
Line 428:  Old NasSyncInd       -> 0x%02X
Line 429:  New NasSyncInd       -> 0x%02X
Line 520: CallType1            -> 0x%02X
Line 570: VCG Action Needed But CC State is Incorrect in cc_DecodeMmSyncIndMsg...
Line 584: CallType1            -> 0x%02X
Line 595: No Need to Inform VCG
Line 618: SyncInd arrived when No Sessions Active Saving message in cc_DecodeMmSyncIndMsg...
Line 625: SyncInd arrived when No Sessions Active Saving message in cc_DecodeMmSyncIndMsg...
Line 654: Entering cc_ProcessCiqCauseIe
Line 664: Memory Allocation Failed
Line 734: Entering cc_DecodeMmEstErrMsg
Line 741: TransactionId -> %d
Line 763: Save CallDrop: Type=%d, Cause=%d
Line 801: Old  Redial Code logic implementation 
Line 802: Total CC redial due to MM issue = %d
Line 812: Redialing in MMCC_EST_ERR
Line 827: over-writting Network cause on MM cause 
Line 867: New Redial Code logic implementation 
Line 878: Redialing in MMCC_EST_ERR
Line 887: One Active call present, Auto redial will not be done 
Line 900: Redialing in MMCC_EST_ERR for CSVT
Line 932: over-writting Network cause on MM cause 
Line 966: State Error in cc_DecodeMmEstErrMsg
Line 973: CallSession %d is NOT Active,  in cc_DecodeMmEstErrMsg
Line 987: In cc_DecodeMmEstErrMsg - cc_DecodeMmEstErrMsg been set
Line 992: No Session Found to contain the given TI in cc_DecodeMmEstErrMsg, Message Ignored.
Line 1022: Entering cc_DecodeMmErrIndMsg....
Line 1033: TransactionId -> %d
Line 1046: Save CallDrop: Type=%d, Cause=%d
Line 1069: Discarding Saved MmSyncIndMsg
Line 1090: [OSS]: MPTY active in cc_DecodeMmErrIndMsg
Line 1125: CC_RELEASE_REQUESTED : over-writting Network cause on MM cause
Line 1131: MM cause (%d), Saved NetworkCause (%d)
Line 1180: Redialing in MMCC_ERR_IND
Line 1232: Redialing in MMCC_ERR_IND
Line 1277: No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
Line 1287: over-writting Network cause on MM cause 
Line 1311: CallSession %d is NOT Active,  in cc_DecodeMmErrIndMsg
Line 1321: Requesting MM to Re-Establish the MM Connection in cc_DecodeMmErrIndMsg
Line 1335: Requesting MM Not to Re-Establish the MM Connection in cc_DecodeMmErrIndMsg
Line 1342: Neither Active Nor Establishing Calls are found in cc_DecodeMmErrIndMsg
Line 1349: Save CallDrop: Type=%d, Cause=%d
Line 1381: Displaying Message Contents: %s
Line 1385: CallType -> %d
Line 1386: Priority -> %d
Line 1393: Unable to Allocate Memory to Send %s Message in cc_SendMmEstReqMsg
Line 1419: Displaying Message Contents: %s
Line 1426: Unable to Allocate Memory to Send %s Message in cc_SendMmPromptCnfMsg
Line 1452: Displaying Message Contents: %s
Line 1459: Unable to Allocate Memory to Send %s Message in cc_SendMmPromptRejMsg
Line 1487: Displaying Message Contents: %s
Line 1496: Unable to Allocate Memory to Send %s Message in cc_SendCcEstIndMsg
Line 1517: Displaying Message Contents: %s
Line 1526: Unable to Allocate Memory to Send %s Message in cc_SendCcErrIndMsg
Line 1558: Displaying Message Contents: %s
Line 1562: CallTyp -> %d
Line 1569: Unable to Allocate Memory to Send %s Message in cc_SendMmEstOutReqMsg
Line 1601: Displaying Message Contents: %s
Line 1607: RabId            -> 0x%02X
Line 1608: CodecInfoPresent -> %s
Line 1609: NasSyncInd       -> 0x%02X
Line 1615: Unable to Allocate Memory to Send %s Message in cc_SendCcSyncIndMsg
Line 1642: Displaying Message Contents: %s
Line 1643: Silent CC redial Flag    -> 0x%02X
Line 1650: Unable to Allocate Memory to Send %s Message in cc_SendMmNoRestReqMsg
Line 1678: Displaying Message Contents: %s
Line 1680: NumOfConnectionsToReestablish    -> 0x%02X
Line 1687: Unable to Allocate Memory to Send %s Message in cc_SendMmRestReqMsg
Line 1717: Enteirng cc_DecodeMmRestCnfMsg...
Line 1768: Msg ignored in cc_DecodeMmRestCnfMsg
Line 1776: CallSession %d is NOT Active,  in cc_DecodeMmRestCnfMsg
Line 1798: Entering cc_DecodeMmRestErrMsg..
Line 1848: Msg ignored in cc_DecodeMmRestErrMsg
Line 1855: CallSession %d is NOT Active,  in cc_DecodeMmRestErrMsg
Line 1883: Entering cc_DecodeMmRelIndMsg...
Line 1904: Save CallDrop: Type=%d, Cause=%d
Line 1916: Discarding Saved MmSyncIndMsg
Line 1935: [OSS]: MPTY active in cc_DecodeMmRelIndMsg
Line 1967: Redialing in MMCC_REL_IND
Line 2007: No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
Line 2017: over-writting Network cause on MM cause 
Line 2058: Redialing in MMCC_REL_IND
Line 2078: No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
Line 2088: over-writting Network cause on MM cause 
Line 2130: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 2149: CallSession %d is NOT Active,  in cc_DecodeMmRelIndMsg
Line 2184: Displaying Message Contents: %s
Line 2188: CallTyp    -> 0x%02X
Line 2195: Unable to Allocate Memory to Send %s Message in cc_SendMmEstInReqMsg
Line 2231: Displaying Message Contents: %s
Line 2235: CallTyp    -> 0x%02X
Line 2241: Unable to Allocate Memory to Send %s Message in cc_SendMmReleaseReqMsg
Line 2258: Entering cc_DecodeMmPromptIndMsg...
Line 2311: Entering cc_DecodeMmRatHandoverIndMsg.....
Line 2317: All Sessions with RabId (0x%02X) To be Retained 
Line 2343: Removing Session(%d) as its RabId (0x%02X) does not Match Requested RabId (0x%02X) to Retain 
Line 2376: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 2388: CallSession  maybe invalid OR This CallSession should not be removed in cc_DecodeMmRatHandoverIndMsg
Line 2419: Setting the RabId of All Voice Call Sessions to 1 in GSM
Line 2430: Informing VCG of the New RAT & RabId
Line 2444: Setting the RabId of All Data Call Sessions to 1 in GSM
Line 2446: No Need to send Alter Codec since VCG has not been informed yet...
Line 2457: No Session Found with the given Seram Id in cc_DecodeMmRatHandoverIndMsg
Line 2462: Rat Mode change Request not successfull in cc_DecodeMmRatHandoverIndMsg
Line 2492: <<<< ALERTING >>>>
Line 2501: <<<< SETUP >>>>
Line 2510: <<<< CC_EST_CONFIRMED >>>>
Line 2525: <<<< CONNECT >>>>
Line 2538: <<<< CALL_CONFIRMED >>>>
Line 2596: <<<< START_CC >>>>
Line 2605: <<<< CONNECT_ACKNOWLEDGE >>>>
Line 2614: <<<< MODIFY_REJECT >>>>
Line 2627: Invalid MsgType (0x%02X) in cc_DecodeMmRetransmitIndMsg 
Line 2641: <<<< MODIFY >>>>
Line 2651: <<<< HOLD >>>>
Line 2660: <<<< RETRIEVE >>>>
Line 2669: <<<< MODIFY_COMPLETE >>>>
Line 2678: Invalid MsgType (0x%02X) in cc_DecodeMmRetransmitIndMsg 
Line 2702: <<<< DISCONNECT >>>>
Line 2715: <<<< RELEASE_COMPLETE >>>>
Line 2728: <<<< RELEASE >>>>
Line 2743: Invalid MsgType (0x%02X) in cc_DecodeMmRetransmitIndMsg 
Line 2760: <<<< STOP_DTMF >>>>
Line 2769: <<<< START_DTMF >>>>
Line 2780: <<<< FACILITY >>>>
Line 2786: <<<< STATUS >>>>
Line 2799: <<<< NOTIFY >>>>
Line 2810: Invalid MsgType (0x%02X) in cc_DecodeMmRetransmitIndMsg 
Line 2835: MM Requesting CC to re-transmit the given messages in cc_DecodeMmRetransmitIndMsg 
Line 2843: %d Messages to be Re-transmitted by CC
Line 2851: Message (%d) -->  %d bytes
Line 2884: Invalid MsgType (0x%02X) in cc_DecodeMmRetransmitIndMsg 
Line 2890: No Session Found to contain the given TI in cc_DecodeMmRetransmitIndMsg, Message Ignored.
Line 2929: Entering cc_DecodeFacilityIndMsg.....
Line 2937: TransactionId -> %d
Line 2963: Saving Facility Ind message ...!!!!
Line 2994: [OSS]: MPTY active in cc_DecodeFacilityIndMsg
Line 3021: [OSS]: Invalid SS TAG, in cc_DecodeFacilityIndMsg
Line 3030: [OSS]: ECT were active in cc_DecodeFacilityIndMsg
Line 3058: [OSS]: Invalid SS TAG, in cc_DecodeFacilityIndMsg
Line 3066: [OSS]: MultiParty &ECT were not active in cc_DecodeFacilityIndMsg
Line 3084: FacilityIe Missing in cc_DecodeFacilityIndMsg
Line 3092: CallSession %d is NOT Active,  in cc_DecodeFacilityIndMsg
Line 3097: No Session Found to contain the given TI in cc_DecodeFacilityIndMsg, Message Ignored.
Line 3117: [OSS]: Entering cc_SendCcNotifySsIndMsg...
Line 3235: SsCode = %d
Line 3236: SsNotification = %d
Line 3241: Unable to Allocate Memory to Send %s Message in cc_SendCcNotifySsIndMsg
Line 3261: Entering cc_DecodeNotifyIndMsg.....
Line 3266: TransactionId -> %d
Line 3292: Message ignored in cc_DecodeNotifyIndMsg
Line 3299: CallSession %d is NOT Active,  in cc_DecodeNotifyIndMsg
Line 3305: Mandatory Element Missing in cc_DecodeNotifyIndMsg
Line 3310: No Session Found to contain the given TI in cc_DecodeNotifyIndMsg, Message Ignored.
Line 3339: Displaying Message Contents: %s
Line 3343: NotificationIndicator    -> 0x%02X
Line 3350: Unable to Allocate Memory to Send %s Message in cc_SendCcNotifyIndMsg
Line 3394: [OSS]: cc_SendFacilityReqMsg: OSS encoded Success
Line 3395: [OSS]: Oss Encoded Msg Dump ->
Line 3429: Unable to Allocate Memory for FacilityEctReqPtr in cc_SendEctFacilityReqMsg
Line 3435: Unable to Allocate Memory for FacilityEctReqPtr in cc_SendEctFacilityReqMsg
Line 3441: [OSS]: cc_SendFacilityReqMsg: OSS encoded Failed
Line 3446: [OSS]: cc_SendFacilityReqMsg: OSS encoded Failed
Line 3460: Entering cc_DecodeUserInformationIndMsg...
Line 3496: Entering cc_DecodeMmRatModeChangeIndMsg...
Line 3509: <cc_redial> CSFB state = %d
Line 3510: <cc_redial> CC get the LTE RAT_MODE_CHANGE during CSFB!!, ignored..
Line 3514: Moved from HEDGE to LTE..status(%d)
Line 3557: No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
Line 3574: LTE / RAT Change Ended
Line 3586: RAT Change in Progress
Line 3601: Discarding Saved MmSyncIndMsg
Line 3624: Mis-match between states !!!!
Line 3633: RAT Change Ended
Line 3647: Discarding Saved MmSyncIndMsg
Line 3662: CallType1            -> 0x%02X
Line 3685: RAT Change Failed, Back in UMTS...
Line 3686: Setting the RabId of All Voice Call Sessions to RabId(%d) in UMTS
Line 3703: Handover Failed and resumed back to 3G, Old Nas SyncInd = %d, New Sync Ind = %d
Line 3714: Setting the RabId of All Data Call Sessions to RabId(%d) & StreamId (%d) in UMTS
Line 3735: No Voice calls OR Data Calls Active...
Line 3752: RAT Change Failed, Back in GSM...
Line 3753: No need to restore VCG since VCG data was not altered...
Line 3761: RAT Mode -> CC_UMTS_RAT_MODE
Line 3765: RAT Mode -> CC_GSM_RAT_MODE
Line 3771: Mis-match between states !!!!
Line 3779: Invalid Status in cc_DecodeMmRatModeChangeIndMsg!!!!
Line 3799: Entering cc_SendMmSrvccHoCallInfoMsg..
Line 3801: CallSessionNumber : %d
Line 3830: Displaying Message Contents: %s
Line 3832: CallTyp  -> %d
Line 3838: Unable to Allocate Memory to Send %s Message in cc_SendMmSrvccHoCallInfoMsg
Line 3861: Entering cc_DecodeMmSrvccHoCnfMsg cc_SrvccCallCntxtSetupFinished = %d,Srvcc_Ho_Status = %d
Line 3875: MMCC_SRVCC_HO_CC_INFO is sent for MO call due to Ultra-Flash CSFB
Line 3880: MMCC_SRVCC_HO_CNF is received in wrong state for MO call due to Ultra-Flash CSFB
Line 3886: MMCC_SRVCC_HO_CC_INFO is sent for MT call due to Ultra-Flash CSFB
Line 3893: MMCC_SRVCC_HO_CNF is received without MM_SYNC_IND
Line 3902: Releasing All the calls...!!!
Line 3910: NumberOfVoiceCalls = > %d
Line 3921: R-SRVCC HO Failed Activate the VCG again...!!!
Line 3926: Vcg Data ......
Line 3927: Rat Mode =%d
Line 3928: VcgRefNumber = %d
Line 3929: RabId = %d
Line 4035: Displaying Message Contents: %s
Line 4036: Srvcc_Ho_Status -> %d
Line 4042: Unable to Allocate Memory to Send %s Message in cc_DecodeMmSrvccHoCnfMsg
Line 4155: Displaying Message Contents: %s
Line 4164: Unable to Allocate Memory to Send %s Message in cc_SendCcImsInfoIndMsg
Line 4177: Entering cc_DecodeMmSrvccHoIndMsg : HandOverType : %d
Line 4191: Releasing VCG for Default Session
Line 4203: Wrong HO Type..!!!
Line 4467: Current RabId                 -> %d
Line 4670: NORMAL Initialisation <MM Management>
Line 4677: GSM to UMTS Initialisation of <MM Management>
Line 4684: UMTS to GSM Initialisation of <MM Management>
Line 4691: Unknown Initialisation Type (%d) in cc_InitialiseMmConManagement
Line 4732: RAT Mode is  %s
Line 4773: Sync Status -> %s
Line 4822: cc_SendConfigurateIratToLteReq
Line 4832: Displaying Message Contents: %s
Line 4839: Unable to Allocate Memory to Send %s Message in cc_SendConfigurateIratToLteReq
Line 4906: Entering cc_SendMmSrvccHoCallInfoMsgforDummy..
Line 4921: Displaying Message Contents: %s
Line 4923: CallTyp  -> %d
Line 4929: Unable to Allocate Memory to Send %s Message in cc_SendMmSrvccHoCallInfoMsgforDummy
