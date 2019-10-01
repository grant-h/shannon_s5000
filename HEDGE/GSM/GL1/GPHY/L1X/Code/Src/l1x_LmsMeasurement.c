Line 120: LMS: l1x_LmsPtm() !!
Line 127: LMS: lte_meas_in_ptm flag is disabled!! G2L in PTM will not run
Line 139: LMS: measIndex (%d) LteMeasState (%d) MeasFlag (%d)
Line 140: LMS: measIndex (%d) LteMeasState (%d) MeasFlag (%d)
Line 144: LMS: LTE measurement generation - DENIED(busy for:%d, enabled:%d)
Line 145: LMS: LTE measurement generation - DENIED(busy for:%d, enabled:%d)
Line 152: LMS: PTM mode measurement manager called occassion length(%d)
Line 179: l1x_LmsFillCommon()
Line 224: DUR (%d %d) START (%d %d)
Line 248: l1x_LmsBuildSrchMeasReq()
Line 256: LMS: srch&meas request made on EARFCN(%d), priority(%d)
Line 275: LMS: no available resource for priority object
Line 300: LMS: l1x_LmsBuildSrchReq()
Line 315: LMS: LMS: START(F %d, QB %d) DUR (F %d, QB %d)
Line 317: LMS: Cell Search request made on EARFCN(%d), priority(%d), Type (%d)
Line 324: LMS: no available resource for priority object
Line 350: l1x_LmsBuildMeasReq()
Line 366: ERROR!!! OUT OF BOUND in CELL MEAS CNT. Need to check the Functino Again!
Line 387: ### [%d] LTE CELL (%d) FrPos (%d) is copied for CELL_MEAS
Line 392: LMS: Meas request made on EARFCN(%d), priority(%d), numOfCells(%d), Type(%d)
Line 399: LMS: no available resource for priority object
Line 432: LMS: L1X_BuildMeasurements - %d (0:Idle, 1: PTM, 2: TCH, 3:SDCCH)
Line 436: LMS:Avoid IRAT during BG pwr Scan
Line 443: Skip Ums Measurement build-PCH/BCH in PTM ongoing
Line 449: LMS: IRAT Meas Disabled
Line 461: LMS: IRAT Reselection triggered avoid Meas
Line 469: Skip Lms Measurement build-DSL1RC Pause nearby
Line 488: LMS: found ARFCN
Line 491:  +++ 1) LMS: EARFCN (%d) deltaTime = %d
Line 518: LMS: LTE Search and Measure Svc is generated
Line 524: LMS: Warning - measNeeded is FALSE!!
Line 529: [GL1 Error] EARFCN object is not found in l1x_LmmGetEarfcnInfo
Line 546: LMS: Skip the measurement generation due to delay from TBF timer !!
Line 564:  ++ 1-1) LMS_PTM_SRCH: deltaTime (%d) lastSrch(%d) EARFCN(%d)
Line 568: [GL1 Error] wrong state index for building measurement
Line 591:  ++ 1-2) LMS_PTM_SRCH:  Giving Boost Priority (%d)
Line 596: ++ 1-2) LMS_PTM_SRCH: delta is not enough to target time!!
Line 602: ++ 1-3) LMS_PTM_SRCH: LTE Search Svc is generated
Line 620:  ++ 2-1) LMS_PTM_MEAS: deltaTime (%d) lastMeas(%d) Cell[%d, %d] / totalCell (%d)
Line 624: [GL1 Error] Cell is not found
Line 637:  ++ 2-2) LMS_PTM_MEAS: targetTime(%d) priority(%d)
Line 642: ++ 2-2) LMS_PTM_MEAS: delta is not enough to target time!!
Line 652: ++ 2-3) LMS_PTM_MEAS: LTE Measure Svc is Stored (%d)
Line 657: ++ 2-4) LMS_PTM_MEAS: LTE Measure Svc is Generated for 4 Cells
Line 660: ++ 2-4) LMS_PTM_MEAS: MeasReq[%d] - %d
Line 671: ++ 2-5) LMS_PTM_MEAS: LTE Measure Svc is Generated for %d Cells 
Line 674: ++ 2-4) LMS_PTM_MEAS: MeasReq[%d] - %d
Line 681: ++ 2-0) LMS_PTM_MEAS: Do Nothin => NumOfCell is (%d) in EARFCN (%d) ptmSrchDone(%d)
Line 697: LMS: wrong state index for building measurement !!
Line 725: LMS: l1x_LmsIdle() !!
Line 735: LMS: LTE measurement generation - DENIED(busy for:%d, enabled:%d)
Line 736: LMS: LTE measurement generation - DENIED(busy for:%d, enabled:%d)
Line 741: LMS: idle mode measurement manager called occassion length(%d)
Line 769: LMS: l1x_LmmMeasPending() !!
Line 783: LMS: found ARFCN on simno:%d
Line 788:  +++ 1) LMS: EARFCN (%d) deltaTime = %d
Line 804: [GL1 Error] EARFCN object is not found in l1x_LmmGetEarfcnInfo
Line 829: LMS: l1x_LmmMeasurementReport() !!
Line 882: ==========> Read Timing Latch Register <==========
Line 883: GsmLatchTime - gFrameCount=%d, gQbit=%d 
