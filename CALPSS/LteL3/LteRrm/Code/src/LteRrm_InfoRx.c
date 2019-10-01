Line 171: withSIB1: %d, num: %d, imme: %d
Line 181: SI update after SI modification timer expired
Line 186: LteRrm_AllocCellInfoBuf: TargetCell
Line 192: please check: TargetCell(0x%X) or PrimaryCell(0x%X) is NULL!!
Line 308: SI READ SUCCESS
Line 322: LteRrmIdle_GoToSleep() due to SI_READ_SUCCESS
Line 328: Skip LteRrmIdle_GoToSleep() due to SI modification
Line 339: ESS SI READ FAIL
Line 385: ConnToIdleLastCell: TRUE to FALSE
Line 391: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 412: Try Cell selection to next cell (idx:%d)
Line 434: ESS SI READ FAIL when IdleProc, LTERRM_PLMN_SCAN
Line 440: SI READ stop already(%s)
Line 447: ESS SI READ FAIL when IdleProc==LTERRM_IDLE (SI update?)
Line 458: LTE_CPHY_CELL_RESEL_EVAL_IND with FAIL
Line 466: ERROR: Invalid LteRrm idleproc
Line 695: SIB3,4,5 received before SIB2
Line 736: IntraFreq NULL
Line 743: SIB3 received:ReselPriorityOfPCell(%d).(%d)
Line 751: speed_dep_resel_present received
Line 752: - t_eval(%d) t_hyst(%d), nMed(%d), nHigh(%d)
Line 778: SameCellSelect:%d
Line 868: SIB3: q_QualPresent=(%d), q_QualMin=(%d), q_Qualminoffset=(%d), q_QualMinWBPresent=(%d), q_QualMinAllSymbolPresent=(%d)
Line 957: SIB4 received
Line 968: SIB5 received
Line 1118: Invalid SYNC/ASYNC SYSTEM TIME[0:SYNC/1:ASYNC], received(%d), noupdate
Line 1128: cdma_EUTRA_Synchronisation(%d), [0:SYNC/1:ASYNC](%d), system_time(0x%x%08x), LTE End sfn(%d)
Line 1139: systemTimeInfoCDMAPresent in SIB8 is FALSE, no update
Line 1346: ERROR: Invalid Ns and i_s
Line 1395: LteRrm_ConfigSCellPch i_s(%d), N(%d), Ns(%d) , index (%d), isServingCell(%d)
Line 1415: ERROR: Invalid Ns and i_s
Line 1432: [RRM-MBSFN] Serving Cell PCH Valid[%d]
Line 1445: LteRrm_ConfigSCell Pch drx_T(%d), PF(%d), PO(%d)
Line 1488: Update CSG Reserved List : %d
Line 1497:  [%d] EARFCN:%d, StartPCI:%d, RangePCI:%d
Line 1520: previously CsgMeasReq is already received (%d), stop previous CsgMeasReq
Line 1567: Stop CSG Meas(%d)
Line 1579: CSG Meas is Already Stopped (LTERRM_NO_CSG_MEAS)
Line 1597: Request CSG Proximity Meas
Line 1601: LteRrm_ProcCsgProximityMeasReq is reconfigured (%d)
Line 1621: LteRrm_ProcCsgProximityStopMeasReq()
Line 1663: (ignored)LPP(ECID) is already scheduled
Line 1688: amount:%d, interval:%d
Line 1707: (ignored)LPP(ECID) is already aborted
Line 1740: (ignored)LPP(OTDOA) is already scheduled
Line 1753: Reference cell Info in LPP(OTDOA) is different from serving cell
Line 1762: Replace optional field(Ref Cell earfcn) by serving cell earfcn
Line 1767: optional field(Ref Cell earfcn) = %d
Line 1838: (ignored)LPP(OTDOA) is already aborted
Line 1871: (ignored)LPP(OTDOA) is already aborted
Line 1974: Warning!! bScgConfigFlag(1) but PSCell remains configured --> process deact/release
Line 1979: Warning!! bScgConfigFlag(1) but SCG SCell remains configured --> process deact/release
Line 2267: meas_result...eutra_meas_result_list2 NULL
Line 2277: MDT EUTRAN - no Ncell
Line 2288: meas_result...eutra_freq_meas NULL
Line 2449: meas_result...utra_meas_result_list2 NULL
Line 2459: MDT UTRAN - no Ncell
Line 2470: meas_result...utra_freq_meas NULL
Line 2515: MDT UTRAN RAT type(%d) is not valid -> FDD set
Line 2598: meas_result...gsm_meas_result_list2 NULL
Line 2608: MDT GERAN - no Ncell
Line 2619: meas_result...gsm_cell_meas_list NULL
Line 2624: MDT GERAN RAT - num(%d)t
Line 2643: meas_result...gsm_cell_meas NULL
Line 2664: MDT GERAN RAT - (arfcn:%d, rssi:%d)
Line 2701: bImmediate1(%d), MDT.usMeasRat(0x%x)
Line 2715: bImmediate2(%d), MDT.usMeasRat(0x%x)
Line 2738: bImmediate3(%d), MDT.usMeasRat(0x%x)
Line 2822: LteRrm_InitPscellBlindSrchMngr
Line 2846: LteRrm_SaveRrmCfgMsgPSCell: pMsg is NULL
Line 2854: Warning! same RRM_CONFIG_REQ message already stored in LteRrm_SaveRrmCfgMsgPSCell
Line 2866: Cannot Allocate Message buffer
Line 2871: save pSaveRrmCfgMsgPSCell (rrm_config_flag:0x%x)
Line 2895: Warning!! NOT Supported DL_EARFCN %d!!! in LteRrm_StartBlindSrchPSCell
Line 2901: Warning!! pPSCellFreq: NULL in LteRrm_StartBlindSrchPSCell
Line 2926: Warning!! PSCell not found but pscellStatus:KNOWN_DETECTED in LteRrm_StartBlindSrchPSCell
Line 2940: Start Measurement: PSCell Frequency Blind search(earfcn:%d)
Line 3006: Warning! bSrchFlag: FALSE in LteRrm_ProcPSCellBlindSrchResult
Line 3013: Warning! pPSCellFreq: NULL in LteRrm_ProcPSCellBlindSrchResult
Line 3018: LteRrm_ProcPSCellBlindSrchResult (doneCnt:%d / maxCnt:%d)
Line 3061: Resume processing LTE_CPHY_RRM_CONFIG_REQ without SCG config
Line 3110: Warning!! pMeasCnf: NULL in LteRrm_ProcPSCellInitMeasResult
Line 3116: Warning!! pPSCell: NULL in LteRrm_ProcPSCellInitMeasResult
Line 3122: Warning!! pPSCellFreq: NULL in LteRrm_ProcPSCellInitMeasResult
Line 3128: Warning!! measResult->earfcn(%d) different to pPSCell->earfcn(%d) in LteRrm_ProcPSCellInitMeasResult
Line 3135: Warning!! pPSCellFreq->earfcn(%d) different to pPSCell->earfcn(%d) in LteRrm_ProcPSCellInitMeasResult
Line 3154: Resume processing LTE_CPHY_RRM_CONFIG_REQ without SCG config
Line 3170: Warning!! Unexpected meas result (cell_ID:%d)
Line 3179: PSCell - rsrp(%d)
Line 3187: Resume processing LTE_CPHY_RRM_CONFIG_REQ with measured PSCell
Line 3221: - pFreqInfo NULL
Line 3225: - PScell FreqInfo(earfcn=%d) is created newly
Line 3242: Warning!! LteRrm_StartBlindSrchPSCell: pFreqInfo not found --> check pscellStatus(%d)
Line 3274: Warning! PSCell earfcn = PCell earfcn(%d) in LteRrm_GetPSCellStatus - Need to check in RRC
Line 3301: - PSCell: Unknown (no such pFreqInfo)
Line 3309: - PSCell: Known
Line 3321: - PSCell: Unknown (no such pCellInfo)
Line 3348: Config - rrm_config_flag(%d)
Line 3349: - MCG SCell num_add(%d) num_rel(%d)
Line 3350: - meas_sf_pattern_pcell setup  (%d)
Line 3351: - crs_assistance_info   setup  (%d)
Line 3355: - SCG PSCell setup (%d)
Line 3356: - SCG SCell num_add(%d) num_rel(%d)
Line 3433: measSubframePatternPcell: meas_mode(%d)
Line 3449: feICIC crs_assistance_info: Setup
Line 3453: - NeighCellsCRS-Info is setup again by RRC before release
Line 3458: - NeighCellsCRS-Info not configured, num_cell(%d)
Line 3462: - NeighCellsCRS-Info configured, num_cell(%d)
Line 3480: feICIC crs_assistance_info: Release
Line 3484: - num_cell from RRC is not 0 : need to check in RRC
Line 3499: - SCellIndex(%d) for PSCell: out of range
Line 3526: PSCell: setup (SCellIndex:%d)
Line 3566: PSCell: release
Line 3722: SCellActivationfromMAC = 0x%x, SCellActivationTTI = %d
Line 3760: UE has already full supported Scell(%d)
Line 3767: Support the activation for ONLY one SCell !!!(%d->%d)
Line 3818: LteRrm_ProcRemovePSCell
Line 3822: Warning! sCellIndex(%d)
Line 3828: Warning! PSCell(%x) or PSCellFreq(%x) is NULL
Line 3834: Warning! Received SCellIndex(%d) is not configured for PSCell
Line 3847: Deactivate PSCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
Line 4052: Warning! SCG SCell not added <-- pPSCell(%d) pPSCellFreq(%d)
Line 4059: Wrong input in LteRrm_ProcAddSCellCellGroup. Check cellGroup(%d) rrm_config_flag(%d)
Line 4070: - SCellIndex(%d) is out of range - need to check (earfcn:%d, pcid:%d)
Line 4080: SCell Freq(%d) is abnormal -> discard.
Line 4161: MCG: num_seccell(%d), num_remove_seccell(%d)
Line 4174: SCG: num_seccell(%d), num_remove_seccell(%d)
Line 4215: Wrong cellGroup(%d) value used -> SCell(index:%d) is not configured
Line 4235: Intra Freq Scell is not supported
Line 4239: InterFreq -> SCellFreq
Line 4252: Inter Freq does not have the measurement list!!!
Line 4258: previously the same earfcn(%d_%d) is configured as Scell(%d)
Line 4275: TempFreqInfo NULL
Line 4279: Scell FreqInfo(earfcn=%d) is created newly
Line 4317: Scell(%d_PCID:%d) is already configured - ignore
Line 4322: the same freq(%d) and index but diff cell ID (%d_%d) -> discard
Line 4328: the same freq(%d) but diff index(%d_%d) -> discard
Line 4334: there is no candidated cell(%d) with index(%d) -> discard
Line 4359: pTCellInfo NULL
Line 4372: Scell CellInfo(earfcn=%d, PCID=%d) is created newly
Line 4388: - configured in SCG
Line 4415: Mismatch SCell Index[%d] : Cell ID[%d | %d] & DL EARFCN[%d | %d]
Line 4468: - Warning! This band is not for LAA but configured as LAA by RRC --> ignore the field
Line 4473: - LAA SCell configured
Line 4503: SCell(ID:%d, earfcn=%d is added in ScellmeasList
Line 4533: Warning!! pConfig(%x) in LteRrm_SetConfigKnownPSCell
Line 4539: Warning! pPrimaryCell : NULL in LteRrm_SetConfigKnownPSCell
Line 4543: LteRrm_SetConfigKnownPSCell
Line 4556: same cell with previous PSCell
Line 4561: Warning!! no matched pCellInfo
Line 4613: Mismatch SCell Index[%d] : Cell ID[%d | %d] & DL EARFCN[%d | %d]
Line 4699: Warning! LTERRM could not support SCell(%d) more than %d. CHECK!!!
Line 4760: - Warning! filtered_rsrp_pc: invalid for PSCell in LteRrm_SetConfigKnownPSCell
Line 4769: Activate PSCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
Line 4815: LTERRM could not support SCell(%d) more than %d. CHECK!!!
Line 4833: SecondaryCell could not found([%d] Cell ID:%d, earfcn:%d)
Line 4848: [%d] Freq(%d) Cell(%d) earfcn values are different
Line 4879: Wrong Scell info2(%x:%x)
Line 4897: SCellFreq NULL
Line 4961: SCell Activation : Cell ID[%d], DL EARFCN[%d]
Line 4964: Activate SCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
Line 5014: LTERRM could not find SCell(index:%d). CHECK!!!
Line 5015: config(%d), earfcn(%d), PCID(%d)
Line 5047: Deactivate Scell(%d) by Deactivation Timer expiry
Line 5050: Deactivate SCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
Line 5077: SCell is deactivated(SCellIndex: %d, CellID: %d, SCellActivationCMD: 0x%x)
Line 5081: Deactivate SCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
Line 5116: SCell Deactivation is ignored(index:%d(%d))
Line 5177: Scell(%d) configured but not found FreqInfo in gpLteRrm_SCellFreqList
Line 5189: Scell(%d) configured but not found CellInfo in SCellFreq
Line 5196: SCell Config is removed(SCellIndex: %d, CellID: %d)
Line 5211: SCellFreq -> InterFreq
Line 5230: SCell is not configured(%d)
Line 5280: LTE_REL12_DUALC is not defined but cellgroup(%d) is used -> changed to 0
Line 5286: All SCells(cellgroup:%d) are deactivated !!!
Line 5312: SCellConfig.SCellActivationCMD(%d)
Line 5316: All SCells are already deactivated !!!
Line 5364: LTE_REL12_DUALC is not defined but cellgroup(%d) is used -> changed to 0
Line 5828: Result[%d] Active(%d), earfcn(%d)
Line 5846: Result[%d] Active(%d), earfcn(%d)
Line 5901: LteRrm_CheckScellTiming (earfcn:%d, result:%d)
Line 5913: Scell list is Empty
Line 5925: Scell(%d) Doesn't have correct timing info
Line 5930: Scell(%d) has correct timing info
Line 5948: All Scells have correct timing info
Line 6015: - Warning! pFreqInfo is NULL
Line 6021: - Warning! PrimaryCell is NULL
Line 6031: - Warning! pci(%d) out of range
Line 6037: - Warning! PCell NOT expected in measSubframeCellList
Line 6040: - measSubframePattern for PCell already configured
Line 6051: - measSubframePatternPcell: meas_mode(%d)
Line 6058: -%d. pci(%d) configured
Line 6075: - earfcn(%d) meas_mode(%d) num_meas_pattern_ncell(%d)
Line 6096: NeighPatternList NULL(%d) or empty
Line 6105: Meas Neigh Pattern Update (earfcn:%d, meas_mode:%d)
Line 6136: Warning! pFreqInfo is NULL
Line 6142: Warning! LteRrm_RemoveMeasNeighPattern: NumOfNeighPatt is 0
Line 6156: Remove MeasNeighPattern(Freq:%d) from List(num:%d)
Line 6244: Cannot Allocate PatternList buffer
Line 6256: - new measSubframePatternNeigh (earfcn:%d, meas_mode:%d, num:%d)
Line 6282: MeasSubframePatternNeigh List is updated
Line 6294: - (%d) earfcn(%d) meas_mode(%d)
Line 6338: Curr. feicic activation state
Line 6342: Error: gLteRrm_NeighborCrsInfo_r11.num_cell is out of range(%d)
Line 6350: - %d. FeicicActBitmap[%d]:%d (pci:%d)
Line 6412: %d. Pci(%d) found in Sorted list
Line 6420: -- Out of bound: FeicicTmpCellList.num_cell(%d)
Line 6434: -- ant_num(%d), cp_type(%d)
Line 6446: -- mbsfn_valid(1), mbsfn_config_cnt(%d)
Line 6452: -- mbsfn_valid(0)
Line 6457: -> Crs-Assi cell(pci:%d) detected and selected as SIC candidate
Line 6461: -> Crs-Assi cell(pci:%d) detected BUT not satisfied with SIC conditions
Line 6479: -- No valid Ncell in Intra-freq Sorted-list
Line 6526: LteRrm_CheckFeicicCandiChange
Line 6533: - Error: Need to check crsAssistActivated change. FeicicActCellList.num_cell is (%d)
Line 6540: - no any target cell observed - Deactivates feicic
Line 6573: - no change in dominant candidate cell
Line 6605: feicic check: crsAssistConfigured(%d) crsAssistActivated(%d)
Line 6613: Activates feicic
Line 6622: Updates feicic
Line 6667: PowerClass(%d), earfcn(%d)
Line 6680: [WARN] Need to check PowerClass -> set PowerClass 3
