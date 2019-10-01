Line 88: BCHid %d UarfcnDl %d CellParamId %d isTddBplmn  %d
Line 103: [URRC BCH in DCH]  rrc_CTPHY_BCHResConf_REQ_setParams: IsDCH = %d
Line 132: ==============CTPHY_BCH_RESOURCES_CONFIG_REQ=================
Line 133: uarfcn = %d
Line 134: cellParamId = %d
Line 135: bchId = %d
Line 136: isTddBplmn = %d
Line 138: MibRepFactor = %d
Line 139: isDBchEnabled = %d
Line 142: ==============CTPHY_BCH_RESOURCES_CONFIG_REQ=================
Line 146: ==============CTPHY_BCH_RESOURCES_MODIFY_REQ=================
Line 147: MibRepFactor = %d
Line 149: ==============CTPHY_BCH_RESOURCES_MODIFY_REQ=================
Line 154: NoOfSIBsToAdd = %d
Line 157: SIBAddInfo[%d].SIBType = %d
Line 158: SIBAddInfo[%d].SegCount = %d
Line 160: SIBAddInfo[%d].SibPos[%d] = %d
Line 161: SIBAddInfo[%d].SibRep = %d
Line 163: NoOfSIBsToCancel = %d
Line 166: SIBToCancel[%d].SIBType = %d
Line 187:  [rrc_CTPHYSibsSchdInfoInd_Create] SIB Type = %d, 
Line 192:  [rrc_CTPHYSibsSchdInfoInd_Create] SCHD Info not present for SIB Type = %d, 
Line 200:  [rrc_CTPHYSibsSchdInfoInd_Create] Already received SIB Type = %d
Line 208:  [rrc_CTPHYSibsSchdInfoInd_Create]  Necessary SIB Type = %d
Line 212:  [rrc_CTPHYSibsSchdInfoInd_Create]  Not necessary SIB Type = %d
Line 277:  [rrc_CTPHYSibsSchdInfoInd_Create] Rep type = %d, 
Line 284:  [rrc_CTPHYSibsSchdInfoInd_Create] rep_info = %d, 
Line 305:  [rrc_CTPHYSibsSchdInfoInd_Create] rep_info = %d, 
Line 314:  [rrc_CTPHYSibsSchdInfoInd_Create] segCount = %d, 
Line 336: [URRC BCH in DCH]  rrc_CUPHY_BCHResRel_REQ_setParams: IsDCH = %d
Line 564:  rrc_DbPopIlm_CTPHYEDCHConfigREQMsg phyActTm = %d, Changed to Now As Cell Update Cnf Received
Line 657: hsupaDbInfo->isErucch == FALSE
Line 706: hsupaDbInfo->isEpuch == FALSE
Line 735: hsupaDbInfo->isNonSchdGrant == FALSE
Line 770: hsupaDbInfo->iseagchInfo == FALSE
Line 795: hsupaDbInfo->isehichInfo == FALSE
Line 847:  TphyDedicatedModeConfigReqMsg phyActTm = %d, MsgDbIndex = %d
Line 870: RL type is %d
Line 883: numCCTrCHtoAdd %d: outside the function 
Line 896: DB PopILM(before): trchToAddBitmask 0x%x
Line 902: DB PopILM(After): trchToAddBitmask 0x%x, dlDchIdPresentBitMask 0x%x, availableDlDchInMuxOptBitMask 0x%x
Line 950:  TphyDedicatedModeConfigReqMsg dedModeDlInfo_p->numDlCctrch = %d
Line 969:  TphyDedicatedModeConfigReqMsg dedModeDlInfo_p->numDlCctrch = %d and DlTfcs is Invliad
Line 981: DB PopILM: dlDchActuallyConfiguredInPhyBitMask 0x%x
Line 1049:  ulDpchInfo_p->uppchPositionInfo= %d
Line 1100: DB PopILM: ulDchActuallyConfiguredInPhyBitMask 0x%x
Line 1131: rrc_DbPopIlm_TphyDlTrChsModifyReqMsg Baton HHO setting Activation as Now
Line 1207: rrc_DbPopIlm_TphyDlTrChsAddReqMsg Baton HHO setting Activation as Now
Line 1278: rrc_DbPopIlm_TphyDlTrChReleaseReqMsg Baton HHO setting Activation as Now
Line 1319: rrc_DbPopIlm_TphyDlCctrchAddTfcsReqMsg Baton HHO setting Activation as Now
Line 1381: rrc_DbPopIlm_TphyDlCctrchRemoveTfcsReqMsg Baton HHO setting Activation as Now
Line 1435: rrc_DbPopIlm_TphyDlCctrchReconfigTfcsReqMsg: numOfDlCCTrChReconfigTfcsToAdd  = %d
Line 1445: rrc_DbPopIlm_TphyDlCctrchReconfigTfcsReqMsg: numOfDlCCTrChReconfigTfcsToAdd  = %d
Line 1451: rrc_DbPopIlm_TphyDlCctrchReconfigTfcsReqMsg Baton HHO setting Activation as Now
Line 1477: rrc_DbPopIlm_TphyDlCctrchReconfigTfcsReqMsg: Num DlCTFC  = %d
Line 1515: rrc_DbPopIlm_TphyDedicatedModeModifyRlReq Baton HHO setting Activation as Now
Line 1662: DedicatedModeReleaseReq: isActivationTime: %d activationTime %d
Line 1707: rrc_DbPopIlm_TphyHsdschResourcesConfigReqMsg Baton HHO setting Activation as Now
Line 1719:  rrc_DbPopIlm_TphyHsdschResourcesConfigReqMsg phyActTm = %d, Changed to Now As Cell Update Cnf Received
Line 1730: rrc_priv_IeRbAndTfsCrossValidator_Hsdpa_setCtphyHsdschConfigReq Cell Param Id  = %d
Line 1743: hsdpaDbInfo->hsscchSetCount = %d
Line 1764: rrc_priv_IeRbAndTfsCrossValidator_Hsdpa_setCtphyHsdschConfigReq: HssichInfo.timeSlotNum = %d, HssichInfo.channelisationCode = %d
Line 1769: rrc_priv_IeRbAndTfsCrossValidator_Hsdpa_setCtphyHsdschConfigReq: HssichInfo.midambleConfiguration= %d
Line 1890: rrc_DbPopIlm_TphyHsdschResourcesModifyReqMsg Baton HHO setting Activation as Now
Line 1911: rrc_DbPopIlm_TphyHsdschResourcesModifyReqMsg : Cell Param Id  = %d
Line 1924: hsdpaDbInfo->hsscchSetCount = %d
Line 1931: Err in HS-SCCH Info, numOfHsscch(%d)! Set to max(%d)
Line 2052: rrc_DbPopIlm_TphyHsdschResourcesReleaseReqMsg Baton HHO setting Activation as Now
Line 2090: TrChId=[%d] , TrChType[%d], dl->semiStaticInfo.tti == %d
Line 2092: channelCoding=[%d] , rateMatchingArgument[%d], crcSize = %d, codingRate = %d
Line 2102: numOfTfTableEntries[%d]
Line 2117:  dbDynInfo_p->rlcSize=[%d],macHdrSz=[%d]
Line 2118:  dbDynInfo_p->numofTBCount=[%d]
Line 2127: tfi=[%d],tBlockSize =%d ,numOTblocks =%d,
Line 2251: rrc_DbPopIlm_TphyDpchRlInfo: rlListValid_tdd.isvalid %d
Line 2265: numCCTrCHtoAdd %d: before for loop 
Line 2272: numCCTrCHtoAdd %d
Line 2279: rrc_DbPopIlm_TphyDpchRlInfo:cellParamId %d
Line 2303:  rrc_DbPopIlm_TphyUlDpchPowerOffsetInfoSetParams numCCtrChCtfc = %d
Line 2353:  rrc_DbPopIlm_TphyUlPwrOffInfoAddOrReconfSetParams : TFCS_ID = %d
Line 2461: .imsi[%d] = %d
Line 2498: .imsiLength  = %d
Line 2506: .BodyPtr->drxCycleInfo.imsi = %d
Line 2648: numOfTfTableEntries=[%d],TrChType[%d]
Line 2744: PichInfo.ChannelisationCodeList[0] = %d  ,PichInfo.ChannelisationCodeList[1] = %d
Line 2846: rrc_CTPHY_PCHResConf_REQ_setTddPichInfo: PagingIndicatorLength value is not correct = %d
Line 3235: PRXUpPCHdes = %i (%d - 120)
Line 3374: TheASCIndx >= numOfAsc
Line 3758:  Number of Freqs set to [%d] with IsFullAcq[%d] in CTPHY Freq RSSI Scan Req ILM
Line 3781:  Adding Freq %d to Carrier Ferq Scan Req ILM
Line 3785: TheFreqInfoIndx[0x%x] >= numOfFreqToAdd[0x%x]
Line 3809: Number of Freqs set to %d in Detected Freq Scan Req ILM
Line 3832: Adding Freq %d to Detected Freq Scan Req ILM
Line 3836: TheFreqInfoIndx[0x%x] >= numOfFreqToAdd[0x%x]
Line 3845: SetNumofFreq %d to Detected Freq Scan Req ILM
Line 3899: Number of Cpich Present is (%d)
Line 3906: CpichList[%d] = (%d)
Line 4012: [URRC BCH in DCH] Uarfcn %d, CellParamId %d, CellId (0x%x) was set in GlobalCellIdUpdateReq
