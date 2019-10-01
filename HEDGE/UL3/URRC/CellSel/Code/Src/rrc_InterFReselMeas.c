Line 165: measInd->inter_freq_TDD128_meas == TRUE
Line 170: measInd->inter_freq_TDD128_meas == FALSE
Line 190: measInd is NULL
Line 199: InterFReselMeas_init: IsSysInfo is available
Line 204: InterFReselMeas_init: IsSysInfo is pending 
Line 209: No Memory allocated for rrc_InterFReselMeas_init 
Line 302: InterFReselMeas_p->GroupedFreqArray[jvar].Freq = %d 
Line 307: Failure in Insertion as the Jvar is greater than CELLCACHE_MAXNUMFREQS 
Line 352: Failure in Insertion as the Jvar is greater than CELLCACHE_MAXNUMFREQS 
Line 394: [InterFDetected] Detected Cell Found 
Line 409: [InterFDetected] No Cell Info in CellInfoList (CellParamId %d / Uarfcn %d)
Line 415: [InterFDetected] Detected Cell Accepted (CellParamId %d / Uarfcn %d, Rscp %d)
Line 421: [InterFDetected] Cell Info is NULL
Line 432: [InterFDetected] Cell Id is -1, Cell List is full
Line 437: [InterFDetected] Detected Cell Added at %dl
Line 443: [InterFDetected] Cell Info not Added as Cell List is Full (CellParamId %d / Uarfcn %d)
Line 455: [InterFDetected] Different Detected Cell Found So remove the Stored Celll %d
Line 463: [InterFDetected] Detected Cell Accepted (CellParamId %d / Uarfcn %d, Rscp %d)
Line 469: [InterFDetected] Cell Info is NULL
Line 480: [InterFDetected] Cell Id is -1, Cell List is full
Line 485: [InterFDetected] Detected Cell Added at %dl
Line 491: [InterFDetected] Cell Info not Added as Cell List is Full (CellParamId %d / Uarfcn %d)
Line 507: [InterFDetected] No Detected Cell Found So remove the Stored Celll
Line 553: Handled
Line 647: UpdateResults: Measured InterF Neighbor Freq(%d) CellID(%d) CPICH(%d) CPICH RSCP(%d) = RSCP (%d) + Delta RSCP(%d)
Line 658: FddCellSelInfoPtr is NULL, ivar = %d, jvar = %d
Line 684: [APBCR][InterFReselMeas_UpdateResults] IsValid_CellPriority(%d) Cell_Piority(%d) for Uarfcn(%d) Cpich(%d))
Line 689: [APBCR][InterFReselMeas_UpdateResults] Invalid Cell Priority for Uarfcn(%d) Cpich(%d))
Line 702: [rrc_InterFReselMeas_UpdateResults] SYS_INFO_PRIORITY selected. Priority(%d) was from SIB19
Line 708: [rrc_InterFReselMeas_UpdateResults] DEDICATED_PRIORITY / Priority(%d) was from PriorityInfoList
Line 714: DEDICATED_PRIORITY / Error to get Priority from UARFCN(%d) of PriorityInfoList. So it will not be considered for Reselection
Line 730: [APBCR][InterFReselMeas_UpdateResults] IsValid_CellPriority(%d) Cell_Piority(%d) for Uarfcn(%d) Cpich(%d))
Line 735: [APBCR][InterFReselMeas_UpdateResults] threshXhigh(%d) threshXlow(%d) qQualMinFDD(%d) qRxLevMinFDD(%d)
Line 744: [APBCR][rrc_InterFReselMeas_UpdateResults] UtraFreqInfoId == 0, There are no valid priority information for this UAFRCN(%d))
Line 751: Freq:%i, Cpich:%i  CpichRscp:%i, CpichEcN0:%i
Line 774: NeighFreq %d -> NumofCell == 1, Overwrite SIR(%d -> 0)
Line 820: Invalid BandId of TargetCell (%d)
Line 828: NeighFreq %d, Sir %d (Sir + BandOffset(%d))
Line 837: FddCellSelInfoPtr is NULL, ivar = %d, jvar = %d
Line 856: [rrc_InterFReselMeas_UpdateResults] TargetCsgCellFound from measured results (Freq%d, Cpich%d)
Line 876: [rrc_EutraReselMeas_PostProcessEutraResults] DEDICATED_PRIORITY / ServCellPrio(%d) was from PriorityInfoList
Line 880: DEDICATED_PRIORITY / Error to get Priority from UARFCN(%d) of PriorityInfoList. So ServCellPrio(%d) from rrc_FddCellSelReselInfo is used
Line 933: Priority(%d) of Utra CSG Cell(Uarfcn%d,Cpich%d) keeped as Priority_Csg_Utra(%d), ServCellPrio(%d)
Line 946: Priority(%d) of Utra CSG Cell(Uarfcn%d,Cpich%d) set to Priority_Csg_Utra(%d), ServCellPrio(%d)
Line 983: GetNumAffectedFreqs: CellMask %d AffectedCells = %d
Line 987: GetNumAffectedFreqs: CellMask %d AffectedCells = %d
Line 1089: Index = %i --> CellParamId = %i
Line 1135: AffectedCellMask = %i
Line 1136: InterFReselMeas_p->GroupedFreqArray[FreqIx].CellMask = %i
Line 1146: NumAffectedCellsTdd = %i
Line 1151: invalid NumAffectedCells=%d
Line 1161: Adding (%i, %i) to %s message
Line 1222: invalid NumAffectedCells=%d
Line 1232: Adding (%i, %i) to %s message
