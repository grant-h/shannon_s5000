Line 638: LteRrmConn_InitMeasConfigList
Line 814: LteRrmConn_FreeMeasConfigList
Line 947: LteRrmConn_InitReportStatus pMeas is NULL
Line 951: LteRrmConn_InitReportStatus(measId:%d)
Line 992: LteRrmConn_InitAllReportStatus
Line 1145: LteRrmConn_InitAllOngoingFlag
Line 1179: LteRrmConn_InitMeasScheduler
Line 1239: LteRrmConn_ForcedInterFreqSchedule - no Inter-Freq
Line 1301: LteRrmConn_ForcedUtraFreqSchedule - no Utra-Freq
Line 1307: LteRrmConn_ForcedUtraFreqSchedule
Line 1322: - utraFreqSrchCycle(%d) utraFreqMeasCycle(%d) intraFreqSrchCycle(%d)
Line 1329: - interFreqSrchCycle(%d) interFreqMeasCycle(%d)
Line 1338: - ScellFreqSrchCycle(%d) ScellFreqMeasCycle(%d)
Line 1347: - geranFreqMeasCycle(%d) geranFreqIdentifyCycle(%d) geranFreqVerifyCycle(%d)
Line 1354: - cdmaFreqMeasCycle(%d)
Line 1372: LteRrmConn_RestoreMeasSchedule (bnewInterFreqFlag:%d bUtraForcedMeas:%d)
Line 1428: LteRrmConn_InitSCellMeasScheduler
Line 1442: InitSCellMeasScheduler - search(%d), meas(%d)
Line 1518: LteRrmConn measurement scheduling was skipped due to SL.
Line 1529: LteRrmConn_StartMeas(basicCycleCnt:%d)(isFirst:%d)
Line 1544: Skip short measure cycle
Line 1555: Skip measure cycle due to Restore
Line 1576: ConnMeasSuspendForTx(%d), PBCH mode(%d). Only IntraF Meas can be started
Line 1597: Inter-RAT Measurement is skipped due to utra_SI_AcquisitionForHO(CgiState:%d, CgiMeasType:%d)
Line 1809: MeasID(%d), ObjectID(%d), ReportId(%d), Choice(%d), Purpose(%d), ReportAmount(%d), Removed this periodic meas(%d)
Line 1813: Intra freq, LTERRM_REPORT_EUTRA_STRONGEST_CELLS meas. config found
Line 2012: Normal Inter Freq Handover Update Meas List(%d, %d, %d, %d)
Line 2020: Blind Inter Freq Handover Update Meas List(%d, %d, %d, %d)
Line 2028: (No Intra Object) Inter Freq Handover Update Meas List(%d, %d, %d, %d)
Line 2032: Do Not change Meas List(%d, %d, %d, %d)
Line 2060: remove Intra_MID(%d)
Line 2073: EUTRA object(earfcn:%d) is modified
Line 2085: Initialized Pcell IndOff (%d -> 0)
Line 2113: remove SCell_MID(%d)
Line 2128: SCell(ID:%d, earfcn=%d is added in ScellmeasList
Line 2140: remove InterMeas_MID(%d)
Line 2152: EUTRA object(earfcn:%d) is modified
Line 2164: Initialized Pcell IndOff (%d -> 0)
Line 2191: remove Utra_MID(%d)
Line 2202: UTRA object(arfcn:%d) is modified
Line 2225: remove Geran_MID(%d)
Line 2237: GERAN object(band_indicator:%d, freq:%d) is modified
Line 2260: remove remaining CdmaMeas_MID(%d)
Line 2272: CDMA object(band_class:%d, freq:%d) is modified
Line 2367: Remove exhausted MID(%d)
Line 2399: IntraFreq NULL
Line 2405: Initialized Pcell IndOff (%d -> 0)
Line 2436: SCell cycle : Srch(%d), Meas(%d)
Line 2459: Warning! eICIC bitsize(%d) not compatible with spec (20/40/60/70)
Line 2463: measSubframePatternNeigh(intRA): eICIC mode(%d), bitsize(%d)
Line 2468: Warning! measSubframeCellList is not configured
Line 2476: Update meas pattern Neigh in IntraFreq
Line 2554: index(%d), earfcn:%d, mID:%d
Line 2558: Remove MeasList(mID:%d, earfcn:%d)
Line 2565: pTempElem is NULL
Line 2569: not matched MeasList(mID:%d, earfcn:%d)
Line 2579: Cannot Allocate FreqInfo buffer(%d)
Line 2618: SCell cycle : Srch(%d), Meas(%d)
Line 2641: Warning! eICIC bitsize(%d) not compatible with spec (20/40/60/70)
Line 2645: measSubframePatternNeigh(SCell): eICIC mode(%d), bitsize(%d)
Line 2650: Warning! measSubframeCellList is not configured
Line 2658: Update meas pattern Neigh in pFreqInfo for SCell
Line 2743: pFreqInfo NULL
Line 2754: Cannot Allocate FreqInfo buffer(%d)
Line 2789: SCell cycle : Srch(%d), Meas(%d)
Line 2812: Warning! eICIC bitsize(%d) not compatible with spec (20/40/60/70)
Line 2816: measSubframePatternNeigh(intER): eICIC mode(%d), bitsize(%d)
Line 2821: Warning! measSubframeCellList is not configured
Line 2905: pFreqInfo NULL
Line 2915: Cannot Allocate FreqInfo buffer(%d)
Line 2986: pFreqInfo NULL
Line 2997: Cannot Allocate FreqInfo buffer(%d)
Line 3040: pCellInfo is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 3094: pFreqInfo NULL
Line 3105: Cannot Allocate FreqInfo buffer(%d)
Line 3136: object->num_of_neigh_cells(%d)
Line 3141: cdma2000_cell_id(%d)
Line 3368: LTE_MEAS_EUTRA_OBJECT (MeasId :%d Obj ID: %d Obj type: %d freq: %d RSRQ-WB:(%d) Sfreq: %d)
Line 3392: in LTERRM.Set.pSCellMeasList(%d)(earfcn=%d)
Line 3420: LTE_MEAS_UTRA_OBJECT (MeasId :%d Obj ID: %d Obj type: %d(%d) freq: %d Sfreq: %d)
Line 3431: LTE_MEAS_GERAN_OBJECT (MeasId :%d Obj ID: %d Obj type: %d freq: %d Sfreq: %d)
Line 3441: LTE_MEAS_CDMA_OBJECT (MeasId :%d Obj ID: %d Obj type: %d(%d) freq: %d Sfreq: %d)
Line 3467: pCurElem(%d) or obj(%d) is NULL
Line 3490: LteRrmConn_CastEventTriggerType rpt is NULL
Line 3521: UnKnown Cast Type(%d)
Line 3546: LteRrmConn_CastIratEventTriggerType rpt is NULL
Line 3574: UnKnown Cast Type(%d)
Line 3599: LteRrmConn_CastTriggerQuantity rpt is NULL
Line 3615: UnKnown Cast Type(%d)
Line 3639: LteRrmConn_CastReportQuantity rpt is NULL
Line 3661: UnKnown Cast Type(%d)
Line 3685: LteRrmConn_CastReportPurpose rpt is NULL
Line 3698: UnKnown Cast Type(%d)
Line 3761: LteRrmConn_CastIratReportPurpose rpt is NULL
Line 3777: UnKnown Cast Type(%d)
Line 3801: pCurElem(%d), rpt(%d) is NULL
Line 3816: add earfcn(%d_%d) report_add_neigh_meas(%d) TxDiff(%d) Rpt Config
Line 3825: - alt_time_to_trigger_setup(%d) alt_time_to_trigger(%d)
Line 3833: add SCell(%d) Rpt Config
Line 3838: maxReportCells:%d, reportInterval:%d, reportAmount:%d, triggerQuantity:%d, reportQuantity:%d
Line 3846: rpt_id:%d, eventId:%d, hysteresis:%d, timeToTrigger:%d
Line 3862: report_sstd_meas:1
Line 3867: eNB error! report_sstd_meas:1 but need to check belows
Line 3868: - report_amount(%d), trigger_choice(%d), purpose(%d)
Line 3881: MeasRSSI-ReportConfig: channelOccupancyThresh(%d)
Line 3908: LTERRM_EVENT_A1: threshold_type(%d) is invalid
Line 3915: A1 threshold type:%d, A1 threshold value:%d
Line 3938: LTERRM_EVENT_A2: threshold_type(%d) is invalid
Line 3945: A2 threshold type:%d, A2 threshold value:%d
Line 3951: A3 offset:%d*0.5
Line 3955: usePSCell:%d
Line 3985: LTERRM_EVENT_A4: threshold_type(%d) is invalid
Line 3992: A4 threshold type:%d, A4 threshold value:%d
Line 4019: LTERRM_EVENT_A5: threshold_type(%d) is invalid
Line 4046: LTE_MEAS_UTRA: threshold_type(%d) is invalid
Line 4053: A5 threshold type1:%d, A5 threshold value1:%d, A5 threshold type2:%d, A5 threshold value2:%d
Line 4059: usePSCell:%d
Line 4071: A6 offset:%d*0.5
Line 4077: periodical report purpose:%d
Line 4102: pCurElem(%d), rpt(%d) is NULL
Line 4112: maxReportCells:%d, reportInterval:%d, reportAmount:%d
Line 4152: rpt_id:%d, eventId:%d, hysteresis:%d, timeToTrigger:%d
Line 4179: LTE_MEAS_UTRA: threshold_type(%d) is invalid
Line 4193: LTE_MEAS_UTRA: B1 rat_type:%d, threshold type:%d, B1 threshold value:%d
Line 4202: LTE_MEAS_GERAN: B1 threshold type:%d, B1 threshold value:%d
Line 4210: LTE_MEAS_CDMA2000: B1 threshold value:%d
Line 4271: LTERRM_EVENT_B2: threshold_type(%d) is invalid
Line 4278: B2 threshold1 type:%d, B2 threshold1 value:%d
Line 4298: LTE_MEAS_UTRA: threshold_type(%d) is invalid
Line 4312: LTE_MEAS_UTRA: B2 rat_type:%d, threshold2 type:%d, B2 threshold2 value:%d
Line 4321: LTE_MEAS_GERAN: B2 threshold2 type:%d, B2 threshold2 value:%d
Line 4328: LTE_MEAS_CDMA2000: B2 threshold2 value:%d
Line 4402: IRAT periodical report purpose:%d
Line 4491: pCurElem(%d) or rpt(%d) is NULL
Line 4521: Cannot Allocate MeasList buffer
Line 4535: LteRrmConn_AddMeasList obj(%d) or rpt(%d) is NULL
Line 4559: LteRrmConn_RemoveMeasList pMeasList is NULL
Line 4600: - Timing info not sufficient --> SSTD report is pending
Line 4630: - Timing info not sufficient --> SSTD report is pending
Line 4659: - Timing info not sufficient --> SSTD report is pending
Line 4677: LteRrmConn_UpdateSstdState: Init reportSstd
Line 5334: LteRrmConn_UpdateMeasScheduleVariable(DrxEnable:%d, DrxCycle:%d, N_freq:%d)
Line 5340: N_freq info. - ScellFreqNum:%d, InterFreqNum:%d, UtraFreqNum:%d, CdmaFreqNum:%d, M_gsm:%d)
Line 5350: Conn DRX ignored : invalid DRX cycle (%d ms)
Line 5431: invalid GAP pattern :%d
Line 5482: Invalid mode drxEnable:%d, GapInfo->gapStatus:%D
Line 5540: LteRrmConn_UpdateMeasConfig msg is NULL
Line 5580: [MEAS CONFIG 1st] Remove MeasId
Line 5590: [MEAS CONFIG 2nd] Arrange MeasId
Line 5599: [MEAS CONFIG 3rd] Add MeasId
Line 5616: IntraFreq NULL
Line 5621: num_start_meas_ids is zero!!
Line 5634: Number of carriers other than GSM: %d
Line 5638: Number of carriers other than GSM is not required!!!(%d -> 5)
Line 5655: rsrqOnAllSymbols-r12 enable
Line 5675: quantityConfigEUTRA - fc_rsrp:%d, fc_rsrq:%d, fc_rssinr:%d
Line 5685: quantityConfigUTRA - measQuantity:%d, fc:%d
Line 5695: quantityConfigGERAN - measQuantity:%d, fc:%d
Line 5703: quantityConfigCDMA - measQuantity:%d
Line 5819: speedDepParam received
Line 5820: - t_eval(%d) t_hyst(%d), nMed(%d), nHigh(%d)
Line 5859: ConnMeasConfig.sMeasure:%d, fc_rsrp:%d, filter_alpha_rsrp:%d
Line 5900: LteRrmConn_ProcMeasConfigReq msg is NULL
Line 5904: Receive LTE_CPHY_MEAS_CONF_REQ Msg(removeMID num:%d, addMID num:%d)
Line 5938: LteRrmConn_AddCsgProximityMeasList eutra_meas_list is NULL
Line 5943: Receive LteRrmConn_AddCsgProximityMeasList(), eutra_list_size:%d
Line 5950: EARFCN:%d, AntNum:%d, MeasBw:%d, CSG Cell Num:%d
Line 5957: num of IntraFreq(earfcn:%d) CSG Cell: %d
Line 5966: num of IntraFreq(earfcn:%d) CSG Cell: %d
Line 5984: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 5993: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 6010: pFreqInfo NULL
Line 6021: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 6030: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 6064: LteRrmConn_AddCsgProximityMeasList eutra_meas_list is NULL
Line 6069: Receive LteRrmConn_AddCsgProximityUtraMeasList(), utra_list_size:%d
Line 6076: UARFCN:%d, CSG Cell Num:%d
Line 6085: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 6094: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 6108: Cannot Allocate FreqInfo buffer
Line 6120: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 6129: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 6156: LteRrmConn_UpdateCsgProximityMeasConfig msg is NULL
Line 6161: Receive LteRrmConn_UpdateCsgProximityMeasConfig()
Line 6243: LteRrmConn_ProcCsgProximityMeasConfigReq msg is NULL
Line 6248: Receive LTE_CPHY_CSG_PROXIMITY_MEAS_REQ Msg
Line 6286: IntraMeasList
Line 6290: SCellMeasList
Line 6294: InterMeasList
Line 6298: pPSCellMeasList
Line 6302: gpInterRATMeas
Line 6307: ObjId : %d , earfcn : %d
Line 6335: Skip fast search
Line 6402: LteRrmConn_CheckSMeasure: PrimaryCell is NULL
Line 6409: Skip s-Measure check <- bUtraForcedMeas(1)
Line 6425: LteRrmConn_CheckSMeasure: cinr(%d) < 0
Line 6430: LteRrmConn_CheckSMeasure: cinr(%d) < 5, rsrp < smeasure+10
Line 6482: measTrig[%d] LastMeasTime:%d, curTimeInMs:%d, interval:%d, cycle:%d
Line 6509: Intra Freq Measure is already exist!!!
Line 6515: LteRrmConn_CheckIntraFreqMeas: CONN_ONLY_SERV(IntraFreq is NULL)
Line 6522: IntraMeasList(%d) is Empty
Line 6529: Intra Freq Measure is already exist!!!
Line 6535: LteRrmConn_CheckIntraFreqMeas: CONN_ONLY_SERV(IntraFreq is NULL)
Line 6542: LteRrmConn_CheckIntraFreqMeas: PrimaryCell is NULL
Line 6553: Intra Freq Measure is already exist!!!
Line 6559: LteRrmConn_CheckIntraFreqMeas: CONN_ONLY_SERV(sMeasure:%d, rsrp:%d)
Line 6572: - DMTC not occurred -> Trigger Serving Meas Only
Line 6589: SIM CHECKED : Don't Change Srch Cycle
Line 6604: srchCycle set to MIN_INTRA_SRCH_CYCLE(%d) (LteRrmConn_CheckPeriodicStrongestIntraFreqListInMeasConf is TRUE)
Line 6625: srchCycle set to MIN_INTRA_SRCH_CYCLE(%d) (max cinr:%d)
Line 6629: CheckMeasCycle: IntraFreq Search
Line 6632: CheckMeasCycle: IntraFreq Measure
Line 6637: Inter(%d)/SCell(%d) Freq Search is already exist!!!
Line 6645: Intra Freq Search is already exist!!!
Line 6651: Intra Freq Measure is already exist!!!
Line 6741: IC srchCycle set to MIN_INTRA_SRCH_CYCLE(%d) (LteRrmConn_CheckPeriodicStrongestIntraFreqListInMeasConf is TRUE)
Line 6762: srchCycle set to MIN_INTRA_SRCH_CYCLE(%d) (max cinr:%d)
Line 6767: CheckMeasCycle: IntraFreq IC-Search
Line 6775: Intra(%d)/Inter(%d)/SCell(%d) Freq Search is already exist!!!
Line 6812: LteRrmConn_CheckSCellMeas 1: CONN_NONE
Line 6816: LteRrmConn_CheckSCellMeas - no SCellMeasList but SCellFreqSet
Line 6825: LteRrmConn_CheckSCellMeas 2: CONN_NONE
Line 6829: LteRrmConn_CheckSCellMeas - SCellMeasList but no SCellFreqSet
Line 6837: LteRrmConn_CheckSCellMeas 4: CONN_NONE
Line 6857: LteRrmConn_CheckSCellMeas 3: CONN_NONE
Line 6862: LteRrmConn_CheckSCellMeas : Scell is not configured
Line 6947: CheckMeasCycle: Secondary Cell Freq Search
Line 6952: SCell search skip - Intra(%d)/Inter(%d)/Scell(%d) Freq Search already scheduled!!!
Line 6960: CheckMeasCycle: Secondary Cell Freq Measure
Line 6965: Secondary Cell Freq Measure is already exist!!!
Line 7027: LteRrmConn_CheckInterFreqMeas 1: noGAP & ScellScheduled
Line 7034: LteRrmConn_CheckInterFreqMeas 1: noGAP & ScellScheduled
Line 7039: LteRrmConn_CheckInterFreqMeas : noGAP & noScellScheduled
Line 7045: LteRrmConn_CheckInterFreqMeas 2: noGAP & InterFreqScheduled
Line 7050: LteRrmConn_CheckInterFreqMeas : noGAP & noInterFreqScheduled
Line 7060: DMTC meas scheduled -> Gap meas for inter-freq suspended
Line 7067: LteRrmConn_CheckInterFreqMeas : GAP & noScellScheduled
Line 7075: LteRrmConn_CheckInterFreqMeas 3: CONN_NONE
Line 7144: CheckMeasCycle: InterFreq Search
Line 7149: InterFreq Search is already scheduled!!!
Line 7155: LteRrmConn_CheckInterFreqMeas : IntraFreq Search is already scheduled
Line 7159: CheckMeasCycle: InterFreq Measure
Line 7164: InterFreq Measure is already exist!!!
Line 7252: CONN_NONE: gap(%d), conn drx(%d)
Line 7296: CheckMeasCycle: Utra Search
Line 7300: CheckMeasCycle: Utra Measure
Line 7305: Utra Search/Measure is already exist!!!
Line 7374: CONN_NONE: gap(%d), conn drx(%d)
Line 7424: CheckMeasCycle: Geran Identify
Line 7469: CheckMeasCycle: Geran Measure(cycle:%d, M_gsm:%d)
Line 7474: CheckMeasCycle: Geran Verify
Line 7479: Geran Measure is already exist!!!
Line 7485: Geran Verify is already exist!!!
Line 7541: CdmaSystemTimeFlag(%d) is not valid, Not schedule CDMA meas.
Line 7563: CONN_NONE: gap(%d), conn drx(%d)
Line 7574: CheckMeasCycle: Cdma Measure
Line 7579: Cdma Measure is already exist!!!
Line 7720: Conn Intra-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
Line 7809: Conn Intra(earfcn:%d) IC search starts
Line 7858: Conn Scell-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
Line 7890: LteRrmConn_StartScellMeasOperation : Scell is NULL
Line 7898: LteRrmConn_StartScellMeasOperation : Scell(%d) has correct timing info(%d, CINR=%d)
Line 7906: LteRrmConn_MeasListFindEarfcn : ScellMeasList is NULL, pTempMeasFreq->earfcn(%d)
Line 7924: WARNING: NOT Supported DL_EARFCN %d!!!
Line 7964: Block Meas for U-band deactivated SCell (earfcn:%d, measDS_setup:0)
Line 7978: ConnSchedule.pCurSrchSCellFreq NULL
Line 7999: WARNING: NOT Supported DL_EARFCN %d!!!
Line 8019: Offer SCC meas opportunity to LAA scheduler
Line 8048: Block Meas for U-band deactivated SCell (earfcn:%d, measDS_setup:0)
Line 8062: ConnSchedule.pCurMeasSCellFreq NULL
Line 8092: Start Measurement: Scell Frequency (earfcn:%d, mode:%d)
Line 8116: Warning!! invalid MeasType(%d) - LteRrmConn_StartScellMeasOperation
Line 8131: SCell(earfcn=%d) is activated then use SCC RF path (suspendforTx:%d)
Line 8135: SCell(earfcn=%d) is configured
Line 8143: ScellInitSrchCnt(%d)
Line 8226: [SCELL]invalid MeasType(%d)
Line 8245: [SCELL]invalid MeasType(%d)
Line 8280: Warning!! SCellMeasList(0x%X) NULL or empty - LteRrmConn_StartLaaScellMeasOperation
Line 8284: Warning!! - no SCellMeasList but SCellFreqSet
Line 8292: Warning!! SCellFreqSet(0x%X) NULL or empty - LteRrmConn_StartLaaScellMeasOperation
Line 8296: Warning!! - no SCellFreqSet but SCellMeasList
Line 8305: no gap and ongoingSrchInterFlag(%d) or ongoingMeasInterFlag(%d)
Line 8311: Warning!! Scell is not configured
Line 8319: LAA SCell meas skip - Intra(%d)/Inter(%d)/Scell(%d) Search or SCell Meas(%d) already scheduled!!!
Line 8353: gLteRrm_ConnSchedule.laaScellFreqLastMeasTime:%d
Line 8366: CheckMeasCycle: LAA SCell Freq Search/Measure
Line 8374: Conn LAA Scell-SelectedMode(%d), Srch/Meas Cycle(%d)
Line 8394: WARNING: NOT Supported DL_EARFCN %d!!!
Line 8412: Warning!! DMTC is not set up for LAA SCell(%d)
Line 8422: ConnSchedule.pCurMeasLaaSCellFreq NULL
Line 8432: Start Measurement: LAA Scell Frequency (earfcn:%d, mode:%d)
Line 8442: SCell(earfcn=%d) is activated then use SCC RF path (suspendforTx:%d)
Line 8446: SCell(earfcn=%d) is configured
Line 8488: LAA SCell MeasType(%d)
Line 8498: ConnSchedule.laaScellFreqLastMeasTime:%d
Line 8520: [SCELL]invalid MeasType(%d)
Line 8562: Conn Inter-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
Line 8579: WARNING: NOT Supported DL_EARFCN %d!!!
Line 8615: ConnSchedule.pCurSrchInterFreq NULL
Line 8639: WARNING: NOT Supported DL_EARFCN %d!!!
Line 8668: ConnSchedule.pCurMeasInterFreq NULL
Line 8726: this freq(earfcn:%d_%d) need GAP(%d) to search/meas. - skip
Line 8733: this freq(earfcn:%d_%d) need SCC path(%d) to search/meas. - skip
Line 8745: this freq(earfcn:%d_%d) need GAP to search/meas. - change MeasType(%d)
Line 8751: this freq(earfcn:%d_%d) need GAP(%d) to search/meas. - change
Line 8757: Start Measurement: Inter Frequency (earfcn:%d, measmode:%d)
Line 8867: [INTER] invalid MeasType(%d)
Line 8916: All SCC activated - Skip LAA inter meas
Line 8923: Scell srch(%d) meas(%d) already scheduled!!! - Skip LAA inter meas
Line 8932: Inter with SCC srch(%d) meas(%d) already scheduled!!! - Skip LAA inter meas
Line 8940: Intra(%d)/Inter(%d)/Scell(%d) Search already scheduled!!! - Skip LAA inter meas
Line 8984: ConnSchedule.laaInterFreqLastMeasTime:%d
Line 9002: CheckMeasCycle: LAA InterFreq Search
Line 9050: Warning!! DMTC is not set up for B46 LAA inter-freq(%d)
Line 9060: ConnSchedule.pCurMeasLaaInterFreq NULL
Line 9069: Start Measurement: LAA Inter Frequency (earfcn:%d, measmode:%d)
Line 9125: ConnSchedule.laaInterFreqLastMeasTime:%d
Line 9147: Warning! invalid measMode(%d)
Line 9187: Conn Utra-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
Line 9196: warring: ConnSchedule.pCurSrchUtraFreq NULL
Line 9224: ConnSchedule.pCurMeasUtraFreq NULL
Line 9236: warring: ConnSchedule.pCurSrchUtraFreq NULL
Line 9264: Start Measurement: Utra Frequency (earfcn:%d, mode:%d) - SrchCnt(%d)
Line 9337: Conn Geran-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
Line 9363: warring: ConnSchedule.pCurIdentifyGeranFreq NULL
Line 9395: ConnSchedule.pCurMeasGeranFreq NULL
Line 9436: ConnSchedule.pCurVerifyGeranFreq NULL
Line 9467: Start Measurement: Geran Frequency (earfcn:%d, mode:%d)
Line 9537: Conn CDMA-SelectedMode(%d), MeasCycle(%d)
Line 9561: ConnSchedule.pCurMeasCdmaFreq NULL
Line 9569: MeasMode is invalid(%d)
Line 9573: Start Measurement: Cdma Frequency (earfcn:%d, mode:%d)
Line 10088: LteRrmConn_ongoingSrchIntraFlag(%d -> %d)
Line 10091: LteRrmConn_ongoingMeasIntraFlag(%d -> %d)
Line 10095: LteRrmConn_ongoingSrchIntraFlag(%d -> %d)
Line 10099: LteRrmConn_ongoingMeasIntraFlag(%d -> %d)
Line 10103: LteRrmConn_ongoingSrchInterFlag(%d -> %d)
Line 10106: LteRrmConn_ongoingMeasInterFlag(%d -> %d)
Line 10110: LteRrmConn_ongoingSrchInterFlag(%d -> %d)
Line 10119: LteRrmConn_ongoingMeasInterFlag(%d -> %d)
Line 10128: LteRrmConn_ongoingMeasGeranFlag(%d -> %d)
Line 10131: LteRrmConn_ongoingVerifyGeranFlag(%d -> %d)
Line 10135: LteRrmConn_ongoingMeasGeranFlag(%d -> %d)
Line 10139: LteRrmConn_ongoingVerifyGeranFlag(%d -> %d)
Line 10145: LteRrmConn_ongoingSrchMeasUtraFlag(%d -> %d)
Line 10149: LteRrmConn_ongoingMeasCdmaFlag(%d -> %d)
Line 10153: LteRrmConn_ongoingSrchSCellFlag(%d -> %d)
Line 10156: LteRrmConn_ongoingMeasScellFlag(%d -> %d)
Line 10160: LteRrmConn_ongoingSrchSCellFlag(%d -> %d)
Line 10164: LteRrmConn_ongoingMeasScellFlag(%d -> %d)
Line 10168: LteRrmConn_ongoingNoGapSCellFlag(%d -> %d)
Line 10222: LteRrmConn_SetOnUsingSccFlag(%d -> %d)
Line 10227: LteRrmConn_SetOnUsingSccFlag(%d -> %d)
Line 10260: LteRrmConn_GetTimeToTriggerListIndex pMeas(0x%X)/pCell(0x%X) is NULL
Line 10275: nCell(arfcn:%d, cell_id:%d) is not found in TimeToTriggerList(mID:%d).
Line 10302: LteRrmConn_AddTimeToTriggerList pMeas(0x%X)/pCell(0x%X) is NULL
Line 10317: TimeToTrigger Set(mID(%d), rID(%d), Arfcn(%d), Cell(%d)) start(%d)
Line 10325: Report status index is FULL!!!
Line 10351: LteRrmConn_RemoveTimeToTriggerList pMeas(0x%X)/pCell(0x%X) is NULL
Line 10402: alt_time_to_trigger(%d) is applied
Line 10426: Invalid mobility state
Line 10460: LteRrmConn_CheckTriggerTimerExpired pMeas is NULL
Line 10466: LteRrmConn_CheckTriggerTimerExpired: PrimaryCell is NULL
Line 10490: TimeToTrigger Expired(time_to_trigger:0)(mID(%d), rID(%d))
Line 10508: Fast MR(%d):Rsrq diff:%d(mID(%d), rID(%d))
Line 10528: Fast MR(%d):Rsrq:%d(mID(%d), rID(%d))
Line 10557: [VzW] Fast MR(%d):Rsrq:%d_%d, CINR:%d, siAdvancedTimeToTrigger:(%d), siAdvancedTimeToTrigger_Inst:(%d), (mID(%d))
Line 10576: TimeToTrigger status(mID(%d), rID(%d)) start(%d) current(%d), timeDiff(%d), ScaledTTT(%d)
Line 10583: TimeToTrigger Expired(mID(%d), rID(%d)) start(%d) stop(%d) offset(%d)
Line 10614: LteRrmConn_CheckLeaveTimerExpired pMeas is NULL
Line 10648: LeaveTime Expired(mID(%d), rID(%d)) start(%d) stop(%d) offset(%d) scaledTTT(%d)
Line 10715: LteRrmConn_RemoveCellInReportList(measId:%d)
Line 10771: LteRrmConn_RemoveCellInReportList(). pMeas is NULL
Line 10797: LteRrmConn_RemoveCellInTriggeredList FreqInfo(%d) or CellInfo(%d) is NULL
Line 10815: LteRrmConn_RemoveCellInTriggeredList -SCellMeasList
Line 10839: Invalid RAT Type(%d)
Line 10848: LteRrmConn_RemoveCellInTriggeredList(earfcn:%d, cell_id:%d)
Line 10861: Removed cell(earfcn:%d, id:%d) is in reportList[%d](numOfCellsInRportList:%d)
Line 10879: pCurMeas is NULL
Line 10921: LteRrmConn_MakeEutraReportMsg pMeas is NULL
Line 10927: Serving Cell(%d) == SupportPci(%d), No LTE measurement report sent to network
Line 11017: [%d] SCell(earfcn:%d, PCID:%d) is involved
Line 11019: SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
Line 11028: report_add_neigh_meas is started
Line 11041: report_add_neigh_meas is involved
Line 11043: SCell's Ncell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
Line 11052: report_add_neigh_meas is not involved
Line 11064: report_add_neigh_meas is not involved
Line 11235: NCell_ID(%d) RSRP(%d) is discarded 
Line 11240: Pcell(%d) is discarded 
Line 11246: Scell(%d) is discarded 
Line 11372: LteRrmConn_MakeEutraReportMsg: MeasID(%d) objID(%d) rptID(%d) Event ID(A%d) FastMR(%d) removePeriodicMeas(%d)
Line 11376: PCell : ID(%d) RSRP(%d) RSRQ(%d) TxDiff(%d) NumCell(%d) Sent(%d)
Line 11385: Idx(%d) NCell_ID(%d) RSRP(%d)
Line 11393: [%2d] SCell : ID(%d) RSRP(%d) RSRQ(%d)
Line 11398: [%2d] SCell's Ncell : Cell ID(%d) RSRP(%d) RSRQ(%d)
Line 11407: report_sstd_meas(1) sfnOffset(%d) frameBoundaryOffset(%d) subframeBoundaryOffset(%d)
Line 11469: LteRrmConn_MakeUtraReportMsg pMeas is NULL
Line 11475: Serving Cell(%d) == SupportPci(%d), No UMTS measurement report sent to network
Line 11569: [%d] SCell(earfcn:%d, PCID:%d) is involved
Line 11571: SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
Line 11580: report_add_neigh_meas is started
Line 11593: report_add_neigh_meas is involved
Line 11595: SCell's Ncell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
Line 11604: report_add_neigh_meas is not involved
Line 11616: report_add_neigh_meas is not involved
Line 11660: fdd trigger(%d) - LTE_MEAS_UTRA_FDD_CPICH_BOTH
Line 11664: fdd trigger(%d), quantityUtra(%d)
Line 11676: Make UTRAN Meas. Report_Trigger type(%d)
Line 11698: Trigger value is strange
Line 11712: rat_type(%d), measured_rscp(%d), filtered_rsrp(%d), measured_EcNO(%d), filtered_rsrq(%d)
Line 11751: LteRrmConn_MakeUtraReportMsg: MeasID(%d) objID(%d) rptID(%d) removePeriodicMeas(%d)
Line 11753: Event ID(B%d) PCell_ID(%d) RSRP(%d) NumCell(%d) Sent(%d)
Line 11761: Idx(%d) NCell_ID(%d) fdd_trigger(%d), measured_rscp(%d), measured_EcNO(%d), measured_tdd_rscp(%d)
Line 11799: LteRrmConn_MakeGeranReportMsg pMeas is NULL
Line 11805: Serving Cell(%d) == SupportPci(%d), No GSM measurement report sent to network
Line 11884: [%d] SCell(earfcn:%d, PCID:%d) is involved
Line 11886: SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
Line 11895: report_add_neigh_meas is started
Line 11908: report_add_neigh_meas is involved
Line 11910: SCell's Ncell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
Line 11919: report_add_neigh_meas is not involved
Line 11931: report_add_neigh_meas is not involved
Line 12016: LteRrmConn_MakeGeranReportMsg: MeasID(%d) objID(%d) rptID(%d) removePeriodicMeas(%d)
Line 12018: Event ID(B%d) PCell_ID(%d) RSRP(%d) NumCell(%d) Sent(%d)
Line 12026: Idx(%d) geran_arfcn_value(%d) bandIndicator(%d), network_colour_code(%d), base_station_colour_code(%d), rssi(%d)
Line 12063: LteRrmConn_MakeCdmaReportMsg pMeas is NULL
Line 12069: Serving Cell(%d) == SupportPci(%d), No CDMA measurement report sent to network
Line 12149: [%d] SCell(earfcn:%d, PCID:%d) is involved
Line 12151: SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
Line 12160: report_add_neigh_meas is started
Line 12173: report_add_neigh_meas is involved
Line 12175: SCell's Ncell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
Line 12184: report_add_neigh_meas is not involved
Line 12196: report_add_neigh_meas is not involved
Line 12289: LteRrmConn_MakeCdmaReportMsg: MeasID(%d) objID(%d) rptID(%d) removePeriodicMeas(%d)
Line 12291: Event ID(B%d) PCell_ID(%d) RSRP(%d) NumCell(%d) Sent(%d)
Line 12300: Idx(%d) NCell_ID(%d) pilot_Strength(%d), pilotPnPhase(%d)
Line 12795: LteRrmConn_CheckServingCellEventTrigger pMeas(%d) or pSCell(%d) is NULL
Line 12812: block Event A1(mID:%d) for Scell(earfcn:%d, rsrp=%d, rsrq=%d) due to non-search result
Line 12986: LteRrmConn_CheckNCellEventTrigger pMeas(%d) or pNCell(%d) is NULL
Line 13004: Event=SCell_Config(mID:%d, earfcn:%d)
Line 13015: block Event(%d, mID:%d) for Scell(earfcn:%d, rsrp=%d, rsrq=%d) due to non-search result
Line 13029: Event(%d) SCell(%d) would not be considered as Ncell
Line 13038: usePSCell(%d) -> use PSCell(%d,%d) instead of PCell
Line 13067: SCell(earfcn:%d, PCID:%d) could not found
Line 13083: EVENT_A6(SCell_ID:%d, RSRP:%d, RSRQ:%d RSSINR:%d )(NCell_ID:%d)
Line 13129: NRsrp(%d) NFreqOff(%d) NIndOff(%d)
Line 13130: MnPlusOffset(%d) - Hys(%d)/2 > Ms(%d) + FreqOff(%d) + IndOff(%d) + A3Off(%d)/2 
Line 13143: NRsrp(%d) NFreqOff(%d) NIndOff(%d)
Line 13144: MnPlusOffset(%d) + Hys(%d)/2 < Ms(%d) + FreqOff(%d) + IndOff(%d) + A3Off(%d)/2 
Line 13286: EVENT_A6 : MnPlusOffset(%d), Ms(%d), Mn(%d)
Line 13295: Enter : NRsrp(%d) NFreqOff(%d) NIndOff(%d)
Line 13296: MnPlusOffset(%d) - Hys(%d)/2 > Ms(%d) + NFreqoff(%d) + IndOff(%d) + A6Off(%d)/2
Line 13309: Leave : NRsrp(%d) NFreqOff(%d) NIndOff(%d)
Line 13310: MnPlusOffset(%d) + Hys(%d)/2 < Ms(%d) + NFreqOff(%d) + IndOff(%d) + A6Off(%d)/2 
Line 13317: Stay
Line 13345: NCell_ID(%d) RSRP(%d) is discarded 
Line 13388: LteRrmConn_CheckIratCellEventTrigger pMeas(%d) or pNCell(%d) is NULL
Line 13670: CDMA_EventB1: Mn(%d), offsetFreq(%d), hysteresis(%d),threshold_cdma(%d)
Line 13715: CDMA_EventB2: Ms(%d), hysteresis(%d), b2_threshold1(%d), Mn(%d), offsetFreq(%d), b2_threshold2_cdma(%d)
Line 13875: Warning! invalid RAT_type(%d)
Line 13904: LteRrmConn_CheckTimeToTrigger pMeas(0x%X)/pCell(0x%X) is NULL
Line 13915: (MID:%d, EARFCN:%d, PCID:%d) EVENT_A%d entering condition
Line 13942: LteRrmConn_CheckTimeToTrigger: Report status index is FULL!!!
Line 13948: (MID:%d, EARFCN:%d, PCID:%d) EVENT_A%d stay condition
Line 13974: (MID:%d, EARFCN:%d, PCID:%d) EVENT_A%d leaving condition
Line 14006: (MID:%d, EARFCN:%d, PCID:%d) PERIODIC REPORT entering condition
Line 14031: LteRrmConn_CheckTimeToTrigger: Report status index is FULL!!!
Line 14037: error in LteRrm_ProcServingMeasResult
Line 14065: LteRrmConn_CheckIratTimeToTrigger pMeas(0x%X)/pCell(0x%X) is NULL
Line 14075: (MID:%d, ARFCN:%d, PCID:%d) EVENT_%s entering condition
Line 14102: LteRrmConn_CheckIratTimeToTrigger(%d): Report status index is FULL!!!
Line 14107: (MID:%d, ARFCN:%d, PCID:%d) EVENT_B%d stay condition
Line 14132: (MID:%d, ARFCN:%d, PCID:%d) EVENT_B%d leaving condition
Line 14164: (MID:%d, ARFCN:%d, PCID:%d) IRAT PERIODIC REPORT entering condition
Line 14187: LteRrmConn_CheckIratTimeToTrigger(%d): Report status index is FULL!!!
Line 14192: error in LteRrm_ProcIterRatMeasResult
Line 14259: Invalid RAT Type(%d)
Line 14283: Until the satisfaction of leaving condition, Cell Drop is skipped!!! (RAT_type:%d, Arfcn:%d, CellID:%d)
Line 14316: LteRrmConn_CheckCSGProximityTimeToTrigger pFreqInfo is NULL
Line 14320: LteRrmConn_CheckCSGProximityTimeToTrigger(), EARFCN:%d, status:%d, eventTriggered:%d, 
Line 14429: LteRrmConn_UpdateVarMeasurementReports pMeas is NULL
Line 14436: pMeas->varMeasurementReports.numOfCellsInRportList ERROR (numOfCellsInRportList = %d)
Line 14446: EVENT_A%d entering (mID:%d) (Cell ID:%d)
Line 14468: LTERRM_PERIODIC_EUTRA entering (mID:%d) (Cell ID:%d)
Line 14491: EVENT_A%d leaving (mID:%d) (Cell ID:%d)
Line 14529: LteRrmConn_UpdateIratVarMeasurementReports pMeas is NULL
Line 14536: pMeas->varMeasurementReports.numOfCellsInRportList ERROR (numOfCellsInRportList = %d)
Line 14546: EVENT_B%d entering (mID:%d) (Cell ID:%d)
Line 14604: EVENT_B%d leaving (mID:%d) (Cell ID:%d)
Line 14949: LteRrmConn_UpdateCsgProximityMeasurementReports pFreqInfo is NULL
Line 14953: LteRrmConn_UpdateCsgProximityMeasurementReports(), RAT:%d, EARFCN:%d, proximity_ind:%d
Line 14981: ONLY CSG Proximity Measurement Report in LTE and UTRA. RAT:%d
Line 15093: LteRrmConn_ProcServingMeasResult pMeas is NULL
Line 15100: LteRrmConn_ProcServingMeasResult(%d)
Line 15133: SCell(earfcn:%d, PCID:%d) could not found
Line 15156: unknown CC(%d)
Line 15165: Illegal Modem Access on POWER OFF
Line 15200: LteRrmConn_ProcEutraMeasResult pMeas is NULL
Line 15356: Illegal Modem Access on POWER OFF
Line 15390: LteRrmConn_ProcInterRatMeasResult pMeas is NULL
Line 15420: Event%s - Status:%d, Triggered:%d (0:None, 1:Enter, 2:Stay, 3:Leave, 4:Periodic)
Line 15493: timeToTriggered(MID:%d, arfcn:%d, cell_id:%d, timeDiff:%d, scaled TTT:%d)
Line 15541: timeToTriggered(MID:%d, arfcn:%d, cell_id:%d, timeDiff:%d, scaled TTT:%d)
Line 15692: Forced measTrig[TRUE] due to TimeToTrigger - RAT_type(%d), mID(%d), cell_id(%d), ScaledTTT(%d), timeDiff(%d), offset(%d)
Line 15714: Forced measTrig[TRUE] due to LeaveTime - RAT_type(%d), mID(%d), cell_id(%d), TTT(%d), timeDiff(%d), offset(%d)
Line 15776: LteRrmConn_CheckReportAndStartConnDrx: PrimaryCell is NULL
Line 15804: NCell_RSRP(%d) > PCell_RSRP(%d) or NCell_L3_RSRP(%d) > PCell_L3_RSRP(%d) or NCell_L3_RSRQ(%d)> PCell_L3_RSRQ(%d) or CINR(%d)<0
Line 15808: isStrongNcell Conn DRX will stop(a3_offset_for_cdrx_skip:%d)
Line 15814: CINR low(%d) Conn DRX will stop
Line 15863: AvgMeasureTimeDuringConnDrx(%d ms)
Line 15866: MeasureTimeDuringConnDrx(%d ms)(%d, %d)
Line 15875: Conn Drx Skip(isLastMeas:%d, reportTriggered:%d, ConnDrxCycle:%d, CgiState:%d)
Line 15908: LteRrmConn_ProcProximityIntraMeasResult()
Line 15934: CSG Proximity Check ==> EARFCN:%d, CellID:%d, RSRP:%d, THRESHOLD:%d
Line 15943: CSG Proximity EventTriggered ==> EARFCN:%d, CellID:%d, RSRP:%d, THRESHOLD:%d
Line 15982: CSG Proximity Check ==> EARFCN:%d, CellID:%d, RSRQ:%d, THRESHOLD:%d
Line 15991: CSG Proximity EventTriggered ==> EARFCN:%d, CellID:%d, RSRQ:%d, THRESHOLD:%d
Line 16036: LteRrmConn_ProcProximtiyInterMeasResult()
Line 16071: CSG Proximity Check ==> EARFCN:%d, CellID:%d, RSRP:%d, THRESHOLD:%d
Line 16080: CSG Proximity EventTriggered ==> EARFCN:%d, CellID:%d, RSRP:%d, THRESHOLD:%d
Line 16118: CSG Proximity Check ==> EARFCN:%d, CellID:%d, RSRQ:%d, THRESHOLD:%d
Line 16127: CSG Proximity EventTriggered ==> EARFCN:%d, CellID:%d, RSRQ:%d, THRESHOLD:%d
Line 16185: LteRrmConn_ProcProximityUtraMeasResult()
Line 16222: CSG Proximity Utra Check ==> UARFCN:%d, CellID:%d, RSCP:%d, THRESHOLD:%d
Line 16232: CSG Proximity Utra EventTriggered ==> UARFCN:%d, CellID:%d, RSCP:%d, THRESHOLD:%d
Line 16271: CSG Proximity Utra Check ==> UARFCN:%d, CellID:%d, EcNO:%d, THRESHOLD:%d
Line 16281: CSG Proximity Utra EventTriggered ==> UARFCN:%d, CellID:%d, EcNO:%d, THRESHOLD:%d
Line 16411: Illegal search result : earfcn(%d), cell ID(%d), time_offset(%d), search_frame_position(%d)
Line 16420: No update search result : earfcn(%d), cell_id(%d) is already triggered in list
Line 16425: No update search result : abnormal search frame position (earfcn(%d), cell_id(%d), timeoffset(%d), index(%d), search_position(%d))
Line 16460: LteRrmConn_ProcMeasResult pMsg is NULL
Line 16464: LteRrmConn_ProcMeasResult:IsCellOnly(%d), IsLastMeas(%d)
Line 16468: LteRrmConn_ProcMeasResult ignore: ConnMeasEnable is FALSE
Line 16480: LteRrmConn_ProcMeasResult is FAIL
Line 16569: LTERRM.Set.pIntraMeasList is empty(meas mode:%d)
Line 16605: Set intraFreqLastIcSrchTime(%d) firstIntraSrchDone(1)
Line 16622: measmode(%d)-InterFreq Srch
Line 16633: measmode(%d)-Scell Srch
Line 16643: measmode(%d)-InterFreq Meas
Line 16654: measmode(%d)-Scell Meas
Line 16730: measmode(%d)-InterFreq Srch
Line 16741: measmode(%d)-Scell Srch
Line 16753: measmode(%d)-InterFreq Meas
Line 16764: measmode(%d)-Scell Meas
Line 16778: earfcn(%d) measmode(%d)-invalid result
Line 16796: [CHECK] LteRrmConn_ProcMeasResult_Scell is NULL(earfcn=%d, index:%d)
Line 16958: CDMA Measure Result
Line 16971: LteRrmConn_ProcInterRatMeasResult
Line 17072: DoSrchForCgi-Intra
Line 17081: DoSrchForCgi-Inter
Line 17088: DoSrchForCgi-Scell
Line 17110: LTERRM_SRCHMODE_CGI_CHANGE
Line 17116: LTERRM_SRCHMODE_CGI_SRCH
Line 17133: Cannot find freq, freq_found(%d), earfcn (%d)
Line 17152: saved serving BW(%d)
Line 17156: CGI srch start (CGI Earfcn=%d)
Line 17169: Invalid CGI meas type : %d
Line 17213: LteRrm_AllocCellInfoBuf: TargetCell
Line 17217: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 17229: please check: PrimaryCell is NULL!!
Line 17244: CGI stop, Return ! (earfcn=%d, cell id=%d, CGI Earfcn=%d)
Line 17303: CGI MeasResult Mid(%d) S_Rsrp(%d) S_Rsrq(%d) C_Rsrp(%d) C_Rsrq(%d)
Line 17334: LteRrmConn_UpdateMeasCgiConfig cgi_req is NULL
Line 17349: UMTS SI_AcquisitionForHO(MID:%d)
Line 17354: UMTS IRAT CGI is configured(MID:%d)
Line 17364: GSM IRAT CGI is configured(MID:%d)
Line 17374: CDMA IRAT CGI is configured(MID:%d)
Line 17381: IRAT CGI MeasList NULL
Line 17394: CGI change State(%d -> LTERRM_CGI_SUSPENDED)
Line 17417: CGI pCurElem NULL
Line 17421: LTE CGI is configured(MID:%d, CgiMeasType:%d)
Line 17428: CGI object match fail (L1:%d,RRC:%d)
Line 17434: CGI To report object configured(%d,%d)
Line 17443: CGI change State(%d -> LTERRM_CGI_SUSPENDED)
Line 17449: CGI pCurElem->obj NULL (0x%x)
Line 17469: LteRrmConn_ProcMeasCgiReq msg is NULL
Line 17473: Receive LTE_CPHY_MEAS_CGI_CONF_REQ Msg
Line 17499: CGI change State(%d -> LTERRM_CGI_UMTS_AGAP_SEARCHING)
Line 17596: remove CGI SCell_MID(%d)
Line 17611: SCell(ID:%d, earfcn=%d is added in ScellmeasList
Line 17624: remove Utra_MID(%d)
Line 17642: remove Geran_MID(%d)
Line 17665: CGI change State(%d -> LTERRM_CGI_DEACTIVE)
Line 17707: LteRrmConn_ProcStopMeasCgiReq msg is NULL
Line 17712: Receive LTE_CPHY_MEAS_CGI_STOP_REQ Msg
Line 17718: IRAT CGI(CgiMeasType:%d) SUCCESS! change the state(%d -> LTERRM_CGI_REPORT)
Line 17727: IRAT CGI(CgiMeasType:%d) FAIL! change the state(%d -> LTERRM_CGI_REPORT)
Line 17732: CGI change State(%d -> LTERRM_CGI_REPORT)
Line 17738: CGI change State(%d -> LTERRM_CGI_STOP)
Line 17747: IRAT CGI(CgiMeasType:%d) HOLD! change the state(%d -> LTERRM_CGI_RETRY)
Line 17758: UTRA CGI using AGAP(CgiMeasType:%d) SUCCESS! change the state(%d -> LTERRM_CGI_REPORT)
Line 17765: UTRA CGI using AGAP(CgiMeasType:%d) FAIL! change the state(%d -> LTERRM_CGI_REPORT)
Line 17770: CGI change State(%d -> LTERRM_CGI_REPORT)
Line 17776: CGI change State(%d -> LTERRM_CGI_STOP)
Line 17783: Invalid irat_cgi_meas_result_state:%d, change the state(%d -> LTERRM_CGI_REPORT)
Line 17798: CGI change State(%d -> LTERRM_CGI_REPORT)
Line 17804: CGI change State(%d -> LTERRM_CGI_STOP)
Line 17821: CGI change State(%d -> LTERRM_CGI_REPORT)
Line 17827: CGI change State(%d -> LTERRM_CGI_STOP)
Line 17834: CGI change State(%d -> LTERRM_CGI_DEACTIVE)
Line 17854: CGI change State(%d -> LTERRM_CGI_WAITSIB1)
Line 17901: Invalid CGI State(%d -> LTERRM_CGI_DEACTIVE)
Line 17906: CGI change State(%d -> LTERRM_CGI_SEARCHING)
Line 17916: IRAT CGI srch start (CgiMeasType:%d)
Line 17922: Invalid CgiMeasType (%d)
Line 17924: CGI change State(%d ->LTERRM_CGI_DEACTIVE)
Line 17947: CgiFreqInfo is NULL
Line 17960: Start the procedure for utran CGI cell(Arfcn:%d, scrCode:%d) timing search
Line 17971: CGI change State(LTERRM_CGI_UMTS_AGAP_SEARCHING -> LTERRM_CGI_UMTS_AGAP_SFN_MIB)
Line 17979: CGI change State(LTERRM_CGI_UMTS_AGAP_SFN_MIB -> LTERRM_CGI_UMTS_AGAP_SIB)
Line 17996: Invalid CGI State(%d)
Line 18006: Invalid CGI Parameters(CgiMeasType:%d)
Line 18032: pFreqInfo is NULL
Line 18324: pFreqInfo is NULL
Line 18331: pMeasResult is NULL
Line 18352: Ncell (Cell ID:%d, RSRP=%d, RSRQ=%d RSSINR=%d)
Line 18395: pFreqInfo is NULL
Line 18402: pMeasResult is NULL
Line 18409: UTRAN RAT(LTERRM_ID_LISTED) enter!
Line 18433: RAT(UTRAN FDD. %d), Quantity(%d) is invalid
Line 18443: RAT(UTRAN TDD)
Line 18448: RAT(%d) is invalid
Line 18458: UTRAN Ncell(Candi List) (Cell ID:%d, RSCP=%d, EcNo=%d)
Line 18477: UTRAN RAT(LTERRM_CANDI_LISTED) enter!
Line 18501: RAT(UTRAN FDD. %d), Quantity(%d) is invalid
Line 18511: RAT(UTRAN TDD)
Line 18516: RAT(%d) is invalid
Line 18526: UTRAN Ncell(Candi List) (Cell ID:%d, RSCP=%d, EcNo=%d)
Line 18545: UTRAN RAT(LTERRM_UNID_LISTED) enter!
Line 18569: RAT(UTRAN FDD. %d), Quantity(%d) is invalid
Line 18579: RAT(UTRAN TDD)
Line 18584: RAT(%d) is invalid
Line 18594: UTRAN Ncell(UnID list) (Cell ID:%d, RSCP=%d, EcNo=%d)
Line 18613: UTRAN RAT(LTERRM_ID_DETECTED) enter!
Line 18637: RAT(UTRAN FDD. %d), Quantity(%d) is invalid
Line 18647: RAT(UTRAN TDD)
Line 18652: RAT(%d) is invalid
Line 18662: UTRAN Ncell(Detected list) (Cell ID:%d, RSCP=%d, EcNo=%d)
Line 18704: pFreqInfo is NULL
Line 18711: pMeasResult is NULL
Line 18717: GSM RAT(LTERRM_ID_LISTED) enter!
Line 18732: GERAN Ncell(ID List) arfcn:%d, RSSI=%d)
Line 18751: GSM RAT(LTERRM_CANDI_LISTED) enter!
Line 18766: GERAN Ncell(Candi List) arfcn:%d, RSSI=%d)
Line 18785: GSM RAT(LTERRM_UNID_LISTED) enter!
Line 18800: GERAN Ncell(UnID List) arfcn:%d, RSSI=%d)
Line 18819: GSM RAT(LTERRM_ID_DETECTED) enter!
Line 18834: GERAN Ncell(Detected List) arfcn:%d, RSSI=%d)
Line 18876: pFreqInfo is NULL
Line 18883: pMeasResult is NULL
Line 18942: LteRrm_SetNCellAllFreqSortedList pResult is NULL
Line 19100: UTRAN(%d) NumOfCell(%d)
Line 19144: GERAN NumOfCell(%d)
Line 19189: EHRPD NumOfCell(%d)
Line 19228: pNCellList is NULL
Line 19276: UTRA NCELL[%d] arfcn:%d, cell_id:%d, time_offset:%d
Line 19343: GERAN NCELL[%d] band_indicator:%d, arfcn:%d, bsic:%d
Line 19352: frameNumber:%d, Qb:%d, net_frameNumber:%d
Line 19385: NOT support the handover using cell change corresponding to RAT type(%d)
Line 19411: LteRrmConn_ProcAgapMeasReq msg is NULL
Line 19418: newCGIstate(%d) is not NONE for AGAP
Line 19434: FreqInfo is not existed for AGAP
Line 19443: cellInfo is not existed for AGAP
Line 19492: LteRrmConn_ProcCgiRepStopReq msg is NULL
Line 19496: Receive LTE_CPHY_MEAS_CGI_STOP_REQ Msg
Line 19598: Scell(%d) is deactivated from timer
Line 19712: Warning!! no matched pFreqInfo
Line 19718: SCellFreq -> PSCellFreq
Line 19725: InterFreq -> PSCellFreq
Line 19739: meas Object(ID:%d, earfcn=%d) is moved to PScell
Line 19772: meas Object(ID:%d, earfcn=%d) is moved from Inter freq to Scell
Line 19813: meas Object(ID:%d, earfcn=%d) is removed
Line 19820: meas Object(ID:%d, earfcn=%d) is moved from Scell to Inter freq
Line 19892: change Scell cycle SRCH(%d), MEAS(%d)
Line 19930: Warning!! SCell Sync with Gap ACTIVE
Line 19938: measmode(%d)-InterFreq Srch
Line 19944: measmode(%d)-Scell Srch
Line 19956: Warning!! SCell Meas with Gap ACTIVE
Line 19964: measmode(%d)-InterFreq Meas
Line 19970: measmode(%d)-Scell Meas
Line 19978: invalid measmode(%d)
Line 20001: EutranNum(%d)
Line 20023: UtranNum(%d)
Line 20029: GeranNum(%d)
Line 20035: CDMANum(%d)
Line 20060: LteRrm_RemoveMeasNeighPatternList NeighPatternList is NULL
Line 20147: - requested meas_csi_rs_id(%d) is out of range: skip this id
Line 20158: - remove meas_csi_rs_id(%d)
Line 20164: - need to check num_csi_rs_list(%d)<0 --> change to 0
Line 20181: - not found csi_rs_id(%d)
Line 20185: - LteRrmConn_CsiRsListRemoveElem pFreqInfo(%d) or pMeasCsiRsList is empty
Line 20208: LteRrmConn_CsiRsListRemoveList - pFreqInfo(%d) or object(%d) is NULL
Line 20239: LteRrmConn_CsiRsListAddList - pFreqInfo(%d) or object(%d) is NULL
Line 20245: LteRrmConn_CsiRsListAddList - num_start_csi_rs_list(%d) < 1
Line 20260: Cannot Allocate pMeasCsiRsList buffer
Line 20267: LteRrmConn_CsiRsListAddList wrong number num_start_csi_rs_list(%d) > (%d)
Line 20277: - Num of csi_rs_list element(%d): ADD is not possible
Line 20286: - csi-rs target cell is same as PCell(pcid:%d) Skip it
Line 20293: Cannot Allocate LteRrm_Meas_CsiRs_t buffer
Line 20341: pFreqInfo(%d) or object(%d) - need to check
Line 20353: measDS_config(%d): setup
Line 20354: 1. dmtc_period_offset(%d) ds_occasion_duration_duplex(%d) ds_occasion_duration(%d)
Line 20361: 2. Remove meas_csi_rs_list (num:%d)
Line 20368: - No csi_rs_list to remove: Requested num_stop_csi_rs_list(%d) but num_csi_rs_list(%d < 1)
Line 20377: 3. Add meas_csi_rs_list (num:%d)
Line 20391: measDS_config(%d): released
Line 20420: Warning! pFreqInfo->measDS_setup == FALSE in LteRrmConn_IsDmtcOccurThisCycle
Line 20426: Warning!PcellCurSfnTti(0xFFFF) is not updated - Need to check in L1LC_RRM_MEAS_SCHEDULE_IND message
Line 20443: dmtc occur after %d[TTI] (curSfnTti:%d norm_curr_tti:%d dmtc_period_tti:%d dmtc_offset:%d)
Line 20468: Warning! pFreqInfo is NULL (in LteRrmConn_IsMeasTrigInDmtcConfig)
Line 20477: Dmtc is expected this cycle(earfcn:%d)
Line 20482: Dmtc configured but not expected this cycle(earfcn:%d)
Line 20516: Ref DMTC info - IntRA (earfcn:%d, measDS_setup:%d)
Line 20517: - dmtc_period:%d, dmtc_period_offset:%d, ds_occasion_duration:%d, ds_occasion_duration_duplex:%d
Line 20540: Ref DMTC info - IntER (earfcn:%d, measDS_setup:%d)
Line 20541: - dmtc_period:%d, dmtc_period_offset:%d, ds_occasion_duration:%d, ds_occasion_duration_duplex:%d
Line 20575: Ref DMTC info - SCell (earfcn:%d, measDS_setup:%d)
Line 20576: - dmtc_period:%d, dmtc_period_offset:%d, ds_occasion_duration:%d, ds_occasion_duration_duplex:%d
Line 20628: [%d]Update Scell(%d) measDS_setup
Line 20636: [%d]No obj found for Scell(%d) -> measDS_setup:0
Line 20671: pFreqInfo(%d) or object(%d) - need to check
Line 20682: rmtc_config(%d): setup
Line 20683: 1. rmtc_period(%d) rmtc_subframe_offset(%d) measDuration(%d)
Line 20691: rmtc_config(%d): released
Line 20724: Warning! LteRrmConn_ProcSstdCompute: LTERRM.Meas.ConnMeasConfig.pMeasListSstd NULL
Line 20730: Warning! LteRrmConn_ProcSstdCompute: report_sstd_meas:FALSE
Line 20736: Warning! LteRrmConn_ProcSstdCompute: pPrimaryCell(%d) or pPSCell(%d) is NULL
Line 20743: Warning! LteRrmConn_ProcSstdCompute: invalid time_offset PCell(%d),PSCell(%d)
Line 20782: Warning! unexpected frame difference (diff1:%d)
Line 20866: [MCD] Check RF imbalance(mode:%d) (m:%d, s:%d)
Line 20873: Cannot Allocate Message buffer
