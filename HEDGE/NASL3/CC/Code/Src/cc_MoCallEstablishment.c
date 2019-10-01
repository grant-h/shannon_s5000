Line 93: cc_CheckEmergenyNum
Line 94: Emergency Number!!!  -> %x%x
Line 116: cc_ProcessUsatUsatCcCallCtrlCfmMsg
Line 126: USAT (Call Control) - Rejected the call
Line 195: USAT Call Control request is success- No change in params
Line 225: Entering cc_DecodeCcSetupReqMsg....[24.008] - 5.2.1...
Line 240: cc_FlightMode is On!!
Line 258: Already call is in progess with this TID, Call Rejected in cc_DecodeCcSetupReqMsg !
Line 426: Invalid CallType 
Line 453: This is the First Call ....
Line 460: Discarding Saved MmSyncIndMsg
Line 471: AudioHoldOff()
Line 473: All Voice Calls are Held .....
Line 477: This is NOT a Multi Media Call .....
Line 481: This is a Multi Media Call .....
Line 488: Voice Calls are NOT Held...
Line 497: Call Accepted....
Line 511: New Allocated CallSessionNumber in cc_DecodeCcSetupReqMsg -> %d
Line 534: USAT Call control not enabled
Line 579: CalledPartyNumberLength -> %d
Line 580: Called Party Number is too long!!, Call Rejected in cc_DecodeCcSetupReqMsg !
Line 602: Call Rejected....
Line 638: Insufficient resource , Call Rejected in cc_DecodeCcSetupReqMsg !
Line 662: Rejecting User's Req in cc_DecodeCcSetupReqMsg ! RAT Change in progress !!
Line 713: Entering cc_DecodeCcBearerCapSetReqMsg function
Line 721: Handle CBST command
Line 729: Encode CBST success
Line 734: Encode CBST command fail
Line 743: Handle CTM command
Line 751: Invalid command received
Line 779: CBST Bearer Cap DataPresent  -> %s
Line 780: CBST Bearer Cap Length  -> %d
Line 781: CBST Bearer Cap Ptr  ->
Line 787: CBST Bearer Cap param are not set
Line 819: cc_PerformBearerService:CcCallType = %d
Line 827: CC RAT = %d
Line 842: pal_MemAlloc() failure
Line 854: CC Call type = CC_VOICE_CALL_TYPE or CC_EMERG_CALL_TYPE
Line 864: CC Call type = CC_VIDEO_CALL_TYPE
Line 884: CC Call type = CC_DATA_CALL_TYPE
Line 887: MO Call: Set Bearer Capabilities recieved through AT+CBST cmd
Line 895: MO Call: Set Default Bearer Capabilities
Line 914: Invalid call type received. So bearer capabilities IE is not filled
Line 928: Not able to retrieve Bearer Capability params
Line 939: Invalid Session
Line 962: CallType1 -> %s
Line 964: CallType2 -> %s
Line 967: Restriction Indicator -> %s
Line 970: Calling Party Sub Address ....->
Line 976: No Calling Party Sub Address Sent
Line 981: User To User Data ....->
Line 987: No User To User Data Sent
Line 990: Priority -> %d
Line 1054: Entering cc_DecodeMmCmrqIndMsg Indicating that RR Connection is Established....
Line 1058: TransactionId  -> %d
Line 1085: Message not expected in cc_DecodeMmCmrqIndMsg
Line 1093: CallSession %d is NOT Active,  in cc_DecodeMmCmrqIndMsg
Line 1099: No Session Found to contain the given TI in cc_DecodeMmCmrqIndMsg, Message Ignored.
Line 1121: Entering cc_DecodeMmEstCnfMsg Indicating that MM Connection is Established....
Line 1125: TransactionId -> %d
Line 1134: CC_RETRY_DELAY_TIMER stop timer
Line 1178: Message not expected in cc_DecodeMmEstCnfMsg
Line 1186: CallSession %d is NOT Active,  in cc_DecodeMmEstCnfMsg
Line 1192: No Session Found to contain the given TI in cc_DecodeMmEstCnfMsg, Message Ignored.
Line 1230: Entering cc_SendSetupReqMsg....
Line 1352: Invalid Rat Mode selcted to extract Sup Codec List from Regis: %d
Line 1416: Invalid Rat Mode selcted to extract Sup Codec List from Regis: %d
Line 1538: CugReqDataPresent   = %d in cc_SendSetupReqMsg
Line 1552: 
Line 1565: Fail to Encode the message and Call Rejected....
Line 1594: Unable to Allocate Memory to Send %s Message in cc_SendSetupReqMsg
Line 1704: Unable to Allocate Memory for FacilityForwardCugInfoPtr in cc_HandleCugData
Line 1709: [OSS]: Oss Encoding Failed
Line 1714: [OSS]: Oss Encoding Failed
Line 1744: Bearer1CapabilitiesLength  -> %d
Line 1746: Bearer1CapabilitiesPtr  -> 
Line 1753: Bearer1CapabilitiesLength  -> %d
Line 1764: SupportedCodecListLength  -> %d
Line 1766: SupportedCodecListPtr  -> 
Line 1775: SupportedCodecListLength  -> %d
Line 1780: CLIdPresentationDataPresent  -> %s
Line 1782: CallingPartySubAddressLength  -> %d
Line 1784: CallingPartySubAddressPtr  -> 
Line 1791: CLIdPresentationDataPresent  -> %s
Line 1796: CalledPartyNumberDataPresent  -> %s
Line 1798: CalledPartyNumberLength  -> %d
Line 1802: CalledPartyNumberPtr  -> 
Line 1807: CalledPartySubAddressLength  -> %d
Line 1811: CalledPartySubAddressPtr  -> 
Line 1822: CalledPartyNumberDataPresent  -> %s
Line 1827: EmlppReqDataPresent  -> %s
Line 1829: EmlppPriorityLevel  -> %d
Line 1833: EmlppReqDataPresent  -> %s
Line 1839: CugReqDataPresent  -> %s
Line 1841: SuppressPreferentialIndicator  -> %d
Line 1842: CugIndex1                      -> %d
Line 1843: CugIndex2                      -> %d
Line 1844: SuppressOaIndicator            -> %d
Line 1848: CugReqDataPresent  -> %s
Line 1852: RestrictionIndicator  -> %d
Line 1889: Entering cc_DecodeProgressIndMsg [24.008] - 5.2.1.4.2....
Line 1902: TransactionId -> %d
Line 1987: Message not expected in cc_DecodeProgressIndMsg
Line 2014: CallSession %d is NOT Active,  in cc_DecodeProgressIndMsg
Line 2020: No Session Found to contain the given TI in cc_DecodeProgressIndMsg, Message Ignored.
Line 2075: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcProgressIndMsg
Line 2086: Displaying Message Contents: %s
Line 2091: Progress Indicator Byte 0 -> 0x%02X
Line 2097: No Progress Indicator Sent
Line 2104: Unable to Allocate Memory to Send %s Message in cc_SendCcProgressIndMsg
Line 2150: Entering cc_DecodeCallProceedingIndMsg....[24.008]-5.2.1.3
Line 2152: TransactionId -> %d
Line 2230: Network Supports Multi Call -> %s
Line 2243: No Bearer 1 Capabilities in cc_DecodeCallProceedingIndMsg
Line 2259: No Bearer 2 Capabilities in cc_DecodeCallProceedingIndMsg
Line 2273: No Repeat Indicator Available in cc_DecodeCallProceedingIndMsg
Line 2296: [OSS]: Oss Decoding Failed
Line 2301: CUG Data Not Available in cc_DecodeCallProceedingIndMsg
Line 2322: No Priority Given in cc_DecodeCallProceedingIndMsg
Line 2346:  Ignoring cc_DecodeCallProceedingInd message received in CC_Disconnect_requested State: call will be released
Line 2354: Message not expected in cc_DecodeCallProceedingIndMsg
Line 2381: SessionStatus is NOT active for this CallSessionNumber !! in cc_DecodeCallProceedingIndMsg
Line 2405: No Session Found to contain the given TI in cc_DecodeCallProceedingIndMsg, Message Ignored.
Line 2472: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcCallProcIndMsg
Line 2494: CUG Data Not Available in cc_SendCcCallProcIndMsg
Line 2514: WbAmrEnabled = %d
Line 2520: Unable to Allocate Memory to Send %s Message in cc_SendCcCallProcIndMsg
Line 2558: Entering cc_DecodeAlertIndMsg....[24.008]-5.2.1.5
Line 2560: TransactionId -> %d
Line 2641:  For Data Calls, CC does not need to inform VCG or RABM
Line 2682: Internal Alerting -> %s
Line 2722: Session State  is NOT valid for this message !! in cc_DecodeAlertIndMsg
Line 2741: Message not expected in cc_DecodeAlertIndMsg
Line 2767: SessionStatus is NOT active for this CallSessionNumber !! in cc_DecodeAlertIndMsg
Line 2816: No Session Found to contain the given TI in cc_DecodeAlertIndMsg, Message Ignored.
Line 2860: Internal Alerting -> %s
Line 2890: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcCallProcIndMsg
Line 2906: Call Waiting Indication-> %s
Line 2915: CallForwardingStatus == %d
Line 2917: Call Divert Indication-> %s
Line 2924: Unable to Allocate Memory to Send %s Message in cc_SendCcAlertIndMsg
Line 2968: Entering cc_DecodeConnectIndMsg....[24.008]-5.2.1.6
Line 2970: TransactionId -> %d
Line 2986: Session State  is NOT valid for this message !! in cc_DecodeConnectIndMsg
Line 3035: MultiCallUsed -> TRUE
Line 3041: This is a Voice Call
Line 3050: VCG Cnf already received -> Accept Connect Ind Msg
Line 3055: Must Wait For VCG Cnf. This Msg is Saved Until then...
Line 3061: This is a Data Call
Line 3063: Sync Ind has arrived -> Accept Connect Ind Msg
Line 3069: In Multi Call, Every Call Must Have a Sync Ind. Wait Until Sync Ind Arrives. This Msg is Saved Until then...
Line 3075: MultiCallUsed -> FALSE
Line 3079: This is a Voice Call
Line 3084: Either Sync Ind has arrived or this is a second voice call and VCG already activated. VCG CNF already received -> Accept Connect Ind Msg
Line 3089: GCF test USAT 27.22.4.27.2
Line 3094: Must Wait Until Sync Ind &/or VCG Cnf Arrives. This Msg is Saved Until then...
Line 3100: This is a Data Call
Line 3104: Either Sync Ind has arrived or this is a second call. For a single bearer, no more Sync Ind will arrive -> Accept Connect Ind Msg
Line 3109: Must Wait Until Sync Ind Arrives. This Msg is Saved Until then...
Line 3170:  For Data Calls, CC does not need to inform VCG or RABM
Line 3267: No Valid  Connected Sub Address in cc_DecodeConnectIndMsg
Line 3273: No Valid  Connected Sub Address in cc_DecodeConnectIndMsg
Line 3279: No Valid Connected Number in cc_DecodeConnectIndMsg
Line 3285: No Valid Connected Number in cc_DecodeConnectIndMsg
Line 3334: Message ignored in cc_DecodeConnectIndMsg
Line 3359: SessionStatus is NOT active for this CallSessionNumber !! in cc_DecodeConnectIndMsg
Line 3415: No Session Found to contain the given TI in cc_DecodeConnectIndMsg, Message Ignored.
Line 3446: [OSS]: Oss Decoding got faield
Line 3485: TransactionId -> %d
Line 3492: Internal Alerting -> %s
Line 3499: RabId -> 0x%02X
Line 3528: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcSetupCnfMsg
Line 3593: Error In cc_AllocateMemoryForSeparateBuffer for ConnectedSubAddressPtr in cc_SendCcSetupCnfMsg
Line 3605: Unable to Allocate Memory for ConnectedLineIdPresentation in  %s Message in cc_SendCcSetupCnfMsg
Line 3639: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupCnfMsg
Line 3659: Entering cc_SendCcBearerCapSetRspMsg
Line 3671: BearerCommandType: %d
Line 3672: BearerType: %d
Line 3673: Result: %d
Line 3678: Unable to Allocate Memory to Send %s Message in cc_SendCcBearerCapSetRspMsg
Line 3711: Unable to Allocate Memory to Send %s Message in cc_SendConnAckReqMsg
Line 3734: Entering cc_DecodeCcModifyReqMsg....[24.008]-5.2.1.6
Line 3737: TransactionId -> %d
Line 3817: Unable to Allocate Memory to Send %s Message in cc_SendModifyReqMsg
Line 3851: Entering cc_DecodeModifyCompIndMsg Indicating that MM Connection is Established....
Line 3853: TransactionId -> %d
Line 3925: No Session Found to contain the given TI in cc_DecodeModifyCompIndMsg, Message Ignored.
Line 3955: Displaying Message Contents: %s
Line 3965: Unable to Allocate Memory to Send %s Message in cc_SendCcModifyCnfIndMsg
Line 4000: Entering cc_DecodeModifyRejIndMsg Indicating that MM Connection is Established....
Line 4002: TransactionId -> %d
Line 4036: CauseIe not available in cc_DecodeModifyRejIndMsg
Line 4096: No Session Found to contain the given TI in cc_DecodeModifyRejIndMsg, Message Ignored.
Line 4142: Displaying Modify Rej Ind Message Contents: %s
Line 4156: Unable to Allocate Memory to Send %s Message in cc_SendCcModifyRejIndMsg
Line 4190: Entering cc_DecodeModifyIndMsg Indicating that MM Connection is Established....
Line 4192: TransactionId -> %d
Line 4263: No Session Found to contain the given TI in cc_DecodeModifyIndMsg, Message Ignored.
Line 4295: Displaying Modify Ind Message Contents: %s
Line 4305: Unable to Allocate Memory to Send %s Message in cc_SendCcModifyIndMsg
Line 4330: Entering cc_DecodeCcModifyCompReqMsg....[24.008]-5.2.1.6
Line 4332: TransactionId -> %d
Line 4407: Unable to Allocate Memory to Send %s Message in cc_SendModifyCompReqMsg
Line 4447: Entering cc_DecodeCcModifyRejReqMsg....[24.008]-5.2.1.6
Line 4449: TransactionId -> %d
Line 4568: Unable to Allocate Memory to Send %s Message in cc_SendModifyRejReqMsg
Line 4591: Entering cc_DecodeCcNotifyReqMsg [24.008] - 5.2.1.4.2....
Line 4593: TransactionId -> %d
Line 4621: Notify lost in re-establish in cc_DecodeCcNotifyReqMsg
Line 4629: Message ignored in cc_DecodeCcNotifyReqMsg
Line 4637: No Session Found to contain the given TI in cc_DecodeCcNotifyReqMsg, Message Ignored.
Line 4725: cc_MapNsToCcCallState INVALID SRVCC NscallState =%d
Line 4752: Entering cc_DecodeCcSrvccHoCallSetupReqMsg
Line 4753: Number of Active Call Sessions =%d
Line 4765: Already call is in progess with this TID, Call Rejected in cc_DecodeCcSrvccHoCallSetupReqMsg !
Line 4785: Invalid CallType 
Line 4792: Call Accepted....
Line 4818: Call Rejected....
Line 4828: Insufficient resource , Call Rejected in cc_DecodeCcSrvccHoCallSetupReqMsg !
Line 4834: cc_SrvccCallCntxtSetupFinished ==%d
Line 4852: Entering cc_DecodeCcRetrieveSrvccHoCnfReqMsg
Line 4853: cc_SrvccCallCntxtSetupFinished ==%d,Number of Active Call Sessions =%d
Line 4866: cc_CheckMmSrvccHoCnfMsgSaveStatus is TRUE in cc_DecodeCcRetrieveSrvccHoCnfReqMsg !
Line 5075: Unable to Allocate Memory to Send %s Message in cc_SendNotifyReqMsg
Line 5116: Other Calls Already Acitve
Line 5120: User Requests Multi Call
Line 5124: Mobile Supports Multi Call
Line 5128: Network Supports Multi Call
Line 5132: Unable To Find an Available Stream Identifier
Line 5141: Network Does NOT Supports Multi Call
Line 5146: Mobile Does NOT Supports Multi Call
Line 5151: User Does NOT Request Multi Call
Line 5248: cc_GetSetupReqSend: cc_SetupReqSend[CcCurrentStackId] =0x%x
Line 5261: cc_SetSetupReqSend: SetupReqSend =0x%x
Line 5516: Emergency Call Category -> %s
Line 5587: Progress Indicator -> %s
Line 5638: NORMAL Initialisation of <MO Call Establishment>
Line 5653: GSM to UMTS Initialisation of <MO Call Establishment>
Line 5659: UMTS to GSM Initialisation of <MO Call Establishment>
Line 5665: Unknown Initialisation Type (%d) in cc_InitialiseMoCallEstablishment
