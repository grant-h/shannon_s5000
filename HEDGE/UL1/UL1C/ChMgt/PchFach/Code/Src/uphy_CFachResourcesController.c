Line 266: Instance created for stackId %d
Line 266: Instance created for stackId %d
Line 407: S0  FACH for CTCH config
Line 407: S0  FACH for CTCH config
Line 415: S0  uphy_CFachResourcesController_process: Config without the preceding release
Line 415: S0  uphy_CFachResourcesController_process: Config without the preceding release
Line 435: DSDS:FACH controller receives Rf Use Response from DSLRC Message interface
Line 435: DSDS:FACH controller receives Rf Use Response from DSLRC Message interface
Line 441: S0  DSDS:uphy_CFachResourcesController_process: RF pause received from DSLRC interface
Line 441: S0  DSDS:uphy_CFachResourcesController_process: RF pause received from DSLRC interface
Line 447: S0  DSDS: uphy_CFachResourcesController_process: Reset FACH configuration to init
Line 447: S0  DSDS: uphy_CFachResourcesController_process: Reset FACH configuration to init
Line 469: S0  uphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 469: S0  uphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 473: S0  3G3G DSDS: uphy_CFachResourcesController_process: Pause received in endecoding state
Line 473: S0  3G3G DSDS: uphy_CFachResourcesController_process: Pause received in endecoding state
Line 482: S0  DSDS:uphy_CFachResourcesController_process: RF not in use
Line 482: S0  DSDS:uphy_CFachResourcesController_process: RF not in use
Line 492: S0  DSDS:uphy_CFachResourcesController_process: RF resume received from DSLRC interface
Line 492: S0  DSDS:uphy_CFachResourcesController_process: RF resume received from DSLRC interface
Line 495: S0  DSDS: uphy_CFachResourcesController_process: Restart FACH configuration
Line 495: S0  DSDS: uphy_CFachResourcesController_process: Restart FACH configuration
Line 501: S0  DSDS: uphy_CFachResourcesController_process: Enable FACH decoding
Line 501: S0  DSDS: uphy_CFachResourcesController_process: Enable FACH decoding
Line 520: S0  DSDS: uphy_CFachResourcesController_process: Restart FACH decoding
Line 520: S0  DSDS: uphy_CFachResourcesController_process: Restart FACH decoding
Line 537: S0  DSDS: EUphyFachResourcesControllerMsgId_RfUseResumeReq Rf Pause not enabled probably released from URRC
Line 537: S0  DSDS: EUphyFachResourcesControllerMsgId_RfUseResumeReq Rf Pause not enabled probably released from URRC
Line 549: S0  probably oustanding transaction Id :FachResourcesController_ptr-> configMsg=0 probably oustanding transaction Id
Line 549: S0  probably oustanding transaction Id :FachResourcesController_ptr-> configMsg=0 probably oustanding transaction Id
Line 572: S0  ListenArfcnTransitionAck not expected for Gap Pattern Utilities
Line 572: S0  ListenArfcnTransitionAck not expected for Gap Pattern Utilities
Line 608: S0  gphy_IratGsmOff() called as no OutstandingGsmCellReselMeasRequests are present
Line 608: S0  gphy_IratGsmOff() called as no OutstandingGsmCellReselMeasRequests are present
Line 620: S0  No: Of OutstandingGsmCellReselMeasRequests = %d
Line 620: S0  No: Of OutstandingGsmCellReselMeasRequests = %d
Line 631: process - unknown msgId
Line 631: process - unknown msgId
Line 709: FachController: previous [UARFCN PSC]=[%d %d], new [UARFCN PSC]=[%d %d]
Line 709: FachController: previous [UARFCN PSC]=[%d %d], new [UARFCN PSC]=[%d %d]
Line 713: FachController: isRrcConfigBchExist %d
Line 713: FachController: isRrcConfigBchExist %d
Line 732: S0  Reference cell changed to rlNr=%d, PSC=%d
Line 732: S0  Reference cell changed to rlNr=%d, PSC=%d
Line 742: S0  RlReferenceConfigCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 742: S0  RlReferenceConfigCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 759: S0  Unable to set a new reference cell in MPDB: rlNr=%d, PSC=%d
Line 759: S0  Unable to set a new reference cell in MPDB: rlNr=%d, PSC=%d
Line 776: S0  Update Framework SFN: oldSfn=%d, newSfn=%d
Line 776: S0  Update Framework SFN: oldSfn=%d, newSfn=%d
Line 805: S0  cellSfnReqMsg send failure
Line 805: S0  cellSfnReqMsg send failure
Line 811: S0  ### Critical Error cnfMsg = NULL (%d)
Line 811: S0  ### Critical Error cnfMsg = NULL (%d)
Line 931: send
Line 931: send
Line 937: S0  ### Critical Error cellSfnCancelReqMsg = NULL (%d)
Line 937: S0  ### Critical Error cellSfnCancelReqMsg = NULL (%d)
Line 968: RSN=%d:FachController enableEnDecoding: Sfn=%d
Line 968: RSN=%d:FachController enableEnDecoding: Sfn=%d
Line 993: uphy_CFachResourcesController_enableEnDecoding: change to wakeup SFN  = %d
Line 993: uphy_CFachResourcesController_enableEnDecoding: change to wakeup SFN  = %d
Line 1008: uphy_CFachResourcesController_enableEnDecoding: start level-1 scheduling in wakingDuring
Line 1008: uphy_CFachResourcesController_enableEnDecoding: start level-1 scheduling in wakingDuring
Line 1037: uphy_CFachResourcesController_enableEnDecoding: No short CTCHPeriod, CTCH decoding token to be scheduled in schedulewakeup
Line 1037: uphy_CFachResourcesController_enableEnDecoding: No short CTCHPeriod, CTCH decoding token to be scheduled in schedulewakeup
Line 1105: S0  DSDS: Reject received while updating reason to PS for FACH :: isRfInUseStatus %d
Line 1105: S0  DSDS: Reject received while updating reason to PS for FACH :: isRfInUseStatus %d
Line 1174: RSN=%d:FachController Send success: Sfn=%d, Uarfcn=%d, scrCode=%d
Line 1174: RSN=%d:FachController Send success: Sfn=%d, Uarfcn=%d, scrCode=%d
Line 1191: RSN=%d:FachController SendFail: Sfn=%d
Line 1191: RSN=%d:FachController SendFail: Sfn=%d
Line 1205: S0  uphy_CFachResourcesController_sendConfirmationMsg: processing CUPHY_BG_PCH_RESOURCES_CONFIG_REQ (%x)
Line 1205: S0  uphy_CFachResourcesController_sendConfirmationMsg: processing CUPHY_BG_PCH_RESOURCES_CONFIG_REQ (%x)
Line 1218: RSN=%d:FachController Released: Sfn=%d, Uarfcn=%d, scrCode=%d
Line 1218: RSN=%d:FachController Released: Sfn=%d, Uarfcn=%d, scrCode=%d
Line 1259: S0  FACH for CTCH release by inter RAT coordinator
Line 1259: S0  FACH for CTCH release by inter RAT coordinator
Line 1273: Fach controller doesn't expect to send anything other than release Cnf to interRatCoordinator
Line 1273: Fach controller doesn't expect to send anything other than release Cnf to interRatCoordinator
Line 1283: send
Line 1283: send
Line 1288: S0  ### Critical Error cnfMsg = NULL (%d)
Line 1288: S0  ### Critical Error cnfMsg = NULL (%d)
Line 1297: confirmMsg is NULL in sendConfirmationMsg
Line 1297: confirmMsg is NULL in sendConfirmationMsg
Line 1312: S0  FACH for CTCH config CNF(cctrchNr =%d)
Line 1312: S0  FACH for CTCH config CNF(cctrchNr =%d)
Line 1340: S0  Stop CcTrCh - uhal_Cmd_exec
Line 1340: S0  Stop CcTrCh - uhal_Cmd_exec
Line 1358: S0  FACH for CTCH release CNF
Line 1358: S0  FACH for CTCH release CNF
Line 1377: only Config and release need confirm
Line 1377: only Config and release need confirm
Line 1392: send
Line 1392: send
Line 1556: S0  UhalConfig in DsSuspend State: Returning Token
Line 1556: S0  UhalConfig in DsSuspend State: Returning Token
Line 1599: S0  engagedRlPhychLinksArray == NULL pointer
Line 1599: S0  engagedRlPhychLinksArray == NULL pointer
Line 1611: S0  No more free RL-s
Line 1611: S0  No more free RL-s
Line 1632: S0  rakeRl config failed
Line 1632: S0  rakeRl config failed
Line 1664: S0  Not enough free Rake-s
Line 1664: S0  Not enough free Rake-s
Line 1665: FachController: release phychannnel[0], current freeRakesBitStream 0x%x 
Line 1665: FachController: release phychannnel[0], current freeRakesBitStream 0x%x 
Line 1681: S0  PchAndDrx releasePchAndDrxUhalInstances: DlPhychReleaseCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 1681: S0  PchAndDrx releasePchAndDrxUhalInstances: DlPhychReleaseCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 1717: S0  rakePhyCh config failed
Line 1717: S0  rakePhyCh config failed
Line 1737: S0  Not enough free Rake-s
Line 1737: S0  Not enough free Rake-s
Line 1754: S0  rakePhyCh config failed
Line 1754: S0  rakePhyCh config failed
Line 1787: S0  rlPhyCh config failed
Line 1787: S0  rlPhyCh config failed
Line 1817: S0  Not enough free Trch-s
Line 1817: S0  Not enough free Trch-s
Line 1834: S0  trCh config failed
Line 1834: S0  trCh config failed
Line 1846: S0  trCh config failed
Line 1846: S0  trCh config failed
Line 1859: S0  trCh config CurrentTrChIndex = %d
Line 1859: S0  trCh config CurrentTrChIndex = %d
Line 1863: S0  ***trCh config trchNr = %d freeTrchsBitStream %x
Line 1863: S0  ***trCh config trchNr = %d freeTrchsBitStream %x
Line 1872: S0  trCh config failed
Line 1872: S0  trCh config failed
Line 1895: S0  Not enough free Cctrch-s
Line 1895: S0  Not enough free Cctrch-s
Line 1947: S0  DlCcTrCh config failed
Line 1947: S0  DlCcTrCh config failed
Line 1964: S0  Config Uhal - invalid state %d
Line 1964: S0  Config Uhal - invalid state %d
Line 1985: S0  Config Uhal - invalid state %d
Line 1985: S0  Config Uhal - invalid state %d
Line 1993: S0  Fach UhalCfg Failed
Line 1993: S0  Fach UhalCfg Failed
Line 2083: RSN=%d:uphy_CFachResourcesController_startUhalInstances: startFachSfn=%d : startFachRsn=%d
Line 2083: RSN=%d:uphy_CFachResourcesController_startUhalInstances: startFachSfn=%d : startFachRsn=%d
Line 2094: S0  Enable CcTrCh - uhal_Cmd_exec
Line 2094: S0  Enable CcTrCh - uhal_Cmd_exec
Line 2174: FachController scheduleDecodingPreparation: currentRSN=%d: FACH decode will prepared at timeStampRsn=%d and Sfn=%d, decode start at listenSfn=%d
Line 2174: FachController scheduleDecodingPreparation: currentRSN=%d: FACH decode will prepared at timeStampRsn=%d and Sfn=%d, decode start at listenSfn=%d
Line 2229: FachController scheduleGap: C_RNTI(High 32bits)=0x%08x, C_RNTI(Low 32bits)=0x%08x, M_REP=%d, maxTTI=%d, init FMO=%d, FMO cycle=%d
Line 2229: FachController scheduleGap: C_RNTI(High 32bits)=0x%08x, C_RNTI(Low 32bits)=0x%08x, M_REP=%d, maxTTI=%d, init FMO=%d, FMO cycle=%d
Line 2239: FachController scheduleGap: RSN=%d, gapSfn(FMO)=%d, gapRsn=%d, timeToGo=%d, Fach Occasion=%d, timingOffsetSlots=%d, decodePreparation=%d
Line 2239: FachController scheduleGap: RSN=%d, gapSfn(FMO)=%d, gapRsn=%d, timeToGo=%d, Fach Occasion=%d, timingOffsetSlots=%d, decodePreparation=%d
Line 2268: S0  uphy_CFachResourcesController_scheduleWakeup
Line 2268: S0  uphy_CFachResourcesController_scheduleWakeup
Line 2285: S0  uphy_CFachResourcesController_scheduleSleeping
Line 2285: S0  uphy_CFachResourcesController_scheduleSleeping
Line 2301: S0  uphy_CFachResourcesController_resynch
Line 2301: S0  uphy_CFachResourcesController_resynch
Line 2369: FachController VGMNotification: slotsUntil=%d, current RSN=%d, FMO RSN=%d
Line 2369: FachController VGMNotification: slotsUntil=%d, current RSN=%d, FMO RSN=%d
Line 2442: FachController vgmFachOccasionGap: current RSN=%d, current sfn=%d, FMO sfn=%d, FMO cfn=%d
Line 2442: FachController vgmFachOccasionGap: current RSN=%d, current sfn=%d, FMO sfn=%d, FMO cfn=%d
Line 2579: S0  uphy_CFachResourcesController triggerMeasurements
Line 2579: S0  uphy_CFachResourcesController triggerMeasurements
Line 2606: S0  DSDS:Resume CcTrCh - uhal_Cmd_exec failed
Line 2606: S0  DSDS:Resume CcTrCh - uhal_Cmd_exec failed
Line 2611: S0  DSDS: Resume CcTrCh since Resume received from DSLRC
Line 2611: S0  DSDS: Resume CcTrCh since Resume received from DSLRC
Line 2621: [Fach Release] SendFachReleaseAfterIratMeas
Line 2621: [Fach Release] SendFachReleaseAfterIratMeas
Line 2639: S0  uphy_CFachResourcesController_triggerInternalPauseReq: triggering EUphyResourcesConfigurationEventId_RfUsePauseReq
Line 2639: S0  uphy_CFachResourcesController_triggerInternalPauseReq: triggering EUphyResourcesConfigurationEventId_RfUsePauseReq
Line 2656: S0  uphy_CFachResourcesController_triggerInternalResumeReq: triggering EUphyResourcesConfigurationEventId_RfUseResume
Line 2656: S0  uphy_CFachResourcesController_triggerInternalResumeReq: triggering EUphyResourcesConfigurationEventId_RfUseResume
