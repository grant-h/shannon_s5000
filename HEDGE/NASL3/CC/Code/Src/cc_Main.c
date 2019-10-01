Line 211: [OSS]: Attempting to Read SsInvokeId Using Invalid CallSessionNumber(%d) in SsInvokeId
Line 233: [OSS]: Attempting to Read SsLocalCode Using Invalid CallSessionNumber(%d) in cc_SetSsLocalCode
Line 392: ------------------------- CC TASK ----------------------------
Line 421: [OSS]: Oss Init Success
Line 425: [OSS]: Oss Init Failed
Line 432: ------------------------- CC TASK ----------------------------
Line 456: pal_MsgReceiveMbx Retruned Un-Supported Class - %d
Line 464: pal_MsgReceiveMbx Retruned %d instead of PAL_SUCCESS
Line 518: cc_UpdStackId :CcCurrentStackId: %d
Line 557: cc_ParseMsg aborted - cc_PtrMsgRec is NULL
Line 569: cc_ParseMsg - Msg received before CC_INIT_REQ message
Line 599: cc_ParseMsg in Unknown Msg Received :MsgGroup = 0x%x, MsgNum = 0x%x
Line 608: cc_ParseMsg in Unknown group : 0x%x
Line 620: [StackNo] %d
Line 624: cc_ParseMsg - short - cc_Header.Length = %i < cc_PtrDscMsgRec->BodySize = %i
Line 632: cc_ParseMsg - cc_PtrBodyRec->CcVariable.Length = %d
Line 639: %s
Line 650: PRIVACY! MT message : SETUP
Line 657: PRIVACY! MT message : CC-ESTABLISHMENT
Line 665: PRIVACY! MT message : START DTMF ACKNOWLEDGE
Line 677: Displaying Received Message Contents
Line 685: Displaying Received Message Contents
Line 772: cc_ParseMsg - Wrong TI Value received OR CC_INIT_REQ not received OR Wrong MsgType Received
Line 775: Displaying Received Message Contents
Line 830: cc_DetermineMmBaseMsgType - Wrong Ti Received and ignor the message
Line 844: cc_DetermineMmBaseMsgType - CC_MESSAGE_TYPE_NOT_IMPLEMENTED
Line 909: Initialising CC ...in cc_Initialise.
Line 996: NUMBER_PLUS_FEATURE(Enable=1/Disable=0) = %d
Line 1000: CSVT_FEATURE(Enable=1/Disable=0) = %d
Line 1036: [CC_INIT]CBST Defaults = { %d,%d,%d }
Line 1052: BearerType %d
Line 1057: Unable to Allocate Memory to Send %s Message in cc_Initialise
Line 1072: Re-Initialising CC ....
Line 1139: cc_DecodeCcStopReqMsg : [StackNo] %d
Line 1163: Entering cc_DecodeCcSysInfoUpdateReqMsg - Received GAPI message
Line 1174: AocSupportedIndication   -> %s
Line 1179: AoC not supported by UE, not processing cc_SysInfoUpdateReq
Line 1184: No data in cc_DecodeCcSysInfoUpdateReqMsg!!!
Line 1204: cc_DecodeCcHDVoiceSettingReqMsg : HDVoiceCallSetting = %d
Line 1209: cc_DecodeCcHDVoiceSettingReqMsg : INVALID HDVoiceCallSetting = %d
Line 1219: MtCallBlockStatus = %d
Line 1232: CC Message Count -> %d
Line 1260: Processing CC Saved Message....
Line 1305: Msg not expected in this direction:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1319: Storage table too short:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1320: When a message is received that is too short to contain a complete message type information element, that message shall be ignored,
Line 1327: Mandatory param Absent:  ERROR -> Msg %d[%d] cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1353: TLV param not expected:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1370: TLV Parameter out of sequence:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1377: IE unknown in msg:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1378: When a message is received that IE unknown element, that message shall be ignored,
Line 1385: cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1389: TLV parameter unknown in msg:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1436: Receive Error -> (CTLVOUTS | CTLVREP) in cc_DetermineErrorPrimitiveMsg
Line 1460: Unable to Save READ ALL MMCC_DATA_IND(Connect_Ind) Msg in cc_SaveConnectIndMsg, cc_PtrMsgRec NULL Or cc_PtrConnectIndCopy Non-Zero
Line 1536: Unable to Save READ ALL MM_SYNC_IND Msg in cc_SaveMmSyncIndMsg, cc_PtrMsgRec NULL Or cc_PtrMmSyncIndCopy Non-Zero
Line 1552: saved after discard....cc_SaveMmSyncIndMsg
Line 1637: INVALID session umber = %d
Line 1662: INVALID session umber = %d
Line 1683: Msg saved in MMCC_SRVCC_HO_CNF in cc_SaveMmSrvccHoCnfMsg
Line 1687: Unable to Save Msg MMCC_SRVCC_HO_CNF in cc_SaveMmSrvccHoCnfMsg, cc_PtrMsgRec NULL Or cc_PtrMmSrvccHoCnfCopy Non-Zero
Line 1764: Unable to Save READ ALL MMCC_DATA_IND(Facility) Msg in cc_SaveFacilityIndMsg, cc_PtrMsgRec NULL Or cc_PtrCcFacilityIndCopy Non-Zero
Line 1822: Unable to Save READ ALL MMCC_DATA_REQ(Disconnect) Msg in cc_SaveDiscReqMsg, cc_PtrMsgRec NULL Or cc_PtrDisconnectReqCopy Non-Zero
Line 1972: cc_SendNsDmEventToNS.....SessionNumber= %d, Timer=%d , Event =%d
Line 2011: Sending Message ...... 
Line 2135: Attempting to Read State Using Invalid CallSessionNumber(%d) in cc_SetState
Line 2157: Suported Codec List ->.....
Line 2163: Suported Codec List Not Available
Line 2176: StreamId -> 0x%02X
Line 2195:             ------- Displaying DTMF Data - Session Number (%d) -------
Line 2201: Current Dtmf Index -> %d
Line 2203: Last    Dtmf Index -> %d
Line 2219: Error: Dtmf Index = %d
Line 2225: Data For Dtmf Index -> %d
Line 2229: Timer Duration -> %d ms
Line 2230: Stop Req       -> %s
Line 2248: Resetting MT Call Data
Line 2270: cc_SetAutoRedial: SessionNumber = %d Autoredial =0x%x
Line 2283: cc_GetAutoRedial: SessionNumber = %d, Autoredial =0x%x
Line 2297: cc_SetNetworkIssueRedialAttempts: SessionNumber = %d NumOfAutoRedialAttempt = 0x%02X
Line 2310: cc_GetNetworkIssueRedialAttempts: SessionNumber = %d, NumOfAutoRedAttempt =0x%02X
Line 2324: cc_SetMmIssueRedialAttempts: SessionNumber = %d NumOfAutoRedialAttempt = 0x%02X
Line 2337: cc_GetMmIssueRedialAttempts: SessionNumber = %d, NumOfAutoRedialAttempt =0x%02X
Line 2388: Resetting Call Data
Line 2615: Attempting To Read Cuurent Dtmf Using Invalid CallSessionNumber(%d) in cc_GetCurrentDtmfIndex
Line 2652: Attempting to Set CurrentDtmf Using Invalid DtmfIndex(%d) in cc_SetCurrentDtmfIndex
Line 2660: Attempting to Set CurrentDtmf Using Invalid CallSessionNumber(%d) in cc_SetCurrentDtmfIndex
Line 4152: cc_SessionData[%d].AuxState -> %s
Line 4159: Invalid SessionNumber (0x%02X) in cc_DisplaySessionAuxState
Line 4339: cc_SessionData[%d].MultiPartyState -> %s
Line 4346: Invalid SessionNumber (0x%02X) in cc_DisplaySessionMultiPartyState
Line 4525: Attempting to Read State Using Invalid CallSessionNumber(%d) in cc_GetState
Line 4553: Attempting to Read State Using Invalid CallSessionNumber(%d) in cc_API_GetState
Line 4580: Attempting to Read RabId Using Invalid CallSessionNumber(%d) in cc_GetRabId
Line 4610: Attempting to Write to RabId Using Invalid CallSessionNumber(%d) in cc_SetRabId
Line 4744: Attempting to Read Flags Using Invalid CallSessionNumber(%d) in cc_ClearFlag
Line 4774: Attempting to Read Flags Using Invalid CallSessionNumber(%d) in cc_SetFlag
Line 4812: Attempting to Read SessionData using Invalid CallSessionNumber (%d) in cc_GetFlag
Line 4847: No Active Calls Found !!!!
Line 4860: -------------- Displaying Session Data For CC Session Number -> %d ---------------------
Line 4863: Transaction Id     -> %d 
Line 4864: StreamId           -> %d 
Line 4865: RabId              -> %d 
Line 4866: PriorityLevel      -> %d 
Line 4867: CcbsRequest        -> %d 
Line 4868: CallType1 -> %s 
Line 4869: CallType2 -> %s 
Line 4877: AuxState        -> %s 
Line 4878: MultiPartyState -> %s 
Line 4879: CcbsState       -> %s 
Line 4881: CfxIndex          -> %d 
Line 4882: ReleaseMsgCount   -> %d 
Line 4886: 
Line 4902: 
Line 4912: Session[%d]: Ti -> %d, State -> %s, Call Type 1 -> %s, Dtmf State -> %s, M.Party State -> %s, Ccbs State -> %s
Line 4928: No Active Calls Found !!!!
Line 4973: 
Line 5092: No Flags are Set !
Line 5105: ------------------------- CC Global Flags ----------------------------
Line 5121: ------------------------- CC Redial Global Flags ----------------------------
Line 5139: CC_SESSION_ASSIGNED_FLAG -> %s
Line 5156: CC_PROGRESS_DESCRIPTION_1_OR_2_OR_64_FLAG -> %s
Line 5173: CC_MM_CONECTION_ESTABLISHED_FLAG -> %s
Line 5190: CC_CALL_WAITING_TONE_ON_FLAG -> %s
Line 5207: CC_INTERNAL_ALERT_FLAG -> %s
Line 5224: CC_PROGRESS_INDICATION_FLAG -> %s
Line 5241: CC_MM_REST_CONF_FLAG -> %s
Line 5258: CC_ECT_REQ_FLAG -> %s
Line 5275: CC_VCG_CALL_EST_CNF_FLAG -> %s
Line 5292: CC_VCG_CALL_EST_REQ_FLAG -> %s
Line 5309: CC_VCG_ALTER_CODEC_REQ_FLAG -> %s
Line 5326: CC_MPTY_ACTIVE_FLAG -> %s
Line 5343: CC_EARLY_USER_CONNECTION_FLAG -> %s
Line 5360: CC_CC_REL_IND_SENT_FLAG -> %s
Line 5955: CC Initialisation State -> CC_NOT_INITIALISED -> All Messages except CC_INIT_REQ will be Ignored.in cc_CheckInitialisationState. 
Line 5977: Entering cc_CheckEarlyUserConnectionStatus()
Line 5987: Early Connection Requested -> TRUE
Line 5991: This is a Voice Call -> TRUE
Line 5995: VCG has not been activated -> Begin VCG activation...
Line 6029: Early User Connection Check Aborted -> VCG has been activated
Line 6034: Early User Connection Check Aborted -> This is not a Voice Call
Line 6039: Early User Connection Check Aborted -> Early User Connection NOT requested
Line 6052: Transaction Id -> %d
Line 6078: -------------  Active Sessions are  -----------
Line 6082: Session (%d), Ti -> %d
Line 6137: Bearer 1 Capability ->.....
Line 6143: Bearer 1 Capability Not Available
Line 6235: Bearer 2 Capability ->.....
Line 6241: Bearer 2 Capability Not Available
Line 6257: Backup Bearer Capability ->.....
Line 6263: Backup Bearer Capability Not Available
Line 6277: Connected Party Number Length -> %d
Line 6278: Connected Party Number        -> ....
Line 6293: Connected Sub Address Length -> %d
Line 6294: Connected Sub Address      -> ....
Line 6349: Network Transfer Capability -> %s
Line 6361: CUG Index[0] -> 0x%02X
Line 6362: CUG Index[1] -> 0x%02X
Line 6433: Network Priroity -> %s
Line 6504: GAPI Priroity -> %s
Line 6545: Call Divert Indication -> %s
Line 6561: cc_SessionData[%d].State -> %s
Line 6568: Attempting to Read State using Invalid SessionNumber (%d) in cc_DisplaySessionState
Line 6613: 
Line 6624: %d. %s
Line 6634: %d. %s
Line 6685: CalledPartyNumber-->
Line 6932: State=%d,LoopCount=%d
Line 6939: [cc_CheckPossibleAction]No.of Call=%d,Result=%d
Line 6992: Unable to Save READ ALL MMCC_DATA_REQ(Setup) Msg in cc_SaveSetupReqMsg, cc_PtrMsgRec NULL Or cc_PtrCcSetupReqCopy Non-Zero
Line 7025: cc_DecodeCcCallBlockSetReqMsg : Call Block Status = TRUE
Line 7030: cc_DecodeCcCallBlockSetReqMsg : Call Block Status = FALSE
