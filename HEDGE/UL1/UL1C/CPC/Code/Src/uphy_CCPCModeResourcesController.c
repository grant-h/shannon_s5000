Line 132: Instance created for stackId %d
Line 132: Instance created for stackId %d
Line 238: [CPC] Config received: SMC CFN=%d, isActivationTime=%d, activationTime=%d
Line 238: [CPC] Config received: SMC CFN=%d, isActivationTime=%d, activationTime=%d
Line 245: S0 [CPC] Release received: CFN=%d
Line 245: S0 [CPC] Release received: CFN=%d
Line 260: S0 [CPC] Deactivate received: CFN=%d
Line 260: S0 [CPC] Deactivate received: CFN=%d
Line 277: S0 process - unknown msgId
Line 277: S0 process - unknown msgId
Line 304: S0 [CPC] activation time[CFN %d, RSN %d] current[CFN %d, RSN %d]
Line 304: S0 [CPC] activation time[CFN %d, RSN %d] current[CFN %d, RSN %d]
Line 360: S0 [CPC]Negative CNF for CPC config Req RSN seems stuck.
Line 360: S0 [CPC]Negative CNF for CPC config Req RSN seems stuck.
Line 368: S0 [CPC] activationTimeSTF: CFN=%d, Boundary RSN=%d, Current RSN=%d, UrrcState=%d, StfRsnDiff= %d, RsnProbCounter= %d, PrvStfRsn=%d
Line 368: S0 [CPC] activationTimeSTF: CFN=%d, Boundary RSN=%d, Current RSN=%d, UrrcState=%d, StfRsnDiff= %d, RsnProbCounter= %d, PrvStfRsn=%d
Line 439: S0 STF triggered after UL_ESTABLISHEMENT for CPC DTX configuration 
Line 439: S0 STF triggered after UL_ESTABLISHEMENT for CPC DTX configuration 
Line 446: S0 CPC Configured at H/W CFN=%d, S/W CFN=%d
Line 446: S0 CPC Configured at H/W CFN=%d, S/W CFN=%d
Line 465: S0 [CPC] Waiting for UL establishment DTXSync ActEnablingDelay = %d, ActualActivationCFN = %d, ueDtxCycle1_10ms = %d, ueDtxCycle2_10ms= %d, DtxStartSync = %d  
Line 465: S0 [CPC] Waiting for UL establishment DTXSync ActEnablingDelay = %d, ActualActivationCFN = %d, ueDtxCycle1_10ms = %d, ueDtxCycle2_10ms= %d, DtxStartSync = %d  
Line 491: S0 [CPC] Resubmitting activationTimeSTF: DchCellChanging=%d, HsDschCellChanging=%d, isUlEstablished=%d, H/W CFN=%d, S/W CFN=%d, AddDelayCounter=%d
Line 491: S0 [CPC] Resubmitting activationTimeSTF: DchCellChanging=%d, HsDschCellChanging=%d, isUlEstablished=%d, H/W CFN=%d, S/W CFN=%d, AddDelayCounter=%d
Line 509: S0  Negative CNF for CPC config Req as DCH/EDCH/HSDSCH config failed during HHO
Line 509: S0  Negative CNF for CPC config Req as DCH/EDCH/HSDSCH config failed during HHO
Line 542: S0 [CPC] Resubmitting activationTimeSTF: DchCellChanging=%d, HsDschCellChanging=%d, isUlEstablished=%d, H/W CFN=%d, S/W CFN=%d
Line 542: S0 [CPC] Resubmitting activationTimeSTF: DchCellChanging=%d, HsDschCellChanging=%d, isUlEstablished=%d, H/W CFN=%d, S/W CFN=%d
Line 565: S0 process - unknown msgId
Line 565: S0 process - unknown msgId
Line 572: S0 [CPC] Exiting the old STF STFNumber=%d LatestSTFNumber=%d
Line 572: S0 [CPC] Exiting the old STF STFNumber=%d LatestSTFNumber=%d
Line 587: S0 [CPC] uphy_CCPCModeResourcesController_TriggerWaitingConfig
Line 587: S0 [CPC] uphy_CCPCModeResourcesController_TriggerWaitingConfig
Line 612: S0 [CPC]Malfunction* uphy_CCPCModeResourcesController_TriggerWaitingConfig called when IsCpcConfigWaiting was false.
Line 612: S0 [CPC]Malfunction* uphy_CCPCModeResourcesController_TriggerWaitingConfig called when IsCpcConfigWaiting was false.
Line 630: S0 [CPC] WaitAfterUlEstablishedSTF: CFN=%d, RSN=%d 
Line 630: S0 [CPC] WaitAfterUlEstablishedSTF: CFN=%d, RSN=%d 
Line 676: S0 [CPC] uphy_CCPCModeResourcesController_CalcActualActivationCFN: CurrentCFN=%d, EnablingDelayStartCfn=%d CurrentAndActDiff=%d, ActEnablingDelay = %d, ActualActivationCfnDtxDrx = %d
Line 676: S0 [CPC] uphy_CCPCModeResourcesController_CalcActualActivationCFN: CurrentCFN=%d, EnablingDelayStartCfn=%d CurrentAndActDiff=%d, ActEnablingDelay = %d, ActualActivationCfnDtxDrx = %d
Line 688: S0 [CPC] CPCModeConfig: CFN=%d
Line 688: S0 [CPC] CPCModeConfig: CFN=%d
Line 696: S0 [CPC] CPC ILM mesasge cleared
Line 696: S0 [CPC] CPC ILM mesasge cleared
Line 709: S0  FATAL ERROR: DTX must be enabled in every CPC DTX/DRX CONFIG REQ
Line 709: S0  FATAL ERROR: DTX must be enabled in every CPC DTX/DRX CONFIG REQ
Line 723: S0  FATAL ERROR: Enable DTX before DRX
Line 723: S0  FATAL ERROR: Enable DTX before DRX
Line 740: S0 [CPC] CPC ILM mesasge cleared
Line 740: S0 [CPC] CPC ILM mesasge cleared
Line 754: S0 [CPC] CPCModeDeactivate: CFN=%d
Line 754: S0 [CPC] CPCModeDeactivate: CFN=%d
Line 775: S0 [CPC] CPCModeRelease: CFN=%d
Line 775: S0 [CPC] CPCModeRelease: CFN=%d
Line 802: S0 [CPC] sendConfirmationMsg: CFN=%d
Line 802: S0 [CPC] sendConfirmationMsg: CFN=%d
Line 828: S0 only Config,Release and Deactivate need confirm
Line 828: S0 only Config,Release and Deactivate need confirm
Line 833: S0 [CPC] sendConfirmationMsg-Failure[%d] 
Line 833: S0 [CPC] sendConfirmationMsg-Failure[%d] 
Line 839: S0 sendConfirmationMsg-Success[%d] 
Line 839: S0 sendConfirmationMsg-Success[%d] 
Line 846: S0 send
Line 846: S0 send
Line 852: S0 [CPC] CPC ILM mesasge cleared
Line 852: S0 [CPC] CPC ILM mesasge cleared
Line 872: S0 S0  ActualDtxMsg pointer is null
Line 872: S0 S0  ActualDtxMsg pointer is null
Line 876: S0 [CPC] CpcDtxAsnToAct: CFN=%d
Line 876: S0 [CPC] CpcDtxAsnToAct: CFN=%d
Line 923: S0 [CPC] processUeDtxInfo: CFN=%d, UrrcState=%d
Line 923: S0 [CPC] processUeDtxInfo: CFN=%d, UrrcState=%d
Line 939: S0  ActualDtxMsg pointer is null
Line 939: S0  ActualDtxMsg pointer is null
Line 1046: S0  EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1046: S0  EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1061: S0 [CPC] DTX MODEM configuration done: CFN:%d, Slot:%d -- ActualActivationCFN:%d, activationTime:%d, EnablingDelay:%d
Line 1061: S0 [CPC] DTX MODEM configuration done: CFN:%d, Slot:%d -- ActualActivationCFN:%d, activationTime:%d, EnablingDelay:%d
Line 1069: S0 [CPC] DTX MODEM configuration Parameters: ueDtxDrxOffset:%d edchTti:%d DtxCycle1:%d DtxCycle2:%d Start1:%d Start2:%d ueDtxCycle2InactivityThreshold:%d
Line 1069: S0 [CPC] DTX MODEM configuration Parameters: ueDtxDrxOffset:%d edchTti:%d DtxCycle1:%d DtxCycle2:%d Start1:%d Start2:%d ueDtxCycle2InactivityThreshold:%d
Line 1079: S0 [CPC] DTX MODEM configuration Parameters: ueDtxLongPreambleLength:%d cqiDtxTimer:%d UeDpcchBurst1:%d UeDpcchBurst2:%d UlDpcchSlotFormatInfo:%d 
Line 1079: S0 [CPC] DTX MODEM configuration Parameters: ueDtxLongPreambleLength:%d cqiDtxTimer:%d UeDpcchBurst1:%d UeDpcchBurst2:%d UlDpcchSlotFormatInfo:%d 
Line 1093: S0  FATAL ERROR: CPCConfigMsg is NULL
Line 1093: S0  FATAL ERROR: CPCConfigMsg is NULL
Line 1115: S0  FATAL ERROR: EDCH not configured
Line 1115: S0  FATAL ERROR: EDCH not configured
Line 1123: S0  EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1123: S0  EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1129: [CPC] DTX DSP configuration done: SMC CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d
Line 1129: [CPC] DTX DSP configuration done: SMC CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d
Line 1159: S0  FATAL ERROR: HSDSCH not configured.
Line 1159: S0  FATAL ERROR: HSDSCH not configured.
Line 1162: S0 [CPC] DRXEnDelayConfig: CFN=%d, UrrcState=%d
Line 1162: S0 [CPC] DRXEnDelayConfig: CFN=%d, UrrcState=%d
Line 1205: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1205: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1211: S0 CPC DRX configuration done CFN:%d Slot:%d SubFr:%d
Line 1211: S0 CPC DRX configuration done CFN:%d Slot:%d SubFr:%d
Line 1214: S0 [CPC] DRX configuration Paramters: DRX cycle=%d, Inactivity TH=%d, tauDpch=%d, tauDrxReg=%d
Line 1214: S0 [CPC] DRX configuration Paramters: DRX cycle=%d, Inactivity TH=%d, tauDpch=%d, tauDrxReg=%d
Line 1222: S0 [CPC] CPC ILM mesasge cleared
Line 1222: S0 [CPC] CPC ILM mesasge cleared
Line 1246: S0 [CPC] processUeDrxInfo: CFN=%d
Line 1246: S0 [CPC] processUeDrxInfo: CFN=%d
Line 1287: [CPC] ProcessDtxModeRelease: CFN=%d isDsRelease %d
Line 1287: [CPC] ProcessDtxModeRelease: CFN=%d isDsRelease %d
Line 1291: [CPC] ProcessDtxModeRelease: clear TokenDTXDSPConfig
Line 1291: [CPC] ProcessDtxModeRelease: clear TokenDTXDSPConfig
Line 1310: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1310: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1319: [CPC] DTX released: SMC CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d, activationTime=%d, isDsRelease=%d
Line 1319: [CPC] DTX released: SMC CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d, activationTime=%d, isDsRelease=%d
Line 1347: [CPC] ProcessDrxModeRelease: CFN=%d isDsRelease %d
Line 1347: [CPC] ProcessDrxModeRelease: CFN=%d isDsRelease %d
Line 1351: [CPC] ProcessDtxModeRelease: clear TokenDRXEnDelayConfig
Line 1351: [CPC] ProcessDtxModeRelease: clear TokenDRXEnDelayConfig
Line 1361: S0  EHalUeDrxReleaseCmd fail - uhal_Cmd_exec
Line 1361: S0  EHalUeDrxReleaseCmd fail - uhal_Cmd_exec
Line 1368: [CPC] DRX released: SW CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d, activationTime=%d isDsRelease=%d
Line 1368: [CPC] DRX released: SW CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d, activationTime=%d isDsRelease=%d
Line 1391: S0 [CPC] ProcessHsscchLessModeInfo: CFN=%d
Line 1391: S0 [CPC] ProcessHsscchLessModeInfo: CFN=%d
Line 1418: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1418: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1440: S0 [CPC] ProcessHsscchLessModeRelease: CFN=%d isDsRelease %d
Line 1440: S0 [CPC] ProcessHsscchLessModeRelease: CFN=%d isDsRelease %d
Line 1450: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1450: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1457: S0 uphy_CCPCModeResourcesController_CheckandFreeAllTokens to check all the attribute Tokens.
Line 1457: S0 uphy_CCPCModeResourcesController_CheckandFreeAllTokens to check all the attribute Tokens.
Line 1460: S0 Freeing up.TokenactivationTimeSTF
Line 1460: S0 Freeing up.TokenactivationTimeSTF
Line 1466: S0 Freeing up.TokenDTXDSPConfig
Line 1466: S0 Freeing up.TokenDTXDSPConfig
Line 1472: S0 Freeing up.TokenDRXEnDelayConfig
Line 1472: S0 Freeing up.TokenDRXEnDelayConfig
Line 1478: S0 Freeing up.TokenWaitAfterUlEstablished
Line 1478: S0 Freeing up.TokenWaitAfterUlEstablished
Line 1507: uphy_CCPCModeResourcesController_configDuringResume DRXEnabled %d, DTXEnabled %d, LessEnabled %d
Line 1507: uphy_CCPCModeResourcesController_configDuringResume DRXEnabled %d, DTXEnabled %d, LessEnabled %d
Line 1517: EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 1517: EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 1528: EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1528: EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1551: EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1551: EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1582: EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1582: EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1594: uphy_CCPCModeResourcesController_releaseDuringPause DRXEnabled %d, DTXEnabled %d, LessEnabled %d
Line 1594: uphy_CCPCModeResourcesController_releaseDuringPause DRXEnabled %d, DTXEnabled %d, LessEnabled %d
Line 1599: uphy_CCPCModeResourcesController_releaseDuringPause: Cancel TokenDTXDSPConfig token
Line 1599: uphy_CCPCModeResourcesController_releaseDuringPause: Cancel TokenDTXDSPConfig token
Line 1606: uphy_CCPCModeResourcesController_releaseDuringPause: Cancel TokenDRXEnDelayConfig token
Line 1606: uphy_CCPCModeResourcesController_releaseDuringPause: Cancel TokenDRXEnDelayConfig token
Line 1621: EHalUeDrxReleaseCmd fail - uhal_Cmd_exec
Line 1621: EHalUeDrxReleaseCmd fail - uhal_Cmd_exec
Line 1634: EHalUeDtxReleaseCmd fail - uhal_Cmd_exec
Line 1634: EHalUeDtxReleaseCmd fail - uhal_Cmd_exec
Line 1647: EHalHsPdschHarqReleaseCmd fail - uhal_Cmd_exec
Line 1647: EHalHsPdschHarqReleaseCmd fail - uhal_Cmd_exec
