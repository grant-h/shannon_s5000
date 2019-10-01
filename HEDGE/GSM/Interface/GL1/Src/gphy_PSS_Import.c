Line 108: pal_MemAlloc() failure
Line 131: GL1 => MMC :: HEDGEL1_MMC_GSM_TIMING_LATCH_CNF Sending Fail
Line 135: Failed to free the memory
Line 139: GL1 => MMC :: HEDGEL1_MMC_GSM_TIMING_LATCH_CNF [SIM &D] 
Line 163: [GL1 Error] No Memory Allocated
Line 182: GL1 => MMC :: HEDGEL1_MMC_LTE_SEARCHMEASURE_STOP_REQ (PWR DOWN) simno:%d
Line 187: GL1 => MMC :: HEDGEL1_MMC_LTE_SEARCHMEASURE_STOP_REQ (PWR DOWN) Sending Fail
Line 191: pal_MemFree failure
Line 225: [G2L] LMM: l1x_LmmCellSearch_Adapter (FN %d) simno:%d
Line 234: LMM: LTE_CELL_SEARCH canceled due to LTE measurement disabled
Line 245: LMM: LTE_CELL_SEARCH canceled due to BCCH/PCH Read in PTM
Line 253: [GL1 Error] No Memory Allocated
Line 270: [G2L] LMS_PTM_INDEX => Cell Search
Line 283: [G2L] EARFCN %d not in List
Line 298: [G2L] Adapt TIme :: DUR (%d %d) START (%d %d)
Line 307: Target EARFCN not found
Line 321: Target EARFCN not found
Line 337: [G2L] 2G DELTA Latch Time Qb(%d) - mod 614400 x 6 (60ms) will be set.
Line 347: [G2L] L Offset = (%d)
Line 349: [G2L] == LTE TIME CALCULATION for Frame Position
Line 354: [G2L] Result (%d)L_Offset  = B-(A+a) 
Line 356: [G2L] Result (%d)L_Offset = mod 614400
Line 367: [G2L] cellPtr->framePos(%d) LteDeltaFramePos(%d)
Line 373: Cell ptr not found
Line 391: [G2L] Warning! Latch Diff 1FN!, Meas Length is reduced as 1 FN.
Line 396: [G2L] Warning! Latch TIme Diff too long, ignore measurement! ReqFn(%d) CnfFn(%d)
Line 401: [G2L] == LTE TIME CALCULATION for GAP Start Position
Line 407: [G2L] 2G DELTA GAP (%d)Qb (%d)us LatchedSrchTime(%d) added_compensation (%d)
Line 427: [G2L] LTE 1st Offset before Checking Roll-Back for Max Num (%d, %d, %d)
Line 473: [G2L] CONVERTED TIME LTE START <SFN(%d) TTI(%d) Offset(%d)> DUR <TTI (%d) Offset(%d)> 
Line 491: LMS: LTE_CELL_SEARCH - DEFAULT AGC/AFC is updated
Line 494: [G2L] LTE_CELL_SEARCH [%d] AGC1/2 (%d, %d) AFC (%d)
Line 500: LMS: last search time is %d for EARFCN(%d)
Line 544: GL1 => MMC :: HEDGE_MMC_LTE_CELL_SEARCH_REQ Sending Fail
Line 548: pal_MemFree failure
Line 560: pal_MemFree failure
Line 600: LMM: l1x_LmmCellMeasure_Adapter for Earfcn[%d] simno:%d
Line 609: LMM: LTE_CELL_MEASURE canceled due to LTE measurement disabled
Line 620: LMM: LTE_CELL_MEASURE canceled due to BCCH/PCH Read in PTM
Line 628: [GL1 Error] No Memory Allocated
Line 644: [G2L] LMS_PTM_INDEX => Cell Measure
Line 655: [G2L] Adapt TIme :: DUR (%d %d) START (%d %d)
Line 663: [G2L] EARFCN %d not in List
Line 678: [GL1 Error] EARFCN object is not found
Line 687: ########## GSM TIME CALCULATION for Frame Position
Line 699: [G2L] 2G DELTA Latch Time Qb(%d) - mod 614400 x 6 (60ms) will be set.
Line 708: [G2L] QB -> MicroSec(%d)
Line 710: [G2L] mod 10ms = (%d)
Line 713: [G2L] L Offset = (%d)
Line 715: ########## LTE TIME CALCULATION for Frame Position
Line 718: [G2L] LTE Original Diff OFFSET (%d)  = A+a 
Line 720: [G2L] LTE Original Diff (%d)L_Offset = mod 614400
Line 723: [G2L] Result (%d)L_Offset = B-(A+a) 
Line 725: [G2L] Result (%d)L_Offset = mod 614400
Line 745: [G2L] Warning! Latch Diff 1FN!, Meas Length is reduced as 1 FN.
Line 750: [G2L] Warning! Latch TIme Diff too long, ignore measurement! ReqFn(%d) CnfFn(%d)
Line 760: [G2L] 2G DELTA GAP (%d)Qb (%d)us
Line 767: [G2L] LTE_CELL_MEAS : Searching Frame Position Information
Line 771: [G2L] LTE_CELL_MEAS : Target Cell ID (%d)
Line 780: [G2L] LTE_CELL_MEAS : cellCounterMMC (%d)
Line 787: [G2L] LTE_CELL_MEAS : Only Updating FrPos, not Meas Req element
Line 793: [G2L] LTE_CELL_MEAS : Updating all values to to be included in MEAS REQ
Line 799: [G2L] LTE_CELL_MEAS(lastTime %d) CellId (%d) FramePos Ori (%d) => New (%d) measBW(%d)
Line 807: [GL1 Error] Cell object is not found
Line 843: [G2L] LTE 1st Offset before Checking Roll-Back for Max Num (%d, %d, %d)
Line 871: [G2L] CONVERTED TIME Delta to START Pos (G->L)  SFN(%d) TTI(%d) Offset(%d) 			-> [Result Start Pos TTI(%d) Offset(%d)]
Line 886: [G2L] CONVERTED TIME LTE START <SFN(%d) TTI(%d) Offset(%d)> DUR <TTI (%d) Offset(%d)> 
Line 891: [G2L] LTE_CELL_MEASURE EARFCN [%d] numOfCell (%d)
Line 927: GL1 => MMC :: HEDGE_MMC_LTE_CELL_MEASURE_REQ Sending Fail
Line 931: pal_MemFree failure
Line 943: pal_MemFree failure
Line 974: LMS: Earfcn(%d) is not found in DB so TimingLatch not build
Line 978: LMS: l1x_LmmBuildTimingLatchReq  TYPE (%d -<11:SRCH 12: MEAS>) LatchSim:%d
Line 991: [GL1 Error] No Memory Allocated
Line 1012: GL1 => MMC :: HEDGE_MMC_LTE_TIMING_LATCH_REQ (CUR_FN %d)
Line 1020: GL1 => MMC :: HEDGE_MMC_LTE_TIMING_LATCH_REQ Sending Fail
Line 1024: pal_MemFree failure
Line 1054: LMS: l1x_LmmCellSrchMeas_Adapter for Earfcn[%d] simno:%d
Line 1064: LMS: LTE_CELL_SEARCH_MEASURE canceled as No EARFCN or LTE measurement disabled or L1C_WAIT l1x_toggle_pending %d
Line 1074: [GL1 Error] No Memory Allocated
Line 1090: GL1 => MMC :: HEDGE_MMC_LTE_TIMING_LATCH_REQ
Line 1098: GL1 => MMC :: HEDGE_MMC_LTE_TIMING_LATCH_REQ Sending Fail
Line 1102: pal_MemFree failure
Line 1119: LMS: [SIM1] last search&meas time is %d for EARFCN(%d)
Line 1127: LMS:[SIM2] last search&meas time is %d for EARFCN(%d)
Line 1150: [GL1 Error] No Memory Allocated
Line 1159: [G2L] TimingLatchCnf -  LMS_IDLE_INDEX => Cell Search Measure
Line 1190: GL1 => MMC :: HEDGE_MMC_LTE_SEARCHMEASURE_REQ
Line 1191: GL1 => MMC / G2L Measurement:: EARFCN (%d), MeasBandwidth (%d)
Line 1201:  ******* Antenna Switching is Enabled from GSM to LTE *******
Line 1206: GL1 => MMC :: HEDGE_MMC_LTE_TIMING_LATCH_REQ Sending Fail
Line 1210: pal_MemFree failure
Line 1216: LMS: last search&meas time is %d for EARFCN(%d)
Line 1220: LMS: EARFCN (%d) Not in Lmm DB
Line 1232: [G2L] Need to check SEARCHMEASURE scheduling
Line 1238: pal_MemFree failure
