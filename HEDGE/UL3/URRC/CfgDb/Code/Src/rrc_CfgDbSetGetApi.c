Line 74: [DB] ConfigDB is not Present
Line 294: [DB] Invalid URNTI at DbIndex[%d]
Line 315: [DB] Invalid CRNTI at DbIndex[%d]
Line 336: [DB][CV][ECELL_FACH] Clear C_RNTI_INFO_OK
Line 348: [DB][CV][ECELL_FACH] Clear H_RNTI_INFO_OK
Line 437: [ERROR] [DB] : RbId %d is NULL
Line 466: [ERROR] [DB] : RbId %d is NULL
Line 471: Update DetectedRlcSize : RbId %d, RlcSz %d
Line 742: [ERROR][DB] sameAsRbIdCount reached to maximum
Line 1077: [ERROR][DB] Wrong Trch Type: [%d] Received
Line 1136: [ERROR][DB] Wrong Trch Type: [%d] Received
Line 1332: [DB] Invalid TrchId at DbIndex[%d]
Line 1720: [ERROR][DB] RbId [%d] not present in config db
Line 1754: [ERROR][DB] Dl TrchId [%d] not present in config db
Line 1789: [ERROR][DB] Ul TrchId [%d] not present in config db
Line 1814: rrc_DbprepareRlInfoFromConfigDb: There is no DL RL Info in HHO so the previous RL info will be reused
Line 1892: [DB] Can't Calc UL RLC: Rbid %d
Line 2014: DLMsgDebug: UlTrchId %d, UlTrchType %d, RbId %d, UlRlcSize %d, UlMinWsn %d
Line 2161: [DB] DLMsgDebug: MsgDB UmRbId %d, UlRlcSize %d, DlRlcSize %d vs ConfigDB UmRbId %d, UlRlcSize %d, DlRlcSize %d
Line 2171: [DB] UmRlcAnalysis: DlUmRlcSzModRbBitmask=0x%x, UlUmRlcSzModRbBitmask=0x%x
Line 2199: DLMsgDebug: AmRbId %d, DlRlcSzWasKnownToRrc %d
Line 2201: DLMsgDebug: [MsgDB] DlRlcType %d, DlRlcSize %d, DlRlcLI %d vs [ConfigDB] DlRlcType %d, DlRlcSize %d, DlRlcLI %d
Line 2317: DLMsgDebug: RbId %d, DLSizeChanged %d
Line 2331: DLMsgDebug: [MsgDB] AmRbId %d, UlRlcSize %d, UlMinWsn %d vs [ConfigDB] AmRbId %d, UlRlcSize %d, UlMinWsn %d
Line 2342: AmRlcAnalysis: DlAmRlcSzModRbBitmask=0x%x, UlAmRlcSzModRbBitmask=0x%x, AmUlMinWsnModRbBitmask=0x%x
Line 2378: [DB] calcStartValueNeed: RbIdBitMask=0x%x
Line 2450: DlMsgDebug: StartValueCalcRequiredForRlcSizeChange, *csNeeded = %d, *psNeeded = %d
Line 2528: [ERROR] Wrong ChnlType: [%d] Received
Line 2562: [ERROR] Wrong ChnlType: [%d] Received
Line 2601: tfciCounter=%d, ChnlType = %d, IETR_TFCS_UL_DCH = %d 
Line 2614: rrc_DbsetCtfcCountAndSizeByChType: numOfDlCtfcToAdd  = %d
Line 2764: [ERROR] Wrong ChnlType: [%d] Received
Line 2956: dlCtfcTfciArray[%d] = %d
Line 2968: TFCS for DL same as UL, But UL parameters areNOT received in this msg. this->ie_tfcsPtr is NULL
Line 3102: [DB] [ERROR] Mapping not selected for RB[%d]
Line 3139: [DB] [ERROR] Mapping not selected for RB[%d]
Line 3178: [DB] [ERROR] Mapping not selected for RB[%d]
Line 3297: [DB] 10.3.6.24 Dl Rl Common Info [Not Present]
Line 3307: [DB] 10.3.6.88 Uplink DPCH Info [Not Present]
Line 3312: [DB] 10.3.6.27 Dl Info For Each Rl [Not Present]
Line 3419: [FAIL] dlTrchCount(%d) > capMaxDl(%d) or ulTrchCount(%d) > capMaxUl(%d)
Line 3772: [DB]  E-RNTI
Line 3777: [DB]  E-RNTI (Status : Changed)
Line 3792: [DB]  E-RNTI (Status : Unchanged, PriErnti(0x%x))
Line 3802: [DB]  E-RNTI (Status : Unchanged, SecErnti(0x%x))
Line 3808: [DB]  E-RNTI is OK
Line 3838: [DB]  E-DCH TTI
Line 3850: [DB]  E-DCH TTI (Status : Unchanged)
Line 3857: [DB]  E-DCH TTI (Status : Changed)
Line 3866: [DB]  E-DCH TTI (Status : Unchanged, TTI(%dmsec))
Line 3869: [DB]  E-DCH TTI is OK
Line 3875: [DB]  E-DPDCH (Convert periodForSchedInfoNoGrant)
Line 3880: [DB]  E-DPDCH (periodForSchedInfoNoGrant(%d))
Line 3885: [DB]  E-DPDCH (Convert periodForSchedInfoGrant)
Line 3890: [DB]  E-DPDCH (periodForSchedInfoGrant(%d))
Line 3898: [DB]  E-DCH TTI : edchInst is NULL
Line 3925: [DB]  E-DCH HARQ
Line 3934: [DB]  E-DCH HARQ (Status : Unchanged)
Line 3939: [DB]  E-DCH HARQ (Status : Changed)
Line 3948: [DB]  E-DCH HARQ (Status : Unchanged, HARQ(%d))
Line 3951: [DB]  E-DCH HARQ is OK
Line 3956: [DB]  E-DCH HARQ : edchInst is NULL
Line 3983: [DB]  E-DPCCH
Line 3992: [DB]  E-DPCCH (by ASU)
Line 3998: [DB]  E-DPCCH (Status : Unchanged)
Line 4013: [DB]  E-DPCCH (Status : Changed (PwrOffset Only))
Line 4017: [DB]  E-DPCCH ( happyBitDelay(%d))
Line 4021: [DB]  E-DPCCH is OK
Line 4025: [DB]  E-DPCCH (by no ASU)
Line 4032: [DB]  E-DPCCH (Status : Unchanged)
Line 4040: [DB]  E-DPCCH (Status : Changed, PwrOffset)
Line 4045: [DB]  E-DPCCH (Status : Changed, HappyBitDelay)
Line 4050: [DB]  E-DPCCH (Status : Changed, PwrInterpolation)
Line 4063: [DB]  E-DPCCH (Status : Unchanged, PwrOffset(%d), happyBitDelay(%d), PwrInterpolation(%d))
Line 4067: [DB]  E-DPCCH is OK
Line 4072: [DB]  E-DPCCH : edpcchInst is NULL
Line 4102: [DB]  E-DPDCH
Line 4121: [DB] [CV]	 [Prepare from DB] E-DPDCH (etfciTableIndex(%d), edchMinSetEtfci(%d), minReducedGainFactor(%d))
Line 4123: [DB] [CV]	 [Prepare from DB] E-DPDCH (maxChCode(%d), plNonMax(%d))
Line 4170: [DB]  Exceeds the size of array hence reduced E-DPDCH (RefEtfciInfo(num:%d))
Line 4174: [DB]  E-DPDCH (RefEtfciInfo(num:%d))
Line 4180: [DB] 						RefEtfci : %d, refEtfciPo : %d
Line 4184: [DB]  E-DPDCH (reportNoGrant(%d), reportGrant(%d))
Line 4186: [DB]  E-DPDCH (periodForSchedInfoNoGrant(%d), periodForSchedInfoGrant(%d))
Line 4192: [DB]  E-DPDCH (pwrOffsetSchedInfo(%d))
Line 4197: [DB]  E-DPDCH (use pwrOffsetSchedInfo(%d) from IE)
Line 4204: [DB]  E-DPDCH (threeIndexStepThreshold(%d))
Line 4209: [DB]  E-DPDCH (use threeIndexStepThreshold(%d) from IE)
Line 4216: [DB]  E-DPDCH (twoIndexStepThreshold(%d))
Line 4221: [DB]  E-DPDCH (use twoIndexStepThreshold(%d) from IE)
Line 4230: [DB]  E-DPDCH (Status : Changed)
Line 4238: [DB]  E-DPDCH (Status : Unchanged)
Line 4248: [DB]  E-DPDCH (etfciTableIndex(%d), edchMinSetEtfci(%d), minReducedGainFactor(%d))
Line 4250: [DB]  E-DPDCH (maxChCode(%d), plNonMax(%d))
Line 4254: [DB]  E-DPDCH (RefEtfciInfo(num:%d))
Line 4260: [DB] RefEtfci : %d, refEtfciPo : %d
Line 4302: [DB]  E-DPDCH (reportNoGrant(%d), reportGrant(%d))
Line 4304: [DB]  E-DPDCH (periodForSchedInfoNoGrant(%d), periodForSchedInfoGrant(%d))
Line 4306: [DB]  E-DPDCH (pwrOffsetSchedInfo(%d))
Line 4308: [DB]  E-DPDCH (threeIndexStepThreshold(%d), twoIndexStepThreshold(%d))
Line 4312: [DB]  E-DPDCH is OK
Line 4317: [DB]  E-DPDCH : edpdchInst is NULL
Line 4348: [DB]  Serving E-DCH RL
Line 4353: [DB]  Serving E-DCH RL (old servingCpich (%d))
Line 4360: [DB]  Serving E-DCH RL : new & old priCpich are same
Line 4366: [DB]  Serving E-DCH RL (Status : Unchanged)
Line 4371: [DB]  Serving E-DCH RL (Status : Changed)
Line 4376: [DB]  Serving E-DCH RL (prev agchAct (%d), prev hichAct (%d), prev rgchAct (%d))
Line 4382: [DB]  Serving E-DCH RL (eagchChCode (%d))
Line 4390: [DB]  Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 4398: [DB]  Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 4401: [DB]  Serving E-DCH RL (post agchAct (%d), post hichAct (%d), post rgchAct (%d))
Line 4411: [DB]  Serving E-DCH RL (Status : Changed, priCpich(0x%x)))
Line 4416: [DB]  Serving E-DCH RL (by ASU)
Line 4427: [DB]  Serving E-DCH RL (non-serving RL to Serving E-DCH RL)
Line 4436: [DB]  Serving E-DCH RL (get HICH info from RL Addition Info)
Line 4446: [DB]  Serving E-DCH RL (get RGCH info from RL Addition Info)
Line 4461: [DB]  Serving E-DCH RL (get HICH info from DB)
Line 4462: [DB]  Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 4470: [DB]  Serving E-DCH RL (get RGCH info from DB)
Line 4471: [DB]  Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 4482: [DB]  Serving E-DCH RL (Status : Unchanged)
Line 4489: [DB]  Serving E-DCH RL (eagchChCode (%d))
Line 4491: [DB]  Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 4498: [DB]  Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 4505: [DB]  Serving E-DCH RL (agchAct (%d), hichAct (%d), rgchAct (%d))
Line 4510: [DB]  Serving E-DCH RL is OK
Line 4690: [DB]  remove Serving E-DCH RL
Line 4717: [DB]  Non-Serving E-DCH RL (Status : Changed, priCpich (0x%X))
Line 4726: [DB]  Non-Serving E-DCH RL (set Old hichChCode (%d), hichSignSeq (%d) to New Info)
Line 4739: [DB]  Non-Serving E-DCH RL (release Non-serving cell (priCpich (0x%x) by ehich release))
Line 4750: [DB]  Non-Serving E-DCH RL (Status : Changed, priCpich (0x%X))
Line 4752: [DB]  Non-Serving E-DCH RL (New Non-serving cell is equal to Old serving cell (priCpich(0x%x)))
Line 4762: [DB]  Non-Serving E-DCH RL (release Non-serving cell (priCpich (0x%x) by ehich release))
Line 4770: [DB]  Non-Serving E-DCH RL (use old serving cell info (ehichChCode (%d), ehichSignSeq (%d)))
Line 4780: [DB]  Non-Serving E-DCH RL (use old serving cell info (ergchSignSeq (%d), ergchCombIndex (%d)))
Line 4792: [DB]  Non-Serving E-DCH RL (Invalid Non-serving cell configuration (priCpich (0x%x)))
Line 4850: [DB]  Non-Serving E-DCH RL (Status : Unchanged, priCpich (0x%X))
Line 4855: [DB]  Non-Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 4863: [DB] 	Non-Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 4870: [DB]  Non-Serving E-DCH RL (hichAct (%d), rgchAct (%d))
Line 4914: [DB]  Non-Serving E-DCH RL (Old servingCpich (0x%x))
Line 4923: [DB]  Non-Serving E-DCH RL (Old serving eagchChCode (%d), hichChCode (%d), hichSignSeq (%d))
Line 4929: [DB]  Non-Serving E-DCH RL (Old serving ergchSignSeq (%d), ergchCombIndex (%d))
Line 4948: [DB]  Non-Serving E-DCH RL (Old Non-serving count (%d))
Line 4960: [DB]  Non-Serving E-DCH RL (Old non-servingCpich (0x%x))
Line 4962: [DB]  Non-Serving E-DCH RL (Old non-serving hichChCode (%d), hichSignSeq (%d))
Line 4968: [DB]  Non-Serving E-DCH RL (Old non-serving ergchSignSeq (%d), ergchCombIndex (%d))
Line 4996: [DB]  Non-Serving E-DCH RL (New Non-serving cell is equal to Old Non-serving cell (priCpich(0x%x)))
Line 5038: [DB]  Non-Serving E-DCH RL (Status : Changed, priCpich (0x%X))
Line 5043: [DB]  Non-Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 5051: [DB]   Non-Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 5058: [DB]  Non-Serving E-DCH RL (hichAct (%d), rgchAct (%d))
Line 5066: [DB]  Non-Serving E-DCH RL : All RLs are replaced (HHO)
Line 5108: [DB] invalid configuration (E-DCH TTI info does not exist)
Line 5136: [DB] invalid Periodicity for Scheduling Info = %d
Line 5166: [DB] Set E-RNTI (isPriErnti(%d), PriErnti( 0x%x), isSecErnti(%d), SecErnti(0x%x))
Line 5664: [DB] GetRemainingEdchActiveSet: [fail] - PcpichScrCode > 511
Line 5672: [DB] GetRemainingEdchActiveSet: [success] - found P-CPICH scrambling code = %d
Line 5687: [DB] GetRemainingEdchActiveSetCount
Line 5705: [DB] Class_GetRemainingEdchActiveSetInst: [fail] - Index > Asn_maxEDCHRL+2
Line 5711: [DB] Class_GetRemainingEdchActiveSetInst: [success] - found RemainingEdchActiveSetInst [Index(%d), Cpich(0x%x)]
Line 5751: [DB] DLMsgDebug: Hsupa Rbid %d, UlRlcSize %d
Line 5777: [DB][CV][ECELL_FACH] H_RNTI_INFO_OK
Line 5867: [DB][CV][ECELL_FACH] CELL_FACH_OK
Line 5871: [DB][CV][ECELL_FACH] No CELL_FACH
Line 5879: [DB]  currently not implemented
Line 5973: [DB][CV][ECELL_FACH] DB H_RNTI_INFO_OK
Line 6234: [DB][CV][ECELL_FACH] MAC_EHS_Q_INFO_OK
Line 6391: [DB][CV][ECELL_FACH] HARQ_OK
Line 6405: [DB][CV][ECELL_FACH] HARQ_FROM_SIB5_OK
Line 6962: >> Start preparing HSDPA info from ConfigDB <<
Line 7007: >> End preparing HSDPA info from ConfigDB <<
Line 7555: Checking HSDSCH reception 
Line 7567: [DB] HS_DSCH_RECEPTION is OK (%x)
Line 7572: [DB] HS_DSCH_RECEPTION is not OK (%x)
Line 7613: EDCH_TRANSMISSION_TDD_NONSHED is OK (%x)
Line 7618: EDCH_TRANSMISSION_TDD_SHED is OK (%x)
Line 7623: EDCH_TRANSMISSION_TDD_SHEDNONSCHED_OK is OK (%x)
Line 7632: [DB] E_DCH_TRANSMISSION is OK (%x)
Line 7637: [DB] E_DCH_TRANSMISSION is not OK (%x)
Line 7700: [DB] DL_SECONDARY_HS_DSCH_RECEPTION is OK (%x) for cell %d
Line 7706: [DB] DL_SECONDARY_HS_DSCH_RECEPTION is not OK (%x), CellConfigStatus (%d) for cell %d
Line 7767: [DB] DL_SECONDARY_CELL_DCH_OK
Line 7946: [DB] DL_SECONDARY_HARQ_INFO_OK as memPartitioningType is IMPLICIT 
Line 7950: [DB] DL_SECONDARY_HARQ_INFO_OK as memPartitioningType is EXPLICIT 
Line 8238: [DB] DL_SECONDARY_HS_DSCH_CELL_OK for cell %d
Line 8248: [DB] DL_SECONDARY_HS_DSCH_CELL_OK for cell %d
Line 8350: [DB] DlSecTsnFieldExtConfigStatus OK
Line 8355: [DB] DlSecTsnFieldExtConfigStatus NOT OK
Line 8682: [DB] RL count reached to max for DB: [%u]
Line 8687: [DB] Invalid Rl Type: [%u] Received for DB: [%u]
Line 8716: [DB] No of RLs: [%u] in DB: [%u], yet no free Index
Line 8791: [DB] Pcpich: [%u], not present in Config DB
Line 8828: [DB] New RL is added with PSC : [%u], in DB: [%u], at RlIndex: [%u], TotalRLs: [%d]
Line 8849: [DB] New RL is added with PSC : [%u], in DB: [%u], at RlIndex: [%u], TotalRLs: [%d]
Line 8892: [DB] There is no DL RL Info list from N/W so Old RLs were used
Line 9044: [DB] RL count reached to max for DB: [%u]
Line 9069: [DB] New RL is added From Source DB: [%u] in Target DB:[%u] with PSC : [%u], at RlIndex: [%u], TotalRLs in Target DB: [%d]
Line 9103: [DB] New RL is added From Source DB: [%u] in Target DB:[%u] with PSC : [%u], at RlIndex: [%u], TotalRLs in Target DB: [%d]
Line 9120: [DB] Invalid RL type received for PSC: [%u], DB: [%u]
Line 9158: [DB] [CV] DL_SECONDARY_H_RNTI_OK for cell %d
Line 9175: [DB] dl64QAMConfigured= %d for cell %d
Line 9194: [DB] [CV] DL_SECONDARY_HS_DSCH_CELL_OK for cell %d
Line 9195: [DB] SecondaryHsdschCellStatus->primaryCpich = %u 
Line 9230: [DB] [CV] DL_SECONDARY_HS_SCCH_INFO_OK for cell %d
Line 9247: [DB] dlTxDivFromServHsdschCellConfiguredStatus = %d 
Line 9264: [DB] [CV] DlSecCellInfo_addIeSecCellDlUarfcn = %d of cell %d
Line 9282: [DB] measurementPowerOffset = %d 
Line 9284: [DB] [CV] DL_SECONDARY_MEAS_POWER_OFFSET_INFO_OK for cell %d
Line 9376: [DB] invalid E-DCH TTI
Line 9405: [DB]  E-DPDCH (Convert periodForSchedInfoNoGrant)
Line 9410: [DB]  E-DPDCH (periodForSchedInfoNoGrant(%d))
Line 9415: [DB]  E-DPDCH (Convert periodForSchedInfoGrant)
Line 9420: [DB]  E-DPDCH (periodForSchedInfoGrant(%d))
Line 9477: [DB]  Serving E-DCH RL
Line 9479: [DB]  Serving E-DCH RL (priCpich (0x%x))
Line 9481: [DB]  Serving E-DCH RL (isAgch (%d), hichAct (%d), rgchAct (%d))
Line 9488: [DB]  Serving E-DCH RL (eagchChCode (%d))
Line 9496: [DB]  Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 9504: [DB]  Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 9512: [DB]  Serving E-DCH RL is OK
Line 9568: [DB]  Serving E-DCH RL is OK and All Information Taken from ConfigDb
Line 9573: [DB] Received Serving E-DCH RL Cpich is different from ConfigDb
Line 9647: [DB] invalid Happy Bit Delay Condition
Line 9666: [DB]  E-DPCCH
Line 9680: [DB]  E-DPCCH (PwrOffset(%d), happyBitDelay(%d))
Line 9694: [DB]  E-DPCCH (by ASU, PwrOffset(%d) Only)
Line 9701: [DB]  E-DPCCH is OK
Line 9726: [DB]  E-DPDCH (partial : by ASU)
Line 9733: [DB]  E-DPDCH (RefEtfciInfo(num:%d))
Line 9738: [DB] RefEtfci : %d, refEtfciPo : %d
Line 9749: [DB]  E-DPDCH (pwrOffsetSchedInfo(%d))
Line 9757: [DB]  E-DPDCH (threeIndexStepThreshold(%d))
Line 9765: [DB]  E-DPDCH (twoIndexStepThreshold(%d))
Line 9800: [DB]  Non-Serving E-DCH RL
Line 9809: [DB]  Non-Serving E-DCH RL (priCpich (0x%x))
Line 9811: [DB]  Non-Serving E-DCH RL (hichAct (%d), rgchAct (%d))
Line 9818: [DB]  Non-Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 9826: [DB]  Non-Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 9849: [DB]  E-DPDCH
Line 9859: [DB]  E-DPDCH (etfciTableIndex(%d), edchMinSetEtfci(%d), (RefEtfciInfo(num:%d))
Line 9866: [DB] 						RefEtfci : %d, refEtfciPo : %d
Line 9873: [DB]  E-DPDCH (maxChCode(%d), plNonMax(%d), reportNoGrant(%d), reportGrant(%d))
Line 9879: [DB]  E-DPDCH (asnPeriodicityNoGrant(%d))
Line 9886: [DB]  E-DPDCH (asnPeriodicityGrant(%d))
Line 9900: [DB]  E-DPDCH (pwrOffsetSchedInfo(%d), threeIndexStepThreshold(%d), twoIndexStepThreshold(%d), minReducedGainFactor(%d))
Line 9906: [DB]  E-DPDCH is OK
Line 10029: [BAND changed] OLD(%d) -> NEW(%d)
Line 10036: SendUrrcMmScellAsInfoInd : BandId(%d), Uarfcn(%d), RrcState(%d)
Line 10040: Wrong UARFCN(%d), BandId(%d) were detected so it won't be updated to SIPC
Line 10256: Number of UL DPDCHs is ZERO, and UL DCH [%d] has NonZero data rate
Line 10262: Number of UL DPDCHs is ZERO, and UL DCH [%d] has Zero data rate
Line 10589: [DB] invalid CQI Feedback Cycle=%d
Line 10887: [DB] set compModeInfoArrayIdx[%d], Tgpsi[%d]
Line 10891: [DB] Invalid ArrayIndex %d
Line 11197: [DB] invalid T1=%d
Line 11240: [DB] invalid MAC-hs window size=%d
Line 11263: [DB] invalid Treset=%d
Line 11297: [DB][CV][ECELL_FACH] MAC_EHS_Q_INFO_OK
Line 11375: [DB] DL_SECONDARY_HARQ_INFO_OK as memPartitioningType is IMPLICIT 
Line 11379: [DB] DL_SECONDARY_HARQ_INFO_OK as memPartitioningType is EXPLICIT 
Line 11438: [DB][CV][ECELL_FACH] HARQ_INFO_OK
Line 11539: [ERROR][DB] All Rab Index Occupied, Db Index: [%u]
Line 11542: [ERROR][DB] Total Rab count: [%u], But No Free RAB Index Db Index: [%u]
Line 11689: [DB] msgAsn1Check: signalling connection doesnt exist for RAB
Line 11697: [DB] msgAsn1Check: RAB [%d] CN domain discrepancy
Line 11739: [ERROR][DB] Invalid RL-Type [%d] in config Db
Line 11754: [DB] PSC(%d) is included in MsgDB instead of ConfigDB
Line 11765: [DB] IgnorableCellIncluded: PSC(%d) is not included in ActiveSet
Line 11813: [ERROR][DB] Invalid RL-Type [%d] in config Db
Line 11875: [DB] rrc_DbmsgProcessCheckRlCmnInfo TDD mode
Line 11894: [DB] msgProcess: 8.3.5.1.2 - Default DPCH Offset Value missing
Line 11912: [DB] msgProcess: 8.3.5.1.2 - relation failure
Line 11921: [DB] msgProcess: 8.3.5.1.2 - relation failure
Line 11927: [DB] msgProcess: 8.3.5.1.2 - DPCH instance missing
Line 11933: [DB] msgProcess: 8.3.5.1.2 - Per RL instance missing
Line 11960: [DB] msgProcess: 8.3.5.1.2 - Default DPCH Offset Value missing
Line 11968: [DB] rrc_DbmsgProcessCheckRlCmnInfo not a valid mode
Line 12033: DlMsgDebug: IsCipheringAndTmActive, *csDomain = %d, *psDomain = %d
Line 12057: DlMsgDebug: StartValueCalcRequiredForRbSetup, cnDom = %d
Line 12069: DlMsgDebug: StartValueCalcRequiredForRbSetup, cnDom = %d
Line 12087: DlMsgDebug: StartValueCalcRequiredForRbSetup, cnDom = %d
Line 12129: DlMsgDebug: DetermineAffectedCnDomains, *csDomain = %d, *psDomain = %d
Line 12428: [DB] RB::GetRlcCipheredSrbList
Line 12433: [DB] RB::GetRlcCipheredSrbList: [fail] - no security manager
Line 12438: [DB] RB::GetRlcCipheredSrbList: [fail] - different domain types
Line 12464: [DB] RB::GetRlcCipheredSrbList: [success]
Line 12477: [DB] RB::GetRlcCipheredRbList
Line 12481: [DB] RB::GetRlcCipheredRbList: [success] - TM only
Line 12511: [DB] RB::GetRlcCipheredRbList: [success] - AM or UM
Line 12518: [DB] RB::GetRlcCipheredRbList: [fail] - wrong CnDomainId
Line 12542: [DB] Db Commit, RL Context Moved From Index: [%u], to Index: [%u]
Line 12560: [ERROR][DB] No RL Info present at RL Index [%d] in config Db
Line 12566: [ERROR][DB] Invalid RL Type [%d] present in Db
Line 12585: [DB] Db Commit, RAB Context Moved From Index: [%u], to Index: [%u]
Line 12594: [ERROR][DB] No RAB Info present at Rab Index [%d] in config Db
Line 12950: getHarqMemSize=%d
Line 13298: [DB] L2uCandiCellInfo: WARNING - No matching PSC, Target (%d) vs. L2U (%d)
Line 13304: [DB] L2uCandiCellInfo: WARNING - No matching UARFCN, Target (%d) vs. L2U (%d)
Line 13312: [DB] Number of candidate cells from LTE info is zero (%d) or invalid UARCN (%d)
Line 13323: [DB] L2uCandiCellInfo: [Country Info %d, HO type %d] Set IgnoreSttd to TRUE
Line 13329: [DB] L2uCandiCellInfo: [Country Info %d, HO type %d] Set IgnoreSttd to FALSE
Line 13390: rrc_DbphEdchInfo_ProcessOptionality called
Line 13425: rrc_DbphDlRlInfo_ProcessOptionality called
Line 13445: [ERROR][DB] PrimaryCpich: [%d] not present in Msg Db
Line 13466: rrc_DbphDlSecondaryCellInfo_ProcessOptionality called
Line 13511: rrc_DbphFreqInfo_ProcessOptionality called
Line 13527: rrc_DbphRLAdditionInfo_ProcessOptionality called
Line 13563: rrc_DbphDlDpchInfoCmnRl_ProcessOptionality called
Line 13575: rrc_DbphDlRlCmnInfo_ProcessOptionality called
Line 13597: rrc_DbphServingHsdschInfo_ProcessOptionality called
Line 13647: rrc_DbrbMapInfo_ProcessOptionality called
Line 13677: RB[%d] Mapping from ConfigDB
Line 13699: rrc_DbrbPdcpInfo_ProcessOptionality called
Line 13720: rrc_DbrbRlcInfo_ProcessOptionality called
Line 13740: rrc_DbrbSigSetInfoList_ProcessOptionality called
Line 13761: rrc_DbrbSetInfoList_ProcessOptionality called
Line 13784: rrc_DbrbInfoAffList_ProcessOptionality called
Line 13804: rrc_DbrbRabInfo_ProcessOptionality called
Line 13811: rrc_DbtrChUlAddOrReconInfo_ProcessOptionality called
Line 13837: rrc_DbtrChDlAddOrReconInfo_ProcessOptionality called
Line 13852: rrc_DbtrTfcs_ProcessOptionality called
Line 14245: [DB] getAllActiveAmUmDrbs: [fail] - DrbIdAr is NULL
Line 14267: [DB] getAllActiveAmUmDrbs: [fail] - DRB Id = %d has been stopped
Line 14279: [DB] getAllActiveAmUmDrbs: [success] - DrbId = %d inserted
Line 14339: [DB] rrc_DbgetAllActiveAmUmDrbsForDomain: [fail] - DRB Id = %d has been stopped
Line 14351: [DB] rrc_DbgetAllActiveAmUmDrbsForDomain: [success] - DrbId = %d inserted
Line 14376: [DB] rrc_DbgetAllActiveAmUmDrbsForCsDomain
Line 14380: [DB] DB::getAllActiveAmUmDrbsForCsDomain: [fail] - DrbIdArr is NULL
Line 14406: [DB] rrc_DbgetAllActiveAmUmDrbsForPsDomain
Line 14410: [DB] DB::getAllActiveAmUmDrbsForPsDomain: [fail] - DrbIdArr is NULL
Line 14483: [DB] rrc_DbIsT315Rab
Line 14501: [DB] rrc_DbIsT314Rab
Line 14525: [DB] rrc_DbCalcUlDCHMaxUplinkTti
Line 14532: [DB] CalcUlDCHMaxUplinkTti: [not available] - UlTrChCount is 0
Line 14554: [DB] CalcUlDCHMaxUplinkTti: [success] - max UL TTI = %d
Line 14580: [DB] rrc_DbCalcDlDCHMaxUplinkTti
Line 14587: [DB] CalcDlDCHMaxUplinkTti: [not available] - UlTrChCount is 0
Line 14609: [DB] CalcDlDCHMaxUplinkTti: [success] - max UL TTI = %d
Line 14634: [DB] rrc_DbCalcTrChMaxUpLinkDownLinkTti
Line 14641: [DB] CalcTrChMaxUpLinkDownLink HS-DSCH TTI: [success]  = %d
Line 14646: [DB] CalcTrChMaxUpLinkDownLink: [fail] - could not get max DL TTI
Line 14654: [DB] CalcTrChMaxUpLinkDownLink E-DCH TTI: [success]  = %d
Line 14659: [DB] CalcTrChMaxUpLinkDownLink: [fail] - could not get max UL TTI
Line 14672: [DB] CalcTrChMaxUpLinkDownLink: [success] - max TTI = %d
Line 14715: [DB] rrc_DbgetCpichsForAllFdpchRls
Line 14726: [DB] rrc_DbgetCpichsForAllFdpchRls: [success] - DlFdpchRadioLinkCount = 0
Line 14741: [DB] rrc_DbgetCpichsForAllFdpchRls: [success]
Line 14773: [DB] rrc_DbgetIsDlFdpchRlExistforPSC: [fail] - PcpichScrCode > 511
Line 14785: [DB] rrc_DbgetIsDlFdpchRlExistforPSC: [success] - found P-CPICH scrambling code = %d
Line 14841: [DB] rrc_DbgetCpichsForAllRls: [success] - DlRadioLinkCount = 0
Line 14856: [DB] rrc_DbgetCpichsForAllRls: [success]
Line 14888: [DB] rrc_DbgetIsDlRlExistforPSC: [fail] - PcpichScrCode > 511
Line 14900: [DB] rrc_DbgetIsDlRlExistforPSC: [success] - found P-CPICH scrambling code = %d
Line 15041: [DB]  [ECELL_FACH] [CV] prepareCommonHsdschIeFromConfigDb
Line 15047: [DB][CV][ECELL_FACH] HSDSCH_COMMON_SYSINFO_IE_OK
Line 15048: [DB][CV][ECELL_FACH] HARQ_FROM_SIB5_OK
Line 15055: [DB][CV][ECELL_FACH] HsDschCmnSysInfo Not present
Line 15060: [DB][CV][ECELL_FACH] SIB5 Not present
Line 15077: [DB][CV][ECELL_FACH] C_RNTI_INFO_OK
Line 15081: [DB][CV][ECELL_FACH] No C_RNTI_INFO
Line 15113: [DB][CV][ECELL_FACH] HS_DSCH_RECEPTION_CELL_FACH_STATE is OK (0x%X)
Line 15119: [DB][CV][ECELL_FACH] HS_DSCH_RECEPTION_CELL_FACH_STATE is not OK (0x%X), IsECellFachSupported %d
Line 15189: [DB] [ECELL_FACH_DRX] [CV] HS_DSCH_DRX_CELL_FACH_STATUS is OK
Line 15194: [DB] [ECELL_FACH_DRX] [CV] HS_DSCH_DRX_CELL_FACH_STATUS is not OK 
Line 15195: [DB] [ECELL_FACH_DRX] [CV] IsECellFachDrxSupportedByUE[%d], IsTargetStateCellFach[%d],IsDedicatedHrntiConfigured[%d]
Line 15197: [DB] [ECELL_FACH_DRX] [CV] IsECellFachDrxSupportedOnServCell[%d], IsDrxInterruptionbyhsdsch[%d]
Line 15333: [DB][CV][ECELL_FACH] requestMachsReset
Line 15337: [DB][CV][ECELL_FACH] No requestMachsCommonReset
Line 15353: rrc_DbtrChHarqInfo_ProcessOptionality called
Line 15392: [DB][CV][ECELL_FACH] Clear HARQ_OK
Line 15428: SameAsRbId %d is not found in MsgDB or ConfigDB
Line 15458: Rlc Mode Not correct for RbId: [%d]
Line 15467: Rlc Mode Not correct for RbId: [%d]
Line 15476: Rlc Mode Not correct for RbId: [%d]
Line 15485: Rlc Mode Not correct for RbId: [%d]
Line 15521: No Mapping info in IE for Ul for Rb [%d]
Line 15526: No Mapping info in IE for Ul for Rb [%d]
Line 15531: No of UL logical channel is 2 for Rb [%d]
Line 15536: No of DL logical channel is 2 for Rb [%d]
Line 15541: No of DL logical channel is 2/Ul RLC Modeis UM for Rb [%d]
Line 15557: rrc_DbrbRbInfoReconList_ProcessOptionality called
Line 15585: [DB] error in Old HS-DSCH Configuration Status
Line 15603: [DB] error in Old E-DCH Configuration Status
Line 15622: [DB] error in Old MAC-EHS HS-DSCH Configuration Status
Line 15640: [DB] error in Old MAC-HS HS-DSCH Configuration Status
Line 15689: [DB] No RL exists in Config DB
Line 15697: [DB] primaryCpich %d, globalCellId 0x%x
Line 15717: [DB] Invalid RL Type %d
Line 15734: [DB] No RL exists in Config DB
Line 15760: [DB] Invalid RL Type %d
Line 15765: [DB] primaryCpich %d, globalCellId 0x%x
Line 15901: [DB]  E-RUCCH
Line 15908: [CB] E-RUCCH : OK
Line 15918: [DB]  E_RUCCH_OK
Line 15924: [CB] E-RUCCH : Config-DB NOT VALID
Line 16045: [CB]  E-PUCH
Line 16052: [CB] E-PUCH : OK
Line 16064: [CB] E-PUCH : msgDbIndex is NOT VALID
Line 16137: [DB] Non-scheduled transmission grant info
Line 16175:  E_NONSHE_TX_GRANT_OK 
Line 16180: [CB] Non-scheduled Tx Grant info: msgDbIndex is NULL
Line 16236: [CB]  E-HICH
Line 16244: [CB] E-HICH : OK
Line 16258:  EDCH_HICH_TDD_OK 
Line 16264: [CB] E-HICH : DB info  is NOT VALID
Line 16288: [DB]  E-AGCH
Line 16295: [CB] E-AGCH : OK
Line 16309: [DB]  E-AGCH is OK
Line 16313: [DB]  E-AGCH DB is INVALID
Line 16319: [DB]  E-AGCH : eagchInst is NULL
Line 16619: rrc_DbprepareHsdpaHsscchTddFromConfigDb:	hsdpaDb_p->hsscchPowerInfoTdd.AckNackPowerOffset %d,hsdpaDb_p->hsscchPowerInfoTdd.pwrLevelHsSich %d
Line 16621: rrc_DbprepareHsdpaHsscchTddFromConfigDb: hsdpaDb_p->hsscchPowerInfoTdd.TpcstepSize %d ,hsdpaDb_p->hsscchPowerInfoTdd.BlerTarget %d
Line 16623: rrc_DbprepareHsdpaHsscchTddFromConfigDb:hsdpaDb_p->hsscchPowerInfoTdd.PowercontrolGap %d ,hsdpaDb_p->hsscchPowerInfoTdd.isPowercontrolGap %d 
Line 16625: rrc_DbprepareHsdpaHsscchTddFromConfigDb:hsdpaDb_p->hsscchPowerInfoTdd.ispathlossCompensationSwitch %d
Line 16638: rrc_DbprepareHsdpaHsscchTddFromConfigDb:HsScch Info taken from IE: STAT CHANGED
Line 16643: rrc_DbprepareHsdpaHsscchTddFromConfigDb:HsScch Info taken from IE: hsdpaDb_p ->hsscchSetCount = %d
Line 16652: rrc_DbprepareHsdpaHsscchTddFromConfigDb: hsdpaDb_p ->hsscchSetCount = %d
Line 16870: [DB] set rrc_DbTDPCHInfoSetTimingAdvance[%d]
Line 16898: [DB] HSPA / HSDPA configured 
Line 16903: [DB] HSPA / HSDPA  not configured 
Line 17087: rrc_TDbTDPCHInfoSetNumUlCCTrChToAdd [%d]
Line 17109: uppchPosInfo [%d]
Line 17135: rrc_DbSetDlTdpch_DlCCTrchInfo numCCTrCHtoAdd[%d], numCCTrCHtoRemove[%d]
Line 17292: rrc_DbSetHsupaEPuchEtfcsInfo qpskListCount [%d] wrong
Line 17309: rrc_DbSetHsupaEPuchEtfcsInfo qamListCount [%d] wrong
Line 17407: Error: SetEpuchTSConfigList::numOfEpuchTsConfig = %d
Line 17616: Error: SetEpuchTSConfigList::PrachInfoIdx = %d
Line 17646: Error: SetEpuchTSConfigList::PrachInfoIdx = %d
Line 17674: Error: SetEpuchTSConfigList::PrachInfoIdx = %d
Line 17700: [CV] [Prepare from IE] => EAGCH
Line 17735:  [CV] [Prepare from IE] => EAGCH SetConfig
Line 17771:  [CV] [Prepare from IE] => EHICH
Line 17804:  [CV] [Prepare from IE] => EHICH
Line 17939: [DB] rrc_DbSetPccpchInfo: CellParamId = %d, SCTDindicator = %d, TSTDIndicator = %d
Line 17959: [DB] rrc_DbSetHsupaPccpchInfo: CellParamId = %d, SCTDindicator = %d, TSTDIndicator = %d
Line 18089: Rl DB Invalid (CfgDb %, MsgDb %d)
Line 18129: [DB] DbIdx %d, numOfRl == 0
Line 18153: [DB] DbIdx %d, numOfRl == 0
