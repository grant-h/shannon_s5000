Line 280: [PchAndDrx] tphy_CSleepManager_InitDone
Line 293: registeredList==NULL
Line 392: InitDone: send failed
Line 396: InitDone: : send succeeded
Line 426: registeredInfo == NULL pointer
Line 433: [PchAndDrx] registerServer: serverId=%d
Line 438: [PchAndDrx] registerServer: serverId=%d listed already
Line 463: [PchAndDrx] deregisterServer: serverId=%d
Line 467: [PchAndDrx] deregisterServer: serverId=%d not found
Line 496: [SKIP]RfbackProcessing_stf : Already Power off
Line 522: [SKIP]RfbackProcessing : Already started Rf back
Line 534: [Warning][PchAndDrx] RfbackProcessing : UE did not camp to any frequency(%d)
Line 551: [PchAndDrx] RfbackProcessing : Try to next subframe, currentSlot=%d
Line 581: [ST%d T_DSDS] PchAndDrx RfConfigDone
Line 609: [PchAndDrx] RfbackFinished: RF back to TDS: at sfn = %d, Sleep type %d
Line 623: current sfn = %d, target StartStopDecodingFsmEventId=%d(RfBackFinished)
Line 650: tphy_CSleepManager_InitDone
Line 666: InitDone: send failed
Line 725: [PchAndDrx] check_left_to_sleep (NextEvent_PCH): pch_sfn=%d, currentSfn=%d, diff_sfn=%d, isSleepPossible=%d
Line 742: [PchAndDrx] check_left_to_sleep (NextEvent_PICH): Pich_Sfn=%d, currentSfn=%d, diff_sfn=%d, isSleepPossible=%d
Line 809: [PchAndDrx] intraFCellReselMeasDone: StartTime %d, CurrentTime %d, OverAllTimeTakeForIntra %d, IntraMeasHistoryAvgTime %d, IntraMeasHistoryCount %d, DetectSpikeInIntraTime %d
Line 819: [PchAndDrx] intraFCellReselMeasDone: pich_done %d, isMarginEnough = %d . meas manager state %d
Line 892: [PchAndDrx] intraFCellReselMeasDone: current sfn = %d, NextEventID=%d
Line 925: [PchAndDrx] interFrequencyCellReselectionMeasDone: current sfn = %d, target StartStopDecodingFsmEventId=%d(interFrequencyCellReselectionMeasDone)
Line 942: Send GSM resel meas done indication delayCount %d
Line 1009: [Warning][PchAndDrx] gsmCellReselectionMeasDone: Not In Proper state to handle!
Line 1015: [PchAndDrx] gsmCellReselectionMeasDone: current sfn = %d, target StartStopDecodingFsmEventId=%d(gsmCellReselectionMeasDone)
Line 1065: ST%d T_DSDS: !!!GSM OFF for DSDS!!!
Line 1079: [PchAndDrx] ST%d HPlus T_DSDS: triggerInternalPauseReq: send MsgId_RfUsePauseReq and suspend PCH configuration
Line 1109: [PchAndDrx] ST%d HPlus T_DSDS: triggerInternalResumeReq: sending eventId (%d)
Line 1136: [PchAndDrx] process: MsgId=%d
Line 1142: [PchAndDrx] Event = ETphyStartStopDecodingFsmEventId_Release
Line 1148: [Warning][PchAndDrx] process: Config Msg received not in idle state
Line 1152: [PchAndDrx] Event = ETphyResourcesConfigurationEventId_Config
Line 1163: [PchAndDrx] Event = ETphyResourcesConfigurationEventId_CellTrackingInd
Line 1170: [PchAndDrx] Event = ETphyResourcesConfigurationEventId_CellTrackingInd
Line 1179: [PchAndDrx] Event = ETphyResourcesConfigurationEventId_ListenArfcnTranAck
Line 1186: [Warning][PchAndDrx] ListenArfcnTransitionAck not expected for Gap Pattern Utilities
Line 1201: [PchAndDrx] Event = ETphyStartStopDecodingFsmEventId_Release srl1rcRoundRobinSkip: %d srl1rcForcedRoundRobinSkip: %d srl1rcIsFirstPICHReject: %d
Line 1207: [Warning][PchAndDrx] process: Rel Msg received not in idle state
Line 1219: [PchAndDrx] Event = ETphyResourcesConfigurationEventId_Release
Line 1251: [PchAndDrx] ST%d T_DSDS: receives Rf Use Response from DSL1RC Message interface
Line 1266: [PchAndDrx] ST%d T_DSDS process: RF pause received from DSL1RC interface
Line 1273: [PchAndDrx] ST%d T_DSDS process: Reset PCH configuration to init
Line 1279: [PchAndDrx] ST%d T_DSDS process: Send RF pause received from DSL1RC interface to StartstopFSM
Line 1286: [Warning][PchAndDrx] ST%d T_DSDS process: RF not in use
Line 1295: [PchAndDrx] ST%d T_DSDS process: RF resume received from DSL1RC interface
Line 1298: [PchAndDrx] ST%d T_DSDS process: Restart PCH configuration
Line 1305: [PchAndDrx] ST%d T_DSDS process: Enable PCH decoding
Line 1316: [PchAndDrx] ST%d T_DSDS process: Send RF resume received from DSL1RC interface to StartstopFSM
Line 1323: ST%d T_DSDS: EUphyPchAndDrxResourcesControllerMsgId_RfUseResumeReq Rf resumed for BGPCH
Line 1330: [Warning][PchAndDrx] ST%d T_DSDS process: MsgId_RfUseResumeReq Rf not Paused, probably released from URRC
Line 1356: [Warning][PchAndDrx] process: Unknown MsgId=%d
Line 1458: [Warning][PchAndDrx] requestCellTracking: cellSfnReqMsg send failure
Line 1463: [PchAndDrx] requestCellTracking: Sfn=%d, TransactId=%d, uarfcn=%d, primaryScrCode=%d
Line 1488: [PchAndDrx] isCellTrackingCompleted: cellTrackingTransactId=%d
Line 1494: [PchAndDrx] isCellTrackingCompleted: Unrecognized cellTrackingTransactId=%d
Line 1534: [Warning][PchAndDrx] cancelCellTracking: cellSfnCancelReqMsg send failure
Line 1540: [PchAndDrx] cancelCellTracking: TransactId=%d, uarfcn=%d, primaryScrCode=%d
Line 1601: delaySleepForTimingAdjust is active before scheduling token
Line 1604: Delay sleep by 3 frame for timing adjustment settling
Line 1621: [PchAndDrx] enableEnDecoding: enters into StartStopDecodingController, target StartStopDecodingFsmEventId=%d(Start)
Line 1695: [Warning][PchAndDrx] sendConfirmationMsg: doesn't expect to send anything other than release Cnf to interRatCoordinator
Line 1705: [Warning][PchAndDrx] sendConfirmationMsg: send failed
Line 1709: [PchAndDrx] sendConfirmationMsg: send succeeded
Line 1758: [Warning][PchAndDrx] sendConfirmationMsg: Wrong MsgId=%d received. Only config and release need confirm
Line 1776: [Warning][PchAndDrx] sendConfirmationMsg: send failed
Line 1780: [PchAndDrx] sendConfirmationMsg: send succeeded
Line 1811: [PchAndDrx] configThalInstances: launch configThalInstancesStf
Line 1896: [PchAndDrx] configThalInstancesStf: isDsReconfig %d state %d
Line 1911: [Warning] DlSlotInfoArray==NULL
Line 1934: [Warning] Insufficient Phychs
Line 1985: [Warning][PchAndDrx] configTHAL(), PICH config failed
Line 1991: [PchAndDrx] configTHAL(), PICH configured for UARFCN = %d, cellParamId = %d
Line 2002: [Warning] Insufficient Phychs
Line 2047: [Warning][PchAndDrx] configTHAL(), SCCPCH config failed
Line 2053: [PchAndDrx] configTHAL(), SCCPCH configured for UARFCN = %d, cellParamId = %d
Line 2066: [Warning][PchAndDrx] configThalInstancesStf: Not enough free Trch-s
Line 2079: [Warning][PchAndDrx] configThalInstancesStf: trCh config failed
Line 2098: [Warning][PchAndDrx] configThalInstancesStf: trCh config failed
Line 2122: [Warning][PchAndDrx] configThalInstancesStf: Not enough free Cctrch-s
Line 2130: [PchAndDrx] configTHAL(), cctrchNr = %d, freeCctrchsBitStream = %d
Line 2171: [Warning][PchAndDrx] configThalInstancesStf: DlCcTrCh config failed
Line 2189: [PchAndDrx] configThalInstancesStf: Invalid state=%d
Line 2208: [Warning][PchAndDrx] configThalInstancesStf: Unknown state=%d
Line 2215: [Warning][PchAndDrx] configThalInstancesStf: ThalCfg Failed
Line 2286: [PchAndDrx] releasePchAndDrxThalInstances
Line 2298: [Warning][PchAndDrx] releasePchAndDrxThalInstances: DlPhychReleaseCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 2341: Free : TphyTimingAdjustTimer
Line 2348: Free : delaySleepForTimingAdjust
Line 2420: PCH decoding is done
Line 2442: [Warning] PCH Done ISR is arrived late
Line 2494: [Warning] PchAndDrx getDrxCycleLength: configMsg==NULL
Line 2524: [Warning][PchAndDrx] getDrxCycleLength: Unknown enum drxCycleLength=%d
Line 2530: [PchAndDrx] getDrxCycleLength: drxCycleLength=%d, PBP = %d
Line 2553: [Warning][PchAndDrx] getDrxCycleLength: configMsg==NULL
Line 2569: [Warning][PchAndDrx] getNGap: Unknown enum NGap=%d
Line 2575: [PchAndDrx] getNgapFrames to cal pch_sfn: nGap= %d from URRC, converted NGap= %d in TPHY
Line 2627: [Warning][PchAndDrx][PCH] SCCPCH (PCH) CONFIG FAIL
Line 2632: [PchAndDrx][PCH] SCCPCH (PCH) CONFIG PASS
Line 2664: [PchAndDrx][PCH] startThalInstances: pichStatus=%d(Dormant/NoSig/Nack/Ack), primaryScrCode = %d
Line 2680: [Warning] DlPhyChStartCommand thal command exec failed: Err Code %d AddErrCode %d
Line 2702: CCTRCH already running
Line 2712: [Warning][PchAndDrx] startThalInstances: DlCctrchEnableCmd exec failed
Line 2750: [PchAndDrx] stopThalInstances
Line 2760: [Warning][PchAndDrx] stopThalInstances: ThalDlPhChStopCommand exec failed
Line 2779: [Warning][PchAndDrx] stopThalInstances: DlCctrchStopCmd exec failed
Line 2787: [PchAndDrx] stopThalInstances: CCTrCH not running
Line 2809: unhandled input
Line 2845: [PchAndDrx] calculatePq Lpi = %08d, Npi = %08d, Np = %08d, Pi = %08d, pich_offset_sfn = %08d
Line 2883: Free : PalTimer_PchDone
Line 2888: Free : PalTimer_PchConfig
Line 2906: [PchAndDrx][PCH] SetPchStartTimer: PchSfn= %d currentSFN= %d diffSfn= %d, startAfter= %dslot
Line 3016: PCH cell ID = %d, BCH cell ID = %d, adjustChips = %d, timingAdjustCmd = %d isTimingAdjustedForServing = %d
Line 3034: TimingAdjustTimer is active before scheduling token
Line 3039: TimingAdjustTimer timeto_timingAdjust (RSNs) = %d, this_Sfn = %d, pagingReceptionSfn = %d, current_RSN = %d 
Line 3093: [PchAndDrx][PICH] start: PhyCh config, start and Pich Enable
Line 3132: [Warning][PchAndDrx] DL Phych Config (PICH) FAIL
Line 3152: [Warning][PchAndDrx] DL Phych (PICH) Start FAIL
Line 3176: [Warning][PchAndDrx] startPICH: DlPichEnableCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 3193: [SKIP][PchAndDrx][PICH] BCH ONGOING SO PICH RECEPTION IS SKIPPED
Line 3213: [PchAndDrx][PICH] Release: pichRakeNr=%d
Line 3225: [Warning][PchAndDrx][PICH] releasePICH: DlPhychReleaseCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 3293: [PchAndDrx][PICH] Start after %dslot: currSlot= %d, PiPosition= %dslot, currSfn= %d, pi_Sfn= %d, diff_Sfn= %d
Line 3339: [PchAndDrx][PCH] scheduleGap: this->decodingStopTimer!=0 before sumbit new token
Line 3346: [Warning][PCH] WAKEUP DELAYED
Line 3350: [PchAndDrx][PCH] scheduleGap: pagingReceptionSfn=%d, currentSfn=%d, pch_tti_end_gap=%d, cctrchNr=%d, cctrchState=%d
Line 3415: [BPLMN]AvialableSleepTime(): currentSFN = %d, nextPICHSFN=%d, NextPchTime=%d, PchToPichSfnDiff=%d, BPLMN PICH=%d, BPLMN PCH=%d
Line 3448: [BPLMN]tdd_isBPLMN=%d, BPLMNavailableTime=%d, StartTime=%d, SleepType=%d, bplmn_available_sfn=%d
Line 3456: [BPLMN]bplmn_available_sfn is less
Line 3497: UpdateNextRFGrantRequestTimeNonSleepCase():currentRSN=%d, WakeUpRsn=%d, currentTime = %d, nextEventStartTime = %d
Line 3584: [PichSkip]UpdateNextRFGrantReqTime(): RemainWakeupOtherSim=%d, RemainWakeup3GT=%d, AbsDiff=[%d < %d], CollisionCnt=%d, NoneCollisionCnt=%d
Line 3592: [PichSkip]UpdateNextRFGrantReqTime(): CheckTriggerPichSkippedWhenWaking=%d
Line 3607: UpdateNextRFGrantReqTime(): currentTime=%d, nextEventStartTime=%d
Line 3637: UpdateTimeToDsL1rc: wakeup indicated to dsl1rc=%d microS, currenttime=%d microUS
Line 3773: [PchAndDrx] CalPichAndPchSfn: pich_Sfn = %d,PagingReceptionSfn =%d, drxCycleLength = %d
Line 3806: [PchAndDrx] CalPichAndPchSfn: NextPagingOccasionSfn = %d,timeToGo  =%d,.this->maxTTI =%d
Line 3812: [PchAndDrx] CalPichAndPchSfn: timeToGo is minus and adjust: reSyncTime=%d but timeToGo=%d.this->maxTTI =%d
Line 3852: [PchAndDrx] CalPichAndPchSfn: drxCycleLength=%d, Ngap=%d, Npch=%d, RepLength=%d
Line 3861: [PchAndDrx] CalPichAndPchSfn: primary Code=%d, primary Code=%d, IMSI(H)=%x, IMSI(L)=%x
Line 3870: [PchAndDrx] CalPichAndPchSfn: currentSfn[%d],initPoSfn[%d],timeToGo[%d],pichSfn[%d],pchSfn[%d],reSyncTime[%d]
Line 3926: [PchAndDrx] scheduleWakeup[DRX]: late for resync because required reSyncTime=%d but timeToGo=%d
Line 3953: [PchAndDrx] scheduleWakeup[DRX]: WakeUpRSN[%d+%d+%d+1=%d], pichFrameBoundaryRsn[%d]
Line 3961: [PchAndDrx] scheduleWakeup[DRX]: this->wakeUpTimer != NULL before submit new token
Line 3975: [PchAndDrx] scheduleWakeup[DRX]: tokenTimestampRsn=%d
Line 3983: [PchAndDrx] scheduleWakeup[NAP]: tokenTimestampRsn=%d
Line 4042: [PchAndDrx] scheduleSleeping: RSN=%d
Line 4077: [PchAndDrx] cancelTokens
Line 4081: Free : PalTimer_PichConfig
Line 4086: Free : PalTimer_PchDone
Line 4091: Free : PalTimer_PchConfig
Line 4096: Free : TphyTimingAdjustTimer
Line 4103: Free : TphyDelayForTimingAdjust
Line 4125: [Warning] message creation failed in RequestMultipathMgmtStopUpdating
Line 4138: [Warning][PchAndDrx] RequestMultipathMgmtStopUpdating: msg send failed
Line 4143: RequestMultipathMgmtStopUpdating
Line 4161: [Warning] message creation failed in RequestMultipathMgmtStartUpdating
Line 4174: [Warning][PchAndDrx] RequestMultipathMgmtStartUpdating: msg send failed
Line 4179: [PchAndDrx] RequestMultipathMgmtStartUpdating: msg send succeeded
Line 4207: [PchAndDrx] eutraCellReselMeasDone at current sfn = %d
Line 4222: [Warning] cdbUpdatingUtility is NULL
Line 4257: [PchAndDrx] triggerMeasurements: startStopFsmState=%d
Line 4266: cdbUpdatingUtility==NULL
Line 4315: [PchAndDrx] triggerMeasurements: serverId=%d, startStopFsmState=%d(Waking), numOfTotalMidServerInDrx=%d, numOfInraFeqMidServer=%d, mid=%d
Line 4366: mgm==NULL
Line 4373: [PchAndDrx] triggerMeasurements: isSparseMeasuremenMode=%d, uPeriodCounterInSparseMeasMode=%d
Line 4407: [PchAndDrx] triggerMeasurements: fddMeasurementController=%d, numOfFddMidServer=%d
Line 4426: [PchAndDrx] triggerMeasurements: isInterFreqMsmtTriggered=%d, isInterFreqMsmtTriggeringConditionMet=%d
Line 4429: [PchAndDrx] triggerMeasurements: serverId=%d, startStopFsmState=%d(Retiring), numOfTotalFddMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 4528: [IRAT U2G][PchAndDrx] triggerMeasurements: serverId=0x%x, startStopFsmState=%d(Retiring), numOfTotalGsmMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 4557: [IRAT U2G][PchAndDrx] triggerMeasurements: numOfTriggeredMidServer %d is different from numOfFddMidServer %d
Line 4563: [IRAT U2G][PchAndDrx] triggerMeasurements: can't find out registeredInfo with gsmMid=%d
Line 4588: [IRAT U2G][PchAndDrx] triggerMeasurements: no GSM mid server to trigger
Line 4594: [IRAT U2G][PchAndDrx] triggerMeasurements: don't trigger GSM measurement in case interFreq is on going
Line 4623: [IRAT U2L][PchAndDrx] triggerMeasurements: serverId=0x%x, startStopFsmState=%d(Retiring), numOfTotalEutraMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 4650: [IRAT T2L][PchAndDrx] triggerMeasurements: numOfTriggeredMidServer %d is different from numOfEutraMidServer %d
Line 4656: [IRAT T2L][PchAndDrx] triggerMeasurements: can't find out registeredInfo with eutraMid=%d
Line 4675: [IRAT T2L][PchAndDrx] triggerMeasurements: no E-UTRA mid server to trigger
Line 4682: [IRAT T2L][PchAndDrx] triggerMeasurements: don't trigger E-UTRA measurement in case interFreq or gsm Meas are on going
Line 4698: Interevene Meas intra done SFN %d, Inter Done SFN %d, Current SFN %d LastIntraMeasToCurrentSfn %d, LastInterMeasToCurrentSfn %d, CurrentSfnToPichDiff %d
Line 4707: [IRAT T2L][PchAndDrx] triggerMeasurements: no E-UTRA mid server to trigger
Line 4735: [PchAndDrx] triggerMeasurements: serverId=%d, startStopFsmState=%d(Waking), numOfTotalMidServerInDrx=%d, numOfInraFeqMidServer=%d, mid=%d
Line 4778: mgm==NULL
Line 4813: [PchAndDrx] triggerMeasurements: fddMeasurementController=%d, numOfFddMidServer=%d
Line 4832: [PchAndDrx] triggerMeasurements: isInterFreqMsmtTriggered=%d, isInterFreqMsmtTriggeringConditionMet=%d
Line 4834: [PchAndDrx] triggerMeasurements: serverId=%d, startStopFsmState=%d(Retiring), numOfTotalFddMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 4912: [PchAndDrx] triggerMeasurements: Unexpected startStopFsmState=%d(I/D/S/W/R/No)
Line 5098: [PchAndDrx][PICH] PichIndIsr: currRSN=%d, PichStatus=%d(D/No/N/A)[%s], startStopFsmState=%d(I/D/S/W/R/No) - handleSleeping called
Line 5118: [PchAndDrx][PICH] PichIndIsr: currRSN=%d, PichStatus=%d(D/No/N/A)[%s], startStopFsmState=%d(I/D/S/W/R/No) - HandleStarting called
Line 5130: [PchAndDrx][PICH] PichIndIsr: currRSN=%d, PichStatus=%d(D/No/N/A)[%s], startStopFsmState=%d(I/D/S/W/R/No)
Line 5148: [PchAndDrx][PICH] PichIndIsr: currRSN=%d, PichStatus=%d(D/No/N/A)[%s], startStopFsmState=%d(I/D/S/W/R/No) - handleSleeping called
Line 5155: [Warning][PchAndDrx][PICH] PichIndIsr: currRSN=%d, PichStatus=%d(D/No/N/A)[%s], startStopFsmState=%d(I/D/S/W/R/No)
Line 5167: [PchAndDrx][PICH] pich_Status: %d, srl1rcRoundRobinSkip: %d
Line 5196: [PchAndDrx][PICH] PichIndIsr: currRSN=%d, PichStatus=%d(D/No/N/A)[%s], startStopFsmState=%d(I/D/S/W/R/No) - handleSleeping called
Line 5203: [PchAndDrx][PICH] PichIndIsr: currRSN=%d, PichStatus=%d(D/No/N/A)[%s], startStopFsmState=%d(I/D/S/W/R/No) - HandleStarting called
Line 5209: [Warning][PchAndDrx][PICH] pichIndIsr: pichStatus=%d(ACK:3), in startStopFsmState=%d(I/D/S/W/R)
Line 5216: [Warning][PchAndDrx][PICH] pichIndIsr: PICH IRQ handler called when PCHAndDRX not configured
Line 5233: [PchAndDrx][PICH] Pich position = %d (even=0, odd=1)
Line 5396: SetIsPchRelease=%d
Line 5412: RejectByDsl1rcStf()
Line 5493: [ST%d T_DSDS] Grant by DSL1RC when waking up 3G
Line 5531: [ST%d T_DSDS][PichSkip] Reject by DSL1RC when waking up 3G: PichWakingRejectCnt %d, PchWakingRejectCnt %d, GrantRcvdInDrx %d
Line 5549: [PichSkip]Set TriggerPichSkiped as %d
Line 5678: [ST%d T_DSDS] PCHrequeststatus: scheduled(%d) requested(%d) deviation from scheduled %d Reject/Grant(0/1)-(%d), uphydsl1rcRFState %d, MeasRetryAfterTheseSfns %d
Line 5728: [ST%d T_DSDS] requestDsl1rcRfAccess sent to DSL1RC interface from %d with cause %d and time %d, result %d
Line 5749: [BPLMN]Irat BPLMN Ind is sent to DSL1RC
Line 5754: [Warning][BPLMN]Unable to send Irat BPLMN Ind to DSL1RC!!
Line 5775: [Warning][ST%d T_DSDS] Unable to send RF release done message to DSL1RC
Line 5784: [ST%d T_DSDS] sendRfReleaseDone sent to DSL1RC interface with %d
Line 5809: [Warning][ST%d T_DSDS] Unable to send RF release done message to DSL1RC
Line 5818: [ST%d T_DSDS] SendRfPauseeCnf sent to DSL1RC interface with %d
