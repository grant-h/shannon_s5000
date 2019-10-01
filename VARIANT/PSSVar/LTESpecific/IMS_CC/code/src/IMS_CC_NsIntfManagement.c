Line 184: IMS_CC_ConvertBitRate: Received invalid frequency
Line 304: [chdb] chid(%d) isTriggeredLocally(%d)
Line 309: [chdb] isTriggeredByIms(%d) Status(%d) ipv6(%d)
Line 317: [SRVCC]current #of used ch (%d)
Line 343: Invalid Channel ID = %d received from AP
Line 354: Invalid Channel ID = %d received from AP
Line 481: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 490:  Sending CallStatus=%s(%d) to MMC
Line 537: - 	 IMS_CC_GetBitRateMap: bitrate=%d
Line 587: IMSCC_CHNL_GET_REQ in IMS_CC_HandleNsChnlGetReq
Line 601: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 610: IMSCC_CHNL_GET_RSP Channel count is %d
Line 649: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 655: -------[IMSCC=>VCE] Reconfig IP Port Request for Channel %d
Line 675: [IMSCC] StackType %d in IMS_CC_SendCeaseSyncReq
Line 681:  Set DST to STACK1
Line 690:  Set DST to STACK2
Line 693:  Error undefined stack type
Line 699: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 703:  Sending CEASE SYNC REQ EMM
Line 725: [IMSCC] Cause = %d, mtPagingStatus = %d in IMS_CC_SendDsDsCallStatusInd
Line 735: Channel Count is not zero for cause=%d
Line 743:  Set DST to STACK1
Line 751:  Set DST to STACK2
Line 754:  Error undefined stack type
Line 760: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 770: [IMSCC] IMS_CC_SendDsDsCallStatusInd is discarded.
Line 775:  Sending StatusInd=(%d)
Line 796: [IMSCC=>NS] IMSCC_NS_TUNE_AWAY_SET_RSP in IMS_CC_SendTuneAwaySetResp
Line 801: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 810: IMS_CC_SendImsEngineResp result: %d
Line 829: Is_Enabled (%d) in IMS_CC_HandleNsImsTuneawaySetReq
Line 833: [IMS_CC] Sending DSDS indication blocked as SRVCC occured
Line 846: [IMS_CC] Sending IMS_CC_SendDsDsCallStatusInd Failure response
Line 856: [IMS_CC] Sending IMS_CC_SendCeaseSyncReq Failure response
Line 874: [IMS_CC] Invalid ImsTuneaway flag value received from NS
Line 895: IMS_CC_HandleNsSignalQualityInd() ulBler(%d) dlBler(%d) ulGrant(%d)
Line 911: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 921: [IMSCC=>SRM] Sending IMS_SRM_SIGNAL_QUALITY_IND
Line 937: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 945: [IMSCC=>VCE] Sending VoiceEngine_SignalQuality
Line 964: IMS_CC_FindSidFromLocalIp LocalIp
Line 972: Found SID = %d
Line 973: IMS_CC_FindSidFromLocalIp LocalIp
Line 999: - 	 Set RTP Receive Port Successful
Line 1003: -		Set RTP Receive Port Failed, result=%d
Line 1012: - 	 Set RTP Send Port Successful
Line 1016: -		Set RTP Send Port Failed, Error Code=%d
Line 1025: - 	 Set RTCP Receive Port Successful
Line 1029: -		Set RTCP Receive Port Failed, Error Code=%d
Line 1038: - 	 Set RTCP Send Port Successful
Line 1042: -		Set RTCP Send Port Failed, Error Code=%d
Line 1055: IMS_CC_HandleNsChnlSetReq SendRemoteIp
Line 1056: IMS_CC_HandleNsChnlSetReq SendLocalIp
Line 1057: - 	 Set Remote and Local IP Successful
Line 1061: -		Set Remote and Local IP Failed, Error Code=%d
Line 1074: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 1081: IMSCC_CHNL_SET_RSP (%d) to NS, Result = %s
Line 1104: IMSCC_CHNL_SET_REQ (Channel Id=%d), SRVCC HO CNF = %d
Line 1105: - 	 Operation Mode= %s
Line 1131: AUD CHANNEL COUNT [0] => CLOSE ALL UDP SOCKET for SID = %d
Line 1144: -      Create channel failed, result = %d
Line 1150: - 	 SRM_CREATE_CHANNEL Engine Channel ID = %d created successfully
Line 1158: - 	 [bsrvcc]cc_Set_IMS_Channel_Enabled(1)
Line 1180: -      SRM_DELETE_CHANNEL Engine Channel ID = %d
Line 1184: -      Deleted Channel Successfully
Line 1189: - 	 [bsrvcc]cc_Set_IMS_Channel_Enabled(0)
Line 1194: -      Delete channel failed, result=%d
Line 1208:  SID NOT FOUND
Line 1218: - 	 RTP Receive Port = %d (0x%X), RTP Send Port = %d (0x%X)
Line 1219: - 	 RTCP Receive Port = %d (0x%X), RTCP Send Port = %d (0x%X)
Line 1220: -      SRM_CHANGE_CHANNEL Engine Channel ID = %d
Line 1228: - 	 AP Channel ID = %d, Is channel set = %d
Line 1239: -		Invalid Operation[%d]
Line 1267: AUD CHANNEL COUNT [0] => CLOSE ALL UDP SOCKET for SID = %d
Line 1278: -		SAE Create channel failed, Error Code = %d
Line 1284: - 	 SAE_CREATE_CHANNEL Engine Channel ID = %d created successfully
Line 1290: - 	 [bsrvcc]cc_Set_IMS_Channel_Enabled(1)
Line 1302: -      SRM Create channel failed, result = %d
Line 1308: - 	 SRM_CREATE_CHANNEL Engine Channel ID = %d created successfully
Line 1329: - 	 SAE_DELETE_CHANNEL Engine Channel ID = %d
Line 1333: - 	 Deleted Channel Successfully
Line 1338: - 	 [bsrvcc]cc_Set_IMS_Channel_Enabled(0)
Line 1344: -		Delete channel failed, Error Code=%d
Line 1349: - 	 SRM_DELETE_CHANNEL Engine Channel ID = %d
Line 1353: - 	 Deleted Channel Successfully
Line 1357: -		Delete channel failed, result=%d
Line 1371:  SID NOT FOUND
Line 1381: - 	 RTP Receive Port = %d (0x%X), RTP Send Port = %d (0x%X)
Line 1382: - 	 RTCP Receive Port = %d (0x%X), RTCP Send Port = %d (0x%X)
Line 1383: -      Engine Channel ID = %d, CodecType = %d
Line 1391: - 	 Set RTP Receive Port Successful
Line 1396: -		Set RTP Receive Port Failed, Error Code=%d
Line 1405: - 	 Set RTP Send Port Successful
Line 1410: -		Set RTP Send Port Failed, Error Code=%d
Line 1419: - 	 Set RTCP Receive Port Successful
Line 1424: -		Set RTCP Receive Port Failed, Error Code=%d
Line 1433: - 	 Set RTCP Send Port Successful
Line 1438: -		Set RTCP Send Port Failed, Error Code=%d
Line 1447: IMS_CC_HandleNsChnlSetReq SendRemoteIp
Line 1448: IMS_CC_HandleNsChnlSetReq SendLocalIp
Line 1449: - 	 Set Remote and Local IP Successful
Line 1454: -		Set Remote and Local IP Failed, Error Code=%d
Line 1469: - 	 AP Channel ID = %d, Is channel set = %d
Line 1483: -		Invalid Operation[%d]
Line 1494: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 1516: IMSCC_CHNL_SET_RSP (%d) to NS, Result = %s
Line 1552: - Mapped to SIPC = %d	  Codec Name =
Line 1587: -      SRM_InterfaceGetCodecCnt: Codec Count = %d
Line 1592: - 	 SAE_GetCodecCnt: Codec Count = %d
Line 1597: -		SAE_GetCodecCnt return Failure, Errcode= %d
Line 1604: - 	 Total CodecCnt: Codec Count = %d
Line 1638: -		SAE_GetCodecCnt return Failure, Errcode= %d
Line 1646: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 1674: -      SRM_InterfaceGetSupportedCodecInfo return Failure,cnt=%d,  result= %d
Line 1693: - Mapped to SIPC = %d	  Codec Name =
Line 1714: -		SAE_GetCodec return Failure,cnt=%d,  Errcode= %d
Line 1740: -      SRM_InterfaceGetSupportedCodecInfo return Failure,cnt=%d,  result= %d
Line 1777: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 1789: - Mapped to SIPC = %d	  Codec Name =
Line 1821: -      SRM_InterfaceGetSendCodecInfo return Failure, result= %d
Line 1836: - Mapped to SIPC = %d	  Codec Name =
Line 1857: -		SAE_GetCurrentSendCodec return Failure, Errcode= %d
Line 1886: IMSCC_CODEC_GET_REQ in IMS_CC_HandleNsCodecGetReq
Line 1909: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 1932: IMSCC_CODEC_GET_RSP sent to NS(%d)
Line 1955: IMSCC_CODEC_SET_REQ (%d) in IMS_CC_HandleNsCodecSetReq, Command Received = 0x%X
Line 1966: - 	 Codec type received from AP = %d
Line 1979: -		Invalid codec type received.
Line 1984: -      IMS_CC_HandleNsCodecSetReq CodecType = %d
Line 1993: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2001: -  Codec type received from AP = %d, Codec Name is = %s
Line 2007: -	Codec type received from AP = %d, Invalid codec type received.
Line 2013: - 	 Code Info: Type = %d, Freq = %d, BitRate = %d, Ptime = %d
Line 2016: - 	 Code Info: EnableDTX = %d, MaxRxPtime = %d, NChannel = %d, FixedRate = %d
Line 2018: - 	 Code Info: CodecRedLevel = %d, CodecRedPt = %d, CodecEnableRateAdaptation = %d, CodecActiveModeset = %d, CodecTypeRemote = %d
Line 2037: - 	 Code Info: CodecEvsDtxrecv = %d, CodecEvsChawarerecv = %d
Line 2040: - 	 Code Info: CodecEvsIoMode = %d, CodecEvsSendChannelType = %d, CodecEvsRecvChannelType = %d, CodecEvsCmrRestricted = %d
Line 2043: - 	 Code Info: CodecEvsBrSendMin = %d, CodecEvsBrSendMax = %d, CodecEvsBrRecvMin = %d, CodecEvsBrRecvMax = %d
Line 2046: - 	 Code Info: CodecEvsBwSendRange = %d, CodecEvsBwRecvRange = %d
Line 2049: - 	 Code Info: CodecEvsDefaultBr = %d, CodecEvsDefaultBw = %d
Line 2071: -      SRM_InterfaceSetSendCodecInfo Returned ERROR
Line 2081: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2089: -   Codec type received from AP = %d, Codec Name is = %s
Line 2095: -	 Codec type received from AP = %d, codecNameList is NULL.
Line 2101: - 	 Code Info: Type = %d, Freq = %d, BitRate = %d, Ptime = %d
Line 2104: - 	 Code Info: EnableDTX = %d, MaxRxPtime = %d, NChannel = %d, FixedRate = %d
Line 2124: -		SAE_SetSendCodec Returned ERROR
Line 2146: -      Not Supported Codec by SVE: EVRCB
Line 2160: -		Not Supported Codec = %d
Line 2165: -		SET Bit Rate function Returned ERROR
Line 2177: -      SRM_InterfaceEnableDtx Returned ERROR
Line 2186: -		SAE_EnableDtx Returned ERROR
Line 2198: - 	 Codec Name is = %s
Line 2206: -      SRM_InterfaceSetPacketizationMode Returned ERROR
Line 2215: -		SAE_SetPacketizationMode Returned ERROR
Line 2223: - 	 Invalid codec type received.
Line 2235: -      SRM_InterfaceSetTxCmr Returned ERROR
Line 2244: -		SAE_SetAMRTxCMR Returned ERROR
Line 2254: -      Not Supported Codec by SVE: EVRCB_EOP
Line 2263: -		SAE_SetEvrcbEOP Returned ERROR
Line 2273: -      Not Supported Codec by SVE: EVRCB_MCR
Line 2282: -		SAE_SetEvrcbMcr Returned ERROR
Line 2292: -      Not Supported Codec by SVE: EVRCB_EOP_BS
Line 2301: -		SAE_SetEvrcbEOPBaseStation Returned ERROR
Line 2313: -      result = %d
Line 2320: -		Error Ccode is = %d
Line 2327: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2338: IMSCC_CODEC_SET_RSP (%d) to NS, Result= %s
Line 2360: - 	 Received invalid VE Status
Line 2384: IMSCC_RTP_MEDIA_START_REQ (%d) received in IMS_CC_HandleRtpMediaStartReq, Enable IPV6 = %d
Line 2385: - 	VE Status = %s
Line 2402: -     Msg from stackId[%d]
Line 2411: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2418: IMSCC_RTP_MEDIA_START_RSP (%d) to NS, Result = %s
Line 2433: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2448: [IMSCC=>SRM] Sending IMS_SRM_START_SVE_REQ for ChannelId = %d
Line 2459: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2474: [IMSCC=>VCE] Sending VoiceEngine_Start for VCE ChannelId=%d
Line 2500: IMSCC_RTP_MEDIA_CHANGE_REQ (%d) in IMS_CC_HandleNsRtpMediaChangeReq
Line 2501: - 	VE Status = %s
Line 2514: -     Msg from stackId[%d]
Line 2523: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2539: IMSCC_RTP_MEDIA_CHANGE_RSP (%d) to NS, Result = %s
Line 2555: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2562: [IMSCC=>SRM] Sending IMS_SRM_CHANGE_SVE_REQ to VCE Channel ID = %d
Line 2574: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2580: [IMSCC=>VCE] Sending VoiceEngine_VEstatus to VCE Channel ID = %d
Line 2605: IMSCC_RTP_MEDIA_STOP_REQ (%d) in IMS_CC_HandleNsRtpMediaStopReq
Line 2615: -     Msg from stackId[%d]
Line 2624: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2640: IMSCC_RTP_MEDIA_STOP_RSP (%d) to NS, Result = %s
Line 2656: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2669: [IMSCC=>SRM] Sending IMS_SRM_STOP_SVE_REQ for CHID(%d)- isTriggeredByIms:TRUE
Line 2679: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2690: [IMSCC=>VCE] Sending VoiceEngine_Stop for CHID(%d)- isTriggeredByIms:TRUE
Line 2716: - 	 Deleted Channel Successfully
Line 2721: - 	 [bsrvcc]cc_Set_IMS_Channel_Enabled(0)
Line 2726: -      Delete channel failed, rslt=%d
Line 2735: - 	 Deleted Channel Successfully
Line 2739: -      Delete channel failed, rslt=%d
Line 2746: - 	 Deleted Channel Successfully
Line 2750: - 	 [bsrvcc]cc_Set_IMS_Channel_Enabled(0)
Line 2755: -		Delete channel failed, Error Code=%d
Line 2768: [ImsEngine]SRM_InterfaceGetChannelCnt: %d --> should be Zero
Line 2770: [ImsEngine]SAE_GetChannelCnt: %d --> should be Zero
Line 2798: -     Msg from stackId[%d]
Line 2808: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2823: [SRVCC]isTriggeredLocally: IMS_SRM_STOP_SVE_REQ: CHID(%d)
Line 2833: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2846: [SRVCC]isTriggeredLocally: VoiceEngine_Stop: CHID(%d)
Line 2858: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2864: IMS_CC_SendImsEngineResp result: %d
Line 2878: [ImsEngine]stop usCid(%d)
Line 2884: [ImsEngine] All channels are stopped
Line 2889: [ImsEngine] ImssccEngRegFlag is %d, All channels are stopped proceeding to delete channels
Line 2893: CodecType !!
Line 2947: -     Msg from stackId[%d]
Line 2953: IMSCC_RTP_MEDIA_CHANGE_REQ (%d) in IMS_CC_MediaChangeAllChannelsPerSid
Line 2954: - 	VE Status = %s
Line 2964: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2978: [IMSCC=>SRM] Sending IMS_SRM_CHANGE_SVE_REQ to VCE Channel ID = %d
Line 2988: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3000: [IMSCC=>VCE] Sending VoiceEngine_VEstatus to VCE Channel ID = %d
Line 3034: -     Msg from stackId[%d]
Line 3044: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3058: [IMSCC=>SRM] Status=%d, EnableV6 = %d, Sending IMS_SRM_START_SVE_REQ for ChannelId = %d
Line 3072: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3085: [IMSCC=>VCE] Status=%d, EnableV6 = %d, Sending VoiceEngine_Start for VCE ChannelId = %d
Line 3112: [SRVCC]Start usCid(%d)
Line 3114: [IMSCC=>VCE] SAE_NotiSRVCCfailure
Line 3120: [SRVCC] All channels are started
Line 3140: IMSCC_DTMF_SET_REQ (%d) in IMS_CC_HandleNsDtmfSetReq
Line 3141: - 	 Payload Type = %d, Mode = %d, Clockrate = %d, Rx Payload Type = %d
Line 3160: -      Setting DTMF Mode failed, result = %d
Line 3169: -      IMS_CC_HandleNsDtmfSetReq: SRM_InterfaceSetDtmfPayloadType failed ; %d
Line 3185: -		Setting DTMF Mode failed, Error Code = %d
Line 3195: -		IMS_CC_HandleNsDtmfSetReq: SetDTMFPayloadType failed ; %d
Line 3205: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3216: IMSCC_DTMF_SET_RSP (%d) to NS, Result= %s
Line 3236: IMSCC_DTMF_REQ (%d) in IMS_CC_HandleNsDtmfReq DTMF = %d
Line 3270: -      SRM_InterfaceSendDtmf failed, result = %d
Line 3280: -		SAE_SendDTMF failed, Error code = %d
Line 3288: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3299: IMSCC_DTMF_RSP (%d) to NS, Result= %s
Line 3311: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3318: IMSCC_OPTION_SET_RSP (%d) to NS, Result=%s
Line 3329: IMSCC_OPTION_SET_REQ (%d) in IMS_CC_HandleNsOptionSetReq
Line 3331: - 	 OptionSet = 0x%X, AvSyncSet = %d
Line 3332: - 	 RTCP SR = %d, RTCP On Call = %d
Line 3333: - 	 RTCP RrBW = %d, RsBW = %d
Line 3334: - 	 RTP Timeout = %d, RTCP Timeout = %d, RTP Pinhole = %d
Line 3335: - 	 SRTP Profile = %d, SRTP Direction = %d, SRTP Key length = %d
Line 3350: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3377: -      RTCP SR = %d
Line 3384: -      RTCP On Call = %d, RTCP RrBW = %d, RsBW = %d
Line 3391: -      RTP Timeout = %d
Line 3398: -      RTCP Timeout = %d
Line 3405: -      RTP Pinhole = %d
Line 3412: -      SRTP Profile = %d, SRTP Direction = %d, SRTP Key length = %d
Line 3419: -      AvSyncSet  = %d
Line 3426: -      CiqSet = %d
Line 3453: -      ECHOLOCATE_SET
Line 3473: -      OptionSet result = 0x%X
Line 3487: IMSCC_STAT_GET_REQ (%d) in IMS_CC_HandleNsStatGetReq
Line 3500: -      SRM_InterfaceGetRtpStatistics failed, result = %d
Line 3508: -		SAE_GetRTPStatistics failed, Error code = %d
Line 3516: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3532: IMSCC_STAT_GET_RSP (%d) to NS Result = %s
Line 3544: IMS_CC_HandleNsChnlReadyReq  for StateD: %d
Line 3554: -     Msg from stackId[%d]
Line 3585: IMSCC_IMS_ENGINE_REQ(%d) in IMS_CC_HandleNsImsEngineReq dtmf: %d
Line 3590: -		Inside INIT engine
Line 3613: -		Inside DEINIT engine
Line 3619: -		Inside REINIT engine
Line 3632: IMS_CC_HandleNsFrameTimeGetReq Operation: %d, Channel: %d
Line 3638: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3649: -		SRM_InterfaceGetRxVoiceTime failed, result = %d
Line 3657: -		SAE_GetRXVoiceTime failed, Error code = %d
Line 3661: IMS_CC_SendFrameTimeRsp LastPlayedRTPtimestamp:%u, SysTime HI:%u(0x%x) LO:%u(0x%x)
Line 3676: IMS_CC_SendFrameTimeRsp SystemTime HI:%u(0x%x) LO:%u(0x%x)
Line 3686: IMS_CC_HandleNsFrameTimeSetReq Operation: %u, Channel: %u
Line 3689: - 	 Delay = %u
Line 3702: - 	 System Time = 0x%x%x
Line 3737: <<<Prev Stack:%d, Current Stack:%d>>>
Line 3742: <<<Msg is not from CC_SS_SAP/DS_CC_SS_SAP, Prev Stack:%d, Current Stack:%d>>>
Line 3763: <<<IMS_CC_NsMsgHandler, received msg =[%x] from NS>>>
Line 3855: RAT_CHANGE_IND received from non-LTE stack, so ignoring it
Line 3908: Not enabled SHANNON VOLTE
Line 3934: <<<IMS_CC_NsMsgHandler, received msg = [0x%x] from PDNMGR>>>
Line 3959: IMS_CC_MmcMsgHandler, received msg =[%x] from MMC
Line 3965: [SRVCC][SUCCESS]MMC_IMSCC_IRAT_HO_CNF
Line 3975: [SRVCC][START]MMC_IMSCC_IRAT_HO_START_NTF
Line 3997: IMS_CC_Sael3MsgHandler, received msg =[%x] from SAEL3
Line 4002: [SRVCC][FAIL]SAEMM_IMSCC_SRVCC_REVOKE_CALL
Line 4011: [SRVCC][CANCEL]ESM_IMSCC_NOTIFICATION
Line 4032: IMS_CC_L2MsgHandler, received msg = [0x%x] from L2
Line 4044: IMSCC_RECOMMENDED_BIT_RATE_IND direction(%d) bitRate(%d)
Line 4059: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 4068: [IMSCC=>SRM] Sending IMS_SRM_RECOMMENDED_BIT_RATE_IND for chId(%d)
Line 4079: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 4087: [IMSCC=>VCE] Sending VoiceEngine_RecommendedBitRateInd for chId(%d)
Line 4097: Recommended Bit Rate for Video
Line 4101: Unknown Type(%d)
Line 4106: EVOLTE_CODEC_RATE_ADAPTATION Feature is not enabled.
Line 4112: Unknown Message
Line 4195: IMSCC Call status -> %d
Line 4220: [IMSCC]CallListSet: Number Of Calls(%d) in CallList
Line 4226:  [IMSCC] Number Of Calls exceeds the maximum
Line 4237: Call[%d] Id(%d) :- Status (%d)-> %s
Line 4307: [IMSCC] SRVCC Tartet Calls Exitence(%d)
Line 4313: [IMSCC] SRVCC Tartet Calls Exitence(%d)
Line 4331: [rSRVCC] IMS_CC_HandleNsImsRsrvccInfoInd
Line 4333: ***** IP Address Info *****
Line 4343:  [rSRVCC] IpAddress Length exceeds the maximum address size
Line 4354: [rSRVCC] IP Type - %d
Line 4355: [rSRVCC] IP Address Len - %d
Line 4357: ***** Voice Channel Info from AP *****
Line 4362: [rSRVCC] Channel Id - 		(0x%X)
Line 4363: [rSRVCC] RTP Send Port -  	(0x%X)
Line 4364: [rSRVCC] RTP Remote Port - 	(0x%X)
Line 4365: [rSRVCC] RTCP Send Port - 	(0x%X)
Line 4366: [rSRVCC] RTCP Remote Port -  	(0x%X)
Line 4368: ***** Codec Info from AP *****
Line 4373: [rSRVCC] Codec Type  - 		(0x%X)
Line 4375: ***** DTMF Info from AP *****
Line 4380: [rSRVCC] DTMF  - 		(0x%X)
Line 4383: ***** OPTIONS set info from AP *****
Line 4388: [rSRVCC] OptionSet = 0x%X
Line 4407: [rSRVCC] IMS_CC_HandleNsHedgeRsrvccInfoInd: Decode the rSRVCC info received in HO command of Length [%d]
Line 4411: [rSRVCC] Valid rSRVCC Info Received in HO command
Line 4415: [rSRVCC] ATGW Transfer Content Type - %d
Line 4419:  ATGW Transfer Type : IPV4
Line 4428:  ATGW Transfer Type : IPV6
Line 4437:  ATGW Transfer Type : Not Available (or) Invalid
Line 4446: [rSRVCC] NULL Ptr !!! in rSRVCC Info Received in HO command
Line 4450: [rSRVCC] pNsMsg->RsrvccInfoLen incorrect:%d !!! in rSRVCC Info Received in HO command
Line 4472: [SRVCC/rSRVCC] IMS_CC_HandleNsSrvccHandoverStatusInd
Line 4474: [SRVCC/rSRVCC] SRVCC HO Status - %d
Line 4476: [SRVCC/rSRVCC] SRVCC HO Type - %d
Line 4482: [rSRVCC] NS_SRVCC_HO_STATUS_STARTED: No Action @ IMSCC
Line 4497: [rSRVCC] NS_SRVCC_HO_CNF_STATUS_SUCCESS : Assuming TCP IP If is present and created by 3G during IMS registration - Audio Channel Creation & update AP about Media Start Status
Line 4503: [rSRVCC] SAE_CREATE_CHANNEL : Failed
Line 4509: [rSRVCC] CODEC SET REQ : Failed
Line 4515: [rSRVCC] OPTIONS SET REQ : Failed
Line 4526: [rSRVCC] VoiceEngine_Start : Failed
Line 4534: [rSRVCC] NS_SRVCC_HO_CNF_STATUS_FAIL : No Action @ IMSCC
Line 4538: [rSRVCC] Other Status !!!
Line 4571: -      Create channel failed, SrmChResult = %d
Line 4576: -      SRM_InterfaceCreateChannel Engine Channel ID = %d created successfully
Line 4586:  SID NOT FOUND
Line 4591:  Valid Chnl ID NOT FOUND
Line 4595: -      RTP Receive Port = %d (0x%X), RTP Send Port = %d (0x%X)
Line 4596: -      RTCP Receive Port = %d (0x%X), RTCP Send Port = %d (0x%X)
Line 4597: -      SRM_CHANGE_CHANNEL Engine Channel ID = %d
Line 4603: -      Set RTP Receive Port Successful
Line 4607: -      Set RTP Receive Port Failed, result=%d
Line 4615: -      Set RTP Send Port Successful
Line 4619: -      Set RTP Send Port Failed, result=%d
Line 4627: -      Set RTCP Receive Port Successful
Line 4631: -      Set RTCP Receive Port Failed, result=%d
Line 4639: -      Set RTCP Send Port Successful
Line 4643: -      Set RTCP Send Port Failed, result=%d
Line 4655: IMS_CC_HandleNsChnlSetReq SendRemoteIp
Line 4656: IMS_CC_HandleNsChnlSetReq SendLocalIp
Line 4657: -      Set Remote and Local IP Successful
Line 4661: -      Set Remote and Local IP Failed, result=%d
Line 4665: -      AP Channel ID = %d, Is channel set = %d
Line 4685: -      Create channel failed, Error Code = %d
Line 4690: -      SAE_CREATE_CHANNEL Engine Channel ID = %d created successfully
Line 4700:  SID NOT FOUND
Line 4705:  Valid Chnl ID NOT FOUND
Line 4709: -      RTP Receive Port = %d (0x%X), RTP Send Port = %d (0x%X)
Line 4710: -      RTCP Receive Port = %d (0x%X), RTCP Send Port = %d (0x%X)
Line 4711: -      SAE_CHANGE_CHANNEL Engine Channel ID = %d
Line 4717: -      Set RTP Receive Port Successful
Line 4722: -      Set RTP Receive Port Failed, Error Code=%d
Line 4730: -      Set RTP Send Port Successful
Line 4735: -      Set RTP Send Port Failed, Error Code=%d
Line 4743: -      Set RTCP Receive Port Successful
Line 4748: -      Set RTCP Receive Port Failed, Error Code=%d
Line 4756: -      Set RTCP Send Port Successful
Line 4761: -      Set RTCP Send Port Failed, Error Code=%d
Line 4770: IMS_CC_HandleNsChnlSetReq SendRemoteIp
Line 4771: IMS_CC_HandleNsChnlSetReq SendLocalIp
Line 4772: -      Set Remote and Local IP Successful
Line 4777: -      Set Remote and Local IP Failed, Error Code=%d
Line 4781: -      AP Channel ID = %d, Is channel set = %d
Line 4820: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 4828: -   Codec type received from AP = %d, Codec Name is = %s
Line 4832: -      Code Info: Type = %d, Freq = %d, BitRate = %d, Ptime = %d
Line 4835: -      Code Info: EnableDTX = %d, MaxRxPtime = %d, NChannel = %d, FixedRate = %d
Line 4851: -  Codec type received from AP = %d, Invalid codec type received.
Line 4856: -      SRM_InterfaceSetSendCodecInfo Returned ERROR
Line 4867: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 4875: -   Codec type received from AP = %d, Codec Name is = %s
Line 4879: -      Code Info: Type = %d, Freq = %d, BitRate = %d, Ptime = %d
Line 4882: -      Code Info: EnableDTX = %d, MaxRxPtime = %d, NChannel = %d, FixedRate = %d
Line 4899: -  Codec type received from AP = %d, Invalid codec type received.
Line 4905: -      SAE_SetSendCodec Returned ERROR
Line 4928: -      Not Supported Codec by SVE: EVRCB
Line 4938: -      Not Supported operation
Line 4943: -      SET Bit Rate function Returned ERROR
Line 4955: -      SRM_InterfaceEnableDtx Returned ERROR
Line 4963: -      SAE_EnableDtx Returned ERROR
Line 4978: -   Codec type received from AP = %d, Codec Name is = %s
Line 4987: -      SRM_InterfaceSetPacketizationMode Returned ERROR
Line 4995: -      SAE_SetPacketizationMode Returned ERROR
Line 5002: -  Codec type received from AP = %d, Invalid codec type received.
Line 5018: -      SRM_InterfaceSetTxCmr Returned ERROR
Line 5026: -      SAE_SetAMRTxCMR Returned ERROR
Line 5040: -      Not Supported Codec by SVE: EVRCB_EOP
Line 5047: -      SAE_SetEvrcbEOP Returned ERROR
Line 5061: -      Not Supported Codec by SVE: EVRCB_MCR
Line 5068: -      SAE_SetEvrcbMcr Returned ERROR
Line 5082: -      Not Supported Codec by SVE: EVRCB_EOP_BS
Line 5089: -      SAE_SetEvrcbEOPBaseStation Returned ERROR
Line 5124: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 5173: OptionSet received with AvsyncSet, Not handled by Audio engine currently, send Success
Line 5199: IMSCC_RTP_MEDIA_START_REQ (%d) received, Enable IPV6 = %d
Line 5200: -     VE Status = %s
Line 5230: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 5244: [IMSCC=>SRM] Sending IMS_SRM_START_SVE_REQ for ChannelId = %d
Line 5255: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 5268: [IMSCC=>VCE] Sending VoiceEngine_Start for VCE ChannelId=%d
Line 5299: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
