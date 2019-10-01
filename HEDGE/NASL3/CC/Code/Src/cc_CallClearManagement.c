Line 94: Entering cc_DecodeCcDisconnectReqMsg....[24.008]-5.4.3
Line 111: TransactionId -> %d
Line 113: User triggers disconnection. CallDropType should be reset(old value Type=%d, Cause=%d
Line 371: Disc Req  Received in CC_RELEASE_REQUESTED...!!!
Line 378: Disc Req  Received in CC_DISCON_REQUESTED...!!!
Line 386: Message not expectecd in cc_DecodeCcDisconnectReqMsg. Send Response to upper layers for state Sync
Line 396: CallSession %d is NOT Active in cc_DecodeCcDisconnectReqMsg. Response to Upper layers for state Sync.
Line 406: DataPresent (Must be TRUE) -> %s
Line 411: No Session Found to contain the given TI in cc_DecodeCcDisconnectReqMsg, Response to upper layer for state Sync.
Line 418: Dummy CallSessionNumber in cc_DecodeCcDisconnectReqMsg -> %d
Line 429: Message not expectecd in cc_DecodeCcDisconnectReqMsg. Send Response to upper layers for state Sync
Line 480: Unable to Allocate Memory to Send %s Message in cc_SendDisconnectReqMsg
Line 532: Unable to Allocate Memory for FacilityForwardCugInfoPtr in cc_SendSetupReqMsg
Line 537: [OSS]: Oss Encoding Failed
Line 542: [OSS]: Oss Encoding Failed
Line 577: Entering cc_DecodeReleaseIndMsg....[24.008]-5.4.3
Line 593: TransactionId -> %d
Line 609: ERROR: CauseIePtrLen (%d)is greater than CC_CAUSE_LEN
Line 618: CauseIe not available in cc_DecodeRelCompleteIndMsg, Fetched from Disconnect_Ind message
Line 622: ERROR: CauseIePtrLen (%d)is greater than CC_CAUSE_LEN
Line 669: FacilityIe not available in cc_DecodeReleaseIndMsg
Line 676: [OSS]: MPTY active in cc_DecodeReleaseIndMsg
Line 705: Don't Release VCG: Number of call sessions = %d
Line 729: Retrying call establishment
Line 748: Performing normal call clearing, and Auto Re-Dial may be aborted 
Line 749: due to either AP triggered Call clearing or NW cause may not be matched to Auto redial cause list or Num of auto-redial attempts >1
Line 799: Retrying call establishment
Line 817: Performing normal call clearing, and Auto Re-Dial may be aborted 
Line 818: due to either AP triggered Call clearing or NW cause may not be matched to Auto redial cause list or Num of auto-redial attempts >1
Line 896: Ect not Active in cc_DecodeReleaseIndMsg
Line 901: Releasing Data Call Type in cc_DecodeReleaseIndMsg
Line 925: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 952: Detected a Collision. Network releasing a Call at the same time as User in cc_DecodeReleaseIndMsg
Line 998: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 1030: CallSession %d is NOT Active Send ReleaseComplete in cc_DecodeReleaseIndMsg
Line 1049: No Session Found to contain the given TI in cc_DecodeReleaseIndMsg, send Rel_comp_req to the network.
Line 1071: No Session Found to contain the given TI in cc_DecodeReleaseIndMsg, Message Ignored.
Line 1163: Unable to Allocate Memory to Send %s Message in cc_SendReleaseCompleteReqMsg
Line 1195: Unable to Find CallSession %d in cc_SendCcReleaseIndMsg
Line 1205: 2nd release_ind for session %d is discared in cc_SendCcReleaseIndMsg
Line 1236: This call is rejected so stop retry timer if it is running. 
Line 1263: Configure CallDrop. Saved: Type=%d, Cause=%d, Recv: Type=%d, Cause=%d
Line 1268: REESTABLISHMENT fail=%d
Line 1334: Unable to Allocate Memory for CalledPartyNumberPtr in %s Message in cc_SendCcReleaseIndMsg
Line 1364: Unable to Allocate Memory for CalledPartySubAddPtr in %s Message in cc_SendCcReleaseIndMsg
Line 1467: Displaying Message Contents: %s
Line 1471: Cause.DataPresent  -> %s
Line 1480: CcbsRsp.DataPresent  -> %s
Line 1483: CcbsRsp.CcbsIndex                -> %d
Line 1484: CcbsRsp.Result                   -> %d
Line 1485: CcbsRsp.ErrorCode                -> %d
Line 1486: CcbsRsp.BasicServiceCode         -> %d
Line 1490: CcbsRsp.CalledPartyNumberLength  -> %d
Line 1491: CcbsRsp.CalledPartyNumberPtr  -> 
Line 1496: CcbsRsp.CalledPartyNumberLength  -> %d
Line 1501: CcbsRsp.DataPresent  -> %s
Line 1505: CallBarringInd.DataPresent -> %s
Line 1517: Unable to Allocate Memory to Send %s Message in cc_SendCcReleaseIndMsg
Line 1566: Entering cc_DecodeDisconnectIndMsg....[24.008]-5.4.3
Line 1596: TransactionId -> %d
Line 1619: ERROR: CauseIePtrLen (%d)is greater than CC_CAUSE_LEN
Line 1631: MO call establishment fail because of Network Issue: UE will try Redial without notifying to User
Line 1662: MO call establishment fail because of Network Issue: UE will try Redial without notifying to User
Line 1689: ProgressIndicatorIe not available in cc_DecodeDisconnectIndMsg
Line 1708: CcbsActionsIe not available in cc_DecodeDisconnectIndMsg
Line 1730: [OSS]:  OSS Decodign Failed
Line 1735: FacilityIe not available in cc_DecodeDisconnectIndMsg
Line 1742: [OSS]: MPTY active in cc_DecodeDisconnectIndMsg
Line 1772: Reset MPTY state session No.%d State %d
Line 1802: No need to send CC_DISCONNECT_IND(Above layers doesn't have MT call ctxt)
Line 1811: Preparing for Redialing
Line 1979: CallSession %d is NOT Active Send ReleaseComplete in cc_DecodeDisconnectIndMsg
Line 1998: CauseIe not available in cc_DecodeDisconnectIndMsg
Line 2017: No Session Found to contain the given TI in cc_DecodeDisconnectIndMsg send Release Complete.
Line 2134: Unable to Allocate Memory for FacilityForwardCugInfoPtr in cc_SendSetupReqMsg
Line 2139: [OSS]: Failed to encode Facility IE message
Line 2144: [OSS]: Failed to encode Facility IE message
Line 2167: Unable to Allocate Memory to Send %s Message in cc_SendReleaseReqMsg
Line 2198: Entering cc_DecodeCcRelReqMsg [24.008]-5.4.4.2.2.1 
Line 2218: TransactionId -> %d
Line 2396: CC_RELEASE_REQUESTED: Message ignored in cc_DecodeCcRelReqMsg
Line 2402: Message ignored in cc_DecodeCcRelReqMsg
Line 2409: CallSession %d is NOT Active in cc_DecodeCcRelReqMsg
Line 2414: No Session Found to contain the given TI in cc_DecodeCcRelReqMsg, Message Ignored.
Line 2461: Entering cc_DecodeRelCompleteIndMsg
Line 2481: TransactionId -> %d
Line 2514: Memory Allocation Failed
Line 2524: CauseIe not available in cc_DecodeRelCompleteIndMsg, Fetched from Disconnect_Ind message
Line 2585: [OSS]: Oss Decoding got Failed
Line 2591: FacilityIe not available in cc_DecodeRelCompleteIndMsg
Line 2598: [OSS]: MPTY active in cc_DecodeRelCompleteIndMsg
Line 2608: Ignoring cc_DecodeRelCompleteIndMsg received in CC_MM_CON_PEND_WAIT_MM_CMRQ or CC_MM_CONNECTION_PENDING state
Line 2659: Ect not Active in cc_DecodeRelCompleteIndMsg
Line 2664: Releasing Data Call Type in cc_DecodeRelCompleteIndMsg
Line 2672: Retrying call establishment
Line 2693: Performing normal call clearing, and Auto Re-Dial may be aborted 
Line 2694: due to either AP triggered Call clearing or NW cause may not be matched to Auto redial cause list or Num of auto-redial attempts >1
Line 2708: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 2740: Retrying call establishment
Line 2758: Performing normal call clearing, and Auto Re-Dial may be aborted 
Line 2759: due to either AP triggered Call clearing or NW cause may not be matched to Auto redial cause list or Num of auto-redial attempts >1
Line 2768: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 2794: DecodeRelCompleteIndMsg in CallState : %s
Line 2817: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 2834: CallSession %d is NOT Active, in cc_DecodeRelCompleteIndMsg
Line 2840: No Session Found to contain the given TI in cc_DecodeRelCompleteIndMsg, Message Ignored.
Line 2897: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcDisconnectIndMsg
Line 3035: Displaying Message Contents: %s
Line 3040: Cause.DataPresent  -> %s
Line 3042: Cause.CallDropCause  -> %s
Line 3044: Cause.CallDropType  -> %d
Line 3051: CallBarringInd.DataPresent -> %s
Line 3058: CcbsPossibleInd.DataPresent -> %s
Line 3068: Unable to Allocate Memory to Send %s Message in cc_SendCcDisconnectIndMsg
Line 3110: This call is rejected so stop retry timer if it is running. 
Line 3146: Displaying Message Contents: %s
Line 3150: Cause.DataPresent  -> %s
Line 3162: Unable to Allocate Memory to Send %s Message in cc_SendCcRejectIndMsg
Line 3243: CC Cause Location -> %s
Line 3593: CC Cause  -> %s  0x%x
Line 3688: CC Cause Diagnostics -> %s
Line 3705: NORMAL Initialisation of <Call Clear Management>
Line 3711: GSM to UMTS Initialisation of <Call Clear Management>
Line 3717: UMTS to GSM Initialisation of <Call Clear Management>
Line 3723: Unknown Initialisation Type (%d) in cc_InitialiseCallClear
Line 3775: Unable to Allocate Memory to Send %s Message in cc_SendCcReleaseIndMsg
Line 3813: Function - cc_DecodeCcStopNetworkReq  Active call clearing as a result of Flight mode ON
Line 3858: New CallSessionNumber %d
Line 3872: [OSS]: MPTY active in cc_DecodeCcStopNetworkReq
Line 3889: StopNetworkReq received in CC_NULL state after SETUP REQ is received, sending REL_IND to upper layers
Line 3895: StopNetworkReq received in CC_NULL state
Line 3921: STOP Network due to SIM error or Power down
Line 3931: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 3942: Message not expectecd or ignored in cc_DecodeCcStopNetworkReq
Line 3950: CallSession %d is NOT Active,  in cc_DecodeCcStopNetworkReq
Line 3958: Rejecting User's Call Clear Req in cc_DecodeCcStopNetworkReq ! RAT Change in progress !!
