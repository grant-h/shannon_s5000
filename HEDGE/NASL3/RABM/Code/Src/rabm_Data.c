Line 196: [CONTROLCHANNEL] rabm_SetState: New Rabm State %01X
Line 226: [ERROR_CHANNEL] rabm_DataInitialise: not Initialise data(Ps Rab: %01X)
Line 267: [ERROR_CHANNEL] rabm_DataInitialise: not Initialise data(Cs Rab: %01X)
Line 315: [ERROR_CHANNEL] rabm_DataInitialise: not Initialise data(Rb: %02X)
Line 336: [CONTROLCHANNEL] rabm_DataInitialise: rabm_State = %d, Received_AS_EST_IND = %d
Line 373: [CONTROLCHANNEL] rabm_RbReset: RbId = %d, RabId = %d, DomainType = %d, SubFlowId = %d
Line 413: [CONTROLCHANNEL] rabm_PsSetState(%01X,%d)
Line 419: [ERROR_CHANNEL] rabm_PsSetState: invalid State %d(Rab:%01X)
Line 425: [ERROR_CHANNEL] rabm_PsSetState: Invalid(RabId:%01X)
Line 440: [ERROR_CHANNEL] rabm_PsSetActivationParameters: pRcvMsg is NULL pointer
Line 475: [CONTROLCHANNEL]  Nsapi : %d,  Dual PDP : CID   %d has 1st  SID active %d 2nd SID inactive %d 
Line 495: [CONTROLCHANNEL]  Nsapi : %d,  Dual PDP : CID  has 2 SIDs active SID 1 %d SID 2 %d 
Line 500: [CONTROLCHANNEL] rabm_PsSetActivationParameters: Nsapi : %d, Primary PDP : %d , IP Type : %d SID : %d, TFT num : %d
Line 514: [CONTROLCHANNEL] ==========================================================
Line 515: [CONTROLCHANNEL] TFT INFO(%X) : FilterDirection %d, FilterIdentifier %d
Line 516: [CONTROLCHANNEL] TOS : %X, %X, %X
Line 517: [CONTROLCHANNEL] Protocol : %X, %X, Next : %X, %X
Line 518: [CONTROLCHANNEL] Flow Label: %X, %X
Line 519: [CONTROLCHANNEL] RemoteAddr : %X, %X, %X
Line 520: [CONTROLCHANNEL] RemoteAddrV6 : %X,
Line 521: IPv6 Addr
Line 522: IPv6 Mask
Line 523: [CONTROLCHANNEL] Single Local port : %X, %X
Line 524: [CONTROLCHANNEL] Local port range : %X, %d ~ %d
Line 525: [CONTROLCHANNEL] Single Remote port : %X, %X
Line 526: [CONTROLCHANNEL] Remote port range : %X, %d ~ %d
Line 527: [CONTROLCHANNEL] Security : %X,
Line 528: [CONTROLCHANNEL] Evaluation : %X,
Line 529: [CONTROLCHANNEL] TftType : %X,
Line 530: [CONTROLCHANNEL] ==========================================================
Line 541: [ERROR_CHANNEL] rabm_PsSetActivationParameters: Invalid RabId: %01X
Line 597: [ERROR_CHANNEL] rabm_PsSetDeactivateCause: Invalid RabId: %01X
Line 614: [CONTROLCHANNEL] rabm_DeactivateAllPsData
Line 695: [CONTROLCHANNEL] Reset the state of RABM to SUSPENDED if PDP %d for which REEST_REQ is sent  , is deactivated before Response is received. 
Line 715: [PS_UPLINK] rabm_DeactivatePsData : RAB(%d) buffer freed!
Line 735: [ERROR_CHANNEL] rabm_DeactivatePsData: Invalid RabId: %01X
Line 757: [FLOWCONTROL] rabm_PsQueueData : Queuing Buffer %08X for Rab %01X
Line 763: [ERROR_CHANNEL] rabm_PsQueueData : PsData->BufferQueue is NULL
Line 769: [ERROR_CHANNEL] rabm_PsQueueData : Invalid Buffer for RabId: %01X - buffer &08X
Line 774: [ERROR_CHANNEL] rabm_PsQueueData : Invalid RabId: %01X for buffer &08X
Line 805: [FLOWCONTROL] rabm_PsDeQueueData : (%01X) = %08X
Line 810: [FLOWCONTROL] rabm_PsDeQueueData : Buffer is empty for Rab Id: %d
Line 816: [ERROR_CHANNEL] rabm_PsDeQueueData : PsData->BufferQueue is NULL
Line 822: [ERROR_CHANNEL] rabm_PsDeQueueData : Invalid RabId: %d
Line 840: [CONTROLCHANNEL] rabm_PsSetRbId: RabId = %d, RbId = %d
Line 852: [CONTROLCHANNEL] rabm_PsSetRbId: [OLD] DomainType = %d, RabId = %d, SubFlowId
Line 865: [CONTROLCHANNEL] rabm_PsSetRbId: [NEW] DomainType = %d, RabId = %d, SubFlowId
Line 872: [ERROR_CHANNEL] rabm_PsSetRb: Invalid RabId %01X
Line 903: [ERROR_CHANNEL] Not a PS Rb %02X, type %d for RabId %01X
Line 910: [ERROR_CHANNEL] Invalid RabId: %X
Line 918: [INTERNAL_CHANNEL] rabm_GetTimerId, Domain %d, Rab %01X
Line 932: [ERROR_CHANNEL] Invalid PS RabId: %01X
Line 947: [ERROR_CHANNEL] Invalid CS RabId: %01X
Line 953: [ERROR_CHANNEL] Invalid Domain: %d
Line 961: [INTERNAL_CHANNEL] rabm_SetTimerId, Domain %d, Rab %01X, Timer %08X
Line 975: [ERROR_CHANNEL] Invalid PS RabId: %01X
Line 991: [ERROR_CHANNEL] Invalid CS RabId: %01X
Line 998: [ERROR_CHANNEL] Invalid Domain: %d
Line 1022: [ERROR_CHANNEL] Not a PS Rb %02X
Line 1027: [ERROR_CHANNEL] Not a valid Rb %X
Line 1046: [ERROR_CHANNEL] rabm_CsGetState: Invalid RabId: %01X
Line 1060: [CONTROLCHANNEL] Rabm_CsUlTimerStart
Line 1064: [CONTROLCHANNEL] Rb %02X, Size %d, No %d, TTI %d
Line 1071: [ERROR_CHANNEL] OutNoOfPackets --> 1
Line 1076: [CONTROLCHANNEL] Rb %02X, TTI Changed to %d, Count to %d
Line 1081: [ERROR_CHANNEL] Invalid OutPacketSize = %d
Line 1087: [ERROR_CHANNEL] Invalid OutNoOfPackets = %d
Line 1093: [ERROR_CHANNEL] Invalid OutTti = %d
Line 1104: [CONTROLCHANNEL] BitsPerPacket %d, PacketsPerTti %d, FramesPerTti %d, TicksPerSecond %d, TicksElapsed %d
Line 1116: [CONTROLCHANNEL] Rabm_CsUlTimerStop: Rb %02X
Line 1123: [CONTROLCHANNEL] rabm_CsSetState (%d, %d)
Line 1127: [ERROR_CHANNEL] Invalid Rab: %01X
Line 1133: [ERROR_CHANNEL] Invalid State: %d
Line 1166: [ERROR_CHANNEL] Invalid SubFlowId: %01X for Rab %01X
Line 1171: [ERROR_CHANNEL] Invalid Rab: %01X
Line 1188: [ERROR_CHANNEL] rabm_CsGetTotalUiBits: Invalid Rab: %01X
Line 1204: [ERROR_CHANNEL] rabm_CsGetTotalUiBits: Invalid Rab: %01X
Line 1212: [CONTROLCHANNEL] rabm_DeactivateAllCsData
Line 1302: [ERROR_CHANNEL] rabm_DeactivateCsData: Invalid SI: %01X
Line 1310: [CONTROLCHANNEL] rabm_CsSetDataType() : RabId %01X, CallSessionNumber %d, SyncStatus %d, DataType : %d)
Line 1315: [ERROR_CHANNEL] Invalid DataType: %d
Line 1321: [ERROR_CHANNEL] Invalid Rab: %01X
Line 1335: [CONTROLCHANNEL] rabm_CsSetDataType  CDH Current RAT  != UMTS .. Forcefully SET
Line 1357: [ERROR_CHANNEL] rabm_CsGetDataType: Invalid Rab: %01X
Line 1377: [ERROR_CHANNEL] rabm_CsDataType: Invalid Rab: %01X
Line 1393: [ERROR_CHANNEL] rabm_CsGetRabId: Invalid RbId: %X
Line 1409: [ERROR_CHANNEL] rabm_CsGetRabId: Invalid RbId: %X
Line 1420: [CONTROLCHANNEL] rabm_CsAddRbId: Rab %01X, Rb %02X, SubFlow %d
Line 1424: [ERROR_CHANNEL] Invalid SI: %01X
Line 1430: [ERROR_CHANNEL] Invalid Rb: %X
Line 1436: [ERROR_CHANNEL] Invalid SubFlowId: %d
Line 1446: [CONTROLCHANNEL] rabm_CsAddRbId: [CsData] RbId %d, SubFlowId %d
Line 1447: [CONTROLCHANNEL] rabm_CsAddRbId: [RbData] RabId %d, SubFlowId %d, DomainType %d
Line 1459: [INTERNAL_CHANNEL] rabm_CsReleaseRbId (%d)
Line 1463: [ERROR_CHANNEL] Invalid Rb: %02X
Line 1475: [ERROR_CHANNEL] Invalid Rab: %01X for Rb %02X
Line 1483: [CONTROLCHANNEL] [CsData] RbId %d
Line 1484: [CONTROLCHANNEL] [RbData] RabId %d, SubFlowId %d, DomainType %d
Line 1498: [ERROR_CHANNEL] Invalid type %d for Rb: %02X
Line 1510: [FLOWCONTROL] rabm_CsUlQueueData
Line 1526: [ERROR_CHANNEL] rabm_CsUlQueueData : CsData->BufferQueue is NULL
Line 1532: [CS_UPLINK] rabm_CsQueueUlData: Rab %01X, Empty buffer received
Line 1538: [ERROR_CHANNEL] RabId: %01X Not ACTIVE: %d
Line 1543: [ERROR_CHANNEL] Invalid RabId: %01X for buffer &08X
Line 1593: [ERROR_CHANNEL] rabm_CsUlGetNextBuffer: Cannot attach handle
Line 1623: [CS_UPLINK] rabm_CsUlGetPacket: RbId  %d, Rab %d Rab State %d 
Line 1627: [ERROR_CHANNEL] BitsNeeded == 0
Line 1633: [ERROR_CHANNEL] RbId is UNUSED_RB, RAB released already Ignore CS UL Data
Line 1688: [ERROR_CHANNEL] smc_MemNewMob failed
Line 1700: [ERROR_CHANNEL] Too many loops, needed: %d, added %d
Line 1726: [CS_UPLINK] rabm_CsUlSendData: queuedBits: %d, DlDataSent: %d, SubFlowID : %d, RabId %d RbId %d
Line 1731: [ERROR_CHANNEL] Invalid SubFlowID %d, HardCode for Defence
Line 1761: [ERROR_CHANNEL] rabm_CsUlGetPacket failed
Line 1832: [ERROR_CHANNEL] rabm_CsSetPadding(): CsData is NULL
Line 1866: [ERROR_CHANNEL] Rabm_CsUlTimer_STF() RABM_CSData_Struct = NULL,  RabId = %d, CSData = %x
Line 1910: [CONTROLCHANNEL] ========== RABM Status ==========
Line 1911: [CONTROLCHANNEL] ========== Configured PS Rabs ==========
Line 1912: [CONTROLCHANNEL] isUtranCommercialPlmnId : %d
Line 1913: [CONTROLCHANNEL] SimInstance : %d
Line 1920: [CONTROLCHANNEL]  PS Rab: %01X, State: %01X, Rb: %01X, Timer %08X, UplinkQ: %08X
Line 1926: [CONTROLCHANNEL] ========== Configured CS Rabs ==========
Line 1934: [ERROR_CHANNEL]  CS Rab: %01X, State: %01X, Type: %01X, Timer: %08X, SubFlowID : %d
Line 1936: [ERROR_CHANNEL]  -- Rbs: %01X %01X %01X %01X
Line 1942: [CONTROLCHANNEL] ========== Configured Rbs ==========
Line 1950: [CONTROLCHANNEL] Rb: %01X, Domain: %01X, Rab: %01X, SubFlow: %01X
Line 1965: [INTERNAL_CHANNEL] Rabm_FindNsapi : IPversion(%d) [1:IPV4. 2:IPV6] Received SID (%d) CID %d
Line 1969: [INTERNAL_CHANNEL] Rabm_FindNsapi : SID(%d) is same as first SID(%d)
Line 1973: [INTERNAL_CHANNEL] Rabm_FindNsapi : SID (%d) is not same as first SID(%d) Hence set SID to second SID(%d)
Line 2012: [INTERNAL_CHANNEL] Rabm_FindNsapi : NSAPI : %d, Invalid IP Type : %d
Line 2028: [INTERNAL_CHANNEL] Rabm_FindNsapi : Primary Nsapi (%01X),  SID (%d)
Line 2052: [INTERNAL_CHANNEL] Rabm_FindNsapi : NSAPI %d, TFT idx %d, iFind %d, higer_precedence_value %d, precedence_value %d
Line 2056: [ERROR_CHANNEL] Rabm_FindNsapi : Invalid FilterDirection %d, %d
Line 2065: [INTERNAL_CHANNEL] TOS : %x, %x, %x
Line 2075: [INTERNAL_CHANNEL] Protocol : %x, %x
Line 2085: [INTERNAL_CHANNEL] RemoteAddr : %X, %X, %X
Line 2096: [INTERNAL_CHANNEL] Skip Local port : %X, %X
Line 2105: [INTERNAL_CHANNEL] Remote port : %X, %X
Line 2116: [INTERNAL_CHANNEL] Local port range: %X, %X, %X
Line 2127: [INTERNAL_CHANNEL] Dst port range: %X, %X, %X
Line 2143: [INTERNAL_CHANNEL] check precedence: higer %d, cur %d,  Find %d
Line 2155: [INTERNAL_CHANNEL] TFT MATCH : Keep nsapi %d
Line 2160: [INTERNAL_CHANNEL] TFT MATCH : Find, temp nsapi %d
Line 2165: [INTERNAL_CHANNEL] TFT MATCH : Current Nsapi (%01X), Primary is %01X, %d
Line 2169: [INTERNAL_CHANNEL] need to check another pdp context %d %d
Line 2193: [INTERNAL_CHANNEL] Rabm_FindNsapi : %01X, %d
Line 2203: [INTERNAL_CHANNEL] Rabm_FindNsapi : %01X, %d
Line 2214: [INTERNAL_CHANNEL] Rabm_FindNsapi : %01X
Line 2253: [INTERNAL_CHANNEL] Rabm_FindNsapiIPv6 : NSAPI : %d, Invalid IP Type : %d
Line 2270: [INTERNAL_CHANNEL] Rabm_FindNsapiIPv6 : Primary Nsapi (%01X),  SID (%d) TFT (%d) 
Line 2277: [INTERNAL_CHANNEL] Rabm_FindNsapiIPv6 : Primary Nsapi (%01X),  SID (%d)  TFT (%d) 
Line 2304: [INTERNAL_CHANNEL] Rabm_FindNsapiIPv6 : NSAPI %d, TFT idx %d, iFind %d, higer_precedence_value %d, precedence_value %d
Line 2313: [INTERNAL_CHANNEL] Next Header: %X, %X
Line 2337: [INTERNAL_CHANNEL] Flow label: %X%X%X, %X, %X
Line 2355: [INTERNAL_CHANNEL] Remote IPv6: 
Line 2356: IPv6 Addr
Line 2374: [INTERNAL_CHANNEL] Local port : %X, %X
Line 2389: [INTERNAL_CHANNEL] Remote port : %X, %X
Line 2404: [INTERNAL_CHANNEL] Local port range: %X, %X, %X
Line 2419: [INTERNAL_CHANNEL] Dst port range: %X, %X, %X
Line 2439: [INTERNAL_CHANNEL] check precedence: higer %d, cur %d,  Find %d
Line 2449: [INTERNAL_CHANNEL] TFT MATCH : Keep nsapi %d
Line 2454: [INTERNAL_CHANNEL] TFT MATCH : Find, temp nsapi %d
Line 2459: [INTERNAL_CHANNEL] TFT MATCH : Current Nsapi (%01X), Primary is %01X, %d
Line 2463: [INTERNAL_CHANNEL] need to check another pdp context %d %d
Line 2489: [INTERNAL_CHANNEL] Rabm_FindNsapiIPv6: %01X, %d
Line 2499: [INTERNAL_CHANNEL] Rabm_FindNsapiIPv6: %01X, %d
Line 2518: [INTERNAL_CHANNEL] Rabm_FindNsapiIPv6 : %01X
Line 2929: [ERROR_CHANNEL] Rabm_PsGetSIDFromNsapi : Invalid Nsapi : %d
Line 2992: [CONTROLCHANNEL] rabmGetVCPState : GCF MODE!!!, VCP : %d
Line 3061: [CONTROLCHANNEL] rabm_SetSupportLocalPdpReset : Set Local Pdp reset %d
Line 3073: [CONTROLCHANNEL] rabm_SetMultiRbExistence : Current Value %d
Line 3079: [CONTROLCHANNEL] rabm_GetMultiRbExistence : Current Value %d
Line 3094: [CONTROLCHANNEL] rabm_CheckCSRabPresent: TRUE  CS Rab %01X is Active 
Line 3127: [CONTROLCHANNEL] rabm_PsQueueFlush: pBuffer(0x%X) free  (NSAPI %d)
Line 3165: [CONTROLCHANNEL] rabm_CalcCurPdpCnt: Active Pdp %d, %d, %d
Line 3173: [CONTROLCHANNEL] rabm_CalcCurPdpCnt: cnt %d
Line 3186: [ERROR_CHANNEL] rabm_GetAllocatedRabId: Idx is out of range %d
Line 3218: [CONTROLCHANNEL] ======== NSAPI %d UL/DL statistic (SID %d, State %d, SIM Type %d) ==========
Line 3219: [CONTROLCHANNEL]  DL data counts : %d
Line 3220: [CONTROLCHANNEL] =========================================================
Line 3240: [INTERNAL_CHANNEL] rabm_GetDomesticSimCardType : %d
Line 3253: [INTERNAL_CHANNEL] rabm_SetIsFDTriggered : %d
Line 3267: [CONTROLCHANNEL] rabm_SetDl_counts : %d, %d
Line 3284: [CONTROLCHANNEL] rabm_KeepFD_Req : %d
Line 3303: [CONTROLCHANNEL] rabm_CheckActiveRabAndMultiplePdp(): NSAPI = %d, ntPdp = %d, RAB RAB_ACTIVE
Line 3311: [CONTROLCHANNEL] rabm_CheckActiveRabAndMultiplePdp(): RAB state = %d, CntPdp = %d  
Line 3325: [CONTROLCHANNEL] DeactivationInProgress for NSAPI %d 
Line 3331: [CONTROLCHANNEL] more than two Active PDP contexts (%d) 
