Line 241: Assist Data present in MCM
Line 246: Assist Data already sent to LCSM
Line 251: Assist Data already sent to LCSM via SIBs
Line 256: Assist Data already sent to LCSM
Line 324: _init: ERR Registering for pending state change notifications
Line 339: _init: ERR initialising to McIdle state
Line 549: [McIdle_NewStateConfigured] ERR in Sib12 - not configuring sysinfo MSMTs.
Line 556: ERR transitioning to McDch state
Line 563: ERR transitioning to McFach state
Line 579: McIdle , target state = CELL_DCH & InterHHO is true
Line 593: McIdle_NewStateConfigured:Internal Measurement configured for MC Periodic(N-Freq)
Line 596: rrc_TddCnxMgr_SetSteadyState: N-Freq case, Sys Info Measuement not Config!! 
Line 608: [McIdle_NewStateConfigured][CellDch] Populate ActiveSet to CIL
Line 664: [McIdle_NewStateConfigured] New Sysinfo IntraF meas added [Mid = %i]
Line 690: [McIdle_NewStateConfigured] Dset Update enabled
Line 720: [McIdle_NewStateConfigured] New Sysinfo TVM added [Mid = %i]
Line 733: ERR transitioning to McDch state
Line 761: [McIdle_NewStateConfigured] New Sysinfo TVM added [Mid = %i]
Line 774: ERR transitioning to McFach state
Line 780: Same state transition (Idle-Idle)
Line 785: ERR - Invalid NewState [%i] from CnxMgr
Line 792: [McIdle_NewStateConfigured] ERR: sib11/12 not present
Line 799: ERR transitioning to McDch state
Line 805: ERR - Invalid NewState [%i] from CnxMgr, No Sib 11/12 Present
Line 911: [McDch_MCM_Received] ERR in MCM, Failure msg sent 
Line 924: [McDch_MCM_Received] theTID=NULL
Line 937: FixedUarfcn(%d) / MeasCtrlMsg with InterFreqMeas - Ignore it
Line 949: RAT Mode is WCDMA only , Ignore IRAT Measurement 
Line 963:  Modify Received with no MeasType Setting Value from MIDMap Table
Line 1002: [McDch_MCM_Received] MID %i being replaced including UPHY/UMAC release as measurement type changes.)
Line 1093: [McDch_MCM_Received]: Remove Nfreq TID Failed , TID = %d McmMID = %d
Line 1098: [McDch_MCM_Received]: No NfeqSet
Line 1138: [McDch_MCM_Received]: Remove Nfreq TID Failed , TID = %d McmMID = %d
Line 1143: [McDch_MCM_Received]: No NfeqSet
Line 1162: [McDch_MCM_Received] MID %i being replaced.)
Line 1179: [McDch_MCM_Received] ERR - ModifyReq (McmMID=%i; LocRepInstId=%x, LocMeasInstId=%x)
Line 1192: TID for MeasControlMsgInst NULL!
Line 1206: [McDch_MCM_Received] MID %i being received So Claer the Accumulated Report
Line 1213: [McDch_MCM_Received]PR4NW_001 - ERR - ModifyReq (McmMID=%i; ExistingMeasType=%i, IncomingMeasType=%i)
Line 1228: TID for MeasControlMsgInst NULL!
Line 1239: [McDch_MCM_Received] MID %i being modified.)
Line 1250: [McDch_MCM_Received] MID %i being terminated.)
Line 1267: [McDch_MCM_Received] MID %i being received So Claer the Accumulated Report
Line 1554: ERR - Validity check: Invalid MeasController state [%i].
Line 1625: MSMTs always Configured even When CM is still not active
Line 1681: Measurement Failure happened on MID(%d)
Line 1690: Validity does not allow MSMT in current state -	MSMT in stopped state.
Line 1762: Measurement Failure happened on MID(%d)
Line 1771: Validity does not allow MSMT in current state - MSMT in stopped state.
Line 1780: MID %d modified, all TGPS deactivated
Line 1794: all TGPS deactivated Measure Type = %d
Line 1806: ERR: All TGPS Already deactivated
Line 1811: ERR - No valid TGPSI for Modify: In Stopped state
Line 1838: ERR - invalid MeasCmd [%i]
Line 1871: [RepEvent1f] :: set RepEvent1fThresholdInfo[EcNo] (mid = %d, Th = %d, EventInst = 0x%x)
Line 1884: [RepEvent1f] :: set RepEvent1fThresholdInfo[Rscp] (mid = %d, Th = %d, EventInst = 0x%x)
Line 1891: [McDch_MCM_Received] ERR - invalid Meas Quantity[RepEvent1f]
Line 1906: [McDch_MCM_Received] Dset Update enabled
Line 1918: [McDch_MCM_Received] ThisMcmCMInfo->TgpsiCount : %d
Line 1932: [McDch_MCM_Received] tgpsi (%i) is not founded in DB or tgpsStatusFlag (%i) is not Active
Line 2014: [rrc_Measurement_StopMeasurement]:There is  Internal MID 0 to be terminated
Line 2025: [McDch_InterFHandoverNotification] ERR - transitioning to McDchHHOPending state
Line 2116: RbControlResponseDoneInd: Wrong IntraF Inst
Line 2163: [rrc_MeasController_priv_ActiveSetChangeActions] RepE1a Inst
Line 2169: [rrc_MeasController_priv_ActiveSetChangeActions] RepE1b Inst
Line 2175: [rrc_MeasController_priv_ActiveSetChangeActions] RepE1c Inst
Line 2181: [rrc_MeasController_priv_ActiveSetChangeActions] RepE1d Inst
Line 2187: [rrc_MeasController_priv_ActiveSetChangeActions] RepE1e Inst
Line 2193: [rrc_MeasController_priv_ActiveSetChangeActions] RepE1f Inst
Line 2200: [rrc_MeasController_priv_ActiveSetChangeActions] RepE1j Inst
Line 2206: [rrc_MeasController_priv_ActiveSetChangeActions] Wrong IntraF Inst: %s
Line 2217: [rrc_MeasController_priv_ActiveSetChangeActions] RepInstId=NULL
Line 2248: [McDch_ActiveSetUpdateNotification] RepInstId=NULL
Line 2281: [McDch_ActiveSetUpdateNotification] RepInstId=NULL
Line 2361: McDch_CellChangeOrderToGsmInProgress: INFO - Dset Update disabled
Line 2425: [McDch_CellChangeOrderToGsmFailed] IntraFRepInstId=NULL
Line 2447: [McDch_CellChangeOrderToGsmFailed] Dset Update enabled
Line 2512: [McDch_CellChangeOrderToGsmFailed] InterFRepInstId=NULL
Line 2689: [rrc_MeasController_ApplyCM] MeasType : %d
Line 2717: [rrc_MeasController_ApplyCM] MID(%d): previously stopped due to IFHHO,Not resuming
Line 2730: [rrc_MeasController_ApplyCM] NeedToUpdate_TgpsReconfigurationCfn_byHHO(%d), NeedToUpdate_TgpsReconfigurationCfn_byMCM(%d), TgpsiUpdated(%d)
Line 2752: [rrc_MeasController_ApplyCM] DoStoppedMeas : %d
Line 2753: [rrc_MeasController_ApplyCM] MeasInstIdList[j] != MCMInstId : %d
Line 2754: [rrc_MeasController_ApplyCM] rrc_Measurement_GetisStopped(...) : %d
Line 2778: [McDch_NewCompressedModeInfoInd] CompressedModeInfoMsg = NULL
Line 2786: [McDch_NewCompressedModeInfoInd] CMStatusInfo_p = NULL
Line 2790: [McDch_NewCompressedModeInfoInd] NewCMII_p->NumOfCMs : %d
Line 2801: [McDch_MCM_Received] tgpsi (%i) is not founded in DB or tgpsStatusFlag (%i) is not Active
Line 2871: McDch_StateTransitionPendingInd: INFO - Same state pending transition (Dch-Dch)
Line 2882: [McDch_StateTransitionPendingInd] Dset Update disabled
Line 2903: [McDch_StateTransitionPendingInd] ERR - transitioning to McDchTransitionPending state
Line 2945: [McFach_MCM_Received] ERR in MCM, Failure msg sent 
Line 2958: TID for MeasControlMsgInst NULL!
Line 3022: MCM saved
Line 3105: [McFach_Sib11_12ChangedNotification] ERR in Sib 12 - not configuring sysinfo MSMTs
Line 3127: [McFach_Sib11_12ChangedNotification] MID %i already setup as MCM, No Action Taken)
Line 3156: TrafficVolMeas  Class or TrafficVolRep Class is NULL
Line 3238: [McFach_CellChangeOrderToGsmInProgress] Saved MCM will be Deleted as we are moving to state %d
Line 3389: [McFach_StateTransitionPendingInd] Same state pending transition [Fach to Fach], MSMTs left alone.
Line 3400: [McFach_StateTransitionPendingInd] Dset Update disabled
Line 3414: ERR - transitioning to McFachTransitionPending state
Line 3440: AGPS Sib reading Failure
Line 3445: AGPS Sib Read. Process MCM
Line 3476: Unable to Generate AgpsSibReadStatus msg
Line 3480: SIB id in SIBDecodeErrorReq is %d
Line 3486: ERR - SIB id in SIBDecodeErrorReq is %d
Line 3581: ERR - Measurement Validity not present
Line 3604: [McPch_NewStateConfigured] ERR in Sib12 - not configuring sysinfo measurements.
Line 3609: ERR transitioning to McFach state
Line 3738: [McPch_NewStateConfigured] Wrong in Validity State.
Line 3753: ERR transitioning to McFach state
Line 3775: [McPch_NewStateConfigured] Saved MCM will be Deleted as we are moving to state %d
Line 3787: ERR - transitioning to McIdle state
Line 3795: Same-state transition (from Pch to Pch)
Line 3803: McPCh target state = CELL_DCH & InterHHO is true
Line 3848: ERR - MSMT Validity not present
Line 3871: [McPch_NewStateConfigured] ERR in Sib 12 - not configuring sysinfo MSMTs.
Line 3876: ERR transitioning to McDch state
Line 3896: [McPch_NewStateConfigured] New Sysinfo IntraF meas added [Mid = %i]
Line 3945: McDch_rrc_SIB12_GetIntraFDCHReportingPresence is TRUE MID %i being replaced.)
Line 3966: [McPch_NewStateConfigured] Dset Update enabled
Line 3995: [McPch_NewStateConfigured] New Sysinfo TrVol meas added [Mid = %i]
Line 4076: [McPch_NewStateConfigured] Wrong in Validity State.
Line 4090: [McPch_NewStateConfigured] Saved MCM will be Processed as we are moving to DCH state
Line 4102: ERR transitioning to McDch state
Line 4107: [McPch_NewStateConfigured] ERR - sib11/12 not present
Line 4111: ERR transitioning to McDch state
Line 4120: ERR: Invalid NewState [%i] from CnxMgr
Line 4216: Transition out of DCH failed/ terminated - resuming measurements.
Line 4228: NFreq is Configured, So Donot Resume the Previous Measurements.
Line 4235: ERR transitioning to McDch state
Line 4366: [McDchTransitionPending_NewStateConfigured] ERR in Sib 12 - not configuring sysinfo MSMTs.
Line 4372: ERR - transitioning to McFach state
Line 4379:  ERR - transitioning to McPch state
Line 4425: TrafficVolMeasInstId or TrafficVolRepInstId is NULL
Line 4539: ERR - transitioning to McFach state
Line 4546: ERR - transitioning to McPch state
Line 4570: ERR - transitioning to McIdle state
Line 4577: ERR - Invalid NewState [%i] from CnxMgr
Line 4637: ERR - transitioning to McIdle state
Line 4805: Transition out of FACH failed/ terminated - resuming MSMTs.
Line 4811: ERR - transitioning to McFach state
Line 4856: [McFachTransitionPending_NewStateConfigured] IntraFRepInstId=NULL
Line 4868: [McFachTransitionPending_NewStateConfigured] Dset Update enabled
Line 4947: [McFachTransitionPending_NewStateConfigured] InterFRepInstId=NULL
Line 5020: [McFachTransitionPending_NewStateConfigured] ERR in Sib12 - not configuring sysinfo MSMTs.
Line 5025: ERR - transitioning to McDch state
Line 5086: [McFachTransitionPending_NewStateConfigured]ERR in Sib 12 - not configuring sysinfo MSMTs.
Line 5091: ERR - transitioning to McDch state
Line 5170: [McFachTransitionPending_NewStateConfigured] MSMTs are already Going on.
Line 5177: [McFachTransitionPending_NewStateConfigured] Wrong in Validity State.
Line 5191: [McFachTransitionPending_NewStateConfigured] Saved MCM will be processed as we are moving to state DCH
Line 5200: ERR - transitioning to McDch state
Line 5254: [McFachTransitionPending_NewStateConfigured] Already Stopped.
Line 5295: [McFachTransitionPending_NewStateConfigured] Wrong in Validity State.
Line 5311: ERR transitioning to McPch state
Line 5332: [McFachTransitionPending_NewStateConfigured] Saved MCM will be Deleted as we are moving to IDLE
Line 5344: ERR - transitioning to McIdle state
Line 5350: ERR: Invalid NewState [%i] from CnxMgr
Line 5373: InterFHHO success(HO Type %d)
Line 5378: [HoTypePriFreqOnly] Resume IntraF/InterF/InterRAT/Eutra Meas
Line 5385: [HO success: %s] Resume InterRAT/Eutra Meas
Line 5405: [HoTypeTddCellParamIdOnly] Not Resume IntraF/InterF/InterRAT/Eutra Meas
Line 5410: [HoTypeTddWorkFreqCellParamIdBoth] Not Resume IntraF/InterF/InterRAT/Eutra Meas
Line 5415: ERR: Invalid HoType %d
Line 5421: ERR transitioning to McDch state
Line 5434: [McDchHHOPending_InterFHandoverSuccess] HHO success.
Line 5462: ERR - transitioning to McDch state
Line 5482: [McDchHHOPending_InterFHandoverFailure] HHO failed, rollback success - resuming MSMTs.
Line 5487: ERR - transitioning to McDch state
Line 5494: [McDchHHOPending_InterFHandoverFailure] HHO failed, rollback failure.
Line 5518: [McDchHHOPending_StateTransitionPendingInd] ERR - Transition to Dch
Line 5548: ERR - transitioning to McDch state
Line 5561: [McDchHHOPending_StateTransitionPendingInd] Dset Update disabled
Line 5579: ERR - transitioning to McDchTransitionPending state
Line 5925: [ConditionallyStopDetSetMeasurements] SysInfoRepInstId=NULL
Line 5932: [ConditionallyStopDetSetMeasurements] Dset Update disabled
Line 6186: [HoTypeTddWorkFreqCellParamIdBoth] Stop IntraF/InterF/InterRAT/Eutra Meas
Line 6214: [rrc_Measurement_StopMeasurement]:There is  Internal MID 0 to be terminated
Line 6220: McDch_InterFHandoverNotification: ERR transitioning to McDchHHOPending state
Line 6237: ERR: Invalid HoType %d
Line 6322: FemtoCell (LAC %d)
Line 6326: MacroCell (LAC %d)
Line 6349: [RepEvent1f] :: clear RepEvent1fThresholdInfo[EcNo] (mid = %d, Th = %d, EventInst = 0x%x)
Line 6366: [RepEvent1f] :: Clear RepEvent1fThresholdInfo[Rscp] (mid = %d, Th = %d, EventInst = 0x%x)
Line 6460: Saved CompressedModeInfo - Tgpsi(%d)
Line 6480: SetULdata: MID 4 is not TVM
Line 6501: TrafficVolumeIndicatorSettingReqd: MID 4 is not TVM
Line 6569: [rrc_Measurement_StopMeasurement]:There is  Internal MID 0 to be terminated
Line 6630: rrc_MeasController_GetCnxMgrIrProcedure: INVALID CnxMgr State
Line 6659: Intrafreq HHO failed & rollback success - resuming MSMTs.
Line 6687: McDch_CellChangeOrderToGsmFailed: IntraFRepInstId=NULL
Line 6709: McDch_CellChangeOrderToGsmFailed: INFO - Dset Update enabled
Line 6762: ERR transitioning to McDch state
Line 6770: Intrafreq HHO failed & rollback failed
Line 6796: McDch_BatonIntraFHandoverCnf IntraFHHO Notification(HO Type %d)
Line 6802: [HoTypeTddCellParamIdOnly] Stop InterRAT/Eutra Meas & Rusume IntraF/InterF Meas
Line 6824: [HoTypeTddCellParamIdOnly]  Resume IntraF/InterF Meas as N-Freq is Not Configured
Line 6868: [HoTypeTddCellParamIdOnly]  Stop IntraF/InterF Meas as N-Freq is Configured
Line 6890: [HoTypeTddWorkFreqCellParamIdBoth] Stop IntraF/InterF/InterRAT/Eutra Meas
Line 6927: ERR: Invalid HoType %d
Line 6938: ERR transitioning to McDch state
