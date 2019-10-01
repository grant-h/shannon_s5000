Line 156: [%s]UTRA NOT supported => No need to read SIB6
Line 163: [%s]GERAN NOT supported => No need to read SIB7
Line 181: [%s]Rel11 NOT supported => No need to read SIB14
Line 187: [%s]Prose is not supported. => No need to read SIB18/SIB19
Line 192: [%s]Current LteRrcUeCapaSib (0x%X)
Line 213: [%s]Cell Status Ntf category = %d
Line 239: [%s]GetNotRxedSchedInfo : Avail sched info(0x%X)
Line 318: [%s]pTcellInfo is NULL NOW
Line 324: [%s]pScellInfo is NULL NOW
Line 362: [%s]LTERRC_T_WAIT_SI timer stop error
Line 373: [%s]LTERRC_T_WAIT_SIB2 timer stop error
Line 425: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 436: [%s]Sched Info in LteRrcSchedInfoInStartReadReq (0x%X)
Line 440: [%s]>> Check This Empty SIB reading case.. Forced to read all scheduled SIBs(0x%x)
Line 482: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 530: [%s]SIB2 Timer Value(%d) Last Paging Period(%d) Sib2 Scheduled Period(%d) Min(%d) Max(%d)
Line 569: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 700: [%s]Background operation is in progress (M: %d / S: %d)
Line 720: [%s]Background operation is in progress (M: %d / S: %d)
Line 726: [%s]NOT in Background operation (M_state: %d)
Line 757: [%s]Head of gpLteRrcCellInfoList is NULL
Line 764: [%s]NOT the last elem of cell info list => Re-start LTERRC_T_SIB_VALIDITY
Line 789: [%s]NOT TAIL elem => Should have next elem
Line 797: [%s]Last elem of cell info list => No need to Re-start LTERRC_T_SIB_VALIDITY
Line 832: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 839: [%s]SI START is not send when RESUMED by L1
Line 883: [%s]SI Num(%d) Windowlen(%d) IsHighest(%d)
Line 889: [%s]%d) SI period(%d) Valid(%d) SiToSibMap(0x%x)
Line 901: [%s]IsRequiredSibRead(%d)
Line 937: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 955: [%s]Same as Last SI read. No SIB re-start
Line 964: [%s]Other SIBs Read will be Re-started
Line 1009: [%s]Only CMAS and ETWS are in the scheduled SIs : Sched Info in LteRrcSchedInfoInStartReadReq (0x%X)
Line 1039: [%s]Cease SYNC requested
Line 1061: [%s]NULL ptr argument at LteRrcSi_StartReadSi()
Line 1080: [%s]SIB1 Read will be triggered
Line 1094: [%s]SI_UPDATE_PAGING case => need START_READ_REQ for SIB1
Line 1104: [%s]SI_READ_SIB_AFTER_BOUNDARY case => need START_READ_REQ for SIB1
Line 1116: [%s]CLEAR OPFLAG :(%s-%s)
Line 1116: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1117: [%s]CLEAR OPFLAG :(%s-%s)
Line 1117: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1121: [%s]CLEAR OPFLAG :(%s-%s)
Line 1121: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1122: [%s]CLEAR OPFLAG :(%s-%s)
Line 1122: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1132: [%s]SI_UPDATE_3HR or ETWS_IND or CMAS_IND or EAB_MOD or CONN state case => need START_READ_REQ for SIB1
Line 1164: [%s]Other SIBs Read will be triggered
Line 1184: [%s]CSG SIBs Read will be triggered
Line 1219: [%s]Invalid SibType argument at LteRrcSi_StartReadSi()
Line 1256: [%s]LTERRC_T_WAIT_SIB1 timer stop error
Line 1268: [%s]LTERRC_T_WAIT_SI timer stop error
Line 1280: [%s]LTERRC_T_WAIT_SIB2 timer stop error
Line 1416: [%s]STOP READ REQ with %d
Line 1439: [%s]pTcellInfo is NULL NOW
Line 1491: [%s][LTE RRC DSRC] STOP READ REQ
Line 1550: [%s][LTE RRC DSRC] No Tcell Info
Line 1584: [%s]SI proc is ON (%d)
Line 1595: [%s]Scell != NULL, Clear Ntf Bitmap
Line 1597: [%s]pScellInfo is NULL NOW
Line 1602: [%s]Scell == NULL
Line 1610: [%s]CLEAR OPFLAG :(%s-%s)
Line 1610: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1614: [%s]CLEAR OPFLAG :(%s-%s)
Line 1614: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1647: [%s]CLEAR OPFLAG :(%s-%s)
Line 1647: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1648: [%s]CLEAR OPFLAG :(%s-%s)
Line 1648: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1649: [%s]CLEAR OPFLAG :(%s-%s)
Line 1649: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1650: [%s]CLEAR OPFLAG :(%s-%s)
Line 1650: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1655: [%s]SI proc is ON (%d)
Line 1669: [%s]Scell != NULL, Clear Ntf Bitmap
Line 1673: [%s]StopSiProcWhenLeavingCell: SIB2 DB is updated by MFBI here.
Line 1677: [%s]pScellInfo is NULL NOW
Line 1682: [%s]Scell == NULL
Line 1687: [%s]NOT in Background operation => LteRrcSi_InitCellSibDb
Line 1700: [%s]pTcellInfo is NULL NOW
Line 1726: [%s]pTcellInfo is NULL NOW
Line 1737: [%s]CLEAR OPFLAG :(%s-%s)
Line 1737: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1741: [%s]CLEAR OPFLAG :(%s-%s)
Line 1741: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1785: [%s]CellCategory = LTE_FREQ_FORBIDDEN but RRC is not a idle state.
Line 1794: [%s]CellCategory = LTE_FREQ_FORBIDDEN but current is source cell(%d,%d)
Line 1849: [%s]CellCategory = LTE_FREQ_FORBIDDEN but RRC is not a idle state.
Line 1859: [%s]CellCategory = LTE_FREQ_FORBIDDEN but current is source cell(%d,%d)
Line 1910: [%s]Remove Barring Rat(%d) Earfcn(%d) Pci(%d) CellId(%d) FreqBarr(%d) Time(%d)
Line 1998: [%s]Remove Barring Rat(%d) Earfcn(%d) Pci(%d) CellId(%d) FreqBarr(%d) Time(%d)
Line 2038: [%s]Remove timeout Barring Rat(%d) Earfcn(%d) Pci(%d) CellId(%d) FreqBarr(%d)
Line 2112: [%s]RRC barring List FULL!! Remove oldest Rat(%d) Earfcn(%d) Pci(%d) CellId(%d) Remain(%d) FreqBarr(%d)
Line 2147: [%s]Add RRC barring List Earfcn(%d) Pci(%d) CellId(%d) Tbarred(%d) FreqBarr(%d)
Line 2190: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2196: [%s]Change category to XXX_ACCEPT_CELL to LTE_ACCEPT_TO_SUIT_CELL
Line 2201: [%s]Current category is NOT XXX_ACCEPT_CELL (category: %d)
Line 2209: [%s]SIB1 bit of LteRrcSentNtfToLteRrm was not set => Should be checked the reason
Line 2248: [%s]MEM ALLOC FAIL!!!
Line 2280: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2288: [%s]CELL status ntf will not be sent
Line 2295: [%s]Invalid LteRrcSib1CellCategory (LTE_MAX_CATEGORY)
Line 2309: [%s]Send LTE_CPHY_CELL_STATUS_NTF (category: %d) PLMN_Avail(%d)
Line 2386: [%s]csg_cell_type to RRM(%d) Membership(%d)
Line 2450: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2453: [%s]cell_status_ntf specific P(%d) for P(%d)
Line 2491: [%s]BarringParameters :: BarringFactor:[%d], BarringTime:[%d]
Line 2521: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2536: [%s]SendSib2Ind :: RRC is connected state. set the SSAC factor as 100(Not barred)
Line 2558: [%s]SendSib2Ind :: ACB information is not changed.
Line 2570: [%s]SendSib2Ind :: Barring parameters for SSAC - Voice
Line 2573: [%s]SendSib2Ind :: Barring parameters for SSAC - Video
Line 2577: [%s]SendSib2Ind :: Barring parameters for converted SSAC - Voice
Line 2580: [%s]SendSib2Ind :: Barring parameters for converted SSAC - Video
Line 2585: [%s]SendSib2Ind :: Barring parameters for Emergency : [%d]
Line 2598: [%s]SendSib2Ind :: Operator-ATT, ACB-SKIP for Voice and Video TRUE. Set MO_DATA as not-barred.
Line 2612: [%s]SendSib2Ind :: Barring parameters for MO-DATA
Line 2620: [%s]SendSib2Ind :: Barring parameters for MO-SIGNALLING
Line 2655: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2657: [%s]Send LTE_RRC_SIB8_IND to EMM, SIB8 info present(%d).
Line 2747: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2777: [%s]Target cell ptr mismatch
Line 2801: [%s]Target cell ptr mismatch
Line 2849: [%s][DEDI_PRIORITY] BitMask(0x%x) Timestamp(%d) Duration(%d)
Line 2856: [%s][DEDI_PRIORITY] Time(%d)ms elapsed.. Ignore
Line 2873: [%s]LTERRC_TMR_SET_CONFIGVAL(%d,%d)
Line 2941: [%s][SendUeStateNtf] :: Send UE specific DRX(%d)
Line 2974: [%s]No valid IMSI, check SIM status => imsi_for_paging is set to zero as per spec
Line 3022: [%s]CSFB Call Status(%d)
Line 3052: [%s]LastGlobalCellId : [0x%x].
Line 3174: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 3190: [%s]NO LTE_CPHY_SIB_UPDATE_NTF sending cond(%x, %x)
Line 3206: [%s]LTERRC_MALLOC_FAIL : FILE:%s LINE:%d FUNC:%s
Line 3211: [%s]SIB3 info is included in LTE_CPHY_SIB_UPDATE_NTF
Line 3231: [%s]LTERRC_MALLOC_FAIL : FILE:%s LINE:%d FUNC:%s
Line 3236: [%s]SIB4 info is included in LTE_CPHY_SIB_UPDATE_NTF
Line 3256: [%s]LTERRC_MALLOC_FAIL : FILE:%s LINE:%d FUNC:%s
Line 3263: [%s]SIB5 info is included in LTE_CPHY_SIB_UPDATE_NTF
Line 3303: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 3349: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 3394: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 3401: [%s]SendSib8UpdateNtf - remove the system time info.
Line 3446: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 3511: [%s]LTERRC_T_WAIT_SIB1 Timer Expiry
Line 3515: [%s]LTERRC_SI_READ_BACKGROUND => Return
Line 3519: [%s]No SIB1 till LTERRC_T_WAIT_SIB1 expiry => LTE_CELL_BARRED via STOP READ REQ with fail
Line 3525: [%s]CLEAR OPFLAG :(%s-%s)
Line 3525: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3529: [%s]CLEAR OPFLAG :(%s-%s)
Line 3529: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3532: [%s]CLEAR OPFLAG :(%s-%s)
Line 3532: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3533: [%s]CLEAR OPFLAG :(%s-%s)
Line 3533: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3534: [%s]CLEAR OPFLAG :(%s-%s)
Line 3534: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3560: [%s]No SIB2 till LTERRC_T_WAIT_SI expiry => LTE_CELL_BARRED via STOP READ REQ with fail
Line 3568: [%s]CLEAR OPFLAG :(%s-%s)
Line 3568: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3572: [%s]CLEAR OPFLAG :(%s-%s)
Line 3572: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3614: [%s]CLEAR OPFLAG :(%s-%s)
Line 3614: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3618: [%s]CLEAR OPFLAG :(%s-%s)
Line 3618: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3628: [%s]Stop BPLMN and Camp on case => Need to send CELL STATUS NTF
Line 3632: [%s]pTcellInfo is NULL NOW
Line 3644: [%s]ProcSiTimerExpiryAfterSib2 :: need to receive SIB14, if broadcast.
Line 3696: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 3698: [%s]LTERRC_T_WAIT_SI Timer Expiry
Line 3702: [%s]LTERRC_SI_READ_BACKGROUND(Only valid for CSG case) => Stop reading SI & Return
Line 3709: [%s]CLEAR OPFLAG :(%s-%s)
Line 3709: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3713: [%s]CLEAR OPFLAG :(%s-%s)
Line 3713: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3714: [%s]CLEAR OPFLAG :(%s-%s)
Line 3714: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3715: [%s]CLEAR OPFLAG :(%s-%s)
Line 3715: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3719: [%s]Timer was expired while waiting warning message(ETWS/CMAS).
Line 3848: [%s]SIB Validity Timer Expiry in cell(%d)
Line 3858: [%s]SET OPFLAG :(%s-%s)
Line 3858: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3917: [%s]Change pScellInfo to target pTcellInfo
Line 3926: [%s]SET OPFLAG :(%s-%s)
Line 3926: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4025: [%s]All requested CSG SIBs have been received
Line 4039: [%s]LTERRC_T_WAIT_SI timer stop error
Line 4055: [%s]LTERRC_T_WAIT_SIB2 timer stop error
Line 4098: [%s]LTE_CPHY_UE_STATE_NTF sent & SIB3/4/5 received => Send LTE_CPHY_SIB_UPDATE_NTF
Line 4108: [%s]LTE_CPHY_UE_STATE_NTF sent & SIB6 received => Send LTE_CPHY_SIB_6_UPDATE_NTF
Line 4118: [%s]LTE_CPHY_UE_STATE_NTF sent & SIB7 received => Send LTE_CPHY_SIB_7_UPDATE_NTF
Line 4138: [%s]Current State = %d => NOT send XXX_NTF to LteRrm
Line 4145: [%s]LTE_CPHY_UE_STATE_NTF sent & SIB8 received => Send LTE_CPHY_SIB_8_UPDATE_NTF
Line 4192: [%s]All requested SIBs have been received
Line 4202: [%s]LTERRC_T_WAIT_SI timer stop error
Line 4215: [%s]LTERRC_T_WAIT_SIB2 timer stop error
Line 4223: [%s]Send LTE_CPHY_UE_STATE_NTF
Line 4232: [%s]CLEAR OPFLAG :(%s-%s)
Line 4232: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4236: [%s]CLEAR OPFLAG :(%s-%s)
Line 4236: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4241: [%s]CLEAR OPFLAG :(%s-%s)
Line 4241: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4242: [%s]CLEAR OPFLAG :(%s-%s)
Line 4242: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4243: [%s]CLEAR OPFLAG :(%s-%s)
Line 4243: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4300: [%s]Revisit cell => Send XXX NTF to LteRrm using previously received SIB info
Line 4314: [%s]Not all the scheduled SIs have not been received => START READ REQ
Line 4322: [%s]Current LteRrcCurrentSiProc (%d) => Set to LTERRC_SI_NO_ACTION and pTcellInfo is set to NULL NOW
Line 4364: [%s]Not all the scheduled SIs : Sched Info in LteRrcSchedInfoInStartReadReq (0x%X)
Line 4418: [%s]NULL ptr argument at LteRrcSi_CheckSiProcStatus()
Line 4463: [%s]NULL ptr argument at LteRrcSi_CheckHomeCountry()
Line 4490: [%s]Home country MCC (US)
Line 4494: [%s]Not Home country (%d %d %d)
Line 4500: [%s]Not Home country (%d %d %d)
Line 4531: [%s]NULL ptr argument at LteRrcSi_CheckForbiddenTai()
Line 4541: [%s]Same TAC with one of the Forbidden TAIs => Check PLMN
Line 4545: [%s]PLMN is also same => Forbidden TAI
Line 4552: [%s]Same TAC but Different PLMN => Not Forbidden
Line 4587: [%s]NULL ptr argument at LteRrcSi_CheckDisabledPlmn()
Line 4596: [%s]PLMN is also same => Disabled PLMN
Line 4602: [%s]Different PLMN => Not Disabled PLMN
Line 4720: [%s]AC 11 or 15 in the HPLMN/EHPLMN => Not barred
Line 4730: [%s]AC 11 or 15, but Not in the HPLMN/EHPLMN => LTE_CELL_BARRED/LTE_FREQ_BARRED
Line 4742: [%s]Neither AC 11 nor 15 support => LTE_CELL_BARRED/LTE_FREQ_BARRED
Line 4768: [%s]Selected or RPLMN(%d) is reserved..Invalidte PLMN Index(%d)
Line 4846: [%s]Mismatch found for Reserved for Operator PLMN Index(%d %d)...
Line 4989: [%s]LteRrcSentNtfToLteRrm(0x%x) LteRrcReceivedSib(0x%x) LteRrcSchedInfoInStartReadReq(0x%x)
Line 5002: [%s]NULL ptr argument at LteRrcSi_CheckIfNtfToL1NeededWithoutOtherSi()
Line 5045: [%s]UE has the CSG Membership on this cell
Line 5052: [%s]Not Allowed CSG cell
Line 5066: [%s]Not Allowed CSG cell in Connected State
Line 5074: [%s]Hybrid cell with CSG Membership
Line 5079: [%s]Hybrid cell without CSG Membership... Try camp on as normal Cell
Line 5084: [%s]Non-CSG Cell Try camp on
Line 5092: [%s]This UE cannot camp on this CSG Cell because CSG is not suppored
Line 5106: [%s]Not Allowed CSG cell in Connected State
Line 5113: [%s]This UE can camp on this Hybrid Cell
Line 5117: [%s]Non-CSG Cell Try camp on
Line 5125: [%s]Allow Camp on CSG Cell in Any PLMN State
Line 5167: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 5168: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 5245: [%s]PLMN ID of this cell matches with Preferred PLMN ID.
Line 5255: [%s]PLMN ID of this cell does not match with Preferred PLMN ID. Try other cell in Limited Service
Line 5309: [%s]Matched PLMN with SPLMN (%d %d %d %d %d %d)
Line 5315: [%s]CellReservedForOperatorUse in SIB1 for index(%d)
Line 5385: [%s]Match PLMN is found in SIB1
Line 5392: [%s]No suitable PLMN with Selected PLMN(%d %d %d %d %d %d) in SIB1
Line 5440: [%s]CellReservedForOperatorUse in SIB1
Line 5536: [%s]Compare EPLMN NumEplmns(%d) InclEquivPlmnList(%d)
Line 5542: [%s]No matching with EPLMN
Line 5580: [%s]Matched PLMN with EPLMN(%d %d %d %d %d %d)
Line 5586: [%s]CellReservedForOperatorUse in SIB1
Line 5683: [%s]Not CellReservedForOperatorUse in SIB1
Line 5691: [%s]Reserved PLMN found with EPLMN in SIB1
Line 5695: [%s]Forbidden TAI found with EPLMN in SIB1
Line 5700: [%s]No matched PLMN with EPLMN in SIB1
Line 5801: [%s]Ignore Forbidden TAI NetSelMode(%d) IsFTAISearch(%d) UserSelectedSrch(%d) PlmnIndex(%d)
Line 5805: [%s]Forbidden TAI NetSelMode(%d) IsFTAISearch(%d) CellCat(%d) PlmnIndex(%d)
Line 5851: [%s]CSG Member PLMN ID(%x) Index(%d)
Line 5856: [%s]NON-CSG Member PLMN ID(%x) Index(%d)
Line 5934: [%s]This cell does not support CDMA. Try other cell for CDMA mobility
Line 5943: [%s]This cell support CDMA. Try this cell for CDMA mobility
Line 5973: [%s]Hplmn Priority Srch : EHPLMN/HPLMN is selected
Line 5987: [%s]Hplmn Priority Srch : RPLMN is selected
Line 6065: [%s]This cell does not support IMS-Emergency. Try other cell for EMC call (%d)(%d)
Line 6075: [%s]plmn_srch_type from MM is LTE_RRC_AVLB_PLMN_SRCH_REQ
Line 6085: [%s]CellReservedForOperatorUse in SIB1
Line 6130: [%s]ImsEmergencySupport(%d) VoiceDomainPref(%d) EMC_Test(%d) 
Line 6151: [%s]This cell does not support IMS-Emergency. Try other cell in Limited Service (%d)(%d)
Line 6166: [%s]Not CellReservedForOperatorUse in SIB1
Line 6205: [%s]Select RPLMN
Line 6217: [%s]Select HPLMN List
Line 6229: [%s]Select EPLMN PLMN
Line 6238: [%s]Select Last Nas Selected PLMN
Line 6290: [%s]NETWORK ERROR: Select Primary PLMN
Line 6336: [%s]UpdateEarfcnByMfbi: pCellSibDb is NULL.
Line 6393: [%s]MultibandInfoList as well as FreqBandIndicator is disregarded. CheckFreqBandIndicator is True
Line 6407: [%s]FreqBandIndicator(%d) indicates a UE support band
Line 6434: [%s]MFBI[%d] = %d indicates a UE support band
Line 6450: [%s]FreqBandIndicator(%d) indicates a UE support band after search Multiband list
Line 6476: [%s]Don't change band due to invalid NewEarfcn of Freq(%d) in B%d. NET Error Check!
Line 6492: [%s][MFBI] Band Change is required since DL-EARFCN [%d]->[%d]
Line 6505: [%s][Not MFBI] Band Change is required since DL-EARFCN [%d]->[%d]
Line 6518: [%s]FreqBandIndicator(%d) indicates a NOT support band
Line 6557: [%s]Background Scan operation is progressing => No need to check cell availability
Line 6563: [%s]NULL ptr argument at LteRrcSi_CheckCellAvailability()
Line 6614: [%s]Current Cell FreqBandIndicator(%d) for Candidate Band(%d) Earfcn(%d)
Line 6648: [%s]cellBarred in SIB1
Line 6658: [%s]intraFreqResel is not allowed in SIB1 => LTE_FREQ_BARRED
Line 6700: [%s]Non CSG CELL Found. Try Next Cell
Line 6710: [%s]Selected CSG ID(%d) Found
Line 6724: [%s]CSG ID(%d) Mismatch for Selected CSG ID(%d)
Line 6750: [%s]PLMN LIST REQ => return
Line 6776: [%s]Highest ranking cell change case..This cell was barred(%d) but remove the limitation
Line 6792: [%s]Overlapped freq Cell is still barred(%d) Remain(%d) BarrType(%d).. Skip Current Cell..
Line 6842: [%s]No action in %d state
Line 6857: [%s]CLEAR OPFLAG :(%s-%s)
Line 6857: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 6858: [%s]CLEAR OPFLAG :(%s-%s)
Line 6858: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 6859: [%s]CLEAR OPFLAG :(%s-%s)
Line 6859: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 6860: [%s]CLEAR OPFLAG :(%s-%s)
Line 6860: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 6861: [%s]CLEAR OPFLAG :(%s-%s)
Line 6861: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 6923: [%s]SIB1 Rxed in case of ETWS_IND
Line 6929: [%s]There is no ETWS schedule info in SIB1.
Line 6933: [%s]Try to read SIB1 again. total try count : %d
Line 6941: [%s]Abort ETWS Procedure.
Line 6944: [%s]CLEAR OPFLAG :(%s-%s)
Line 6944: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 6978: [%s]CheckETWS :: pTcellInfo is NULL NOW
Line 7001: [%s]SIB1 Rxed in case of CMAS_IND
Line 7007: [%s]There is no CMAS schedule info in SIB1.
Line 7011: [%s]Try to read SIB1 again. total try count : %d
Line 7019: [%s]Abort CMAS Procedure.
Line 7022: [%s]CLEAR OPFLAG :(%s-%s)
Line 7022: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7056: [%s]CheckCmas :: pTcellInfo is NULL NOW
Line 7077: [%s]Only Warning msgs are required. Start read SIBs
Line 7109: [%s]gpLteRrcCellInfoList is empty => Init gpLteRrcCellInfoList
Line 7139: [%s]1st element of Cell Info list or LTERRC_T_SIB_VALIDITY is not running => Start LTERRC_T_SIB_VALIDITY
Line 7182: [%s]Move the 1st element of Cell Info list to TAIL
Line 7217: [%s]Trigger to send LTE_CPHY_CELL_STATUS_NTF in INIT/IDLE/ACC state(%d)
Line 7233: [%s]CLEAR OPFLAG :(%s-%s)
Line 7233: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7248: [%s]SET OPFLAG :(%s-%s)
Line 7248: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7249: [%s][MUI HO]LTE_RRC_CELL_IND pends till Rx LTERRC_HO_COMPLETE R2ACK
Line 7261: [%s]Trigger to send LTE_CPHY_UE_STATE_NTF in CONN state
Line 7266: [%s]Trigger to send LTE_CPHY_SI_START_READ_REQ in CONN state
Line 7273: [%s]No action in %d state
Line 7303: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 7315: [%s]CLEAR OPFLAG :(%s-%s)
Line 7315: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7320: [%s]Duplicate SIB, but Same cell revisit case(Need to send NTFs to L1SC w/o reading other SIs) => Process this SIB
Line 7325: [%s]ignore the duplicate SIB  : LteRrcSchedInfoInStartReadReq(%d) LteRrcReceivedSib(%d) LteRrcSentNtfToLteRrm(%d)
Line 7343: [%s]Dedicated SIB1 received, Value Tag changed
Line 7344: [%s]CLEAR OPFLAG :(%s-%s)
Line 7344: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7348: [%s]SIB1 received while LTERRC_T_WAIT_SIB1 timer is not running
Line 7357: [%s]LTERRC_T_WAIT_SIB1 timer stop error
Line 7372: [%s]SIB1 with HeNB Interrupt Rxed while Non-CGI Meas Proc, Ignore
Line 7388: [%s]Return code from DB is LTERRC_DB_IGNORE_SIB1_IN_NOT_AVAIL_CELL => return
Line 7396: [%s]Process SIB1
Line 7433: [%s]Trigger to send LTE_CPHY_CELL_STATUS_NTF in INIT/IDLE/ACC state(%d)
Line 7465: [%s]ProcSIB1 : MBSFN is not activated. state(%d)
Line 7469: [%s]ProcSIB1 : LteRrcSchedInfoInStartReadReq(%d) LteRrcReceivedSib(%d) LteRrcSentNtfToLteRrm(%d)
Line 7486: [%s]SI_UPDATE_3HR or ETWS_IND or CMAS_IND or CONN state case => need STOP_READ_REQ for SIB1
Line 7504: [%s]CLEAR OPFLAG :(%s-%s)
Line 7504: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7573: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 7576: [%s]Process SIB2
Line 7588: [%s]Ignore the duplicate SIB2
Line 7611: [%s]No action in %d state about SIB2
Line 7632: [%s]Invalid LteRrcCurrentSiProc(%d)
Line 7663: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 7666: [%s]Process SIB%d
Line 7690: [%s]LTERRC_SI_READ_BACKGROUND => Return
Line 7703: [%s]LTE_CPHY_UE_STATE_NTF has already been sent to LteRrm
Line 7714: [%s]All the scheduled SIBs for Intra-LTE reselection received => Send LTE_CPHY_SIB_UPDATE_NTF
Line 7722: [%s]Waiting other SIB for Intra-LTE reselection, LTE_CPHY_SIB_UPDATE_NTF will not be sent
Line 7728: [%s]LTE_CPHY_SIB_UPDATE_NTF cannot be sent since LTE_CPHY_UE_STATE_NTF has not been sent to LteRrm
Line 7734: [%s]SIB%d is received in %d state => Not send LTE_CPHY_SIB_UPDATE_NTF
Line 7764: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 7766: [%s]Process SIB%d
Line 7780: [%s]LTE_CPHY_UE_STATE_NTF has already been sent to LteRrm
Line 7807: [%s]Invalid SIB type(SIB%d)
Line 7815: [%s]LTE_CPHY_SIB_6/7/8_UPDATE_NTF cannot be sent since LTE_CPHY_UE_STATE_NTF has not been sent to LteRrm
Line 7821: [%s]SIB%d is received in %d state => Not send LTE_CPHY_SIB_6/7/8_UPDATE_NTF
Line 8054: [%s]LteRrcSi_ProcSib9 :: Ignore duplicated SIB9.
Line 8064: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 8067: [%s]Process SIB9
Line 8083: [%s]LteRrcSi_ProcSib9 :: CSG is not supported.
Line 8114: [%s]NULL ptr argument at LteRrcSi_ProcSib9()
Line 8119: [%s]Process SIB9
Line 8136: [%s]LTERRC_T_WAIT_SI timer stop error
Line 8170: [%s]NULL ptr argument at LteRrcSi_StartReadSiForCsgScan()
Line 8286: [%s]CLEAR OPFLAG :(%s-%s)
Line 8286: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 8313: [%s]LteRrcSi_StartCmasValidityTimer : Invalid CMAS DB Index[%d]
Line 8338: [%s]CMAS :: Stop Validity timer[%d]
Line 8344: [%s]LteRrcSi_StopCmasValidityTimer : Invalid CMAS DB Index[%d]
Line 8367: [%s]FindOldestCmasDbIndex :: CMAS buffer full.
Line 8406: [%s]ETWS :: Clear ETWS Primary data
Line 8438: [%s]LteRrcSi_DiscardBufferedEtwsSegment
Line 8487: [%s]LteRrcSi_DiscardBufferedCmasSegment. index[%d]
Line 8543: [%s]ETWS :: All ETWS messages are received. stop ETWS procedure
Line 8545: [%s]CLEAR OPFLAG :(%s-%s)
Line 8545: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 8573: [%s]NOT all segments have been received
Line 8580: [%s]Last segment is not received
Line 8696: [%s]LteRrcSi_ProcCmasValidityTimerExpiry : Invalid timer ID[%d].
Line 8700: [%s]LTERRC_T_WAIT_CMAS_%d Expired. discard all segment data.
Line 8731: [%s]ETWS : total received segment count is [%d]
Line 8741: [%s]ETWS : Memory alloc fail. try next time
Line 8750: [%s]ETWS : Need to check segment length. total[%d], current[%d]
Line 8793: [%s]CMAS : total received segment count is [%d]
Line 8803: [%s]CMAS : Memory alloc fail. try next time
Line 8812: [%s]CMAS : Need to check segment length. total[%d], current[%d]
Line 9006: [%s]NULL ptr argument at LteRrcSi_CheckWarningMsgRxStatus()
Line 9043: [%s]Discard any buffered ETWS msg segment upon entering a cell.
Line 9057: [%s]Discard any buffered CMAS msg segment upon entering a cell.
Line 9126: [%s]Receive ETWS primary notification. send to upper layer
Line 9178: [%s]ETWS Secondary :: duplicate count reachs the max count[%d]. stop read SIB11
Line 9196: [%s]Receive all ETWS secondary notification. send to upper layer
Line 9256: [%s]CMAS :: duplicate count reachs the max count[%d]. stop read SIB12
Line 9275: [%s]CMAS : send CMAS notification to upper layer
Line 9351: [%s]LteRrcSi_ProcSib14 :: SIB for Extended access class barring feautre.
Line 9356: [%s]LteRrcSi_ProcSib14 :: SIB14 is only applicable for a Rel11 capable device.
Line 9391: [%s]LteRrcSi_ProcSib15 :: Duplicate SIB15.
Line 9395: [%s]LteRrcSi_ProcSib15 :: The IE SIB15 contains the MBMS ServiceAreaIdentities(SAI) of the current and/ or neighbouring carrier frequencies.
Line 9553: [%s]ConvertUtcToJulian :: Year(%d) is smaller than 2000. need to check.
Line 9565: [%s]ConvertUtcToJulian :: Could not get the local time from UTC.
Line 9569: [%s]ConvertUtcToJulian :: Year:%d, Mon:%d, Day:%d.
Line 9572: [%s]ConvertUtcToJulian :: Hour:%d, Min:%d, Sec:%d, DayOfWeek:%d
Line 9649: [%s]LteRrcSi_ProcSib16 :: Duplicate SIB16.
Line 9653: [%s]LteRrcSi_ProcSib16 :: The IE SIB16 contains information related to the Coordinated Universal Time(UTC).
Line 9661: [%s]CLEAR OPFLAG :(%s-%s)
Line 9661: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 9676: [%s]CLEAR OPFLAG :(%s-%s)
Line 9676: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 10272: [%s]pLteRrcDbMain->pTcellInfo == NULL => return
Line 10280: [%s]Invalid DbUpdateRlt (%d) => return
Line 10284: [%s]Received SIs(0x%X) in this target cell so far (0x%X)
Line 10397: [%s]Shade: Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 10409: [%s]SET OPFLAG :(%s-%s)
Line 10409: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 10416: [%s]Tcell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 10422: [%s]No Tcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 10438: [%s]No Mcell when Boundary Ind comes, ignore Boundary Ind
Line 10520: [%s]SET OPFLAG :(%s-%s)
Line 10520: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 10528: [%s]Scell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 10546: [%s]SET OPFLAG :(%s-%s)
Line 10546: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 10553: [%s]Tcell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 10571: [%s]No Mcell when Boundary Ind comes, ignore Boundary Ind
Line 10614: [%s]Boundary IND rxed while doing Access.. it will be pending
Line 10688: [%s]SET OPFLAG :(%s-%s)
Line 10688: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 10698: [%s]Scell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 10716: [%s]SET OPFLAG :(%s-%s)
Line 10716: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 10723: [%s]Tcell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 10743: [%s]No Mcell when Boundary Ind comes, ignore Boundary Ind
Line 10845: [%s]CLEAR OPFLAG :(%s-%s)
Line 10845: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 10878: [%s]Invalid State #d
Line 10912: [%s]NULL ptr argument at LteRrcSi_ProcSiModInd()
Line 10918: [%s]pCellSibDb(PCI:%d) != pLteRrcDbMain->pScellInfo(PCI:%d) in LteRrcSi_ProcSiModInd()
Line 10924: [%s]SI Modification IND via Paging
Line 10929: [%s]Paging should be pended in ACC state (implementation decision)
Line 10933: [%s]SET OPFLAG :(%s-%s)
Line 10933: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 10936: [%s]CLEAR OPFLAG :(%s-%s)
Line 10936: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 10948: [%s]LTERRC_MALLOC_FAIL : FILE:%s LINE:%d FUNC:%s
Line 10956: [%s]SIB Modification is indicated again while waiting boundary
Line 10960: [%s]SIB Modification is indicated for different cell before mod boundary
Line 11020: [%s]CLEAR OPFLAG :(%s-%s)
Line 11020: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11021: [%s]CLEAR OPFLAG :(%s-%s)
Line 11021: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11065: [%s]Paging Msg :: ETWS Ind included. Start ETWS Procedure
Line 11066: [%s]SET OPFLAG :(%s-%s)
Line 11066: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11072: [%s]Duplicate ETWS Ind. Ignore this.
Line 11076: [%s]ProcPaging - Restart SI timer.
Line 11088: [%s]Paging Msg :: CMAS Ind included. Start CMAS Procedure
Line 11089: [%s]SET OPFLAG :(%s-%s)
Line 11089: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11095: [%s]Duplicate CMAS Ind. Ignore this.
Line 11099: [%s]ProcPaging - Restart SI timer.
Line 11124: [%s]Paging Msg :: EAB_MOD included. Start read SIB1.
Line 11125: [%s]SET OPFLAG :(%s-%s)
Line 11125: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11152: [%s]Paging Record included
Line 11161: [%s]Paging should be pended in ACC state (implementation decision)
Line 11171: [%s]Paging record received just after release msg
Line 11172: [%s]SET OPFLAG :(%s-%s)
Line 11172: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11176: [%s]Paging record received in CONN state => Trigger Force CSFB
Line 11185: [%s]Paging record received just after release msg
Line 11186: [%s]SET OPFLAG :(%s-%s)
Line 11186: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11194: [%s]Paging record received in CONN state => Check eNB
Line 11204: [%s]Paging record received in invalid state (%d)
Line 11212: [%s]SI Modification Ind included
Line 11217: [%s]Duplicate SI Modification Ind => Ignore
Line 11250: [%s]LteRrcSi_RemoveUnAvailSibCellList() is called
Line 11344: [%s]Unavailable Sib Cell Element (PCI %d) is removed 
Line 11375: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 11386: [%s]Mcell(%d)(%d) is Freed Here
Line 11605: [%s]SET OPFLAG :(%s-%s)
Line 11605: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11611: [%s]pTcellInfo is NULL NOW
Line 11671: [%s]CLEAR OPFLAG :(%s-%s)
Line 11671: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11763: [%s]pTcellInfo is NULL NOW
Line 11868: [%s][CheckEabStatus :: pScellInfo is NULL.
Line 11876: [%s][CheckEabStatus :: SIB14 was broadcasted but not received yet.
