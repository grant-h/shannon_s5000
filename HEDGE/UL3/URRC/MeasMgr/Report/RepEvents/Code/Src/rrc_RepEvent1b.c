Line 142: [rrc_RepEvent1b_init] ERROR - unable to create periodical Timer
Line 170: [rrc_RepEvent1b_free] ERROR - unable to delete periodical Timer
Line 222: [rrc_RepEvent1b::SendMeasReport] ERROR MeasInstId = NULL
Line 237: Alloc Failed!!
Line 258: [rrc_RepEvent1b::SendMeasReport] ERROR - ReportTransferMode not valid [%i].
Line 281: Ignore CIO (PSC %d, CIO %d)
Line 316: [rrc_RepEvent1b::SendMeasReport] Set EventResult for Cpich %i
Line 340: Ignore CIO (PSC %d, CIO %d)
Line 369: [rrc_RepEvent1b::SendMeasReport] ERROR MeasQuantity = NULL
Line 381: SendMeasReport: NumCellsToAdd(%d) out of range
Line 406: [rrc_RepEvent1b::SendMeasReport] [ET Periodic] Set EventResult for Cpich %i
Line 426: SendMeasReport Event1b: AddRepInstId=NULL
Line 461: Block MR during RBS/RBR/TCR/PCR etc
Line 465: In Out-of-sync, Ignore E1B Periodic Report
Line 470: [rrc_RepEvent1b_CallbackPeriodicTimerExpired] ERROR - unable to start Timer
Line 474: PeriodicalReportTimer started (TmId=%d)
Line 511: ActiveSetCellsCount <= 1. Hold Periodic Report
Line 542: [rrc_RepEvent1b_CallbackPeriodicTimerExpired] ERROR - unable to start Timer
Line 546: PeriodicalReportTimer started (TmId=%d)
Line 570: Not able to stop Periodical Timer
Line 646: [GetTriggeringConditionedMeasResults] #MsetCells(%i)>32, bound to %i
Line 673: [GetTriggeringConditionedMeasResults] Copy MsetCells which were in RR: PSC(%d)
Line 697: [GetTriggeringConditionedMeasResults] #A+MsetCells(%i)>32, bound to %i
Line 703: [rrc_RepEvent1b::GetTriggeringConditionedMeasResults] ERROR - TriggeringCondition1 out of range [%i].
Line 763: [rrc_RepEvent1b::EvaluateReportingDeactivationsThreshold] Warning - Remove the best powered PSC%d from MR(e1b) to prevent #AsetCell:0
Line 773: [rrc_RepEvent1b::EvaluateReportingDeactivationsThreshold] ERROR - unable to start Timer
Line 811: [rrc_RepEvent1b_StopReport] [NON FATAL ERROR] Not able to stop Periodical Timer
Line 829: RepEvent1b_p->common.TriggerVarInstId is NULL in rrc_RepEvent1b_StopReport
Line 834: [rrc_RepEvent1b_StopReport] INFO
Line 851: [rrc_RepEvent1b_SuspendReport] INFO
Line 868: [E1B TTTExpired] INFO
Line 879: Re-EvaluateE1B(IsStillGood %d)
Line 889: [E1B] blocked due to HsdschServingCell(%d)
Line 985: [rrc_RepEvent1b_TriggerAllOtherQty] ERROR Not able to get InterFRepInstId 
Line 1013: [rrc_RepEvent1b_TriggerAllOtherQty] localThreshold(%d), E1A DeactThreshold(%d)
Line 1035: [rrc_RepEvent1b_TriggerAllOtherQty] ERROR PhyMeasInstId = NULL
Line 1043: [rrc_RepEvent1b_TriggerAllOtherQty] MID(%d) is InterFreq Measurement. NumOfFreq(%d)
Line 1116: [rrc_RepEvent1b_TriggerAllOtherQty] ERROR Not able to get InterFRepInstId 
Line 1137: [rrc_RepEvent1b_TriggerAllOtherQty] Act+Mon(%d) has exceeded the Maximum(32)
Line 1145: [rrc_RepEvent1b_TriggerAllOtherQty] DetectedSet(%d) has exceeded the Maximum(%d)
Line 1284: rrc_RepEvent1b_TriggerAllOtherQty-MeasResults is NULL
Line 1319: [rrc_RepEvent1b_TriggerAllOtherQty] ERROR Not able to get InterFRepInstId 
Line 1365: [rrc_RepEvent1b_TriggerAllOtherQty] Aset is full. Bound RHS_trig*100(%i) and RHS_leav*100(%i)
Line 1403: Ignore CIO (PSC %d, CIO %d)
Line 1411: [SPARK] PSC %d: CIO %d (NumAset %d, localThreshold %d)
Line 1415: Ignore CIO (PSC %d, CIO %d)
Line 1430: [rrc_RepEvent1b_TriggerAllOtherQty] Evaluating E1B for MID(%d) PSC(%d) Ec/N0(%d) CIO(%d)
Line 1441: [rrc_RepEvent1b_TriggerAllOtherQty] Evaluating E1B for MID(%d) PSC(%d) RSCP(%d) CIO(%d)
Line 1450: [rrc_RepEvent1b_TriggerAllOtherQty][VAS] Eq2 satisfied - Triggering. MID %i; Cpich %i; Uarfcn %i; lhsdB*1000(%i) <= rhsdB*1000(%i)
Line 1456: [rrc_RepEvent1b_TriggerAllOtherQty] Eq2 satisfied; PSC %i; lhsdB(%i) <= rhsdB(%i)
Line 1462: [rrc_RepEvent1b_TriggerAllOtherQty] AsetInfo(#:1, PSC:%d), TriggeredPSC:%d -> ignored
Line 1507: [Event 1B] ASET (NumASET %d vs Threshold %d), E1fConfigured %d
Line 1511: [Event 1B] Total EcNo ( >= -13dB)
Line 1517: [Event 1B] TTT extension (PSC %d, %d ms): NumASET %d ( < Max. ASET %d)
Line 1522: [Event 1B] ASET full, TTT Count %d
Line 1529: [Event 1B] TTT extension (PSC %d, %d ms): TTT count %d ( > 0) 
Line 1539: [Event 1B] TTT extension (PSC %d, %d ms): TTT count %d ( > 0) 
Line 1558: It's already in the CellRecentlyTriggered List
Line 1592: [rrc_RepEvent1b_TriggerAllOtherQty] Eq4 satisfied; PSC %i; lhsdB(%i) > rhsdB(%i)
Line 1600: [Event 1B] ASET (NumASET %d vs Threshold %d), E1fConfigured %d
Line 1607: [Event 1B] Total EcNo ( > -13dB)
Line 1611: [Event 1B] ASET full, TTT Count %d
Line 1638: [rrc_RepEvent1b_TriggerAllOtherQty] NumActiveRl(%d). Stop TTT
Line 1644: [rrc_RepEvent1b_TriggerAllOtherQty] NumActiveRl(%d). Update TTT List
Line 1701: rrc_RepEvent1b_TriggerAllOtherQty-TriggeringConditionedMeasResults is NULL
Line 1743: [rrc_RepEvent1b_TriggerPathloss] ERROR PhyMeasInstId = NULL
Line 1831: [rrc_RepEvent1c_TriggerPathloss] ERROR Not able to get InterFRepInstId 
Line 1851: [rrc_RepEvent1b_TriggerPathloss] Act+Mon(%d) has exceeded the Maximum(32)
Line 1859: [rrc_RepEvent1b_TriggerPathloss] DetectedSet(%d) has exceeded the Maximum(%d)
Line 1953: rrc_RepEvent1b_TriggerPathloss-MeasResults is NULL
Line 1982: [rrc_RepEvent1c_TriggerPathloss] ERROR Not able to get InterFRepInstId 
Line 2025: Ignore CIO (PSC %d, CIO %d)
Line 2039: [rrc_RepEvent1b_TriggerPathloss][VAS] Eq1 satisfied ; MID %i; Cpich %i; Uarfcn %i; lhsdB*1000(%i) >= rhsPathlossdB*1000(%i)
Line 2044: [rrc_RepEvent1b_TriggerPathloss] Eq1 satisfied; PSC %i; lhsdB(%i) >= rhsPathlossdB(%i)
Line 2079: [rrc_RepEvent1b_TriggerPathloss] Eq3 satisfied; PSC %i; lhsdB(%i) < rhsdB(%i)
Line 2151: rrc_RepEvent1b_TriggerPathloss-TriggeringConditionedMeasResults is NULL
Line 2198: [CheckSentReports] [NON FATAL ERROR] Not able to stop Periodical Timer
Line 2314: INVALID NewActiveSetCpichCount 
Line 2370: [rrc_RepEvent1b_UpdateTriggeredList] ERROR TriggeringCondition1 out of range [%i].
Line 2501: ERROR TriggeringCondition1 out of range [%i]
Line 2561: [E1B]: PSC %d : Det Set -> Mon Set: TTT Retained
Line 2570: ERROR TriggeringCondition1 out of range [%i]
Line 2632: [ReEvaluateMRAllOtherQty] AccumulatingReportInd is NULL
Line 2639: Null ReEvalResults
Line 2667: [ReEvaluateMRAllOtherQty] CandiCell is already removed from ActSet (%d)
Line 2712: [ReEvaluateMRAllOtherQty] MeasResults is NULL!
Line 2730: [ReEvaluateMRPathloss] Act+Mon(%d) has exceeded the Maximum(32)
Line 2737: [ReEvaluateMRPathloss] Dset(%d) has exceeded the Max(%d)
Line 2860: Ignore CIO (PSC %d, CIO %d)
Line 2873: [ReEvaluateMRAllOtherQty] Evaluating E1B for MID(%d) PSC(%d) Ec/N0(%d) CIO(%d)
Line 2885: [ReEvaluateMRAllOtherQty] Evaluating E1B for MID(%d) PSC(%d) Ec/N0(%d) CIO(%d)
Line 2892: [ReEvaluateMRAllOtherQty] GoodToSend (PSC %d)
Line 2897: [ReEvaluateMRAllOtherQty] No GoodToSend (PSC %d)
Line 2903: >>> WARNING: Na is 0
Line 2937: [ReEvaluateMRPathloss] AccumulatingReportInd is NULL
Line 2944: Null ReEvalResults
Line 2972: [ReEvaluateMRPathloss] CandiCell is already removed ActSet (%d)
Line 2985: [ReEvaluateMRAllOtherQty] MeasResults is NULL!
Line 3003: [ReEvaluateMRPathloss] Act+Mon(%d) has exceeded the Maximum(32)
Line 3010: [ReEvaluateMRPathloss] Dset(%d) has exceeded the Max(%d)
Line 3123: Ignore CIO (PSC %d, CIO %d)
Line 3136: [ReEvaluateMRPathloss] GoodToSend (PSC %d)
Line 3141: [ReEvaluateMRPathloss] No GoodToSend (PSC %d)
Line 3147: >>> WARNING: Na is 0
Line 3165: [ReEvaluateMR] ERROR MeasInstId = NULL
Line 3183: [ReEvaluateMR] Wrong MeasQuantity
Line 3223: ERROR Not able to get InterFRepInstId 
Line 3265: ERROR Not able to get InterFRepInstId 
Line 3294: localThreshold(%d), E1A DeactThreshold(%d)
