Line 165: CSFB is aborted -> bCsfbTrigInd(1->0)
Line 179: [MCD] RF Imbalance Check (%)
Line 211: SameCellSelect:%d
Line 217: IDLE -> Conn
Line 231: Free IntraFreq - Sorted cell when IDLE to CONN
Line 256: ERROR: INIT -> CONN
Line 266: Warning!! gLteRrm_CsfbUtraMeasTmr running when bCsfbTrigInd(0)
Line 267: -> restart Csfb Utra Meas Tmr STOP
Line 275: CSFB is invoked -> bCsfbTrigInd(0->1)
Line 307: BPLMN target Camp On !, Wait CellStatusNtf
Line 335: SIUpdate is TRUE. But PrimaryCell is NULL
Line 342: TargetCell is NULL!
Line 370: FAILURE : PrimaryCell->cell_ID = %d
Line 378: SameCellSelect:%d
Line 389: TargetCell is NULL!
Line 422: FAILURE : PrimaryCell->cell_ID = %d
Line 433: PrimaryCell NULL
Line 457: ERROR: Not IDLE to IDLE
Line 598: Ignore UE STATE NTF(%d) when Category changed
Line 636: Idle -> UE_RACHING, Stop Measurement
Line 672: ERROR: Invalid UE State in NTF
Line 698: ERROR: Invalid UE State in IRAT HO
Line 705: UE STATE: INIT -> Conn, for IRAT HO
Line 750: (MobState) LteRrm_InitMobilityStateList
Line 797: (MobState) LteRrm_InitMobilityState
Line 824: (Stationary) LteRrm_InitStationaryState
Line 857: LteRrm_CheckEvalLeadTime
Line 863: - Tcrmax increased
Line 880: - TimeToExp before timer adjust: %d
Line 884: - Start Tcrmax2
Line 892: - Tcrmax decreased
Line 908: - TimeToExp before timer adjust: %d
Line 915: - Start Tcrmax3
Line 938: - No change in Tcrmax - TimeToExp : %d
Line 942: - Start Tcrmax4
Line 969: (Mobstate) LteRrm_CountMobilityCRCnt
Line 996: - TCRmax should have been expired
Line 1005: - Cell change count(%d) in CRList
Line 1029: (MobState) LteRrm_SetMobilityState
Line 1030: - TempCRCnt(%d) NMed(%d) NHigh(%d)
Line 1037: - State: HIGH_MOBILITY_STATE
Line 1042: - State: MEDIUM_MOBILITY_STATE
Line 1066: - State: NORMAL_MOBILITY_STATE
Line 1100: - Flag states are not valid. SpeedDepParamInd(%d) SpeedDepReselInd(%d)
Line 1121: LteRrm_SwitchSpeedParam
Line 1129: - mode mismatch.. ConnMeasConfig.SpeedDepParamInd(0)
Line 1133: - Update conn speedDepParam -> idle speedDepResel
Line 1153: - mode mismatch.. Sib.Type3.SpeedDepReselInd(0)
Line 1157: - Update idle speedDepResel -> conn speedDepParam
Line 1175: wrong stateTrans(%d)
Line 1183: SameCellSelect:%d
Line 1225: (MobState) Mobility state update at Handover
Line 1235: (MobState) Mobility state update at Reselection
Line 1241: - CurrTime(%d)
Line 1242: - Teval(%d), NMed(%d), NHigh(%d), THystNormal(%d)
Line 1248: pNewElem is NULL
Line 1262: - Monitoring timestamps at cell change
Line 1268: - %d. List CRTime(%d)
Line 1282: - ERROR in Mobility.CRTimeList
Line 1290: - Start Tcrmax1 : No active previously (Teval: %d sec)
Line 1302: - Mobility.CRCnt(%d)
Line 1315: - ERROR: Elem of mob list is not linked
Line 1321: Skip Mob state check - SameCellSelect(%d), SameCellRevisit(%d)
Line 1358: Invalid mobility state
Line 1401: Invalid mobility state
Line 1445: Invalid mobility state
Line 1491: Invalid mobility state
Line 1558: BestNCellInfo: RAT(%d): EARFCN[%4d], PCID[%3d], RSRP_N[%4d]
Line 1642: Stationary FALSE due to Cell_ID condition. (%d)!= (%d), Cell channged!
Line 1651: Stationary FALSE due to IntraFreq RSRP: Current(%d),Previous(%d)
Line 1659: Stationary FALSE due to InterFreq(Earfcn:%d) RSRP: Current(%d),Previous(%d)
Line 1667: Stationary FALSE due to UtraFreq(Uarfcn:%d) RSRP: Current(%d),Previous(%d)
Line 1675: Stationary FALSE due to GeranFreq(Arfcn:%d) RSRP: Current(%d),Previous(%d)
Line 1694: Stationary FALSE due to RSRP(%d)(%d) condition(Diff:%d,Threshold:%d) 
Line 1721: stationaryIndex Increased(%d)!(Idle:%d/Conn:%d)
Line 1730: stationaryIndex reset to 0
Line 1751: Index:%d, checkStationary:%d, State:%d, SamplingDuration:%d, MaxDiff_RSRP[%d], Average_RSRP[%d], Variance_RSRP[%d]
Line 1755: Previous RSRP: [%d, %d, %d, %d, %d], Current RSRP[%d]
Line 1763: Previous CINR: [%d, %d, %d, %d, %d], Current CINR[%d]
Line 1773: <IntraFreq_BestCell> PCI:%d, RSRP:%d
Line 1775: <InterFreq_BestCell> Earfcn: %4d, PCI:%3d, RSRP:%d
Line 1777: <UtraFreq_BestCell> Earfcn: %4d, PCI:%3d, RSRP:%d
Line 1779: <GeranFreq_BestCell> Earfcn: %4d, PCI:%3d, RSRP:%d
Line 1785: Full stationary(%d)
Line 1790: Normal stationary(%d)
Line 1795: Semi stationary(%d)
Line 1800: Not stationary(%d)
Line 1812: Stationary.isStationary: 1 to 0
Line 1829: Stationary.isStationary: 0 to 1
Line 1888: bFirstCycle: 1->0
Line 1910: bFirstCycle: 0->1
Line 1927: bFirstMeasRemain: 0
Line 1943: bFirstMeasRemain: 1
Line 1958: LteRrm_InitAllMeasSuspParam
Line 1977: LteRrm_InitUtraForcedMeasCsfb
Line 2005: LteRrm_InitForcedInterFreqMeas
