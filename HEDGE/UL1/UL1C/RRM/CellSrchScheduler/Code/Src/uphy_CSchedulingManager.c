Line 375: No TGPS is running and not first gap so isGapScheduled = FALSE forcely
Line 375: No TGPS is running and not first gap so isGapScheduled = FALSE forcely
Line 379: set gapScheduled %d isFirstGap %d
Line 379: set gapScheduled %d isFirstGap %d
Line 386: set gapScheduled %d
Line 386: set gapScheduled %d
Line 401: No TGPS is running and not first gap so isGsmGapScheduled = FALSE forcely
Line 401: No TGPS is running and not first gap so isGsmGapScheduled = FALSE forcely
Line 405: set isGsmGapScheduled %d isFirstGap %d
Line 405: set isGsmGapScheduled %d isFirstGap %d
Line 412: set isGsmGapScheduled %d
Line 412: set isGsmGapScheduled %d
Line 421: get isGapScheduled = %d isGsmGapScheduled = %d
Line 421: get isGapScheduled = %d isGsmGapScheduled = %d
Line 428: get isGsmGapScheduled %d
Line 428: get isGsmGapScheduled %d
Line 531: Instance created for stackId %d
Line 531: Instance created for stackId %d
Line 688: uphy_CSchedulingManager_init set gapScheduled
Line 688: uphy_CSchedulingManager_init set gapScheduled
Line 848: uphy_CSchedulingManager_reinit set gapScheduled
Line 848: uphy_CSchedulingManager_reinit set gapScheduled
Line 886: uphy_CSchedulingManager_releaseMeasurementRequests: FA2_waiting -> FALSE
Line 886: uphy_CSchedulingManager_releaseMeasurementRequests: FA2_waiting -> FALSE
Line 890: uphy_CSchedulingManager_releaseMeasurementRequests: msmtMidServer(midIdentifier %d, mid %d) is NULL
Line 890: uphy_CSchedulingManager_releaseMeasurementRequests: msmtMidServer(midIdentifier %d, mid %d) is NULL
Line 920: uphy_CSchedulingManager_releaseMeasurementRequests: FA2_waiting -> FALSE
Line 920: uphy_CSchedulingManager_releaseMeasurementRequests: FA2_waiting -> FALSE
Line 924: uphy_CSchedulingManager_releaseMeasurementRequests: msmtMidServer(midIdentifier %d, mid %d) is NULL
Line 924: uphy_CSchedulingManager_releaseMeasurementRequests: msmtMidServer(midIdentifier %d, mid %d) is NULL
Line 976: Unexpected Scheduler state - stateId=%d
Line 976: Unexpected Scheduler state - stateId=%d
Line 981: uphy_CSchedulingManager_updateStateInfo: currentStateId=%d, updateStateId=%d(No/ListenArfcn/DrxGap/FachGap/CmFdd/Dcs) stateStartAbsCtr %d stateEndAbsCtr %d
Line 981: uphy_CSchedulingManager_updateStateInfo: currentStateId=%d, updateStateId=%d(No/ListenArfcn/DrxGap/FachGap/CmFdd/Dcs) stateStartAbsCtr %d stateEndAbsCtr %d
Line 1075: uphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 1075: uphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 1119: message is NULL
Line 1119: message is NULL
Line 1129: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1129: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1155: SM: Ignore as RF is in Paused State %d 
Line 1180: CellSfnSfnInd or BchBackgroundConfigCnf or BchBackgroundReleaseCnf received but failed to find message->TransactId=%d
Line 1180: CellSfnSfnInd or BchBackgroundConfigCnf or BchBackgroundReleaseCnf received but failed to find message->TransactId=%d
Line 1324: Buffering command is ACTIVE. Reset command and its handler.
Line 1324: Buffering command is ACTIVE. Reset command and its handler.
Line 1331: Buffering command is = %x or active for other stack
Line 1331: Buffering command is = %x or active for other stack
Line 1340: buffering token cancelled
Line 1340: buffering token cancelled
Line 1360: Reset RfRxUarfcnCmd: cmd_state should be idle but cmd_state=%d
Line 1360: Reset RfRxUarfcnCmd: cmd_state should be idle but cmd_state=%d
Line 1381: RfSynth is ongoing on other stack. activeCmd = %d, dlUarfcnSettledToken = %d
Line 1381: RfSynth is ongoing on other stack. activeCmd = %d, dlUarfcnSettledToken = %d
Line 1550: processCampingListenArfcnTransition: currentStateId=%d, numOfCampingListenRequests=%d, urrcState=%d
Line 1550: processCampingListenArfcnTransition: currentStateId=%d, numOfCampingListenRequests=%d, urrcState=%d
Line 1577: schedulingManager_ptr->numOfCampingListenRequests>0 but getCampingDlUarfcn returns FALSE
Line 1577: schedulingManager_ptr->numOfCampingListenRequests>0 but getCampingDlUarfcn returns FALSE
Line 1588: another controller camping uarfn != of existing camping uarfcn
Line 1588: another controller camping uarfn != of existing camping uarfcn
Line 1592: Configuring BPLMN BCH - on inter freq lets not return
Line 1592: Configuring BPLMN BCH - on inter freq lets not return
Line 1612: processCampingListenArfcnTransition: stateId=%d: campingListenUarfcnTransitionMsgdeadlineInfo.msg == NULL
Line 1612: processCampingListenArfcnTransition: stateId=%d: campingListenUarfcnTransitionMsgdeadlineInfo.msg == NULL
Line 1620: Setting the frequency to BCH frequency - as camp freqquency during BPLMN
Line 1620: Setting the frequency to BCH frequency - as camp freqquency during BPLMN
Line 1672: processCampingControllerReleasedTransitionMsg: campingDlUarfcn not found. currentStateId=%d, MsgId=%d
Line 1672: processCampingControllerReleasedTransitionMsg: campingDlUarfcn not found. currentStateId=%d, MsgId=%d
Line 1682: bplmnStoredCampedDlUarfcn %d isBplmnBchConfigured %d isBplmnFreqRestore %d 
Line 1682: bplmnStoredCampedDlUarfcn %d isBplmnBchConfigured %d isBplmnFreqRestore %d 
Line 1687: Setting BACK schedulingManager_ptr->campingDlUarfcn(%d) to camping frequency before BCH release
Line 1687: Setting BACK schedulingManager_ptr->campingDlUarfcn(%d) to camping frequency before BCH release
Line 1714: processCampingControllerReleasedTransitionMsg: RSN=%d, Cfn=%d, currentStateId=%d, numOfCampingListenRequests=%d
Line 1714: processCampingControllerReleasedTransitionMsg: RSN=%d, Cfn=%d, currentStateId=%d, numOfCampingListenRequests=%d
Line 1855: processCampingControllerReleasedTransitionMsg: RSN=%d, Cfn=%d, currentStateId=%d, numOfCampingListenRequests=%d
Line 1855: processCampingControllerReleasedTransitionMsg: RSN=%d, Cfn=%d, currentStateId=%d, numOfCampingListenRequests=%d
Line 1876: processCampingControllerReleasedTransitionMsg:listeMsg transactId=%d does not much to release Msg transactId=%d
Line 1876: processCampingControllerReleasedTransitionMsg:listeMsg transactId=%d does not much to release Msg transactId=%d
Line 1887: processCampingControllerReleasedTransitionMsg:numOfCampingListenRequests=%d before schedulingManager_ptr release
Line 1887: processCampingControllerReleasedTransitionMsg:numOfCampingListenRequests=%d before schedulingManager_ptr release
Line 1910: cleanOutstandingNonCampingUarfcnReqs: clean All except UARFCN %d
Line 1910: cleanOutstandingNonCampingUarfcnReqs: clean All except UARFCN %d
Line 1942: Buffering command is ACTIVE. Reset command and its handler
Line 1942: Buffering command is ACTIVE. Reset command and its handler
Line 1949: Buffering command is = %x or active for other stack
Line 1949: Buffering command is = %x or active for other stack
Line 2144: uphy_CSchedulingManager_setIsFA2Waiting: FA2_waiting %d 
Line 2144: uphy_CSchedulingManager_setIsFA2Waiting: FA2_waiting %d 
Line 2150: uphy_CSchedulingManager_getIsFA2Waiting: FA2_waiting %d 
Line 2150: uphy_CSchedulingManager_getIsFA2Waiting: FA2_waiting %d 
Line 2158: uphy_CSchedulingManager_setIsFristU2GReqInCurrentRetiringState: isFristU2GReqInCurrentRetiringState %d 
Line 2158: uphy_CSchedulingManager_setIsFristU2GReqInCurrentRetiringState: isFristU2GReqInCurrentRetiringState %d 
Line 2164: uphy_CSchedulingManager_getIsFristU2GReqInCurrentRetiringState: isFristU2GReqInCurrentRetiringState %d 
Line 2164: uphy_CSchedulingManager_getIsFristU2GReqInCurrentRetiringState: isFristU2GReqInCurrentRetiringState %d 
Line 2173: uphy_CSchedulingManager_setIsGsmMeasurementOnHold: isLteMeasurementRequested %d 
Line 2173: uphy_CSchedulingManager_setIsGsmMeasurementOnHold: isLteMeasurementRequested %d 
Line 2179: uphy_CSchedulingManager_getIsGsmMeasurementOnHold: isLteMeasurementRequested %d 
Line 2179: uphy_CSchedulingManager_getIsGsmMeasurementOnHold: isLteMeasurementRequested %d 
Line 2198: uphy_CSchedulingManager_setIsGsmMeasurementOnHold: isGsmMeasurementOnHold %d 
Line 2198: uphy_CSchedulingManager_setIsGsmMeasurementOnHold: isGsmMeasurementOnHold %d 
Line 2215: uphy_CSchedulingManager_getIsGsmMeasurementOnHold: isGsmMeasurementOnHold %d 
Line 2215: uphy_CSchedulingManager_getIsGsmMeasurementOnHold: isGsmMeasurementOnHold %d 
Line 2223: uphy_CSchedulingManager_setIsGsmMeasurementRequested: isGsmMeasurementRequested %d 
Line 2223: uphy_CSchedulingManager_setIsGsmMeasurementRequested: isGsmMeasurementRequested %d 
Line 2229: uphy_CSchedulingManager_getIsGsmMeasurementRequested: isGsmMeasurementRequested %d 
Line 2229: uphy_CSchedulingManager_getIsGsmMeasurementRequested: isGsmMeasurementRequested %d 
Line 2257: uphy_CSchedulingManager_isRfAvailableForMeasurement: GSM Measurement On Hold! 
Line 2257: uphy_CSchedulingManager_isRfAvailableForMeasurement: GSM Measurement On Hold! 
Line 2264: GSM measuerement not triggered  
Line 2264: GSM measuerement not triggered  
Line 2272: uphy_CSchedulingManager_isRfAvailableForMeasurement: gphy_GetIratGsmOffRequested! 
Line 2272: uphy_CSchedulingManager_isRfAvailableForMeasurement: gphy_GetIratGsmOffRequested! 
Line 2287: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2287: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2296: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2296: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2307: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2307: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2318: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2318: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2327: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2327: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2338: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2338: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2349: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2349: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2358: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2358: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2369: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2369: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2408: uphy_CSchedulingManager_isRfAvailableForMeasurement: Measurement State: %d isRfAvailableForMeasurement: %d
Line 2408: uphy_CSchedulingManager_isRfAvailableForMeasurement: Measurement State: %d isRfAvailableForMeasurement: %d
Line 2429: uphy_CSchedulingManager_isRfAvailableForMeasurement: isGsmMeasurementRequested: %d 
Line 2429: uphy_CSchedulingManager_isRfAvailableForMeasurement: isGsmMeasurementRequested: %d 
Line 2460: EUTRA measuerement not triggered  
Line 2460: EUTRA measuerement not triggered  
Line 2469: uphy_CSchedulingManager_isRfAvailableForMeasurement: l1ps_irat_LTE_off_requested! 
Line 2469: uphy_CSchedulingManager_isRfAvailableForMeasurement: l1ps_irat_LTE_off_requested! 
Line 2482: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for Eutra Cellsearch, timeToAutoPause : %d
Line 2482: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for Eutra Cellsearch, timeToAutoPause : %d
Line 2490: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for EutraMeasure, timeToAutoPause : %d
Line 2490: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for EutraMeasure, timeToAutoPause : %d
Line 2498: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for EutraSearchMeasure, timeToAutoPause : %d
Line 2498: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for EutraSearchMeasure, timeToAutoPause : %d
Line 2537: uphy_CSchedulingManager_isRfAvailableForMeasurement: Measurement State: %d isRfAvailableForMeasurement: %d
Line 2537: uphy_CSchedulingManager_isRfAvailableForMeasurement: Measurement State: %d isRfAvailableForMeasurement: %d
Line 2556: uphy_CSchedulingManager_isRfAvailableForMeasurement: isLteMeasurementRequested: %d 
Line 2556: uphy_CSchedulingManager_isRfAvailableForMeasurement: isLteMeasurementRequested: %d 
Line 2575: uphy_CSchedulingManager_ReleaseRf: isGsmMeasurementRequested: %d, isLteMeasurementRequested: %d 
Line 2575: uphy_CSchedulingManager_ReleaseRf: isGsmMeasurementRequested: %d, isLteMeasurementRequested: %d 
Line 2579: uphy_CSchedulingManager_ReleaseRf: No Release required!!
Line 2579: uphy_CSchedulingManager_ReleaseRf: No Release required!!
Line 2588: uphy_CSchedulingManager_ReleaseRf forceRelease: isGapOver: %d !!
Line 2588: uphy_CSchedulingManager_ReleaseRf forceRelease: isGapOver: %d !!
Line 2594:  uphy_CSchedulingManager_ReleaseRf - forceRelease - Non-DCH Meas 
Line 2594:  uphy_CSchedulingManager_ReleaseRf - forceRelease - Non-DCH Meas 
Line 2610: uphy_CSchedulingManager_ReleaseRf: isGapOver: %d !!
Line 2610: uphy_CSchedulingManager_ReleaseRf: isGapOver: %d !!
Line 2659: uphy_CSchedulingManager_storeNextGsmMeasurementStartTime: gsmMeasurementStartTimeInfo: %d !!
Line 2659: uphy_CSchedulingManager_storeNextGsmMeasurementStartTime: gsmMeasurementStartTimeInfo: %d !!
Line 2685: uphy_CSchedulingManager_cleanOutstandingReq: Clean All outstanding requests
Line 2685: uphy_CSchedulingManager_cleanOutstandingReq: Clean All outstanding requests
Line 2733: uphy_CSchedulingManager_cleanSearcherOutstandingReq: Clean All Searcher outstanding requests
Line 2733: uphy_CSchedulingManager_cleanSearcherOutstandingReq: Clean All Searcher outstanding requests
Line 2785: RSN=%d:|__uphy_SchedulingManager_drxGap stateId=%d, numOfCampingListenRequests=%d, run at sfn = %d slot = %d
Line 2785: RSN=%d:|__uphy_SchedulingManager_drxGap stateId=%d, numOfCampingListenRequests=%d, run at sfn = %d slot = %d
Line 2799: postponedGapStateIdPtr == NULL pointer
Line 2799: postponedGapStateIdPtr == NULL pointer
Line 2825: uphy_SchedulingManager_drxGap when numOfCampingListenRequests=0
Line 2825: uphy_SchedulingManager_drxGap when numOfCampingListenRequests=0
Line 2838: RSN=%d:|__uphy_SchedulingManager_edrxGap stateId=%d, numOfCampingListenRequests=%d, run at sfn = %d slot = %d
Line 2838: RSN=%d:|__uphy_SchedulingManager_edrxGap stateId=%d, numOfCampingListenRequests=%d, run at sfn = %d slot = %d
Line 2893: [IRAT U2G] GsmRssiGapCommonProcessing called for %d (Gsm:0, Dcs:), noOfRssiMeasurements=%d
Line 2893: [IRAT U2G] GsmRssiGapCommonProcessing called for %d (Gsm:0, Dcs:), noOfRssiMeasurements=%d
Line 2897: compoundMsg is NULL
Line 2897: compoundMsg is NULL
Line 2911: compoundMsg->frequencyList is NULL
Line 2911: compoundMsg->frequencyList is NULL
Line 2977: uphy_CSchedulingManager_GsmRssiGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 2977: uphy_CSchedulingManager_GsmRssiGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 2983: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 2983: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 3040: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3040: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3046: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3046: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3072: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 3072: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 3074: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed
Line 3074: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed
Line 3082: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed
Line 3082: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed
Line 3091: [IRAT U2G] GsmRSSIGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 3091: [IRAT U2G] GsmRSSIGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 3102: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips sign=%d
Line 3102: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips sign=%d
Line 3110: [IRAT U2G] GsmRssiGapCommonProcessing: AddGsmTime failed
Line 3110: [IRAT U2G] GsmRssiGapCommonProcessing: AddGsmTime failed
Line 3115: [IRAT U2G] GsmRssiGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 3115: [IRAT U2G] GsmRssiGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 3118: [IRAT U2G] GsmRssiGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 3118: [IRAT U2G] GsmRssiGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 3121: [IRAT U2G] GsmRssiGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 3121: [IRAT U2G] GsmRssiGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 3124: [IRAT U2G] GsmRssiGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 3124: [IRAT U2G] GsmRssiGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 3144: [IRAT U2G] GsmRssiGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 3144: [IRAT U2G] GsmRssiGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 3171: [IRAT U2G] GsmRssiGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3171: [IRAT U2G] GsmRssiGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3225: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3225: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3232: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3232: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3271: [IRAT U2G] GsmRssiGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3271: [IRAT U2G] GsmRssiGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3326: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3326: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3333: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3333: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3356: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 3356: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 3417: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3417: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3424: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3424: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3491: [IRAT U2G] GsmOrDcs - illegal value
Line 3513: [IRAT U2G] GsmRssiGapCommonProcessing: failed to find any jobs
Line 3513: [IRAT U2G] GsmRssiGapCommonProcessing: failed to find any jobs
Line 3529: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3529: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3609: [IRAT U2G] GsmFchGapCommonProcessing: gsmScheduleTimingOffset=%d, gsmBurstTimingOffset=%d
Line 3609: [IRAT U2G] GsmFchGapCommonProcessing: gsmScheduleTimingOffset=%d, gsmBurstTimingOffset=%d
Line 3613: [IRAT U2G] GsmFchGapCommonProcessing called for %d (GsmFch:2, DcsFch:3), ARFCN=%d
Line 3613: [IRAT U2G] GsmFchGapCommonProcessing called for %d (GsmFch:2, DcsFch:3), ARFCN=%d
Line 3661: uphy_CSchedulingManager_GsmFchGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 3661: uphy_CSchedulingManager_GsmFchGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 3662: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3662: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3704: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 3704: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 3724: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 3724: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 3726: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed
Line 3726: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed
Line 3734: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed
Line 3734: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed
Line 3744: [IRAT U2G] GsmFchGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 3744: [IRAT U2G] GsmFchGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 3754: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips sign=%d
Line 3754: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips sign=%d
Line 3762: [IRAT U2G] GsmFchGapCommonProcessing: AddGsmTime failed
Line 3762: [IRAT U2G] GsmFchGapCommonProcessing: AddGsmTime failed
Line 3769: [IRAT U2G] GsmFchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 3769: [IRAT U2G] GsmFchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 3772: [IRAT U2G] GsmFchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 3772: [IRAT U2G] GsmFchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 3775: [IRAT U2G] GsmFchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 3775: [IRAT U2G] GsmFchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 3778: [IRAT U2G] GsmFchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 3778: [IRAT U2G] GsmFchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 3808: [IRAT U2G] GsmFchGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 3808: [IRAT U2G] GsmFchGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 3835: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3835: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3879: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 3879: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 3912: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3912: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3958: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 3958: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 3971: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 3971: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 4028: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 4028: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 4088: [IRAT U2G] GsmOrDcs - illegal value
Line 4088: [IRAT U2G] GsmOrDcs - illegal value
Line 4098: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for GsmFchAcquisitionReq
Line 4098: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for GsmFchAcquisitionReq
Line 4104: [IRAT U2G] GsmFchGapCommonProcessing: failed to find any jobs on ARFCN %d
Line 4104: [IRAT U2G] GsmFchGapCommonProcessing: failed to find any jobs on ARFCN %d
Line 4172: [IRAT U2G] GsmSchGapCommonProcessing called for %d (GsmSch:4, DcsSch:5), ARFCN=%d
Line 4172: [IRAT U2G] GsmSchGapCommonProcessing called for %d (GsmSch:4, DcsSch:5), ARFCN=%d
Line 4221: [IRAT U2G] GsmSchGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 4221: [IRAT U2G] GsmSchGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 4222: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4222: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4265: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4265: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4284: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 4284: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 4288: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed
Line 4288: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed
Line 4297: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed
Line 4297: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed
Line 4307: [IRAT U2G] GsmSchGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 4307: [IRAT U2G] GsmSchGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 4318: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips, sign=%d
Line 4318: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips, sign=%d
Line 4326:  
Line 4326:  
Line 4332: [IRAT U2G] GsmSchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 4332: [IRAT U2G] GsmSchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 4335: [IRAT U2G] GsmSchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 4335: [IRAT U2G] GsmSchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 4338: [IRAT U2G] GsmSchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 4338: [IRAT U2G] GsmSchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 4341: [IRAT U2G] GsmSchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 4341: [IRAT U2G] GsmSchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 4372: [IRAT U2G] GsmSchGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 4372: [IRAT U2G] GsmSchGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 4399: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4399: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4443: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4443: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4475: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4475: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4520: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4520: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4532: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 4532: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 4588: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4588: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4646: [IRAT U2G] GsmOrDcs - illegal value
Line 4646: [IRAT U2G] GsmOrDcs - illegal value
Line 4658: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for GsmSchAcquisitionReq
Line 4658: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for GsmSchAcquisitionReq
Line 4665: [IRAT U2G] GsmSchGapCommonProcessing failed to find any jobs on ARFCN=%d
Line 4665: [IRAT U2G] GsmSchGapCommonProcessing failed to find any jobs on ARFCN=%d
Line 4724: synchroListen should be called from EUphySchedulerStateId_CompModeFddGap
Line 4724: synchroListen should be called from EUphySchedulerStateId_CompModeFddGap
Line 4728: synchroListen: stateId=%d, RSN=%d, Sfn=%d, Slot=%d
Line 4728: synchroListen: stateId=%d, RSN=%d, Sfn=%d, Slot=%d
Line 4736: synchroListen:numOfGapPostponedStateInfoStackElems=%d > : numOfCampingListenRequests=%d
Line 4736: synchroListen:numOfGapPostponedStateInfoStackElems=%d > : numOfCampingListenRequests=%d
Line 4743: |__DISCARDED: synchroListenSTF: a postponed gap state discarded because a channel configuration last more than one DRX cycle
Line 4743: |__DISCARDED: synchroListenSTF: a postponed gap state discarded because a channel configuration last more than one DRX cycle
Line 4752: GetCampingDlUarfcn
Line 4752: GetCampingDlUarfcn
Line 4759: uphy_SchedulingManager_synchroListen : RF use is paused
Line 4759: uphy_SchedulingManager_synchroListen : RF use is paused
Line 4776: uphy_SchedulingManager_synchroListen: interruptedUarfcn=%d should not happen after Fach Gap - in Fach gap operation should be completed
Line 4776: uphy_SchedulingManager_synchroListen: interruptedUarfcn=%d should not happen after Fach Gap - in Fach gap operation should be completed
Line 4801: synchroListen: stateId=%d, RSN=%d, Sfn=%d, Slot=%d
Line 4801: synchroListen: stateId=%d, RSN=%d, Sfn=%d, Slot=%d
Line 4809: synchroListen:numOfGapPostponedStateInfoStackElems=%d > : numOfCampingListenRequests=%d
Line 4809: synchroListen:numOfGapPostponedStateInfoStackElems=%d > : numOfCampingListenRequests=%d
Line 4816: |__DISCARDED: synchroListenSTF: a postponed gap state discarded because a channel configuration last more than one DRX cycle
Line 4816: |__DISCARDED: synchroListenSTF: a postponed gap state discarded because a channel configuration last more than one DRX cycle
Line 4855: fachGapStateInfo == NULL pointer
Line 4855: fachGapStateInfo == NULL pointer
Line 4859: RSN=%d:Fach Occasion Gap requested for start RSN=%d: sfn = %d slot = %d, duration sfn = %d slot = %d
Line 4859: RSN=%d:Fach Occasion Gap requested for start RSN=%d: sfn = %d slot = %d, duration sfn = %d slot = %d
Line 4876: uphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 4876: uphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 4952: (Fach configured)FachGapSTF cannot be executed as RF isn't available
Line 4952: (Fach configured)FachGapSTF cannot be executed as RF isn't available
Line 4963: (Fach configured)FachGapSTF can be executed as RF is available
Line 4963: (Fach configured)FachGapSTF can be executed as RF is available
Line 4968: (HS configured and fach not configured  )FachGapSTF is getting executed (Rf check bypass)
Line 4968: (HS configured and fach not configured  )FachGapSTF is getting executed (Rf check bypass)
Line 4975: FachGapSTF cannot be executed as RF isn't available
Line 4975: FachGapSTF cannot be executed as RF isn't available
Line 4986: FachGapSTF can be executed as RF is available
Line 4986: FachGapSTF can be executed as RF is available
Line 4994: fachGapSTF: Unexpected measurementState=%d (should be 3)
Line 4994: fachGapSTF: Unexpected measurementState=%d (should be 3)
Line 5006: uphy_SchedulingManager_fachGapSTF: fachGapStateInfoPtr == NULL pointer
Line 5006: uphy_SchedulingManager_fachGapSTF: fachGapStateInfoPtr == NULL pointer
Line 5014: uphy_SchedulingManager_fachGapSTF - Uarfcn token delays - FACH GAP MISSED
Line 5014: uphy_SchedulingManager_fachGapSTF - Uarfcn token delays - FACH GAP MISSED
Line 5024: uphy_SchedulingManager_fachGapSTF but campingDlUarfcn did not found - probably release took place but outstanding token
Line 5024: uphy_SchedulingManager_fachGapSTF but campingDlUarfcn did not found - probably release took place but outstanding token
Line 5032: RSN=%d:|__ :uphy_SchedulingManager_fachGapSTF stateId=%d sfn = %d slot = %d
Line 5032: RSN=%d:|__ :uphy_SchedulingManager_fachGapSTF stateId=%d sfn = %d slot = %d
Line 5038: :   FachGap IGNORED - PRACH START CMD ACTIVE
Line 5038: :   FachGap IGNORED - PRACH START CMD ACTIVE
Line 5050: :   FachGap IGNORED - BCH configuration is active
Line 5050: :   FachGap IGNORED - BCH configuration is active
Line 5083: uphy_SchedulingManager_fachGapSTF: changed uarfcn during BCH decoding
Line 5083: uphy_SchedulingManager_fachGapSTF: changed uarfcn during BCH decoding
Line 5111: uphy_SchedulingManager_fachGapSTF:setImmediateDlUarfcn did not called: uarfcn=campingUarfcn=%d
Line 5111: uphy_SchedulingManager_fachGapSTF:setImmediateDlUarfcn did not called: uarfcn=campingUarfcn=%d
Line 5121: uphy_SchedulingManager_fachGap when numOfCampingListenRequests=0
Line 5121: uphy_SchedulingManager_fachGap when numOfCampingListenRequests=0
Line 5166: fddGapStateInfo == NULL pointer
Line 5166: fddGapStateInfo == NULL pointer
Line 5170: :    currentCfn=%d, fddCfn=%d, startSlot=%d, fddRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5170: :    currentCfn=%d, fddCfn=%d, startSlot=%d, fddRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5208: gsmGapStateInfo == NULL pointer
Line 5208: gsmGapStateInfo == NULL pointer
Line 5212: :    currentCfn=%d, gsmCfn=%d, startSlot=%d, gsmRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5212: :    currentCfn=%d, gsmCfn=%d, startSlot=%d, gsmRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5248: eutraGapStateInfo == NULL pointer
Line 5248: eutraGapStateInfo == NULL pointer
Line 5252: :    currentCfn=%d, eutraCfn=%d, startSlot=%d, eutraRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5252: :    currentCfn=%d, eutraCfn=%d, startSlot=%d, eutraRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5337: checkImpendingGap Fach occasion cfn %d pending %d virtualGapManager_ptr->fachCfnBuffer[cfn] %d nonGapDlUarfcn %d arfcn %d
Line 5337: checkImpendingGap Fach occasion cfn %d pending %d virtualGapManager_ptr->fachCfnBuffer[cfn] %d nonGapDlUarfcn %d arfcn %d
Line 5350: isUarfcnAssignedToNextGap = FALSE
Line 5350: isUarfcnAssignedToNextGap = FALSE
Line 5358: checkImpendingGap startCheck %d saftySlots %d endCheck %d safteySlotsGapend %d (startCheck > saftySlots) %d (endCheck > safteySlotsGapend) %d
Line 5358: checkImpendingGap startCheck %d saftySlots %d endCheck %d safteySlotsGapend %d (startCheck > saftySlots) %d (endCheck > safteySlotsGapend) %d
Line 5365: checkImpendingGap(gapStartRSN=%d gapEndRSN=%d currentRSN=%d) stateId %d saftySlots %d safteySlotsGapend %d pending %d
Line 5365: checkImpendingGap(gapStartRSN=%d gapEndRSN=%d currentRSN=%d) stateId %d saftySlots %d safteySlotsGapend %d pending %d
Line 5405: RF use is paused! Ignore MsgId=%d
Line 5405: RF use is paused! Ignore MsgId=%d
Line 5414: Searcher use is paused or not in use! Ignore MsgId=%d
Line 5414: Searcher use is paused or not in use! Ignore MsgId=%d
Line 5425: Out of range MsgId=%d
Line 5425: Out of range MsgId=%d
Line 5431: getFbId returns FALSE
Line 5431: getFbId returns FALSE
Line 5442: processFbMsg msgId=%d: TransactId=%d Deadline=%d missed at: RSN=%d
Line 5442: processFbMsg msgId=%d: TransactId=%d Deadline=%d missed at: RSN=%d
Line 5463: processFbMsg[%d] - don't kick scheduling in when reqHeader.arfcn %d == campingDlUarfcn %d and gap channels are configured
Line 5463: processFbMsg[%d] - don't kick scheduling in when reqHeader.arfcn %d == campingDlUarfcn %d and gap channels are configured
Line 5475: [FA%d] processFbMsg: msgFbId=%d campingRequest stored to the list - no available FbFsm
Line 5475: [FA%d] processFbMsg: msgFbId=%d campingRequest stored to the list - no available FbFsm
Line 5497: [FA%d] processFbMsg: msgFbId=%d 
Line 5497: [FA%d] processFbMsg: msgFbId=%d 
Line 5524: [FA] FA2_waiting = %d numOfMsgs=%d msgFbId=%d processFbMsg[%d] in FA2 working:::uphy_CArfcnListsCollector(uarfcn=%d)
Line 5524: [FA] FA2_waiting = %d numOfMsgs=%d msgFbId=%d processFbMsg[%d] in FA2 working:::uphy_CArfcnListsCollector(uarfcn=%d)
Line 5541: Impending processFbMsg[%d] in active GSM compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5541: Impending processFbMsg[%d] in active GSM compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5580: Impending processFbMsg[%d] in active Eutra compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5580: Impending processFbMsg[%d] in active Eutra compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5619: Impending processFbMsg[%d] in active compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5619: Impending processFbMsg[%d] in active compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5666: processFbMsg[%d] in active fach gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5666: processFbMsg[%d] in active fach gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5827: no schedule for campingUarfcn (isGapScheduled = %d)
Line 5827: no schedule for campingUarfcn (isGapScheduled = %d)
Line 5853: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 5853: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 5927: fbFsm %d
Line 5927: fbFsm %d
Line 5953: Offline: buffering not finished. uarfcn = %d
Line 5953: Offline: buffering not finished. uarfcn = %d
Line 6020: [IRAT U2G] Out of range MsgId=%d
Line 6020: [IRAT U2G] Out of range MsgId=%d
Line 6024: [IRAT U2G] processGsmMsg for ARFCN=%d, MsgId=%d (RSSI: 15, FCH: 16, SCH: 17), isDCS=%d
Line 6024: [IRAT U2G] processGsmMsg for ARFCN=%d, MsgId=%d (RSSI: 15, FCH: 16, SCH: 17), isDCS=%d
Line 6139: sendListenArfcnTransitionAck : AckTransitionMsg - unexpected client
Line 6139: sendListenArfcnTransitionAck : AckTransitionMsg - unexpected client
Line 6155: send
Line 6155: send
Line 6179: schedulingManager_ptr->releaseAllMsg == NULL pointer
Line 6179: schedulingManager_ptr->releaseAllMsg == NULL pointer
Line 6198: send
Line 6198: send
Line 6238: send
Line 6238: send
Line 6264: fbFilterMap == NULL
Line 6264: fbFilterMap == NULL
Line 6273: areAllCollectorsEmpty i=%d
Line 6312: fbFilterMap == NULL
Line 6312: fbFilterMap == NULL
Line 6379: checkAndLaunchDoScheduling: RSN=%d, currentStateId=%d
Line 6379: checkAndLaunchDoScheduling: RSN=%d, currentStateId=%d
Line 6431: doSchedulingCalled[%d] currentStateId=%d
Line 6431: doSchedulingCalled[%d] currentStateId=%d
Line 6438: Listen state but campingDlUarfcn did not found - probably release took place but outstanding doScheduligToken
Line 6438: Listen state but campingDlUarfcn did not found - probably release took place but outstanding doScheduligToken
Line 6454: doScheduling: currentStateId=%d(0:None/2:DrxGap), isStateChangeTriggered=%d
Line 6454: doScheduling: currentStateId=%d(0:None/2:DrxGap), isStateChangeTriggered=%d
Line 6466: uarfcnToServ = %d
Line 6466: uarfcnToServ = %d
Line 6472: interruptedDlUarfcn = %d
Line 6472: interruptedDlUarfcn = %d
Line 6481: doScheduling: currentStateId=%d(0:None/2:DrxGap), isStateChangeTriggered=%d
Line 6481: doScheduling: currentStateId=%d(0:None/2:DrxGap), isStateChangeTriggered=%d
Line 6499: doScheduling is not used for Compressed Mode Gap or Fach Gap states:  currentStateId=%d
Line 6499: doScheduling is not used for Compressed Mode Gap or Fach Gap states:  currentStateId=%d
Line 6505: doScheduling: Unknown stateId=%d
Line 6505: doScheduling: Unknown stateId=%d
Line 6519: fachGapDoScheduling but campingDlUarfcn did not found - probably release took place but outstanding token
Line 6519: fachGapDoScheduling but campingDlUarfcn did not found - probably release took place but outstanding token
Line 6525: fachGapDoScheduling: previously interrupted uarfcn=%d
Line 6525: fachGapDoScheduling: previously interrupted uarfcn=%d
Line 6597: compModeFddGapDoScheduling: campingDlUarfcn did not found
Line 6597: compModeFddGapDoScheduling: campingDlUarfcn did not found
Line 6642: areAllCollectorsEmpty=TRUE
Line 6663: offlineUarfcnTooOld
Line 6663: offlineUarfcnTooOld
Line 6766: fbFilterMap == NULL pointer
Line 6766: fbFilterMap == NULL pointer
Line 6777: schedulingManager_ptr->fbFsmHandlerArray[%d] == NULL pointer
Line 6777: schedulingManager_ptr->fbFsmHandlerArray[%d] == NULL pointer
Line 6815: EUphySchedulerFbId_SearcherSsch - getReplyMsgSize == NULL pointer
Line 6815: EUphySchedulerFbId_SearcherSsch - getReplyMsgSize == NULL pointer
Line 6819: Ssch request - could not flag set
Line 6819: Ssch request - could not flag set
Line 6833: EUphySchedulerFbId_SearcherSsch - replyMsg == NULL pointer
Line 6833: EUphySchedulerFbId_SearcherSsch - replyMsg == NULL pointer
Line 6927: provisionIdleFsms: synchStateInfo but not EUphySchedulerStateId_CompModeFddGap synchStateId=%d
Line 6927: provisionIdleFsms: synchStateInfo but not EUphySchedulerStateId_CompModeFddGap synchStateId=%d
Line 6956: provisionIdleFsms(uarfcn=%d, fbFsm=%d)
Line 6956: provisionIdleFsms(uarfcn=%d, fbFsm=%d)
Line 7022: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 7022: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 7032: [CompressedMode] alreay running, so this request [%d %d] uarfcn=%d should be queueing!!!!
Line 7032: [CompressedMode] alreay running, so this request [%d %d] uarfcn=%d should be queueing!!!!
Line 7064: [ProvisionIdleFsms] bufferingCmd is NULL
Line 7064: [ProvisionIdleFsms] bufferingCmd is NULL
Line 7069: [ProvisionIdleFsms] UARFCN MISMATCH - INSERT : buffered_uarfcn = %d, request uarfcn = %d
Line 7069: [ProvisionIdleFsms] UARFCN MISMATCH - INSERT : buffered_uarfcn = %d, request uarfcn = %d
Line 7093: Command handler is active so cannot execute the command , inserting in ArfcnListCollector
Line 7093: Command handler is active so cannot execute the command , inserting in ArfcnListCollector
Line 7143: uphy_CSchedulingManager_fbFsmReady: releaseAllMsg
Line 7143: uphy_CSchedulingManager_fbFsmReady: releaseAllMsg
Line 7395: provision FbFsm[%d %d]in CM for campingUarfcn from lists ?not enough instances previosuly
Line 7395: provision FbFsm[%d %d]in CM for campingUarfcn from lists ?not enough instances previosuly
Line 7468: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 7468: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 7520: provision FbFsm[%d %d]in CM for uarfcn %d from lists
Line 7520: provision FbFsm[%d %d]in CM for uarfcn %d from lists
Line 7529: [ProvisionIdleFsms] bufferingCmd is NULL
Line 7529: [ProvisionIdleFsms] bufferingCmd is NULL
Line 7534: [uphy_CSchedulingManager_fbFsmReady] UARFCN MISMATCH - INSERT : buffered_uarfcn = %d, request_uarfcn = %d
Line 7534: [uphy_CSchedulingManager_fbFsmReady] UARFCN MISMATCH - INSERT : buffered_uarfcn = %d, request_uarfcn = %d
Line 7561: No campinDlUarfcn
Line 7561: No campinDlUarfcn
Line 7593: RSN=%d:setImmediateDlUarfcn ATEMPT: forced UARFCN=%d isCampingUarfcn=%d
Line 7593: RSN=%d:setImmediateDlUarfcn ATEMPT: forced UARFCN=%d isCampingUarfcn=%d
Line 7630: RSN=%d:setImmediateDlUarfcn ATEMPT: isInterruptedDlUarfcn=%d, INTERRUPTED UARFCN=%d
Line 7630: RSN=%d:setImmediateDlUarfcn ATEMPT: isInterruptedDlUarfcn=%d, INTERRUPTED UARFCN=%d
Line 7653: RSN=%d:setImmediateDlUarfcn ATEMPT: isInterruptedDlUarfcn=%d, not forced UARFCN=%d
Line 7653: RSN=%d:setImmediateDlUarfcn ATEMPT: isInterruptedDlUarfcn=%d, not forced UARFCN=%d
Line 7700: :   UARFCN=%d SET at stateId=%d(No/ListenArfcn/DrxGap/FachGap/CmFdd/Dcs)
Line 7700: :   UARFCN=%d SET at stateId=%d(No/ListenArfcn/DrxGap/FachGap/CmFdd/Dcs)
Line 7705: Critical: uarfcnCmd is NULL
Line 7705: Critical: uarfcnCmd is NULL
Line 7711: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 7711: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 7745: [RX DIV][SRCH] Turn on
Line 7745: [RX DIV][SRCH] Turn on
Line 7750: [RX DIV][SRCH] No Turn on  measurementState=%d schedulerStateId=%d
Line 7750: [RX DIV][SRCH] No Turn on  measurementState=%d schedulerStateId=%d
Line 7769: uarfcnCmd exec failure: errCode=%d, addErrCode=%d
Line 7769: uarfcnCmd exec failure: errCode=%d, addErrCode=%d
Line 7790: AFC disable successfully. campingDlUarfcn %d, newUarfcn %d
Line 7790: AFC disable successfully. campingDlUarfcn %d, newUarfcn %d
Line 7796: AFC disable failed
Line 7796: AFC disable failed
Line 7805: AFC enable successfully. campingDlUarfcn %d, newUarfcn %d
Line 7805: AFC enable successfully. campingDlUarfcn %d, newUarfcn %d
Line 7811: AFC enable failed
Line 7811: AFC enable failed
Line 7878: isUarfcnCompleted: Active CmdHandlers and return FALSE
Line 7878: isUarfcnCompleted: Active CmdHandlers and return FALSE
Line 7887: isUarfcnCompleted: currentDlUarfcn=%d, uarfcnNotSettledYet=%d, interruptedDlUarfcn=%d, returnValue=%d
Line 7887: isUarfcnCompleted: currentDlUarfcn=%d, uarfcnNotSettledYet=%d, interruptedDlUarfcn=%d, returnValue=%d
Line 7928: ### launchSetFddGapDlUarfcn RSN=%d:launchSetFddGapDlUarfcn: ***targetRSNTimeStamp=%d
Line 7928: ### launchSetFddGapDlUarfcn RSN=%d:launchSetFddGapDlUarfcn: ***targetRSNTimeStamp=%d
Line 7940: RSN=%d:launchSetFddGapDlUarfcn: gapPeriodRSNTimeStamp=%d
Line 7940: RSN=%d:launchSetFddGapDlUarfcn: gapPeriodRSNTimeStamp=%d
Line 7973: launchSetGsmGapDlUarfcn: GSM RSSI
Line 7973: launchSetGsmGapDlUarfcn: GSM RSSI
Line 7978: launchSetGsmGapDlUarfcn: GSM INIT BSIC
Line 7978: launchSetGsmGapDlUarfcn: GSM INIT BSIC
Line 7983: launchSetGsmGapDlUarfcn: GSM BSIC RECONFIRMATION
Line 7983: launchSetGsmGapDlUarfcn: GSM BSIC RECONFIRMATION
Line 7988: tgmp unknown
Line 7988: tgmp unknown
Line 8001: RSN=%d:launchSetGsmGapDlUarfcn: gapPeriodRSNTimeStamp=%d
Line 8001: RSN=%d:launchSetGsmGapDlUarfcn: gapPeriodRSNTimeStamp=%d
Line 8057: RSN=%d:launchSetEutraGapDlUarfcn: synchStateInfoPtr->stateStartAbsCtr=%d stop timing %d
Line 8057: RSN=%d:launchSetEutraGapDlUarfcn: synchStateInfoPtr->stateStartAbsCtr=%d stop timing %d
Line 8095: setFddGapDlUarfcnSTF: retrun due to no channel state!
Line 8095: setFddGapDlUarfcnSTF: retrun due to no channel state!
Line 8108: FddGapDlUarfcnSTF in Pause state
Line 8108: FddGapDlUarfcnSTF in Pause state
Line 8138: setGsmGapDlUarfcnSTF: retrun due to no channel state!
Line 8138: setGsmGapDlUarfcnSTF: retrun due to no channel state!
Line 8176: setEutraGapDlUarfcnSTF: retrun due to no channel state!
Line 8176: setEutraGapDlUarfcnSTF: retrun due to no channel state!
Line 8209: uphy_CScheduling_FDDGapBufferingSTF: isOfflineUarfcn = %d, offlineUarfcn = %d
Line 8209: uphy_CScheduling_FDDGapBufferingSTF: isOfflineUarfcn = %d, offlineUarfcn = %d
Line 8215: bufferingCmd->generic_cmd_attributes.state != EHalCmdStateIdle
Line 8215: bufferingCmd->generic_cmd_attributes.state != EHalCmdStateIdle
Line 8233: bufferingCmd exec failure
Line 8233: bufferingCmd exec failure
Line 8267: setFddGapDlUarfcn is called
Line 8267: setFddGapDlUarfcn is called
Line 8286: setFddGapDlUarfcn: synchStateInfoPtr == NULL pointer
Line 8286: setFddGapDlUarfcn: synchStateInfoPtr == NULL pointer
Line 8296: RSN=%d: setFddGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 8296: RSN=%d: setFddGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 8306: setFddGapDlUarfcn: GapActive!!!!!!!
Line 8306: setFddGapDlUarfcn: GapActive!!!!!!!
Line 8328: setFDDGapDlUarfcn: no running FDD TGPS !!!
Line 8328: setFDDGapDlUarfcn: no running FDD TGPS !!!
Line 8359: RSN=%d:setFddGapDlUarfcn: UARFCN NOT DECIDED yet at time: scheduling token did not get time to run
Line 8359: RSN=%d:setFddGapDlUarfcn: UARFCN NOT DECIDED yet at time: scheduling token did not get time to run
Line 8374: RSN=%d:setFddGapDlUarfcn: STEP BUSY - UARFCN not set
Line 8374: RSN=%d:setFddGapDlUarfcn: STEP BUSY - UARFCN not set
Line 8381: RSN=%d: setFddGapDlUarfcn:BUFFERING CMD BUSY - uarfcn not set this time
Line 8381: RSN=%d: setFddGapDlUarfcn:BUFFERING CMD BUSY - uarfcn not set this time
Line 8391: setFddGapDlUarfcn: uarfcn=%d, uarfcnCmdType=%d
Line 8391: setFddGapDlUarfcn: uarfcn=%d, uarfcnCmdType=%d
Line 8404: RSN=%d: uarfcn=%d uarfcnCmdType=%d NOT SET - SFN(BCH decoding) activity in progress
Line 8404: RSN=%d: uarfcn=%d uarfcnCmdType=%d NOT SET - SFN(BCH decoding) activity in progress
Line 8418: Critical: uarfcnCmd is NULL
Line 8418: Critical: uarfcnCmd is NULL
Line 8428: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 8428: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 8441: RSN=%d:setFddGapDlUarfcn: uarfcn=%d uarfcnCmdType=%d DECIDED
Line 8441: RSN=%d:setFddGapDlUarfcn: uarfcn=%d uarfcnCmdType=%d DECIDED
Line 8450: setFddGapDlUarfcn NOT DECIDED we should not reach here where we are about to set: uarfcn=%d uarfcnType=%d
Line 8450: setFddGapDlUarfcn NOT DECIDED we should not reach here where we are about to set: uarfcn=%d uarfcnType=%d
Line 8473: RSN=%d:setFddGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 8473: RSN=%d:setFddGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 8484: setFddGapDlUarfcn uphy_SetIsGapScheduled
Line 8484: setFddGapDlUarfcn uphy_SetIsGapScheduled
Line 8493: setFddGapDlUarfcn(): isOfflineUarfcn=%d, offlineUarfcn=%d, synchroGapUarfcnInfo.uarfcn=%d
Line 8493: setFddGapDlUarfcn(): isOfflineUarfcn=%d, offlineUarfcn=%d, synchroGapUarfcnInfo.uarfcn=%d
Line 8515: uarfcnCmd exec failure
Line 8515: uarfcnCmd exec failure
Line 8550: Buffering command is ACTIVE. Reset command and its handler
Line 8550: Buffering command is ACTIVE. Reset command and its handler
Line 8557: Buffering command is = %x or active for other stack
Line 8557: Buffering command is = %x or active for other stack
Line 8632:    :Offline Uarfcn still VAILID - UARFCN NOT SET
Line 8632:    :Offline Uarfcn still VAILID - UARFCN NOT SET
Line 8653: Buffering command is ACTIVE. Reset command and its handler
Line 8653: Buffering command is ACTIVE. Reset command and its handler
Line 8660: Buffering command is = %x or active for other stack
Line 8660: Buffering command is = %x or active for other stack
Line 8680: provision Step Fsms: fbFsm=0 - return
Line 8680: provision Step Fsms: fbFsm=0 - return
Line 8738: uarfcnCmd exec failure
Line 8738: uarfcnCmd exec failure
Line 8772: Buffering command is ACTIVE. Reset command and its handler
Line 8772: Buffering command is ACTIVE. Reset command and its handler
Line 8779: Buffering command is = %x or active for other stack
Line 8779: Buffering command is = %x or active for other stack
Line 8840: CFN=%d, RSN=%d: STEP1 of HWSignalSynch type requested, uarfcn=%d
Line 8840: CFN=%d, RSN=%d: STEP1 of HWSignalSynch type requested, uarfcn=%d
Line 8873: In setFddGapDlUarfcn, no msg available in arfcnlistcollector: uarfcn=%d
Line 8873: In setFddGapDlUarfcn, no msg available in arfcnlistcollector: uarfcn=%d
Line 8900: uarfcnCmd exec failure
Line 8900: uarfcnCmd exec failure
Line 8941: setGsmGapDlUarfcn is called
Line 8941: setGsmGapDlUarfcn is called
Line 8946: setGsmGapDlUarfcn cannot be executed as RF isn't available due to Pause
Line 8946: setGsmGapDlUarfcn cannot be executed as RF isn't available due to Pause
Line 8977: setGsmGapDlUarfcn: synchStateInfoPtr == NULL pointer
Line 8977: setGsmGapDlUarfcn: synchStateInfoPtr == NULL pointer
Line 8986: RSN=%d: setGsmGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 8986: RSN=%d: setGsmGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 8997: setGsmGapDlUarfcn: GapActive!!!!!!!
Line 8997: setGsmGapDlUarfcn: GapActive!!!!!!!
Line 9019: setGsmGapDlUarfcn: no running GSM TGPS !!!
Line 9019: setGsmGapDlUarfcn: no running GSM TGPS !!!
Line 9042: Critical: uarfcnCmd is NULL
Line 9042: Critical: uarfcnCmd is NULL
Line 9052: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 9052: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 9070: RSN=%d:setGsmGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 9070: RSN=%d:setGsmGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 9103: uarfcnCmd exec failure
Line 9103: uarfcnCmd exec failure
Line 9108: [IRAT U2G] setGsmGapDlUarfcn: RxUarfcnCmd complete !!!
Line 9108: [IRAT U2G] setGsmGapDlUarfcn: RxUarfcnCmd complete !!!
Line 9151: setGsmGapDlUarfcn cannot be executed as RF isn't available due to Pause
Line 9151: setGsmGapDlUarfcn cannot be executed as RF isn't available due to Pause
Line 9175: setEutraGapDlUarfcn is called
Line 9175: setEutraGapDlUarfcn is called
Line 9178: setEutraGapDlUarfcn: synchStateInfoPtr == NULL pointer
Line 9178: setEutraGapDlUarfcn: synchStateInfoPtr == NULL pointer
Line 9187: RSN=%d: setEutraGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 9187: RSN=%d: setEutraGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 9198: setEutraGapDlUarfcn: GapActive!!!!!!!
Line 9198: setEutraGapDlUarfcn: GapActive!!!!!!!
Line 9221: setEutraGapDlUarfcn: no running FDD TGPS !!!
Line 9221: setEutraGapDlUarfcn: no running FDD TGPS !!!
Line 9245: Critical: uarfcnCmd is NULL
Line 9245: Critical: uarfcnCmd is NULL
Line 9255: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 9255: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 9273: RSN=%d:setEutraGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 9273: RSN=%d:setEutraGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 9307: uarfcnCmd exec failure
Line 9307: uarfcnCmd exec failure
Line 9312: [IRAT U2L] setEutraGapDlUarfcn: RxUarfcnCmd complete !!!
Line 9312: [IRAT U2L] setEutraGapDlUarfcn: RxUarfcnCmd complete !!!
Line 9356: buffering Timer started. isOnlineBufferingOld=%d;
Line 9356: buffering Timer started. isOnlineBufferingOld=%d;
Line 9361: buffering Timer is not started. isOnlineBufferingOld=%d;
Line 9361: buffering Timer is not started. isOnlineBufferingOld=%d;
Line 9374: [AMR decoding] ]isBufferingVaild: isOnlineBufferingOld = %d, BufferOngoing = %d, ret = %d
Line 9374: [AMR decoding] ]isBufferingVaild: isOnlineBufferingOld = %d, BufferOngoing = %d, ret = %d
Line 9396: [DRX Buf reuse] isBufferingVaild: measurementState= %d,(idle:),uarfcn = %d buffered_uarfcn = %d, ret=%d
Line 9396: [DRX Buf reuse] isBufferingVaild: measurementState= %d,(idle:),uarfcn = %d buffered_uarfcn = %d, ret=%d
Line 9407: 		: isBufferingVaild: buffering is required: isOnlineBufferingOld=%d, buffered_carrierInfo=%d, carrierInfo=%d, buffered_uarfcn=%d, uarfcn=%d, 
Line 9407: 		: isBufferingVaild: buffering is required: isOnlineBufferingOld=%d, buffered_carrierInfo=%d, carrierInfo=%d, buffered_uarfcn=%d, uarfcn=%d, 
Line 9424: onlineBufferingUarfcnTooOld
Line 9424: onlineBufferingUarfcnTooOld
Line 9446:  onlineBufferingUarfcnTooOld: Buffer Cmd execute!! carrierInfo=%d, uarfcn=%d, BufferLock=%d
Line 9446:  onlineBufferingUarfcnTooOld: Buffer Cmd execute!! carrierInfo=%d, uarfcn=%d, BufferLock=%d
Line 9452: setNonGapDlUarfcn: bufferingCmd exec failure
Line 9452: setNonGapDlUarfcn: bufferingCmd exec failure
Line 9461: onlineBufferingUarfcnTooOld: Can't execute bufferingCmd AmrSlotmode =%d, isMpRunning = %d
Line 9461: onlineBufferingUarfcnTooOld: Can't execute bufferingCmd AmrSlotmode =%d, isMpRunning = %d
Line 9513:  setNonGapDlUarfcn: Buffer Cmd execute!! isOfflineUarfcn=%d, offlineUarfcn=%d, synchroGapUarfcnInfo.uarfcn=%d, BufferLock=%d
Line 9513:  setNonGapDlUarfcn: Buffer Cmd execute!! isOfflineUarfcn=%d, offlineUarfcn=%d, synchroGapUarfcnInfo.uarfcn=%d, BufferLock=%d
Line 9524: setNonGapDlUarfcn: bufferingCmd exec failure
Line 9524: setNonGapDlUarfcn: bufferingCmd exec failure
Line 9547: 	setNonGapDlUarfcn : Buffering is active, BufferLock=%d, isOnlineBufferingOld=%d, buffered_uarfcn = %d
Line 9547: 	setNonGapDlUarfcn : Buffering is active, BufferLock=%d, isOnlineBufferingOld=%d, buffered_uarfcn = %d
Line 9564: Buffering command is ACTIVE. Reset command and its handler.
Line 9564: Buffering command is ACTIVE. Reset command and its handler.
Line 9573: Buffering command is = %x or active for other stack
Line 9573: Buffering command is = %x or active for other stack
Line 9588: Buffering command is ACTIVE due to no response.
Line 9588: Buffering command is ACTIVE due to no response.
Line 9604: Step3 or MP is running. Can't have buffer!!!!!
Line 9604: Step3 or MP is running. Can't have buffer!!!!!
Line 9617: GetNonGapBufferingAging_period: agingLength = %d
Line 9617: GetNonGapBufferingAging_period: agingLength = %d
Line 9643: fbFilterMap == NULL
Line 9643: fbFilterMap == NULL
Line 9735: getArfcnPriorityInfo: isFound=FALSE - isRestrictedUarfcn=%d, restrictedUarfcn=%d
Line 9735: getArfcnPriorityInfo: isFound=FALSE - isRestrictedUarfcn=%d, restrictedUarfcn=%d
Line 9780: [FA%d] Unexpected MsgId=%d
Line 9780: [FA%d] Unexpected MsgId=%d
Line 9795: [FA%d] Unexpected MsgId=%d
Line 9795: [FA%d] Unexpected MsgId=%d
Line 9803: Unexpected MsgId=%d
Line 9803: Unexpected MsgId=%d
Line 9839: Unknown stateId=%d
Line 9839: Unknown stateId=%d
Line 10085: [IRAT U2G] AFC disable successfully.
Line 10085: [IRAT U2G] AFC disable successfully.
Line 10093: [IRAT U2G] AfcDisableCmd failed. errCode=%d, addErrCode=%d
Line 10093: [IRAT U2G] AfcDisableCmd failed. errCode=%d, addErrCode=%d
Line 10108: [IRAT U2G] u2GAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 10108: [IRAT U2G] u2GAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 10139: [IRAT U2G] gsm2UmtsAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 10139: [IRAT U2G] gsm2UmtsAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 10153: [IRAT U2G] g2UAntennaSwitchSTF: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 10153: [IRAT U2G] g2UAntennaSwitchSTF: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 10171: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 10171: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 10184: [IRAT U2G] gsm2UmtsAntennaSwitchSTF : UE did not camp to any frequency
Line 10184: [IRAT U2G] gsm2UmtsAntennaSwitchSTF : UE did not camp to any frequency
Line 10198: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RF Rx ON command exec failure Error %d, Additional Error %d
Line 10198: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RF Rx ON command exec failure Error %d, Additional Error %d
Line 10205: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RfRxOn
Line 10205: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RfRxOn
Line 10210: Rxuarfcn_Check: In Func = %s  Calling EHalRfRxUarfcnCmd & Setting rxOnlyMode = TRUE To Enable interrupts
Line 10210: Rxuarfcn_Check: In Func = %s  Calling EHalRfRxUarfcnCmd & Setting rxOnlyMode = TRUE To Enable interrupts
Line 10222: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 10222: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 10228: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 10228: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 10233: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 10233: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 10241: gsm2UmtsAntennaSwitchSTF: sendResponseToUphyToken did not get time to run, so clear it
Line 10241: gsm2UmtsAntennaSwitchSTF: sendResponseToUphyToken did not get time to run, so clear it
Line 10263: RACH going Rx only mode false
Line 10263: RACH going Rx only mode false
Line 10277: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RF UARFCN Error %d, Additional Error %d
Line 10277: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RF UARFCN Error %d, Additional Error %d
Line 10298: taskId == NULL pointer
Line 10298: taskId == NULL pointer
Line 10311: :   Fb[%d %d]=busy 
Line 10311: :   Fb[%d %d]=busy 
Line 10351: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeFddGapSetUarfcnToken is canceled !!!
Line 10351: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeFddGapSetUarfcnToken is canceled !!!
Line 10359: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeEutraGapSetUarfcnToken is canceled !!!
Line 10359: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeEutraGapSetUarfcnToken is canceled !!!
Line 10376: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmRssiGapSetUarfcnToken is canceled !!!
Line 10376: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmRssiGapSetUarfcnToken is canceled !!!
Line 10384: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmInitBsicGapSetUarfcnToken is canceled !!!
Line 10384: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmInitBsicGapSetUarfcnToken is canceled !!!
Line 10392: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmBsicRecGapSetUarfcnToken is canceled !!!
Line 10392: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmBsicRecGapSetUarfcnToken is canceled !!!
Line 10406: [IRAT] uphy_cancelOngoingGapSetUarfcnTokensSTF: on-going compModeGapSetUarfcnTokens are canceled !!!
Line 10406: [IRAT] uphy_cancelOngoingGapSetUarfcnTokensSTF: on-going compModeGapSetUarfcnTokens are canceled !!!
Line 10428: [IRAT U2L] uphy_CschedulingManager_sendSearchMeasStopReq
Line 10428: [IRAT U2L] uphy_CschedulingManager_sendSearchMeasStopReq
Line 10450: S %d  ### Critical Error mMsg = NULL (%d)
Line 10450: S %d  ### Critical Error mMsg = NULL (%d)
Line 10499: [IRAT U2L] EutraCellSearchGapCommonProcessing: incorrect noOfCellSearchs=%d, should be %d
Line 10499: [IRAT U2L] EutraCellSearchGapCommonProcessing: incorrect noOfCellSearchs=%d, should be %d
Line 10553: [IRAT U2L] EutraCellSearchGapCommonProcessing: DiffUmtsTime failed
Line 10553: [IRAT U2L] EutraCellSearchGapCommonProcessing: DiffUmtsTime failed
Line 10560: [IRAT U2L] EutraCellSearchGapCommonProcessing: AddEutraTime failed
Line 10560: [IRAT U2L] EutraCellSearchGapCommonProcessing: AddEutraTime failed
Line 10565: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10565: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10568: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10568: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10571: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10571: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10574: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10574: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10621: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: failed to find any jobs
Line 10621: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: failed to find any jobs
Line 10635: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: compound message allocation failed:
Line 10635: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: compound message allocation failed:
Line 10650: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: sending dummy indication
Line 10650: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: sending dummy indication
Line 10698: S0  ### Critical Error eutraCellSearchResultsList  = NULL (%d)
Line 10698: S0  ### Critical Error eutraCellSearchResultsList  = NULL (%d)
Line 10706: [IRAT U2L] uphy_CEutraCellSearchStepFsm_processReplyInfo: AGC1 (%d), AGC2 (%d), AFC (%d)
Line 10706: [IRAT U2L] uphy_CEutraCellSearchStepFsm_processReplyInfo: AGC1 (%d), AGC2 (%d), AFC (%d)
Line 10776: [IRAT U2L] EutraMeasureGapCommonProcessing: incorrect noOfMeasures=%d, Should be equal to or smaller than %d
Line 10776: [IRAT U2L] EutraMeasureGapCommonProcessing: incorrect noOfMeasures=%d, Should be equal to or smaller than %d
Line 10854: [IRAT U2L] EutraMeasureGapCommonProcessing: compoundMsg should be made for ONLY ONE EARFCN !!!
Line 10854: [IRAT U2L] EutraMeasureGapCommonProcessing: compoundMsg should be made for ONLY ONE EARFCN !!!
Line 10859: [IRAT U2L] EutraMeasureGapCommonProcessing: listHead is NULL
Line 10859: [IRAT U2L] EutraMeasureGapCommonProcessing: listHead is NULL
Line 10880: [IRAT U2L] EutraMeasureGapCommonProcessing: DiffUmtsTime failed
Line 10880: [IRAT U2L] EutraMeasureGapCommonProcessing: DiffUmtsTime failed
Line 10887: [IRAT U2L] EutraMeasureGapCommonProcessing: AddEutraTime failed
Line 10887: [IRAT U2L] EutraMeasureGapCommonProcessing: AddEutraTime failed
Line 10892: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10892: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10895: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10895: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10898: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10898: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10901: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10901: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10956: [IRAT U2L] EutraMeasureGapCommonProcessing: failed to find any jobs
Line 10956: [IRAT U2L] EutraMeasureGapCommonProcessing: failed to find any jobs
Line 10964: [IRAT U2L]EutraMeasureGapCommonProcessing: compound message allocation failed:
Line 10964: [IRAT U2L]EutraMeasureGapCommonProcessing: compound message allocation failed:
Line 10979: [IRAT U2L] EutraMeasureGapCommon: sending dummy indication
Line 10979: [IRAT U2L] EutraMeasureGapCommon: sending dummy indication
Line 11020: S0  ### Critical Error eutraCellMeasResultsList = NULL (%d)
Line 11020: S0  ### Critical Error eutraCellMeasResultsList = NULL (%d)
Line 11028: [IRAT U2L] uphy_CEutraMeasureStepFsm_processReplyInfo: AGC1 (%d), AGC2 (%d), AFC (%d)
Line 11028: [IRAT U2L] uphy_CEutraMeasureStepFsm_processReplyInfo: AGC1 (%d), AGC2 (%d), AFC (%d)
Line 11089: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: incorrect noOfSearchMeasures=%d
Line 11089: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: incorrect noOfSearchMeasures=%d
Line 11112: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: earfcn=%d measBandwidth=%d numOfFreqs=%d
Line 11112: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: earfcn=%d measBandwidth=%d numOfFreqs=%d
Line 11141: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: DiffUmtsTime failed
Line 11141: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: DiffUmtsTime failed
Line 11148: [IRAT U2L] EutraCellSearchGapCommonProcessing: AddEutraTime failed
Line 11148: [IRAT U2L] EutraCellSearchGapCommonProcessing: AddEutraTime failed
Line 11153: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11153: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11156: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11156: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11159: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11159: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11162: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11162: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11208: [IRAT U2L] SchedulingManager EutraSearchMeasureGapCommonProcessing: failed to find any jobs
Line 11208: [IRAT U2L] SchedulingManager EutraSearchMeasureGapCommonProcessing: failed to find any jobs
Line 11215: [IRAT U2L]EutraSearchMeasureGapCommonProcessing: compound message allocation failed:
Line 11215: [IRAT U2L]EutraSearchMeasureGapCommonProcessing: compound message allocation failed:
Line 11229: [IRAT U2L] SchedulingManager EutraCellSearchMeasureGapCommonProcessing: sending dummy indication
Line 11229: [IRAT U2L] SchedulingManager EutraCellSearchMeasureGapCommonProcessing: sending dummy indication
Line 11278: S0  ### Critical Error eutraSearchMeasureResultsList = NULL (%d)
Line 11278: S0  ### Critical Error eutraSearchMeasureResultsList = NULL (%d)
Line 11289: S  [IRAT U2L] uphy_CEutraSearchMeasureStepFsm_step: Msg is NULL
Line 11289: S  [IRAT U2L] uphy_CEutraSearchMeasureStepFsm_step: Msg is NULL
Line 11321: [U2L TimeInfo] eutraCellSearchDataBase 0x%x eutraMeasureDataBase 0x%x
Line 11321: [U2L TimeInfo] eutraCellSearchDataBase 0x%x eutraMeasureDataBase 0x%x
Line 11330: EutraCellInfoUpdateInd message generation is failed
Line 11330: EutraCellInfoUpdateInd message generation is failed
Line 11344: [U2L TimeInfo] EutraCellInfoUpdateInd msg 0x%x
Line 11344: [U2L TimeInfo] EutraCellInfoUpdateInd msg 0x%x
Line 11345: [U2L TimeInfo] message 0x%x message->header.TransactId 0x%x
Line 11345: [U2L TimeInfo] message 0x%x message->header.TransactId 0x%x
Line 11350: [U2L TimeInfo] num_of_freq %d ind_msg 0x%x ind_msg->header.TransactId 0x%x, REQ is freed
Line 11350: [U2L TimeInfo] num_of_freq %d ind_msg 0x%x ind_msg->header.TransactId 0x%x, REQ is freed
Line 11364: [U2L TimeInfo] i %d j %d CellId %d earfcn %d cp type %d
Line 11364: [U2L TimeInfo] i %d j %d CellId %d earfcn %d cp type %d
Line 11370: [U2L TimeInfo] num_of_freq %d ind_msg 0x%x ind_msg->header.TransactId 0x%x, REQ is freed
Line 11370: [U2L TimeInfo] num_of_freq %d ind_msg 0x%x ind_msg->header.TransactId 0x%x, REQ is freed
Line 11375: [IRAT U2L] UMT refCounterFrame %d, refCounterSlot %d, refCounterChip %d
Line 11375: [IRAT U2L] UMT refCounterFrame %d, refCounterSlot %d, refCounterChip %d
Line 11377: [IRAT U2L] LTE sfn %d, tti %d, offset %d
Line 11377: [IRAT U2L] LTE sfn %d, tti %d, offset %d
Line 11386: [U2L TimeInfo] req_earfcn %d num_of_cells %d
Line 11386: [U2L TimeInfo] req_earfcn %d num_of_cells %d
Line 11394: [U2L TimeInfo] lteCellInfo Cell id %d earfcn %d, EutraCellManager cell id %d earfcn %d
Line 11401: [IRAT U2L] Found valid cell info for Handover
Line 11401: [IRAT U2L] Found valid cell info for Handover
Line 11410: [U2L TimeInfo] id %d updated sfn %d slot %d chip %d 
Line 11410: [U2L TimeInfo] id %d updated sfn %d slot %d chip %d 
Line 11412: [U2L TimeInfo] updated sfn %d slot %d chip %d eutraDeltaTimeInOffset %d calculated_framePosition %d
Line 11412: [U2L TimeInfo] updated sfn %d slot %d chip %d eutraDeltaTimeInOffset %d calculated_framePosition %d
Line 11431: EutraCellInfoUpdateInd message is failed
Line 11431: EutraCellInfoUpdateInd message is failed
Line 11457: [IRAT U2G] eutra2UmtsAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 11457: [IRAT U2G] eutra2UmtsAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 11471: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 11471: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 11489: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 11489: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 11502: [IRAT U2G] eutra2UmtsAntennaSwitchSTF : UE did not camp to any frequency
Line 11502: [IRAT U2G] eutra2UmtsAntennaSwitchSTF : UE did not camp to any frequency
Line 11517: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RF Rx ON command exec failure Error %d, Additional Error %d
Line 11517: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RF Rx ON command exec failure Error %d, Additional Error %d
Line 11524: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RfRxOn
Line 11524: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RfRxOn
Line 11529: Rxuarfcn_Check: In Func = %s	Calling EHalRfRxUarfcnCmd & Setting rxOnlyMode = TRUE To Enable interrupts
Line 11529: Rxuarfcn_Check: In Func = %s	Calling EHalRfRxUarfcnCmd & Setting rxOnlyMode = TRUE To Enable interrupts
Line 11541: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 11541: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 11547: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 11547: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 11552: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 11552: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 11560: gsm2UmtsAntennaSwitchSTF: sendResponseToUphyToken did not get time to run, so clear it
Line 11560: gsm2UmtsAntennaSwitchSTF: sendResponseToUphyToken did not get time to run, so clear it
Line 11582: RACH going Rx only mode false
Line 11582: RACH going Rx only mode false
Line 11596: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RF UARFCN Error %d, Additional Error %d
Line 11596: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RF UARFCN Error %d, Additional Error %d
Line 11623: [IRAT U2L] umts2EutraAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 11623: [IRAT U2L] umts2EutraAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 11654: [IRAT U2L] U2LAntennaSwitchSTF: AfcDisableCmd failed. errCode=%d, addErrCode=%d
Line 11654: [IRAT U2L] U2LAntennaSwitchSTF: AfcDisableCmd failed. errCode=%d, addErrCode=%d
Line 11749: [IRAT U2L] msg Id out of range
Line 11749: [IRAT U2L] msg Id out of range
Line 11753: [IRAT U2L] SchedulingManager processEutraMsg for EARFCN=%d, MsgId=%d (CELL SEARCH: 24, MEASURE: 25, SEARCHMEASURE: 26)
Line 11753: [IRAT U2L] SchedulingManager processEutraMsg for EARFCN=%d, MsgId=%d (CELL SEARCH: 24, MEASURE: 25, SEARCHMEASURE: 26)
Line 11776: [IRAT U2L] SchedulingManager processEutraMsg: unknown msg
Line 11776: [IRAT U2L] SchedulingManager processEutraMsg: unknown msg
Line 11959: fbFsmAfterGap: no available fbFsmHandlerArray[%d]->fbFsm
Line 11959: fbFsmAfterGap: no available fbFsmHandlerArray[%d]->fbFsm
Line 11968: fbFsmAfterGap: fbFsmHandlerArray[%d]->fbFsm[%d] 
Line 11968: fbFsmAfterGap: fbFsmHandlerArray[%d]->fbFsm[%d] 
Line 12031: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 12031: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 12056: fbFsmAfterGap: no message in arfcnListCollector
Line 12056: fbFsmAfterGap: no message in arfcnListCollector
Line 12063: camping frequency is not found
Line 12063: camping frequency is not found
Line 12085: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 12085: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 12310: uphy_CSchedulingManager_process_the_Online_message: currentDlUarfcn(%d), cmdExecStatus = %d (Invalid/Fail/Success)
Line 12310: uphy_CSchedulingManager_process_the_Online_message: currentDlUarfcn(%d), cmdExecStatus = %d (Invalid/Fail/Success)
Line 12364: There is no msg to run searcher!
Line 12364: There is no msg to run searcher!
Line 12382: buffering Timer started. isOnlineBufferingOld=%d;
Line 12382: buffering Timer started. isOnlineBufferingOld=%d;
Line 12451: Buffering command is ACTIVE. Reset command and its handler.
Line 12451: Buffering command is ACTIVE. Reset command and its handler.
Line 12458: Buffering command is = %x or active for other stack
Line 12458: Buffering command is = %x or active for other stack
Line 12493: Queued RACH_DATA_REQ extracted for processing
Line 12493: Queued RACH_DATA_REQ extracted for processing
Line 12498: uhalCmdprachStart exec() failed errCode %d addErrCode %d
Line 12498: uhalCmdprachStart exec() failed errCode %d addErrCode %d
Line 12512: Invalid transceiver Id =  %d
Line 12512: Invalid transceiver Id =  %d
