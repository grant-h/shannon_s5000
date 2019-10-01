Line 92: Ignore serving cell(%d,%d) from reporting
Line 159: Hack: Freq(%d) with RxLev(%d) DISCARDED as not suitable cell for reporting
Line 213:   ServCellBand 2G cells: %d
Line 217:   MultiBand 2G cells: %d
Line 222:   Remaining 2G cells: %d
Line 252: rr_MeasSearchAndAssignIndex(%d)
Line 277:  Found in BaList(%d) %d 
Line 305:  BSIC received  (%d) for Arfcn Match (%d) 
Line 316:  Invalid BSIC (%d) for Arfcn (%d) 
Line 340:  NcRemove Index %d
Line 356:  Freq(%d) with Bsic(%x) reported is in BA list, but SI 5 not acquired
Line 368:  Freq(%d) with Bsic(%x) reported is in BA list, but SI 5bis not acquired
Line 380:  Freq(%d) with Bsic(%x) reported is in BA list, but SI 5ter not acquired
Line 399:  Freq(%d) with Bsic(%x) reported is not in BA list
Line 410:  Index(%d) Freq(%d) Bsic(%x) RxLev(%d) ValidBsic(%d) Xfer(%d)
Line 425: Best 1 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 430: Best 2 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 435: Best 3 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 440: Best 4 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 445: Best 5 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 450: Best 6 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 477: rr_SortStronggestCell
Line 495:  Exclude  ServCell - BccFreq(%d) Bsic(%x) RxLev(%d)
Line 575: Invalid Band in function:rr_NoOfNonServingBands
Line 666: Ncell with Other Band %d Freq %d RemNbFreq %d
Line 674:  NeedNormalRep %d (NumArfcnRcvd %d NbFreq %d NbFreqFromSi5 %d)
Line 722: *** rr_ForceNormalReporting instead of EMR rr_NumOfBsicRcvd(%d) rr_NumOfArfcnRcvd(%d) NbFreq in BA(%d)
Line 873: CellLocking: Make MesaReport as Invalid %d
Line 959: !!!Wrong 900MHz band comp (%x:%x)
Line 977: !!!Wrong 1800 MHz band comp (%x:%x)
Line 995: !!!Wrong 1900 MHz band comp (%x:%x)
Line 1018: !!! Freq Band is not valid (%x:%x)
Line 1068: ERROR RtkGetMemory returned NULL
Line 1073: !!!MeasMsg not allocated not null(0x%x)
Line 1081: (NbMeas=%d)
Line 1084: Index=%d,RxLev=%d,Bsic=%x
Line 1094: TX:>>>:MeasReporting
Line 1108: Meas Report NOT valid
Line 1117: Meas NOT valid during handover
Line 1148: rr_Encode_ENHANCE_MEASUREMENT_REPORT : BSIC Rcvd %d  NeighbourCellList.nb_neighb =%d
Line 1156: Enhance Ind still NORMAL_MEASUREMENT_REPORT ReportType%d  BSIC Rcvd =%d  NeighbourCellList.nb_neighb =%d BaFreqList.NbFreq=%d
Line 1202: SuitableToKeepInNear
Line 1424:  rr_DediFindWorstNear
Line 1439:   Arfcn:%d Bsic:%x RxLev:%d BsicWaitCount:%d - OtherBand
Line 1474:   Arfcn:%d Bsic:%x RxLev:%d BsicWaitCount:%d - SameBand 
Line 1508: ncells_with_valid_bsic_SameBand %d, ncells_with_valid_bsic_OtherBand %d MultiBand_Rep %d
Line 1517: RxLev Worst SameBand Cell  Arfcn:%d Bsic:%x RxLev:%d BsicWaitCount %d
Line 1525: BSIC Worst SameBand Cell  Arfcn:%d Bsic:%x RxLev:%d BsicWaitCount %d
Line 1574: RxLev Worst CellOtherBand Cell   Arfcn:%d Bsic:%x RxLev:%d BsicWaitCount %d
Line 1580: BSIC Worst CellOtherBand Cell  Arfcn:%d Bsic:%x RxLev:%d BsicWaitCount %d
Line 1653: rr_DediSyncList
Line 1657:  Best Far: SameBand Arfcn:%d,RxLev:%d  OtherBand Arfcn:%d,RxLev:%d
Line 1668:  NCells: SameBand:%d  OtherBand:%d  (Multiband_Rep:%d)
Line 1673:  Worst SameBand NCell: Arfcn:%d,RxLev:%d
Line 1678:  Worst OtherBand NCell: Arfcn:%d,RxLev:%d
Line 1795: rr_NbNear:%d,rr_dedicatedSyncListSize:%d, rr_NbFar:%d
Line 1847:  WorstNear.CellOtherBand is NULL 
Line 2006:  Best Far: SameBand Arfcn:%d,RxLev:%d  OtherBand Arfcn:%d,RxLev:%d
Line 2195:  Meas Sub values less than the calculated value %d
Line 2282: MPH_MEAS_REPORT:
Line 2286: Dtx ON
Line 2290: Dtx OFF
Line 2422: SCell
Line 2519:  GL1 report Hacked Rxlev Full(%d), Sub(%d) GRR 1st filtered FullRxL:%d SubRxL:%d 
Line 2557:  Hack FullRxL:%d SubRxL:%d FullRxQ:%d SubRxQ:%d RxLev_val: %d SoftSumFull %d  SoftSumSub %d
Line 2569:  ### No Sample for SUB : RXLEV_SUB (%d), RXQUAL_SUB(%d)
Line 2576: Metrico Registry Used: rr_SimFlag:%d Metrico_Band_Penalty:%d 
Line 2587: Metrico: Arfcn:%d OrigRxLev:%d ReducedRxLev:%d
Line 2593: Metrico: Arfcn:%d OrigRxLev:%d ReducedRxLev:ZERO
Line 2608:  NoOfNear:%d NoOfFar:%d
Line 2642:  MMR: Arfcn(%d) RxL(%d) Bsic(%x) FarCell
Line 2652:  MMR: Arfcn(%d) RxL(%d) Bsic(%x) SCell
Line 2657:  MMR: Arfcn(%d) RxL(%d) Bsic(%x) NearCell BsicWaitCount(%d)
Line 2670: BestFar 1 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 2675: BestFar 2 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 2680: BestFar 3 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 2761: SCell(%d) is out of band
Line 2776: Too many N(%d)+F(%d)
Line 2799: DL_DATA_REQ(MEAS_REPORT)
Line 2876: During HO Don't Update SyncCellL
Line 2913:  CIQ[52-1] wDedArfcn(%d) ucMAIO(%d) ucHSN(%d) ucTimeSlot(%d) ucRxLevFull(%d)
Line 2914:  CIQ[52-2] ucRxLevSub(%d) ucRxQualFull(%d) ucRxQualSub(%d) ucFERFull(%d) ucFERSub(%d)
Line 2915:  CIQ[52-3] ucCodec(%d) ucTimingAdv(%d) ucPowerLevel(%d) ucDedConfig(%d) ucBandInd(%d)
Line 2926:  CIQ[53-Dedi] ucNumGsmMeas(%d) ucNumInterRatMeas(%d) ucBandInd(%d)
Line 2931:  CIQ[53-GSMmeas] wArfcn(%d) ucBsic(%x) ucRxlev(%d)
Line 2936:  CIQ[53-InterRatmeas] wUarfcn(%d) wScramblingCode(%d) ucRssi(%d) ucEcN0(%d) ucRscp(%d)
