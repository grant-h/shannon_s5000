Line 173: pFreqInfo is NULL
Line 183: UpdateReselPriority(Preserved): earfcn(%d) priority(%d).(%d)
Line 190: UpdateReselPriority(CSG): earfcn(%d) priority(%d)
Line 199: UpdateReselPriority(de&dedi): earfcn(%d) priority(%d).(%d)
Line 205: UpdateReselPriority(de_priority): earfcn(%d) priority(%d)
Line 212: UpdateReselPriority(mbms): earfcn(%d) priority(%d)
Line 219: UpdateReselPriority(Dedicated): earfcn(%d) priority(%d).(%d)
Line 226: UpdateReselPriority(sib): earfcn(%d) priority(%d).(%d)
Line 232: - ReselPriority changed: %d -> %d
Line 346: LteRrmIdle_UpdateReselPriorityForAllFreq
Line 414: Priority state error(%d)
Line 445: freq_timer(T320):%d
Line 479: Setting Dedicate priority is not acceptable in any cell state.
Line 486: return LteRrmIdle_SetDedicatedPriority(num_freq:%d)
Line 491: LteRrmIdle_SetDedicatedPriority(num_freq:%d)
Line 517: Invalid rat_type = %d
Line 528: dedi_priority:earfcn(%d), priority(%d).(%d)
Line 542: intra no_priority:earfcn(%d), priority(%d)
Line 559: LteRrmIdle_DeleteDedicatedPriority
Line 596: LteRrmIdle_AddToDePriorityList(earfcn:%d, freq_timer:%d)
Line 611: same earfcn is already in the MbmsPriorityList
Line 627: DePriorityList.num_freq:%d) >= LTERRM_DEPRIORITY_LIST_SIZE
Line 632: DePriorityList.num_freq:%d)
Line 634: freq_timer(T325):%d
Line 667: Setting Depriority is not acceptable in any cell state.
Line 674: return LteRrmIdle_SetDePriority(num_freq:%d)
Line 679: LteRrmIdle_SetDePriority(num_freq:%d)
Line 721: de_priority:earfcn(%d), priority(%d)
Line 728: DePriorityList->num_freq(%d) is overflow
Line 747: LteRrmIdle_DeleteDePriority
Line 776: LteRrmIdle_AddToMbmsPriorityList(earfcn:%d)
Line 784: same earfcn is already in the MbmsPriorityList
Line 798: MbmsPriorityList.num_freq:%d) >= LTERRM_MBMS_PRIORITY_LIST_SIZE
Line 802: MbmsPriorityList.num_freq:%d)
Line 825: Setting MBMS priority is not acceptable in any cell state.
Line 830: LteRrmIdle_SetMbmsPriority(num_freq:%d)
Line 835: return MbmsPriorityList(num_freq:%d)
Line 851: mbms_priority:earfcn(%d), priority(%d)
Line 858: MbmsPriorityList->num_freq(%d) is overflow
Line 881: LteRrmIdle_DeleteMbmsPriority(earfcn:%d)
Line 885: MbmsPriorityList.num_freq(%d) is zero
Line 892: MbmsPriorityList.num_freq(%d) is overflow
Line 923: mbms_priority:earfcn(%d), priority(%d)
Line 985: Init Mobility Controller
Line 992: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 995: LteRrm_AllocCellInfoBuf: TargetCell
Line 999: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 1173: ListSearchEnable disable(%d)
Line 1177: BplmnMruList.listNum(%d)
Line 1205: [%d] EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1229: MRU EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1251: Remove EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1267: [%d] EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1281: removeCnt(%d)
Line 1312: LteRrm_AddSmallScanResult(totalCnt:%d)
Line 1350: [%d](SMALL DETECT:Sum)EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1372: [%d](SMALL DETECT:Sum)EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1399: Remove EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1415: [%d](SMALL DETECT:Sum)EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1446: EARFCN: %d, value: %d(avg:%d), peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1488: [%d](SMALL DETECT:Avg)EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1510: [%d](SMALL DETECT:Avg)EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1537: Remove EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1553: [%d](SMALL DETECT:Avg)EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1597: New Detected Earfcn:%d (index:%d)
Line 1607: New Detected Earfcn:%d (index:%d)
Line 1650: New Detected Earfcn:%d (index:%d)
Line 1657: New Detected Earfcn:%d (index:%d)
Line 1697: Max PSCH Energy Detected, FreqScanEnergyLevel = %d
Line 1706: energy_window_cnt = %d, FreqScanEnergyLevel = %d
Line 1713: Remove Detected Earfcn:%d (index:%d)
Line 1731: ERROR: SmallScanCnt:%d
Line 1784: Remove Detected Earfcn:%d (index:%d)
Line 1792: (DETECT)EARFCN: %d  (Max: %d, PeakRate: %d, PowVal: %d, max_sum_value:%d), EnergyLevel = %d, WindowCnt = %d
Line 1806: (DROP)EARFCN: %d  (Max: %d, PeakRate: %d, PowVal: %d, max_sum_value:%d) EnergyLevel = %d, WindowCnt = %d
Line 1817: Reset Energy window
Line 1846: Big Scan Result(%d)
Line 1858: (BIG DETECT)EARFCN: %d, max_energy: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1969: [%d](SMALL DETECT)EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1990: [%d](SMALL DETECT)EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 2016: Remove EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 2032: [%d](SMALL DETECT)EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 2055: Invalid value (index = %d, .num_false_alarm = %d)
Line 2060: No LTE signal (fine scan)
Line 2074: Invalid Fine Scan Result (%d)
Line 2081: Invalid gLteRrm_FreqScanState (%d)
Line 2164: FreqScanState ERROR (%d)
Line 2170: FreqScan.Cnt ERROR (FreqScan.Cnt = %d)
Line 2215: Remove EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 2315: Fine Scan Start with EARFCN(%d) SmallScanEnergyLevel(%d)
Line 2336: LteRrm_SendMsgToRrc(LTE_CPHY_FREQ_SCAN_CNF)
Line 2343: [%d] EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 2368: [RRM TEST][SCAN] Found Target Earfcn(earfcn:%d, index:%d)
Line 2374: [RRM TEST][SCAN] NOT Found Target Earfcn(earfcn:%d, index:%d)
Line 2378: [RRM TEST][SCAN] Success Rate:%d (Total Cnt:%d, Fail Cnt:%d)
Line 2478: Too short remain time (%d), Just wait and Try at next time
Line 2483: Enough remain time (%d), Try cell change now
Line 2487: Start LTERRM_SRCHMODE_BPLMN_SRCH(earfcn:%d)
Line 2493: LteRrm_AllocCellInfoBuf: TargetCell
Line 2497: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 2553: Invalid Bplmn State(%d)
Line 2562: ERROR: Invalid LteRrm idleproc(%s)
Line 2592: CheckRcvdPwr success (Psch_max_energy = %d, peak_rate = %d)
Line 2598: LteRrm_AllocCellInfoBuf: TargetCell
Line 2601:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 2627: CheckRcvdPwr failure (Psch_max_energy = %d, Peak_rate = %d)
Line 2635: ERROR: Invalid IdleProc
Line 2658: MTM 8960 - RSRP measure start
Line 2675: [MTM] MtmDelayTimer <Timer Start !!> - FA_SEL Delay : 100 ms
Line 2692: CheckRcvdPwr success
Line 2697: LteRrm_AllocCellInfoBuf: TargetCell
Line 2700: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 2723: ERROR: Invalid LteRrm idleproc
Line 2740: LteRrmIdle_BackupBplmnState
Line 2758: LteRrmIdle_ReStoreBplmnState
Line 2779: Receive LTE_CPHY_FREQ_SCAN_REQ Req (blind scan from %d)(mode:%d)
Line 2799: Send LTE_CPHY_FREQ_SCAN_CNF (Discrete Scan Failure)
Line 2809: Changed FreqScan mode from LTE_FPLMN_SCAN to LTE_FPLMN_SCAN_IRAT for discrete scan mode (%d+20ms)
Line 2822: abnormal(LTE_RRC_STORED_SCAN) BPLMN continue -> Stop
Line 2832: BPLMN RESTART!! (%d)
Line 2849: abnormal(SavedBplmnTargetEarfcn == NULL) BPLMN continue -> new
Line 2876: BplmnMruList.listNum:%d, BplmnScanType:%d
Line 2893: CSG Freq Scan Mode : %d
Line 2897: Freq Scan Mode : %d
Line 2904: Send LTE_CPHY_FREQ_SCAN_CNF (NOT support blind scan)
Line 2915: Send LTE_CPHY_FREQ_SCAN_CNF: NOT Test Band(%d:%d) Target(%d:%d)
Line 2930: LTERRM_INIT_STATE(from %s)
Line 2944: Send LTE_CPHY_FREQ_SCAN_CNF (NOT support this frequency)
Line 2965: Send LTE_CPHY_FREQ_SCAN_CNF (BPLMN disable)
Line 2976: BplmnMruList.listNum is 0
Line 3028: Invalid Scan mode (%d)
Line 3039: BplmnMruList.listNum is 0
Line 3087: Send LTE_CPHY_FREQ_SCAN_CNF (BPLMN disable)
Line 3106: BPLMN SCAN REQ, BplmnTargetEarfcn = %d
Line 3113: Invalid Scan mode (%d)
Line 3173: total black cell num [%d]
Line 3182: List should have been removed via reset_forbidden_list when ANY CS
Line 3228: Received EARFCN in CellSelReq [%d]
Line 3238: Added EARFCN in CellSelReq [%d]
Line 3250: ERROR: Unsuitable category(%d)
Line 3262: No freq list in CS REQ !!
Line 3305: Received EARFCN in CellSelReq [%d]
Line 3318: Added EARFCN in CellSelReq [%d]
Line 3364: ERROR: BPLMN scan is not avail in CONN
Line 3403: Received EARFCN in CellSelReq [%d]
Line 3413: Added EARFCN in CellSelReq [%d]
Line 3443: [OsloPatch] debug print for CellSelReq with Acceptable
Line 3463: Received EARFCN in CellSelReq [%d]
Line 3473: Added EARFCN in CellSelReq [%d]
Line 3542: Redirection : No freq list in CS REQ !!!
Line 3557: Received EARFCN in CellSelReq [%d]
Line 3567: Added EARFCN in CellSelReq [%d]
Line 3583: ERROR: Invalid category
Line 3607: Receive LTE_CPHY_CELL_SEL_REQ (category: %d)
Line 3677: Both commands are activated: IRAT Resel & CCO
Line 3754: is_redirect_scan: TRUE
Line 3761: Unsuitable/Barred Freq(%d) Exist!
Line 3782: Unsuitable and Barred List Removed!
Line 3788: Reset forbidden list [%d]
Line 3792: Unsuitable category
Line 3829: Power On Cell Selection Mode On(init:%d, oos:%d)
Line 3853: Invalid LteRrm state(%s)
Line 3948: cell (%d) in earfcn (%d) is NOT barred (time:%d)
Line 4033: LteRrmIdle_CheckInfCellFromBarredList(earfcn:%d)-> exists
Line 4094: cell (%d) in earfcn (%d) is barred (time:%d)
Line 4131: BarredCell is listed already(cell ID %d, earfcn %d)
Line 4135: WARNING!! (duration == 0) in LteRrmIdle_AddCellToBarredList(cell ID %d, earfcn %d)
Line 4153: pNewElem->time_offset:%d)
Line 4169: ERROR: Elem of cellbarred list is not linked
Line 4181: Cell ID in CellBarredList(%d, %d) in LteRrmIdle_ProcCellSelectReq()
Line 4185: - time_offset(%d)
Line 4200: ERROR in CellBarredList
Line 4236: cellList is NULL!!
Line 4244: Error!! NumSrchWithBarredCellCanx(%d)
Line 4252: Trial[%d] Perform normal cell search
Line 4267: Trial[%d].[%d] IC cell: Earfcn(%d) pci(%d) time_offset(%d)
Line 4291: Trial[%d]. Barred cell with earfcn(%d) is not found in barred-list!!
Line 4293: - Perform normal search
Line 4323: LteRrmIdle_DeleteCellFromBarredList Started: RAT Type(%d), Cell_ID(%d), EARFCN(%d)
Line 4327:  CellBarredList is Empty!!
Line 4345: The 1st cell deleted: BarredTimerUpdate!!
Line 4365: LteRrmIdle_DeleteCellFromBarredList Finished
Line 4400: LteRrmIdle_DeleteAllFromBarredList Started
Line 4417: CellBarredList / FreqBarredList / UnsuitableList are Empty!!
Line 4434: CellBarredList deleted
Line 4463: FreqBarredList deleted
Line 4491: UnsuitableList deleted
Line 4537: TCellBarrdDiff(%d), TCellBarredDurationDiff(%d), IsReverted(%d)
Line 4541: New element added from Cell barred list
Line 4548: pNewElem becomes the first element among the CellBarredList
Line 4621: BarredFreq is already listed (earfcn %d)
Line 4625: WARNING!! (duration == 0) in LteRrmIdle_AddFreqToBarredList(earfcn %d)
Line 4654: ERROR: Elem of Freqbarred list is not linked
Line 4666: EARFCN in FreqBarredList(%d) in LteRrmIdle_ProcCellSelectReq()
Line 4680: ERROR in FreqBarredList
Line 4723: TFreqBarrdDiff(%d), TFreqBarredDurationDiff(%d), IsReverted(%d)
Line 4727: New element added from Freq barred list
Line 4734: pNewElem becomes the first element among the FreqBarredList
Line 4803: This Freq is unsuitable already(earfcn %d)
Line 4807: WARNING!! (duration == 0) in LteRrmIdle_AddFreqToUnsuitableList(earfcn %d)
Line 4835: ERROR: Elem of Unsuitable list is not linked
Line 4848: EARFCN in UnsuitableList(%d) in LteRrmIdle_ProcCellSelectReq()
Line 4862: ERROR in UnsuitableList
Line 4905: TUnsuitableDiff(%d), TUnsuitableDurationDiff(%d), IsReverted(%d)
Line 4909: New element added from Unsuitable list
Line 4916: pNewElem becomes the first element among the UnsuitableList
Line 4959: Barred Cell[%d]: Earfcn(%d), Cell Id(%d)
Line 4983: Barred Freq[%d]: Earfcn(%d)
Line 5007: Unsuitable Freq[%d]: Earfcn(%d)
Line 5039: LteRrmIdle_GetPdm_step_value(step&value)carrier_freq:%d dl_earfcn:%d
Line 5041: LteRrmIdle_GetPdm_step_value(step&value)pdm_control_value:%d
Line 5043: LteRrmIdle_GetPdm_step_value(step&value)one_side_pdm_value:%d
Line 5045: LteRrmIdle_GetPdm_step_value(step&value)pdm_step_cnt:%d
Line 5082: NEXT FREQ SELECT :  CellSelInfo.Idx = %d,  CellSelInfo.NumFreq = %d
Line 5088: BlindCellSel(%d) SearchRepeatMode(%d)  CellSelInfo.Idx(%d)
Line 5128: SearchRepeatMode(%d)  CellSelInfo.Idx(%d)
Line 5149: SearchRepeatMode(%d)  CellSelInfo.Idx(%d)
Line 5151: LteRrmIdle_ProcCellSelectionNextFreq(FH mode)SearchRepeatMode(%d) CellSelInfo.Idx(%d)
Line 5206: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 5211: LteRrm_AllocCellInfoBuf: TargetCell
Line 5214:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 5238: All Freq is Barred
Line 5246:  CellSelInfo.Idx(%d) >=  CellSelInfo.NumFreq(%d)
Line 5297: Sorting frequency based on measurement
Line 5322: [Result_%2d][Earfcn=%5d_%3d][RSRP=%d]
Line 5339: == complete Freq. Selection based on measurement(FreqNum:%d->%d)
Line 5384: LteRrm_AllocCellInfoBuf: TargetCell
Line 5388:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 5394: NEXT CELL SELECT :  CellSelInfo.CellIdx = %d,  CellSelInfo.NumCell = %d
Line 5468: LTERRM_LAST_CELL_SELECT
Line 5485: LteRrm_AllocCellInfoBuf: TargetCell
Line 5490:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 5515: please check: PrimaryCell is NULL!!
Line 5551: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 5596: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 5601: LteRrm_AllocCellInfoBuf: TargetCell
Line 5605:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 5635: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 5660: LTERRM_SPECIFIC_CELL_SELECT:  TargetCell->earfcn=%d, TargetCell->cell_ID=%d
Line 5682: LteRrmIdle_ProcCellSelection(NextCandidate=(%d))
Line 5687: ERROR: Unsuitable IdleProc
Line 5711: ERROR: Invalid next CS cand
Line 5744: [OsloKPI] CellReselSuccess(%d) / CellReselFail(%d)
Line 5761: Receive LTE_CPHY_CELL_RESEL_REQ Msg
Line 5873: LteRrmIdle_ProcCellReselection from RRC
Line 5878: ERROR: Invalid IdleProc
Line 5893: pSelectedCell is NULL
Line 5902: Try Reselection(next Ncell)
Line 5907: LteRrm_AllocCellInfoBuf: TargetCell
Line 5911: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 5923: please check: PrimaryCell is NULL!!
Line 5984: Failure of returning back to the old serving cell
Line 6002: LteRrm_AllocCellInfoBuf: TargetCell
Line 6006:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 6024: please check: ServingCell is NULL!!
Line 6028: Try Reselection(Return to Pcell)
Line 6081: Stop Reselection
Line 6088: LTE_CPHY_CELL_RESEL_CNF with FAIL to RRC
Line 6095: NO REMAINING CANDIDATE CELL !!!
Line 6175: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 6200: Repeat reselection for IRAT( CellSelInfo.Idx :%d)
Line 6216: ConnToIdleLastCell: TRUE to FALSE
Line 6223: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 6233: InitSrchCanx fails
Line 6251: Try Cell selection to next cell (idx:%d)
Line 6261: ERROR: Invalid fail_cause
Line 6280: ProcCellSrchCnf: IdleProc(%s), PCID(%d), earfcn(%d)
Line 6286: ERROR: Invalid LteRrm state: %s
Line 6294: bBackupCellStatusNtf
Line 6406: ERROR: Invalid fail_cause
Line 6437: Simulate sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 6451: ERROR: Invalid IdleProc: %d
Line 6475: ERROR: Invalid case
Line 6524: Simulate sending LTE_CPHY_ACQ_IND to RRC(MTM)
Line 6551: ERROR: Invalid LteRrm idleproc
Line 6606: LteRrmIdle_EvalCellSelection - band7(manual): Srxlev=%d.%ddB, qRxLevMin=%ddBm
Line 6657: SrxLev = %d.%ddB, Squal = %d.%ddB, q_QualMin = %ddB
Line 6690: Warning!! pFreqInfo:NULL in LteRrmIdle_IsSuitableCellFound
Line 6696: Warning!! pCellInfo:NULL in LteRrmIdle_IsSuitableCellFound
Line 6702: Warning!! earfcn of pFreqInfo(%u), pCellInfo(%d) different in LteRrmIdle_IsSuitableCellFound
Line 6752: - Suitable Ncell (%u/%d) found
Line 6873: rat(%d), arfcn(%d), Pmax(SIB)(%d), Pmax(PowerClass)(%d), Pcompansation(%d)
Line 6886: CellID(%d):Srxlev Calculation: min_RSRP(%d)- qRxLevMin(%d)-PCompensation(%d) = Srxlev(%d)
Line 6891: CellID(%d):Srxlev Calculation: RSRP(%d)- qRxLevMin(%d)-PCompensation(%d) = Srxlev(%d)
Line 6935: Cell_ID(%d):Squal Calculation: min_RSRQ(%d)- qQualMin(%d)= Squal(%d)
Line 6940: Cell_ID(%d):Squal Calculation: RSRQ(%d)- qQualMin(%d)= Squal(%d)
Line 6990: LteRrmIdle_CheckThreshHigherInterFreq is called
Line 7002: CSG : RAT:%d, CellID:%d, RSRP:%d, q_RxlevMin:%d, q_QualMin:%d
Line 7008: CSG : Success reselection condition
Line 7013: CSG : Fail reselection condition(neighbor)
Line 7019: CSG : RAT:%d, CellID:%d, RSRP:%d, q_RxlevMin:%d
Line 7029: CSG : Success reselection condition : UTRA FDD
Line 7034: CSG : Fail reselection condition : UTRA FDD
Line 7041: CSG : Success reselection condition : EUTRA
Line 7047: CSG : Fail reselection condition(neighbor)
Line 7054: RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_high_P:%d, thresh_X_high_Q:%d
Line 7063: Success reselection condition
Line 7068: Fail reselection condition(neighbor)
Line 7074: RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_high_P:%d
Line 7084: Success reselection condition : UTRA FDD
Line 7089: Fail reselection condition : UTRA FDD
Line 7096: Success reselection condition : RAT type(%d)
Line 7102: Fail reselection condition(neighbor)
Line 7112: CSG : Reselection is not supported for GERAN
Line 7116: RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_high:%d
Line 7119: RSRQ:%d, q_QualMin:%d
Line 7124: Success reselection condition
Line 7129: Fail reselection condition(neighbor)
Line 7138: CSG : Reselection is not supported for CDMA2000
Line 7142: RAT:%d, RSRP:%d, thresh_X_high:%d
Line 7148: Success reselection condition
Line 7153: Fail reselection condition(neighbor)
Line 7158: ERROR: Invalid RAT_type
Line 7190: LteRrmIdle_CheckThreshLowerInterFreq: IntraFreq is NULL
Line 7197: LteRrmIdle_CheckThreshLowerInterFreq: PrimaryCell is NULL
Line 7213: LteRrmIdle_CheckThreshLowerInterFreq(CSG Srxlev_Serv:%d, RAT_Type:%d, ThreshServLow_P:%ddB, ThreshServLow_Q:%ddB)
Line 7218: LteRrmIdle_CheckThreshLowerInterFreq(Srxlev_Serv:%d, RAT_Type:%d, SIB3.ThreshServLow_P:%ddB, SIB3.ThreshServLow_Q:%ddB)
Line 7233: CSG : RSRQ:%d, q_QualMin:%d, thresh_X_low_Q:%d
Line 7241: CSG : Success reselection condition: RAT type(%d)
Line 7246: CSG : Fail reselection condition(neighbor)
Line 7252: CSG : RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_low_P:%d
Line 7263: CSG : Success reselection condition : UTRA FDD
Line 7269: CSG : Fail reselection condition : UTRA FDD
Line 7277: CSG : Success reselection condition : EUTRA
Line 7284: CSG : Fail reselection condition(neighbor)
Line 7291: RSRQ:%d, SIBx.q_QualMin:%d, SIBx.thresh_X_low_Q:%d
Line 7299: Success reselection condition: RAT type(%d)
Line 7304: Fail reselection condition(neighbor)
Line 7310: RAT:%d, RSRP:%d, SIBx.q_RxlevMin:%d, SIBx.thresh_X_low_P:%d
Line 7320: Success reselection condition : UTRA FDD(%d)
Line 7325: Fail reselection condition : UTRA FDD(%d)
Line 7332: Success reselection condition : RAT type(%d), Freq(%d)
Line 7338: Fail reselection condition(neighbor): RAT type(%d), Freq(%d)
Line 7348: CSG : Reselection is not supported for GERAN
Line 7353: RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_low_P:%d
Line 7359: Success reselection condition : GSM(%d)
Line 7364: Fail reselection condition(neighbor) : GSM(%d)
Line 7372: CSG : Reselection is not supported for CDMA2000
Line 7377: RAT:%d, RSRP:%d, thresh_X_low:%d
Line 7383: Success reselection condition : CDMA(%d), Freq(%d)
Line 7388: Fail reselection condition(neighbor) : CDMA(%d), Freq(%d)
Line 7393: ERROR: Invalid RAT_type
Line 7400: Fail reselection condition(serving)
Line 7450: BARRED FREQ
Line 7573: [HF] S value of Cell(%d)(Freq:%d) > threshold and Treselection Zero
Line 7585: [HF] S value of Cell(%d)(Freq:%d) > threshold, Treselection started, Eval Results:%d, TReselectionStart:%d
Line 7592: HigherPrioCRTriggered++(%d)
Line 7596: Error: IsTreselectionTrig(%d) HigherPrioCRTriggered(%d)
Line 7624: [HF] S value of Cell(%d)(Freq:%d) > threshold and Treselection passed (CurrentTime:%d)
Line 7631: [HF] S value of Cell(%d)(Freq:%d) > threshold But Treselection failed (CellID(%d) != StrongestNcellID(%d))
Line 7639: [HF] S value of Cell(%d)(Freq:%d) > threshold but Treselection not passed yet (CurrentTime:%d)
Line 7650: [HF] S value of Cell(%d)(Freq:%d) <= threshold
Line 7652: q_RxlevMin(%d), thresh_X_high(%d)
Line 7664: HigherPrioCRTriggered--(%d)
Line 7683: [HF] NumCandidateCell:%d, ElapsedTimeInPCell:%d
Line 7707: CellReselInfo.ppCCellList NULL
Line 7738: PrimaryCell is gpHighestRankCell
Line 7744: PrimaryCell is NULL
Line 7767: Highest Ranked Cell is changed => Remove Cell/FreqBarredList
Line 7781: CellBarred Tmr STOP
Line 7844: PrimaryCell is NULL
Line 7857: BARRED FREQ
Line 7973: RValueDiff(%d) = nRsrp(%d) - Qoffset(%d) - sRsrp(%d) - Qhyst(%d), RValueDiffMax(%d)
Line 7977: RsrqDiff(%d) = nRsrq(%d) - Qoffset(%d) - sRsrq(%d) - Qhyst(%d), ReturnRValueDiff(%d)
Line 7987: [IF] R value of Cell(%d) > 0 and Treselection Zero
Line 7995: Fast Reselection(cinr:%d, RValueDiffMax:%d), Treselection(%d)
Line 8004: [IF] R value of Cell(%d)(Freq:%d) > 0, Treselection started (TReselectionStart:%d)
Line 8011: IntraFreqCRTriggered++(%d)
Line 8015: Error: IsTreselectionTrig(%d) IntraFreqCRTriggered(%d)
Line 8043: [IF] R value of Cell(%d)(Freq:%d) > 0 and Treselection passed (CurrentTime:%d)
Line 8048: [IF] S value of Cell(%d)(Freq:%d) > 0 But Treselection failed (CellID(%d) != StrongestNcellID(%d))
Line 8054: [IF] R value of Cell(%d)(Freq:%d) > 0 but Treselection failed (CurrentTime:%d)
Line 8062: [IF] R value of Cell(%d)(Freq:%d) <= 0
Line 8073: IntraFreqCRTriggered--(%d)
Line 8094: [IF] NumCandidateCell:%d, ElapsedTimeInPCell:%d
Line 8117: CellReselInfo.ppCCellList NULL
Line 8147: LTERRM.Set.pHighestRankCell is NULL
Line 8153: PrimaryCell is NULL
Line 8173: Highest Ranked Cell is changed => Remove Cell/FreqBarredList
Line 8245: BARRED FREQ
Line 8317: [R value] Rs(%d) Rn(%d) Qhyst(%d) Qoffset(%d)
Line 8320: [R value_Inst] Rs(%d) Rn(%d) Qhyst(%d) Qoffset(%d)
Line 8345: [EF] R value of Cell(%d)(Freq:%d) > 0 and Treselection Zero
Line 8357: [EF] R value of Cell(%d)(Freq:%d) > 0, Treselection started (TReselectionStart:%d)
Line 8364: EqualPrioCRTriggered++(%d)
Line 8368: Error: IsTreselectionTrig(%d) EqualPrioCRTriggered(%d)
Line 8397: [EF] R value of Cell(%d)(Freq:%d) > 0 and Treselection passed (CurrentTime:%d)
Line 8404: [EF] R value of Cell(%d)(Freq:%d) > 0 But Treselection failed (CellID(%d) != StrongestNcellID(%d))
Line 8410: [EF] R value of Cell(%d)(Freq:%d) > 0 but Treselection failed (CurrentTime:%d)
Line 8417: [EF] R value of Cell(%d)(Freq:%d) <= 0
Line 8429: EqualPrioCRTriggered--(%d)
Line 8451: [EF] NumCandidateCell:%d, ElapsedTimeInPCell:%d
Line 8474: Old CellResel.ppCCellList[%d] Earfcn:%d, Cell id:%d
Line 8484: New CellResel.ppCCellList[%d] Earfcn:%d, Cell id:%d
Line 8498: CellReselInfo.ppCCellList NULL
Line 8551: BARRED FREQ
Line 8557: LteRrmIdle_EvalLowerInterFreq: PrimaryCell is NULL
Line 8638: (RAT:%d, Earfcn:%d, PCI:%d) MeasTime_diff(%d), Idle DRX Cycle(%d)
Line 8642: No reselection candidate(RAT:%d, earfcn:%d, id:%d). Measurement and Evaluation didn't happen at the same DRX cycle
Line 8664: Fast Reselection(cinr:%d), Treselection(%d)
Line 8677: [LF] S value of Cell(%d)(Freq:%d) and Treselection Zero
Line 8682: [LF] S value of Cell(%d)(Freq:%d) and Treselection Zero
Line 8684: But Cell Reselection to IRAT lower-priority cell is suspended (other priority cell is waiting for CR).
Line 8685: - HigherPrioCRTriggered(%d) EqualPrioCRTriggered(%d) IntraFreqCRTriggered(%d)
Line 8687: - other low prio. cell (but higher than serv) triggered:(%d)
Line 8700: Earfcn(%d), CellID(%d), Set IsTreselectionTrig(%d)
Line 8705: Error: IsTreselectionTrig(%d)
Line 8711: [LF] S value of Cell(%d)(Freq:%d) > threshold, Treselection started (TReselectionStart:%d)
Line 8741: [LF] S value of Cell(%d)(Freq:%d) > threshold and Treselection passed (CurrentTime:%d)
Line 8748: [LF] S value of Cell(%d)(Freq:%d) > 0 But Treselection failed (CellID(%d) != StrongestNcellID(%d))
Line 8757: [LF] S value of Cell(%d)(Freq:%d) > threshold but Treselection passed (CurrentTime:%d)
Line 8760: But Cell Reselection to IRAT lower-priority cell is suspended (other priority cell is waiting for CR).
Line 8761: - HigherPrioCRTriggered(%d) EqualPrioCRTriggered(%d) IntraFreqCRTriggered(%d)
Line 8763: - other low prio. cell (but higher than serv) triggered:(%d)
Line 8770: [LF] S value of Cell(%d)(Freq:%d) > threshold but Treselection failed (CurrentTime:%d)
Line 8778: [LF] S value of Cell(%d)(Freq:%d) <= threshold
Line 8780: Srxlev_Serv(%d), ThreshServLow(%ddB), q_RxlevMin(%ddB), thresh_X_low(%ddB)
Line 8810: [LF] NumCandidateCell:%d, ElapsedTimeInPCell:%d
Line 8833: CellReselInfo.ppCCellList NULL
Line 8884: [Eval] freq (%d) Higher (%d).(%d)>(%d).(%d) or isCsgCell(%d)/CsgMeasReq(%d)
Line 8904: [Eval] freq (%d) Equal (%d).(%d)=(%d).(%d) or isCsgCell(%d)/CsgMeasReq(%d)
Line 8919: Equal Priorities between RATs are not SUPPORTED!-> Low Priority Evaluation
Line 8941: [Eval] freq (%d) Lower (%d).(%d)<(%d).(%d) or isCsgCell(%d)/CsgMeasReq(%d)
Line 9000: Resel Ranking List::
Line 9008: [%d] Earfcn:%d, Cell id:%d, RSRP:%d
Line 9035: Proc CELL_RESELECTION_EVALUATION
Line 9187: UtraMeasCnt(%d) reset to 0
Line 9192: UtraMeasCnt(%d)
Line 9219: CellStatusNtf cell is selected
Line 9242: Simulate sending LTE_CPHY_CELL_SEL_CNF to RRC(MTM)
Line 9271: Simulate sending LTE_CPHY_CELL_SEL_CNF to RRC
Line 9277: Simulate sending LTE_CPHY_CELL_RESEL_CNF to RRC
Line 9290: Camp-on success.
Line 9355: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 9369: InitSrchCanx fails
Line 9389: Try cell selection to next cell (idx:%d)
Line 9418: Try Cell selection to next cell (idx:%d)
Line 9429: ERROR: Invalid category
Line 9463: (CellReselInfo.ppCCellList == NULL) or CellReselInfo.NumCCell == 0
Line 9494: BARRED FREQ: No Cell to Reselect !!!
Line 9549: CellBarred CANCEL (%d, %d) in low RSRP(%d)
Line 9554:  TargetCell is NULL
Line 9562: Csr_Inf: LTE_CELL_BARRED
Line 9601: LTE_SELECT_NEW_SUIT_CELL
Line 9618: Unsuitable category !!!
Line 9624: LTE_SCAN_NEXT_FREQ with Category: %d
Line 9636: Unsuitable category !!!
Line 9641: LTE_STOP_SCAN with Category %d
Line 9661: q_QualPresent=(%d), q_QualMin=(%d), q_Qualminoffset=(%d)	, q_QualMinWBPresent=(%d), q_QualMinAllSymbolPresent=(%d)
Line 9678: EARFCN(%d), isCsgCell(%d)
Line 9732: LteRrmIdle_EvalCellSelection FAIL!!(%d, %d)
Line 9744: ERROR: different category cell selection/reselection
Line 9757: ERROR: Invalid category
Line 9774: CellStatusNtf cell is not selected
Line 9789: InitSrchCanx condition satisfied: RSRP(%d)>(%d), RSRQ(%d)>(%d)
Line 9796: InitSrchCanx condition not satisfied. RSRP(%d)<=(%d), RSRQ(%d)<=(%d)
Line 9802: out of range: num_cell is larger than 3. (%d)
Line 9807: Camp-on fails and no interference detected.
Line 9841: ERROR: invalid idlemode proc
Line 9876: LteRrm_AllocCellInfoBuf: TargetCell
Line 9880:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 9897: Copy TargetCell(%d), PrimaryCell is NULL
Line 9901: please check: PrimaryCell is NULL!!
Line 9907: INVALID TargetCell!!!!!!
Line 9930: EARFCN(%d), isCsgCell(%d)
Line 9972: SIB1: q_QualPresent=(%d), q_QualMin=(%d), q_Qualminoffset=(%d), q_QualMinWBPresent=(%d), q_QualMinAllSymbolPresent=(%d)
Line 10023: SI update error: S-criteria fail
Line 10028: Stop read SIB (IPC)
Line 10081: [OsloPatch] debug print for Category change to suitable cell
Line 10082: Category change Acceptable to Suitable cell (%s State)
Line 10090: NULL ServCell when SI update or ConnRel or Category change to suitable cell(Please check primitive from other layer)
Line 10100: SameCellSelect:%d
Line 10172: BARRED FREQ: No Cell to Reselect !!!
Line 10248: SI update error: Invalid Category
Line 10261: LTE_CELL_BARRED or FREQ_BARRED: Stop measurement and Wait CellSelectReq from RRC
Line 10288: LTE_CPHY_CELL_STATUS_NTF Msg is NULL(%s State)
Line 10295: MFBI Enabled(earfcn:%d)
Line 10314: PrimaryCell is NULL
Line 10318: please check: PrimaryCell is already NULL!!
Line 10331: IntraFreq is NULL
Line 10335: please check: IntraFreq is already NULL!!
Line 10367: Receive LTE_CPHY_CELL_STATUS_NTF Msg(categoty=%d in %s State)
Line 10385: GCID:%8x, TAC:%4x, MCC:%6d, MNC:%6d
Line 10389: GCID:%8x, TAC:%4x, MCC:%6d, MNC:%6d
Line 10412: LTE_CPHY_CELL_STATUS_NTF Msg for PMAX (%d)
Line 10443: No cell for barring cell of LTE_SELECT_NEW_SUIT_CELL
Line 10487: EARFCN(%d), isCsgCell(%d)
Line 10491: BPLMN target Camp On Complete !
Line 10499: ERROR: Invalid IdleProc(%d)
Line 10528: LTE_CONT_CURRENT_FREQ will be started at next sleep time
Line 10561: LteRrm_AllocCellInfoBuf: TargetCell
Line 10565:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 10623: LTE_CONT_CURRENT_FREQ will be started at next sleep time
Line 10665: Earfcn is last(%d)
Line 10688: Invalid Scan mode (%d)
Line 10708: LTE_STOP_BPLMN_SCAN: DrxSpareTmr is NOT running
Line 10710: Sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 10722: Sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 10785: Simulate sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 10829: LTE_STOP_BPLMN_SCAN: DrxSpareTmr is NOT running
Line 10837: Simulate sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 10869: LteRrm_AllocCellInfoBuf: TargetCell
Line 10873: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 10885: please check: PrimaryCell is NULL!!
Line 10948: LteRrm_SendMsgToRrc(LTE_CPHY_FREQ_SCAN_CNF)
Line 10969: Invalid LTE_STOP_SCANNING (%s State)
Line 11032: [%d] sibEarfcn[%d] sibBw[%d]
Line 11076: LTE_SIB1_READ_FAIL & Spare timer expired: CellSel.CellIdx(%d)
Line 11087: skip LTE_CPHY_FREQ_SCAN_DONE_NTF(%d) in PLMN_SCAN_STOP state
Line 11099: ERROR: Invalid scan done ntf
Line 11122: LteRrmIdle_ProcFreqScanDoneNtf(scan_update = %d)
Line 11168: Invalid gLteRrm_BplmnState = %d
Line 11201: BPLMN Small Scan Result
Line 11222: [%d] EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 11249: [RRM TEST][SCAN] Found Target Earfcn(earfcn:%d, index:%d)
Line 11254: [RRM TEST][SCAN] NOT Found Target Earfcn(earfcn:%d, index:%d)
Line 11257: [RRM TEST][SCAN] Success Rate:%d (Total Cnt:%d, Fail Cnt:%d)
Line 11326: Earfcn is last(%d)
Line 11349: Invalid Scan mode (%d)
Line 11371: LTE_STOP_BPLMN_SCAN: DrxSpareTmr is NOT running
Line 11373: Sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 11385: Sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 11401: BPLMN start (BplmnTargetEarfcn=%d)
Line 11418: Invalid BPLMN state (%d)
Line 11439: pFreqInfo==NULL in LteRrmIdle_ResetCrTrigFlag
Line 11453: - earfcn(%d) cell_id(%d): reset IsTreselectionTrig(%d)
Line 11463: - earfcn(%d) cell_id(%d): reset IsTReselStarted(%d), TReselectionStart(%d), MeasureRetriedBeforeReselection(%d)
Line 11492: pFreqList==NULL in LteRrmIdle_ResetFreqCrTrigFlag
Line 11524: LteRrmIdle_ResetHighEqualFreqCrTrigFlag
Line 11580: InitSrchCanx: (%d)Update cell: cp_type(%d), cell_id(%d), time_offset(%d)
Line 11583: - RSRP(%d), ant_num(%d), dl_bw(%d)
Line 11588:  TargetCell is NULL. No update for InitSrchCanx
Line 11619: Reset csr Inf_cell set for InitSrchCanx
Line 11656: sorting inf cells with rsrp
Line 11673: Cells larger than (%d)-th place deleted
Line 11691: Mode change to LTERRM_INF1TOL1LC. Not overlapped. Timing diff(%d)
Line 11695: Mode change to LTERRM_INF2TOL1LC. Overlapped. Timing diff(%d)
Line 11703: Try InitSrchCanx -> Mode change to LTERRM_INF1TOL1LC
Line 11709: num_cell == out of range
Line 11738: Save Prev INF Info and Init InfCellset
Line 11833: InitSrchCanx: InfMode == LTERRM_INFDEFAULT
Line 11840: InitSrchCanx: InfMode == LTERRM_INF1TOL1LC
Line 11844: InitSrchCanx: Sync Ncell detected once again
Line 11856: InitSrchCanx: InfMode == LTERRM_INF2TOL1LC
Line 11861: InitSrchCanx: Wrong LTERRM.Set.InfMode
Line 11866: InitSrchCanx: No INF-suspected cell exists
Line 11900: LteRrmIdle_ResetTempQoffsetList
Line 11931: LteRrmIdle_StartTempQoffsetTimer
Line 11957: - No cells to run temp Qoffset timer
Line 11965: temporary Qoffset Tmr START(%d ms)
Line 11993: No running timer found for temp Qoffset -> Need to check
Line 12017: Temp Qoffset exist(%d)
Line 12025: - Temp Qoffset number error. pList == NULL -> Not applied
Line 12040: - %d. duration is too large(%d) -> Not applied
Line 12062: - LTE:rat(%d) earfcn(%d) pci(%d) qtemp_offset(%d) timestamp(%d ms) duration(%d s) -> expireTime(%d us)
Line 12069: - UMTS:rat(%d) arfcn(%d) pci(%d) qtemp_offset(%d) timestamp(%d ms) duration(%d s) -> expireTime(%d us)
Line 12077: - GSM:rat(%d) arfcn(%d) BSIC(%d) qtemp_offset(%d) timestamp(%d ms) duration(%d s) -> expireTime(%d us)
Line 12084: - rat(%d) out of range
Line 12096: Warning!! Temp Qoffset OffsetNum(%d) out of range -> Not applied
Line 12180: Applying temp Qoffset to earfcn(%d) pci(%d)
Line 12184: - TempQoffset(%d): Srxlev or RSRP (%d->%d)
Line 12190: - TempQoffset(%d): Squal or RSRQ (%d->%d)
Line 12217: - Dropped cell was in T_reselection
Line 12221: - HigherPrioCRTriggered-- (%d -> %d)
Line 12226: - IntraFreqCRTriggered-- (%d -> %d)
Line 12232: - EqualPrioCRTriggered-- (%d -> %d)
Line 12263: ERROR: pTargetFreq == NULL
Line 12277: - Check Compared Freq (Earfcn(%d),Pci(%d) priority(%d), IsTreselectionTrig(%d)
Line 12280: - Check Target Freq (RAT Type:(%d), Earfcn(%d), priority(%d)
Line 12286: - Reselection to lower-prio. suspended (Earfcn(%d),Pci(%d) has higher priority(%d)>(%d))
Line 12324: ERROR: pTargetFreq == NULL
Line 12328: Monitor any cells under reselection (higher priority than earfcn:%d)
