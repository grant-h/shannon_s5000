Line 197: [URRC_ANR]: ANRHandler: Init called
Line 234: [URRC_ANR]: init: ANRHandler initialization problem - couldn't register with MM boundary
Line 240: [URRC_ANR]: init: ANRHandler initialization - MM_URRC_PREPARE_CGI_REQ register with MM boundary
Line 248: [URRC_ANR]: init: ANRHandler initialization problem - couldn't register with MM boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 254: [URRC_ANR]: init: ANRHandler initialization - MM_URRC_START_CGI_REQ register with MM boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 262: [URRC_ANR]: init: ANRHandler initialization problem - couldn't register with MM boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 268: [URRC_ANR]: init: ANRHandler initialization - MM_URRC_CGI_STOP_REQ register with MM boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 276: [URRC BCH in DCH]: init: ANRHandler initialization problem - couldn't register with UPHY boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 282: [URRC BCH in DCH]: init: ANRHandler initialization - CUPHY_REFERENCE_CELL_IND register with UPHY boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 289: [URRC BCH in DCH]: init: ANRHandler initialization problem - couldn't register with UPHY boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 295: [URRC BCH in DCH]: init: ANRHandler initialization - CUPHY_REFERENCE_CELL_IND register with UPHY boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 305: ERROR registering for State Change notificationwith CnxMgr
Line 313: [URRC_ANR]: init: ANRHandler initialization problem - couldn't register with MM boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 319: [URRC_ANR]: init: ANRHandler initialization - MM_URRC_CGI_ACQUISITION_REQ register with MM boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 327: ANRHandler.c: ANRHandler: Timer TCgiDrxExpiryTimerId creation failed
Line 332: [URRC_ANR]:  ANRHandler: Timer TCgiDrxExpiryTimerId Created
Line 338: [URRC_ANR]: ERROR Illegal State
Line 361: [URRC_ANR]: rrc_AnrHandler : RecvCgiStopReq received 
Line 378: [URRC_ANR]: Send Suspend message to rrc_TaskMain
Line 383: [URRC_ANR]: msg is NULL
Line 395: [URRC BCH in DCH]: ERROR Illegal State
Line 408: [URRC_ANR]: SFN(%d) from MIB InfoBlock
Line 561: [URRC_ANR]: Scheduling info at MIB for SIB1(%d) SIB3(%d)
Line 620: [URRC_ANR] SFN ACQUISITION is STOPPED successfully
Line 624: [URRC_ANR]: Error in stopping AnrHandler_p->TCgiDrxExpiryTimerId
Line 629: [URRC_ANR]: AnrHandler_p->TCgiDrxExpiryTimerId already expired or stopped
Line 644: [URRC BCH in DCH]: ERROR Illegal State
Line 699: [URRC_ANR] SFN ACQUISITION is STOPPED successfully
Line 703: [URRC_ANR]: Error in stopping AnrHandler_p->TCgiDrxExpiryTimerId
Line 708: [URRC_ANR]: AnrHandler_p->TCgiDrxExpiryTimerId already expired or stopped
Line 717: [URRC_ANR]: Error - Currently, TDD ANR or AGAP CGI is not supported
Line 735: Msg is NULL
Line 740: AnrHandler_p->SearchNetworkPtr is NULL
Line 784: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted CUPHY_BPLMN_STOP_REQ sent
Line 790: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted CUPHY_NON_UMTS_RAT_MODE_REQ sent
Line 796: [URRC BCH in DCH]: ERROR Illegal State
Line 832: [URRC_ANR]: ERROR Illegal State
Line 886: [URRC_ANR]: rrc_AnrHandler_free : AnrHandler_p->TCgiDrxExpiryTimerId couldn't freed
Line 891: [URRC_ANR]: couldn't de-register MM_URRC_PREPARE_CGI_REQ with MM boundary
Line 896: [URRC_ANR]: couldn't de-register MM_URRC_START_CGI_REQ with MM boundary
Line 901: [URRC_ANR]: couldn't de-register MM_URRC_CGI_STOP_REQ with MM boundary
Line 906: [URRC_ANR]: couldn't de-register MM_URRC_CGI_ACQUISITION_REQ with MM boundary
Line 912: [URRC_ANR]: rrc_AnrHandler_free : Freed the Singleton instance
Line 987: GenMsg is NULL
Line 1018: [URRC_ANR]: CUPHY_UMTS_RAT_MODE_CNF received from UPHY
Line 1025: [URRC_ANR]: CUPHY_NON_UMTS_RAT_MODE_CNF received from UPHY
Line 1031: [URRC_ANR]: CUPHY_CGI_ACQUISITION_CONFIG_CNF received from UPHY
Line 1037: [URRC_ANR]: CUPHY_CGI_ACQUISITION_RELEASE_CNF received from UPHY
Line 1043: [URRC_ANR]: CUPHY_SFN_ACQUISITION_CONFIG_CNF received from UPHY
Line 1049: [URRC_ANR]: CUPHY_SFN_ACQUISITION_RELEASE_CNF received from UPHY
Line 1055: [URRC_ANR]: CUPHY_SFN_ACQUISITION_IND received from UPHY
Line 1062: [URRC_ANR]: Unexpected message in AnrHandler from UPHY
Line 1065: [URRC_ANR]: CUPHY_BPLMN_INIT_CNF message received from UPHY
Line 1073: [URRC_ANR]: Unexpected message in AnrHandler from Other Component
Line 1097: [URRC_ANR]:rrc_AnrHandler : PrepareCgiInd 
Line 1139: [URRC_ANR]: NotActive_PrepareCgiInd AnrHandler_p->is_fdd_mode set to (%d)
Line 1147: [URRC_ANR]: ANR is not support for (%d) umts_access_mode 
Line 1154: [URRC_ANR]: NotActive_PrepareCgiInd AnrHandler_p->si_requestForHO set to TRUE(%d)
Line 1163: [URRC_ANR]: ERROR Illegal State in NotActive_PrepareCgiInd
Line 1188: [URRC_ANR]: rrc_AnrHandler : MmCgiTimeInd received 
Line 1246: [URRC_ANR]: Timer With Value=%d successfully started for TCgiDrxExpiryTimerId
Line 1302: [URRC_ANR]: ERROR Illegal State in Ready_MmCgiTimeInd
Line 1307: [URRC_ANR]: Timer Creation failed of TCgiDrxExpiryTimerId
Line 1312: TCgiDrxExpiryMsg is NULL
Line 1320: [URRC_ANR]: ERROR!!! Timer Value in MM_URRC_START_CGI_REQ is 0
Line 1365: [URRC_ANR]:Timer With Value=%d successfully started for TCgiDrxExpiryTimerId
Line 1422: [URRC_ANR]: ERROR Illegal State in Ready_MmCgiTimeInd
Line 1427: [URRC_ANR]: Timer Creation failed of TCgiDrxExpiryTimerId
Line 1432: [URRC_ANR]: ERROR!!! TCgiDrxExpiryMsg is NULL in Ready_MmCgiTimeInd
Line 1440: [URRC_ANR]: ERROR!!! Timer Value in MM_URRC_START_CGI_REQ is 0
Line 1512: [URRC_ANR]: ERROR Illegal State in AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss
Line 1536: [URRC_ANR]: ERROR Illegal State in AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss
Line 1543: [URRC_ANR]: AwaitingAnrInfo_ReceivedMsg unexpected msg (%x) ignored
Line 1572: [URRC_ANR]:rrc_AnrHandler : CgiAcquisitionReq 
Line 1624: [URRC_ANR]: ERROR Illegal State in Ready_SfnAcqReq
Line 1629: [URRC_ANR]: ERROR rrc_CUPHY_SfnAcqConf_REQ_Create return NULL
Line 1660: [URRC_ANR]: ERROR rrc_CUPHY_CgiAcqConf_REQ_Create return NULL
Line 1691: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - Fatal Error AnrHandler_p->UtraSiAcqForHoMode(%d) AnrHandler_p->CgiAcqCnf.UtraSiAcquisitionForHoMode(%d)
Line 1702: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - successful case of AnrHandler_p->UtraSiAcqForHoMode(%d)
Line 1724: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - invalid slot(%d) value
Line 1733: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - invalid chip(%d) value
Line 1742: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - invalid duration_margin(%d) value will be set to 3 (30ms) forcefully
Line 1786: [URRC_ANR]MIB_GAP_INFO AbsoluteModemTiming : (CurrentSfn(%d frame) + CurrAbsoluteAfn(%d frame) + SfnGap(%d frame) - Duration_Margin(%d frame)) mod MAX_SFN(4096) = NextTimeAbsoluteAfn(%d frame)
Line 1792: [URRC_ANR]MIB_GAP_INFO Umtstiming : (CurrentSfn(%d frame) + SfnGap(%d frame) - Duration_Margin(%d frame)) mod MAX_SFN(4096) = CurrrentSFNForNextMode(%d frame)
Line 1797: [URRC_ANR]MIB_GAP_INFO: duration_margin.sfn(%d frame) * 10 + UTRAN_CGI_MIB_DECODING_GAP_DEFAULT_FDD(20ms) = requiredGapDuration(%d ms)
Line 1800: [URRC_ANR]MIB_GAP_INFO: UmtsRepetitionPeriodForNextMode(%d) = FDD_MIB_REPETITION_PERIOD_DEFAULT(8 frame) * 10ms
Line 1818: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - Sib1 SchedInfo SEG_COUNT(%d) SIB_REP(%d) SIB_POS(%d) SIB_OFF(%d)
Line 1824: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - Sib3 SchedInfo SEG_COUNT(%d) SIB_REP(%d) SIB_POS(%d) SIB_OFF(%d)
Line 1833: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - invalid duration_margin(%d) value will be set to 3 (30ms) forcefully
Line 1918: [URRC_ANR]SIB1_GAP_INFO SfnGap = SIB_REP(%d) - (currrent_sfn(%d) mod SIB_REP(%d)) + SIB_POS(%d) = %d
Line 1924: [URRC_ANR]SIB1_GAP_INFO AbsoluteModemTiming : (CurrentSfn(%d frame) + CurrAbsoluteAfn(%d frame) + SfnGap(%d frame) - Duration_Margin(%d frame)) mod MAX_SFN(4096) = NextTimeAbsoluteAfn(%d frame)
Line 1930: [URRC_ANR]SIB1_GAP_INFO Umtstiming : (CurrentSfn(%d frame) + SfnGap(%d frame) - Duration_Margin(%d frame)) mod MAX_SFN(4096) = CurrrentSFNForNextMode(%d frame)
Line 1935: [URRC_ANR]SIB1_GAP_INFO: duration_margin.sfn(%d frame) * 10 + UTRAN_CGI_SIB1_DECODING_GAP_DEFAULT_FDD(20ms) = requiredGapDuration(%d ms)
Line 1938: [URRC_ANR]SIB1_GAP_INFO: UmtsRepetitionPeriodForNextMode(%d) = Sib1_RepPeriod(%d) * 10ms
Line 1943: [URRC_ANR]SIB3_GAP_INFO SfnGap = SIB_REP(%d) - (currrent_sfn(%d) mod SIB_REP(%d)) + SIB_POS(%d) = %d
Line 1949: [URRC_ANR]SIB3_GAP_INFO AbsoluteModemTiming : (CurrentSfn(%d frame) + CurrAbsoluteAfn(%d frame) + SfnGap(%d frame) - Duration_Margin(%d frame)) mod MAX_SFN(4096) = NextTimeAbsoluteAfn(%d frame)
Line 1955: [URRC_ANR]SIB3_GAP_INFO Umtstiming : (CurrentSfn(%d frame) + SfnGap(%d frame) - Duration_Margin(%d frame)) mod MAX_SFN(4096) = CurrrentSFNForNextMode(%d frame)
Line 1960: [URRC_ANR]SIB3_GAP_INFO: duration_margin.sfn(%d frame) * 10 + UTRAN_CGI_SIB3_DECODING_GAP_DEFAULT_FDD(20ms) = requiredGapDuration(%d ms)
Line 1963: [URRC_ANR]SIB3_GAP_INFO: UmtsRepetitionPeriodForNextMode(%d) = Sib3_RepPeriod(%d) * 10ms
Line 1974: [URRC_ANR]: Fatal Error SendCgiAcqCnf - SIB3 scheduling information is not included in this cell
Line 1985: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - SIB3 has been decoded successfully return AnrHandler_p->CgiAcqCnf.isSuccess %d
Line 1993: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - FatalError Unknown UtraSiAcqForHoMode(%d)
Line 2002: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - un-successful case of AnrHandler_p->UtraSiAcqForHoMode(%d)
Line 2028: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - FatalError Unknown UtraSiAcqForHoMode(%d)
Line 2129: [URRC_ANR]: AnrHandler_p->UtraSiAcqForHoMode set to UTRAN_CGI_SFN_ACQUISITION(%d)
Line 2130: [URRC_ANR]: AnrHandler_p->SiAcqUphyCnfMode set to CUPHY_CGI_ACQUISITION_CONFIG_MODE_e(%d)
Line 2142: [URRC_ANR]: ERROR Illegal State in Ready_CgiAcqReq
Line 2147: [URRC_ANR]: ERROR rrc_CUPHY_CgiAcqConf_REQ_Create return NULL
Line 2195: [URRC_ANR]: AnrHandler_p->SiAcqUphyCnfMode set to (%d)
Line 2199: [URRC_ANR]: ERROR Illegal State in Ready_MmCgiTimeInd
Line 2251: [URRC_ANR]: ERROR Illegal State in Ready_MmCgiTimeInd
Line 2263: [URRC_ANR] SFN ACQUISITION is STOPPED successfully
Line 2267: [URRC_ANR]: Error in stopping AnrHandler_p->TCgiDrxExpiryTimerId
Line 2275: [URRC_ANR]: Unknown Mode detected MsgPtr->UtraSiAcquisitionForHoMode(%d)
Line 2281: [URRC_ANR]: Wrong AnrHandler_p->UtraSiAcqForHoMode(%d) is given in Ready state with AnrHandler_p->si_requestForHO(%d)
Line 2287: [URRC_ANR]: Timer Creation failed of TCgiDrxExpiryTimerId
Line 2292: [URRC_ANR]: ERROR!!! TCgiDrxExpiryMsg is NULL in Ready_MmCgiTimeInd
Line 2300: [URRC_ANR]: ERROR!!! Timer Value in MM_URRC_START_CGI_REQ is 0
Line 2360: [URRC_ANR]: MsgPtr->UtraSiAcquisitionForHoMode(%d) is being sent. Current AnrHandler_p->UtraSiAcqForHoMode is (%d)
Line 2406: [URRC_ANR]: ERROR Illegal State in Ready_MmCgiTimeInd
Line 2418: [URRC_ANR] SFN ACQUISITION is STOPPED successfully
Line 2422: [URRC_ANR]: Error in stopping AnrHandler_p->TCgiDrxExpiryTimerId
Line 2429: [URRC_ANR]: Unknown Mode detected MsgPtr->UtraSiAcquisitionForHoMode(%d)
Line 2435: [URRC_ANR]: Timer Creation failed of TCgiDrxExpiryTimerId
Line 2440: [URRC_ANR]: ERROR!!! TCgiDrxExpiryMsg is NULL in Ready_MmCgiTimeInd
Line 2448: [URRC_ANR]: ERROR!!! Timer Value in MM_URRC_START_CGI_REQ is 0
Line 2469: [URRC_ANR]:::::: Current SFN Info START :::::::
Line 2470: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.current_sfn.sfn (%d)
Line 2471: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.current_sfn.slot (%d)
Line 2472: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.current_sfn.chip (%d)
Line 2473: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.sfn_offset.sfn (%d)
Line 2474: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.sfn_offset.slot (%d)
Line 2475: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.sfn_offset.chip (%d)
Line 2476: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.duration_margin.sfn (%d)
Line 2477: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.duration_margin.slot (%d)
Line 2478: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.duration_margin.chip (%d)
Line 2479: [URRC_ANR]:::::: Current SFN Info END :::::::
Line 2497: [URRC_ANR]:::::: Current CgiAcqCnf Info START :::::::
Line 2498: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.UtraSiAcquisitionForHoMode (%d)
Line 2499: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.isSuccess (%d)
Line 2503: [URRC_ANR]:::::: %st Sched Info :::::::
Line 2504: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.UmtsTimingForNextMode[%d].sfn (%d)
Line 2506: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.UmtsTimingForNextMode[%d].slot (%d)
Line 2508: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.UmtsTimingForNextMode[%d].chip (%d)
Line 2510: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.UmtsTimingForNextMode[%d].refCounterFrame (%d)
Line 2512: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.UmtsTimingForNextMode[%d].refCounterSlot
Line 2514: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.UmtsTimingForNextMode[%d].refCounterChip (%d)
Line 2516: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.requiredGapDuration[%d] (%d)
Line 2518: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.UmtsRepetitionPeriodForNextMode[%d] (%d)
Line 2522: [URRC_ANR]:::::: Current CgiAcqCnf Info END :::::::
Line 2623: Msg is NULL
Line 2630: [URRC_ANR]: ERROR Illegal State in AwaitingAnrInfo_TcgiDrxExpiry
Line 2685: Msg is NULL
Line 2692: [URRC_ANR]: ERROR Illegal State in AwaitingAnrInfo_TcgiDrxExpiry
Line 2736: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted received
Line 2765: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted AnrHandler_p->si_requestForHO(%d)
Line 2770: [URRC BCH in DCH]: AnrHandler_p->BchInDchOngoing
Line 2795: [URRC BCH in DCH] Reference Cell Uarfcn = %d, PSC = %d
Line 2826: [URRC BCH in DCH] BandId(%d) Lac(%d) Rac(%d)
Line 2827: [URRC BCH in DCH] PLMN(%x%x%x%x%x%x)
Line 2841: [URRC BCH in DCH]: ERROR Illegal State in AwaitingBchInfo_AwaitingAnrInfoReadAborted
Line 2870: MsgDataPtr is NULL. 
Line 2894: MsgDataPtr is NULL. 
Line 2904: [URRC BCH in DCH]: ERROR Illegal State in WaitingforConfirmation_AwaitingAnrInfoReadAborted
Line 2918: [URRC BCH in DCH]: ERROR Illegal State in AwaitingBchInfo_AwaitingAnrInfoReadAborted
Line 2933: [URRC BCH in DCH]: Message Generation Error
Line 2942: [URRC BCH in DCH]: ERROR Illegal State in WaitingforConfirmation_AwaitingAnrInfoReadAborted
Line 2952: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted CUPHY_BPLMN_STOP_REQ sent
Line 2958: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted CUPHY_NON_UMTS_RAT_MODE_REQ sent
Line 3005: [URRC_ANR]: Received CUPHY_UMTS_RAT_MODE_CNF from UPHY
Line 3019: [URRC_ANR]: AnrHandler_p->SiAcqUphyCnfMode set to (%d)
Line 3025: [URRC_ANR]: Received CUPHY_UMTS_RAT_MODE_CNF from UPHY when AnrHandler_p->UtraSiAcqForHoMode has %d value
Line 3030: [URRC_ANR]: Received CUPHY_UMTS_RAT_MODE_CNF from UPHY when LastTime Timer NOT PAUSED
Line 3036: [URRC_ANR]: Timer Value left after we received CNF %d
Line 3067: [URRC_ANR]: ANR Resumed but SearchNetworkPtr cannot be NULL as this is the FddNetwork Instance
Line 3078: MsgDataPtr is NULL. 
Line 3084: [URRC_ANR]: ERROR Illegal State in WaitingforConfirmation_ReceivedMsg
Line 3090: [URRC_ANR]: Very less time to start for BCH READ in WaitingforConfirmation_ReceivedMsg
Line 3097: [URRC_ANR]: Received CUPHY_UMTS_RAT_MODE_CNF from UPHY when LastTime Timer PAUSED
Line 3104: [URRC_ANR]: Timer Value left after we received CNF %d
Line 3119: MsgDataPtr is NULL
Line 3122: [URRC_ANR]: AnrResume sent to FddNetwork 
Line 3127: [URRC_ANR]: ERROR Illegal State in WaitingforConfirmation_ReceivedMsg
Line 3132: [URRC_ANR]: ANR Resumed but SearchNetworkPtr cannot be NULL as this is the FddNetwork Instance
Line 3140: [URRC_ANR]: Very less time to start for BCH READ in WaitingforConfirmation_ReceivedMsg
Line 3149: [URRC_ANR]: Received CUPHY_UMTS_RAT_MODE_CNF from UPHY when LastTime Timer NOT PAUSED
Line 3156: [URRC_ANR]: Timer Value left after we received CNF %d
Line 3191: MsgDataPtr is NULL. 
Line 3197: [URRC_ANR]: ERROR Illegal State in WaitingforConfirmation_ReceivedMsg
Line 3203: [URRC_ANR]: Very less time to start for BCH READ in WaitingforConfirmation_ReceivedMsg
Line 3210: [URRC_ANR]: Received CUPHY_UMTS_RAT_MODE_CNF from UPHY when LastTime Timer PAUSED
Line 3218: [URRC_ANR]: Timer Value left after we received CNF %d
Line 3230: [URRC_ANR]: ANR Resumed but SearchNetworkPtr cannot be NULL as this is the FddNetwork Instance
Line 3242: MsgDataPtr is NULL
Line 3245: [URRC_ANR]: AnrResume sent to FddNetwork 
Line 3250: [URRC_ANR]: ERROR Illegal State in WaitingforConfirmation_ReceivedMsg
Line 3256: [URRC_ANR]: Very less time to start for BCH READ in WaitingforConfirmation_ReceivedMsg
Line 3266: [URRC_ANR]: Received CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e from UPHY
Line 3282: [URRC_ANR]: Send Suspend message to rrc_TaskMain
Line 3291: [URRC_ANR]: msg is NULL
Line 3296: [URRC_ANR]: AnrHandler_p->SiAcqUphyCnfMode set to (%d)
Line 3302: [URRC_ANR] SFN ACQUISITION is STOPPED successfully
Line 3306: [URRC_ANR]: Error in stopping AnrHandler_p->TCgiDrxExpiryTimerId
Line 3311: [URRC_ANR]: AnrHandler_p->TCgiDrxExpiryTimerId already expired or stopped
Line 3316: [URRC_ANR]: Received CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e from UPHY and Drx Timer is NOT PAUSED
Line 3321: [URRC_ANR]: CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e ERROR Illegal State
Line 3326: [URRC_ANR]: Received CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e from UPHY and Drx Timer is PAUSED
Line 3333: [URRC_ANR]: CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e ERROR Illegal State
Line 3353: [URRC_ANR]: Send Suspend message to rrc_TaskMain
Line 3364: [URRC_ANR]: msg is NULL
Line 3369: [URRC_ANR]: AnrHandler_p->SiAcqUphyCnfMode set to (%d)
Line 3381: [URRC_ANR]: Send Suspend message to rrc_TaskMain
Line 3391: [URRC_ANR]: msg is NULL
Line 3395: [URRC_ANR]: Received CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e from UPHY and Drx Timer is NOT PAUSED
Line 3400: [URRC_ANR]: CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e ERROR Illegal State
Line 3405: [URRC_ANR]: Received CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e from UPHY and Drx Timer is PAUSED
Line 3412: [URRC_ANR]: CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e ERROR Illegal State
Line 3468: [URRC_ANR]: AnrHandler_p->SiAcqUphyCnfMode set to (%d)
Line 3472: [URRC_ANR]: ERROR Illegal State in Ready_MmCgiTimeInd
Line 3477: [URRC_ANR]: Fatal Error invalid mode AnrHandler_p->UtraSiAcqForHoMode(%d)
Line 3485: [URRC_ANR]: CUPHY_CGI_ACQUISITION_RELEASE_CNF received
Line 3498: [URRC_ANR]: CUPHY_SFN_ACQUISITION_CONFIG_CNF received moved to AwaitingAnrInfo state for getting CUPHY_SFN_ACQUISTION_IND
Line 3503: [URRC_ANR]: ERROR Illegal State in Ready_MmCgiTimeInd
Line 3508: [URRC_ANR]: Fatal Error invalid mode AnrHandler_p->si_requestForHO(%d) AnrHandler_p->SiAcqUphyCnfMode(%d)
Line 3516: [URRC_ANR]: Fatal Error CUPHY_SFN_ACQUISITION_IND received in wrong state(WAITINGFORCONFIRMATION)
Line 3521: [URRC_ANR]: UNEXPECTED Msg Received in WaitingforConfirmation_ReceivedMsg
Line 3542: [URRC BCH in DCH]:rrc_AnrHandler : ReferenceCellInd 
Line 3576: [URRC BCH in DCH] Reference Cell Ind Uarfcn = %d, CellParamId = %d
Line 3583: [URRC BCH in DCH] Reference Cell Ind Uarfcn = %d, PSC = %d
Line 3617: [URRC BCH in DCH] BandId(%d) Lac(%d) Rac(%d)
Line 3618: [URRC BCH in DCH] PLMN(%x%x%x%x%x%x)
Line 3632: [URRC BCH in DCH]: ERROR Illegal State in AwaitingBchInfo_AwaitingAnrInfoReadAborted
Line 3667: MsgDataPtr is NULL. 
Line 3697: MsgDataPtr is NULL. 
Line 3706: [URRC BCH in DCH]: ERROR Illegal State in WaitingforConfirmation_ReceivedMsg
Line 3728: [URRC BCH in DCH]: Message Generation Error
Line 3794: [URRC BCH in DCH] BandId(%d) Lac(%d) Rac(%d)
Line 3795: [URRC BCH in DCH] PLMN(%x%x%x%x%x%x)
Line 3810: [URRC BCH in DCH]: ERROR Illegal State
Line 3855: [URRC BCH in DCH]: ERROR Illegal State
Line 3878: [URRC BCH in DCH] Reference Cell Ind Uarfcn = %d, CellParamId = %d
Line 3885: [URRC BCH in DCH] Reference Cell Ind Uarfcn = %d, PSC = %d
Line 3894: [URRC BCH in DCH] Releasing BCH of current reference cell Uarfcn = %d, CellParamId = %d
Line 3905: Msg is NULL
Line 3912: [URRC BCH in DCH] Releasing BCH of current reference cell Uarfcn = %d, PSC = %d
Line 3923: Msg is NULL
Line 3933: [URRC BCH in DCH]: ERROR Illegal State
Line 3940: [URRC BCH in DCH] Reference Cell is not changed
Line 3957: [URRC BCH in DCH] Releasing BCH of current reference cell Uarfcn = %d, CellParamId = %d
Line 3967: Msg is NULL
Line 3973: [URRC BCH in DCH] Releasing BCH of current reference cell Uarfcn = %d, PSC = %d
Line 3983: Msg is NULL
Line 3993: [URRC BCH in DCH]: ERROR Illegal State
Line 4057: ANR : Added currently selected PlmnId: 0x%02X, 0x%02X, 0x%02X  to head of the list
Line 4084: ANR : Added currently selected PlmnId: 0x%02X, 0x%02X, 0x%02X  to head of the list
Line 4278: [URRC_ANR]: Timer TDRX or Scan stopped in AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss
Line 4289: [URRC_ANR]: AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss AnrHandler_p->UtraSiAcqForHoMode(%d)
Line 4299: [URRC_ANR]: AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss CUPHY_BPLMN_STOP_REQ sent
Line 4304: [URRC_ANR]: AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss CUPHY_NON_UMTS_RAT_MODE_REQ sent
Line 4309: [URRC_ANR]: Error in stopping TDrx or Scan in AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss
Line 4314: [URRC_ANR]: TDrx  or Scan already stopped in AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss
Line 4326: [URRC_ANR]: ERROR Illegal State in AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss
Line 4366: [URRC_ANR]: Timer TDRX or Scan stopped in AwaitingAnrInfo_AwaitingAnrInfoReadFailure
Line 4377: [URRC_ANR]: AwaitingAnrInfo_AwaitingAnrInfoReadFailure AnrHandler_p->UtraSiAcqForHoMode(%d)
Line 4383: [URRC_ANR]: AwaitingAnrInfo_AwaitingAnrInfoReadFailure CUPHY_NON_UMTS_RAT_MODE_REQ sent
Line 4389: [URRC_ANR]: AwaitingAnrInfo_AwaitingAnrInfoReadFailure CUPHY_BPLMN_STOP_REQ sent
Line 4392: [URRC_ANR]: AwaitingAnrInfo_AwaitingAnrInfoReadFailure CUPHY_NON_UMTS_RAT_MODE_REQ sent
Line 4397: [URRC_ANR]: Error in stopping TDrx or Scan in AwaitingAnrInfo_AwaitingAnrInfoReadFailure
Line 4402: [URRC_ANR]: TDrx  or Scan already stopped in AwaitingAnrInfo_AwaitingAnrInfoReadFailure
Line 4414: [URRC_ANR]: ERROR Illegal State in AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss
Line 4504: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted AnrHandler_p->si_requestForHO(%d)
Line 4509: [URRC_ANR]: ERROR Illegal State in AwaitingAnrInfo_TcgiDrxExpiry
Line 4571: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted CUPHY_BPLMN_STOP_REQ sent
Line 4577: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted CUPHY_NON_UMTS_RAT_MODE_REQ sent
Line 4608: [URRC_ANR]: Received CUPHY_SFN_ACQUISITION_RELEASE_CNF_e from UPHY
Line 4620: [URRC_ANR]: Received CUPHY_CGI_ACQUISITION_RELEASE_CNF_e from UPHY
Line 4621: [URRC_ANR]: CUPHY_CGI_STOP_AT_PAUSED_MODE_e, FinishCgi() without waiting CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e from UPHY
Line 4627: [URRC_ANR]: Received CUPHY_CGI_ACQUISITION_RELEASE_CNF_e from UPHY
Line 4634: [URRC_ANR]: Wait for CUPHY_NON_UMTS_RAT_MODE_CNF for CGI STOP
Line 4641: [URRC_ANR]: Received CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e from UPHY
Line 4649: [URRC_ANR]: AwaitingAnrInfo_ReceivedMsg unexpected msg (%x) ignored
Line 4774: [URRC BCH in DCH] Uarfcn = %d, PSC = %d, CellId 0x%x, Lac = %d, Rac = %d is added to DB
Line 4787: [URRC BCH in DCH] Uarfcn = %d, PSC = %d, CellId 0x%x is in DB at %d
Line 4812: [URRC BCH in DCH] ClearGlobalCellIdDb
Line 4856: ERROR Unexpected State Change Notification
Line 4871: AnrHandler_p is NULL
Line 4880: ERROR Unexpected State Change Notification
