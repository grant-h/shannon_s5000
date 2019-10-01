Line 144: Entering cc_DecodeSetupIndMsg....[24.008] - 5.2.2...
Line 180: TransactionId -> %d
Line 188: MT call released because CS call is blocked
Line 201: MT call released with cause User busy. Reason: CSVT call is in progress
Line 209: MT call released with cause User busy. Reason: cc_MtCallBlockStatus(%d)
Line 223: Discarding Saved MmSyncIndMsg
Line 258: MT VT call released with cause User busy. Reason: CS call is in progress
Line 267: MT call released with cause User busy. Reason: CS call is in progress
Line 291: 2nd MT call is disconnected with cause User busy. Reason: Call waiting is disabled in IMS
Line 296: MT call released with cause User busy. Reason: MO call establishment is in progress
Line 330: Release previous MO call with cause Normal Clearing. Reason: MT call establishment is in progress and still MM connection is not established for MO call
Line 370: Accept MT call, Call Session Number -> %d
Line 379: Ti -> %d
Line 381: cc_CsvtCallSupport = %d, GapiData.CallType1 = %d
Line 387: Video Call is Allowed
Line 427: No Bearer 2 Capabilities in cc_DecodeSetupIndMsg
Line 452: Low Layer Compatibility 1->
Line 458: No Low Layer Compatibility 1 in cc_DecodeSetupIndMsg
Line 469: Low Layer Compatibility 2->
Line 475: No Low Layer Compatibility 2 in cc_DecodeSetupIndMsg
Line 486: High Layer Compatibility 1->
Line 492: No High Layer Compatibility 1 in cc_DecodeSetupIndMsg
Line 503: High Layer Compatibility 2->
Line 509: No High Layer Compatibility 2 in cc_DecodeSetupIndMsg
Line 537: Signal Ind Present -> %s
Line 553: Network Supports Multi Calll -> %s
Line 564: Calling Party Number ....->
Line 576: Calling Party Sub Address ....->
Line 585: No Valid Calling Party Sub address Given in cc_DecodeSetupIndMsg
Line 590: No Valid Calling Party Number in cc_DecodeSetupIndMsg
Line 606: Called Party Number ....->
Line 614: No Valid Called Party Number in cc_DecodeSetupIndMsg
Line 631: Called Party Sub Address ....->
Line 640: No Valid Called Party Sub address Given in cc_DecodeSetupIndMsg
Line 655: Cause of No CLI -> %d
Line 673: No Valid Facility Message sent in cc_DecodeSetupIndMsg
Line 698: Number PLUS recieved from NW
Line 704: Redirecting Party Number ....->
Line 716: Redirecting Party Sub Address ....->
Line 725: No Valid Redirecting Party Sub Address Given in cc_SendCcSetupIndMsg
Line 735: No Valid Redirecting Party Number In cc_DecodeSetupIndMsg
Line 752: No Priority Given in cc_DecodeSetupIndMsg
Line 763: Progress Indicator ....->
Line 772: No Progress Indicator Given in cc_DecodeSetupIndMsg
Line 786: Alerting Pattern -> %d
Line 913: Insufficient resource , Aborting Operations in cc_DecodeSetupIndMsg !
Line 939: TransactionId already in use !
Line 945: Invalid TransactionId Flag received from Network !
Line 967: Unable to Allocate Memory to Send %s Message in cc_SendCcCallConfirmRspMsg
Line 982: Entering cc_DecodeCallConfirmReqMsg....
Line 1017: Wrong State in cc_DecodeCallConfirmReqMsg !!!.
Line 1025: No Session is Assigned  in cc_DecodeCallConfirmReqMsg, Message Ignored.
Line 1031: No Session Found to contain the given TI in cc_DecodeCallConfirmReqMsg, Message Ignored.
Line 1053: Unable to Allocate Memory to Send %s Message in cc_SendCallListUpdateMsg
Line 1115: Memory Allocation Failed
Line 1123: Facility : LoopCount %d CurrentStartPos %d CurrLen %d
Line 1142: Facility : SS Code = %d, SS Notification = %d, CUG ind = %d, CNAP = %d
Line 1230: [OSS]: Invalid SscodeIE received
Line 1247: SS notification (0x%02X) and CallForwardingIndication (0x%02X) in cc_HandleFacilityIEInSetupInd
Line 1250: [CNAP]%d 
Line 1265: Memory Free : LoopCount %d
Line 1306: Entering cc_CheckBearerCompatibility function
Line 1319: pal_MemAlloc() failure
Line 1346: Invalid RAT Mode
Line 1349: CcRatMode = %d
Line 1409: cc_CheckBearerCompatibility: Bearer capability 1 is not filled
Line 1496: WbAmrEnabled = %d
Line 1556: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1565: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1571: No Valid Calling Party Number in cc_SendCcSetupIndMsg
Line 1609: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1615: CalledPartyNumber is absent!!
Line 1645: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1693: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1725: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1756: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1775: CUG Data Not Available in cc_SendCcSetupIndMsg
Line 1810: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcSetupIndMsg
Line 1881: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1928: cc_PerformBearerNegotiation
Line 1933: Unable to Allocate Memory
Line 1991: RetValue = %d
Line 1995: Received Null Bearer cap1 params
Line 2007: BC Reading Failed
Line 2072: Bearer ID is negative
Line 2081:  pal_MemAlloc() failure
Line 2092: Bearer Capability Error
Line 2103: Bearer ID is negative
Line 2110: BC1 Length -> %d
Line 2114: Session Not assigned
Line 2257: Displaying Message Contents: %s
Line 2296: Bearer Capability 1 -->
Line 2312: Bearer Capability 2 -->
Line 2388: Invalid Rat Mode selcted to extract Sup Codec List from Regis: %d
Line 2401: Suported Codec List Not Available
Line 2409: Network Does Not Support Multi Call
Line 2442: Voice Call Already Present
Line 2515: Unable to Allocate Memory to Send %s Message in cc_SendCallConfReqMsg
Line 2539: Session not assigned
Line 2581: Entering cc_DecodeCcRejReqMsg, GAPI Rejecting the MT Call......
Line 2595: TransactionId  -> %d
Line 2685: No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
Line 2718: No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
Line 2765: Message not expected OR Ignored in cc_DecodeCcRejReqMsg
Line 2774: CallSession %d is NOT Active in cc_DecodeCcRejReqMsg
Line 2780: No Session Found to contain the given TI in cc_DecodeCcRejReqMsg, Message Ignored.
Line 2806: Entering cc_SendAlertReqMsg 
Line 2808: TransactionId  -> %d
Line 2833: Unable to Allocate Memory to Send %s Message in cc_SendAlertReqMsg
Line 2847: Message not expected OR Ignored in cc_SendAlertReqMsg
Line 2856: Session Not Assigned in cc_SendAlertReqMsg, Message Ignored
Line 2883: Entering cc_DecodeCcConnectReqMsg....
Line 2891: TransactionId  -> %d
Line 2975: RatMode: %d, callType1: %d 
Line 2982: Determining VCG action for Early User Connection
Line 3033: CONN_CNF for CSVT
Line 3040: Early User Connection invalid for non voice calls
Line 3059: Message not expected OR Ignored in cc_DecodeCcConnectReqMsg
Line 3068: CallSession %d is NOT Active in cc_DecodeCcConnectReqMsg
Line 3074: No Session Found to contain the given TI in cc_DecodeCcConnectReqMsg, Message Ignored.
Line 3151: CugReqDataPresent   = %d in cc_SendConnectReqMsg
Line 3163: Displaying Message Contents: %s
Line 3171: Unable to Allocate Memory to Send %s Message in cc_SendConnectReqMsg
Line 3198: Entering cc_DecodeConnAckIndMsg....
Line 3216: TransactionId  -> %d
Line 3269: VCG already activated
Line 3274: VCG need to activate for Voice call only
Line 3328: Connect_Ack_Ind received in unexpected State %d
Line 3342: CallSession %d is NOT Active in cc_DecodeConnAckIndMsg
Line 3348: No Session Found to contain the given TI in cc_DecodeConnAckIndMsg, Message Ignored.
Line 3380: Displaying Message Contents: %s
Line 3381: Ti     -> %d
Line 3382: RabId  -> 0x%02X
Line 3388: Unable to Allocate Memory to Send %s Message in cc_SendCcConnectCnfMsg
Line 3487: cc_GetNsCallTypefromNtwkCallType(): Cannot bc_create_bearer
Line 3497: cc_GetNsCallTypefromNtwkCallType(): bc_put_bearer, BcStatus -> %d
Line 3504: cc_GetNsCallTypefromNtwkCallType(): Cannot bc_get_bearer_element
Line 3521: cc_GetNsCallTypefromNtwkCallType(): Cannot bc_get_bearer_element
Line 3580: NORMAL Initialisation of <MT Call Establishment>
Line 3589: GSM to UMTS Initialisation of <MT Call Establishment>
Line 3596: UMTS to GSM Initialisation of <MT Call Establishment>
Line 3603: Unknown Initialisation Type (%d) in cc_InitialiseMtCallEstablishment
