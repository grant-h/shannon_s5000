Line 272: ERROR creating RetestUsedFreq Timer
Line 337: No Memory allocated for rrc_FddNetwork_init 
Line 383: ERROR deleting RetestUsedFreqTimer timer
Line 399: couldn't de-register Notification functions in CellReselecter for FddNetwork
Line 595: [FddNetwork] SetScanRequest: uarfcn %d, uarfcnSrchReqd %d 
Line 640: Populating FddNetwork instance from Sib11/12 neighbour info
Line 753: Blind Cell Search failed - ignoring results
Line 776: [MRU Freq %d] RSSI Adjustment:: %d -> %d
Line 793: Added Frequency: %i, Rssi: %i dBm to FddNetwork top of the Freqlist with NumFreqs = %i
Line 840: SetScanRequiredBasedOn2GBplmnSearchInfo %d, 
Line 908: >> FddNetwork Sir_CellList[%i] (Uarfcn %i, Psc %i) EcNo %i, Rscp %i, CappedFreqSir %i, BandSelMetric %i
Line 916: >>>>>> BandPrioSir %i, BandPrio %i
Line 921: >>>>>> PagingConflictPrio %i
Line 930: >> FddNetwork EcNo_CellList[%i] (Uarfcn %i, Psc %i) EcNo %i, Rscp %i, CappedFreqSir %i, BandSelMetric %i
Line 938: >>>>>> BandPrioSir %i, BandPrio %i
Line 943: >>>>>> PagingConflictPrio %i
Line 964: Blind Freq Sacn failed - ignoring results
Line 979: Blind Freq Scan - Full ACQ : numOfFreq %d EcNoThreshold %d
Line 994: >> Blind Freq Scan - Full ACQ : UARFCN %d, numOfCells %d
Line 1011: Blind Freq Scan - Full ACQ : ARFCN %d PSC %d EcN0 %d (%d dB) Rscp %d (%d dBm)
Line 1045: BlindFreqScan (SirBased) - UARFCN %d: BestEcNo %d (%d dB), BestRscp %d (%d dBm)
Line 1053: Blind Freq Scan error - no freq in FddNetwork's FreqList
Line 1059: >> NOTE: No Candidate Found on this Network
Line 1067: > Candidate Found on this Network (Sir_NumCells = %d, EcNo_NumCells = %d)
Line 1076: Blind Freq Scan - Full ACQ = FALSE: numOfFreq %d
Line 1105: [MRU Freq %d] RSSI Adjustment:: %d -> %d
Line 1133: updated Frequency: %i, Rssi: %i dBm to FddNetwork  at index: %i DualCarriePresent(%d)
Line 1138: updated Frequency: %i, Rssi: %i dBm to FddNetwork  at index: %i
Line 1144: Blind Freq Scan Ind error - no freq in FddNetwork's FreqList
Line 1174: Blind Used Freq Sacn for UsedFreq failed - ignoring results
Line 1189: Blind Freq Sacn for UsedFreq - Full ACQ : numOfFreq %d EcNoThreshold %d
Line 1204: >> Blind Freq Scan - Full ACQ : UARFCN %d, numOfCells %d
Line 1221: Blind Freq Scan - Full ACQ : ARFCN %d PSC %d EcN0 %d (%d dB) Rscp %d (%d dBm)
Line 1257: BlindFreqScan (SirBased) - UARFCN %d: BestEcNo %d (%d dB), BestRscp %d (%d dBm)
Line 1266: Blind Freq Scan error - no freq in FddNetwork's FreqList
Line 1272: >> NOTE: No Candidate Found on this Network
Line 1278: > Candidate Found on this Network (Sir_NumCells = %d, EcNo_NumCells = %d)
Line 1302: Retest - Blind Freq Scan - Full ACQ = FALSE: numOfFreq %d
Line 1316: [MRU Freq %d] RSSI Adjustment:: %d -> %d
Line 1343: updated Frequency: %i, Rssi: %i dBm to FddNetwork  at index: %i DualCarriePresent(%d)
Line 1348: updated Frequency: %i, Rssi: %i dBm to FddNetwork  at index: %i
Line 1354: Blind Freq Scan Ind error - no freq in FddNetwork's FreqList
Line 1377: FddNetwork: ResetFddCellList(SirCellListPtr,EcNoCellListPtr)
Line 1521: Sort_CellListSir: Rscp cmp_b(%d) > cmp_a(%d)
Line 1529: Sort_CellListSir: Rscp cmp_b(%d) < cmp_a(%d)
Line 1536: Sort_CellListSir: Rscp cmp_b(%d) == cmp_a(%d)
Line 1644: CapFreqSir: Uarfcn %d, FreqSir %d, SirCap %d
Line 1649: >> Capping FreqSir(%d) to %d
Line 1666: isDcPreferredCellSelection is disabled for CS Only Stack
Line 1715: >>> Sort BandPrio
Line 1723: No Cell Satisfied SIR Criteria, So, moving all DcPreferred Cells into ECNO Cell list
Line 1728: All DcPreferred Cells can not be placed into ECNO Cell list
Line 1762: BuildFddCellListFromBlindFreqScanInd for UARFCN %i, numOfCells %i (IsSirBased %d)
Line 1809: WARNING FddNetwork_p->EcNo_NumCells(%d) > 32
Line 1814: AddGoodRscpToSirCellList & Sort_CellListSir :: Check Triggering Conditions for Sir-based Cell Selection
Line 1837: - Rejecting (Uarfcn %d, Psc %d) as SIR cause of BlackListedCell
Line 1839: :: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
Line 1841: - Add this Cell to EcN0CellListPtr
Line 1866: - Accepting (Uarfcn %d, Psc %d): DcStatus[%d] as SIR cell selection conditions met or DC was configured
Line 1868: :: Sir %d (SirTh %d), Rscp %d (BestRscpTh %d), EcNo %d (EcNoDbTh %d)
Line 1877: At least One Cell has satisfied SIR Criteria
Line 1916: - PSC %d: Band %d, DcStatus %d, give the same BandPrio as Band2
Line 1937: - Band %d: BandPrioritySir %d vs Sir %d
Line 1959: - Accepting (Uarfcn %d, Psc %d) as SIR cell selection conditions met
Line 1961: :: Sir %d (>%d), EcNo %d (>%d)
Line 1967: At least One Cell has satisfied SIR Criteria
Line 1999: - Band %d: DcStatus %d, give the same BandPrio as Band2
Line 2013: - Band %d: BandPrioritySir %d vs Sir %d
Line 2030: - Rejecting (Uarfcn %d, Psc %d) as SIR cell selection conditions not met
Line 2032: :: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
Line 2034: - Add this Cell to EcN0CellListPtr
Line 2064: >>> No Sir Candidate Found on Uarfcn %d
Line 2071: >>> Sort BandPrioSir
Line 2094: At least One Cell has satisfied SIR Criteria
Line 2098: >>> Sort BandPrio
Line 2108: WARNING FddNetwork_p->Sir_NumCells(%d) > 32
Line 2113: >>> No EcN0 Candidate Found on Uarfcn %d
Line 2124: WARNING FddNetwork_p->EcNo_NumCells(%d) > 32
Line 2204: isDcPreferredCellSelection is disabled for CS Only Stack
Line 2214: BuildFddCellListFromBlindFreqScanInd for UARFCN %i, numOfCells %i (IsSirBased %d)
Line 2261: WARNING FddNetwork_p->EcNo_NumCells(%d) > 32
Line 2273: AddGoodRscpToSirCellList & Sort_CellListSir :: Check Triggering Conditions for Sir-based Cell Selection
Line 2295: - Rejecting (Uarfcn %d, Psc %d) as SIR cell selection cause of BlackListed Cell
Line 2297: :: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
Line 2299: - Add this Cell to EcN0CellListPtr
Line 2324: - Accepting (Uarfcn %d, Psc %d) as SIR cell selection conditions met
Line 2326: :: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
Line 2362: - PSC %d: Band %d, DcStatus %d, give the same BandPrio as Band2
Line 2384: - Band %d: BandPrioritySir %d vs Sir %d
Line 2405: - Accepting (Uarfcn %d, Psc %d) as SIR cell selection conditions met
Line 2407: :: Sir %d (>%d), EcNo %d (>%d)
Line 2444: - Band %d: DcStatus %d, give the same BandPrio as Band2
Line 2464: - Band %d: BandPrioritySir %d vs Sir %d
Line 2481: - Rejecting (Uarfcn %d, Psc %d) as SIR cell selection conditions not met
Line 2483: :: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
Line 2485: - Add this Cell to EcN0CellListPtr
Line 2515: >>> No Sir Candidate Found on Uarfcn %d
Line 2522: >>> Sort BandPrioSir
Line 2543: >>> Sort BandPrio
Line 2553: WARNING FddNetwork_p->Sir_NumCells(%d) > 32
Line 2558: >>> No EcN0 Candidate Found on Uarfcn %d
Line 2569: WARNING FddNetwork_p->EcNo_NumCells(%d) > 32
Line 2580: Overwriting existing cell entry
Line 2596: Overwriting existing cell entry
Line 2646: + Adding (Uarfcn %i, Psc %i) to SirCellList: Rscp %i dBm, EcNo %i dB, FreqSir %i dB, BandSelMetric %i dB
Line 2649: :: BandPrioSir %i dB, BandPrio %i, isSameRNCIDCell %i, PConflictPrio %i
Line 2656: - Rejected (Uarfcn %i, Psc %i) as a cell selection candidate due to low Cpich Rscp: %i dBm, isSameRNCIDCell %i
Line 2701: + Adding (Uarfcn %i, Psc %i) to Temporal CellList: Rscp %i dBm, EcNo %i dB, FreqSir %i dB, BandSelMetric %i dB
Line 2704: :: BandPrioSir %i dB, BandPrio %i, isSameRNCIDCell %i, PConflictPrio %i
Line 2711: AddGoodRscpToEcNoCellList - Rejected (Uarfcn %i, Psc %i) as a cell selection candidate due to low Cpich Rscp: %i dBm, isSameRNCIDCell %i
Line 2775: Wrong uarfcn. Or UE Currently Does not support this BAND
Line 2829: pal_ERegId_FixedCpich: %d
Line 2833: Added Overrided Frequency: %i, Rssi: %i dBm to FddNetwork at index: %i
Line 2860: start BlindFreqScan
Line 2874: ERROR Illegal State
Line 2893: ERROR Illegal State
Line 2942: ERROR unable to register  for Cell Reselection Notification
Line 2978: ERROR unable to register  for Cell Reselection Notification
Line 2984: Backgnd Search : PlmnId Detection starting - %i Frequencies to examine
Line 2994: Backgnd Search : Blind Frequency Search initaited
Line 3081: ERROR Illegal State
Line 3107: BlindRssiScan: Negative Cnf
Line 3116: BlindRssiScan: Positive Cnf
Line 3138: ERROR Illegal State
Line 3205: ERROR Illegal State
Line 3267: For Serving Uarfcn = %d
Line 3282: ERROR Illegal State
Line 3291: ERROR Illegal State
Line 3305: ERROR Illegal State
Line 3330: [BPLMN] No Time to complete the BCCH read. Will be done in the next DRX
Line 3336: [BPLMN] No More cells found on Frequency: %i
Line 3344: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 3362: ERROR Illegal State
Line 3367: No cells found on Frequency: %i
Line 3400: Cell detection on the Freq %i failed
Line 3409: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 3412: ERROR Illegal State
Line 3443: ERROR Illegal State
Line 3450: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 3466: ERROR Illegal State
Line 3495: ERROR Illegal State
Line 3537: ERROR Illegal State
Line 3572: ERROR Illegal State
Line 3583: ERROR Illegal State
Line 3593: [BPLMN] MIB Read requested on Cell %i
Line 3601: ERROR Illegal State
Line 3624: [BPLMN] No More cells found on Frequency: %i
Line 3635: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 3642: [BPLMN] No Time to complete the BCCH read. Will be done in the next DRX
Line 3672: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 3711: ERROR Illegal State
Line 3720: ERROR Illegal State
Line 3728: [BPLMN] MIB Read requested on Cell %i
Line 3736: [BPLMN] ERROR Illegal State
Line 3759: [BPLMN] No More cells found on Frequency: %i
Line 3770: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 3777: [BPLMN] No Time to complete the BCCH read. Will be done in the next DRX
Line 3789: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 3811: [BPLMN] Cell Detection Already Paused!!!
Line 3823: Aborted processed
Line 3835: [DS_CELL_SEL] BPLMN: Cell Detection Already Paused !!!
Line 3849: [DS_CELL_SEL] Frequency: %d re-tried
Line 3853: ERROR Illegal State
Line 3877: ERROR Illegal State
Line 3907: ERROR Illegal State
Line 3938: start BlindFreqScan for UsedFreq
Line 3950: retest Next Used Freq
Line 3966: Used Freq Exhausted, Picking Next Freq
Line 3979: retest a barred cell freq (%d)
Line 3999: next RetestBarredCellFreq (%d)
Line 4016: next RetestBarredCellFreq (%d)
Line 4129: Cannot find same RNC Cell anymore from SirCellList, Just select next best cell
Line 4140: Try to select next Same RNC cell from EcNoCellList : isSameRNCCellFound(%i)
Line 4145: Cannot find same RNC Cell anymore from EcNoCellList, Just select best cell
Line 4157: Normal CellSelection : FddNetwork try to get next candidate cell
Line 4192: Fatal Error : Unknown CurrentSelectionType(%d)!!!!! 
Line 4208: FirstBestCellTry From EcNo_CellListPtr after exausting SirCellListPtr
Line 4306: [BlindFreqScan FastRecovery] Fast Recovery from BlindFreqScan Established  
Line 4367: Waiting For BlindFreqScanInd
Line 4371: ERROR Illegal State
Line 4381: ERROR Illegal State
Line 4386: Any Freq Instance and BlindFreqScan Instance exist
Line 4443: FirstBestCellTry From SirCellListPtr During EnterIdleFromConnected
Line 4471: FirstBestCellTry From EcNoCellListPtr During EnterIdleFromConnected
Line 4510: FirstBestCellTry From SirCellListPtr During EnteringToFachPchFromDch
Line 4524: FirstBestCellTry From EcNoCellListPtr During EnteringToFachPchFromDch
Line 4541: FirstBestCellTry From SirCellListPtr During Normal CellSelection
Line 4551: FirstBestCellTry From EcNoCellListPtr During Normal CellSelection
Line 4600: Blind Freq Scan - Full ACQ = FALSE
Line 4608: Retest Ongoing
Line 4643: [CheckingCellSuitability_CuphyBlindFreqScanCnf - Negative confirmation
Line 4664: CheckingCellSuitability_CuphyBlindFreqScanCnf - Positive confirmation
Line 4729: [BPLMN] Frequencies scanned : %i Total Scanned till now : %i
Line 4769: [BPLMN] Wrong Band Id %d
Line 4780: [BPLMN] Frequencies scanned %d are less than the total for FddNetwork_p band %d
Line 4786: [BPLMN] PlmnId Detection starting - Frequencies to search for Cells/Total freq detected = %i / %i
Line 4790: [BPLMN] starting the stored cell search after Blind Scan
Line 4798: [BPLMN] Not enough time now, hence shifting the stored cell search for the next cycle
Line 4813: PlmnId Detection starting - %i Frequencies to examine
Line 4821: PlmnId Detection failed - no frequencies detected!
Line 4827: PlmnId Detection not possible as Cell Reselection is in progress
Line 4870: [BPLMN] remaining Expiry Time: %dms
Line 4890: BPLMN ERROR : Wrong Request
Line 4896: [BPLMN] Error Querying the Timer for remaining time - Pal failure
Line 4901: [BPLMN] Error mapping the timer Handle at PAL and Timer ID at RRC 
Line 4927: ERROR Illegal State
Line 4946: ERROR Illegal State
Line 4953: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 4967: ERROR Illegal State
Line 5016: [BPLMN] FddNetwork_p == NULL 
Line 5024: [BPLMN] Blind Scan earlier had failed. Remove the TIDs and Continue with Scan
Line 5072: BPLMN ERROR : Wrong Band Id %d
Line 5081: [BPLMN]Frequencies scanned %d are less than the total for FddNetwork_p band %d
Line 5083: Background : Frequencies scanned are less than the total for FddNetwork_p band %i
Line 5088: [BPLMN] PlmnId Detection starting - Frequencies to search for Cells/Total freq detected = %i / %i
Line 5093: [BPLMN] starting the stored cell search after Blind Scan
Line 5101: [BPLMN] Not enough time now, hence shifting the stored cell search for the next cycle
Line 5113: PlmnId Detection starting - %i Frequencies to examine
Line 5121: PlmnId Detection failed - no frequencies detected!
Line 5127: PlmnId Detection not possible as Cell Reselection is in progress
Line 5149: [BPLMN] FddNetwork_p == NULL 
Line 5157: [BPLMN] Blind Scan earlier had failed. Remove the TIDs and Continue with Scan
Line 5196: BPLMN ERROR : Wrong Band Id %d
Line 5205: [BPLMN] Frequencies scanned %d are less than the total for FddNetwork_p band %d
Line 5207: Background : Frequencies scanned are less than the total for FddNetwork_p band %i
Line 5211: [BPLMN] PlmnId Detection starting - Frequencies to search for Cells/Total freq detected = %i / %i
Line 5215: [BPLMN] starting the stored cell search after Blind Scan
Line 5223: [BPLMN] Not enough time now, hence shifting the stored cell search for the next cycle
Line 5250: [BPLMN] Frequency Search Already Paused!!!
Line 5278: [DS_CELL_SEL] Ignore BlindCellSearchInd. CellDetection PAUSED by DSRC
Line 5294: [BPLMN] Frequencies scanned : %i Total Scanned till now : %i
Line 5312: BlindRssiScan: Negative Cnf
Line 5321: BlindRssiScan: Positive Cnf
Line 5364: [BPLMN] FddNetwork_p == NULL 
Line 5371: BPLMN : Blind Search earlier had failed. Remove the TIDs and Continue with Scan
Line 5405: [DS_CELL_SEL] ERROR : Wrong Band Id %d
Line 5410: [DS_CELL_SEL] : Frequencies scanned %d are less than the total for FddNetwork_p band %d
Line 5412: [DS_CELL_SEL] : Frequencies scanned are less than the total for FddNetwork_p band %i
Line 5422: PlmnId Detection starting - %i Frequencies to examine
Line 5430: PlmnId Detection failed - no frequencies detected!
Line 5436: PlmnId Detection not possible as Cell Reselection is in progress
Line 5471: ERROR Illegal State
Line 5488: BlindRssiScan: Negative Cnf
Line 5497: BlindRssiScan: Positive Cnf
Line 5523: ERROR Illegal State
Line 5540: BlindFreqScan: Negative Cnf
Line 5551: BlindFreqSearch: Positive Cnf
Line 5583: Retry freq after resume
Line 5593: Removing frequency: %i from detected list
Line 5600: FreqId is NULL
Line 5675: Ptr: CurrentCell == NULL
Line 5687: Reading MCC Success
Line 5707: ERROR Illegal State
Line 5724: [FddNetwork] DetectedFreqIx %d, NumFreqs %d
Line 5752: ERROR Illegal State
Line 5771:  FddNetwork_p->DetectedFreqIx %d
Line 5772:  FddNetwork_p->NumFreqs %d
Line 5783: ERROR Illegal State
Line 5788: All frequencies in Band scanned.. exhausted
Line 5793: ERROR Illegal State
Line 5819: ERROR Illegal State
Line 5844: PLMN [0x%x][0x%x][0x%x] is not updated to BPLMN Handler
Line 5864: Network_Scan PSC : %i  Uarfcn: %i  Rscp: %i dBm, EcN0: %i dB
Line 5865: Network_Scan MCC : %d  MNC : %x 
Line 5903: ERROR Illegal State
Line 5915: ERROR Illegal State
Line 5925: [BPLMN] BPLMN search under progress
Line 5971: [BPLMN] HPLMN id found
Line 5978: ERROR Illegal State
Line 5984: [BPLMN] HPLMN id NOT found, checking Next Cell on same Frequency
Line 5997: ERROR Illegal State
Line 6002: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 6005: ERROR Illegal State
Line 6012: [BPLMN] No cells found on Frequency: %i
Line 6020: [BPLMN] Cell Pointer should not be NULL here
Line 6025: [BPLMN] NO BPLMN search under progress
Line 6039: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 6042: ERROR Illegal State
Line 6082: [BPLMN] MIB reading Error on Cell : %i
Line 6089: [BPLMN] checking Next Cell  %i on same Frequency
Line 6099: ERROR Illegal State
Line 6105: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 6108: ERROR Illegal State
Line 6115: [BPLMN] MIB reading Error , No cells found on Frequency: %i
Line 6130: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 6133: ERROR Illegal State
Line 6164: ERROR Illegal State
Line 6189: ERROR Illegal State
Line 6233: ERROR Illegal State
Line 6257: ERROR Illegal State
Line 6266: [BPLMN] BPLMN search under progress
Line 6353: [BPLMN] WhiteListed Csg id (%d) found
Line 6360: Backgnd Csg Search: checking Next Cell on same Frequency
Line 6372: ERROR Illegal State
Line 6377: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 6380: ERROR Illegal State
Line 6387: No cells found on Frequency: %i
Line 6395: [BPLMN] Cell Pointer should not be NULL here
Line 6400: [BPLMN] NO BPLMN search under progress
Line 6414: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 6417: ERROR Illegal State
Line 6451: [BPLMN] SIB reading Error on Cell : %i
Line 6458: [BPLMN] checking Next Cell  %i on same Frequency
Line 6467: ERROR Illegal State
Line 6473: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 6476: ERROR Illegal State
Line 6484: [BPLMN] MIB reading Error , No cells found on Frequency: %i
Line 6492: [BPLMN] SIB reading Error on Cell : %i
Line 6499: [BPLMN] checking Next Cell  %i on same Frequency
Line 6508: ERROR Illegal State
Line 6514: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 6517: ERROR Illegal State
Line 6524: [BPLMN] MIB reading Error , No cells found on Frequency: %i
Line 6539: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 6542: ERROR Illegal State
Line 6572: ERROR Illegal State
Line 6597: ERROR Illegal State
Line 6624: Message Generation Error
Line 6631: ERROR Illegal State
Line 6655: ERROR Illegal State
Line 6671: PausedReadingPLMNIdonCell_Aborted called
Line 6687: [BPLMN] CSG SIB Read Already Paused!!!
Line 6712: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 6737: Message Generation Error
Line 6742: ERROR Illegal State
Line 6752: ERROR Illegal State
Line 6757: [BPLMN] No More cells found on Frequency: %i
Line 6766: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 6794: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 6803: ERROR Illegal State
Line 6859: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 6868: ERROR Illegal State
Line 6902: ERROR Illegal State
Line 6913: ERROR Illegal State
Line 6918: [DS_CELL_SEL] Serious Coding Error : BlindFreqScan (%d), NumFreqs (%d)
Line 6941: ERROR Illegal State
Line 6950: ERROR Illegal State
Line 6989: BCH is open, no action taken
Line 7002: CellSelection Aborted
Line 7065: CellSelection Aborted
Line 7073: ERROR Illegal State
Line 7079: ERROR Illegal State
Line 7086: ERROR Illegal State
Line 7094: ERROR Illegal State
Line 7126: [CheckingCellSuitability_CuphyBlindFreqScanCnf - Negative confirmation
Line 7133: Before pausing Discrete Count = [%d]
Line 7135: After pausing Discrete Count = [%d]
Line 7145: ERROR Illegal State
Line 7151: CheckingCellSuitability_CuphyBlindFreqScanCnf - Positive confirmation
Line 7203: FirstBestCellTry From SirCellListPtr
Line 7231: FirstBestCellTry From EcNoCellListPtr
Line 7268: FirstBestCellTry From SirCellListPtr During EnteringToFachPchFromDch
Line 7284: FirstBestCellTry From EcNoCellListPtr During EnteringToFachPchFromDch
Line 7303: FirstBestCellTry From SirCellListPtr During Normal CellSelection
Line 7313: FirstBestCellTry From EcNoCellListPtr During Normal CellSelection
Line 7330: Blind Freq Scan - Full ACQ = FALSE
Line 7335: Retest Ongoing
Line 7355: Before pausing Discrete Count = [%d]
Line 7357: After pausing Discrete Count = [%d]
Line 7366: ERROR Illegal State
Line 7384: BlindFreqSearch: Negative Cnf
Line 7395: ERROR Illegal State
Line 7407: ERROR Illegal State
Line 7415: ERROR Illegal State
Line 7425: BlindFreqSearch: Positive Cnf
Line 7464: ERROR Illegal State
Line 7476: ERROR Illegal State
Line 7484: ERROR Illegal State
Line 7537: [BPLMN] BCH read Will Pause Now. Same Cell will be tried for BCH read on RESUME
Line 7545: [BPLMN] BCH read Will Pause Now. Will be reread when RESUME
Line 7550: [BPLMN] Cell Search will be initiated in the next DRX Cycle on RESUME
Line 7577: Message Generation Error
Line 7586: ERROR Illegal State
Line 7594: ERROR Illegal State
Line 7655: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 7679: ERROR Illegal State
Line 7684: [BPLMN] No More cells found on Frequency: %i
Line 7697: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 7734: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 7753: ERROR Illegal State
Line 7758: [BPLMN] No More cells found on Frequency: %i
Line 7767: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 7799: ERROR Illegal State
Line 7822: PausedReadingPLMNIdonCell_Aborted called
Line 7840: [BPLMN] MIB Read Already Paused!!!
Line 7869: [DS_CELL_SEL] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 7884: ERROR Illegal State
Line 7889: [DS_CELL_SEL] No cells found on Frequency: %i
Line 7907: [DS_CELL_SEL] BPLMN: MIB Read Already Paused!!!
Line 7938: ERROR Illegal State
Line 7957: Retest Barred Cell on %d
Line 7972: RetestBarredCellFreq array is full
Line 7978: wrong Uarfcn (%d)
Line 8044: Shared PLMN is not selectable
Line 8048: Shared PLMN is Selectable, Hence Frequency can be camped on
Line 8131: Shared PLMN is not selectable
Line 8135: Shared PLMN is Selectable, Hence Frequency can be camped on
Line 8286: Sir_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 8303: Sir_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/PSC%i) HcsPriority (%d), skip this cell list
Line 8329: [BlackList] Found DC FREQ but UARFCN%d is in BlackListed Frequency
Line 8336: Found DC SIR Cell @Index %i (Sir_NumCells %i)
Line 8343: First Non-DC SIR Cell @Index %i (Sir_NumCells %i)
Line 8347: CurrentCellListIx %i (Sir_NumCells %i)
Line 8364: EcNo_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 8381: EcNo_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/PSC%i) HcsPriority (%d), skip this cell list
Line 8409: [BlackList] Found DC FREQ but UARFCN%d is in BlackListed Frequency
Line 8413: EcNo Cell @CurrentCellListIx %i , EcNoDb [%d] 
Line 8419: Found DC EcNo Cell @Index %i
Line 8426: First Non-DC EcNo Cell @Index %i
Line 8430: urrentCellListIx %i (EcNo_NumCells %i)
Line 8445: NO Selectable Cell Found in CellListPtr(Sir_NumCells %i, EcNo_NumCells %i)
Line 8474: isDcPreferredCellSelection is disabled for CS Only Stack
Line 8500: Sir_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 8517: Sir_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/PSC%i) HcsPriority (%d), skip this cell list
Line 8539: CurrentCellListIx %i (Sir_NumCells %i)
Line 8545: CurrentCellListIx %i (Sir_NumCells %i)
Line 8559: EcNo_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 8576: EcNo_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/PSC%i) HcsPriority (%d), skip this cell list
Line 8598: CurrentCellListIx %i (EcNo_NumCells %i)
Line 8604: CurrentCellListIx %i (EcNo_NumCells %i)
Line 8610: NO Selectable Cell Found in CellListPtr(Sir_NumCells %i, EcNo_NumCells %i)
Line 8649: FindBestSameLAICellWithSCellFromFddCellList : EcN0 Threshold %i
Line 8707: Error: Cannot find SIB1 from SCellSysInfoIdx(%i)
Line 8735: Sir_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell HcsPriority (%d), skip this cell list
Line 8745: Same LAI & RAI found at SirCellListPtr[%i](ARFCN%i/PSC%i)(SirCandidate LAC 0x%x, Current LAC 0x%x) (SirCandidate RAC 0x%x, Current RAC 0x%x)
Line 8754: Same LAI found at SirCellListPtr[%i](ARFCN%i/PSC%i)(SirCandidate LAC 0x%x, Current LAC 0x%x)
Line 8773: LAI / RAI Not matched at SirCellListPtr[%i](ARFCN%i/PSC%i)(SirCandidate LAC 0x%x, Current LAC 0x%x) (SirCandidate RAC 0x%x, Current RAC 0x%x)
Line 8782: LAI Not matched at SirCellListPtr[%i](ARFCN%i/PSC%i)(SirCandidate LAC 0x%x, Current LAC 0x%x)
Line 8791: SirCellListPtr[%i] EcN0[%i](%i dBm) < SameLAI_EcN0_Threshold_Value(%d)
Line 8798: SirCellListPtr[%i] EcN0[%i](%i dBm) Barred(%i)
Line 8805: SirCellListPtr[%i](UARFCN%d PSC%d) is not found from SysInfoCache
Line 8861: Error: Cannot find SIB1 from SCellSysInfoIdx(%i)
Line 8889: EcNoCellListPtr[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnectedModeCell HcsPriority (%d), skip this cell list
Line 8899: Same LAI & RAI found at EcNoCellListPtr[%i](ARFCN%i/PSC%i)(EcioCandidate LAC 0x%x, Current LAC 0x%x) (EcioCandidate RAC 0x%x, Current RAC 0x%x)
Line 8908: Same LAI found at EcNoCellListPtr[%i](ARFCN%i/PSC%i)(EcioCandidate LAC 0x%x, Current LAC 0x%x)
Line 8926: LAI / RAI Not matched at SirCellListPtr[%i](ARFCN%i/PSC%i)(EcioCandidate LAC 0x%x, Current LAC 0x%x) (EcioCandidate RAC 0x%x, Current RAC 0x%x)
Line 8935: LAI Not matched at CellListPtr[%i](ARFCN%i/PSC%i)(EcioCandidate LAC 0x%x, Current LAC 0x%x)
Line 8944: EcNoCellListPtr[%i] EcN0[%i](%i dBm) < SameLAI_EcN0_Threshold_Value(%d)
Line 8951: EcNoCellListPtr[%i] EcN0[%i](%i dBm) Barred(%i)
Line 8958: EcNoCellListPtr[%i](UARFCN%d PSC%d) is not found from SysInfoCache
Line 8981: rrc_FddNetwork_FindBestSameRNCCellWithSCellFromFddCellList : EcN0 Threshold %i
Line 8991: Sir_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 9004: RNCID matched at SirCellListPtr[%i](ARFCN%i/PSC%i)
Line 9011: SirCellListPtr[%i] EcN0[%i](%i dBm) < EcN0_Threshold_Value(%d)
Line 9018: SirCellListPtr[%i] EcN0[%i](%i dBm) Barred(%i)
Line 9025: This is not a SameRNCCell
Line 9036: Sir_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 9046: Same RNCID found at EcNoCellListPtr[%i](ARFCN%i/PSC%i)
Line 9057: EcNoCellListPtr[%i] EcN0[%i](%i dBm) < EcN0_Threshold_Value(%d)
Line 9064: EcNoCellListPtr[%i] EcN0[%i](%i dBm) Barred(%i)
Line 9071: This is not a SameRNCCell
Line 9125: RNC ID: 0x%X (UC-ID : 0x%X)
Line 9129: Same RNCID matched (ARFCN%i/PSC%i RncId 0x%x) with TargetRncId 0x%x
Line 9136: Same RNCID not matched (ARFCN%i/PSC%i RncId 0x%x) with TargetRncId 0x%x
Line 9142: Error: Cannot find SIB3 from SCellSysInfoIdx(%i)
Line 9147: SysInfoCache for (ARFCN%i/PSC%i) is not available
Line 9155: Same RNCID returned for (ARFCN%i/PSC%i) which was active set
Line 9353: ERROR [BlindFreqScan FastRecovery] the Uarfcn %d can not be found!
Line 9361: [BlindFreqScan FastRecovery] Found Uarfcn %d with %d Aset Cells  regardless BlindFreqScan result
Line 9380: [BlindFreqScan FastRecovery] Add Aset Cells PSC: %d 
Line 9393: [BlindFreqScan FastRecovery] Add Serving Cells PSC: %d 
Line 9490: Adding Freq %d at index [%d]
Line 9494: Freq %d already present at index [%d]
Line 9500: Cannot have more than 30 freq in StoredNwPtr
Line 9505: StoredNetworkPointer is NULL
Line 9599: FddNetwork_AddFreqToIfSupportedFreq : MaxBandCnt:%d, Added DlUarfcn: %d, DetermindedBand: %d, SupportedBand : %d
Line 9608: DlUarfcn(%d) is not supported! SupportedBand(%d)
Line 9648: rrc_FddNetwork_IsSupportedBand : MaxBandCnt:%d, GivenBand: %d, SupportedBand : %d
Line 9657: BandId(%d) is not supported!
Line 9738: Adding Frequency: %i to head of the list
Line 9788: Removing Frequency: %i from tail of the list
Line 9794: LastFreqId is NULL
Line 9833: Adding Used Frequency: %i to head of the list
Line 9874: Removing Used Frequency: %i from tail of the list
Line 9880: LastUsedFreqId is NULL
Line 9948: rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i) 
Line 9955: rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i) 
Line 9962: Invalid Cpich: %i for Uarfcn: %i - no entry added to stored network instance
Line 9974: >> Adding Cell(%i,%i) to Frequency
Line 10015: rrc_FddNetwork_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
Line 10021: rrc_FddNetwork_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
Line 10027: Invalid Cpich: %i for Uarfcn: %i - no entry added to stored network instance
Line 10065: rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i) 
Line 10071: rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i) 
Line 10077: Invalid Cpich: %i for Uarfcn: %i - no entry added to stored network instance
Line 10200: rrc_FddNetwork_SetvariableAsPerBand: Unsupported BandId(%i)
Line 10368: isFirstBestCellTry %i
Line 10377: CellTypeFound %i
Line 10397: >>> StoredCells in FddNetwork <<<
Line 10401: StoredCell[%d] %d
Line 10406: No Freq in FddNetwork
Line 10432: Started  creating a stored network instance from USIM data
Line 10464: Invalid Freq(%d)/Cpich(%d) Info transfered from USIM EF_NETPAR
Line 10508: Invalid Freq(%d)/Cpich(%d) Info transfered from USIM EF_NETPAR
Line 10513: Finished creating a stored network instance from USIM data
Line 10570: [StartBlindRSSIScan] rrc_Features.SuppTxFailParam %d, remove all barred cell with cause BaredRachFailure
Line 10589: [BPLMN]Start Scan for Band Id %d 
Line 10613: ERROR Illegal State
Line 10652: UsedFreqId is NULL
Line 10673: FreqId is NULL
Line 10704: numDisFreqtosearch is ZERO
Line 10721: UsedFreqId is NULL
Line 10739: FreqId is NULL
Line 10744: Current Discrete Count = [%d]
Line 10960: [BPLMN] Wrong Band Id %d
Line 10980: ERROR Illegal State
Line 11058: RetestUsedFreqTimer :UsedFreqScanInterval[%d]=%d MaxScanInterval[%d]
Line 11062: RetestUsedFreqTimer : CurNumberOfRepeat[%d] UsedFreqScanRepeatCnt[%d]
Line 11074: ERROR starting RetestUsedFreqTimer
Line 11078: RetestUsedFreqTimer started (TmId=%d)
Line 11080: Schedule Retest Used Freq for +%d
Line 11108: End Retest Used Freq Cell
Line 11134: Time to Retest Used Frequency
Line 11176: Add LastUsedFreq
Line 11203: No Used Frequency Available
Line 11379: CellSelectionDone: FddNetwork_p->Sir_NumCells (%d), FddNetwork_p->EcNo_NumCells (%d)
Line 11391: Update Best RSCP - ServingFreq %d, Cpich %d, Rscp %d (%d dBm)
Line 11400: Update Best RSCP - InterFreq %d, Cpich %d, Rscp %d (%d dBm)
Line 11420: Update Best RSCP - ServingFreq %d, Cpich %d, Rscp %d (%d dBm)
Line 11429: Update Best RSCP - InterFreq %d, Cpich %d, Rscp %d (%d dBm)
Line 11442: CellSelectionDone: ERROR FddNetwork_p->Sir_NumCells (%d) > MAXCELLS
Line 11447: CellSelectionDone: ERROR FddNetwork_p->EcNo_NumCells (%d) > MAXCELLS
Line 11454: CellSelectionDone: BlindFreqScanUsed
Line 11460: FinishCellSelection: BlindFreqScan Not Used
Line 11477: CellSelectionDone: IsNotSelectable is not needed by Abort_Scan
Line 11483: CellSelectionDone: IsNotSelectable is not needed by Abort_Scan
Line 11716: [URRC_ANR]: PausedReadingAnrInfo_Aborted called
Line 11720: [URRC_ANR]: ERROR Illegal State in PausedReadingAnrInfo_Aborted
Line 11749: [URRC_ANR]:ReadingAnrInfoOnCell_AnrInfoReadSuccess
Line 11797: ERROR Illegal State
Line 11825: [URRC_ANR]:ReadingAnrInfoOnCell_AnrInfoReadFailure
Line 11858: [URRC_ANR]: rrc_FddNetwork ReadingAnrInfoOnCell_AnrPause
Line 11867: [URRC_ANR]: Message Generation Error in ReadingAnrInfoOnCell_AnrPause
Line 11874: [URRC_ANR]: ERROR Illegal State in ReadingAnrInfoOnCell_AnrPause
Line 11893: [URRC_ANR]: rrc_FddNetwork ReadingAnrInfoOnCell_AnrAbort
Line 11902: [URRC_ANR]: Message Generation Error in ReadingAnrInfoOnCell_AnrAbort
Line 11907: [URRC_ANR]: ERROR Illegal State in ReadingAnrInfoOnCell_AnrAbort
Line 11945: [URRC_ANR]: PausedReadingAnrInfo_Aborted called
Line 11949: [URRC_ANR]: ERROR Illegal State in PausedReadingAnrInfo_Aborted
Line 11979: [URRC_ANR]: AbortingReadingAnrInfo_Aborted called
Line 11983: [URRC_ANR]: ERROR Illegal State in AbortingReadingAnrInfo_Aborted
Line 12006: [URRC_ANR]: AbortingReadingAnrInfo_Aborted called
Line 12010: [URRC_ANR]: ERROR Illegal State in AbortingReadingAnrInfo_Aborted
Line 12088: [URRC_ANR]: GenAnrInfoRead SUCCESS received
Line 12092: [URRC_ANR]: GenAnrInfoRead FAIL received
Line 12099: [URRC_ANR]: GenAnrInfoRead ABORTED received
Line 12103: [URRC_ANR]: GenAnrInfoRead NOT EXPECTED msg received
Line 12143: [URRC_ANR]: SibSubscriptionType set to %d Because rrc_FddNetwork UtraSiAcqForHoMode(%d) and si_requestForHO(%d)
Line 12152: [URRC_ANR]: rrc_FddNetwork NotActive_SubscribeSysInfoForAnr
Line 12178: [URRC_ANR]: ERROR Adding (%i,%i) to rrc_Frequency_AddCellTo
Line 12181: [URRC_ANR]: Adding (%i,%i) to Network in NotActive_SubscribeSysInfoForAnr
Line 12188: [URRC_ANR]: ERROR Illegal State in NotActive_SubscribeSysInfoForAnr
Line 12230: [URRC_ANR]:ERROR!! AnrHandlerPtr cannot be NULL
Line 12236: [URRC_ANR]: SibSubscriptionType set to %d Because rrc_FddNetwork UtraSiAcqForHoMode(%d) and si_requestForHO(%d)
Line 12240: [URRC_ANR]: PausedReadingAnrInfo_AnrResume called
Line 12244: [URRC_ANR]:ERROR!! ANR Resumed but DetectedCellPtr or AnrHandlerPtr cannot be NULL as this is the FddCellSelReselInfo Instance
Line 12254: [URRC_ANR]: ERROR!! PausedReadingAnrInfo_AnrResume	anr_Uarfcn:%d, fddCell_Uarfcn:%d, anr_Cpich:%d, fddCell_Cpich:%d 
Line 12259: [URRC_ANR]: ANR Resumed successfully PausedReadingAnrInfo_AnrResume
Line 12272: Message Generation Error
Line 12283: ERROR Illegal State
Line 12316: uarfcn %d, SearchRequired %d
Line 12403: Invalid Continent Info (%d)
Line 12407: MccContinentBasedExcusiveBand: Continent (%d), ExclusiveBandBitMask (0x%x)
Line 12463: rrc_FddNetwork_update_uarfcn_search_details:uarfcn updated is %d, 
Line 12469: rrc_FddNetwork_update_uarfcn_search_details:Skipped As Additional Freq: UARFCN is %d, 
