Line 162: activeStackId %d HW destination control(Wake-up). BASE_ADDR 0x%x, END_ADDR 0x%x
Line 187: uhal_CHmcpSleepStart_HWConfigAfterSWWakeup : HW destination control(Wake-up). BASE_ADDR 0x%x, END_ADDR 0x%x
Line 233: activeStackId %d [Sleep Wake]Modem Initialize...
Line 265: [Sleep]%s , cancelSleepingVal : %d 
Line 287: activeStackId %d Uhal sleep exit: sfn %d slot %d chip %d time by uhal_CHmcpRlInfo_FastSfnSlotChip_RefRl
Line 300: [Sleep]%s
Line 307: Before:sleeping: intr = 0x%x,slp_cnt = 0x%x, cur_slp_time = 0x%x, status = 0x%x
Line 314: Before:sleeping: intr = 0x%x,slp_cnt = 0x%x, cur_slp_time = 0x%x, status = 0x%x
Line 321: Before:sleeping: intr = 0x%x,slp_cnt = 0x%x, cur_slp_time = 0x%x, status = 0x%x
Line 333: cur_slp_time %d
Line 355: cur_slp_time %d
Line 357: real_cur_slp_time %d, REQ_ABORT %d
Line 372: After:sleeping: intr = 0x%x,slp_cnt = 0x%x, cur_slp_time = 0x%x, status = 0x%x
Line 379: After:sleeping: intr = 0x%x,slp_cnt = 0x%x, cur_slp_time = 0x%x, status = 0x%x
Line 386: After:sleeping: intr = 0x%x,slp_cnt = 0x%x, cur_slp_time = 0x%x, status = 0x%x
Line 415: activeStackId %d [Sleep]%s
Line 459: currentRefCounterSlot=%d, currentRefCounterChip =%d, temSfn %d, newSlot %d, currentSlot %d, currentChipInSlot %d, deltaCellkTm %d
Line 470: [Sleep]%s
Line 505: [Sleep]%s, MifFreq(%d) CpuFreq(%d) slp_cnt(%d),reqd_sleep_time(%d) Diff(%d)
Line 516: AP is not turn on.
Line 522: Wrong WakeUp Int
Line 531: WakeUp_HISR execution failure
Line 539: [Sleep]%s
Line 544: uhal_CHmcpSleepStart_SysValidLisr
Line 554: SysValid_HISR execution failure
Line 614: activeStackId %d [Sleep]%s, relativeTimeStamp %d
Line 670: activeStackId %d HW destination control(Wake-up). BASE_ADDR 0x%x, END_ADDR 0x%x
Line 714: activeStackId %d [Sleep]%s
Line 747: activeStackId %d [Sleep Wake]initChipx8CounterTotal: %d 
Line 748: activeStackId %d [Sleep Wake]xferChipx8CounterTotal: %d 
Line 766: activeStackId %d [Sleep Wake]timeDriectTimeComp: with drift %d 
Line 785: [Sleep Wake] refcnt_frame_sleep %d, refcnt_slot_sleep %d, refcnt_chip_sleep %d, refcnt_chipx8_sleep %d refCnt_beforesleep %d, frameRake %d
Line 787: [Sleep Wake] New Time compensation
Line 855: [Sleep Wake]After Waking => CellKCnt:cellk_tm_delta_frame %d, cellk_tm_delta_slot %d, cellk_tm_delta_chip %d, cellk_tm_delta_chipx8 %d 
Line 863: [Sleep Wake]After Waking => txTmCnt:tx_tm_delta_frame %d, tx_tm_delta_slot %d, tx_tm_delta_chip %d, tx_tm_delta_chipx8 %d
Line 899: [Sleep Wake]RSN adjustment : boundaryRSN: %d currentRSN= %d currentSlot =%d,newCurrentSlot =%d , framesElapsed= %d
Line 934: activeStackId %d txTmFrameCnt = %d, txTmChipCnt = %d, txTmChipX8Cnt = %d
Line 945: activeStackId %d [Sleep Wake]sleepClockCounterDuringSleep: %d 
Line 946: activeStackId %d [Sleep Wake]elapsedChipx8TimeInSleepWithoutActualSleeping: %d 
Line 947: activeStackId %d [Sleep Wake]beforeslot: %u
Line 948: activeStackId %d [Sleep Wake]beforechip: %u
Line 949: activeStackId %d [Sleep Wake]chipx8ClocksOverSleep: %u
Line 950: activeStackId %d [Sleep Wake]elapsedChipx8TimeToComputeSfn: %u
Line 951: activeStackId %d [Sleep Wake]elapsedFrames: %d 
Line 952: activeStackId %d [Sleep Wake]chipx8ClocksOverSleepRelative	 : %d 
Line 953: activeStackId %d [Sleep Wake]swSFN	 : %d  ElapsedSlots: %d  ElapsedChips : %d 
Line 954: activeStackId %d [Sleep Wake]slotRake	 : %d  chipRake: %d  chipx8Rake : %d 
Line 967: activeStackId %d Do 3G RF initialization
Line 981: activeStackId %d Reset wakeAfterSleep in sys valid hisr
Line 991: activeStackId %d [Sleep Wake]Modem Initialize...
Line 1013: activeStackId %d [Sleep Wake]Early wakeup SwSFN : %d , WakeUpTime : %d
Line 1020: activeStackId %d Rf Init not needed during wakeup %d:%d
Line 1027: activeStackId %d [Sleep Wake]normal wakeup SwSFN : %d , WakeUpTime : %d
Line 1212: activeStackId %d [Sleep]%s
Line 1259: [Sleep Req]TimingSynced = TRUE	- estFrame: %d, estSlot %d, estChips %d
Line 1279: activeStackId %d [Sleep Req]No cell in sleeping :RerRl = %d
Line 1294: activeStackId %d [Sleep Req]Uhal return: Invaild state: StartStopState %d 
Line 1309: [Sleep Req]Uhal return: Cancel sleeping: bchUsed %d,  cancelSleeping %d, isCbs %d
Line 1329: activeStackId %d [Sleep Req]Uhal sleep: too long (%d - %d = %d)
Line 1336: activeStackId %d [Sleep Req]adjust (%d - %d = %d)
Line 1360: [Sleep Req]uhal_CHmcpSleepStart using SlotWakeUpEn=%d, SlotsBeforePQ=%d, CPUSleepOverheadChips=%d, CpuModemSleepDiffUsec=%d 
Line 1396: [Sleep Req] currentAdjustSleepSlot(%d) updatedAdjustSleepSlot(%d) isUtranCommercialPlmnId(%d) isFngEcIo(%d) numLockedFingersIIR(%d) rssiBeforeSleep(%d) rssiThreshold(%d)
Line 1417: [Sleep Req]Befor sleep: WakeAndPqSlotDiff = %d,adjustSleepSlot= %d, FingAllocationSlot= %d, isMpInfoExisted  %d
Line 1483: [Sleep Req]Before sleep:  adjustSleepSlot= %d weakSignal = %d
Line 1515: [Sleep Req]Before sleep: adjustSleepSlot %d minResUseTimeAdjust %d
Line 1525: [Sleep Req] SleepDuration = %d
Line 1544: [Sleep Req]uhal_CHmcpSleepStart_request (%d - %d = %d),swSlot %d, hwSlot %d, pichSfn %d 
Line 1547: [Sleep Req]Befor sleep: lastAfcPdm= %d
Line 1605: [Sleep Req]TimingSynced = TRUE	- estFrame: %d, estSlot %d, estChips %d
Line 1637: [Sleep Req] interrupt destroy skipped due to Reject on HW wakeup/ongoing IRAT on other stack
Line 1641: [Sleep Req]Uhal sleep Started normally: start SFN %d wakeup SFN %d sleepDuration %d(sfn) %d(slot) requestedSleepClockLength %d , Mifsettime %d, WAKING_MARGIN %d 
Line 1648: [Sleep Req]beforesfn = %d, beforeslot= %d, beforechip= %d smc_TimeCurrentSFNactiveStackId %d rfReconfigDoneAfterWakeup %d UMTS_IRAT_ONGOING_DS %d
Line 1662: activeStackId %d [Sleep Req]uhal_CHmcpSleepStart_request: Cancel WakeUptimer 0x%x
Line 1674: activeStackId %d [Sleep Req]Uhal sleep: not enough reacqire time : beforesfn = %d, wakeupSfn = %d
Line 1769: [Sleep Req]uhal_CHmcpSleepStart_CalcWakeAndPqSlotDiff:  piSymbolLength=%d, piSymbolOffsetToPich=%d, PqSlot=%d,pichSlotOffsetToCpich=%d, WakeAndPqSlotDiff %d, newPqSlot %d
Line 1933: [Sleep]%s PowerOn %d
Line 1964: [SleepDbg]RefCnt:refFrameCnt %d, refSlotCnt %d, refChipCnt %d, refChipX8Cnt %d , TIME_REF_CNT %d
Line 1973: [SleepDbg]CellKCnt:CellKFrameCnt %d, CellKSlotCnt %d, CellKChipCnt %d, CellKChipX8Cnt %d, CELLk_RTG_TIME %d
Line 1982: [SleepDbg]TxTmCnt:txTmFrameCnt %d, txTmChipCnt %d, txTmChipX8Cnt %d, TX_TM_CPI_TIMER_R %d
Line 2016: [SleepDbg]PAL Time - palTimeAfterWakeUP %d, palTimeBeforeSleep %d, palTimeDiff %d (us)
Line 2017: [SleepDbg]PAL Time - estPalFrameCnt %d, estPalSlotCnt %d, estPalChipCnt %d
Line 2018: [SleepDbg]PrevRef Time - PrevRefFrameCnt %d, PrevRefSlotCnt %d, PrevRefChipCnt %d
Line 2019: [SleepDbg]Compare Refcnt and Pal - TotalHWChips %d, TotalPFChips %d, Diff(Ref-Pal) %d
Line 2034: [SleepDbg]WakeUp time - CellkSfn %d, Cellkslot %d, Cellkchip %d, Cellkchipx8 %d
Line 2035: [SleepDbg]WakeUp time - CellkTmTotalchips %d, CurrentToWakeUpdiff %d, WakeUpPal %d
Line 2040: [SleepDbg]Warning Diff chips(Ref-Pal) %d
Line 2055: [SleepDbg]Expected WakeUp Time - SFN %d, SLOT %d
Line 2063: [SleepDbg]Ref_cnt - refcnt_frame_sleep %d, refcnt_slot_sleep %d, refcnt_chip_sleep %d, refcnt_chipx8_sleep %d
Line 2078: [Sleep]%s
Line 2115: Store:Finger 0: RefFngPosValid(%d) RefFngSlot %d, RefFngChipx2 %d RefFngPosToStore %d RefFngPosition: %d 
Line 2238: DeltaCellPlus %d, DeltaCellMinus %d, RefFngPosition %d, CellkTmPosition %d 
Line 2256: RefCnt:refFrameCnt %d, refSlotCnt %d, refChipCnt %d, refChipX8Cnt %d 
Line 2264: CellKCnt:CellKFrameCnt %d, CellKSlotCnt %d, CellKChipCnt %d, CellKChipX8Cnt %d 
Line 2272: TxTmCnt:txTmFrameCnt %d, txTmChipCnt %d, txTmChipX8Cnt %d
Line 2279: Delta: DELTA_CELLk_TM %d, DELTA_TX_TM %d DELTA_TX_CELL_TM %d
Line 2318: uhal_CHmcpSleepStart using warmup_time=%d, clocks=%d, min_catnap_length=%d
Line 2335: Remaining cur_slp_time = %d, %d(us)
