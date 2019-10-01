Line 126: uphySleepWaitingTimer Created!
Line 126: uphySleepWaitingTimer Created!
Line 130: uphySleepWaitingTimer Timing set OK!
Line 130: uphySleepWaitingTimer Timing set OK!
Line 134: uphySleepWaitingTimer Timing set Failed!
Line 134: uphySleepWaitingTimer Timing set Failed!
Line 139: uphySleepWaitingTimer Creation Failed!
Line 139: uphySleepWaitingTimer Creation Failed!
Line 164: Get_Emodem_Irat_Activity: emodeStatusForIrat : %d
Line 202: Instance created for stackId %d
Line 202: Instance created for stackId %d
Line 244: SleepManager IsBchActive: BCH[%d] active, bchUsed %d
Line 244: SleepManager IsBchActive: BCH[%d] active, bchUsed %d
Line 280: SleepManager uphySleepStartCallBack run at rsn=%d sfn=%d reason=%d
Line 280: SleepManager uphySleepStartCallBack run at rsn=%d sfn=%d reason=%d
Line 332: Not enough time for sleep: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 332: Not enough time for sleep: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 338: Cancel Sleeping: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 338: Cancel Sleeping: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 348: uphySleepStartCallBack:Clean for Measurement
Line 348: uphySleepStartCallBack:Clean for Measurement
Line 388: Relasing PCH so cancel Umts Power off
Line 388: Relasing PCH so cancel Umts Power off
Line 400: uphy_CSleepManager_IssueSleepCmd:Clean for Measurement
Line 400: uphy_CSleepManager_IssueSleepCmd:Clean for Measurement
Line 470: S0  %s: wasHwSleep is TRUE
Line 470: S0  %s: wasHwSleep is TRUE
Line 476: uphy_CSleepManager_startSleepSTF:uphy_CSleepManager_startSleep sleepStopSignalValue=%d
Line 476: uphy_CSleepManager_startSleepSTF:uphy_CSleepManager_startSleep sleepStopSignalValue=%d
Line 482: S0  Sleep NOT allowed -pchReleaseFlag %d
Line 482: S0  Sleep NOT allowed -pchReleaseFlag %d
Line 493: Cancel startSleep timer
Line 493: Cancel startSleep timer
Line 531: uphySleepWaitingTimer_TimerCallback
Line 531: uphySleepWaitingTimer_TimerCallback
Line 535: Relasing PCH and cancel Umts Power off
Line 535: Relasing PCH and cancel Umts Power off
Line 547: CellReselection wake up: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 547: CellReselection wake up: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 564: S0  Sleep NOT allowed -pchReleaseFlag %d
Line 564: S0  Sleep NOT allowed -pchReleaseFlag %d
Line 570: S0  Wrong timer handle expire
Line 570: S0  Wrong timer handle expire
Line 735: Cant issue the SleepStart Command to UHAL
Line 735: Cant issue the SleepStart Command to UHAL
Line 745: Cancel sleeping: pchReleaseFlag %d bchUsed %d, cancelSleeping %d, isCBS %d
Line 745: Cancel sleeping: pchReleaseFlag %d bchUsed %d, cancelSleeping %d, isCBS %d
Line 780: Forcing adjustedWakeUpAfter to a frame to avoid DRX overlap
Line 780: Forcing adjustedWakeUpAfter to a frame to avoid DRX overlap
Line 785: Schedule wake up: bchUsed %d, cancelSleeping %d, isCbs %d 
Line 785: Schedule wake up: bchUsed %d, cancelSleeping %d, isCbs %d 
Line 797: uphy_CSleepManager_startSleep(%d) run at rsn = %d sfn = %d slot = %d no gapEnd
Line 797: uphy_CSleepManager_startSleep(%d) run at rsn = %d sfn = %d slot = %d no gapEnd
Line 833: S0  StartStopDecodingController handleWaking: SleepingController is not turned ON
Line 833: S0  StartStopDecodingController handleWaking: SleepingController is not turned ON
Line 840: S0  StartStopDecodingController handleWaking: Waking without Power On
Line 840: S0  StartStopDecodingController handleWaking: Waking without Power On
Line 865: StartStopDecodingController handleWaking: target StartStopDecodingFsmEventId=%d(WakeUpReq) run at rsn=%d sfn=%d,deadline=%d
Line 865: StartStopDecodingController handleWaking: target StartStopDecodingFsmEventId=%d(WakeUpReq) run at rsn=%d sfn=%d,deadline=%d
Line 877: S0  StartStopDecodingController handleWaking: Unexpected transceiverId=%d
Line 877: S0  StartStopDecodingController handleWaking: Unexpected transceiverId=%d
Line 884: DSDS: autopause handler expiry with out start or after stop
Line 884: DSDS: autopause handler expiry with out start or after stop
Line 899: Stack Suspended, Return
Line 899: Stack Suspended, Return
Line 909: During reselection: cellReselection = %d
Line 909: During reselection: cellReselection = %d
Line 939: S0  uphy_CSleepManager_getListenRSN, this_Sfn=%d, this_slot = %d, diffSfn=%d, diffRsn=%d  PICH SFN = %d
Line 939: S0  uphy_CSleepManager_getListenRSN, this_Sfn=%d, this_slot = %d, diffSfn=%d, diffRsn=%d  PICH SFN = %d
Line 972: S0  uphy_CSleepManager_GsmPowerOffInd: gsmPowerOffWaitCnt %d
Line 972: S0  uphy_CSleepManager_GsmPowerOffInd: gsmPowerOffWaitCnt %d
Line 1019: Introduction of registry to enable/disable Sleep from UL. SleepENABLE status - %d
Line 1019: Introduction of registry to enable/disable Sleep from UL. SleepENABLE status - %d
Line 1030: DSDS_CBS uphy_CSleepManager_tryToSleep: Don't allow sleep till FACH for CTCH configuration completes 
Line 1030: DSDS_CBS uphy_CSleepManager_tryToSleep: Don't allow sleep till FACH for CTCH configuration completes 
Line 1066: S0  cancel sleep due to not enough time for sleep (current SFN : %d, wakesfn : %d)
Line 1066: S0  cancel sleep due to not enough time for sleep (current SFN : %d, wakesfn : %d)
Line 1092: SleepManager tryToSleep[1]: Can StartSleep, SleepInProgress=%d(0), measurementPending=%d(0), vgmBusy=%d(0), fingersPending=%d(0), startStopAsleep=%d(1) isGsmOn=%d(0), isBPLMN=%d(0)
Line 1092: SleepManager tryToSleep[1]: Can StartSleep, SleepInProgress=%d(0), measurementPending=%d(0), vgmBusy=%d(0), fingersPending=%d(0), startStopAsleep=%d(1) isGsmOn=%d(0), isBPLMN=%d(0)
Line 1096: SleepManager tryToSleep[2]: Can StartSleep, startStopAsleep=%d(1) bchUsed=%d(0), feeRunning =%d(0), cellReselFlag =%d(0), isBchAcitve =%d(0),cancelSleeping = %d(0)
Line 1096: SleepManager tryToSleep[2]: Can StartSleep, startStopAsleep=%d(1) bchUsed=%d(0), feeRunning =%d(0), cellReselFlag =%d(0), isBchAcitve =%d(0),cancelSleeping = %d(0)
Line 1101: SleepManager tryToSleep[3]: Can StartSleep, cbsReleaseFlag = %d(0),sleepNotAllowed=%d, rfRelByDsL1Rc = %d(0), prevBPLMNStatus=%d(0)
Line 1101: SleepManager tryToSleep[3]: Can StartSleep, cbsReleaseFlag = %d(0),sleepNotAllowed=%d, rfRelByDsL1Rc = %d(0), prevBPLMNStatus=%d(0)
Line 1134: S0  !!!!!!!!!!!!!!!!!!Measurement Pending in sleep state!!!
Line 1134: S0  !!!!!!!!!!!!!!!!!!Measurement Pending in sleep state!!!
Line 1175: Can't StartSleep, SleepInProgress=%d(0), measurementPending=%d(0), vgmBusy=%d(0), fingersPending=%d(0), startStopAsleep=%d(1) isGsmOn=%d(0), isBPLMN=%d(0)
Line 1175: Can't StartSleep, SleepInProgress=%d(0), measurementPending=%d(0), vgmBusy=%d(0), fingersPending=%d(0), startStopAsleep=%d(1) isGsmOn=%d(0), isBPLMN=%d(0)
Line 1178: Can't StartSleep, startStopAsleep=%d(1) isGsmOn=%d(0), feeRunning =%d(0), cellReselFlag =%d(0), isBchAcitve =%d(0)
Line 1178: Can't StartSleep, startStopAsleep=%d(1) isGsmOn=%d(0), feeRunning =%d(0), cellReselFlag =%d(0), isBchAcitve =%d(0)
Line 1181: Can't StartSleep, cancelSleeping = %d(0), sleepNotAllowed=%d,cbsReleaseFlag = %d(0), prevBPLMNStatus=%d(0)
Line 1181: Can't StartSleep, cancelSleeping = %d(0), sleepNotAllowed=%d,cbsReleaseFlag = %d(0), prevBPLMNStatus=%d(0)
Line 1232: Reschedule wake up: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d,isBPLMN =%d ,wakeUpTimer 0x%x wakeUpAfter %d,
Line 1232: Reschedule wake up: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d,isBPLMN =%d ,wakeUpTimer 0x%x wakeUpAfter %d,
Line 1235: Reschedule wake up: prevBPLMNStatus %d isCBS %d, isWakingForCtchDecoding %d shortCtchPeriod %d
Line 1235: Reschedule wake up: prevBPLMNStatus %d isCBS %d, isWakingForCtchDecoding %d shortCtchPeriod %d
Line 1256: uphy_CSleepManager_wakeup run at rsn = %d sfn = %d
Line 1256: uphy_CSleepManager_wakeup run at rsn = %d sfn = %d
Line 1286: S0  3G3G: uphy_IssueSleep: gapendSFN=%d
Line 1286: S0  3G3G: uphy_IssueSleep: gapendSFN=%d
Line 1354: S0  3G3G: uphy_ScheduleWakeupToken wakeUpAfter %d current time  %d WakeReqPalTime %d
Line 1354: S0  3G3G: uphy_ScheduleWakeupToken wakeUpAfter %d current time  %d WakeReqPalTime %d
Line 1373: wakeUpTimer set Failed!
Line 1373: wakeUpTimer set Failed!
Line 1391: S0  DSDS:uphy_CSleepManager_tryToSleep: wakeup indicated to dslrc=%u microseconds
Line 1391: S0  DSDS:uphy_CSleepManager_tryToSleep: wakeup indicated to dslrc=%u microseconds
Line 1434: S0  uphy_CSleepManager_getCTCHRSN, this_Sfn=%d, this_slot = %d, diffSfn=%d, diffRsn=%d  sfnToDecodeFachForCtch = %d
Line 1434: S0  uphy_CSleepManager_getCTCHRSN, this_Sfn=%d, this_slot = %d, diffSfn=%d, diffRsn=%d  sfnToDecodeFachForCtch = %d
Line 1467: adjustWakeupRSN for CTCH : wakeUpSfn %d, currentRSN %d, DecodeFachForCtchRsn %d, wakeUpAfter %d
Line 1467: adjustWakeupRSN for CTCH : wakeUpSfn %d, currentRSN %d, DecodeFachForCtchRsn %d, wakeUpAfter %d
Line 1481: adjustWakeupRSN for PICH : wakeUpSfn %d, currentRSN %d, pichFrameBoundaryRsn %d, wakeUpAfter %d
Line 1481: adjustWakeupRSN for PICH : wakeUpSfn %d, currentRSN %d, pichFrameBoundaryRsn %d, wakeUpAfter %d
Line 1489: S0  adjustWakeupRSN: adjustWakeupRSN %d after adjustment
Line 1489: S0  adjustWakeupRSN: adjustWakeupRSN %d after adjustment
