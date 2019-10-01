Line 286: tphy_CSchedulingManager instance mem allocation failed
Line 325: SchMgr:init:schedulingManager_ptr->arfcnListCollectors[%d] is NULL
Line 330: SchMgr:init:schedulingManager_ptr->fbFsmHandlerArray[%d] is NULL
Line 342: SchMgr:init:schedulingManager_ptr->aGapPostponedStateIdStack == NULL pointer
Line 351: SchMgr:init:schedulingManager_ptr->fbFsmHandlerArray[ETphySchedulerFbId_RfRssi]->fbFsmArray[%d] is NULL
Line 360: SchMgr:init:schedulingManager_ptr->fbFsmHandlerArray[ETphySchedulerFbId_SearcherDwpts]->fbFsmArray[%d] is NULL
Line 369: SchMgr:init:schedulingManager_ptr->fbFsmHandlerArray[ETphySchedulerFbId_SearcherMidamble]->fbFsmArray[%d] is NULL
Line 378: SchMgr:init:schedulingManager_ptr->fbFsmHandlerArray[ETphySchedulerFbId_SearcherAfc]->fbFsmArray[%d] is NULL
Line 388: SchMgr:init:schedulingManager_ptr->fbFsmHandlerArray[ETphySchedulerFbId_SearcherMultipath]->fbFsmArray[%d] is NULL
Line 398: SchMgr:init:schedulingManager_ptr->fbFsmHandlerArray[ETphySchedulerFbId_SearcherPccpchFrameSync]->fbFsmArray[%d] is NULL
Line 408: gsmJobsByFrequency instance mem allocation failed
Line 420: gsmStepFsms instance mem allocation failed
Line 431: gsmStepFsms instance mem allocation failed
Line 442: gsmStepFsms instance mem allocation failed
Line 456: eutraJobsByFrequency instance mem allocation failed
Line 469: eutraStepFsms instance mem allocation failed
Line 480: eutraStepFsms instance mem allocation failed
Line 491: eutraStepFsms instance mem allocation failed
Line 659: SchMgr: Unexpected Scheduler state - stateId = %d
Line 666: SchMgr:currentStateId = %d, updateStateId = %d (None/ListenArfcn/DrxModeGap/FachModeGap/IdleTIGap)
Line 805: SchMgr:prcs: Received MsgId = %d
Line 811: Return from scheduler as intra GCS already released
Line 819: Return from scheduler as inter GCS already released
Line 923: SchMgr:DlUarfcnAndProvision with Uarfcn(%d)
Line 962: SchMgr: Received MsgId = %d
Line 974: SchMgr: currentStateId=%d, numOfCampingListenRequests=%d, urrcState=%d
Line 1002: SchMgr: GetCampingDlUarfcn returns FALSE
Line 1010: SchMgr:another controller camping uarfn: %d != of existing camping uarfcn: %d, is BG PCH = %d
Line 1068: SchMgr: campingDlUarfcn not found - currentStateId = %d, MsgId = %d
Line 1074: SchMgr: RSN = %d, CFN = %d, currentStateId = %d, numOfCampingListenRequests = %d
Line 1141: SchMgr: listenMsg transactId = %d does not match release Msg transactId = %d
Line 1152: SchMgr:numOfCampingListenRequests=%d before this release
Line 1174: SchMgr:cleanOutstandingNonCampingUarfcnReqs: clean All
Line 1199: SchMgr: smc_TokenCheckAndCancel :: IdleTiTddGapSetUarfcnToken(%d)
Line 1228: isGsmMeasurementOnHold %d 
Line 1244: isGsmMeasurementOnHold %d 
Line 1268: GSM Measurement On Hold! 
Line 1276:  gphy_GetIratGsmOffRequested! 
Line 1283: Rf: Already Paused 
Line 1295: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 1303: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 1311:  Not Enogh time for GsmFch, timeToAutoPause : %d
Line 1345:  Measurement State: %d isRfAvailableForMeasurement: %d
Line 1363: isGsmMeasurementRequested: %d 
Line 1377: Rf: Already Paused 
Line 1389: Not Enogh time for Eutra Cellsearch, timeToAutoPause: %d
Line 1397: Not Enogh time for EutraMeasure, timeToAutoPause : %d
Line 1405:   Not Enogh time for EutraSearchMeasure, timeToAutoPause : %d
Line 1439:  Measurement State: %d isRfAvailableForMeasurement: %d
Line 1456: isTDDLteMeasurementRequested: %d 
Line 1488: isGsmMeasurementRequested: %d 
Line 1492:  No Release required!!
Line 1501: RfRel: isGapOver: %d !!
Line 1506:  RfRel:  - forceRelease - TDD DCH Meas 
Line 1511: RfRel:  isGapOver: %d !!
Line 1544: gsmMeasurementStartTimeInfo: %d !!
Line 1570: SchMgr:drxGap: RSN=%d:|__tphy_SchedulingManager_drxGap stateId=%d, numOfCampingListenRequests=%d, run at sfn = %d slot = %d
Line 1582: SchMgr:drxGap:postponedGapStateIdPtr == NULL
Line 1592: SchMgr:drxGap::   |__POSTPONED 
Line 1606: SchMgr:drxGap:when NoOfCampingListenReq=0
Line 1633: SchMgr:should be called from ETphySchedulerStateId_IdleTIGap
Line 1637: SchMgr:synchroListen: stateId=%d, RSN=%d, Sfn=%d, Slot=%d
Line 1642: SchMgr:numOfGapPostponedStateInfoStackElems=%d > 1: numOfCampingListenRequests=%d
Line 1649: SchMgr:|__DISCARDED: synchroListenSTF: a postponed gap state discarded because a channel configuration last more than one DRX cycle
Line 1659: SchMgr: GetCampingDlUarfcn
Line 1664: tphy_SchedulingManager_synchroListen : RF use is paused
Line 1681: SchMgr: interruptedUarfcn=%d should not happen after Fach Gap - in Fach gap operation should be completed
Line 1704: SchMgr:synchroStateChng: stateId=%d, RSN=%d, Sfn=%d, Slot=%d
Line 1708: SchMgr:synchroStateChng: stateId=%d, RSN=%d, Sfn=%d, Slot=%d
Line 1714: SchMgr:synchroStateChng: numOfGapPostponedStateInfoStackElems=%d > 1: numOfCampingListenRequests=%d
Line 1721: SchMgr:synchroStateChng:|__DISCARDED: synchroListenSTF: a postponed gap state discarded because a channel configuration last more than one DRX cycle
Line 1744: SchMgr:fachGapSchedule: measurementState=%d (expected should be 3)
Line 1748: SchMgr:but campingDlUarfcn did not found - probably release took place but outstanding token
Line 1763: SchMgr: gapMeasureDlUarfcn=%d, uarfcn=%d
Line 1765: SchMgr: gapMeasureDlUarfcn=%d, uarfcn=%d
Line 1790: SchMgr: uarfcnCmd exec failure
Line 1806: SchMgr:fachGapSTF: when numOfCampingListenRequests=0
Line 1832: SchMgr:fachGapStateInfo == NULL pointer
Line 1837: SchMgr:RSN=%d:Fach Occasion Gap requested for start RSN=%d: sfn = %d, duration sfn = %d
Line 1840: SchMgr:schedulingManager_ptr->fachGapToken!NULL
Line 1890: SchMgr:fachGapStateInfoPtr == NULL pointer
Line 1897: SchMgr:fachGapSTF:Unexpected measurementState=%d (should be 3)
Line 1907: SchMgr:fachGapSTF:Uarfcn token delays - FACH GAP MISSED
Line 1915: SchMgr:fachGapSTF:but campingDlUarfcn did not found - probably release took place but outstanding token
Line 1920: SchMgr: RSN=%d:|__ :tphy_SchedulingManager_fachGapSTF stateId=%d sfn = %d slot = %d
Line 1943: gapMeasureDlUarfcn=%d, uarfcn=%d
Line 1944: gapMeasureDlUarfcn=%d, uarfcn=%d
Line 1970: SchMgr: uarfcnCmd exec failure
Line 1986: SchMgr:fachGapSTF: when numOfCampingListenRequests=0
Line 2005: SchMgr:IdleTI_TddGap:TddGapStateInfo == NULL pointer
Line 2008: SchMgr:IdleTI_TddGap:currentrsn=%d, startSlot=%d,
Line 2079: SchMgr:checkImpendingGap:(gapStartRSN=%d gapEndRSN=%d currentRSN=%d)
Line 2104: Invalid Rssi request
Line 2111: RF use is paused! Ignore MsgId=%d
Line 2119: SchMgr:prcsFbMsg:Out of range MsgId=%d
Line 2126: SchMgr:prcsFbMsg:getFbId returns FALSE
Line 2133: SchMgr:prcsFbMsg: msgId=%d: TransactId=%d Deadline=%d missed at: RSN=%d
Line 2158: SchMgr:prcsFbMsg:[%d] - don't kick scheduling in when reqHeader.arfcn %d == campingDlUarfcn %d and gap channels are configured
Line 2166: SchMgr:prcsFbMsg: msgFbId=%d campingRequest stored to the list - no available FbFsm
Line 2184: SchMgr:prcsFbMsg:[%d] in active fach gap area:::tphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 2247: [IRAT U2G] Out of range MsgId=%d
Line 2251: [IRAT U2G] processGsmMsg for ARFCN=%d, MsgId=%d (RSSI: 15, FCH: 16, SCH: 17), isDCS=%d
Line 2336: SchMgr:ArfcnTransitionAck:Unexpected client
Line 2351: SchMgr:sendListenArfcnTransitionAck: send failure
Line 2372: SchMgr:schedulingManager_ptr->releaseAllMsg == NULL
Line 2377: SchMgr:schedulingManager_ptr->releaseAllMsg
Line 2391: SchMgr:sendReleaseAllCnfMsg: send failure
Line 2396: SchMgr:sendReleaseAllCnfMsg: send success
Line 2431: SchMgr:sendReinitialiseCnfMsg: send failure
Line 2455: SchMgr:areAllCollectorsEmpty:fbFilterMap == NULL
Line 2489: SchMgr:isArfcnMsgs:fbFilterMap == NULL
Line 2540: SchMgr:LaunchScheduling: RSN=%d, currentStateId=%d
Line 2591: SchMgr:doScheduling:[%d] currentStateId=%d
Line 2597: SchMgr:doScheduling:Listen state but campingDlUarfcn did not found
Line 2634: SchMgr::fbFilterMap == NULL
Line 2640: SchMgr :schedulingManager_ptr->fbFsmHandlerArray[%d] == NULL pointer
Line 2663: SchMgr: fbFsm[%d] no instances-  insert msg back
Line 2667: SchMgr:provisionIdleFsms:(uarfcn=%d, fbFsm=%d)
Line 2689: SchMgr:doScheduling: currentStateId=%d(0:None/2:DrxGap)
Line 2699: SchMgr:doScheduling:uarfcnToServ = %d
Line 2706: SchMgr:doScheduling:interruptedDlUarfcn = %d
Line 2720: SchMgr:doScheduling: currentStateId=%d(0:None/2:DrxGap)
Line 2730: SchMgr:doScheduling:uarfcnToServ = %d
Line 2736: SchMgr:doScheduling:interruptedDlUarfcn = %d
Line 2744: SchMgr:doScheduling: is not used for Ilde TI Gap or Fach Gap states:  currentStateId=%d
Line 2748: SchMgr:doScheduling: Unknown stateId=%d
Line 2761: SchMgr:fachGap:  but campingDlUarfcn did not found
Line 2767: SchMgr:fachGap : previously interrupted uarfcn=%d
Line 2834: SchMgr:IdleTiTddGap: campingDlUarfcn did not found
Line 2901: SchMgr:fbFilterMap == NULL
Line 2910: SchMgr:schedulingManager_ptr->fbFsmHandlerArray[%d] == NULL pointer
Line 2949: SchMgr: synchStateInfo but not ETphySchedulerStateId_IdleTIGap/FachModeGap synchStateId=%d
Line 2971: SchMgr: fbFsm[%d] no instances-  insert msg back
Line 2975: SchMgr:(uarfcn=%d, fbFsm=%d)
Line 3009: SchMgr:fbFsmReady :result(%d) and releaseAllMsg(0x%x)
Line 3021: SchMgr:fbFsmReady:schedulingManager_ptr->releaseAllMsg == NULL 
Line 3055: SchMgr:RSN = %d, Attempt = FORCED, currentDlUarfcn=%d, UARFCN = %d, isCampingUarfcn = %d
Line 3097: SchMgr:RSN=%d:setImmediateDlUarfcn ATEMPT: isInterruptedDlUarfcn=%d, INTERRUPTED UARFCN=%d
Line 3115: SchMgr:RSN=%d:setImmediateDlUarfcn ATEMPT: isInterruptedDlUarfcn=%d, not forced UARFCN=%d
Line 3158: SchMgr: UARFCN = %d, set at stateId = %d (No/ListenArfcn/DrxGap/FachGap/IdleTIGap/Dcs)
Line 3216: SchMgr:uarfcnCmd exec failure, errCode = %d, addErrCode = %d
Line 3251: SchMgr: INTERRUPTED UARFCN=%d
Line 3296: SchMgr:isUarfcnCompleted: currentDlUarfcn=%d, uarfcnNotSettledYet=%d, interruptedDlUarfcn=%d
Line 3337:  IdleTiTddGapSetUarfcnToken NOT NULL
Line 3348: SchMgr:RSN=%d:launchSetTddGapDlUarfcn: synchStateInfoPtr->stateStartAbsCtr=%d
Line 3402: SchMgr:synchStateInfoPtr == NULL
Line 3408: SchMgr:RSN=%d: uarfcnCmd busy- uarfcn is an instant cmd
Line 3426: SchMgr:RSN=%d : UARFCN NOT DECIDED yet at time: scheduling token did not get time to run
Line 3434: SchMgr:RSN=%d:setTddGapDlUarfcn: uarfcn=%d  DECIDED
Line 3438: SchMgr: we should not reach here where we are about to set: uarfcn=%d
Line 3447: SchMgr:RSN=%d: TOO LATE: stateStartAbsCtr=%d 
Line 3460: SchMgr: gapMeasureDlUarfcn=%d, uarfcn=%d
Line 3485: SchMgr:setTddGapDlUarfcn: uarfcnCmd exec failure
Line 3517: SchMgr:isAnyFbBusy:fbFilterMap == NULL
Line 3604: SchMgr: isFound=FALSE - isRestrictedUarfcn=%d, restrictedUarfcn=%d
Line 3648: SchMgr :getFbId:Unexpected MsgId=%d
Line 3685: SchMgr:getFbFilterMap:Unknown stateId=%d
Line 3717: SchMgr:showFsmsStatus:Fb[%d %d]=busy
Line 3744: SchMgr:IdleTiTddGapSetUarfcnToken(%d)
Line 3998: [IRAT T2G] GsmOrDcs - illegal value
Line 4024: SchMgr:gsm2UmtsAntennaSwitchSTF: campingDlUarfcn did not found
Line 4031: [IRAT U2G] Cancel token before submission
Line 4036: [IRAT U2G] gsm2UmtsAntSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d) campingUarfcn %d
Line 4099: [IRAT U2G] absTimeStamp = %d,  absDeadline = %d, currentRsn = %d
Line 4100: [IRAT U2G] GsmRssiProc called for %d (Gsm:0, Dcs:1), noOfRssiMeasurements=%d
Line 4107: compoundMsg is NULL
Line 4120: compoundMsg->frequencyList is NULL
Line 4133: GsmRssiGap: isPcsBandUsed = %d
Line 4190: [IRAT U2G] GsmRssiGap: 2G modem OFF is already triggered - dummy response message is made
Line 4197: GsmRssiGap: send dummy indication 
Line 4226: [IRAT U2G] GsmRssiGap: frequencey list allocation failed:
Line 4233: [IRAT U2G] GsmRssiGap: rssiIndMsg message allocation failed:
Line 4255: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 4260: [IRAT U2G] GsmRssiGap DiffUmtsTime failed
Line 4267: [IRAT U2G] GsmRssiGap DiffUmtsTime failed
Line 4279: [IRAT U2G] GsmRssiGap DiffUmtsTime failed, (difference between SW and HW) = %d chips sign=%d
Line 4288: [IRAT U2G] GsmRssiGap AddGsmTime failed
Line 4293: [IRAT U2G] GsmRssiGap umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 4296: [IRAT U2G] GsmRssiGap umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 4299: [IRAT U2G] GsmRssiGap umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 4302: [IRAT U2G] GsmRssiGap umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 4317: [IRAT U2G] GsmFchGapCommonProcessing (FINAL) : gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 4350: [IRAT U2G] GsmRssiGap gphy_GetIratGsmOffRequested=%d, isFristT2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 4380: [IRAT U2G] GsmRssiGap 2G modem OFF is already triggered - dummy response message is made
Line 4389: GsmRssiGap: send dummy indication 
Line 4425: [IRAT U2G] GsmRssiGap freq list allocation failed:
Line 4432: [IRAT U2G] GsmRssiGap rssiIndMsg message allocation failed:
Line 4462: [IRAT U2G] GsmRssiGap 2G modem OFF is already triggered - dummy response message is made
Line 4471: GsmRssiGap send dummy indication 
Line 4507: [IRAT U2G] GsmRssiGap freq list alloc failed:
Line 4514: [IRAT U2G] GsmRssiGap rssiIndMsg message allocation failed:
Line 4529: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 4548: GsmRssiGap send dummy indication 
Line 4586: [IRAT U2G] GsmRssiGap freq list alloc failed:
Line 4593: [IRAT U2G] GsmRssiGap rssiIndMsg msg alloc failed:
Line 4637: [IRAT U2G] Cancel token before submission
Line 4654: [IRAT U2G] GsmOrDcs - illegal value
Line 4668: [IRAT U2G] GsmRssiGap failed to find any jobs
Line 4676: [IRAT U2G] GsmRssiGap frequencey list allocation failed:
Line 4757: [IRAT U2G]  gsmScheduleTimingOffset=%d, gsmBurstTimingOffset=%d
Line 4761: [IRAT U2G] GsmFchGapCommonProcessing called for %d (GsmFch:2, DcsFch:3), ARFCN=%d
Line 4813: [IRAT U2G] GsmFchGap: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4822: FchGap: send dummy indication 
Line 4842: [IRAT U2G]  Unable to allocate memory for fchAcquisitionIndMsg
Line 4867: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 4871: [IRAT U2G] : DiffUmtsTime failed
Line 4878: [IRAT U2G]  DiffUmtsTime failed
Line 4889: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips sign=%d
Line 4898: [IRAT U2G] AddGsmTime failed
Line 4904: [IRAT U2G]  umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 4907: [IRAT U2G]umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 4910: [IRAT U2G] umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 4913: [IRAT U2G]  umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 4929: [IRAT U2G]  (FINAL) : gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 4950: [IRAT U2G]  gphy_GetIratGsmOffRequested=%d, isFristT2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 4982: [IRAT U2G] 2G modem OFF is already triggered - dummy response message is made !!!
Line 4993: GsmFchGap: send dummy indication 
Line 5013: [IRAT U2G] Unable to allocate memory for fchAcquisitionIndMsg
Line 5045: [IRAT U2G] 2G modem OFF is already triggered - dummy response message is made !!!
Line 5056: GsmFchGap: send dummy indication 
Line 5076: [IRAT U2G]  Unable to allocate memory for fchAcquisitionIndMsg
Line 5090: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 5111: tphy_CSchedulingManager_GsmFchGapCommonProcessing: send dummy indication 
Line 5132: [IRAT U2G] Unable to allocate memory for fchAcquisitionIndMsg
Line 5175: [IRAT U2G] Cancel token before submission
Line 5193: [IRAT U2G] GsmOrDcs - illegal value
Line 5205: [IRAT U2G] Unable to allocate memory for GsmFchAcquisitionReq
Line 5211: [IRAT U2G] ailed to find any jobs on ARFCN %d
Line 5285: [IRAT U2G] GsmSchGapCommonProcessing called for %d (GsmSch:4, DcsSch:5), ARFCN=%d
Line 5338: [IRAT U2G] GsmSchGap: 2G modem OFF is already triggered - dummy response message is made !!!
Line 5347: GsmSchGap: send dummy indication 
Line 5367: [IRAT U2G]  Unable to allocate memory for schAcquisitionIndMsg
Line 5393: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 5398: [IRAT U2G] GsmSchGap: DiffUmtsTime failed
Line 5406: [IRAT U2G] GsmSchGap: DiffUmtsTime failed
Line 5417: [IRAT U2G] DiffUmtsTime failed, (difference between SW and HW) = %d chips, sign=%d
Line 5426:  
Line 5432: [IRAT U2G] umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 5435: [IRAT U2G] umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 5438: [IRAT U2G] umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 5441: [IRAT U2G] umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 5470: [IRAT U2G] gphy_GetIratGsmOffRequested=%d, isFristT2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 5504: [IRAT U2G]  2G modem OFF is already triggered - dummy response message is made !!!
Line 5515: tphy_CSchedulingManager_GsmSchGapCommonProcessing : send dummy indication 
Line 5535: [IRAT U2G]  Unable to allocate memory for schAcquisitionIndMsg
Line 5569: [IRAT U2G]  2G modem OFF is already triggered - dummy response message is made !!!
Line 5580: GsmSch: send dummy indication 
Line 5601: [IRAT U2G] Unable to allocate memory for schAcquisitionIndMsg
Line 5617: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 5639: tphy_CSchedulingManager_GsmSchGapCommonProcessing : send dummy indication 
Line 5659: [IRAT U2G] Unable to allocate memory for schAcquisitionIndMsg
Line 5704: [IRAT U2G] Cancel token before submission
Line 5721: [IRAT U2G] GsmOrDcs - illegal value
Line 5729: [IRAT U2G]  Unable to allocate memory for GsmSchAcquisitionReq
Line 5735: [IRAT U2G] GsmSchGapCommonProcesg failed to find any jobs on ARFCN=%d
Line 5812: [IRAT T2L] EutraCellSrch: incorrect noOfCellSearchs=%d, should be %d
Line 5817: [IRAT T2L] EutraCellSrch: noOfCellSearchs=%d
Line 5843: [IRAT T2L] EutraCellSrch: AGC1 :%d, AGC2 : %d, AFC : %d
Line 5878: Send Eutra cell search dummy indication
Line 5900: [IRAT T2L] EutraCellSrch: DiffUmtsTime failed
Line 5907: [IRAT T2L] EutraCellSrch: AddEutraTime failed
Line 5912: [IRAT T2L] EutraCellSrch: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 5915: [IRAT T2L] EutraCellSrch: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 5918: [IRAT T2L] EutraCellSrch: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 5921: [IRAT T2L] EutraCellSrch: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 5957: Send Eutra cell search dummy indication
Line 5990: [IRAT T2L] EutraCellSrch: failed to find any jobs
Line 5997: [IRAT T2L]  EutraCellSrch: compound message allocation failed:
Line 6049: [IRAT T2L] incorrect noOfMeasures=%d, Should be equal to or smaller than %d
Line 6055: [IRAT T2L] EutraMeasureGap: noOfMeasures=%d
Line 6131: [IRAT T2L] compoundMsg should be made for ONLY ONE EARFCN 
Line 6136: [IRAT T2L]  listHead is NULL
Line 6175: Send Eutra measure dummy indication
Line 6195: [IRAT T2L] EutraMeasureGap: DiffUmtsTime failed
Line 6201: [IRAT T2L] AddEutraTime failed
Line 6206: [IRAT T2L] umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 6209: [IRAT T2L] umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 6212: [IRAT T2L]  umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 6215: [IRAT T2L] umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 6259: Send Eutra measure dummy indication
Line 6291: [IRAT T2L] EutraMeasureGap: failed to find any jobs
Line 6300: [IRAT T2L] EutraMeasureGap: compound message allocation failed:
Line 6357: [IRAT T2L]  incorrect noOfSearchMeasures=%d
Line 6361: [IRAT T2L]  noOfSearchMeasures=%d
Line 6386: [IRAT T2L] EutraSrchMsrGap: earfcn=%d measBandwidth=%d numOfFreqs=%d
Line 6423: Send Eutra search measure dummy indication
Line 6442: [IRAT T2L] DiffUmtsTime failed
Line 6449: [IRAT T2L] AddEutraTime failed
Line 6454: [IRAT T2L] umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 6457: [IRAT T2L]  umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 6460: [IRAT T2L] umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 6463: [IRAT T2L]  umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 6502: Send Eutra search measure dummy indication
Line 6529: [IRAT T2L]  EutraMsrGap: failed to find any jobs
Line 6536: [IRAT T2L] SchMgr EutraMsrGap: compound msg allocation failed:
Line 6693: [IRAT T2L] msg Id out of range
Line 6697: [IRAT T2L] SchMgr prcsEutraMsg for EARFCN=%d, MsgId=%d (CELL SEARCH: 24, MEASURE: 25, SEARCHMEASURE: 26)
Line 6720: [IRAT T2L] SchedulingManager processEutraMsg: unknown msg
Line 6760:  isCampingDlUarfcn=FALSE
Line 6785: [IRAT T2L] tphy_CschedulingManager_sendSearchMeasStopReq
Line 6806:  Critical Error mMsg
