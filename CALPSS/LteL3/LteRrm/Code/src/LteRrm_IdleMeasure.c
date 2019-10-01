Line 189: S_IntraSearch value exists!  S_ServingCell > S_IntraSearch
Line 190: S_IntraSearchP_Ind(%d) Srxlev(%d.%ddB) S_IntraSearchP(%ddB)
Line 196: S_IntraSearchQ_Ind(%d) Squal(%d.%ddB) S_IntraSearchQ(%ddB) 
Line 201: S_RSRP(%d.%ddB) S_RSRQ(%d.%ddB) q_RxlevMin(%ddB) q_QualMin(%ddB) pMax(%ddBm)
Line 212: Check Intra Search: run(%d) not-run(%d)
Line 241: Srxlev(%d.%ddB) S_NonIntraSearchP_Ind(%d) S_NonIntraSearchP(%ddB) LTERRM_S_NONINTRASEARCH_OFFSET(%ddB)
Line 247: Squal(%d.%ddB) S_NonIntraSearchQ_Ind(%d) S_NonIntraSearchQ(%ddB)
Line 260: S_NonIntraSearch value exists!  S_ServingCell > S_NonIntraSearch
Line 261: S_RSRP(%d.%ddB) S_RSRQ(%d.%ddB) q_RxlevMin(%ddB) q_QualMin(%ddB) pMax(%ddBm)
Line 271: However S_CINR(%d) is too low !! Try Inter/I-RAT measurement regardless of Snonintrasearch condition
Line 279: Check Non-intra search: run(%d) not-run(%d)
Line 312: LteRrmIdle_CheckThreshLowerInterFreq(Srxlev_Serv:%d.%ddB, ThreshServLow_P:%ddB, ThreshServLow_Q:%ddB, SServingLowOffset:%ddB)
Line 448: HighPriority Cell(%d): HP_meas_cnt(%d) > 3+ Max_HP_MeasCnt(%d)=Treselection(%d)/IdleMeasPeriod(%d ms): Don't measure again
Line 470: HighPriority Cell(%d): Continuous_HP_meas_cnt(%d)<= 3+Max_HP_MeasCnt(%d)
Line 557: WARNING: NOT Supported DL_EARFCN %d!!!
Line 642: WARNING: NOT Supported DL_EARFCN %d!!!
Line 728: - threshSservingLow[%d] cinr[%d]
Line 737: WARNING:NOT Supported DL_EARFCN %d!!!
Line 855: measTrig[%d] LastMeasTime:%d, curTimeInMs:%d, interval:%d, cycle:%d
Line 886: IntraFreq == NULL
Line 920: CheckMeasCycle: IntraFreq Search
Line 940: srchCycle set to IdleMeasPeriod(%d) (max cinr:%d)
Line 945: srchCycle set to IdleMeasPeriod(%d)*2 (max cinr:%d)
Line 960: CheckMeasCycle: IntraFreq Measure
Line 978: ALL MEAS cycle - Intra-Freq bFirstCycle(%d)
Line 986: MeasOnly(%d) - cinr(%d) srchTriggered(%d)
Line 993: SearchOnly(%d) - measTriggered(%d)
Line 1004: IntraFreq Measure will start after search
Line 1047: IntraFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 1052: IntraFreqMeas(%d) for Reselection scheduled: LastMeasTime(%d), curTimeMs(%d)
Line 1059: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 1084: InterFreq(HIGH) is Empty
Line 1091: High Priority InterFreq is Empty
Line 1096: CheckMeasCycle: High InterFreq Search
Line 1105: CheckMeasCycle: High InterFreq Measure
Line 1122: pCurInterFreq->earfcn(%d), SrchAllMeasDone(%d), MeasAllMeasDone(%d)
Line 1127: LTERRM.Meas.IdleScheduleInfo.pCurInterFreq == NULL
Line 1148: Skip IdleAllMeas in higher inter
Line 1151: ALL MEAS cycle - High-Inter(%d) bFirstCycle(%d)
Line 1178: HighInterFreqMeas(%d) Already measured at current DRX cycle: Skip measurement
Line 1183: HighInterFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 1194: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 1220: UtraFreq(HIGH) is Empty
Line 1227: High Priority Utra Freq is Empty
Line 1232: CheckMeasCycle: High Utra Search
Line 1241: CheckMeasCycle: High Utra Measure
Line 1258: pCurUtraFreq->earfcn(%d), SrchAllMeasDone(%d), MeasAllMeasDone(%d)
Line 1263: LTERRM.Meas.IdleScheduleInfo.pCurUtraFreq == NULL
Line 1284: Skip IdleAllMeas in higher UTRAN
Line 1287: ALL MEAS cycle - High-Utra(%d) bFirstCycle(%d)
Line 1314: HighUtraFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 1320: HighUtraFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 1331: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 1357: GeranFreq(HIGH) is Empty
Line 1385: CheckMeasCycle: High Geran Measure(cycle:%d, freqNum:%d, conversion_cycle:%d)
Line 1393: CheckMeasCycle: High Geran Verify(cycle:%d, freqNum:%d, conversion_cycle:%d)
Line 1411: pCurGeranFreq->earfcn(%d), MeasAllMeasDone(%d)
Line 1416: LTERRM.Meas.IdleScheduleInfo.pCurGeranFreq == NULL
Line 1431: Skip IdleAllMeas in higher GERAN
Line 1434: ALL MEAS cycle - High-Geran(%d) bFirstCycle(%d)
Line 1463: HighGeranFreqMeas(%d) Already triggered at current DRX cycle: Skip measurement
Line 1468: HighGeranFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 1480: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 1502: CdmaSystemTimeFlag(%d)0 is not valid, Not schedule CDMA meas.
Line 1515: CdmaFreq(HIGH) is Empty
Line 1529: High Priority Cdma Freq is Empty
Line 1534: CheckMeasCycle: High Cdma Measure
Line 1550: pCurCdmaFreq->earfcn(%d), MeasAllMeasDone(%d)
Line 1555: IdleScheduleInfo.pCurCdmaFreq == NULL
Line 1568: Skip IdleAllMeas in higher CDMA
Line 1571: ALL MEAS cycle - High-Cdma(%d) bFirstCycle(%d)
Line 1590: HighCdmaFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 1595: HighCdmaFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 1607: Mode(%d) - measTriggered(%d)
Line 1634: InterFreq(LOW) is Empty
Line 1638: Highest Ranking Start
Line 1644: LteRrmIdle_CheckInterFreqMeas
Line 1653: CheckMeasCycle: InterFreq Search
Line 1659: srchCycle set to IdleMeasPeriod(%d)*2
Line 1680: CheckMeasCycle: InterFreq Measure
Line 1698: pCurInterFreq->earfcn(%d), SrchAllMeasDone(%d), MeasAllMeasDone(%d)
Line 1703: IdleScheduleInfo.pCurInterFreq == NULL
Line 1724: Skip IdleAllMeas in inter
Line 1727: ALL MEAS cycle - Inter-Freq(%d) bFirstCycle(%d) TrigEqualLowPrioAllMeas(%d)
Line 1735: Inter Freq Measure will start after search
Line 1762: InterFreqMeas(%d) Already triggered at current DRX cycle: Skip measurement
Line 1767: InterFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 1773: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 1800: UtraFreq(LOW) is Empty
Line 1804: LteRrmIdle_CheckUtraFreqMeas
Line 1818: CheckMeasCycle: Utra Search
Line 1850: CheckMeasCycle: Utra Measure
Line 1868: pCurUtraFreq->earfcn(%d), SrchAllMeasDone(%d), MeasAllMeasDone(%d)
Line 1873: LTERRM.Meas.IdleScheduleInfo.pCurUtraFreq == NULL
Line 1894: Skip IdleAllMeas in UTRAN
Line 1897: ALL MEAS cycle - Utra-Freq(%d) bFirstCycle(%d) TrigEqualLowPrioAllMeas(%d)
Line 1905: Utra Freq Measure will start after search
Line 1933: UtraFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 1938: UtraFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 1944: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 1970: GeranFreq(LOW) is Empty
Line 1974: LteRrmIdle_CheckGeranFreqMeas
Line 2004: CheckMeasCycle: Geran Measure(cycle:%d, freqNum:%d, conversion_cycle:%d)
Line 2011: CheckMeasCycle: Geran Verify(cycle:%d, freqNum:%d, conversion_cycle:%d)
Line 2030: pCurGeranFreq->earfcn(%d), MeasAllMeasDone(%d)
Line 2035: IdleSchedule.pCurGeranFreq == NULL
Line 2050: Skip IdleAllMeas in GERAN
Line 2053: ALL MEAS cycle - Geran-Freq(%d) bFirstCycle(%d) TrigEqualLowPrioAllMeas(%d)
Line 2080: GeranFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 2085: GeranFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 2091: Mode(%d) - Measure_Trig(%d), Verify_Trig(%d)
Line 2113: CdmaSystemTimeFlag(%d) is not valid, Not schedule CDMA meas.
Line 2122: CdmaFreq(LOW) is Empty
Line 2129: LteRrmIdle_CheckCdmaFreqMeas
Line 2137: CheckMeasCycle: Cdma Measure
Line 2155: pCurCdmaFreq->earfcn(%d), MeasAllMeasDone(%d)
Line 2160: IdleSchedule.pCurCdmaFreq == NULL
Line 2174: Skip IdleAllMeas in CDMA
Line 2177: ALL MEAS cycle - Cdma-Freq(%d) bFirstCycle(%d) TrigEqualLowPrioAllMeas(%d)
Line 2193: CdmaFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 2198: CdmaFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 2203: Mode(%d) - measTriggered(%d)
Line 2268: curMeasType is not idle. other measurement(%d) is running...
Line 2277: Start Measurement: Serving Cell (earfcn:%d)
Line 2299: SCellFreq is NULL for MTM
Line 2312: SecondaryCell is NULL for MTM
Line 2379: cmmo: cmmo is not applied (serving cell cinr(%d) <= -3)
Line 2407: cmmo: cmmo is not applied (earfcn=%d, num_csg_cells=%d)
Line 2412: Start Measurement: Intra Frequency (earfcn:%d, mode:%d)
Line 2434: MeasMode is invalid(%d)
Line 2448: measMode=%d, num_of_meas_cell = %d
Line 2460: SCellFreq is NULL for MTM
Line 2472: SecondaryCell is NULL for MTM
Line 2542: IdleScheduleInfo.pCurSrchHighInterFreq NULL
Line 2581: IdleSchedule.pCurMeasHighInterFreq NULL
Line 2617: cmmo: cmmo is not applied (serving cell cinr(%d) <= -3)
Line 2645: cmmo: cmmo is not applied (earfcn=%d, num_csg_cells=%d)
Line 2650: Start Measurement: High Priority Inter Frequency (earfcn:%d, mode:%d)
Line 2672: MeasMode is invalid(%d)
Line 2734: IdleSchedule.pCurSrchHighUtraFreq NULL
Line 2773: IdleSchedule.pCurSrchHighUtraFreq NULL
Line 2810: cmmo: cmmo is not applied (serving cell cinr(%d) <= -3)
Line 2838: cmmo: cmmo is not applied (earfcn=%d, num_csg_cells=%d)
Line 2843: Start Measurement: High Priority Utra Frequency (earfcn:%d, mode:%d)
Line 2863: MeasMode is invalid(%d)
Line 2919: IdleSchedule.pCurMeasHighGeranFreq NULL
Line 2957: IdleSchedule.pCurVerifyHighGeranFreq NULL
Line 2984: Start Measurement: High Priority Geran Frequency (earfcn:%d, mode:%d)
Line 3004: MeasMode is invalid(%d)
Line 3079: IdleSchedule.pCurMeasHighCdmaFreq NULL
Line 3087: MeasMode is invalid(%d)
Line 3093: Start Measurement: High Priority Cdma Frequency (earfcn:%d, mode:%d)
Line 3103: MeasMode is invalid(%d)
Line 3165: IdleSchedule.pCurSrchInterFreq NULL
Line 3173: Highest Ranking NOT Start yet(First earfcn:%d)
Line 3178: Highest Ranking Start
Line 3182: Highest Ranking NOT Start yet(earfcn:%d)
Line 3216: IdleSchedule.pCurMeasInterFreq NULL
Line 3252: cmmo: cmmo is not applied (serving cell cinr(%d) <= -3)
Line 3326: cmmo: cmmo is not applied (earfcn=%d, num_csg_cells=%d)
Line 3331: Start Measurement: Inter Frequency (earfcn:%d, mode:%d)
Line 3350: MeasMode is invalid(%d)
Line 3411: IdleSchedule.pCurSrchUtraFreq NULL
Line 3445: IdleSchedule.pCurMeasUtraFreq NULL
Line 3480: cmmo: cmmo is not applied (serving cell cinr(%d) <= -3)
Line 3546: cmmo: cmmo is not applied (earfcn=%d, num_csg_cells=%d)
Line 3551: Start Measurement: Utra Frequency (earfcn:%d, mode:%d)
Line 3572: MeasMode is invalid(%d)
Line 3627: IdleSchedule.pCurMeasGeranFreq NULL
Line 3661: IdleSchedule.pCurVerifyGeranFreq NULL
Line 3687: Start Measurement: Geran Frequency (earfcn:%d, mode:%d)
Line 3707: MeasMode is invalid(%d)
Line 3775: IdleSchedule.pCurMeasCdmaFreq NULL
Line 3783: MeasMode is invalid(%d)
Line 3788: Start Measurement: Cdma Frequency (earfcn:%d, mode:%d)
Line 3798: MeasMode is invalid(%d)
Line 3826: LteRrmIdle_ResetSfailStatus
Line 3856: LteRrmIdle_UpdateContSfailCnt - band7(manual) : Srxlev = %d (%d)
Line 3867: curContSfailDrxCnt: reset
Line 3882: curContSfailDrxCnt: %d
Line 3916: No Evaluation: IdleProc(%s) cinr(%d)
Line 3950: Suspend reselection (Not paging done yet)
Line 3961: reselection triggered
Line 3965: Idle OOS triggered
Line 4080: [HF] LTE_CPHY_CELL_RESEL_EVAL_IND (SUCCESS) to RRC
Line 4084: [HF] LTE_CPHY_CELL_RESEL_EVAL_IND (FAILURE) to RRC - reset CdmaSystemTimeFlag
Line 4146: minSrchCycle:%d, srchCycleLevel:%d(%d), maxSrchCycleLevel:%d, prevPcellRsrp:%d, IdleMeasPeriod:%d
Line 4176: curContSfailDrxCnt(%d) >= Nserv(%d)
Line 4190: No Suitable Cell found(DRX cnt:%d)
Line 4196: Cell LOST !!!  <-  (noAnySuitCellDrxCnt(%d) > cntDrxForIdleOos(%d))
Line 4265: -> All meas starts from intra srch
Line 4305: IdleSleepAfterIntraMeas is TRUE
Line 4314: IdleAllowNonIntraMeas is FALSE
Line 4325: S_ServingCell > S_nonintrasearch: Only High priority search/measurement scheduled
Line 4330: Equal/Low priority All measure is suspended
Line 4370: Equal/Low priority All measure is suspended (Srxlev >= ThreshServLow)
Line 4454: -> All meas starts from intra srch
Line 4491: IdleSleepAfterIntraMeas is TRUE
Line 4500: IdleAllowNonIntraMeas is FALSE
Line 4511: S_ServingCell > S_nonintrasearch: Only High priority search/measurement scheduled
Line 4516: Equal/Low priority All measure is suspended
Line 4555: Equal/Low priority All measure is suspended (Srxlev >= ThreshServLow)
Line 4936: LteRrmIdle_ProcMeasResult:curMeasType(%d), isLastMeas(%d)
Line 4941: IdleMeasSuspendForTx is TRUE -> Idle Measurement is suspended
Line 5045: LteRrmIdle_ProcMeasSchedule
Line 5060: Meas Can't start: MeasType is not Idle(%d)
Line 5091: IdleAllowNonIntraMeas is FALSE
Line 5102: S_ServingCell > S_nonintrasearch: Only High priority search/measurement scheduled
Line 5107: Equal/Low priority All measure is suspended
Line 5147: Equal/Low priority All measure is suspended (Srxlev >= ThreshServLow)
Line 5208: IdleSchedule.basicCycleCnt : %d
Line 5239: LteRrmIdle_StartNonIntraMeas
Line 5246: S_ServingCell > S_nonintrasearch: Only High priority search/measurement scheduled
Line 5251: Equal/Low priority All measure is suspended
Line 5285: Equal/Low priority All measure is suspended (Srxlev >= ThreshServLow)
Line 5569: Invalid DrxConfig(%d)
Line 5622: AlpssCfg.RrmIdleFilterLength(%d), gLteRrm_IdleServL1FilterLength(%d)
Line 5637: LteRrmIdle_InitMeasScheduler
Line 5725: [DRX] CHECK LteRrm STATE (%s)
Line 5731: [DRX] LteRrmIdle_Sleep No MEAS_IDLE
Line 5735: [DRX] bDrxStopforReselection
Line 5739: [DRX] bSiStartReadReqFlag == TRUE
Line 5768: dmMakeLRrcNeighborList
Line 5785: [%10d] dmMakeLRrcMeasurement
Line 5803: [%10d] dmMakeLRrcInterRatMeasurement
Line 5824: LteRrmIdle_GoToSleep, but cannot sleep(State:%s)
Line 5863: MEAS is working, cannot sleep. IdleMeasSuspendForTx(%d)
Line 5902: LteRrm_AllocCellInfoBuf: TargetCell
Line 5906: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 5937: please check: PrimaryCell is NULL!!
Line 5953: BPLMN suspend, Return ! (earfcn=%d, cell id=%d, BplmnTargetEarfcn=%d)
Line 5967: BPLMN stop, Return ! (earfcn=%d, cell id=%d, BplmnTargetEarfcn=%d)
Line 6014: saved serving BW(%d)
Line 6049: Checking Idle All meas done in earfcn(%d)
Line 6055: - SrchAllMeasDone(%d), MeasAllMeasDone(%d): Need to run rest of First All Meas
Line 6062: - MeasAllMeasDone(%d): Need to run rest of First All Meas
Line 6067: - SrchAllMeasDone(%d), MeasAllMeasDone(%d): All-done
Line 6102: Trigger All Measure for Equal/Lower priority
Line 6126: Finish Equal/Lower priority All Measure
Line 6165: pFreqInfo==NULL in LteRrmIdle_CheckMeasureBeforeReselectionFromSortedList
Line 6187: - earfcn(%d) cell_id(%d) will be measured at the current DRX cycle before Reselection(MeasureRetried(%d)) 
Line 6206: - earfcn(%d) : Not required to measure at the current DRX cycle(Reset waitDrxForMeas = FALSE) 
Line 6229: LteRrmIdle_CheckMeasureBeforeReselection
Line 6233: pFreqList==NULL in LteRrmIdle_CheckMeasureBeforeReselection
Line 6241: High Priority InterFreq is Empty
Line 6265: pFreqInfo is NULL: return FALSE
Line 6288: - earfcn(%d) cell_id(%d) will be measured at the current DRX cycle before Reselection(MeasureRetried(%d)) 
Line 6307: pFreqInfo is Last: Measurement for Reselection is not required. return FALSE
Line 6325: pFreqList is empty: return FALSE
