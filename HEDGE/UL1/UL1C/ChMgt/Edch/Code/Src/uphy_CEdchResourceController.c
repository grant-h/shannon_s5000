Line 243: Instance created for stackId %d
Line 243: Instance created for stackId %d
Line 378: No Camping UARFCN is to be seeked.. UE is not camped on Yet..
Line 378: No Camping UARFCN is to be seeked.. UE is not camped on Yet..
Line 389: engagedRlPhychLinksArray == NULL pointer
Line 389: engagedRlPhychLinksArray == NULL pointer
Line 398: hsupaPrimaryScrCode %d
Line 398: hsupaPrimaryScrCode %d
Line 406: Failed to register the E-DCH Serving Cell
Line 406: Failed to register the E-DCH Serving Cell
Line 428: No Free Rl for E-DCH Serving Cell On E-DCH Active Set
Line 428: No Free Rl for E-DCH Serving Cell On E-DCH Active Set
Line 441: Fail to setup HSUPA  in case of Serving Cell: This RL is not in R99 Active set.. 
Line 441: Fail to setup HSUPA  in case of Serving Cell: This RL is not in R99 Active set.. 
Line 484: EHalDlRlReferenceConfigCmd has failed to run..
Line 484: EHalDlRlReferenceConfigCmd has failed to run..
Line 503: E-AGCH Config Failed
Line 503: E-AGCH Config Failed
Line 526: E-AGCH HsupaRakeRlPhych Config Failed
Line 526: E-AGCH HsupaRakeRlPhych Config Failed
Line 552: [Check RRC] ergchCombinationIndex %d should be less than 6
Line 552: [Check RRC] ergchCombinationIndex %d should be less than 6
Line 577: E-RGCH HsupaDlPhyCh Config Failed
Line 577: E-RGCH HsupaDlPhyCh Config Failed
Line 599: E-RGCH HsupaRakeRlPhych Config Failed
Line 599: E-RGCH HsupaRakeRlPhych Config Failed
Line 629: E-RGCH HsupaDlPhyCh Config Failed
Line 629: E-RGCH HsupaDlPhyCh Config Failed
Line 635: [FR 2276] uphy_CChannelsConfigurationUtility_configureHsupaDlPhyCh with Fake Configuration
Line 635: [FR 2276] uphy_CChannelsConfigurationUtility_configureHsupaDlPhyCh with Fake Configuration
Line 652: E-RGCH HsupaRakeRlPhych Config Failed
Line 652: E-RGCH HsupaRakeRlPhych Config Failed
Line 688: E-HICH HsupaDlPhyCh Config Failed
Line 688: E-HICH HsupaDlPhyCh Config Failed
Line 710: E-HICH HsupaRakeRlPhych Config Failed
Line 710: E-HICH HsupaRakeRlPhych Config Failed
Line 729: We've received E-HICH release indicator without Serving E-DCH RL
Line 729: We've received E-HICH release indicator without Serving E-DCH RL
Line 743: EDpch config failed
Line 743: EDpch config failed
Line 757: Config Uhal - unknown state %d
Line 757: Config Uhal - unknown state %d
Line 764: HSUPA-Mode UhalCfg Failed
Line 764: HSUPA-Mode UhalCfg Failed
Line 838: [SW WA] uphy_CEDchResourceController_cleanUhalInstances
Line 838: [SW WA] uphy_CEDchResourceController_cleanUhalInstances
Line 847: [uphy_CEDchResourceController_cleanUhalInstances] Unmap successful for RlNr=%d from MappingDatabase
Line 847: [uphy_CEDchResourceController_cleanUhalInstances] Unmap successful for RlNr=%d from MappingDatabase
Line 851: [uphy_CEDchResourceController_cleanUhalInstances] Failed to unmap RlNr=%d from MappingDatabase
Line 851: [uphy_CEDchResourceController_cleanUhalInstances] Failed to unmap RlNr=%d from MappingDatabase
Line 876: Release RakePhyCh - uhal_Cmd_exec
Line 876: Release RakePhyCh - uhal_Cmd_exec
Line 903: rlPhyCh release failed
Line 903: rlPhyCh release failed
Line 935: E-DPCH RELEASE CMD EXEC Failed.. 
Line 935: E-DPCH RELEASE CMD EXEC Failed.. 
Line 1010: Process pended ModifyDlEDch msg
Line 1010: Process pended ModifyDlEDch msg
Line 1018: Process pended ModifyDlEDch msg with Sending Neg CNF
Line 1018: Process pended ModifyDlEDch msg with Sending Neg CNF
Line 1046: message is null
Line 1046: message is null
Line 1058: Processing configurationrequest with activationTimeTokenPtr set
Line 1058: Processing configurationrequest with activationTimeTokenPtr set
Line 1066: Processing configurationrequest request with ConfigMsg set
Line 1066: Processing configurationrequest request with ConfigMsg set
Line 1073: E-DPCH HHO
Line 1073: E-DPCH HHO
Line 1223: Pending ModifyDlEDch msg
Line 1223: Pending ModifyDlEDch msg
Line 1248: Pending ModifyDlEDch msg
Line 1248: Pending ModifyDlEDch msg
Line 1254: EDchResource Controller rejected ReplaceRl Msg as already processing one
Line 1254: EDchResource Controller rejected ReplaceRl Msg as already processing one
Line 1279:  EUphyEDchResourcesControllerMsgId_ActiveSetCheckInd failed because of mismatched RLs
Line 1279:  EUphyEDchResourcesControllerMsgId_ActiveSetCheckInd failed because of mismatched RLs
Line 1290: edchResourceController_ptr->UlModifyTokenPtr = TRUE, So, it's cleared.
Line 1290: edchResourceController_ptr->UlModifyTokenPtr = TRUE, So, it's cleared.
Line 1300: edchResourceController_ptr->DlModifyTokenPtr = TRUE, So, it's cleared.
Line 1300: edchResourceController_ptr->DlModifyTokenPtr = TRUE, So, it's cleared.
Line 1316: Cancel pendingRelease token
Line 1316: Cancel pendingRelease token
Line 1380: Unknown subid for Cell Synchro Ind
Line 1380: Unknown subid for Cell Synchro Ind
Line 1382: Cell Synchro Rejected On E-DCH Resource Controller
Line 1382: Cell Synchro Rejected On E-DCH Resource Controller
Line 1399: Unknown subid for Cell Sfn Ind
Line 1399: Unknown subid for Cell Sfn Ind
Line 1401: Cell Sfn Rejected
Line 1401: Cell Sfn Rejected
Line 1469: UlDpchRelease - uhal_Cmd_exec
Line 1469: UlDpchRelease - uhal_Cmd_exec
Line 1505: UlDpchRelease - uhal_Cmd_exec
Line 1505: UlDpchRelease - uhal_Cmd_exec
Line 1559: %dth HSUPA DL PHYCH release (index: %d)
Line 1559: %dth HSUPA DL PHYCH release (index: %d)
Line 1564: DL PHYCH RELEASE Error from DL Uhal Instance on E-DCH Resource Controller
Line 1564: DL PHYCH RELEASE Error from DL Uhal Instance on E-DCH Resource Controller
Line 1584: %dth Rl still has phychs(str 0x%x)
Line 1584: %dth Rl still has phychs(str 0x%x)
Line 1598: [SW WA] uphy_CEDchResourceController_releaseDlUhalInstances
Line 1598: [SW WA] uphy_CEDchResourceController_releaseDlUhalInstances
Line 1637: uphy_CEDchResourceController_stopDlUhalInstances
Line 1637: uphy_CEDchResourceController_stopDlUhalInstances
Line 1644: %dth HSUPA DL PHYCH stop (index: %d)
Line 1644: %dth HSUPA DL PHYCH stop (index: %d)
Line 1650: DL PHYCH RELEASE Error from DL Uhal Instance on E-DCH Resource Controller
Line 1650: DL PHYCH RELEASE Error from DL Uhal Instance on E-DCH Resource Controller
Line 1680: uphy_CEDchResourceController_stopUlUhalInstances
Line 1680: uphy_CEDchResourceController_stopUlUhalInstances
Line 1691: UlDpchRelease - uhal_Cmd_exec
Line 1691: UlDpchRelease - uhal_Cmd_exec
Line 1741: %dth HSUPA DL PHYCH release (index: %d)
Line 1741: %dth HSUPA DL PHYCH release (index: %d)
Line 1746:  DL PHYCH RELEASE Error from DL Uhal Instance on E-DCH Resource Controller
Line 1746:  DL PHYCH RELEASE Error from DL Uhal Instance on E-DCH Resource Controller
Line 1766: %dth Rl still has phychs(str 0x%x)
Line 1766: %dth Rl still has phychs(str 0x%x)
Line 1841: Cancel E-DCH configuration: CFN=%d
Line 1841: Cancel E-DCH configuration: CFN=%d
Line 1887: Resubmit E-DCH activationTimeSTF: isDchCellChanging=%d, urrcState=%d, swCfn=%d, hwCfn=%d
Line 1887: Resubmit E-DCH activationTimeSTF: isDchCellChanging=%d, urrcState=%d, swCfn=%d, hwCfn=%d
Line 1896: TokenResubmissionCounter = %d, reached max value. Sending Neg CNF for E-DCH
Line 1896: TokenResubmissionCounter = %d, reached max value. Sending Neg CNF for E-DCH
Line 1929: E-DCH activationTimeSTF timeout: CFN=%d
Line 1929: E-DCH activationTimeSTF timeout: CFN=%d
Line 2111: uphy_CCpcResources is Null
Line 2111: uphy_CCpcResources is Null
Line 2140: Only Config and release need confirm
Line 2140: Only Config and release need confirm
Line 2167: send
Line 2167: send
Line 2179: E-DCH release REQ not requiring CNF. Init eDchRelease.
Line 2179: E-DCH release REQ not requiring CNF. Init eDchRelease.
Line 2273: Unknown msg to confirm
Line 2273: Unknown msg to confirm
Line 2280: send
Line 2280: send
Line 2349: numOfEtfci [%d] should be equal to or less than %d
Line 2349: numOfEtfci [%d] should be equal to or less than %d
Line 2381: edpchConfigCommand exec failed: Err Code %d AddErrCode %d
Line 2381: edpchConfigCommand exec failed: Err Code %d AddErrCode %d
Line 2399: edpchStartCommand exec failed: Err Code %d AddErrCode %d
Line 2399: edpchStartCommand exec failed: Err Code %d AddErrCode %d
Line 2427: DpchConfigDoneReq is Null
Line 2427: DpchConfigDoneReq is Null
Line 2445: send
Line 2445: send
Line 2516: uphy_CEDchResourceController_purgeConfiguration run
Line 2516: uphy_CEDchResourceController_purgeConfiguration run
