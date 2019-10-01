Line 35: rr_NbNear(%d) rr_NbFar(%d)
Line 50: SERV_CELL 
Line 84: RRsync 
Line 90: --------------------------------
Line 135: Best Far Cell(%d), RxL(%d)
Line 219: NoOfIdleMeas(%d)
Line 253: N->F:%d
Line 313: F->N:%d
Line 357: N->F:%d
Line 368: F->N:%d
Line 372: CtxCount  val(%d) > 65 , ERROR:%d
Line 390: CtxCnt(%d)
Line 420: PendedArfcnByLteMeas:%d
Line 449: Avoid SI read BCCH Read of NCell after Resel Failure in Progress
Line 516: NcellRxLevInd : No samples for NearCell(%d)
Line 568: Trigger PickNextBestCell after NCELL_RXLEV_IND Processing
Line 614: SoftSumVal(%d) Improved! Avoid ImmResel
Line 637: Resel in Progress (%d) || PostResel(%d): Cannot rr_CheckFor Resel due to softsum,
Line 644: Target Cell Bcch Read Already Ongoing on %d BcchReadCauseImmResel %d
Line 668: 1. SoftSum Bad in NON-DRX mode Go for Resel
Line 673: NON-DRX mode in BAD channel, No SuitableCell with RxLev>10
Line 684: 1.1 SoftSum in Danger Zone (less than 850) Check for BCCH read on Suitable Cell (%d) (%d)
Line 696: 1.2 SoftSum in Danger Zone (less than 850) :No Cell with Valid C1 C2 so Find one
Line 708: 1.3 Found N Cell ,Add rr_TargetCellForBcchRead CellToSIQHead (%d) Rxlev (%d)
Line 723: SoftSum is Bad (%d) (less than 900 but bigger than 850)  Tick (%d)
Line 738: 2 NON-DRX mode in BAD channel Go for Resel
Line 743: NON-DRX mode in BAD channel, No SuitableCell with RxLev>10
Line 753:  Two times  SoftSum in Danger Zone:Trigger Resel (less than 900 but bigger than 850) 
Line 754: 2.1 Check for BCCH read on Suitable Cell (%d) (%d)
Line 765: SoftSum in Danger Zone:Trigger Resel (less than 900 but bigger than 850) : No C1 C2 availableCells
Line 768: Check  If there is N Cell with Valid BSIC : BcchReadCause(%d)
Line 777: 2.3 Found N Cell ,Add rr_TargetCellForBcchRead CellToSIQHead (%d) Rxlev (%d)
Line 803: PCH BLER (%d) Improved! Avoid ImmResel
Line 821: Resel in Progress: Cannot rr_CheckForImmediateResel
Line 863: NON-DRX mode in BAD channel
Line 868: NON-DRX mode in BAD channel, No SuitableCell with RxLev>10
Line 878: PCH BLER in Danger Zone
Line 890: PCH BLER in Danger Zone: No avialble C1 C2 Cells
Line 891: Try to find valid BSIC cells
Line 899: AddCellToSIQHead Try BCCH_READ for (%d) Rxlev (%d)
Line 951: Resel in Progress: Cannot rr_CheckForImmediateResel
Line 961: SoftSum in Danger Zone (less than 850)
Line 971: SoftSum in Danger Zone (less than 850) :  No C1 C2 availableCells
Line 972: Try to find valid BSIC cells
Line 979: AddCellToSIQHead Try BCCH_READ for (%d) Rxlev (%d)
Line 998: Resel in Progress: Cannot rr_CheckForImmediateResel
Line 1007: PCH BLER in Danger Zone
Line 1016: PCH BLER in Danger Zone: No avialble C1 C2 Cells
Line 1017: Try to find valid BSIC cells
Line 1023: AddCellToSIQHead Try BCCH_READ for (%d) Rxlev (%d)
Line 1125: SCell RxL(%d) Bsic(0x%x)  SoftSum (%d)  PCH BLER (%d)
Line 1134: SOFTSUM (%d) is low on Scell (%d) Check for Imm Resel
Line 1149: Immedieate Resel trigger option : PCH BLER
Line 1202: rr_DetectAbnormalRRState: RR_RAT_RESUME_NULL and got SCELL_RXLEV_IND
Line 1206: State mismatch btw GRR and other stack
Line 1231: MPH_SCELL_RXLEV_IND
Line 1240: rr_ServCell is NULL! Ignore MPH_SCELL_RXLEV_IND
Line 1260: [G2U][PRIO] rr_ScellRxlevInd: IgnoreLowPriority:%d is changed(prev:%d) and NumLowPrioUarfcn:%d, Update3GScanAndMonitorList
Line 1290: (CIQ)## CIQ_REPORT in IDLE MODE State : %d , ARFCN :%d, CIQ_BSIC : %d, REAL_BSIC : 0x%x, BandIND : 0x%x
Line 1338: UpdatePccnMeas: Subst for NCell(%d)
Line 1351: SCell(%d) is out of band
Line 1398: rr_ServCell is NULL! Ignore MPH_NCELL_RXLEV_IND
Line 1404: MPH_NCELL_RXLEV_IND -> NoOfMeas(%d)
Line 1430: No measurement samples for ARFCN(%d)
Line 1489:  CIQ[53-Idle] ucNumGsmMeas(%d) ucNumInterRatMeas(%d) ucBandInd(%d)
Line 1494:  CIQ[53-GSMmeas] wArfcn(%d) ucBsic(%x) ucRxlev(%d)
Line 1499:  CIQ[53-InterRatmeas] wUarfcn(%d) wScramblingCode(%d) ucRssi(%d) ucEcN0(%d) ucRscp(%d)
Line 1745: IdleStatic: NCellAvg: Arfcn:%d RxLev:%d
Line 1775: IdleStatic: NCellRxLevChange:%d Avg:Arfcn:%d RxLev:%d Current:Arfcn:%d RxLev:%d
Line 1816: Keep RR_FULLY_STATIONARY, RxLev (%d) during LTE TP
Line 1835: IdleStatic:%d Stationary:%d TopNCell:(%d) (%d) 
Line 1842: IdleStatic: Decide FULLY_STATIONARY according to peer stack (3G : %d, 4G : %d) condition
Line 1850: LteDataOngoing
Line 1892: IdleStatic: Reset
