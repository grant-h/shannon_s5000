Line 164:  ns_SmsFreeMoSMSReq
Line 174:  FREEING memory for MO SMS REQ
Line 196: Error: Null Pointer
Line 197: Error: Null Pointer
Line 199:  SendMode=%d SR=%d 
Line 211:  Length too long for memcpy: %d
Line 220:  Length too long for memcpy: %d
Line 229: Length too long for memcpy
Line 252: No Status Report
Line 292:  Send Mode %d
Line 302: Failed to allocate TID resources: result %d
Line 317:  buffer length error[%d]
Line 387: Error: Null Pointer
Line 437: Built NS_SMS_SEND_REQ_REJ: Cause %d, SubCause %d, MsgRef %d
Line 464: Error: Null Pointer
Line 493: Build SMS_REL_REQ (Ti=%d, MoreMessagesToFollow=%d)
Line 503: More SMS to be sent /PS DET not needed
Line 530: Error: Null Pointer
Line 551: NS_SMS_SEND_RSP(Tid %d): Result=%x, Cause=0x%x, SimRecord=%d, MsgRef=%d, SId=%d, DiagInfo=%d
Line 672: Error: Null Pointer
Line 695: Usat-Send-Sms -> Tid = 0x%02x
Line 739: Error: Null Pointer
Line 792: DataBearer %d
Line 812: Built SMS_MO_REQ: Ti = %d DataBearer %d
Line 818: Result(%d), MO SMS encoding failed for message type %d
Line 823: Result(%d), MO SMS PDU preparation failed
Line 830: SMS MO REQ[TPDU]: 
Line 836:  Message encoding failed: result = %d
Line 892: Previous [ConcatMsgRef %d, ConcatMsgSeq %d, ConcatTotMsg %d, ConcatType %d ]
Line 898: [SMS_SAP] SMS Transaction type: Concatenated, [Page: %d/%d, KeepLinkOpen: %d], New concatenated SMS
Line 913: [SMS_SAP] SMS Transaction type: Concatenated, [Page: %d/%d, KeepLinkOpen: %d], part of previous concatenated SMS
Line 960: Current- [ConcatMsgRef %d, ConcatMsgSeq %d, ConcatTotMsg %d, ConcatType %d ]
Line 965: SmsTransactionInfo: TransactionType=Normal, KeepLinkOpen=%d
Line 989: Error: Null Pointer
Line 998:  Failed to allocate TID resources: result %d
Line 1025: Rx  SMS:
Line 1027: Packing Reqd: %d
Line 1031: Packing Reqd changed to : %d
Line 1076:  Stored Usat SID = 0x%02x PackingRequired : %d
Line 1087: Failed to allocate SMS TID resources for ns_UsatSmsAllocateMoReqTidResources
Line 1095: BuildMoSmsReq Failed to Build MO SMS Message encoding failed: result = %d
Line 1102: Free Tid Failed
Line 1128: ns_MoSmsPreHandler: NsStackState=%d, KeepLinkOpenTid=%d
Line 1142: Stack not initialised!
Line 1151: ns_KeepLinkOpenTid(%d) is valid one. Stop Timer
Line 1161: SId not found for TId %d
Line 1171: Operator requirement ! Dont Check FDN
Line 1176: TCO requirement ! Dont Check FDN
Line 1203: FDN check Passed for calledPartyNum
Line 1207: FDN check Failed for calledPartyNum
Line 1219: FDN check Passed for serviceCenterNum
Line 1223: FDN check Failed for serviceCenterNum
Line 1236: MO SMS Rejected by UICC!
Line 1257: Concatenated MO SMS Error!
Line 1273:  Failed to allocate TID resources: result %d
Line 1286: Build SMS_MO_REQ Error!
Line 1305: Failed to store SMS_MO_REQ!
Line 1349: [NS_SMS_SEND_REQ] MsgType=%d, SendMode=%d, Status Report=%d, optMask=0x%02x, KeepLinkOpen=%d, 
Line 1350: + PresentFlag (MsgRef=%d, DestAddr=%d, SCAddr=%d, PID=%d, DCS=%d, VP=%d)
Line 1362: Failed to load default SMS parameters from SIM!
Line 1404: Send SMS_MO_REQ (Ti=%d, SmsType=%d, DataLength=%d)
Line 1430: Error: Null Pointer
Line 1431: [NS_MEM_STATUS_REQ] MemStatus = %d
Line 1454: MO SMS Control by USIM enabled. Result : %d
Line 1467: Changed SCAddr: 
Line 1474: Changed DestAddr: 
Line 1514: Error: Null Pointer
Line 1526: SCAddr: ton = %d npi = %d
Line 1527: SCAddr: 
Line 1534: DestAddr: ton = %d npi = %d
Line 1535: DestAddr: 
Line 1543: Rcvd Rsp from SYNC MBX
Line 1592: Error: Null Pointer
Line 1664: TID is out of range (%d)
Line 1670: TID=%d, Previous info was not set
Line 1696: TID is out of range (%d)
Line 1702: TID=%d, Previous info was not cleared (MsgRef:%d, KeepLinkOpen:%d)
Line 1765: Error: Null Pointer
Line 1832: Error: Null Pointer
Line 1839: Built SMS_ABORT_REQ Ti = %d
Line 1868: Error: Null Pointer
Line 1878: Unknown ReqType: %d
Line 1901: Error: Null Pointer
Line 1904: Error: Null Pointer
Line 1923: CbmidListCount is too many %d
Line 1947: Error: Null Pointer
Line 1972: [SMS_SERV_RSP] Ti=%d, Cause=%d, DiagInfo=%d, Result=%d, ns_KeepLinkOpenTid= %d
Line 2020: Info in SMS_MO_REQ -> Ref=%d, LinkOpen=%d
Line 2062: Fail to find SIdFromTid - TID=%d
Line 2404: Error: Null Pointer
Line 2411: Tx Data to SIM SAP :
Line 2433: Expired: Keep Link Open Timer - KeepLinkOpenTid(%d)
Line 2444: SId not found for TId %d
Line 2449: Error: Null Pointer
Line 2481: SmsPpEnabled = %d
Line 2498: SmsPpEnabled = %d
Line 2507: offset1= %d TpOaLen = %d mtSMS_ptr[offset] = %d
Line 2512: offset= %d Pid = %d Class = %d
Line 2584: MemAlloc Fail
Line 2592: [SMS_SAP] SMS_MT_IND: PID=%d, SId=%d (Ti=%d), MsgRef = %d
Line 2612: WAP-PUSH (port 8 / port 16 ID found
Line 2664: Skipping Message Storage to SIM As port 8/16 addressing found
Line 2739: Error: Null Pointer
Line 2740: Error: Null Pointer
Line 2742: [SMS_MT_IND] Ti %d, DataLength %d
Line 2760: AT&T Requirement,Not saving in SIM
Line 2773: Error: Null Pointer
Line 2801: Error: Null Pointer
Line 2838: Error: Null Pointer
Line 2861: USIM  scalen %d ton npi 0x%x , ns_SmsPpEnabled Npi = 0x%x Ton = 0x%x NoLen = 0x%x TpduLen = 0x%x pRxSmsMsg->Ti = 0x%x
Line 2863: SCA NUM 
Line 2864: TPDU 
Line 2924: Error: Null Pointer
Line 2960: Error: Null Pointer
Line 2976: Error: Null Pointer
Line 3008: Error: Null Pointer
Line 3039: Error: Null Pointer
Line 3064: RSP by CBMID update. Don't send forward it to HIU..
Line 3069: Error: Null Pointer
Line 3101: Error: Null Pointer
Line 3105: Error: Null Pointer
Line 3142: Stop network Request:ns_KeepLinkOpenTid(%d) != NS_SMS_INVALID_TID, Stop Timer 
Line 3152: SId not found for TId %d
Line 3163: SmsSAP_ServiceLockTable [Status(%d), Tid(%d)]
