Line 148: rrc_InterFMeasReportCriteria : AccumulatingReportInd is NULL
Line 254: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: Printing AccumulatingReportInd for MID %i
Line 261: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: Freq = %i; cpich=%i, EcNo=%i, Rscp=%i
Line 265: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: Printing TriggeringReportInd for MID %i
Line 272: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: Freq = %i; cpich=%i, EcNo=%i, Rscp=%i
Line 286: [rrc_InterFMeasReportCriteria_NotifyReport] ERROR - pure virtual function
Line 295: [rrc_InterFMeasReportCriteria_TimeToTriggerExpired] ERROR - pure virtual function
Line 349: [rrc_InterFMeasReportCriteria_StopReport] INFO
Line 400: [rrc_InterFMeasReportCriteria_SuspendReport] INFO
Line 425: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - BestCellj initialised to 0 for uarfcn %i
Line 454: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - cpich %i being evaluated
Line 458: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - cpich %i being evaluated
Line 463: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - NEW BestCellj->cpichEcNo = %i (cpich=%i)
Line 470: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - cpich %i being evaluated
Line 474: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - cpich %i being evaluated
Line 479: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - NEW BestCellj->cpichRscp = %i (cpich=%i)
Line 484: >>> QtySumLin [%d](*100) += Meas_lin[%d]*100  Meas[%d] 
Line 498: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - QtySumdB[%d](*100) = log10 (QtySumLin[%d](*100))
Line 503: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - no cells evaluated for uarfcn %i
Line 509: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] ERROR - interFreqResultsArray->numOfCells == 0
Line 558: [FDD] ERROR - TriggeredIndex > Asn_maxFreq. Removing Triggered Results task failed
Line 584: [InterF TTT Triggered INFO] uarfcn(%d) cell num(%d)
Line 606: [InterF TTT Triggered INFO] uarfcn(%d) cell num(%d)
Line 631: rrc_InterFMeasReportCriteria_IsSyncInfoMeasured : InterFCellInfo is NULL
Line 662: [%s] Sync Info is not yet measured Uarfcn(%d) Cpich(%d) OFF(%d) Tm(%d) CountC(%d)
Line 676: [rrc_InterFMeasReportCriteria_RemoveCellInList] ERROR - pure virtual function
Line 722: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: numOfCells = %d,Freq = %i
Line 729: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd]numOfFreq %d
Line 809: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: Printing AccumulatingReportInd for MID %i
Line 816: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: Freq = %i; CellparamId=%i, ProposedTGSN=%i, pccpchRscp=%i
Line 818: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd]:Error:  NumOfTimeslotIscp = %d
Line 826: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: Printing TriggeringReportInd for MID %i
Line 833: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: Freq = %i; CellparamId=%i, ProposedTGSN=%i, pccpchRscp=%i
Line 846: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] Error:%d : freqQ = %i, numOfCells = %d
Line 872: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - TddBestCellj initialised to 0 for uarfcn %i and MeasQty = %d
Line 896: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - CellparamId %i being evaluated
Line 904: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - CellparamId %i being evaluated
Line 913: [rrc_Class_InterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - NEW TddBestCellj->CellparamId = %i (pccpchRscp=%i)
Line 921: >>> QtySumLin [%d](*100) += Meas_lin[%d]*100  TMeas[%d] 
Line 938: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - QtySumdB[%d](*100) = log10 (QtySumLin[%d](*100))
Line 943: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - no cells evaluated for uarfcn %i
Line 949: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] ERROR - interFreqResultsArray->numOfCells == 0
Line 966: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - TddBestCellj initialised to 0 for uarfcn %i and MeasQty = %d
Line 986: N freq Config - Ignored cell  meas uarfcn=%d cellparamid=%d
Line 996: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - CellparamId %i being evaluated
Line 1004: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - CellparamId %i being evaluated
Line 1013: [rrc_Class_InterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - NEW TddBestCellj->CellparamId = %i (pccpchRscp=%i)
Line 1026: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] ERROR - interFreqResultsArray->numOfCells == 0
Line 1056: rrc_InterFMeasReportCriteria_IsTddSyncInfoMeasured : InterFCellInfo is NULL
Line 1082: [%s] Sync Info is not yet measured Uarfcn(%d) CellparamId(%d) OFF(%d) CountC(%d)
