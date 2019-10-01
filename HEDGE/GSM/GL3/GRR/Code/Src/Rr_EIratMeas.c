Line 127: Reset not allowed 4G Cell List
Line 141: Release All 3 Prio List 
Line 180:   4GHighPrioReselList (%d) 4GLowPrioReselList (%d) 4GReselGSMList(%d)
Line 213: ResetLteInfoOnScell
Line 230: Free ALL EARFCNS and corresponding PCIDS 
Line 241: DEL for EARFCN (%d) Cell ID  (%d)  
Line 254: DEL EARFCN (%d) 
Line 300: Update 4G Cell List -NbInst:%d
Line 348:  Total Earfcn Count from index: %d , From instance (%d)
Line 354: Index (%d) Earfcn (%d) measBW(%d) priority(%d) ThreshEUTRANHigh (%d) ThreshEUTRANLow (%d) ThreshEUTRANQRxlevMin (%d) 
Line 358:  Process Available Earfcn Information  
Line 386: Update 4G Not Allowed Cell List - NbSI2QInst:%d, Nbofjinstance:%d 
Line 403: Freq index count(%d) Freqindex(%d) Putting @ new Static index(%d) Earfcn(%d)
Line 409: Freqindex(%d)  Earfcn(%d) PCID(%d)
Line 425: EUTRAN Index obtained from NA structure is out of bound%d 
Line 435: No of EARFCN in not allowed list (%d)
Line 440: EARFCN (%d) PCID (%d) BitMapGroup (%d) IsNotAllowed?(%d)
Line 455: QRB: Pending to send NotAllowedCellList
Line 468: Total Number of EARFCN Sent as Not Allowed (%d) 
Line 474:  (%d) Not allowed EARFCN (%d) at index(%d)
Line 480:  For EARFCN (%d) : Not allowed PCID (%d)
Line 484:  For EARFCN (%d) : Count of not allowed cell (%d)
Line 489:  MPH_EUTRAN_NOT_ALLOWED_CELL_IND sent  
Line 498:  NO EARFN available in Not allowed list (%d) Or Not suitable state(%d) 
Line 526: ERROR  RtkGetMemory returned NULL  in rr_NewLteEarfcnElem
Line 545: NewLteEarfcnElem: Index (%d) Earfcn (%d) measBW(%d) priority(%d) 
Line 608: LteElem found (%d) Earfcn (%d) Index (%d)
Line 614: MISMATCH in  INDEX . Earfcn (%d) Index (%d) NewIndex (%d)   
Line 656: Deleting all Cells for EARFCN %d 
Line 687: Deleting  EARFCN ITSELF %d
Line 724: ERROR RtkGetMemory returned NULL
Line 746: Earfcn to be deleted%d
Line 807: STOP Monitoring : Earfcn (%d) measBW(%d) priority(%d) 
Line 812:  GRR => MPH_EUTRAN_STOP_EARFCN_REQ for EARFCN 
Line 844: GeranPriorityParaPresent=%d NoHprioEarfcn=%d IgnoreLowPriority=%d(ThreshPrioritySearch=%d RxLev=%d)
Line 855:  Since High priority EARFCN are there, Mode is set to EUTRAN_MEAS_REQ_START
Line 863:  Since no High priority EARFCN are there and IgnoreLowPriority is TRUE, Mode is set to EUTRAN_MEAS_REQ_STOP
Line 869:  Since IgnoreLowPriority is FALSE, Mode is set to EUTRAN_MEAS_REQ_START
Line 877:  Since GeranPriorityParam is not present, Mode is set to EUTRAN_MEAS_REQ_STOP
Line 882:  Eutran Measurement Mode is MEAS_REQ_STOP %d
Line 958: rr_EutranMeasTrigger : rr_EutranMeasState = %d, rr_FDDLteSupported = %d
Line 968: rr_EutranMeasTrigger : 4G measurement is disabled by LTE RAT
Line 1002: ERROR : Measurement not triggered in Dedi mode
Line 1021: ERROR : Measurement not triggered in NC2 mode
Line 1026: ERROR : Measurement not triggered in PTM mode
Line 1054: Stopping EIRAT measurements in rr_PlmnState: %d
Line 1061: Stopping EIRAT measurements in rr_InterRatStatus: %d
Line 1066: rr_FDDLteSupported  %d
Line 1100: rr_EarfcnScanlistGen : rr_FDDLteSupported (%d) , rr_EutranMeasState(%d) 
Line 1103:  ServCell RxLev (%d) , ThreshPrioritySearch(%d) IgnoreLowPriority(%d)
Line 1108: rr_EarfcnScanlistGen : rr_FDDSupported (%d) , rr_EutranMeasState(%d) 
Line 1127: EARFCN (%d) is NOT barred
Line 1131: EARFCN (%d) is barred
Line 1136: EARFCN (%d) Skipped for SCAN as priority is invalid (%d) 
Line 1157: EARFCN (%d) Skipped for SCAN as Scan Status is (%d) 
Line 1180: EARFCN (%d) is NOT barred
Line 1184: EARFCN (%d) is barred
Line 1189: EARFCN (%d) Skipped for SCAN as priority is invalid (%d) 
Line 1256: Total no of EARFCN (%d) NoEarfcnToScan (%d)
Line 1265: EARFCN SCAN List not Gen as No EARFCNS avilable(%d)
Line 1290: Sending MPH_EUTRAN_MEAS_REQ %d
Line 1295: EUTRAN_MEAS_REQ_START
Line 1299: EUTRAN_MEAS_REQ_STOP
Line 1323: rr_RegistryItem.G2LPtmOn  (%d) 
Line 1333: State is not suitable for EARFCN SCAN in PTM [Access(%d) REORG_MODE(%d) GMMReady(%d) NC_Order(%d) RR State(%d) G2LPtmOn(%d)
Line 1344: State is not suitable for EARFCN SCAN [Access(%d) REORG_MODE(%d) GMMReady(%d) NC_Order(%d) RR State(%d)]
Line 1360: 4G EARFCN SCAN List##Total Number of EARFCN to SCAN (%d) 
Line 1378: EARFCN (%d) SCAN STAS Changed to REQUESTED  (%d)
Line 1382: SCAN_EARFCN : Earfcn (%d) measBW(%d) priority(%d), searchOrder(%d)
Line 1387: GRR => MPH_EUTRAN_SCAN_EARFCN_REQ
Line 1395: QRB: rr_QrbEutranSacnStatus (%d)
Line 1399: No EARFCNS to SCAN (%d)
Line 1426: EARFCN (%d)  Scan Status is (%d) 
Line 1465: FATAL ERROR: Trying to add EARFCN for Unknown EARFCN %d
Line 1471: Finding Cell (%d) in EUTRAN LIST:
Line 1504: FATAL ERROR: Trying to add EARFCN for Unknown EARFCN %d
Line 1557: ERROR RtkGetMemory returned NULL
Line 1575:  Add Cell(%d)  in EUTRAN LIST: NewMeasRxd(%d) MeasAge(%d)
Line 1588: Cell(%d) Found in EUTRAN LIST: NewMeasRxd(%d) MeasAge(%d)
Line 1617: FATAL ERROR: Trying to DEL PCID  for Unknown EARFCN %d
Line 1632: DelCell(%d)From EARFCN Q List
Line 1676: FATAL ERROR: Trying to DEL Unknown EARFCN %d
Line 1687: Cell Not found in Meas Report , New Meas age (%d) for Cell (%d):
Line 1693: Cell to be deleted from List (%d):
Line 1700: Cell found in Q , New Meas age (%d) for Cell (%d):
Line 1717: Resetting NewMeas Flag for cell (%d):
Line 1751: [G2L][MEAS] From Meas Result EARFCN and No Of Cells , Earfcn (%d) NumOfCells(%d)
Line 1756: [G2L][MEAS] 4G NCELL [%d,%d] RSRP(%d) RSRQ(%d) NewMeas(%d)
Line 1802: MPH_EUTRAN_MEAS_REPORT_IND(NumOfEarfcns = %d)
Line 1810: EARFCN:%d found in measurement at Meas report 
Line 1828: [G2L][SCAN] Number of PCID reported is 0 for EARFCN:%d
Line 1843: [G2L][SCAN] 4G NCELL [%d,%d] RSRP(%d) RSRQ(%d)
Line 1852: AddCellCnt %d
Line 1860: ERROR! EARFCN:%d:received in Meas not in EutranInfo
Line 1864: EutranMeasData->NbMeas:%d
Line 1868: Total  NbMeas (%d) 
Line 1872: [G2L][MEAS] MeasIndex:%d FreqIndex:%d Earfcn:%d PCID:%d RSRP(%d) RSRQ(%d)
Line 1917: Finding  Freq and Cell in Prio IRAT  LIST: F(%d) Cell (%d)  Elem(%d)
Line 1922: Elem (%d) CellId (%d)  : F(%d) 
Line 1926: Address of Elem returned is (%d):
Line 1957: Adding  in Reselection Q Freq  (%d) Cell (%d)  Prio (%d) SNonServ(%d) 
Line 1978: Start list with  %d
Line 2045: ERROR RtkGetMemory returned NULL
Line 2061: Meas already in  Reselection Q Freq  (%d) Cell (%d)  Prio (%d) SNonServ(%d) 
Line 2071:   Reselection Q Freq  (%d) Cell (%d)  Prio (%d) SNonServ(%d) 
Line 2135: rr_sortQueueForG2LReselection: numEutranCell(%d)
Line 2156:  Before sorting 4G NCELL [%d,%d] [Priority(%d) SNONserving(%d)]
Line 2175:  After sorting on Priority 4G NCELL [%d,%d] [Priority(%d) SNONserving(%d)]
Line 2196:  After sorting on Snonserving 4G NCELL [%d,%d] [Priority(%d) SNONserving(%d)]
Line 2211: rr_sortQueueForG2LReselection: numEutranCell(%d)
Line 2231:  Before sorting 4G NCELL [%d,%d] [Priority(%d) SNONserving(%d)]
Line 2243:  After sorting on Snonserving 4G NCELL [%d,%d] [Priority(%d) SNONserving(%d)]
Line 2269: rr_Update4GReselCounter : Hprio EARFCN (%d)
Line 2271: [G2L][PRIO][EVAL] 2G SCELL [%d,%d] [C1:%d GERAN_PRIORITY:%d THRESH_GSM_low:%d H_PRIO:%d]
Line 2288:  Evaluating Earfcn (%d)  EARFCNPrio(%d)  Geran Prio (%d)
Line 2295: EARFCNPrio(%d) is invalid or duplicated with GERAN or UTRAN
Line 2305:  No Meas received for Earfcn (%d)  Prio(%d)
Line 2319: 4G NCELL [%d,%d] %s Priority:%d S_EUTRAN:%d RSRP:%d
Line 2324:  QRXLEVMIN:%d THRESH_EUTRAN_high:%d THRESH_EUTRAN_low:%d
Line 2333:  Earfcn is High Priority EARFCN (%d) 
Line 2336:  Check First Resel Criteria for EARFCN with PCID , E (%d)  PCID (%d)
Line 2339: 4G NCELL [%d,%d] [%c][RSRP (%d) > THRESH_EUTRAN_high + EUTRAN_QRXLEVMIN (%d)]
Line 2349:  For PCID  (%d)  RSRP - Qrxlevmin (%d) >  ThreshEutranHigh(%d)
Line 2360: There is higher priority cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 2369:   T_resel_High (%d) , Should be more than (%d) sec 
Line 2380: LTE Cell (%d)  Num4GCellThreshEUTRANHigh %d
Line 2391:  1st Resel Cond not satisfied (H), RSRP  - Qrxlevmin (%d) is less than  ThreshEUTRANHigh : (%d) 
Line 2401:  Check  2nd Criteria for EARFCN with PCID , E (%d)  PCID (%d)
Line 2407: 4G NCELL [%d,%d] [%c][RSRP (%d) > C1 + H_PRIO + QRXLEVMIN (%d)]
Line 2415:  For PCID  (%d)  S_EUTRAN , RSRP-Qrxlevmin = (%d)   >  C1+H_PRIO=(%d) 
Line 2422:   T_resel_GSM (%d) , Should be more than (%d) sec 
Line 2430: There is higher priority cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 2446: LTE Cell (%d)  Num4GCellThreshEUTRANHigh %d
Line 2456:  2nd  Resel Condition not satisfied (H) , RSRP - Qrxlevmin (%d) is less C1+HPRIO (%d) 
Line 2465: 4G NCELL [%d,%d] [X][SCELL+NCELL C1 < THRESH_GSM_low (%d)]
Line 2485:   Earfcn is Low  Priority EARFCN (%d)  
Line 2495: Check First Resel Criteria for LP EARFCN with PCID , E (%d)  PCID (%d)
Line 2498: 4G NCELL [%d,%d] [%c][RSRP (%d) > THRESH_EUTRAN_low + EUTRAN_QRXLEVMIN (%d)]
Line 2509: For PCID  (%d)  RSRP - Qrxlevmin (%d) >  ThreshEUTRANLow(%d) 
Line 2516:     T_resel_Low (%d) , Should be more than (%d) sec 
Line 2525: There is higher priority cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 2539: LTE Cell (%d)  Num4GCellThreshEUTRANLow %d
Line 2551:  1st Resel Condition not satisfied (L), RSRP (%d)  Qrxlevmin (%d) ThreshEUTRANLow(%d) 
Line 2557: 4G NCELL [%d,%d] [%c][RSRP (%d) > C1 + H_PRIO + QRXLEVMIN (%d)]
Line 2571: For PCID  (%d)  S_EUTRAN , RSRP-Qrxlevmin = (%d)   >  C1+H_PRIO=(%d)
Line 2578:  T_resel_GSM (%d) , Should be more than (%d) sec 
Line 2586: There is higher priority cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 2603:  LTE Cell (%d)  Num4GCellThreshEUTRANGSM %d
Line 2615:  2nd  Resel Condition not satisfied , RSRP - Qrxlevmin (%d) is less C1+HPRIO (%d)
Line 2623: 4G NCELL [%d,%d] [X][SCELL+NCELL C1 < THRESH_GSM_low (%d)]
Line 2638: [G2L][PRIO][EVAL] 4G NCELL [%d,%d] HIGH(%d) LOW(%d) GSM(%d) TRESEL(%d)
Line 2654: Num4GCellThreshEUTRANGSM %d Num4GCellThreshEUTRANHigh %d Num4GCellThreshEUTRANLow %d
Line 2661: LTE Cells available for Reselection in ThreshEUTRANHigh Q (%d)
Line 2671:  NO LTE Cells available  in ThreshEUTRANHigh Q (%d)
Line 2680: LTE Cells available for Reselection in ThreshEUTRANLow Q (%d)
Line 2692:  NO LTE Cells available  in ThreshEUTRANLow Q (%d)
Line 2699: LTE Cells available for Reselection in ThreshEUTRANGSM Q (%d)
Line 2710:  NO  LTE Cells available in ThreshEUTRANGSM Q (%d)
Line 2739: Find Suitable 4G Cell
Line 2753: LTE  Cell Suitable EARFCN %d PCID %d Priority %d SnonServ (%d) from Queue High
Line 2762: PRIO Element NULL: No Cell found in rr_4GHighPrioReselList
Line 2777: rr_Is4GcellSuitableToReselect: fdd(%d) state(%d) Emrg(%d) 
Line 2784: [G2L][PRIO] 4G Cell Found but hold on
Line 2794: [G2L][PRIO] -----> SELECT 4G Cell <------
Line 2818: No Suitable 4G Cell
Line 2868: Sending : GRR_MM_CELL_RESELECTION_TO_EUTRAN
Line 2883: QRB: Unexpected QRB redirection rr_QrbState(%d), rr_QrbType(%d)
Line 2898: Sending : GRR_MM_CELL_RESELECTION_TO_EUTRAN
Line 2919: Filled Eutan Info for EARFCN(%d) Cell id(%d)
Line 2921: GRR => GRR_MM_CELL_RESELECTION_TO_EUTRAN
Line 2947: Filled PCCO Eutan Info for EARFCN(%d) Cell id(%d) MeasBw(%d)
Line 2951: GRR PCCO => GRR_MM_CELL_CHANGE_TO_EUTRAN
Line 2955: CELL Change not enabled
Line 2968: GRR <= GRR_MM_CELL_RESELECTION_TO_EUTRAN_COMPLETE
Line 3027: ERROR RtkGetMemory returned NULL
Line 3031:  rr_Handicap4GEarfcn Update Earfcn (%d) and BarTimeValue(%d) 
Line 3070:  LTE EARFCN BARRED for 20 Min (%d) 
Line 3075:  Invalid Cause (%d) 
Line 3094: RESELECTION TO EUTRAN FAILED:: Cause for Resel Failure is : %d BarTimerValue (%d) 
Line 3136: PCCO RESEL TO EUTRAN FAILED:: Cause for Resel Failure is : %d
Line 3154: CELL Change not enabled
Line 3202: 3G Individual Priority Parameters Description not Present 
Line 3238: E-UTRAN Individual Priority Parameters Description  not Present 
Line 3247: T3230 timeout value  not Present 
Line 3281:  Converting RSRP into 6 bit Report Quant , RSRP(%d) RepQuant(%d)
Line 3304:  Converting RSRQ into 6 bit Report Quant , RSRQ(%d) RepQuant(%d)
Line 3335:  Check for 4G Cells with RSRP/RSRQ , RepQuant (%d) EutranMeasData->NbMeas:%d, NoOfCellsReqd:%d
Line 3347:  Meas:%d FreqIndex:%d Earfcn:%d PCID:%d
Line 3375:   4G  Measurement discarded - Report below threshold
Line 3387:  Eutranfreqindex : %d reportquantity :%d, pcid : %d, fourgcell : %d, Noofmeas %d)
Line 3402:  Num 4G Cells selected for Measurement Report: %d in Type (%d)
Line 3450: EutranThreshold:%d Offset:%d EUTRANRepThresh2:%d ,ReportQuantity :%d, NonReportQuantity:%d
Line 3467: 	discarding this measurement, LteThresholdConversion[EutranThreshold]:%d ,ReportQuantity :%d, NonReportQuantity:%d, EUTRANRepThresh2:%d
Line 3475: LteOffsetConversion[Offset]:%d ,ReportQuantity :%d
Line 3506: QRB: Gen Eutran Meas list - CurMesState: %d
Line 3515: QRB: j (%d) EARFCN (%d)
Line 3521: QRB: QRB type (%d)
Line 3543: QRB: 4G EARFCN SCAN List##Total Number of EARFCN to SCAN (%d) 
Line 3554: QRB: EARFCN (%d) SearchOrder (%d) SCAN STAS Changed to REQUESTED  (%d)
Line 3558: QRB: rr_QrbEutranSacnStatus (%d)
Line 3559: GRR => MPH_EUTRAN_SCAN_EARFCN_REQ
Line 3571: -----> QRB -- SELECT 4G Cell <------
Line 3578: QRB: Invalid QRB type %d
Line 3584: QRB: No valid 4G cell in the list %d
Line 3611: QRB: MPH_EUTRAN_MEAS_REPORT_IND(NumOfEarfcns = %d)
Line 3620: QRB: EARFCN:%d found in measurement at Meas report 
Line 3638: QRB: Number of PCID reported is 0 for EARFCN:%d
Line 3650: QRB: EARFCN:%d:PCID:%d RSRP %d RSRQ %d
Line 3653: QRB: EutranToScanInfo->NbMeas:%d
Line 3659: QRB: ERROR! EARFCN:%d:received in Meas not in EutranInfo
Line 3674: [G2L][QRB] -----> SELECT 4G Cell <------
Line 3682: QRB: Wait for the next MeasReport
Line 3687: QRB: Wait for the next MeasReport - Scan for 1st MRU is not done %d
Line 3716: QRB: rr_EvaluateLteCellForReselDuringQrb
Line 3727: QRB: Check First Resel Criteria of QRB for EARFCN with PCID , E (%d) PCID (%d)
Line 3737: QRB: Candidate! For PCID (%d) - RSRP(%d) > Thr(%d), RSRQ(%d) > Thr(%d)
Line 3757: QRB: Found!! For PCID (%d) - RSRP(%d) RSRQ(%d)
Line 3771: QRB: Found!! For PCID (%d) - RSRP(%d) RSRQ(%d)
Line 3779: QRB: Found!! For PCID (%d) - RSRP(%d) RSRQ(%d)
Line 3793: QRB: Found!! For PCID (%d) - RSRP(%d) RSRQ(%d)
Line 3809: QRB: Found!! For PCID (%d) - RSRP(%d) RSRQ(%d)
Line 3841: QRB: bestIdx (%d)
Line 3872: QRB: STOP Monitoring : Earfcn (%d) measBW(%d) priority(%d) 
Line 3877: QRB: GRR => MPH_EUTRAN_STOP_EARFCN_REQ for EARFCN 
