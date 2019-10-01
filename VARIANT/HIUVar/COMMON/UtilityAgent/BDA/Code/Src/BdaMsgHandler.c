Line 118: BDA received a msg (MsgType %d)
Line 135: Unrecognized msgType(%d)
Line 156: BIG_DATA_INFO_SET received by BDA (CallDomain %d, SimIndex %d)
Line 166: Clearing InfoGetReq cache on reception of BIG_DATA_INFO_SET_REQ
Line 174: BIG_DATA_INFO_SET will be ignored due to CallDomain = 0
Line 178: BIG_DATA_INFO_SET fails due to invalid CallDomain(%d)
Line 184: BIG_DATA_INFO_SET fails due to invalid SimIndex(%d)
Line 191: pal_MemAlloc failed
Line 207: pal_MsgRtkSend failed
Line 210: pal_MemFree failed
Line 214: BIG_DATA_INFO_CNF sent to SIPC (result=TRUE)
Line 235: BIG_DATA_INFO_GET_REQ received by BDA (SimIndex %d, Domain %d)
Line 239: BIG_DATA_INFO_GET_REQ will be discarded due to invalid SimIndex or Domain
Line 245: No BIG_DATA_INFO_SET previously received for this domain! .. Message will be discarded
Line 254: Caching InfoGetReq until a DiagInfoInd arrives!
Line 262: Replacing cached InfoGetReq(RspFlag %d) with new InfoGetReq(RspFlag %d)
Line 268: Existing records don't match an already cached InfoGetReq
Line 275: Unable to get Domain Configuration(Domain %d) ... No DiagInfoReq will be sent
Line 296: UnsolicitedFetch is disabled for Domain %d ... No DiagInfoReq will be sent
Line 309: pal_MemAlloc failed
Line 325: pal_MsgRtkSend failed
Line 328: pal_MemFree failed
Line 332: BIG_DATA_INFO_GET_RESP sent to SIPC
Line 365: Unexpected SimIndex (%d)
Line 371: Unsupported or invalid Trigger (Trigger=%d)
Line 376: NS_DIAG_INFO_IND received by BDA(SimIndex=%d, Trigger=%d, Act=%d, LteRrcEvent=%d)
Line 382: Unable to get Trigger Configuration (Trigger=%d)
Line 389: Reception of NS_DIAG_TRIGGER_RRC_SUCCESS_INDICATION or NS_DIAG_TRIGGER_RRE_SUCCESS_INDICATION for SimIndex %d would result in removal of all records for VoLTE domain
Line 397: Unable to get BDA record (Trigger=%d)
Line 407: [RLF_DEDICATED_COUNT] NS_DIAG_TRIGGER_LTE_RRC_EVENT with LTE RLF received for SimIndex:%d
Line 422: [RLF_DEDICATED_COUNT] NS_DIAG_TRIGGER_2G_3G_RRC_EVENT with 3G RLF received for SimIndex:%d
Line 438: Record corresponding to trigger %d already exist .. New info will be discarded
Line 446: Unexpected replacement policy value (Trigger=%d, policy=%d)
Line 462: [SIM_REPORT] NS_DIAG_TRIGGER_SIM_HOT_SWAP received from NS
Line 468: [SIM_REPORT] current value for SIM swap counters: %d %d
Line 470: [SIM_REPORT] updated value for SIM swap counters: %d %d
Line 480: [SIM_REPORT] NS_DIAG_TRIGGER_SIM_ERROR_INFORMATION received from NS
Line 487: [SIM_REPORT] Current value for No SIM comm error counters: %d %d
Line 489: [SIM_REPORT] updated value No SIM comm error counters: %d %d
Line 499: [SIM_REPORT] Current value for No SIM Max Null Proc Bytes counters: %d %d
Line 501: [SIM_REPORT] updated value for No SIM Max Null Proc Bytes counters: %d %d
Line 511: [SIM_REPORT] Current value for SIM Recovery counters: %d %d
Line 513: [SIM_REPORT] updated value for SIM Recovery counters: %d %d
Line 523: [SIM_REPORT] Current value for SIM Parity error counters: %d %d
Line 525: [SIM_REPORT] updated value for SIM Parity error counters: %d %d
Line 532: [SIM_REPORT] Unknown SimError %d occurred
Line 546: [NSVC_REPORT] In Service/ Limited Service/ Power off/ Flight mode ON Trigger received from NS for SimIndex%d
Line 559: [NSVC_REPORT] For SimIndex%d due to power off/flight mode OOS triggers henceforth is invalid
Line 565: [NSVC_REPORT] For SimIndex%d due to In-service/ Limited Service OOS triggers henceforth is valid
Line 572: [NSVC_REPORT] Out of Service Trigger received from NS
Line 580: [NSVC_REPORT] For SimIndex%d OOS started with Trigger %d at %d ms
Line 587: [NSVC_REPORT] For SimIndex%d OOS triggers would not be evaluated
Line 601: A cached InfoGetReq exists(SimIndex %d, Domain %d) .. It may be time to process it
Line 624: Unexpected SimIndex (%d)
Line 628: NS_DIAG_EVENT_IND received by BDA(SimIndex=%d, Event=%d)
Line 639: [RLF_DEDICATED_COUNT] NS_DIAG_EVENT_DEDICATE_MODE_ENTRY with LTE Dedicated Mode Entry received for SimIndex:%d
Line 645: [RLF_DEDICATED_COUNT] NS_DIAG_EVENT_DEDICATE_MODE_ENTRY with 3G Dedicated Mode Entry received for SimIndex:%d
Line 652: Unsupported or invalid Event (Event=%d)
Line 673: Unable to get Trigger Configuration (Trigger=%d)
Line 680: Conditions for sending BIG_DATA_INFO_GET_IND to SIPC are not satisfied
Line 688: pal_MemAlloc failed
Line 702: InfoGetInd(SimIndex %d, CallDomain %d, EventType %d, RspFlag %d)
Line 708: pal_MsgRtkSend failed
Line 711: pal_MemFree failed
Line 715: BIG_DATA_INFO_GET_IND sent to SIPC
Line 731: BDA_FinalizeInfoGetResp
Line 733: Record(InfoBitmap = 0x%x), InfoGetReq (SimIndex %d, Domain %d, RspFlag %d)
Line 735: InfoGetReq (CallType %d, CallState %d, EventType %d, Cause %d, RegStatus %d, RejCause %d)
Line 738: InfoGetReq (ImsRelCause %d, SipRespCode %d)
Line 740: InfoGetReq (SensorStateInfo %d, AudioPathInfo %d)
Line 742: InfoGetReq (CodecType %d)
Line 794: From NS:EventType %d, Cause %d
Line 807: EventType will be changed from %d to %d
Line 816: EventType will be changed from %d to %d
Line 828: InfoGetResp (SipRespCode %d, ImsRelCause %d)
Line 837: Channel Quality Info cleared out because this is a normal call end
Line 847: Populating call quality info to GetResp
Line 867: Unexpected ErrorType %d
Line 873: InfoGetResp (SimIndex %d, Domain %d, RspFlag %d, InfoBitMap 0x%x)
Line 875: InfoGetResp (CallType %d, CallState %d, EventType %d, Cause %d, RegStatus %d, RejCause %d)
Line 878: InfoGetResp (ImsRelCause %d, SipRespCode %d)
Line 910: Record corresponding to Trigger %d (used %d) will be cleared out
Line 930: BDA_ClearDomainRecords (SimIndex = %d, Domain = %d)
Line 935: Unable to get Domain Configuration
Line 944: Record %d corresponding to Trigger %d (used %d) will be cleared out
Line 1068: BDA_Reset
Line 1114: Unable to map rspFlag value %d to a trigger!!
Line 1122: Record found(SimIndex=%d, CallDomain=%d, RecordTrigger=%d, RecordAct=%d)
Line 1127: DIAG INFO for Trigger %d hasn't been received yet or the Trigger is invalid
Line 1135: Failed to get Domain Configurations (Domain %d)
Line 1156: Unknown Act ... Record will be matched(Index %d, Trigger %d, LogInfoBitmap 0x%x)!!
Line 1165: Record found(SimIndex=%d, CallDomain=%d, RecordTrigger=%d, RecordAct=%d)
Line 1171: Record didn't match(SimIndex=%d, CallDomain=%d, RecordTrigger=%d, RecordAct=%d)
Line 1175: Record not found(SimIndex=%d, CallDomain=%d)
Line 1193: BDA_SendDiagInfoReq(SimIndex %d, CallDomain %d)
Line 1199: pal_MemAlloc failed
Line 1206: Unable to get Trigger Configuration(NS_DIAG_TRIGGER_BDA_REQUEST_EVENT)
Line 1210: pal_MemFree failed
Line 1225: Unexpected SimIndex (%d)
Line 1228: pal_MemFree failed
Line 1241: pal_MsgRtkSend failed
Line 1244: pal_MemFree failed
Line 1365: Missing configuration(Triggers Configured = %d/%d, Domains Configured = %d/%d)
Line 1372: Trigger %d: isValid %d ActSelectPolicy %d ReplacementPolicy %d InfoBitmap 0x%x
Line 1383: Domain %d: isValid %d isUnsolicitedFetchEnabled %d
Line 1390:    TriggersOrderedList[%d] %d
Line 1394:    TriggersOrderedList Length %d
Line 1399:    ActOrderedList[%d] %d
Line 1403:    ActOrderedList Length %d
Line 1411: RspFlag %d: isValid %d Trigger %d
Line 1429: Out of range Trigger value (%d)
Line 1447: Out of range Domain value (%d)
Line 1465: Out of range RspFlag value (%d)
Line 1594: [SIM_REPORT] Current value for SIM swap counters: %d %d
Line 1595: [SIM_REPORT] Current value for No SIM comm error counters: %d %d
Line 1596: [SIM_REPORT] Current value for No SIM max null proc counters: %d %d
Line 1597: [SIM_REPORT] Current value for SIM recovery counters: %d %d
Line 1598: [SIM_REPORT] Current value for SIM parity counters: %d %d
Line 1615: [SIM_REPORT] All SIM related counters stored in the NV memory is zero
Line 1622: [RLF_DEDICATED_COUNT] Current value for RLF and Dedicated count for LTE: %d %d %d %d
Line 1625: [RLF_DEDICATED_COUNT] Current value for RLF and Dedicated count for 3G: %d %d %d %d
Line 1653: [RLF_INFO] RLFI Count 0 across RATs!!!
Line 1657: [RLF_INFO] Current value for RLF count for LTE: %d %d
Line 1663: Invalid RLF Count return!!!
Line 1670: [RLF_INFO] RLFI Count 0. return!!!
Line 1676: [RLF_INFO][SIM0][LTE] For RlfIndex %d RlfCause: %d RSCP: %d and RSRP: %d
Line 1680: [RLF_INFO][SIM0][LTE] ServCellInfo(TAC:%d, %d, PID: %d, DL_ARFCN: %d)
Line 1689: [RLF_INFO][SIM1][LTE] For RlfIndex %d RlfCause: %d RSCP: %d and RSRP: %d
Line 1693: [RLF_INFO][SIM1][LTE] ServCellInfo(TAC:%d, %d, PID: %d, DL_ARFCN: %d)
Line 1700: [RLF_INFO] Current value for RLF count for 3G: %d %d
Line 1706: Invalid RLF Count return!!!
Line 1712: [RLF_INFO][SIM0][3G] For RlfIndex %d RlfCause: %d RSCP: %d and RSRP: %d
Line 1716: [RLF_INFO][SIM0][3G] ServCellInfo(LAC:%d,%d, RAC: %d, PSC: %d, DL_ARFCN: %d)
Line 1726: [RLF_INFO][SIM1][3G] For RlfIndex %d RlfCause: %d RSCP: %d and RSRP: %d
Line 1730: [RLF_INFO][SIM1][3G] ServCellInfo(LAC:%d,%d, RAC: %d, PSC: %d, DL_ARFCN: %d)
Line 1761: [NSVC_REPORT] Displaying stored NV memory values while sending MiscInfo to SIPC
Line 1762: [NSVC_REPORT] current value for Nsvc total count: %d 
Line 1768: [NSVC_REPORT] current value for Nsvc level %d count: %d 
Line 1783: [NSVC_REPORT] There is no instance of No  service stored in the NV memory
Line 1790: Unexpected trigger (%d)
Line 1808: Unable to get BDA record (Trigger=%d)
Line 1818: [SIM_REPORT] Sending BigData_Info_Ind inside timer expiry handler for SimIndex0
Line 1828: [SIM_REPORT] Sending BigData_Info_Ind inside timer expiry handler for SimIndex1
Line 1838: [SIM_REPORT] Sending BigData_Info_Ind inside SimEvent_Notification for SimIndex%d
Line 1845: TimId(%d) Stop Fail(%s,%d)
Line 1849: [SIM_REPORT] Stopped timer for SimIndex%d
Line 1854: [SIM_REPORT] Started timer for SimIndex%d
Line 1861: [RLF_DEDICATED_COUNT] Sending BigData_Info_Ind inside Rlf timer expiry handler
Line 1876: [RLF_INFO] Sending BigData_Info_Ind inside RlfInfo timer expiry handler
Line 1891: [NSVC_REPORT] Sending BigData_Info_Ind inside Nsvc timer expiry handler
Line 1909: [RLF_INFO] Sending BigData_Info_Ind due to reception of MAX number of RLF across RATs
Line 1931: [NSVC_REPORT] StartTime: %d, EndTime: %d and OOS duration: %d
Line 1951: [NSVC_REPORT] NSVC level determined is %d
Line 1958: [NSVC_REPORT] current value for Nsvc total count: %d 
Line 1961: [NSVC_REPORT] updated value for Nsvc total count: %d 
Line 1966: [NSVC_REPORT] current value for Nsvc level %d count: %d 
Line 1969: [NSVC_REPORT] updated value for Nsvc level %d count: %d 
