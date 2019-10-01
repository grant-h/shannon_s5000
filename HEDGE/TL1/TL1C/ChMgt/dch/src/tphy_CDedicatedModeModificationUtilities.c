Line 127: dlCtfcArray == NULL
Line 185: Unable to release Trch
Line 204: Release TRCH
Line 210: Unable to release Trch
Line 286: UlTrChMove
Line 420: DCH: DL_TRCH_MOD,  TrCh Id[%d] is [%d]
Line 437: DCH: DL_TRCH_MODIFY, Unable to locate TrCh
Line 487: DCH: DL_TRCH_MODIFY, Too many TBs in TF Table
Line 500: DCH: DL_TRCH_MODIFY, No TF entries
Line 570: DCH: DL_TRCH_RELEASE, locate TrCh Id index %d 
Line 577: DCH: DL_TRCH_RELEASE, Can't locate TrCh Id
Line 596: DCH: DL_TRCH_RELEASE, No CcTrChs
Line 618: DCH: DL_TRCH_RELEASE, Can't locate Dedicated Cctrch
Line 636: DCH: DL_TRCH_RELEASE, Too many TrChs to release
Line 732: DCH: DL_TRCH_RELEASE, Can't locate TrCh Id
Line 798: DCH: DL_TRCH_RELEASE, TrCh not found
Line 868: DCH: DL_TRCH_ADD,  TrCh Id[%d] is [%d]
Line 879: DCH: DL_TRCH_ADD, Duplicate TrCh Id
Line 893: DCH: DL_TRCH_ADD, Too many TrChs requested
Line 920: DCH: DL_TRCH_ADD, cctrchNr = %d, nTrchs = %d, trChBitStream = %x 
Line 933: DCH: DL_TRCH_ADD, Corrupt DlTrCh
Line 947: DCH: DL_TRCH_ADD, Can't locate Dedicated CcTrCh
Line 970: DCH: DL_TRCH_ADD, cctrchNr = %d nTrchs = %d trChBitStream = %x
Line 993: DCH: DL_TRCH_ADD, Moved THAL TrCh = %d to %d for URRC TrCh Id = %d to make room for new transport channels
Line 1057: DCH: DL_TRCH_ADD, Add THAL TrCh = %d for URRC TrCh Id = %d
Line 1089: DCH: DL_TRCH_ADD, AMR targetBler changed if targetBler > 1.0 and rateMachingArgument > 180
Line 1095: DCH: DL_TRCH_ADD, AMR targetBler not changed
Line 1132: DCH: DL_TRCH_ADD, Moved THAL TrCh = %d to %d for URRC TrCh Id = %d to make room for new transport channels
Line 1158: DCH: DL_TRCH_ADD, DCH CcTrCh = %d, Muxed trchBitStream = %d
Line 1194: Cfn %d Process UlTrChModifyReq
Line 1198: DCH: UL_TRCH_MOD,  TrCh Id[%d] is [%d]
Line 1216: Unable to loacte Tr Ch
Line 1247: Too many Tbs in TF Table
Line 1257: Fail: TfConfig Command to update dynamic info: No Tf Entries 
Line 1297: Cfn %d Process UlTrChReleaseReq
Line 1310: DCH: UL_TRCH_RELEASE, locate TrCh Id index %d 
Line 1316: Cant locate Trch Id
Line 1331: Too many Trch to release
Line 1404: Cfn %d Process UlTrChAddReq
Line 1414: DCH: UL_TRCH_ADD,  TrCh Id[%d] is [%d]
Line 1425: Duplicate Trch Id
Line 1438: Too many TrCh requested
Line 1455: Corrupt UlTrch in L1
Line 1566: DL CTFC MOdification failed
Line 1622: DL CTFC MOdification failed
Line 1683: DL CTFC MOdification failed
Line 1709: Cfn %d Process DlCctrchReconfTfcsReq
Line 1796: UlDpchRelease - thal_CCmd_exec
Line 1807: IsBatonHO %d
Line 1815: isSecondaryFreq %d TarUarfcn %d
Line 1819: isSecondaryFreq %d
Line 1851: UarfcnCmd exec failure, errCode = %d, addErrCode = %d
Line 1932: Cfn %d Process UlDpchModifyReq
Line 1961: SS Frequency %d
Line 1984: Not enough free UlTrChs
Line 1990: UL Dpch ScrCode %d
Line 1994: Target ScrCode %d Traget Uarfcn %d
Line 2016: Tar Cell RSCP -120. Tar pathLoss made same as Src
Line 2019: servCellPathLoss %d tarCellPathLoss %d
Line 2150: Ch_Config_Util: configureUlPhyCh(), UlPhychConfigCmd exec failed - Err Code = %d, Addl Err Code = %d
Line 2166: Ch_Config_Util: startUlPhyCh(), UlDpchStartCmd exec failed - Err Code = %d, Addl Err Code = %d
Line 2250: tphy_CDedicatedModeModificationUtilities_processModifyRlReq received empty message
Line 2296: Release PhyCh - thal_CCmd_exec
Line 2318: Release PhyCh - thal_CCmd_exec
Line 2337: Release PhyCh - thal_CCmd_exec
Line 2346: IsBatonHO %d  tphy_CMappingDatabase_unmapParameter1 uarfcn = %08d
Line 2359: DlSlotInfoArray allocation is failed
Line 2376: IsBatonHO %d  tphy_CMappingDatabase_map, cellId = %08d 
Line 2437: ModifyRlReq(), DPCH config failed
Line 2441: ModifyRlReq(), DPCH configured for UARFCN = %d, cellParamID = %d
Line 2466: ModifyRlReq(), TDM configured RepPeriod = %d, RepLength = %d,OffSet = %d,TdmActTime  =%d
Line 2486: IsBatonHO %d  N-Freq Change Implementation 
Line 2487: tphy_CDedicatedModeController_processModifyRlReq: isNfreqConfig =%d, uarfcn = %08d
Line 2491: IsBatonHO %d  Same Freq Sceanrio and no N Freq 
Line 2498: IsBatonHO %d  Single Freq Release IPC Sceanrio
Line 2512: NFreq to Single Freq Baton HO
Line 2519: ETHalRfRxUarfcnCmd - thal_CCmd_exec FAILED
Line 2544: tphy_CDedicatedModeController_processModifyRlReq: SEC FREQ PRESENT isNfreqConfig =%d, message->payload.rlInfo.SecondaryFreq = %08d
Line 2550: ETHalRfRxUarfcnCmd - thal_CCmd_exec FAILED
Line 2569: tphy_CDedicatedModeController_processModifyRlReq: isNfreqConfig =%d
Line 2587: ETHalRfRxUarfcnCmd - thal_CCmd_exec FAILED
Line 2602: tphy_CDedicatedModeModificationUtilities_processModifyRlReq: N Freq Release 
Line 2617: ETHalRfRxUarfcnCmd - thal_CCmd_exec FAILED
Line 2659: sfnSfnDiff = %d, SfnToSfn_FailedConfiguration = %d, Current RSN = %d, dedicatedModeModificationUtilities_ptr = %d, msg = %d
Line 2666: rlStartCommand thal command exec failed: Err Code %d AddErrCode %d
Line 2726: tphy_CDedicatedModeModificationUtilities_SendConfirmSTF(): msg is worng!!!!
Line 2730: tphy_CDedicatedModeModificationUtilities_SendConfirmSTF Current RSN = %d, msg = %d, dedicatedModeModificationUtilities_ptr = %d
Line 2821: Search for highest Ul trchid failed
Line 2844: Search for highest Dl trchid failed
Line 2887: CFN = %d,  Not reenabling cctrch after dedicated mode changes due to other pending Dl Trch changes
Line 2904: Error - cctrchEnableCmd execution
Line 2914: Reenabling dedicated mode Cctrch = %d, CFN = %d, Slot = %d
Line 2938: QualityTarget = %d, qualityTargetTrChId = %d
Line 2943: DedModeController: configTHAL(), Initial target SIR = %d
Line 2952: IsBatonHO %d  before reset the sync data base 
Line 2964: currentCfn = %d 
Line 3011: currentCfn = %d 
Line 3041: cctrchStopCmd - uhal_CCmd_exec
Line 3071: cctrchStopCmd - uhal_CCmd_exec
Line 3102: cctrchEnableCmd - uhal_CCmd_exec
