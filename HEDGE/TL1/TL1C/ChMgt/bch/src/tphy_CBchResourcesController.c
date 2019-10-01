Line 228: startStopFsm==NULL
Line 284: BchController: ConfigureThalInstance Memory allocation failed
Line 298: BchController: PCCPCH config failed
Line 304: BchController: PCCPCH configured for UARFCN = %d, cellParamId = %d
Line 348: WARNING !!! , campedUarfcn = %d
Line 356: BCH offline when PCH configured UARFCN = %d, bchCellId = %d, pchCellId = %d
Line 368: BCH offline when FACH configured UARFCN = %d, bchCellId = %d, fachCellId = %d
Line 448: restorePreviousBchConfig(), bchReqMsg == NULL 
Line 469: restorePreviousBchConfig(), uarfcn =%d, primaryScrCode = %d, current RSN = %d
Line 476: restorePreviousBchConfig(), send to BCH controller fail
Line 492: restorePreviousBCHConfig_ConfigToken()
Line 509: restorePreviousBCHConfig_ConfigToken(), bchConfiguredForSIB = %d, isFACHConfig = %d,isPchConfig = %d
Line 541: BCHController[%d]: UARFCN = %d, pScrCode = %d, Camping Cell Config msg received from srcId = %d
Line 582: [BCHController][Config]::uarfcn=%d, ServcellInfo.uarfcn=%d
Line 615: BCHController: Config by URRC, Stored value - UARFCN = %d , pScrCode = %d, bchId = %d, SotredschedulerStateForBgPch = %d
Line 631: BCH[%d] [%d %d]Non-Camping Cell Config msg received for ScrId=%d
Line 678: [BCHController][RfUseRsp]::uarfcn=%d, ServcellInfo.uarfcn=%d
Line 682: [BCH RfUseRsp Removal hold] uarfcn=%d, ServcellInfo.uarfcn=%d
Line 695: ST%d T_DSDS:BCH controller receives Rf Use Response from DSL1RC Message interface
Line 703: ST%d T_DSDS:CBchResourcesController_process: RF pause received from DSL1RC interface:Clearing Cell Synchroniser
Line 742: Cancelling timingAdjustTimer token for BCH pause
Line 752: ST%d T_DSDS: tphy_CBchResourcesController_process: Pause in  BCH configurationt
Line 769: ST%d T_DSDS:BCH process: Pause received but RF not in use. So send Rf release.
Line 785: ST%d T_DSDS: RF resume received from DSL1RC interface
Line 789: [BCH RfUseResumeReq Removal hold] uarfcn=%d, ServcellInfo.uarfcn=%d
Line 797: ST%d T_DSDS:Restart BCH configuration
Line 805: ST%d Hplus T_DSDS: bchResourcesController_ptr Resume received
Line 810: ST%d T_DSDS: bchResourcesController_ptr Enable BCH decoding
Line 829: ST%d Hplus T_DSDS: bchResourcesController_ptr: Resume received
Line 866: ST%d T_DSDS: Restart BCH decoding
Line 874: ST%d T_DSDS:RF pause not enabled ,probably released from URRC
Line 909: BCHController[%d]: Release msg received for SrcId = %d does not match configMsg SrcId = %d
Line 912: BCHController[%d]: Automatic positive release CNF
Line 923: BCHController[%d]: Release msg received for SrcId = %d, isInterReselAttempted = %d, isIntraAttempted (in PCH) = %d
Line 935: BCHController: Clear bchConfiguredForSiB flag
Line 945: Free: TphyTimingAdjustTimer
Line 958: BCHController: NOTHING TO RELEASE: Release msg received for SrcId = %d
Line 973: BCH[%d] Release leaving Rl msg received for ScrId=%d does not match configMsg SrcId=%d - automatic positive release CNF
Line 991: Clear bchConfiguredForSiB flag
Line 994: BCH[%d] Release leaving Rl msg received for ScrId=%d
Line 1002: BCHController: NOTHING TO RELEASE Release for SrcId = %d
Line 1026: BCHController: Unexpected MsgId = %d
Line 1070: isSfnAcquired %d, bchConfiguredForSiB %d, state %d
Line 1078: BCHController: rscpValidateMsg == NULL pointer
Line 1113: BCHController: Problem in sending RSCP validation req message to SearcherController
Line 1124: Measurement Utility :requestOneCellSynchro:cellSynchroReqMsg == NULL pointer
Line 1143: BCHController: Problem in sending RcellSynchroReqMsg req message to SearcherController
Line 1181: BCHController: detected cell from cell tracking midambleId = %d
Line 1247: BCHController: enableEnDecoding(), CcTrChNum = %d, isCellSFNRequested = %d
Line 1255: BCHController: CcTrCh command enable exec failed
Line 1287: BCHController: sendConfirmationMsg(), isReferenceRl = %d, bchConfiguredForSiB = %d
Line 1312: BCHController: sendConfirmationMsg BCH config flag=  %d, tdd_isBPLMN = %d, MSG ID = %d
Line 1327: BCH CS: Clear 
Line 1352: Mem Freed BchSchedulingInformation = %d 
Line 1359: Mem Freed  SfnArrayPointer = %d 
Line 1366: BCHController: End time = %d, Overall time taken in millisecond= %d, Over all GAP = %d
Line 1398: BCHController: sendConfirmationMsg is BG PCH = %d, StateForBgPch = %d
Line 1409: isInterReselAttempted = %d, isIntraAttempted (in PCH) = %d
Line 1431: BCHController: Start time = %d
Line 1438: BCHController:ARRAY FREED sib_array_ptr = %d
Line 1453: BCHController: sendConfirmationMsg(), Unexpected MsgId = %d
Line 1478: BCHController: sendConfirmationMsg(), Unexpected MsgId = %d
Line 1501: BCHController: sendConfirmationMsg(), Unexpected MsgId = %d
Line 1520: BCHController: sendConfirmationMsg(), Unexpected MsgId = %d
Line 1528: BCHController: sendConfirmationMsg(), Unexpected request for confirmation message from %d
Line 1557: BPLMN BCH CONTROLLER UNEXPECTED MESSAGE %d
Line 1571: BCHController: sendConfirmationMsg(), Failure in sending message
Line 1674: BchController: configThalInstancesStf(), No instance of EHalDlPhychProcId
Line 1680: DlSlotInfoArray %d, isDsReconfig %d
Line 1693: BchController: THAL Config, Unable to allocate memory for DlSlotInfoArray, UARFCN = %d, ScrCode = %d
Line 1701: BchController: THAL Config, UARFCN = %d, ScrCode = %d
Line 1718: BchController: PhyCh Config - Insufficient PhyChs
Line 1729: BchController: PCCPCH config failed
Line 1739: BchController: PCCPCH configured for UARFCN = %d, cellParamId = %d
Line 1753: BchController: TrCh Config - Insufficient TrChs
Line 1780: BchController: TrCh Config - config failed
Line 1794: BchController: TrCh Config - TrCh Num = %d
Line 1809: BchController: CcTrCh Config - Insufficient CcTrChs
Line 1845: BchController: CcTrCh Config - Config failed
Line 1855: BchController: CcTrCh Config - CcTrCH Num = %d
Line 1868: BchController: configThalInstancesStf(): Invalid state = %d
Line 1925: BchController: configThalInstancesStf(): Invalid state = %d
Line 1934: BchController: THAL config failed
Line 2042: BchController:tphy_CBchResourcesController_StartThalInstance primaryScrCode  %d
Line 2046: DlPhyChStartCommand thal command exec failed: Err Code %d AddErrCode %d
Line 2078: THAL command exec failed
Line 2118: BchController:IgnoreOrAccpetPause IgnorePause %d PauseIgnoreCount %d, BchFailedDecodingRate %d
Line 2166:  bchCofingToken = %d, bchConfiguredForSiB =%d
Line 2176: IsBchActive: BCH[%d] active, Is Active = %d, Is RF Pause = %d
Line 2260: Bch stopThalInstances: RSN=%d, 
Line 2282: Bch stopUhalInstances: DlCctrchStopCmd exec failed
Line 2290: Bch stopUhalInstances: CCTrCH not running
Line 2307: ST%d T_DSDS: BCH - Unable to send RF release done message to DSL1RC
Line 2312: ST%d T_DSDS:BCH - sendRfReleaseDone to DSL1RC interface from %d
Line 2412: [ST%d T_DSDS] BchResources RfConfigDone
Line 2479: DISCRETE BCH MIB currentSfn = %d, target sfn = %d diff = %d, NumberOfSlotsToTargetSfn = %d, CurrentSlot = %d
Line 2514: T_DSDS BCH request: scheduled time %u requested time %u deviation from scheduled %u Reject/Grant(0/1)-(%d), uphydsl1rcRFState %d
Line 2542: SendRequestToDsl1rc to dsl1rc=%u microS, currenttime=%u microUS, NumberOfSlotsToNextEvent = %d
Line 2563: CancelAllTokens DiscreteBchStartDecode= %d, GapStartToken = %d
Line 2654: Sorted Array Value = %d
Line 2675: Mem allocted BchSchedulingInformation fail!
Line 2680: Mem allocted BchSchedulingInformation = %d 
Line 2684: Already allocated BchSchedulingInformation = %d 
Line 2691: Mem allocted SfnArrayPointer = %d 
Line 2701: ProcessSchedulingInformation  NumberOfSibsToBeAdded = %d NumberOfSibsToBeRemoved = %d
Line 2727: Modify Request SIB type = %d Rep = %d, offset info = %d
Line 2763:  SIB to be removed SIBType = %d, (*RRC_SibToBeRemovedLinkedList) = %d
Line 2827:  BCH CONFIG WITH ONLY MIB SCHEDULING INFO
Line 2865:  UpdateSfnArray IsRfReject = %d modified reference =%d, current sfn %d
Line 2884: UpdateSfnArray Type = %d Rep = %d, offset info = %d, NextSfn = %d
Line 2948: SetReceivedSegment  SibRecievedSfn = %d, Number of elements = %d
Line 2965: SetReceivedSegment  SEGMENT Reset type = %d, SegmentOffsetInfo = %d
Line 2981: SetReceivedSegment SIB INFO type = %d, NumberOfUnreceivedSegments = %d
Line 3016: GetTargetRsnWithRfComp TargetSfn=%d, Current SFN %d, NumberOfSlotsToTargetSfn %d, CurrentSlot %d
Line 3043: DISCRETE BCH Schedule BCH TargetSfn = %d Gap in ms =%d, 
Line 3048:  !!!! ASSERT WARNING !!!!!DiscreteBchStartDecode  = %d
Line 3055: Debug DiscreteBchStartDecode =%d
Line 3080: DISCRETE BCH Schedule PostStartBchDecoding current RSN =%d,DiscreteBchStartDecode = %d
Line 3140: DISCRETE BCH NextSfnToBeDecoded = %d, Current SFN = %d, SfnToBeReceivedToCurrentSfnDiff = %d 
Line 3174: ScheduleGapStart GapStartSfn= %d, Current Sfn = %d, Remaining slots = %d, CurrentSlot %d
Line 3180:  !!!! ASSERT WARNING !!!!!
Line 3241: FindGap Is Gap Found = %d, start index = %d, End index = %d, SFN Lenght = %d, TotalNumberOfSegments = %d
Line 3281:  ScheduleGapStart Needs to be Rescheduled
Line 3302:  MessageQueue Event = %d, is Held = %d, Address = %d 
Line 3326:  PostHeldEvent EventHeld = %d
Line 3357:  %d Event will be processed 
Line 3382:  Event not found EventHeld = %d
Line 3423:  %d Event will be Held 
Line 3504: IfSibsAreScheduled NoOfSfnToNextSib %d,SortedSfnArray %d, current SFN %d
Line 3522: DISCRETE BCH IDLE EVENTS , ID = %d, SFN = %d
Line 3558:  DBCH: Dont run BCH as no PS configuration
Line 3602:  !!!! ASSERT WARNING !!!!!
Line 3619: DISCRETE BCH DECODING EVENTS , ID = %d, SFN = %d
Line 3773:  !!!! ASSERT WARNING !!!!!
Line 3790: DISCRETE BCH GAP EVENTS , ID = %d, SFN = %d
Line 3899:  !!!! ASSERT WARNING !!!!!
Line 3916: DISCRETE BCH RF PASUE EVENTS , ID = %d, SFN = %d
Line 4009:  !!!! ASSERT WARNING !!!!!
Line 4025: DISCRETE BCH BGPCH EVENTS , ID = %d, SFN = %d
