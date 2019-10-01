Line 267: startStopFsm==NULL
Line 345: Free : PalTimer_PchDone
Line 350: Free : PalTimer_PchConfig
Line 359: [StartStopD] handleStopping()
Line 377: [Warning][StartStopD] handleStopping(), Unexpected transceiverId = %d
Line 409: [StartStopD] handleSleeping: SleepingController is not turned ON
Line 431: [StartStopD] handleSleeping: target StartStopDecodingFsmEventId=%d(SleepingReq)
Line 436: [Warning][StartStopD] handleSleeping: Unexpected transceiverId=%d
Line 471: handleWaking: !!!!!!-[SKIP TDS OFF]-!!!!!!
Line 478: handleWaking: SleepingController is not turned ON
Line 504: [Warning]handleWaking: Unexpected transceiverId=%d
Line 566: [StartStopD] SwitchRF: currentDlUarfcn = %d,Target_uarfcn = %d
Line 596: TARGET UARFCN IS ZERO 
Line 616: Free : PalTimer_PchDone
Line 621: Free : PalTimer_PchConfig
Line 681: [StartStopD][PCH] Start after %dslot: currSlot= %d, currSfn= %d, pch_Sfn= %d, diff_Sfn= %d
Line 720: [StartStopD] HandleStarting token: BCH Active= %d
Line 750: [Warning][StartStopD] handleStarting: Unexpected transceiverId=%d
Line 765: HandleStarting debug , eventList = %d, list_ptr = %d, isFSMIdle = %d, numOfObjects =%d, head = %d
Line 825: [Warning]PCHANDDRX Waking: SleepingController is not turned ON
Line 916: [StartStopD] TDD IDLE_ENTRY state
Line 1065: [StartStopD] ETphyStartStopDecodingFsmEventId_BgPchStart event
Line 1087: [StartStopD] processIdleEvent(), Timeout in idle state
Line 1100: [Warning][StartStopD] processIdleEvent(), Unknown event
Line 1106: [Warning][StartStopD] processIdleEvent(), event = NULL
Line 1129: [StartStopD] TDD IDLE_EXIT state
Line 1176: [IRAT U2G] Cancel token before entering idle state
Line 1205: !!!GSM Still ON and force OFF!!!
Line 1214: ST%d T_DSDS: !!!GSM Still ON and force OFF!!!
Line 1233: [Warning][StartStopD] IdleExit: Unexpected transceiverId=%d
Line 1270: [StartStopD] TDD SLEEPING_ENTRY state: bchCofingToken = %d
Line 1304: [Warning][StartStopD] SLEEPING_ENTRY state. Unexpected transceiverId=%d.
Line 1343: [Warning][StartStopD] SleepingEntry: SleepingController is not turned ON
Line 1391: [Warning][StartStopD] processSleepingEvent: SleepingController is not turned ON
Line 1399: [StartStopD] PROCESS SLEEP EVENT state
Line 1408: ETphyStartStopDecodingFsmEventId_Release in sleep state
Line 1419: [StartStopD] processSleepingEvent: Timeout in sleeping state
Line 1569: [Warning][StartStopD] processSleepingEvent: Unknown event in sleeping state - eventId=%d
Line 1575: [Warning][StartStopD] processSleepingEvent: event = NULL in sleeping state
Line 1599: [StartStopD] TDD SLEEPING_EXIT state: PCH configured = %d
Line 1618: UE did not camp to any frequency
Line 1658: [Warning][StartStopD] SleepingExit: SleepingController is not turned ON
Line 1688: [StartStopD] TDD WAKING_ENTRY state
Line 1729: [Warning][StartStopD] Can not happen when FACH is configured
Line 1733: [Warning][StartStopD] WakingEntry: Unexpected transceiverId=%d
Line 1739: [Warning][StartStopD] WakingEntry: but SleepingController is not turned ON
Line 1756: [Warning][StartStopD] WakingEntry: AFC HOLD due to low deltaRSCP
Line 1797: [Warning][StartStopD] processWakingEvent: SleepingController is not turned ON
Line 1805: [StartStopD] PROCESS WAKING EVENT state: Event id = %d
Line 1810: [StartStopD] processWakingEvent: Timeout in waking state
Line 1890: [Warning][StartStopD] processWakingEvent: Unknown event in waking state - eventId=%d
Line 1896: [Warning][StartStopD] processWakingEvent: event = NULL in waking state
Line 1917: [StartStopD] TDD WAKING_EXIT state
Line 1921: [Warning][StartStopD] WakingExit: SleepingController is not turned ON
Line 1945: [StartStopD] TDD DECODING_ENTRY state
Line 1983: [Warning][StartStopD] DecodingEntry: AFC HOLD due to low deltaRSCP
Line 2001: [StartStopD] intra done SFN %d, current Sfn %d LastMeasToCurrentSfn %d, pich_Status %d, PchToPichSfnDiff %d
Line 2053: [Warning][StartStopD] DecodingEntry():isPchRelease is TRUE
Line 2083: [StartStopD] launchScheduleGap(): scheduleGapToken != NULL
Line 2104: [StartStopD] LaunchScheduleGap(): scheduleGap() will be run after %d slots
Line 2140: [Warning] LaunchSynchroListen: this->synchroListenToken != NULL 
Line 2155: LaunchSynchroListen: RSN=%d, synchroListenUarfcnSTF will run at timeStamp=%d
Line 2161: LaunchSynchroListen: currentRSN=%d, listenRSN=%d in the past
Line 2183: SynchroListen run
Line 2388: [Warning][StartStopD] processDecodingEvent(): Unknown event
Line 2395: [Warning][StartStopD] processDecodingEvent(), event = NULL
Line 2417: [StartStopD] enterRetiring_5DRXcycles = %d drxCycleNumber = %d compulsoryRetiring %d
Line 2453: [StartStopD] TDD DECODING_EXIT state
Line 2458: mgm==NULL
Line 2469: [StartStopD] decodingExit(), Decoding state timeout was not started
Line 2483: DecodingExit: srl1rcRoundRobinSkip: %d
Line 2504: cdbUpdatingUtility==NULL
Line 2611: [StartStopD] TDD RETIRING_ENTRY state
Line 2623: pich_Sfn %d, NumberOfRsnToPich %d
Line 2673: Retiring Entry: Autopause timer check 
Line 2682: assert check RF not available go back to sleep
Line 2898: [StartStopD] TDD RETIRING_EXIT state
Line 2904: [StartStopD] RetiringExit(), Retiring state timeout was not started
Line 2924: !!!GSM Still ON and force OFF!!!
Line 2938: RetiringExit(), UE has not camped on any frequency
Line 2979: [StartStopD] PROCESS RETIRING EVENT state: RF WITH US =%d
Line 2997: UE did not camp to any frequency
Line 3024: [Warning][StartStopD] processRetiringEvent, Target state = ETphyTphyStartStopDecodingFsmStates_Sleeping , RF WITH US %d
Line 3032: [Warning][StartStopD] processRetiringEvent: SleepingController isn't turned ON, Target state = Retiring
Line 3041: [StartStopD] processRetiringEvent(), target state = Decoding
Line 3047: [Warning][StartStopD] processRetiringEvent(), StartDecodingReq received but isSleepingController is TRUE, target state = Retiring
Line 3059: [StartStopD] processRetiringEvent receives eventId=%d(RfBackFinished), target StartStopDecodingFsmStates=Sleeping
Line 3073: [Warning][StartStopD] processRetiringEvent receives eventId=%d(RfBackFinished), Wrong event
Line 3080: assert check RF not available go back to sleep
Line 3096: ST%d T_DSDS [StartStopD] processRetiringEvent receives eventId=%d(Pause), target StartStopDecodingFsmStates=Retiring
Line 3103: ST%d T_DSDS [StartStopD] processRetiringEvent receives eventId=%d(Pause) during U2L meas, dealy sending Pause done, target StartStopDecodingFsmStates=Retiring
Line 3110: ST%d T_DSDS [StartStopD] processRetiringEvent receives eventId=%d(Pause), target StartStopDecodingFsmStates=Sleeping
Line 3124: ST%d T_DSDS [StartStopD] processRetiringEvent receives eventId=%d(Pause), target StartStopDecodingFsmStates=Retiring
Line 3134: ST%d T_DSDS [StartStopD] processRetiringEvent receives eventId=%d(Pause) during U2L meas, target StartStopDecodingFsmStates=Retiring
Line 3143: ST%d T_DSDS [StartStopD] processRetiringEvent receives eventId=%d(Pause), target StartStopDecodingFsmStates=Sleeping
Line 3154: ST%d T_DSDS [StartStopD] processRetiringEvent receives eventId=%d(Resume), target StartStopDecodingFsmStates=Retiring
Line 3287: [StartStopD] processRetiringEvent, Target state = ETphyTphyStartStopDecodingFsmStates_Idle
Line 3293: [StartStopD] processRetiringEvent receives eventId=%d(RfBackFinished), target StartStopDecodingFsmStates=Sleeping
Line 3301: [Warning][StartStopD] processRetiringEvent receives eventId=%d(RfBackFinished), Wrong event
Line 3314: [Warning][StartStopD] processRetiringEvent: Unexpected transceiverId=%d
Line 3320: [StartStopD] processRetiringEvent, Target state = ETphyTphyStartStopDecodingFsmStates_Retiring
Line 3328: [StartStopD] processRetiringEvent, Target state = ETphyTphyStartStopDecodingFsmStates_Retiring
Line 3340: interFrequencyCellReselectionMeasDone isAutoPauseTimerSet = %d, pauseTimeForGsmOrEutra = %d
Line 3350: [StartStopD] processRetiringEvent, timeToPich %d
Line 3512: [Warning][StartStopD] processRetiringEvent: Unexpected transceiverId=%d
Line 3518: [StartStopD] processRetiringEvent, Target state = ETphyTphyStartStopDecodingFsmStates_Retiring
Line 3650: [Warning][StartStopD] processRetiringEvent: Unexpected transceiverId=%d
Line 3656: [StartStopD] processRetiringEvent, Target state = ETphyTphyStartStopDecodingFsmStates_Retiring
Line 3676: [Warning][StartStopD] processRetiringEvent: Unexpected transceiverId=%d
Line 3682: [StartStopD] processRetiringEvent, Target state = ETphyTphyStartStopDecodingFsmStates_Retiring
Line 3731: [Warning][StartStopD] processRetiringEvent(), Unexpected event in retiring state
Line 3737: [Warning][StartStopD] processRetiringEvent: event = NULL in retiring state
Line 3757: [StartStopD] BGPCH_BCH_DECODING ENTRY state
Line 3782: [StartStopD] BGPCH_BCH_DECODING EXIT state
Line 3791: [Warning][StartStopD] BgPchDecodeBchExit BCH timeout not set
Line 3815: [StartStopD] BGPCH_BCH_DECODING PROCESS state: Event ID=%d, Is BCH Prio = %d
Line 3863: [Warning][StartStopD] UNKNOWN event in processBgPchDecodeBchEvent event->eventId = %d
Line 3892: [StartStopD] BGPCH_PCH_DECODING ENTRY state
Line 3917: [StartStopD] BGPCH_PCH_DECODING EXIT state
Line 3926: [Warning][StartStopD] BgPchDecodeBchExit PCH timeout not set
Line 3951: [StartStopD] BGPCH_PCH_DECODING PROCESS state: Event ID=%d
Line 4000: [Warning][StartStopD] UNKNOWN event in processBgPchDecodePchEvent eventId = %d
Line 4017: [StartStopD] TDD INTERVENE ENTRY state
Line 4035: [StartStopD] INTERVENE PROCESS state: Event ID=%d
Line 4123: 
Line 4141: [StartStopD] TDD INTERVENE EXIT state
Line 4178: 
Line 4184: SwitchFreq  eventId= %d,Target_uarfcn = %d
Line 4205: [StartStopD] TDD WakingDuring: begins
Line 4213: [Warning][StartStopD] TDD WakingDuring: SleepingController is not turned ON
Line 4251: SendTimeoutEvent: target StartStopDecodingFsmEventId=%d
Line 4273: TriggerMeasurementsSTF: launched at RSN=%d, (sfn, slot)=(%d, %d), stateId=%d(should be DRX)
Line 4322: DrxState = %d
