Line 114: 3G3G: CommonSleepControllerRequestSleep: Invalid ClientID = %d
Line 118: 3G3G: CommonSleepControllerRequestSleep: Raw Wakeup = %d, clientId = %d
Line 133: 3G3G: CommonSleepControllerRequestSleep: SW Sleep Requested By ClientID = %d, HWStatus = 0x%x, CurrentRSN=%d, WakeupRSN=%d
Line 141: 3G3G: CommonSleepControllerRequestSleep: HW Sleep Requested By ClientID = %d, HWStatus = 0x%x, CurrentRSN=%d, WakeupRSN=%d
Line 184: 3G3G: CommonSleepControllerRequestSleep: WARNING!Wrong HW Status 
Line 216: 3G3G: CommonSleepControllerRequestWakeup: ClientID = %d, HWStatus = 0x%x, isSw=%d isEarly = %d isForced = %d
Line 276: 3G3G: FEE start: iteration=%d. FEE running at rsn=%d
Line 287: 3G3G: FEE start: igoreFeeDrag =%d, clientID=%d
Line 294: 3G3G: EHalSleepFeeEnableCmd exec failure
Line 316: 3G3G: CommonSleepControllerStopFee Client ID= %d
Line 320: 3G3G: EHalSleepFeeDisableCmd exec failure
Line 338: 3G3G: setHWusage Client ID= %d
Line 349: 3G3G: clearHWusage Client ID= %d
Line 359: 3G3G: RegisterClient Client ID= %d
Line 365: 3G3G: DeregisterClient Client ID= %d
Line 387: 3G3G:  Client ID= %d isClientRegistered = %d
Line 404: 3G3G: IsGreaterRsn Rsn1 %d Rsn2 %d returnval %d diff %d
Line 410: 3G3G:isModemSleeping= %d
Line 416: 3G3G:CommonSleepControllerGetWakeupRSN= %d
Line 422: 3G3G:CommonSleepControllerGetHWUsageStatus= %d
Line 433: 3G3G:CommonSleepControllerIsSleepIssued issueSleepToken = %d result = %d
Line 439: 3G3G:CommonSleepControllerGetRegisteredClientStatus= %d
Line 445: 3G3G:CommonSleepControllerSetRescheduleStatus status= %d pichRSN = %d, clientId = %d
Line 455: 3G3G:CommonSleepControllerGetRescheduleStatus status= %d clientId = %d
Line 461: 3G3G:CommonSleepControllerSetPICHSkipStatus status= %d  clientId = %d
Line 467: 3G3G:CommonSleepControllerGetPICHSkipStatus status= %d clientId = %d
Line 473: 3G3G:CommonSleepControllerSetEarlyWakeupTimeInSlots slots= %d  clientId = %d
Line 479: 3G3G:CommonSleepControllerGetEarlyWakeupTimeInSlots slots= %d clientId = %d
Line 485: 3G3G:CommonSleepControllerGetPichRSN status= %d clientId = %d
Line 492: 3G3G:CommonSleepControllerSetPichRSN pichRSN= %d clientId = %d
Line 497: 3G3G:CommonSleepControllerGetCollisionStatus isCollisionStatus %d
Line 542: 3G3G: CommonSleepControllerRequestSleep: Shifting WakeupRSn of other client by -PREPOND_WAKEUP_IN_SLOTS slots wakeupRSN %d
Line 561: 3G3G: CommonSleepControllerRequestSleep: Shifting WakeupRSn by %d slots pichRSN %d wakeupRSN %d
Line 568: 3G3G: CommonSleepControllerRequestSleep: Shifting WakeupRSn of other client by +PREPOND_WAKEUP_IN_SLOTS slots wakeupRSN %d
Line 579: 3G3G: CommonSleepControllerRequestSleep: Shifting WakeupRSn of other client by -PREPOND_WAKEUP_IN_SLOTS slots wakeupRSN %d
Line 594: 3G3G: CommonSleepControllerHWAdjustSleepSlotCorrection: I/P  RSN %d
Line 619: 3G3G: CommonSleepControllerHWAdjustSleepSlotCorrection: O/P  RSN %d
Line 647: 3G3G: CommonSleepControllerRequestSleep: Conflict identified reset optimization %d
Line 676: 3G3G: CommonSleepControllerRequestSleep: Conflict identified reset optimization %d
Line 738: 3G3G: scheduleSwWakeup: ClientID = %d, wakeupRSN = %d, currentRSN = %d
Line 823: 3G3G: checkNearestWakeup Collision Detected and WakeupTiming Adjusted: targetRSN = %d, targetClient = %d
Line 835: 3G3G: checkNearestWakeup Collision Detected and WakeupTiming Adjusted: targetRSN = %d, targetClient = %d
Line 845: 3G3G: checkNearestWakeup: targetRSN = %d, targetClient = %d
Line 860: 3G3G: IssueSleepCmd Client ID= %d, WakeUpRSN = %d
Line 877: sleepStart - uhal_Cmd_exec
Line 890: 3G3G: CancelAllSwWakeupTokens Client ID= %d
Line 907: 3G3G: WakeUpCallBack: isPCHConfiguredForWakeupClient= %d
Line 930: SMC Correction for client = %d,HwSfn = %d SwSfn = %d
Line 931: SMC Correction for client = %d,HwSlot = %d PreviousSwSlot = %d
Line 938: SMC Correction for client = %d,NewSwSlot = %d
Line 965: 3G3G: SleepStartCallBack: isPCHConfiguredForWakeupClient= %d
Line 998: 3G3G: EHalSleepStartCmd exec failed: errCode=%d addErrCode=%d
Line 1007: 3G3G: CFEE_EnableCallBack
Line 1021: 3G3G: CommonSleepController_CPchAndDrxResourcesController_InitDone
Line 1038: 3G3G: CommonSleepControllerProcessUrrcQueue
Line 1058: 3G3G:CommonSleepControllerSetIsDRImpossible isDRImpossible= %d clientId = %d bitMask %d
Line 1073: 3G3G:CommonSleepControllerSetRescheduleStatusforDR status= %d  clientId = %d
Line 1079: 3G3G:CommonSleepControllerGetRescheduleStatusforDR status= %d clientId = %d
Line 1095: 3G3G:CommonSleepControllerCheckOverlappedWakingDuration: Other Client not Registered
Line 1103: 3G3G:CommonSleepControllerCheckOverlappedWakingDuration: Other Client Not Updated Yet
Line 1131: firstClient %d firstWakeRsn %d secondClient %d secondWakeRsn %d
Line 1141: CommonSleepControllerCheckOverlappedWakingDuration: Insufficient Margin to prepond, Setting isDrImpossible
Line 1179: 3G3G:CommonSleepControllerSetDrNotAvailableDuringScheduling isDRImpossible= %d clientId = %d
Line 1184: 3G3G:CommonSleepControllerGetDrNotAvailableDuringScheduling isDRImpossible= %d clientId = %d
Line 1197: 3G3G:CommonSleepControllerCheckandReturnPichRsnDifference: Client not Registered
Line 1205: 3G3G:CommonSleepControllerCheckandReturnPichRsnDifference: Other Client PICH Rsn Not Updated Yet
Line 1211: 3G3G:CommonSleepControllerCheckandReturnPichRsnDifference: PichRsn other client is second
Line 1216: 3G3G:CommonSleepControllerCheckandReturnPichRsnDifference: ClientId %d WakeRsn is first although PICH Rsn is second, retval = %d
Line 1225: 3G3G:CommonSleepControllerSetDrPichRsn: ClientId %d PichRsn %d
Line 1241: 3G3G:CommonSleepControllerCheckandClearRescheduleStatusforDR: Postpone other client (%d) wakeup, OtherClientWakeupRSN %d
