Line 131: [USAT_%d] TimerVal=%d s
Line 139: [USAT_%d] error in HandleTimerManagmentCmdReq !!
Line 161: [USAT_%d] error in HandleMoreTimeCmdReq !!
Line 266: [USAT_%d] Event [%d] is not supported at modem 
Line 304: [USAT_%d] Unexpected client Mode 0x%X
Line 318: [USAT_%d] error in Handling SetupEventList 
Line 362: [USAT_%d] timeUnit = %d, timeInterval = %d
Line 374: [USAT_%d] error in Handling PollingIntervalCmd  !!
Line 407: [USAT_%d] error in Handling PollingOffCmd !!
Line 427: [USAT_%d] OPEN_MODE: Directly Send PLI TR with result 0x30H
Line 519: [USAT_%d] error in HandleProvideLocalInformationCmdReq !!
Line 619: [USAT_%d] Reg.IMEI Value:
Line 623: [USAT_%d]  Converted IMEI Value:
Line 644: [USAT_%d] Reg.IMEI Value:
Line 661: [USAT_%d] IMEI SV Value:
Line 691: [USAT_%d] NULL buffer addr. received!!! (Dest- 0x%X, Src- 0x%X
Line 740: [USAT_%d] MeIdFromReg Value:
Line 746: [USAT_%d] Meid Value:
Line 757: [USAT_%d]  Esn Value:
Line 810: [USAT_%d] usat_ProcessCSGList
Line 857: [USAT_%d] Unable to process CSG List,CSG List absent in Terminal response
Line 878: [USAT_%d] Decoding CsgList
Line 901: [USAT_%d]  PlmnId = %d %d %d, CurrentCsgID= %d ,csgcount =%d
Line 909: [USAT_%d] Current Active RAT : USAT ACCESS TECH NOT HANDLED
Line 915: [USAT_%d] Null Msg
Line 936: [USAT_%d] HandleprovideLocalInfoRsp: LocalinfoType %d
Line 1021: [USAT_%d] Location Status: USAT_LIMITED_SERVICE
Line 1095: [USAT_%d] No Valid LocInfo:sending NO_SERVICE in Terminal Response
Line 1163: [USAT_%d] NO AID in REFRESH CMD, USIM APP is Assumed
Line 1191: [USAT_%d] Refresh App is not active
Line 1227: [USAT_%d] AID is in REFRESH CMD, AppType=%d
Line 1256: [USAT_%d] Invalid Client Register format
Line 1316: [USAT_%d] DownloadType=%d
Line 1403: [USAT_%d] SmsPpDownloadStatus : %s
Line 1712: [USAT_%d] Stored Refresh Command is processed, Terminal Response not to be sent
Line 1719: [USAT_%d] Dummy Refresh Command is processed, TR not to be sent
Line 1732: [USAT_%d] usat_SendRefreshTerminalRsp. Result-->
Line 1761: [USAT_%d] SendTimerExpiryEnvelope: Time Remain %d
Line 1817: [USAT_%d] usat_SendTimerMgntTR: timeremain %d sec
Line 1860: [USAT_%d] getTimerInBCD: Hr: %x Min %x Sec %x
Line 1971: [USAT_%d] usat_CurrentCmdDetails[0],[1],[2]  %x,%x,%x
Line 2038: [USAT_%d] clear Eventlist, Len = 0
Line 2208: [USAT_%d] IMSI NOT CHANGED : Refresh Type 0x%02X
Line 2222: [USAT_%d] IMSI IS CHANGED : Refresh Type 0x%02X
Line 3188: [USAT_%d] GetEnvelopeTag for envCmd 0x%X
Line 3273: [USAT_%d] Invalid EnvCmd
Line 3479: [USAT_%d] CreateAndSendTerminalResponse: TR len= 0x%x
Line 3530: [USAT_%d] usat_CreateAndSendEnvelopeCmdReq: EnvCmd %d, Length %d
Line 3567: [USAT_%d] EnvelopeCmd Coder Error= 0x%x
Line 3634: [USAT_%d] HandleRefreshRspFromUSIM: Rsp= 0x%x
Line 3710: [USAT_%d] cmdLen > USAT_PROACTIVE_CMD_MAX_LENGTH
Line 3747: [USAT_%d] usat_AllClientRspRcvd  set to true 
Line 3769: [USAT_%d] cmdLen > USAT_PROACTIVE_CMD_MAX_LENGTH
Line 3833: [USAT_%d] DisplayRefreshCmdType: %s
Line 4064: [USAT_%d] SetupLocalEventList: Event [%d], Status %d
Line 4115: [USAT_%d] DisplayEventList: Event %d Enabled
Line 4219: [USAT_%d] CreateAndSendEutranNMRReq: Entry
Line 4223: [USAT_%d] *FreqMeasQualifier: %d 
Line 4230: [USAT_%d] Memory alloc fails
Line 4276: [USAT_%d] DecodeEutranNmrRsp Entry:
Line 4355: [USAT_%d] DecodeEutranNMRRsp: NmrLen %d,  Length %d
Line 4531: [USAT_%d] DecodeNMRRsp: Encoded BCCHChannelList
Line 4570: [USAT_%d] DecodeNsSafetyModeReq : SafetyMode = %d
Line 4594: [USAT_%d] usat_CheckSafetyMode: CmdType = 0x%02X
Line 4636: [USAT_%d] [SETUP CALL] >> usat_HandleSetpCallCmdReqLocal
Line 4656: [USAT_%d] Mandatory TLV missing1
Line 4667: [USAT_%d] Mandatory TLV missing 2
Line 4678: [USAT_%d] Mandatory TLV missing 3
Line 4690: [USAT_%d] Mandatory TLV missing 4
Line 4760: [USAT_%d] [SETUP CALL] >> usat_GetCallingNumberAndType
Line 4766: [USAT_%d] [SETUP CALL] Found P in dialling Number , break
Line 4781: [USAT_%d] [SETUP CALL] UsatTriggerOutgoingCall->NumType : 0x%x UsatTriggerOutgoingCall->NumPlanId: 0x%x
Line 4799: [USAT_%d] [SETUP CALL] >> usat_SendTRForLocalSetupCall Result: 0x%x
Line 4863: [USAT_%d] [SETUP CALL] >> usat_DecodeSetupCallUserRsp Result: 0x%x
Line 4893: [USAT_%d] [SETUP CALL] >> usat_SendTriggerOutgoingCallReq
Line 4912: [USAT_%d] [SETUP CALL] Num Len: 0x%x Num Dump: 
Line 4921: [USAT_%d] MemAlloc Fail
Line 4938: [USAT_%d] [SETUP CALL] >> usat_DecodeSetupCallEventInfo Result: 0x%x
Line 4974: [USAT_%d] [SETUP CALL] EventInfoResult: 0x%x, TRResult: 0x%x
Line 5036: [USAT_%d] HandleSendSmsLocalRsp: RP-Error N/w Cause = 0x%02x
Line 5071: [USAT_%d] HandleSendSmsLocalRsp Error = 0x%02x RetVal = 0x%02x
Line 5111: [USAT_%d] CreateAndSendSmsLocalReq: Additional Memory 0x%02X, TpduLen 0x%02X
Line 5154: [USAT_%d] usat_Pack8BitTo7Bit
Line 5239: [USAT_%d] Sms packing not required
Line 5246: [USAT_%d] Sms packing required messageCoding: 0x%x
Line 5255: [USAT_%d] Len8bit : %x
Line 5260: [USAT_%d] Len7bit : %x
Line 5278: [USAT_%d] sendSms->address.diallingNumberLen : %x
Line 5284: [USAT_%d] sendSms->tpduDataLen : %x
Line 5295: [USAT_%d] Icon data Present in SEND SMS - Not handling Currently
Line 5303: [USAT_%d] ERROR IN PROCESSING SEND SMS REQUEST
Line 5309: [USAT_%d] HandleSendSMSCmdReq: Malloc fail
Line 5329: [USAT_%d] Len : %x
Line 5339: [USAT_%d] [SEND SMS] EF_SMSP successfully read DataLen: 0x%x
Line 5345: [USAT_%d] Len : %x
Line 5350: [USAT_%d] [SEND SMS]EF_SMSP Data len is less than 28
Line 5355: [USAT_%d] [SEND SMS] Error in reading EF_SMSP
