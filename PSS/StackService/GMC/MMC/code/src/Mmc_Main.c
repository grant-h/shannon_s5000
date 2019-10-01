Line 333:    pMmc_GeneralData->SimPresent : %d -> %d 
Line 356:    pMmc_GeneralData->SysMode : %d -> %d 
Line 379:    pMmc_GeneralData->EPDmode : %d -> %d 
Line 402:    pMmc_GeneralData->StartFullService : %d -> %d 
Line 425:    pMmc_GeneralData->RefreshRequired : %d -> %d 
Line 448:    pMmc_GeneralData->UEMode : %d -> %d 
Line 471:    pMmc_GeneralData->CsServicesSupport : %d -> %d 
Line 494:    pMmc_GeneralData->VoiceDomainPref : %d -> %d 
Line 517:    pMmc_GeneralData->MtCallIndToUser : %d -> %d 
Line 540:    pMmc_GeneralData->NetModeSel : %d -> %d 
Line 565:    pMmc_GeneralData->DualSimStatus : %d -> %d 
Line 589:    pMmc_GeneralData->ServiceDomain : %d -> %d 
Line 614:    pMmc_GeneralData->DDS : %d -> %d 
Line 623:    pMmc_GeneralData->ImsDDS : %d -> %d 
Line 649:    pMmc_GeneralData->StartByModeSelChanged : %d -> %d 
Line 672:    pMmc_GeneralData->NetworkLockStatus : %d -> %d 
Line 794:    pMmc_GeneralData->hVolteSupport : %d -> %d 
Line 805:    pMmc_GeneralData->CTChVoLTEFlag : %d -> %d 
Line 815:    pMmc_GeneralData->RestartCausePsDet : %d -> %d 
Line 838:    pMmc_GeneralData->RoamPref : %d -> %d 
Line 856: [I]===================== MMC General Data Display =====================
Line 857: [I][[SysMode]] : %s
Line 858: [I][[EPDMode]] : %s
Line 859: [I][[SIM Present]] 		: %s
Line 860: [I][[StartFullService]] 	: %s
Line 861: [I][[NetModeSel]] : %d
Line 862: [I][[StartByModeSelChanged]] : %d
Line 864: [I][[DualSimStatus]] : %d
Line 866: [I][[ServiceDomain]] : %d
Line 870: [I][[NetworkLockStatus]] : %d
Line 871: [I][[RefreshRequired]] : %d
Line 872: [I][[UEMode]] : %d
Line 873: [I][[CsServicesSupport]] : %d
Line 874: [I][[VoiceDomainPref]] : %d
Line 876: [I][[hVolteSupport]] : %d
Line 878: [I][[CTChVoLTEFlag]] : %d
Line 879: [I][[RestartCausePsDet]] : %d
Line 881: [I][[MtCallIndToUser]] : %d
Line 882: [I][[RoamPref]] : %d
Line 883: [I]=================================================================
Line 1025:    %s : 
Line 1029:    Invalid Selected Mode: %d
Line 1176: [W]Invalid Mode Received !! , selected mode=%d
Line 1198:    %s : Filling 
Line 1207:    StartByModeSelChanged from NS: %d
Line 1218:    StartByModeSelChanged = FALSE from NS, value from registry : %d
Line 1227:    ServiceDomain from NS: %d
Line 1277:    StartNwData CTChVoLTE Flag : %d RestartCausePsDet : %d
Line 1306:    Mmc_GeneralData CTChVoLTE Flag : %d
Line 1322:    %s : Initialising MMC data 
Line 1407: %s : 
Line 1447: %s:: Entry
Line 1472:    #1. StartFullService : %s, Sim Present : %s
Line 1476: [W]Check IMEI certi fail or SIM card existence
Line 1484: [W]Check PIN lock 
Line 1515: [!]Invalid Selection Mode !!
Line 1529:    #2. MMC Operating mode : %s (NS Selected-%s)
Line 1531:    #   StartForRefresh : %d, StartByModeSelChanged : %d 
Line 1554:    #3. NetModeSel : %d, DualSimStatus : %d 
Line 1638:    #4. Send MM/EMM init Req and EMM Mode Update Requests
Line 1664:    #5. Send USIM Start Req and SIM Read Req
Line 1669: %s:: Exit
Line 1687: %s : 
Line 1851:    %s: %s, DeepSleepTimerState:%d
Line 2048: %s : IRAT to LTE is allowed ? %s 
Line 2049:    EUTRA Status - %d, CsfbIratToLteState - %d 
Line 2057:    BLOCK PLMN Selection on LTE - MO/MT Call at HEDGE in progress;
Line 2089:    UNBLOCK PLMN Selection on LTE - Re-Setting CSFB Flag and re-enable EUTRA if diabled due to Call
