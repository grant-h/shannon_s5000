Line 267: HSUPA Soft handover reset with DlModifyReqMsg set
Line 267: HSUPA Soft handover reset with DlModifyReqMsg set
Line 271: HSUPA Soft handover reset with actTimeTokenP set
Line 271: HSUPA Soft handover reset with actTimeTokenP set
Line 318: Soft handover requested to process new req when already busy
Line 318: Soft handover requested to process new req when already busy
Line 360: [SW WA] Condition Check: is_WA_MoreEdchActiveSets %d, uphy_CHsupaSoftHandover_Get_WA_MoreEdchActiveSets %d 
Line 360: [SW WA] Condition Check: is_WA_MoreEdchActiveSets %d, uphy_CHsupaSoftHandover_Get_WA_MoreEdchActiveSets %d 
Line 379: hsupaPrimaryScrCode %d
Line 379: hsupaPrimaryScrCode %d
Line 385: nRl %d, nRlToAdd %d, nRlToRemove %d, maxNRl %d
Line 385: nRl %d, nRlToAdd %d, nRlToRemove %d, maxNRl %d
Line 391: [SW WA RUN] nRl %d  nRlToAdd %d - nRlToRemove %d > maxNRl %d
Line 391: [SW WA RUN] nRl %d  nRlToAdd %d - nRlToRemove %d > maxNRl %d
Line 397: [SW WA] The Active Set is less than maxRlNr, so we remove the WA cell.
Line 397: [SW WA] The Active Set is less than maxRlNr, so we remove the WA cell.
Line 424: UE did not camp to any frequency
Line 424: UE did not camp to any frequency
Line 458: RL[freq(%d), scr(%d) is not  the R99 Active Set RL
Line 458: RL[freq(%d), scr(%d) is not  the R99 Active Set RL
Line 477: HSUPA has failed to processing HSUPA SHO because of no update on R99 active set.. so.. we delay.. processing to next frame
Line 477: HSUPA has failed to processing HSUPA SHO because of no update on R99 active set.. so.. we delay.. processing to next frame
Line 554: [HSUPA SHO] E-DCH RL (UARFCN, PSC)=(%d, %d) is not in R99 Active Set
Line 554: [HSUPA SHO] E-DCH RL (UARFCN, PSC)=(%d, %d) is not in R99 Active Set
Line 561: uphy_CMultiPathDatabase_SeekActiveCells has passed
Line 561: uphy_CMultiPathDatabase_SeekActiveCells has passed
Line 569: HSUPA has failed to processing HSUPA SHO because of no update on R99 active set.. so.. we delay.. processing to next frame
Line 569: HSUPA has failed to processing HSUPA SHO because of no update on R99 active set.. so.. we delay.. processing to next frame
Line 600: HSUPA configuration is set
Line 600: HSUPA configuration is set
Line 660: uphy_CHsupaSoftHandover_HsupaDlphychRelease failed.. To release %d th phych
Line 660: uphy_CHsupaSoftHandover_HsupaDlphychRelease failed.. To release %d th phych
Line 718: Cant Send Replace Rl Cnf
Line 718: Cant Send Replace Rl Cnf
Line 724: HSUPA sends CNF message
Line 724: HSUPA sends CNF message
Line 730: uphy_CHsupaSoftHandover_sendCnfMessage: invalid message freed
Line 730: uphy_CHsupaSoftHandover_sendCnfMessage: invalid message freed
Line 735: [uphy_CHsupaSoftHandover_sendCnfMessage] reqMsg is NULL 
Line 735: [uphy_CHsupaSoftHandover_sendCnfMessage] reqMsg is NULL 
Line 783: Soft Handover attempt to cancel null timeout
Line 783: Soft Handover attempt to cancel null timeout
Line 833: EHalHsupaDlPhychModifyCmd has failed to run..
Line 833: EHalHsupaDlPhychModifyCmd has failed to run..
Line 838: HSUPA DL PHYCH MODIFY WITH SAME E-TTI
Line 838: HSUPA DL PHYCH MODIFY WITH SAME E-TTI
Line 866: uphy_CHsupaSoftHandover_AddNewServingCell Failed
Line 866: uphy_CHsupaSoftHandover_AddNewServingCell Failed
Line 875: uphy_CHsupaSoftHandover_ModifyHsupaDlPhychsOntheRl Failed
Line 875: uphy_CHsupaSoftHandover_ModifyHsupaDlPhychsOntheRl Failed
Line 917: [HSUPA SHO] PSC %d is not in E-DCH RL.
Line 917: [HSUPA SHO] PSC %d is not in E-DCH RL.
Line 931: uphy_CHsupaSoftHandover_HsupaDlphychRelease failed
Line 931: uphy_CHsupaSoftHandover_HsupaDlphychRelease failed
Line 940: [HSUPA SHO] Unmap successful for (HSUPA RlNr, PSC)=(%d, %d) from MappingDatabase
Line 940: [HSUPA SHO] Unmap successful for (HSUPA RlNr, PSC)=(%d, %d) from MappingDatabase
Line 945: [HSUPA SHO] Failed to unmap (HSUPA RlNr, PSC)=(%d, %d) from MappingDatabase
Line 945: [HSUPA SHO] Failed to unmap (HSUPA RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1004: [SW WA] Serving Cell Change:: psc %d will be removed in WA_MoreEdchActiveSets && [index %d, isTRUE %d]
Line 1004: [SW WA] Serving Cell Change:: psc %d will be removed in WA_MoreEdchActiveSets && [index %d, isTRUE %d]
Line 1042: No free Rl for E-DCH serving cell change. So Release process is first..
Line 1042: No free Rl for E-DCH serving cell change. So Release process is first..
Line 1071: [HSUPA SHO] Map successful: (HSUPA RlNr, PSC)=(%d, %d)
Line 1071: [HSUPA SHO] Map successful: (HSUPA RlNr, PSC)=(%d, %d)
Line 1075: [HSUPA SHO] Failed to map: (HSUPA RlNr, PSC)=(%d, %d)
Line 1075: [HSUPA SHO] Failed to map: (HSUPA RlNr, PSC)=(%d, %d)
Line 1080: [HSUPA SHO] SHO failed because no free Rl for E-DCH serving cell change.
Line 1080: [HSUPA SHO] SHO failed because no free Rl for E-DCH serving cell change.
Line 1087: [HSUPA SHO] new serving cell configured. wcdmaRlNr %d, hsupaRlNr %d, PSC %d
Line 1087: [HSUPA SHO] new serving cell configured. wcdmaRlNr %d, hsupaRlNr %d, PSC %d
Line 1098: [HSUPA SHO] serving cell is same. wcdmaRlNr %d, hsupaRlNr %d, PSC %d
Line 1098: [HSUPA SHO] serving cell is same. wcdmaRlNr %d, hsupaRlNr %d, PSC %d
Line 1107: [HSUPA SHO] non serving cell becomes serving cell. wcdmaRlNr %d, hsupaRlNr %d, PSC %d
Line 1107: [HSUPA SHO] non serving cell becomes serving cell. wcdmaRlNr %d, hsupaRlNr %d, PSC %d
Line 1121: [HSUPA SHO] prvServingRlNr=%d
Line 1121: [HSUPA SHO] prvServingRlNr=%d
Line 1131: [E-AGCH] uphy_CHsupaSoftHandover_HsupaDlphychRelease failed
Line 1131: [E-AGCH] uphy_CHsupaSoftHandover_HsupaDlphychRelease failed
Line 1148: E-AGCH Config Failed
Line 1148: E-AGCH Config Failed
Line 1169: E-AGCH HsupaRakeRlPhych Config Failed
Line 1169: E-AGCH HsupaRakeRlPhych Config Failed
Line 1188: GetPhychNum failed: returnedPhychNr(%d) should be greater than 0
Line 1188: GetPhychNum failed: returnedPhychNr(%d) should be greater than 0
Line 1201: [HSUPA SHO] wcdmaRlNr %d, hsupaRlNr %d, PSC %d, ErgchOffsetToCpich %d[chips], dpchOffsetToCpich %d, TTI %d
Line 1201: [HSUPA SHO] wcdmaRlNr %d, hsupaRlNr %d, PSC %d, ErgchOffsetToCpich %d[chips], dpchOffsetToCpich %d, TTI %d
Line 1228: HsupaDlphychRelease Config Failed. Prv HSUPA RlNr(%d), E-RGCH PhyChNr(%d)
Line 1228: HsupaDlphychRelease Config Failed. Prv HSUPA RlNr(%d), E-RGCH PhyChNr(%d)
Line 1247: HsupaDlphychRelease Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-RGCH PhyChNr(%d)
Line 1247: HsupaDlphychRelease Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-RGCH PhyChNr(%d)
Line 1269: HsupaDlPhyCh Config Failed. WCDMA RlNr %d, HSUPA RlNr %d, PhyChNr %d
Line 1269: HsupaDlPhyCh Config Failed. WCDMA RlNr %d, HSUPA RlNr %d, PhyChNr %d
Line 1292: HsupaRakeRlPhych Config Failed. WCDMA RlNr %d, HSUPA RlNr %d, PhyChNr %d, Tau %d
Line 1292: HsupaRakeRlPhych Config Failed. WCDMA RlNr %d, HSUPA RlNr %d, PhyChNr %d, Tau %d
Line 1322: HsupaRakeRlPhych Config Failed. WCDMA RlNr %d, HSUPA RlNr %d, PhyChNr %d, Tau %d
Line 1322: HsupaRakeRlPhych Config Failed. WCDMA RlNr %d, HSUPA RlNr %d, PhyChNr %d, Tau %d
Line 1331: E-RGCH Info & E-RGCH Release Indicator is being sent
Line 1331: E-RGCH Info & E-RGCH Release Indicator is being sent
Line 1339: Check RRC: ergchCombinationIndex(%d) is over the max available number(5)
Line 1339: Check RRC: ergchCombinationIndex(%d) is over the max available number(5)
Line 1349: HsupaDlphychRelease Config Failed. WCDMA RlNr %d, HSUPA RlNr %d, PhyChNr %d
Line 1349: HsupaDlphychRelease Config Failed. WCDMA RlNr %d, HSUPA RlNr %d, PhyChNr %d
Line 1353: [FR 2276] uphy_CChannelsConfigurationUtility_configureHsupaDlPhyCh with Fake Configuration
Line 1353: [FR 2276] uphy_CChannelsConfigurationUtility_configureHsupaDlPhyCh with Fake Configuration
Line 1367: HsupaDlPhyCh Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), PhyChNr(%d)
Line 1367: HsupaDlPhyCh Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), PhyChNr(%d)
Line 1374: [FR 2276] uphy_CChannelsConfigurationUtility_configureHsupaRakeRlPhych with Fake Configuration
Line 1374: [FR 2276] uphy_CChannelsConfigurationUtility_configureHsupaRakeRlPhych with Fake Configuration
Line 1391: HsupaRakeRlPhych Config Failed. WCDMA RlNr %d, HSUPA RlNr %d, PhyChNr %d, Tau %d
Line 1391: HsupaRakeRlPhych Config Failed. WCDMA RlNr %d, HSUPA RlNr %d, PhyChNr %d, Tau %d
Line 1428: HsupaDlphychRelease Config Failed. Prv HSUPA RlNr(%d), E-HICH PhyChNr(%d)
Line 1428: HsupaDlphychRelease Config Failed. Prv HSUPA RlNr(%d), E-HICH PhyChNr(%d)
Line 1446: HsupaDlphychRelease Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-HICH PhyChNr(%d)
Line 1446: HsupaDlphychRelease Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-HICH PhyChNr(%d)
Line 1464: HsupaDlPhyCh Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-HICH PhyChNr(%d)
Line 1464: HsupaDlPhyCh Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-HICH PhyChNr(%d)
Line 1487: HsupaRakeRlPhych Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-HICH PhyChNr(%d), Tau(%d)
Line 1487: HsupaRakeRlPhych Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-HICH PhyChNr(%d), Tau(%d)
Line 1502: EHalDlRlReferenceConfigCmd has failed to run..
Line 1502: EHalDlRlReferenceConfigCmd has failed to run..
Line 1525: HsupaRakeRlPhych Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-HICH PhyChNr(%d), Tau(%d)
Line 1525: HsupaRakeRlPhych Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-HICH PhyChNr(%d), Tau(%d)
Line 1535: [uphy_CHsupaSoftHandover] Invalid configuration for serving cell change
Line 1535: [uphy_CHsupaSoftHandover] Invalid configuration for serving cell change
Line 1613: HSUPA Soft Handover Failed: PSC(%d) does not belong to WCDMA RL
Line 1613: HSUPA Soft Handover Failed: PSC(%d) does not belong to WCDMA RL
Line 1640: [SW WA] psc buffer:: 0->psc %d, ->psc %d, 2->psc %d, 3->psc %d,
Line 1640: [SW WA] psc buffer:: 0->psc %d, ->psc %d, 2->psc %d, 3->psc %d,
Line 1650: [SW WA] Condition Met:: psc %d will be removed in WA_MoreEdchActiveSets && [index %d, isTRUE %d]
Line 1650: [SW WA] Condition Met:: psc %d will be removed in WA_MoreEdchActiveSets && [index %d, isTRUE %d]
Line 1657: [HSUPA SHO] UnMap successful: (HSUPA PSC)=(%d)
Line 1657: [HSUPA SHO] UnMap successful: (HSUPA PSC)=(%d)
Line 1662: [HSUPA SHO] Failed to unmap: (HSUPA PSC)=(%d)
Line 1662: [HSUPA SHO] Failed to unmap: (HSUPA PSC)=(%d)
Line 1683: uphy_CHsupaSoftHandover_HsupaDlphychRelease failed on phychNr %d
Line 1683: uphy_CHsupaSoftHandover_HsupaDlphychRelease failed on phychNr %d
Line 1690: uphy_CHsupaSoftHandover_HsupaDlphychRelease totally failed
Line 1690: uphy_CHsupaSoftHandover_HsupaDlphychRelease totally failed
Line 1696: uphy_CHsupaSoftHandover_HsupaDlphychRelease for RL %d done
Line 1696: uphy_CHsupaSoftHandover_HsupaDlphychRelease for RL %d done
Line 1704: [HSUPA SHO] Unmap successful for (HSUPA RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1704: [HSUPA SHO] Unmap successful for (HSUPA RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1709: [HSUPA SHO] Failed to unmap (HSUPA RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1709: [HSUPA SHO] Failed to unmap (HSUPA RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1734: [SW WA] Pass due to HICH release Ind
Line 1734: [SW WA] Pass due to HICH release Ind
Line 1774: [SW WA] [Index %d / psc %d] found %d, ecNo %d, rscp %d, minEcNo %d, CandidateCell %d,
Line 1774: [SW WA] [Index %d / psc %d] found %d, ecNo %d, rscp %d, minEcNo %d, CandidateCell %d,
Line 1782: [SW WA ERROR:: CandidateIndex == 0xff] minEcNo %d, minRscp %d, CandidateCell %d[PSC %d],
Line 1782: [SW WA ERROR:: CandidateIndex == 0xff] minEcNo %d, minRscp %d, CandidateCell %d[PSC %d],
Line 1793: [SW WA] [CandidateIndex(%d)] isHsupaRlNr %d, isExisting %d, psc %d
Line 1793: [SW WA] [CandidateIndex(%d)] isHsupaRlNr %d, isExisting %d, psc %d
Line 1804: [SW WA] One Of Active Set[RL NO %d], but Low signal Quality, so PHYCH STR 0x%x(No %d) is being removed.
Line 1804: [SW WA] One Of Active Set[RL NO %d], but Low signal Quality, so PHYCH STR 0x%x(No %d) is being removed.
Line 1811: uphy_CHsupaSoftHandover_HsupaDlphychRelease failed
Line 1811: uphy_CHsupaSoftHandover_HsupaDlphychRelease failed
Line 1818: uphy_CHsupaSoftHandover_HsupaDlphychRelease totally failed
Line 1818: uphy_CHsupaSoftHandover_HsupaDlphychRelease totally failed
Line 1824: uphy_CHsupaSoftHandover_HsupaDlphychRelease for RL %d done
Line 1824: uphy_CHsupaSoftHandover_HsupaDlphychRelease for RL %d done
Line 1833: [HSUPA SHO] Unmap successful for (HSUPA RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1833: [HSUPA SHO] Unmap successful for (HSUPA RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1838: [HSUPA SHO] Failed to unmap (HSUPA RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1838: [HSUPA SHO] Failed to unmap (HSUPA RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1866: [SW WA] [PSC %d] WA_Cell[0] = %d, WA_Cell[] = %d, WA_Cell[2] = %d, WA_Cell[3] = %d
Line 1866: [SW WA] [PSC %d] WA_Cell[0] = %d, WA_Cell[] = %d, WA_Cell[2] = %d, WA_Cell[3] = %d
Line 1878: [SW WA] WA_MoreEdchActiveSets buffer is full.. it shall not happen!!! B[0] = %d, B[] = %d, B[2] = %d, B[3] = %d
Line 1878: [SW WA] WA_MoreEdchActiveSets buffer is full.. it shall not happen!!! B[0] = %d, B[] = %d, B[2] = %d, B[3] = %d
Line 1884: [SW WA] Condition Met(i %d, CandidateIndex %d) psc %d will be stored in WA_MoreEdchActiveSets  & [index %d, isTRUE %d & psc[%d] ]
Line 1884: [SW WA] Condition Met(i %d, CandidateIndex %d) psc %d will be stored in WA_MoreEdchActiveSets  & [index %d, isTRUE %d & psc[%d] ]
Line 1893: [SW WA] NEXT STEP : Config PHYCH on the psc %d [index %d, isTRUE %d]
Line 1893: [SW WA] NEXT STEP : Config PHYCH on the psc %d [index %d, isTRUE %d]
Line 1897: [SW WA] Condition Met:: (hsupaRlNr == UPHY_MAPPING_DATABASE_VALUE_NOT_FOUND) && (isExisting == TRUE) && (i(%d) == CandidateIndex(%d))
Line 1897: [SW WA] Condition Met:: (hsupaRlNr == UPHY_MAPPING_DATABASE_VALUE_NOT_FOUND) && (isExisting == TRUE) && (i(%d) == CandidateIndex(%d))
Line 1917: No Free Rl for E-DCH Remaining Active Set On E-DCH Active Set
Line 1917: No Free Rl for E-DCH Remaining Active Set On E-DCH Active Set
Line 1930: [HSUPA SHO] Map successful: (HSUPA RlNr, PSC)=(%d, %d)
Line 1930: [HSUPA SHO] Map successful: (HSUPA RlNr, PSC)=(%d, %d)
Line 1935: [HSUPA SHO] Failed to map: (HSUPA RlNr, PSC)=(%d, %d)
Line 1935: [HSUPA SHO] Failed to map: (HSUPA RlNr, PSC)=(%d, %d)
Line 1942: [HSUPA SHO] new non serving cell configured. wcdmaRlNr %d, hsupaRlNr %d, PSC %d
Line 1942: [HSUPA SHO] new non serving cell configured. wcdmaRlNr %d, hsupaRlNr %d, PSC %d
Line 1951: [HSUPA SHO] existing non serving cell configured. wcdmaRlNr %d, hsupaRlNr %d, PSC %d
Line 1951: [HSUPA SHO] existing non serving cell configured. wcdmaRlNr %d, hsupaRlNr %d, PSC %d
Line 1966: GetPhychNum failed: returnedPhychNr(%d) should be greater than 0
Line 1966: GetPhychNum failed: returnedPhychNr(%d) should be greater than 0
Line 1980: [HSUPA SHO] wcdmaRlNr %d, hsupaRlNr %d, PSC %d, ErgchOffsetToCpich %d[chips], dpchOffsetToCpich %d, TTI %d
Line 1980: [HSUPA SHO] wcdmaRlNr %d, hsupaRlNr %d, PSC %d, ErgchOffsetToCpich %d[chips], dpchOffsetToCpich %d, TTI %d
Line 1995: [HSUPA SHO] Non Serving RLS: PSC %d, reset ErgchOffsetToCpich %d[chips], ServRlsRgCombInx %d, NonServRlsRgCombInx %d
Line 1995: [HSUPA SHO] Non Serving RLS: PSC %d, reset ErgchOffsetToCpich %d[chips], ServRlsRgCombInx %d, NonServRlsRgCombInx %d
Line 2019: HsupaDlPhyCh Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-RGCH PhyChNr(%d)
Line 2019: HsupaDlPhyCh Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-RGCH PhyChNr(%d)
Line 2042: HsupaRakeRlPhych Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-RGCH PhyChNr(%d)
Line 2042: HsupaRakeRlPhych Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-RGCH PhyChNr(%d)
Line 2069: HsupaRakeRlPhych Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-RGCH PhyChNr(%d)
Line 2069: HsupaRakeRlPhych Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-RGCH PhyChNr(%d)
Line 2082: uphy_CHsupaSoftHandover_HsupaDlphychRelease failed
Line 2082: uphy_CHsupaSoftHandover_HsupaDlphychRelease failed
Line 2117: HsupaRakeRlPhych Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-HICH PhyChNr(%d), Tau(%d)
Line 2117: HsupaRakeRlPhych Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-HICH PhyChNr(%d), Tau(%d)
Line 2140: HsupaRakeRlPhych Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-HICH PhyChNr(%d), Tau(%d)
Line 2140: HsupaRakeRlPhych Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-HICH PhyChNr(%d), Tau(%d)
Line 2167: HsupaRakeRlPhych Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-HICH PhyChNr(%d), Tau(%d)
Line 2167: HsupaRakeRlPhych Config Failed. WCDMA RlNr(%d), HSUPA RlNr(%d), E-HICH PhyChNr(%d), Tau(%d)
Line 2356: event=0
Line 2356: event=0
Line 2369: HSUPA Soft Handover : Timeout in Idle state
Line 2369: HSUPA Soft Handover : Timeout in Idle state
Line 2374: HSUPA Soft Handover : ActivationTime in Idle state
Line 2374: HSUPA Soft Handover : ActivationTime in Idle state
Line 2379: HSUPA Soft Handover : Reset in Idle state
Line 2379: HSUPA Soft Handover : Reset in Idle state
Line 2385: Unknown Event
Line 2385: Unknown Event
Line 2402: event=0
Line 2402: event=0
Line 2411: HSUPA Soft Handover : AddRl in AssignedRL state
Line 2411: HSUPA Soft Handover : AddRl in AssignedRL state
Line 2421: HSUPA Soft Handover : TimeOut in AssignedRL state
Line 2421: HSUPA Soft Handover : TimeOut in AssignedRL state
Line 2426: HSUPA Soft Handover : ActivationTime in AssignedRL state
Line 2426: HSUPA Soft Handover : ActivationTime in AssignedRL state
Line 2431: HSUPA Soft Handover : Reset in AssignedRL state
Line 2431: HSUPA Soft Handover : Reset in AssignedRL state
Line 2437: Unknown Event
Line 2437: Unknown Event
Line 2455: event=0
Line 2455: event=0
Line 2464: Soft Handover : AddRl in AssignedRLNotAssignedPhychs state
Line 2464: Soft Handover : AddRl in AssignedRLNotAssignedPhychs state
Line 2470: Soft Handover : TimeOut in AssignedRLNotAssignedPhychs state
Line 2470: Soft Handover : TimeOut in AssignedRLNotAssignedPhychs state
Line 2475: Soft Handover : Activation Time in AssignedRLNotAssignedPhychs state
Line 2475: Soft Handover : Activation Time in AssignedRLNotAssignedPhychs state
Line 2485: Unknown Event
Line 2485: Unknown Event
Line 2503: event=0
Line 2503: event=0
Line 2512: Soft Handover : AddRl in AwaitingActivationTime state
Line 2512: Soft Handover : AddRl in AwaitingActivationTime state
Line 2518: Soft Handover : Timeout in AwaitingActivationTime state
Line 2518: Soft Handover : Timeout in AwaitingActivationTime state
Line 2541: Unknown Event
Line 2541: Unknown Event
Line 2656: PhyChNr=%d: HsupaDlPhychStartCmd exec failed: ErrCode %d AddErrCode %d
Line 2656: PhyChNr=%d: HsupaDlPhychStartCmd exec failed: ErrCode %d AddErrCode %d
Line 2676: PhyChNr=%d: HsupaDlPhychStartCmd exec failed: ErrCode %d AddErrCode %d
Line 2676: PhyChNr=%d: HsupaDlPhychStartCmd exec failed: ErrCode %d AddErrCode %d
Line 2705: No Camping DL UARFCN During HSUPA Soft Handover
Line 2705: No Camping DL UARFCN During HSUPA Soft Handover
Line 2746: Can't Request Cell Synchro
Line 2746: Can't Request Cell Synchro
Line 2752: UphyActiveSetCheckReqMsg is NULL
Line 2752: UphyActiveSetCheckReqMsg is NULL
Line 2768: No matched E-TTI
Line 2768: No matched E-TTI
Line 2771: [CalculateTauERgch] TauDPCH %d, TTI %d, TauERgch %d
Line 2771: [CalculateTauERgch] TauDPCH %d, TTI %d, TauERgch %d
Line 2826: [SW WA] index_WA_MoreEdchActiveSets == 0
Line 2826: [SW WA] index_WA_MoreEdchActiveSets == 0
