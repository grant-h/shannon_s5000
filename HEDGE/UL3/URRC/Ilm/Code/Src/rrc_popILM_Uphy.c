Line 101: rrc_CUPHY_UMTS_RATMode_REQ_setParams : AgapCgiMode set to %d
Line 173:  Number of Freqs set to %d in Blind Freq Scan Req ILM
Line 196:  Adding Freq %d to Blind Ferq Scan Req ILM
Line 200: TheFreqInfoIndx[0x%x] >= numOfFreqToAdd[0x%x]
Line 279: [URRC BCH in DCH]  rrc_CUPHY_BCHResConf_REQ_setParams: IsDCH = %d
Line 291: rrc_CUPHY_BCHResConf_REQ_setParams: isDBchEnabled = %d
Line 309: ==============CUPHY_BCH_RESOURCES_CONFIG_REQ=================
Line 310: dlUarfcn = %d
Line 311: primaryScrCode = %d
Line 312: bchId = %d
Line 313: IsBPLMN = %d
Line 314: MibRepFactor = %d
Line 315: isDBchEnabled = %d
Line 318: ==============CUPHY_BCH_RESOURCES_CONFIG_REQ=================
Line 322: ==============CUPHY_BCH_RESOURCES_MODIFY_REQ=================
Line 323: MibRepFactor = %d
Line 325: ==============CUPHY_BCH_RESOURCES_MODIFY_REQ=================
Line 330: NoOfSIBsToAdd = %d
Line 333: SIBAddInfo[%d].SIBType = %d
Line 334: SIBAddInfo[%d].SegCount = %d
Line 336: SIBAddInfo[%d].SibPos[%d] = %d
Line 337: SIBAddInfo[%d].SibRep = %d
Line 339: NoOfSIBsToCancel = %d
Line 342: SIBToCancel[%d].SIBType = %d
Line 350: ~~[Tx]CUPHY_SIG_START_IND: SignalingPriority = %s __ ActivationCfn = %d~~
Line 367: ==============CUPHY_PS_SUPPORT_IND=================
Line 368: PsSupport = %d
Line 384: ==============CUPHY_CGI_ACQUISITION_CONFIG_REQ=================
Line 385: dlUarfcn = %d
Line 386: primaryScrCode = %d
Line 387: UtraSiAcquisitionForHoMode = %d
Line 388: UmtsCellTimingOffset.sfn = %d
Line 389: UmtsCellTimingOffset.slot = %d
Line 390: UmtsCellTimingOffset.chip = %d
Line 391: UmtsCellTimingOffset.refCounterFrame = %d
Line 392: UmtsCellTimingOffset.refCounterSlot = %d
Line 393: UmtsCellTimingOffset.refCounterChip = %d
Line 394: ==============CUPHY_CGI_ACQUISITION_CONFIG_REQ=================
Line 399: ==============CUPHY_SFN_ACQUISITION_CONFIG_REQ=================
Line 400: dlUarfcn = %d
Line 401: primaryScrCode = %d
Line 402: bchId = %d
Line 403: IsBPLMN = %d
Line 405: isDBchEnabled = %d
Line 409: ==============CUPHY_SFN_ACQUISITION_CONFIG_REQ=================
Line 414: ==============CUPHY_SFN_ACQUISITION_RELEASE_REQ=================
Line 415: bchId = %d
Line 416: IsBPLMN = %d
Line 417: ==============CUPHY_SFN_ACQUISITION_RELEASE_REQ=================
Line 556: [URRC BCH in DCH]  rrc_CUPHY_BCHResRel_REQ_setParams: IsDCH = %d
Line 685: [URRC_FREQ_AID] rrc_CUPHY_LCS_Freq_Aid_REQ_Create Sending req->start(%d), rat(%d),tcxo_type(%d),reserved(%d)
Line 790: [U2L DEBUG] req->isU2LHO(%d), req->numOfEutraFreqs(%d)
Line 797: [U2L DEBUG] req->lteCellInfo[%d].earfcn = %d
Line 798: [U2L DEBUG] req->lteCellInfo[%d].numOfEutraCells = %d
Line 811: [U2L DEBUG] req->lteCellInfo[%d].eutraCellList[%d].earfcn = %d
Line 813: [U2L DEBUG] req->lteCellInfo[%d].eutraCellList[%d].cellId = %d
Line 815: [U2L DEBUG] req->lteCellInfo[%d].eutraCellList[%d].cpType = %d
Line 817: [U2L DEBUG] req->lteCellInfo[%d].eutraCellList[%d].framePosition = %d
Line 828: [U2L DEBUG] SERIOUS ERROR !!! There is no LocalAccumlater available for EutraMeasInd
Line 838: There is no EutraMeas configured or no EutraRepInst left
Line 1092:  [ECELL_FACH] [CV] SIB5_p = NULL 
Line 1161: ---------------------------------------------------------------
Line 1162: START Urrc_UphyHsdschCommonModifyReqMsg_t
Line 1163: 	  isActivationTime = %d
Line 1166: 	  activationTime = %d
Line 1168: 	  isDelayRestrictionFlag = %d
Line 1169: 	  isHrnti = %d
Line 1172: 	  hrnti = %d
Line 1174: 	  isHsscchInfo = %d
Line 1177: 	  dlScramblingCode = %d
Line 1178: 	  numOfHsscchCodes = %d
Line 1181: 	 chanCodeList[%d] = %d
Line 1184: 	  harqFlushIndicator = %d
Line 1185: 	  isDl64QAMConfigured = %d
Line 1186: 	  isMACEhsConfigured = %d
Line 1187: 	  hsdschTableSize = %d
Line 1188: 	  hsdschL1CategoryExt = %d
Line 1189: 	  isFachOccasion = %d
Line 1192: 	  fachOccasionCycleLengthCoef = %d
Line 1195: 	  isHsDschDrxInCellFach = %d
Line 1198: 	  t321ms = %d
Line 1199: 	  hs_dsch_DrxCycleFach = %d
Line 1200: 	  hs_dsch_RxBurstFach = %d
Line 1201: 	  drxInterruption_by_hs_dsch = %d
Line 1204:  END Urrc_UphyHsdschCommonModifyReqMsg_t
Line 1205: ---------------------------------------------------------------
Line 1511: [DedModeModifyRlCommonReq] TxDivMode(%d) is configured
Line 1616: DB PopILM: No RL Exists in the message DB
Line 1683: GlobalCellId(0x%x) was set in DedicatedModeModifyRlReq
Line 1792: [ASU] msgPopulateIlms: no addCount or delCount 
Line 1879: [RbControlMsg] msgPopulateIlms: no addedDlRlCount
Line 2876: DB contains valid NumOfTgps[%d] more than the actual numOfCompressedModeSequences[%d]
Line 2925: [DedModeConfigRlCommonReq] TxDivMode(%d) is configured
Line 2994: GlobalCellId(0x%x) was set in DedicatedModeConfigReq
Line 3130: DB PopILM(before): trchToAddBitmask 0x%x
Line 3136: DB PopILM(After): trchToAddBitmask 0x%x, dlDchIdPresentBitMask 0x%x, availableDlDchInMuxOptBitMask 0x%x
Line 3173: DB PopILM: dlDchActuallyConfiguredInPhyBitMask 0x%x
Line 3267: DB PopILM: ulDchActuallyConfiguredInPhyBitMask 0x%x
Line 3391: Information of DlSecondaryCellId %d
Line 3392: DL Uarfcn = %d
Line 3393: HRNTI = 0x%x
Line 3394: SecHsdschRlPsc = 0x%x
Line 3395: DlScramblingCode = %d
Line 3396: 	 numOfHsscchCodes = %d
Line 3399: chanCodeList[%d] = %d
Line 3401: 	 measPowerOffset = %d
Line 3402: isDl64QAMConfigured = %d
Line 3403: isMACEhsConfigured = %d
Line 3404: 	 numOfHarqProcesses = %d
Line 3407: 	 processMemorySize[%d] = %d
Line 3409: hsdschtablesize = %d
Line 3410: HarqFlushIndicator = %d
Line 3411: diffTxDivFromServHsdschCell = %d
Line 3419: No DlSecondaryCell to be configured!!!
Line 3500: Information of DlSecondaryCellId %d
Line 3501: DL Uarfcn = %d
Line 3502: HRNTI = 0x%x
Line 3503: SecHsdschRlPsc = 0x%x
Line 3504: DlScramblingCode = %d
Line 3505: 	 numOfHsscchCodes = %d
Line 3508: chanCodeList[%d] = %d
Line 3510: 	 measPowerOffset = %d
Line 3511: isDl64QAMConfigured = %d
Line 3512: isMACEhsConfigured = %d
Line 3513: 	 numOfHarqProcesses = %d
Line 3516: 	 processMemorySize[%d] = %d
Line 3518: hsdschtablesize = %d
Line 3519: HarqFlushIndicator = %d
Line 3520: diffTxDivFromServHsdschCell = %d
Line 3526: First DlSecondaryCell reception is not OK!!!
Line 3652: ACTIVATION TIME %d
Line 3656: DELAY RESTRICTION FLAG present
Line 3658: DlSecondaryCellInfo of CellId %d
Line 3661: 	  hrnti = 0x%x
Line 3663: 	  dlScramblingCode = %d
Line 3664: 	  numOfHsscchCodes = %d
Line 3667: 	  chanCodeList[%d] = %d
Line 3669: 	  measPowerOffset = %d
Line 3670: isDl64QAMConfigured = %d
Line 3671: isSecHsdschRlPsc = %d
Line 3672: hsdschtablesize = %d
Line 3673: diffTxDivFromServHsdschCell = %d
Line 3681: No DlSecondaryCell to be modified!!!
Line 3761: ACTIVATION TIME %d
Line 3765: DELAY RESTRICTION FLAG present
Line 3767: DlSecondaryCellInfo of CellId %d
Line 3770: 	  hrnti = 0x%x
Line 3772: 	  dlScramblingCode = %d
Line 3773: 	  numOfHsscchCodes = %d
Line 3776: 	  chanCodeList[%d] = %d
Line 3778: 	  measPowerOffset = %d
Line 3779: isDl64QAMConfigured = %d
Line 3780: isSecHsdschRlPsc = %d
Line 3781: hsdschtablesize = %d
Line 3782: diffTxDivFromServHsdschCell = %d
Line 3788: First DlSecondaryCell reception is not OK!!!
Line 3820: DlSecHsdschCellsReleaseBitmask: 0x%X
Line 3824: No DlSecondaryCell to be released!!!
Line 3860: numOfHarqProcesses = %d
Line 3864: processMemorySize[%d] = %d
Line 3915: Err in HS-SCCH Info, numOfHsscch(%d)! Set to max(%d)
Line 4092: Err in HS-SCCH Info, numOfHsscch(%d)! Set to max(%d)
Line 4267: [CV] [Populate ILM] E-DPCCH Config (pwrOffset (%d)), interpolation (%d)
Line 4404: [CV] [Populate ILM] CUPHY_EDCH_UL_MODIFY_REQ
Line 4412: [CV] [Populate ILM] E-DCH TTI (%d)
Line 4419: [CV] [Populate ILM] E-DCH HARQ (%d)
Line 4427: [CV] [Populate ILM] E-DPCCH (pwrOffset (%d)), interpolation (%d)
Line 4437: [CV] [Populate ILM] E-DPDCH
Line 4438: [CV] [Populate ILM] E-DPDCH (numRefEtfci (%d))
Line 4444: [CV] [Populate ILM] E-DPDCH (refEtfci (%d), refEtfciPo (%d))
Line 4464: [CV] [Populate ILM] E-DPDCH (etfciTableIndex (%d), maxChCode (%d), plNonMax (%d), minReducedGainFactor (%d))
Line 4489: [CV] [Populate ILM] CUPHY_EDCH_DL_MODIFY_REQ
Line 4502: [CV] [Populate ILM] Primary E-RNTI (0x%x)
Line 4512: [CV] [Populate ILM] Secondary E-RNTI(0x%x)
Line 4520: [CV] [Populate ILM] E-DCH TTI (%d)
Line 4529: [CV] [Populate ILM] Serving E-DCH RL (priCpich (0x%x), agch (%d))
Line 4544: [CV] [Populate ILM] Serving E-DCH RL (add hich (%d, %d))
Line 4551: [CV] [Populate ILM] Serving E-DCH RL (release hich)
Line 4556: [CV] [Populate ILM] Serving E-DCH RL (we need HICH action type)
Line 4566: [CV] [Populate ILM] Serving E-DCH RL (add rgch (%d, %d))
Line 4573: [CV] [Populate ILM] Serving E-DCH RL (release rgch)
Line 4578: [CV] [Populate ILM] Serving E-DCH RL (we need RGCH action type)
Line 4604: [CV] [Populate ILM] Non-serving E-DCH RL (priCpich (0x%x))
Line 4615: [CV] [Populate ILM] Non-serving E-DCH RL (add hich (%d, %d))
Line 4623: [CV] [Populate ILM] Non-serving E-DCH RL (release hich)
Line 4633: [CV] [Populate ILM] Non-serving E-DCH RL (add rgch (%d, %d))
Line 4640: [CV] [Populate ILM] Non-serving E-DCH RL (release rgch)
Line 4647: [CV] [Populate ILM] Non-serving E-DCH RL (num (%d))
Line 4756: rrc_CUPHY_CPC_Config_REQ_setHSScchLessConfig: ILM under population
Line 4770: rrc_CUPHY_CPC_Config_REQ_setHSScchLessConfig: ILM under population
Line 5286: TheASCIndx >= numOfAsc
Line 5449: imsiLengthis %d	and it is > 21
Line 5898: GlobalCellId(0x%x) was set in DedicatedModeReplaceRlReq
Line 5922: [URRC BCH in DCH] Uarfcn %d, PSC %d, CellId (0x%x) was set in GlobalCellIdUpdateReq
Line 5974: FachReleaseReqMsg isActivationTime(%d), ActivationTime(%d)
Line 5993: RachReleaseReqMsg isActivationTime(%d), ActivationTime(%d)
