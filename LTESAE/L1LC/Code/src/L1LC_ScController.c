Line 320: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 363: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 478: [L1LC] Tune EARFCN : %d, Freq : %d
Line 567: [L1LC] Unknown SyncMode(%d)
Line 639: [L1LC] RSSISCAN RESULT: BAND(%d),EARFCN(%d),RXMODE(%d),RSSI_MAIN(%d)
Line 649: [L1LC] RSSISCAN RESULT: BAND(%d),EARFCN(%d),RXMODE(%d),RSSI_SUB(%d)
Line 658: [L1LC] RSSISCAN RESULT: BAND(%d),EARFCN(%d),RXMODE(%d),RSSI_MAIN(%d),RSSI_SUB(%d)
Line 719: Invalid SrchMode:%d
Line 781: Search Already Started by another Controller(%02x)!!!
Line 808: [MTM: AFC PDM CAL] Skip Sync timer setting
Line 855: Disable Cdrx as handover is on-going
Line 878: Invalid pMsg->srchMode:%d
Line 947: [%4d] SRCH_RESULT[%d] Sl_id(%3d) M0M1[%3d %3d] (pos:%d) (cp:%d)
Line 964: [%4d] SRCH_RESULT[%d] Sl_id(%3d) CFO[%d] (pos:%d) (cp:%d)
Line 980: [%4d] SRCH_RESULT[%d] Cell_id(%3d) M0M1[%3d %3d] (pos:%d) (cp:%d)
Line 1084: (offset : %d str: %d, cinr:%d)
Line 1095: L1LC_ProcSyncDoneInd(no cell detection)
Line 1100: no cell detection
Line 1111:  SLAM DONE!!!(slam_cnt:%d str:%d)
Line 1121: L1LC_ProcSyncDoneInd(FS offset large)(offset : %d str: %d)
Line 1127:  repeater detection but serving not detected(init serving_m0m1_pwr:%d)
Line 1133:  repeater detection but srch_offset different(rpt_srch_diff:%d)
Line 1138:  repeater detection but repeater pwr lower(rpt_m0m1_pwr:%d serving_m0m1_pwr:%d)
Line 1144:  repeater detection(offset:%d rpt_detect_cnt:%d)(rpt_srch_diff:%d)(rpt_m0m1_pwr:%d serving_m0m1_pwr:%d)
Line 1154:  SLAM START!!!(rpt_detect_cnt:%d)(cinr:%d)(slam_time_offset:%d rpt_srch_pos:%d)
Line 1157: (offset:%d str:%d rpt_srch_pos:%d)(slam_cnt:%d)(repeater detection)
Line 1168: L1LC_ProcSyncDoneInd(FS offset small)(str: %d)
Line 1170: (offset:%d str:%d rpt_srch_pos:%d)(slam_cnt:%d)(repeater no detection)
Line 1181: L1LC_ProcSyncDoneInd(serving cell is not detected)
Line 1183: repeater&serving cell no detection
Line 1346: [RSTD] Ignore the Dummy Sync Results
Line 1357: search_result is NULL
Line 1363: Dummy Sync
Line 1374: [MTM: AFC PDM CAL] Skip ProcSyncDoneInd
Line 1409: Invalid syncResult.Num(%d)
Line 1449: Invalid syncResult.Num(%d)
Line 1507: SRCH DIV : ConnSrchCnt:%d
Line 1551: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 1562: Invalid gL1LC_MeasInfo.curMode(%d)
Line 1590: Invalid syncResult.Num(%d)
Line 1640: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 1659: syncResult[%d] Num(%d)(%d)
Line 1789: Invalid SL search mode(%d)
Line 1805: Invalid syncResult.Num(%d)
Line 1824: ProcSyncDoneInd(DEBUG): HALSC_GetUeState(%d), pSyncResult->Num(%d), gHALSC_SCellInfo.earfcn(%d)
Line 1831: ProcSyncDoneInd(DEBUG): isHit(%d), hitIndex(%d), cell_id(%d)
Line 1843: ProcSyncDoneInd(DEBUG): num_of_candi(%d), serving_cell_id(%d), gL1LC_SlSrchCnt(%d)
Line 1873: Invalid mode(gL1LC_SrchMode:%d, gL1LC_MeasInfo.curMode:%d, HALSC_GetSyncMode()(%d)
Line 1900: ProcSyncTimerExpired - gL1LC_SrchMode(%d), HALSC_SyncMode(%d), curMode(%d)
Line 1920: L1LC_ProcSyncTimerExpired(Stop FS)
Line 2010: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 2018: Invalid gL1LC_MeasInfo.curMode(%d)
Line 2033: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 2147: Invalid mode(gL1LC_SrchMode:%d, gL1LC_MeasInfo.curMode:%d, HALSC_GetSyncMode()(%d)
Line 2236: Measurement Already Started by another Controller(%02x)!!!
Line 2252: Do not set IsDuringMeas
Line 2257: IsDuringMeas is set as TRUE
Line 2266: IsDuringMeas is set as FALSE 
Line 2307: measCnt is 0 (mode:%d, earfcn:%d, numOfCell:%d, measCnt:%d, nextMeasIndex:%d) - Enable(%d)
Line 2351: measCnt is 0 (earfcn:%d, numOfCell:%d)
Line 2366: L1LC_StopAll
Line 2391: L1LC_StopAll(Stop FS)
Line 2422: Irat measure is ongoing(%d), prepared(%d) (IratMeasState: %d, %d, %d)
Line 2432: UMTS measure stop!
Line 2437: GSM measure stop!
Line 2455: Measure_Stop_Req is pending, wait measure result from other RAT
Line 2461: During Inter GAP, IratMeasState (%d, %d, %d)
Line 2556: Invalid NeighCellConfig(%d)
Line 2621: Invalid pMeasElem->mode(%d)
Line 2883: Invalid pMeasElem->mode(%d)
Line 3133: LTERRM_MEASMODE_UMTS_CGI_CELL_SEARCH is postponed because UMTS modem is ongoing!
Line 3147: Invalid pMeasElem->mode(%d)
Line 3389: Invalid pMeasElem->mode(%d)
Line 3455: nextGapBoundary(%d) is small. wait next time
Line 3482: gL1LC_MeasInfo.curMode(%d) is invalid!
Line 3518: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 3550: GAP Stop!! nextGapBoundary > GAP_READY_HW_OFFSET
Line 3580: GAP Stop!! nextGapBoundary <= GAP_READY_HW_OFFSET
Line 3595: Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 3617: GAP Stop!! nextGapBoundary > GAP_READY_HW_OFFSET
Line 3647: Irat meas is running, so SCell sync is delayed (curIratMode:%d)
Line 3691: GAP Stop!! nextGapBoundary <= GAP_READY_HW_OFFSET
Line 3707: Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 3726: Irat meas is running, so SCell meas is delayed (curIratMode:%d)
Line 3766: Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 3807: Invalid pMeasElem->mode(%d)
Line 3888: [DEBUG] L1LC_GetNextMeasElemFromResourceUpdateInd (mode:%d, numOfCell:%d, earfcn:%d)
Line 3921: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 3950: Gap is not finished (prevMeasMode:%d), curIratMode(%d)
Line 3967: Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 3987: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4006: Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4027: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4069: Inter Meas is suspended (MeasMode:%d, gL1LC_WaitingInterMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 4079: Irat Meas is suspended (MeasMode:%d, gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 4092: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 4118: Gap is not finished (prevMeasMode:%d), curIratMode(%d)
Line 4128: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4149: [DEBUG] L1LC_GetNextMeasElemFromMeasDone (mode:%d, numOfCell:%d, earfcn:%d)
Line 4183: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 4203: Irat Meas is suspended (gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 4218: (gL1LC_IratUmtsMeasState(%d)
Line 4228: (L1LC_GetNextIratMeasElemFromInterSyncDone.PAUSE REQ pending. Do not start IRAT simultaneous process 
Line 4231: IRAT SIMULTANEOUS PROCESS is possible(curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4242: Gap is not finished (prevMeasMode:%d), curIratMode(%d)
Line 4293: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 4321: Inter Meas is suspended (gL1LC_WaitingInterMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 4336: (L1LC_GetNextMeasElemFromGapStart.PAUSE REQ pending. Do not start IRAT simultaneous process 
Line 4340: IRAT SIMULTANEOUS PROCESS is possible(curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4349: Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4390: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 4419: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4438: Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4479: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 4499: Irat Meas is suspended (gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 4514: (gL1LC_IratUmtsMeasState(%d)
Line 4524: (L1LC_GetNextIratMeasElemFromGapEnd.PAUSE REQ pending. Do not start IRAT simultaneous process 
Line 4528: IRAT SIMULTANEOUS PROCESS is possible(curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4543: Inter Synch is running (curMode:%d, curIratMode:%d)
Line 4595: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 4615: Irat Meas is suspended (gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 4682: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 4699: (L1LC_GetNextMeasElemFromMeasReq) Meas skip due to Short mode 
Line 4713: IRAT Measure/Sync is running (curMode:%d, curIratMode:%d)
Line 4727: Inter Meas is suspended (MeasMode:%d, gL1LC_WaitingInterMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 4737: Irat Meas is suspended (MeasMode:%d, gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 4750: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 4791: nextDmtcBoundary not checked (meas_elem : %d, numOfCell:%d, curMode:%d, curIratMode:%d)
Line 4797: Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4808: nextGapBoundary(%d) is small.. (curMode:%d, curIratMode:%d)
Line 4820: nextGapBoundary(%d) is small.. (numOfCell:%d, curMode:%d, curIratMode:%d)
Line 4834: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4847: nextGapBoundary(%d) is small.. (curMode:%d, curIratMode:%d)
Line 4858: nextGapBoundary(%d) is small.. (numOfCell:%d, curMode:%d, curIratMode:%d)
Line 4871: Inter Meas is suspended (gL1LC_WaitingInterMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 4886: (gL1LC_IratUmtsMeasState(%d)
Line 4896: (L1LC_GetNextMeasElemFromMeasReq.PAUSE REQ pending. Do not start IRAT simultaneous process 
Line 4900: IRAT SIMULTANEOUS PROCESS is possible(curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4911: Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4921: [RSTD] Gap Available Immediately (curMode:%d, earfcn:%d), gL1LC_RstdDB.MeasTriggerOffset[%d]
Line 4934: Invalid gL1LC_MeasInfo.config(%d)
Line 4963: Set IsMeasReqPending = TRUE as CheckFeasibility failed
Line 4994: L1LC_StartMeasElem(measConfig:%d, mode:%d, measCnt:%d, nextMeasIndex:%d)
Line 5023: Invalid gL1LC_MeasInfo.config(%d)
Line 5061: [4G_DRDS] (Check_Feasibility) During 4G_DRDS(eDV_active : %d, eDV_available : %d)
Line 5064: [4G_DRDS] (Check_Feasibility) During 4G_DRDS, MCG can't start meas!
Line 5071: [4G_DRDS] (Check_Feasibility) Meas (%d) of MCG Stack is not finished yet!!
Line 5083: [LTE_DSDS] (Check_Feasibility)Initial Search/ measure hence not doing pause even Early timer expired
Line 5090: PauseFlag (%d),  IsWaitResponse (%d), HandoverStartSig (%d)
Line 5109: Pauseflag is set as TRUE, but Meas (%d) is ongoing, therefore, do not pend Meas
Line 5114: Do not start Meas (%d) due to PauseFlag (%d)/ IsWaitResponse(%d) 
Line 5131: Do not start Search (%d) due to PauseFlag (%d)/ IsWaitResponse(%d)
Line 5149: IRAT MeasMode(%d) feasibility will be checked later!
Line 5153: Unknown MeasMode(%d)
Line 5232: [LTE L1LC DSL1RC] [4G_DRDS] Remain time to other stack's paging timing (%d)
Line 5255: Do not start Meas (%d) due to nearby e.p.t
Line 5275: Do not start InterMeas due to nearby e.p.t
Line 5290: Do not start InterMeas due to nearby e.p.t
Line 5316: Do not start ScellMeas due to nearby e.p.t
Line 5336: Do not start IntraSync due to nearby e.p.t
Line 5352: Do not start IntraSync due to nearby e.p.t
Line 5368: Do not start IntraSync due to nearby e.p.t
Line 5384: Do not start IntraSync due to nearby e.p.t
Line 5402: Do not start InterSync due to nearby e.p.t
Line 5430: Do not start ScellSync due to nearby e.p.t
Line 5437: Unknown MeasMode(%d)
Line 5458: Do not start InterMeas due to nearby paging timing of current stack
Line 5483: Do not start InterSync due to nearby paging timing of current stack
Line 5552: Unknown pMeasElem->mode(%d)
Line 5583: GapLevelState(%d) AgcOvrAnt0(%d) AgcOvrAnt1(%d) PschPwr0(%d) PschPwr1(%d) PschPwr2(%d), SrchResultValid(%d)
Line 5611: GapLevelState(%d) AgcOvrAnt0(%d) AgcOvrAnt1(%d) PschPwr0(%d) PschPwr1(%d) PschPwr2(%d), SrchResultValid(%d)
Line 5669: L1LC_ProcMeasureReq during power down state
Line 5686: pCurMeasElem is NULL (pMsg->measMode:%d)
Line 5695: Same measInfo is running (curMode:%d, curIratMode:%d, measMode:%d)
Line 5702: Same measInfo is already exist (curMode:%d, curIratMode:%d, measMode:%d)
Line 5726: SCC configuration check for measure using GAP(%d) (earfcn:%d %d)
Line 5736: GAP configured, SCC measure using GAP (earfcn:%d)
Line 5775: Not supported band for SCC(earfcn:%d)
Line 5811: Wrong numOfCell:(%d) -> Skip GSM ALL MEAS
Line 5838: Not expected measMode(%d) - Turn off ALL MEAS
Line 5848: Triggered measure needs [%d ms] - but DRX T[%d ms] duration is not enough
Line 5881: short of Sparetime(%d) - spareTime(:%d, withOffset -%d) < minTrigTime(:%d)
Line 5891: Trigger measMode(%d) for ALL MEAS - spareTime(:%d, withOffset -%d) > minTrigTime(:%d)
Line 5897: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d, dmtc:%d, laa:%d, csi-rs:%d)
Line 5929: [DMTC] Disable Current Measurement for DMTC measure: curr_measMode(%d)
Line 5939: [DMTC] Disable Current Search for DMTC measure: curr_measMode(%d)
Line 5971: Add MeasElem (subcarrierSpacing(%d), periodicity(%d), smtc.duration(%d), smtc.offset(%d), smtc_included(%d))
Line 5974: Add MeasElem (NumSsbToMeasure(%d), SsbToMeasure(0x%x, 0x%x))
Line 5992: measmode (numOfCell#%d => measMode(%d) earfcn(%d) cell_Id(%d) framePos from Serving Cell Timing(%d))
Line 6029: Add MeasElem (numOfCell#%d => ssb_index(%d), timing_offset(%d))
Line 6077: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d, numOfInfCell: %d)
Line 6085: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 6091: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 6108: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 6118: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 6125: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 6131: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 6141: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 6148: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 6154: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 6164: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 6171: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 6176: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 6186: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 6193: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 6199: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 6223: Delete MeasElem (measMode:%d, earfcn:%d, measNum:%d)
Line 6263: Delete MeasElem (measMode:%d, earfcn:%d, measNum:%d)
Line 6386: MeasDoneInd - gL1LC_MeasInfo.curMode(%d), curIratMode(%d)
Line 6390: Invalid gL1LC_MeasInfo.curMode(%d)
Line 6398: IRAT Measurement done
Line 6444: Invalid measCnt(%d)
Line 6453: pCurMeasElem->measCnt:%d, pCurMeasElem->nextMeasIndex:%d, pCurMeasElem->numOfCell:%d
Line 6464: MEAS_CNF is delayed because remaining Cells for inter frequency(%d) should be measured.
Line 6548: [DMTC] CNT(%d) AGC0(%d) AGC1(%d)!!!
Line 6557: Measure[%4d]: cell id(%d) is removed!!!
Line 6629: Invalid RSRQ(%d)
Line 6677: Invalid RSRP(%d,%d,%d,%d)
Line 6684: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 6729: Set default value (earfcn:%d, Cell ID:%d, RSRP:-204dBm, RSRQ:-40dBm for sub-antenna) due to invalid sub antenna
Line 6741: Abnormal intra-measurement case (AGC: 127)
Line 6816: ProcMeasTimerExpired - curMode(%d)
Line 6848: Invalid gL1LC_MeasInfo.curMode(%d)
Line 6920: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 6936: [MTM] ProcMeasTimerExpired --> Skip sending Measure CNF!!!
Line 7031: NCELL PBCH decoding is NOT used ANYMORE!!!
Line 7041: Not found available CC for earfcn(%d)
Line 7063: ProcPbchReq: CC%d is not for D2D
Line 7103: [A-GAP]: PBCH of CSG Cell Decoded Successfully
Line 7175: [4G_DRDS] Retrigger 4G_DRDS!
Line 7246: [4G_DRDS] Retrigger wakeupintr which was ignored before!
Line 7297: L1LC_ProcSlMeasureReq during power down state, earfcn(%d)
Line 7352: ProcSlMeasureReq: Invalid measMode(%d)
Line 7500: [RSTD] No Serving Cell Found in Assistance Data
Line 7515: Time diff(%d), before SFN(%d) after SFN(%d)
Line 7555: Disable Cdrx as handover is on-going
Line 7567: (L1LC_ProcCellChangeReq)HALSC_SavedAfcValue:%d
Line 7611: Time diff(%d), old SFN(%d) restored SFN(%d)
Line 7673: RSRP(PC) = %d, gHALSC_PathLoss = %d
Line 7767: [RLM] OutSyncCnt (%d)
Line 7780: [LTE L1LC DSDS] RF Unavailable!!!!OOS Indication from L1 Ignored!!!
Line 7797: [RLM] InSyncCnt (%d)
Line 7804: [RLM] RLF Recovery
Line 7826: [RLM] RLMonitorCnt Reset
Line 7842: [RLM] RL result error
Line 7924: [LTE_L1LC] RFBand of SCG STACK should be removed
Line 7940: gRACHflag is initialized
Line 7976: [RLM] N310(%d), N311(%d)
Line 7988: IDLE -> Conn
Line 7997: IDLE -> Conn
Line 8086: ERROR: curUeState(%d) invalid
Line 8108: [4G_DRDS] Remove RFband of SCG from RFbandlist due to MIMO conflict
Line 8166: L1LC_ProcUeStateNtf(IPC_ACTION_ID_PHY_RX_SIB_PDSCH)Pb:%d
Line 8180: [RLM] N310(%d), N311(%d)
Line 8250: Idle -> UE_RACHING, Stop Measurement
Line 8261: Disable SIB-DRX when RACH procedure is started
Line 8303: ERROR: Invalid UE State in NTF
Line 8328: L1LC_ProcL1txTxReq: TxReqType(%d), CurUeState(%d),CurMode(%d),CurIratMode(%d)
Line 8361: [IDLE state] curIratMode: IRAT(UMTS/GSM):Pending L1LC_L1TX_TX_CNF
Line 8368: [IDLE state] curMode: LTERRM_MEASMODE_NONE: 
Line 8377: Current State:DRX(Idle): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 8397: [IDLE state] curMode:INIT Measure, BPLMN Measure or CGI Measure(CurMode:%d)
Line 8407: Current State:DRX(Idle): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 8423: [IDLE state] curMode:INTRA Freq Srch/meas
Line 8433: Current State:DRX(Idle): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 8453: [IDLE state] curMode: INTER:Pending L1LC_L1TX_TX_CNF
Line 8464: Current State:DRX(Idle): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 8483: UnExpected gL1LC_MeasInfo.curMode(%D)
Line 8494: (CONN State) SONANR: Pending L1LC_L1TX_TX_CNF
Line 8514: (CONN state) curMode: IRAT(UMTS/GSM):Pending L1LC_L1TX_TX_CNF
Line 8527: (CONN state) RACH (curMode: LTERRM_MEASMODE_NONE)
Line 8537: Current State:DRX(Connected): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 8554: (CONN state) curMode:NONE or NORMAL:Send L1LC_L1TX_TX_CNF directly without L1LC-RRM interface
Line 8564: Current State:DRX(Connected): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 8583: (CONN state) curMode:NONE or NORMAL:Send L1LC_L1TX_TX_CNF directly without L1LC-RRM interface
Line 8593: Current State:DRX(Connected): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 8613: (CONN state) curMode: INTER:Pending L1LC_L1TX_TX_CNF
Line 8624: Current State:DRX(Connected): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 8631: (CONN state) curMode: INTER:Send L1LC_L1TX_TX_CNF
Line 8645: UnExpected gL1LC_MeasInfo.curMode(%D)
Line 8653: SET gRand_Acc_Tx_Cnf_Nop to TRUE
Line 8665: (CONN State) SONANR: Pending L1LC_L1TX_TX_CNF
Line 8672: (TxType:SR) Send L1LC_SendL1txTxCnf to L1TX without any action
Line 8685: Current State:DRX(Idle or Connected): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 8698: Invalid TxReqType:%d
Line 8715: L1LC_ProcL2txTxReq
Line 8720: gHalDrx_ConnDrxState = DRX_CONN_INIT
Line 8741: (CONN State) SONANR: Pending L1LC_L2TX_TX_CNF
Line 8745: Current State:DRX(Idle or Connected): Wakeup Modem and Send L1LC_L2TX_TX_CNF
Line 8769: L1LC_ProcL2rxRxReq
Line 8775: gHalDrx_ConnDrxState = DRX_CONN_INIT
Line 8792: Current State:DRX(Idle or Connected): Wakeup Modem and Send L1LC_L2TX_TX_CNF
Line 8821: gRACHflag is initialized
Line 8828: Invalid Msg(L1TX_L1LC_DONE_IND)from L1TX(TxReqType:%d)
Line 8882: No Need to update SI info again
Line 8891: L1LC_UpdateSibSchedulingInfo: valid[%d] sfn[%d] tti[%d] periodicity[%d] si_bitmap[0x%x -> 0x%x]
Line 9041: Timer started for SIB12:  Occassion[%d], Updated SIB Window [%d]
Line 9046: Timer started for other SIBs:  Occassion[%d], Updated SIB Window[%d]
Line 9052: Timer started for %d ms
Line 9057: SIB occassion is nearby, take immediate action
Line 9069: No SIB scheduled: Invalid scenario
Line 9106: Sib_index[%d] siPeriodicity[%d] current_sfn_tti[%d] sfn_tti[%d] siWindow[%d]
Line 9110: temp_sfn_tti[%d]
Line 9121: 1: Next SIB Occassion: Index : %d, Occassion: %d, Sib Window : %d 
Line 9137: 2: Next SIB Occassion: Index : %d, Occassion: %d, Sib Window : %d
Line 9162: Next SIB Occassion: Index : %d, Occassion: %d, Updated Sib Window : %d
Line 9190: Wakeup Modem and Execute L1LC_ProcSiReadReq
Line 9270: SI update triggered by paging (ModPeriod: %d)
Line 9277: SI Update Timer Start (Current SFN : %d, si_update_sfn : %d, timer : %d)
Line 9290: Improper value of update_immediate
Line 9371: Improper value of update_immediate
Line 9484: is_filled[%d] siPeriodicity[%d] sibBitmap[0x%x]
Line 9555: Process RRM_L1LC_MBSFN_SI_START_READ_REQ earfcn[%d] cc[%d]
Line 9559: Invalid cc[%d]
Line 9569: Wakeup Modem and Execute L1LC_ProcSiReadReq
Line 9662: Process RRM_L1LC_MBSFN_SI_STOP_READ_REQ earfcn[%d] cc[%d]
Line 9669: Invalid cc[%d]
Line 9709: ProcPendingForGap %d ms(offset:2 ms, preTimeInMs:%d ms)
Line 9710: L1LC pending <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
Line 9735: >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> L1LC resume
Line 9736: ProcPendingForGap finish(curTimeInMs:%d ms)
Line 9742: ProcPendingForGap IratMeasTmr %d ms delay
Line 9772: Invalid gL1lc_BarredList.numOfbarredCell(%d)
Line 9780: Match BarredCell[%d] earfcn:%d, cell id:%d
Line 9787: Invalid gL1lc_BarredList.numOfbarredFreq(%d)
Line 9795: Match BarredFreq[%d] earfcn:%d
Line 9803: Invalid gL1lc_BarredList.numOfUnsuitableFreq(%d)
Line 9811: Match Unsuitable Freq[%d] earfcn:%d
Line 9886: LteRrm_CheckSupportBand: NOT Supported DL_EARFCN %d!!!
Line 9938: LteRrm_CheckSupportBand: NOT Supported DL_EARFCN %d!!!
Line 9961: measMode(%d) is not related with the scheduling for LTE search!!!
Line 9991: 3G IRAT response awaited.(gL1LC_IratUmtsMeasState=%d)
Line 9996: No 3G IRAT response pending
Line 10011: 2G IRAT response awaited.(gL1LC_IratGsmMeasState=%d)
Line 10021: 2G IRAT response awaited.(gL1LC_IratGsmVerifyState=%d)
Line 10026: No 2G IRAT response pending
Line 10118: L1LC_CheckMeasPending: MeasMode(%d)
Line 10146: Tx Path Recovery ON(Count(%d))
Line 10182: TM1 -> Change to 1Rx
Line 10189: ProcRxModeChange: Skip 1Rx mode change due to test SIM, cc(%d), TM(%d)
Line 10209: ProcRxModeChange: Unknown event type(%d)
Line 10228: ProcRxModeChange: cc(%d), type(%d), rx_mode(%x, %x)
Line 10250: L1LC_ProcSetSfninfoNtf: time(%d), Sfn(%d)
Line 10298: [L1LC] L1LC_ReturnToLteMeasStop
