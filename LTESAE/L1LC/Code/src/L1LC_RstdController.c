Line 370: [RSTD] L1LC State Changed [%s --> %s]
Line 493: [RSTD] FLAGS :: LPP PROFILE [0x%x] FT[%d] ATT_FT[%d] TMO_FT[%d] LGU_FT[%d] VZW[%d] KDDI[%d]
Line 496: [RSTD] [RRM => L1LC] Enter L1LC_ProcessOtdoaMeasReq
Line 501: [RSTD] ERROR!!! Received NULL L1LC_ProcessOtdoaMeasReq...
Line 507: [RSTD] Recieved OTDOA Measurement Request while already processing another request...
Line 546: [RSTD] [SAME CELL FILTER] Freq Count [%d] Cell Count [%d] - Cell ID [%d] earfcn [%d] Iprs [%d] Nprs [%d] PrsBw [%d]
Line 582: [RSTD]  |>>>---OTDOA MEASUREMENT REQUEST Report Interval [%d ms] Report Amount [%d] ------->>>
Line 609: [RSTD] Freq Count [%d] :: Cell Count0 [%d] Cell Count1 [%d] Cell Count2[%d] Max Attempt[%d]
Line 612: [RSTD] IC Count0 [%d][0x%x] IC Count1 [%d][0x%x] IC Count2[%d[0x%x]]
Line 638: [RSTD] No Serving Cell Found in Assistance Data
Line 698: [RSTD] :: Send Available OTDOA Measurement response
Line 723: [RSTD] Process HAL_L1LC_RSTD_MEASURE_DONE_IND
Line 771: [RSTD] Window out of range, Cell ID [%d], RSTD [%d] Expected RSTD [%d], Expected RSTD Uncertanity [%d] 
Line 777: [RSTD] Meas Results are discarded for the Assisted Data Cell[%d][%d] = %d, Cell ID [%d], RstdMeasDone [%d]
Line 784: [RSTD] Results are discarded for all the N cells, since gL1LC_RstdDB.Now_MeasuringCells_Cnt = %d 
Line 825: [RSTD] Process HAL_L1LC_RSTD_SCHEDULE_IND: State[ %s ]
Line 895: [RSTD] Error: Update OTDOA_UNABLE_TO_MEASURE_SOME_NEIGHBOURS Layer[%d], numMeasuredCells[%d], AssistanceData Cells[%d] !!! 
Line 901: [RSTD] L1LC_ProcOtdoaMeasureRsp : Layer[%d] Number Of Cells Reporting [%d], Total Measured Cells [%d]
Line 916: [RSTD] Response Cell ID[%d] - RSTD[%d], Prs Max Peak[%d], MeasQuality[Resolution:%d, ErrorValue:%d, NumSample:%d]
Line 925: [RSTD] Error: Update OTDOA_UNABLE_TO_MEASURE_ALL_NEIGHBOURS (totalMeasuredCells:%d) !!!
Line 936: [RSTD] OTDOA AT CMD REQ[%d]: RSP is not sent to RRM
Line 991: [RSTD] L1LC_RstdSendDspPRSInfo() : CurSfnTti [%d]
Line 1018: [RSTD] CC%d Cell ID(%d) PRS_Elem [%d]: Muted for Next Occasion
Line 1079: [RSTD] Sending RSTD Measurement for the measured Neighbours
Line 1101: [RSTD] gL1LC_Report_Count[%d]
Line 1109: [RSTD] Reporting to LPP is completed
Line 1142: [RSTD] State[ %s ] HO Triggered(earfcn:%d, Cell ID:%d) During RSTD Measurement
Line 1147: [RSTD] State[ %s ] Serving Cell(earfcn:%d, Cell ID:%d) Reference Cell(earfcn:%d, Cell ID:%d)
Line 1166: [RSTD] SCell(earfcn:%d, Cell ID:%d) is found, No need of exchanging the Reference cell
Line 1183: [RSTD] --------Reference Exchange Success---------
Line 1206: [RSTD] No Cell found in Assistance Data Cell
Line 1210: [RSTD] Error: Update OTDOA_UNABLE_TO_MEASURE_REFERENCE !!!
Line 1245: [RSTD] State[ %s ] RRE/HO/RELEASE Triggered During RSTD Measurement
Line 1283: [RSTD] Error Cause Updated [0x%x]
Line 1300: [RSTD] Entering in L1LC_StartRstdMeasurement
Line 1320: [RSTD] Periodic Timer has started. Timer Expires in (%d) mS
Line 1327: [RSTD] No Response time from LPP. Default Periodic Timer has started. Timer Expires in 1900 mS
Line 1346: [RSTD] Current State:DRX(Idle or Connected): Wakeup Modem and Measure RSTD
Line 1375: [RSTD] -----------SCHEDULER ->  Gap Req Ind (%d), Measured Freq Layers (%d) -------------
Line 1430: [RSTD] No Layer has been selected for next PRS Occasion
Line 1473: [RSTD] Inter-Frequency Layer[%d]-Neigh freq[%d] Gap freq [%d]  - Measure Layer
Line 1485: [RSTD] Inter-Frequency Layer[%d]-Neigh freq[%d] Gap freq [%d]  - Skip Layer
Line 1553: [RSTD] Intra-Frequency Gap Invalid - Layer[%d]-Neigh freq[%d] Ref freq[%d] - Skip Layer
Line 1560: [RSTD] Intra-Frequency Layer[%d]-Neigh freq[%d] Serv freq[%d] - Measure Layer
Line 1572: [RSTD] Layer[%d]-Neigh freq[%d] - Skip this Freq Layer for current Measurement Interation due to Gap Non Availability
Line 1643: [RSTD] pal_GetChipName (%x), serving_BW (%d), prs_Info.bandwidth(%d),numDLsubframe(%d)
Line 1652: [RSTD] L1LC_RstdScheduleNeighCells: reducing maxNeighCnt
Line 1657: [RSTD] | STATISTICS - LAYER [%d] CELL COUNT [%d] MEASURED COUNT [%d], isIntraMeasure[%d], measReference[%d] maxNeighCnt[%d]
Line 1681: [RSTD] L1LC_RstdScheduleNeighCells: gL1LC_RstdDB.Now_MeasuringCells_Cnt[%d]
Line 1728: [RSTD] L1LC_RstdGetNeighCells : Layer [%d] NonMeasuredCells[%d] maxNeighCnt[%d] Measuring Cell Cnt[%d]
Line 1770: [RSTD] SCHEDULED NEIGHBOUR CELL [%d][%d] Cell ID [%d] for the PRS OCCASION SFN[%d]
Line 1794: [RSTD] CANDIDATE NEIGHBOUR CELL [%d][%d] CELL ID [%d] HAS MUTING IN NEXT PO SFN[%d]  PRS ELEMENT [%d]
Line 1855: [RSTD] Meas Referece Cell : prsElem[%d], prsSfnTti[%d], muteLen[%d], mutePattern[%d]
Line 1882: [RSTD] L1LC_RstdAllNCellsMeasured : AllCellsMeasCnt[%d], MaxAttempts[%d]
Line 1967: [RSTD] Next PRS Occ - prsSfnTti[%d] prsElem[%d] Iprs[%d] Tprs[%d] CurSfnTti[%d]
Line 2003: [RSTD] Available PRS Occassions[%d] Estimated Time for Measurement [%d ms], localPrsOcc[%d]
Line 2023: [RSTD] L1LC_RstdCheckPrsOccElapsed: Available PRS Occasions for measurements[%d]
Line 2035: [RSTD] Available PRS Occasions for measurements have elapsed!!! Sending the Response...
Line 2144: [LTE DSDS] assert condition : Input data is wrong
Line 2146: [LTE DSDS] assert condition : Input data is wrong
Line 2148: [RSTD] CELL#0 ID [%d], CELL#1 ID [%d], CELL#2 ID [%d], CELL#3 ID [%d]
Line 2201: [RSTD] CONFIGURED CELL :: CELL %d : TS OFFSET(%d) ERSTD(%d) ERSTD UNCER(%d) MUTING(%d))
Line 2268: [RSTD] No Measurement Element
Line 2302: [RSTD] Start Forced Sync: mode(%d) earfcn(%d) bw(%d)
Line 2314: [RSTD] L1LC_RstdGetNextInterFreq: nextGapBoundary > GAP_READY_HW_OFFSET
Line 2324: [RSTD] L1LC_RstdGetNextInterFreq: GapEnable[%d], GapPeriod[%d]
Line 2358: [RSTD] CheckRstdInterFreq : Inter-Frequency cells have not been configured
Line 2377: [RSTD] CheckRstdInterFreq : Layer[%d] earfcn[%d] is still being measured, hence no additional request
Line 2416: [RSTD] Gaps are sufficient to measure the Next Layer [%d] Earfcn [%d] 
Line 2424: [RSTD] CheckRstdInterFreq Layer[%d] -Neigh freq[%d] interFreqFound[%d] reqInterGap[%d]
Line 2445: [RSTD] Gaps are sufficient to measure the Next Layer [%d] Earfcn [%d] 
Line 2465: [RSTD] CheckRstdInterFreq Layer[%d] -Neigh freq[%d] reqInterGap[%d] interFreqFound[%d] reqLayers[%d]
Line 2603: [RSTD] Command[%d] Earfcn[%d] GapCheck[%d] PrsInterval[%d to %d] GapInterval[%d to %d]
Line 2652: [RSTD] Found MFBI Earfcn: Layer[%d] AssistanceEarfcn[%d], ServingEarfcn[%d], Frequency[%d]
Line 2714: [RSTD] Cell ID [%d] Measured Cell[%d][%d] Update with NEW Results - OLD[Fap_Results = %d, peak_value = %d] --> NEW[Fap_Results = %d, peak_value = %d]
Line 2726: [RSTD] Cell ID [%d] Measured Cell[%d][%d] Keep OLD Results - OLD[Fap_Results = %d, peak_value = %d], NEW[Fap_Results = %d, peak_value = %d]
Line 2766: [RSTD] Cell ID [%d] Measured Cell[%d][%d] Fap_Results = %d, peak_value = %d, peak_total = %d, num_sample/ErrorValue = %06d
Line 2804: [RSTD] Cell ID [%d] Measured Cell[%d][%d] Fap_Results = %d, peak_value = %d, cellFound = %d, num_sample/ErrorValue = %06d
Line 2847: [RSTD]  OTDOA REFERENCE CELL Start : Cell ID [%d] earfcn [%d] Iprs[%d] Nprs [%d] PrsBw [%d] Ant Port[%d]
Line 2849: [RSTD] MuteLen [%d] MutePattern [0x%X] ERstd[%d] Erstd_Un [%d] timeOffset [%d]
Line 2852: [RSTD] --------------------------------OTDOA NEIGHBOUR CELLS--------------------------------
Line 2874: [RSTD] Freq Count [%d] Cell Count [%d] - Cell ID [%d] earfcn [%d] Iprs [%d] Nprs [%d] PrsBw [%d]
Line 2876: [RSTD] MuteLen [%d] MutePattern [0x%X] ERstd[%d] Erstd_Un [%d] timeOffset [%d] PrsSfOffset [%d], Ant Port[%d]
Line 2881: [RSTD] Same Cell as Reference has been received in the Neighbour List !!!!!
Line 2893: [RSTD] ------------------------------------------------------------------------
Line 2963: [RSTD] CA Info: CC%d[found:%d], PRS[Iprs:%d, Nprs:%d, bw:%d]
Line 3045: [RSTD] FAP_DB MAXIUM CELL NUMBER : Cell ID[%d] Earfcn[%d] index[%d]
Line 3102: [RSTD] FAP_DB : Cell ID[%d] Earfcn[%d] index[%d] Fap[%d] Peak[%d]
Line 3196: [RSTD] STDEV_FAP_DB : Cell ID[%d] Earfcn[%d] index[%d] Fap[%d] DEBUG[%d %d]
Line 3226: [RSTD] ============= STDEV_FAP_DB: PCID[%d], Resolution[%d], Value[%d], numSample[%d], removedNumSample[%d] =============
Line 3227: [RSTD] ============= STDEV_FAP_DB: error_stdev[%d], avg_square[%d], square_avg[%d] =============
Line 3230: [RSTD] ========================== L1LC_RstdRemoveAbruptFapDebugDb: numCells[%d] ==============================
Line 3245: [RSTD] -----------------------------------Remove Abrupt Fap: PCI[%d] numFap[%d]-------------------------------------
Line 3293: [RSTD] change best_fap1 Best Fap1[Fap:%d, total:%d, cnt:%d]
Line 3342: [RSTD] Remove Abrupt Fap: Fap1_Selected[%d], Best Fap1[Fap:%d, num:%d], Best Fap2[Fap:%d, num:%d]
Line 3359: [RSTD] Remove Abrupt Fap: Fap1_Selected[%d], Best Fap1[%d, %d], Best Fap2[%d, %d], fapWin[%d to %d]
Line 3366: [RSTD] Remove Abrupt Fap: Discard Index[%d], Fap[%d]
Line 3381: [RSTD] Remove Abrupt Fap: Discard Index Range[%d to %d], Fap[%d]
Line 3509: [RSTD] UpdateFap : Cell ID:%d, Fap:%d, Num Samples:%d, Max Peak:%d, Total Peak:%d
Line 3511: [RSTD] UpdateFap : error.resolution:%d, error.value:%d, error.num_sample:%d
Line 3548: [RSTD] AT CMD: OTDOA REQ Processing[CMD:%d]
Line 3575: [RSTD] REFERENCE CELL CONFIG : Cell ID[%d] EARFCN[%d] I_PRS[%d] CP/ANT/PRS_BW/NPRS[%04d] 
Line 3609: [RSTD] NEIGHBOUR CELL CONFIG[%d][%d]: Cell ID[%d] EARFCN[%d] I_PRS[%d] CP/ANT/PRS_BW/NPRS[%04d] E RSTD[%d]
Line 3635: [RSTD] AT CMD: OTDOA ACTIVATION[%d]
Line 3648: [RSTD] AT CMD: OTDOA DE-ACTIVATION[%d]
Line 3663: [RSTD] Invalid OTDOA Sub Command[%d]
Line 3694: [RSTD] Validate: Invalid Cell ID[%d]
Line 3700: [RSTD] Validate: Invalid Antenna Config[%d]
Line 3706: [RSTD] Validate: Invalid CP Type[%d]
Line 3712: [RSTD] Validate: Invalid PRS BW[%d]
Line 3718: [RSTD] Validate: Invalid I PRS[%d]
Line 3724: [RSTD] Validate: Invalid N PRS[%d]
Line 3730: [RSTD] Validate: Invalid Muting Size[%d]
Line 3764: [RSTD] Reference FAP[Avg:%d, Total:%d, numSample:%d, numAttempts:%d]
Line 3790: [RSTD] Neighbour Cell ID[%d] - RSTD[%d], Prs Max Peak[%d], MeasQuality[Resolution:%d, ErrorValue:%d, NumSample:%d], numMeasuredCells[%d]
Line 3854: [RSTD] Response Last Measured SFN : %d
Line 3877: [RSTD] L1LC_RstdUpdateRefRspInfo : Send OTDOA_UNABLE_TO_MEASURE_REFERENCE (NumOfAttempts:%d, numOfValid:%d)
Line 3913: [RSTD] Remove Directional Antenna Cells : Layer[%d], Measured N Cells [%d]
Line 3933: [RSTD] RemoveDirectionalCell : VSHIFT Removed [PCI:%d, numSample:%d, Fap:%d] --> Stationed [PCI:%d, numSample:%d, Fap:%d]
Line 3986: [RSTD] RemoveDirectionalCell : Removed [PCI:%d, numSample:%d, Peak:%d] --> Stationed [PCI:%d, numSample:%d, Peak:%d]
Line 3999: [RSTD] RemoveDirectionalCell : Removed [PCI:%d, numSample:%d, Peak:%d] --> Stationed [PCI:%d, numSample:%d, Peak:%d
Line 4105: [RSTD] L1LC_RstdFilterOtdoaMeasuredCells : AllCellsMeasCnt[%d]
Line 4122: [RSTD] NumSample Normalize : Cell ID:%d, Num Samples:%d, Normalized Samples:%d, Peak:%d, Fap:%d, resolution:%d, Total Sample:%d
Line 4180: [RSTD] Filtered Response List : Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, Ts delta offset:%d
Line 4230: [RSTD] Filtered Response List : Resolution:%d, expectedRstd:%d, Num Samples:%d, numCellsReporting: %d, numCellThrPass: %d
Line 4270: [RSTD] Sort by AssistanceData: Layer[%d], Measured N Cells [%d]
Line 4322: [RSTD] Sort by Num Samples and then by Peak Value : Layer[%d], Measured N Cells [%d]
Line 4326: [RSTD] Sorting Not Required : numCellCount[%d]
Line 4409: [RSTD] Sort by Peak Value and then by Num Samples: Layer[%d], Measured N Cells [%d]
Line 4413: [RSTD] Sorting Not Required : numCellCount[%d]
Line 4520: [RSTD] L1LC_RstdExchangeReferenceCell: Target earfcn[%d] Cel ID[%d]
Line 4550: [RSTD] Exchange REF: Inter-Frequency. Src earfcn[%d] Target earfcn[%d]
Line 4691: [RSTD] Exchange Measured Results: No Response Cell found : pRstdCell[%d], Cur Serving Num Sample[%d]
Line 4737: [RSTD] L1LC_RstdGetMatchedCell: Cell Found: layer[%d], cell idx[%d]
Line 4856: [LTE DSDS] assert condition
Line 4866: [RSTD] WARNING!!! First PRS TTI ISN'T DL SubFrame!! TD-Config [%d], PRS TTI StartOffset [%d] 
Line 4935: [RSTD] L1LC_RstdGetPrsElem : Iprs[%d], Dprs[%d], Tprs[%d], CurSfnTti[%d], prsElem[%d], prsSfnTti[%d]
Line 5128: [RSTD] CellIndex[%d] Not Scheduled Again
Line 5176: [RSTD] ADD GAP Element(%d) : freq layer[%d], cell idx[%d], earfcn[%d], prsOffset[%d]
Line 5207: [RSTD] ADD GAP Element(%d) : freq layer[%d], cell idx[%d], earfcn[%d], prsOffset[%d]
