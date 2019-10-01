Line 252: BCHController:ARRAY FREED sib_array_ptr = %d
Line 278: FachController: CheckAndSelectMeasGap RepLength = %d, RepPeriod = %d, isFachOccasion = %d
Line 316: FachController: process(), Received message = %d
Line 327: FachController: process(), Stopping MGM FACH Occasions
Line 333: FachController: process(), Config received without the preceding release
Line 350: [IRAT U2G]  FACH GSM GAP NOT STARTED
Line 360: ST%d T_DSDS:FACH controller receives Rf Use Response from DSL1RC Message interface
Line 366: ST%d T_DSDS:uphy_CFachResourcesController_process: RF pause received from DSL1RC interface
Line 372: ST%d T_DSDS: tphy_CFachResourcesController_process: Reset FACH configuration to init
Line 385: tphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 387: ST%d HPlus T_DSDS: tphy_CFachResourcesController_process:Pause received in endecoding state
Line 394: ST%d T_DSDS:tphy_CFachResourcesController_process: RF not in use
Line 404: ST%d T_DSDS:tphy_CFachResourcesController_process: RF resume received from DSL1RC interface
Line 407: ST%d T_DSDS: tphy_CFachResourcesController_process: Restart FACH configuration
Line 417: ST%d Hplus T_DSDS: tphy_CFachResourcesController_process.Resume received
Line 422: ST%d T_DSDS: tphy_CFachResourcesController_process: Enable FACH decoding
Line 430: ST%d T_DSDS: uphy_CFachResourcesController_process: Restart FACH decoding
Line 437: ST%d Hplus T_DSDS: tphy_CFachResourcesController_process.Resume received
Line 448: ST%d T_DSDS: ETphyFachResourcesControllerMsgId_RfUseResumeReq Rf Pause not enabled probably released from URRC
Line 460: FachController: process(), CellTrackingInd, Error reading config message
Line 471: FachController: process(), FACH Measurement Occasion is configured
Line 477: FachController: process(), FACH Measurement Occasion is not configured
Line 491: FachController: process(), ListenArfcnTransitionAck not expected for gap pattern utilities
Line 502: Activation time received in Fach Release, activation time = %d
Line 546: FachController: process(), Release, FMO is configured
Line 552: FachController: process(), Release, FMO is not configured
Line 555: FachController: process(), Stopping MGM FACH Occasions
Line 568: [IRAT U2G]  FACH GSM GAP NOT STARTED
Line 576: FachController: process(), Unknown message
Line 654: FachController: requestCellTracking(), current DL UARFCN = %d, configured UARFCN = %d, current DL pScrcode = %d, configured pScrCode = %d
Line 679: FachController: requestCellTracking(), Error sending message to CellSFNServer
Line 748: send
Line 771: FachController: enableEnDecoding(), RSN = %d, SFN = %d
Line 791: [IRAT U2G] GSM midserver available
Line 797: [IRAT U2G] No GSM midserver or already Started
Line 810: FachController: enableEnDecoding(), M_REP = %d, C-RNTI(H) = %x, C-RNTI(L) = %x, Max TTI = %d
Line 829: FachController: enableEnDecoding(), FACH Measurement Occasion is not configured
Line 884: FachController: uSfnIdx %d bIsgapAvailable %d matched count %d sfn_index_to_read 0x%x
Line 888: FachController: TDMgapOccasion(), currentCfn= %d ,writing to buffer value %d ,StartFrame
Line 892: FachController: TDMgapOccasion(), currentCfn= %d ,writing to buffer value %d ,MiddleFrame
Line 895: FachController: TDMgapOccasion(), currentCfn= %d ,writing to buffer value %d ,EndFrameFrame
Line 932: FachController: TDMgapOccasionCalc(), RSN = %d, TDMgap RSN = %d,tdmGapStart =%d,currentCfn= %d
Line 980: INFO tphy_IsUlRachReadyForData %08d, isRachReady %d
Line 1025: FachController: sendConfirmationMsg(), Config success, RSN = %d, SFN = %d, UARFCN = %d, scrCode = %d
Line 1046: FachController: sendConfirmationMsg(),  Config failure, RSN = %d, SFN = %d
Line 1058: FachController: sendConfirmationMsg(), Release, RSN = %d, SFN = %d, UARFCN = %d, scrCode = %d
Line 1085: Fach controller doesn't expect to send anything other than release Cnf to interRatCoordinator
Line 1094: send
Line 1105: confirmMsg is NULL in sendConfirmationMsg
Line 1135: only Config and release need confirm
Line 1151: send
Line 1321: FACH configThalInstancesStf state %d, isDsReconfig %d
Line 1339: DlSlotInfoArray==NULL
Line 1359: Insufficient Phychs
Line 1406: FachController: configTHAL(), SCCPCH config failed
Line 1412: FachController: configTHAL(), SCCPCH configured for UARFCN = %d, cellParamId = %d
Line 1432: Not enough free Trch-s
Line 1449: trCh config failed
Line 1462: trCh config failed
Line 1485: trCh config failed
Line 1507: Not enough free Cctrch-s
Line 1515: DpchController: configTHAL(), cctrchNr = %d, freeCctrchsBitStream = %d
Line 1555: DlCcTrCh config failed
Line 1573: Config Thal - invalid state %d
Line 1575: Config Thal - invalid state
Line 1597: Config Thal - unknown state %d
Line 1599: Config Thal - unknown state
Line 1609: FachController: THAL config failed
Line 1709: FachController: startThalInstances(), RSN = %d, SFN = %d, slot = %d
Line 1720: Enable CcTrCh - thal_CCmd_exec
Line 1797: FachController: scheduleDecodingPreparation(), RSN = %d, FACH decoder will be prepared at RSN = %d
Line 1800: FachController: scheduleDecodingPreparation(), SFN = %d, FACH decoding will start at SFN = %d
Line 1803: FachController: scheduleDecodingPreparation(), FACH decoding preparation will start at SFN = %d
Line 1848: FachController: scheduleGap(), RSN = %d, FMO RSN = %d, SFN = %d, FMO SFN = %d
Line 1868: FachController: scheduleWakeup()
Line 1886: tphy_CFachResourcesController_scheduleSleeping
Line 1945: FachController: MGMNotification(), RSN = %d, FMO RSN = %d
Line 1948: FachController: MGMNotification(), slotsUntil = %d
Line 1966: FachController: MGMNotification(), MGMFachOccasionGap() will be called at RSN = %d
Line 1995: FachController: mgmFachOccasionGap(), RSN = %d, FMO RSN = %d, SFN =%d, FMO SFN = %d
Line 2052: FachController: mgmFachOccasionGap(), FMO CFN = %d, Max TTI = %d ms bIsgapAvailable %d uSfnIdx %d uFrameIdx %d sfn_index_to_read 0x%x
Line 2171: tphy_CFachResourcesController triggerMeasurements
Line 2183: FachController: getFachGapSFN(), FMO SFN = %d
Line 2200: FachController: TDMgapOccasionSTF(), tdmGapStart = %d, repLength = %d,repPeriod =%d,currentCfn= %d
Line 2292: Fach release acted upon at time = %d
Line 2310: FachController: process(), Release, FMO is configured
Line 2319: FachController: process(), Release, FMO is not configured
Line 2322: FachController: process(), Stopping MGM FACH Occasions
Line 2335: [IRAT U2G]  FACH GSM GAP NOT STARTED
Line 2367: ST%d T_DSDS:Resume CcTrCh - thal_Cmd_exec failed
Line 2372: ST%d T_DSDS: Resume CcTrCh since Resume received from DSL1RC
