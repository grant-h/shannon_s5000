Line 313: [rrc_IntraFRep_SetupMeasResultsArr] ERROR:  IntraFRep_p->common.AccumulatingReportInd == NULL!  No report generated!  [MID = %i]
Line 336: [rrc_IntraFRep_SetupMeasResultsArr] MID(%d) MaxNumberOfReportingCells(%d)
Line 341: rrc_IntraFRep_SetupMeasResultsArr: MeasInstId is NULL
Line 369: [rrc_IntraFRep_SetupMeasResultsArr] Use TriggerCellList for MeausredResults
Line 494: There is no Cell Info(%d) or PSC[%d] is different so remove from measured result
Line 542: [rrc_IntraFRep_SetupMeasResultsArr] ++TmpMonSetResults[%d] = %d
Line 656: [rrc_IntraFRep_SetupMeasResultsArr] ++TmpDetSetResults[%d] = %d
Line 674: [Warning] DetectedSetCellResultsArray[%d].cellSynchroResults.off = %d
Line 675: [Warning] DetectedSetCellResultsArray[%d].cellSynchroResults.tm = %d
Line 705: [Warning] There is no DetectedSet included in the MeasuredResult
Line 749: [rrc_IntraFRep_SetupMeasResultsArr]NotAddedMonAndDetSetResults[%d] = %d
Line 757: [rrc_IntraFRep_SetupMeasResultsArr]RemainingCellToAddCount = %d
Line 780: [rrc_IntraFRep_SetupMeasResultsArr]CellResultsArray[%d] = %d
Line 860: [rrc_IntraFRep_SetupMeasResultsArr] CellResultsArray
Line 865: NewCellResultsBuff is NULL in rrc_IntraFRep_SetupMeasResultsArr
Line 896: [rrc_IntraFRep_SetupMeasResultsArr] CellResultsArray is NULL
Line 901: NewCellResultsBuff is NULL in rrc_IntraFRep_SetupMeasResultsArr
Line 917: [rrc_IntraFRep_SetupMeasResultsArr] MID(%d) MaxNumberOfReportingCells(%d) NumCellsInCellResultsArray(%d)
Line 1003: [Warning] There is no matching PSC(%d) in DetectedSet
Line 1030: [Warning] There is no setType in cell PSC(%d)
Line 1061: rrc_IntraFRep_AddActSetMeasResult: thisCell=NULL
Line 1092: rrc_IntraFRep_AddMonSetMeasResult: thisCell=NULL
Line 1122: rrc_IntraFRep_AddDetSetMeasResult: thisCell=NULL
Line 1190: [rrc_IntraFRep_NotifyReport] Measurement Confirm Received (Msg 0x%X), MID = %i.
Line 1198: [rrc_IntraFRep_NotifyReport] Measurement Negative Confirm Received (Msg 0x%X, Failure %i), MID = %i.
Line 1256: [rrc_IntraFRep_NotifyReport] Measurement Confirm Pending - uphy indication ignored. [MID = %i]
Line 1258: MID[%d] Deleted IntraFreqMeasInd(0x%X)
Line 1295: [rrc_IntraFRep_SetAdditionalMeasRep] Additional measured result can not be composed of event trigger measurement!!!
Line 1301: [rrc_IntraFRep_SetAdditionalMeasRepTDD] Additioal MR is not composed because PeriodicReportingCellStatus is absent in MC!!!
Line 1368: [rrc_IntraFRep_SetAdditionalMeasRep] No reporting quantities for ActiveSet Cells
Line 1382: [rrc_IntraFRep_SetAdditionalMeasRep] No reporting quantities for MonitoredSet Cells
Line 1396: [rrc_IntraFRep_SetAdditionalMeasRep] No reporting quantities for DetectedSet Cells
Line 1429: rrc_IntraFRep_SetupMeasResultsArr: IntraFMeas_p is NULL
Line 1446: [rrc_IntraFRep_SetAdditionalMeasRep]ActiveSetCell PSC (%d) is not measured/syncronized so discarded
Line 1466: [rrc_IntraFRep_SetAdditionalMeasRep]MonitoredSetCell PSC (%d) is not measured/syncronized so discarded
Line 1486: [rrc_IntraFRep_SetAdditionalMeasRep]DetectedSetCellResults PSC (%d) is not measured/syncronized so discarded
Line 1513: [rrc_IntraFRep_SetAdditionalMeasRep]ActiveSetCell PSC (%d) is not measured/syncronized so discarded
Line 1618: additional meas report instance NULL!!!
Line 1623: No cell info to be included in additional meas report 
Line 1647: [RemoveFromReportClientList] 0x%x
Line 1752: Remove Accumulating cell id(%d) cpich(%d)
Line 1789: Modify Monitored Cell Id for Cpich(%d) : %d -> %d
Line 1801: Modify Active Cell Id for Cpich(%d) : %d -> %d
Line 1988: The 1st MeasInd of MID(%d)-IntraFreq Periodic Measurement, PrevValue will be used by FirstConfiguredMid(%d)
Line 2054: FirstConfiguredMid(%d) MeasInd is NULL
Line 2085: [NotifyMonitoredSetRemoval]:MID %d : PrevMeasEcNo = %d: Mon -> Det set[%d] = PSC %d
Line 2102: [NotifyMonitoredSetRemoval]:MID %d : RepE1a Inst
Line 2107: [NotifyMonitoredSetRemoval]:MID %d : RepE1b Inst
Line 2112: [NotifyMonitoredSetRemoval]:MID %d : RepE1c Inst
Line 2117: [NotifyMonitoredSetRemoval]:MID %d : RepE1d Inst
Line 2122: [NotifyMonitoredSetRemoval]:MID %d : RepE1e Inst
Line 2127: [NotifyMonitoredSetRemoval]:MID %d : RepE1f Inst
Line 2132: [NotifyMonitoredSetRemoval]:MID %d : RepE1j Inst
Line 2137: [NotifyMonitoredSetRemoval] Wrong IntraF Report client Inst: [%x]
Line 2155: [NotifyDetectedToMonitoredChange]:MID %d :RepE1a Inst
Line 2159: [NotifyDetectedToMonitoredChange]:MID %d : RepE1b Inst
Line 2163: [NotifyDetectedToMonitoredChange]:MID %d : RepE1c Inst
Line 2167: [NotifyDetectedToMonitoredChange]:MID %d : RepE1d Inst
Line 2171: [NotifyDetectedToMonitoredChange]:MID %d : RepE1e Inst
Line 2175: [NotifyDetectedToMonitoredChange]:MID %d : RepE1f Inst
Line 2179: [NotifyDetectedToMonitoredChange]:MID %d : RepE1j Inst
Line 2183: [NotifyDetectedToMonitoredChange] Wrong IntraF Report client Inst: [%x]
Line 2206: No IntraFMeas
Line 2219: Set HHO status %d
Line 2242: No IntraFMeas
Line 2252: Send Stop again MID = %d %d
Line 2264: Send Stop again to remove cell triggered list
Line 2296: [rrc_IntraFRep_SetupMeasResultsArr] ERROR:  IntraFRep_p->common.AccumulatingReportInd == NULL!  No report generated!  [MID = %i]
Line 2307: [rrc_IntraFRep_SetupMeasResultsArr] MID(%d) MaxNumberOfReportingCells(%d)
Line 2312: rrc_IntraFRep_SetupMeasResultsArr: TddMeasInstId is NULL
Line 2631: [Warning] DetectedSetCellResultsArray[%d].cellSynchroResults.off = %d
Line 2661: [Warning] There is no DetectedSet included in the MeasuredResult
Line 2768: [rrc_IntraFRep_SetupMeasResultsArr] TddCellResultsArray
Line 2773: NewCellResultsBuff is NULL in rrc_IntraFRep_SetupMeasResultsArr
Line 2805: [rrc_IntraFRep_SetupMeasResultsArr] TddCellResultsArray is NULL
Line 2810: NewCellResultsBuff is NULL in rrc_IntraFRep_SetupMeasResultsArr
Line 2832: [rrc_IntraFRep_SetupMeasResultsArr] MID(%d) MaxNumberOfReportingCells(%d) NumCellsInCellResultsArray(%d)
Line 2922: [Warning] There is no matching CellparamId(%d) in DetectedSet
Line 2966: rrc_IntraFRep_AddTddActSetMeasResult: thisCell=NULL
Line 3005: rrc_IntraFRep_AddTddMonSetMeasResult: thisCell=NULL
Line 3039: rrc_IntraFRep_AddTddDetSetMeasResult: thisCell=NULL
Line 3067: [rrc_IntraFRep_NotifyReport] Measurement Confirm Received (Msg 0x%X), MID = %i.
Line 3075: [rrc_IntraFRep_NotifyReport] Measurement Negative Confirm Received (Msg 0x%X, Failure %i), MID = %i.
Line 3083: [rrc_IntraFRep_NotifyReport]Unexpected Msg Received [x%x]
Line 3111: [rrc_IntraFRep_NotifyReport] AccumulatingReportInd Allocated for. [MID = %i]
Line 3142: [rrc_IntraFRep_NotifyReport] Measurement Confirm Pending - uphy indication ignored. [MID = %i]
Line 3145: MID[%d] Deleted IntraFreqMeasInd(0x%X)
Line 3174: [rrc_IntraFRep_SetAdditionalMeasRepTDD] Additional measured result can not be composed of event trigger measurement!!!
Line 3180: [rrc_IntraFRep_SetAdditionalMeasRepTDD] Additioal MR is not composed because PeriodicReportingCellStatus is absent in MC!!!
Line 3233: additional meas report instance NULL!!!
Line 3256: Remove Accumulating cell id(%d) CellparamId(%d)
Line 3273: TddLocalAccumulating ptr is NULL
