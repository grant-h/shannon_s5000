Line 119: Class_ServingCellSysInfoCache_StartUpInit: Creating TDD Instance
Line 141: Class_ServingCellSysInfoCache_ShutdownDestroy: Destroying TDD Instance
Line 229: rrc_Class_ServingCellSysInfoCache_GetInstanceId: Returning TDD Instance
Line 346: rrc_ServingCellSysInfoCache_InitLastNeighborFreq: (Uarfcn = %d) Restored to LastUsedNeighborFreq[%d]
Line 355: rrc_ServingCellSysInfoCache_InitLastNeighborFreq: %d freq restored
Line 370: remove the oldest SCellSysInfo (Uarfcn = %d, Cpich = %d)
Line 378: remove SIB in the SCellSysInfoCache (%d)
Line 417: remove the same SCellSysInfo (Uarfcn = %d, Cpich = %d)
Line 425: remove SIB in the SCellSysInfoCache (%d)
Line 490: succeed in removing the oldest SCellSysInfoCache (NumSCellInfo = %d)
Line 494: Fail to remove the oldest SCellSysInfoCache (NumSCellInfo = %d)
Line 500: copy SCellSysInfo[Index = %d] (Uarfcn = %d, Cpich = %d)
Line 519: copy SIB in the SCellSysInfoCache (%d)
Line 529: Fatal Error: SCellSysInfoCache is full(%d)
Line 545: rrc_ServingCellSysInfoCache_CopyLastUsedNeighborFreq : Sib11Ptr is NULL
Line 554: rrc_ServingCellSysInfoCache_CopyLastUsedNeighborFreq : Sib12Ptr is NULL
Line 563: rrc_ServingCellSysInfoCache_CopyLastUsedNeighborFreq : Sib11bisPtr is NULL
Line 582: rrc_ServingCellSysInfoCache_AddNewFreqToLastUsedNeighborFreq : UARFCN(%d), Current NumLastUsedNFreqInfo(%d) 
Line 601: Old freq: Sort
Line 609: Old freq: Skip
Line 615: New freq
Line 628: First freq
Line 632: Added %d freq, ServingCellSysInfoCache_p->NumLastUsedNFreqInfo(%d)
Line 648: copy SibType(%d) to SCellSysInfo[Index = %d] (Uarfcn = %d, Cpich = %d)
Line 655: remove SIB in the SCellSysInfoCache (%d)
Line 671: copied SibType(%d) to the SCellSysInfoCache (%d)
Line 678: Fatal Error: SameCellInfo is not found at SCellSysInfoCache(%d) from ServingCellSysInfoCache_p->NumSCellInfo(%d)
Line 680: Fatal Error: SibType(%d) cannot be copied to SCellSysInfoCache
Line 728: PeerSimCache[%d] : Found LastServingCellInfo[%d] for UARFCN%i/PSC%i (NumSCellInfo %i)
Line 781: Found LastServingCellInfo[%d] for UARFCN%i/PSC%i (NumSCellInfo %i)
Line 787: Deleting LastServingCellInfo[%d] entry for UARFCN%i/PSC%i, as it does not contain complete SIBs
Line 794: No LastServingCellInfo Found for UARFCN%i/PSC%i (NumSCellInfo %i)
Line 799: No LastServingCellInfo Available(%d)
Line 830: Finding SibId[%i] for (UARFCN%i/PSC%i) from LastSCellInfo (Total %i Cell Info Saved)
Line 838: Finding SibId[%i] for (UARFCN%i/PSC%i) from LastSCellInfo (Total %i Cell Info Saved)
Line 848: Fatal Error: SCellSysInfoIndex[%d] is overflowed(%d)
Line 869: rrc_ServingCellSysInfoCache_InitPriorityInfo: LastPriorityInfo initialized
Line 900: rrc_ServingCellSysInfoCache_GetScellInfoIdxForHcsPriorityInfo : HcsPrioInfo found at Idx(%d) ServUarfcn(%d) ServCpich(%d) ServHcsPrio(%d)
Line 917: rrc_ServingCellSysInfoCache_GetScellInfoIdxForHcsPriorityInfo : HcsPrioInfo found at Idx(%d) NeibUarfcn(%d) NeibCpich(%d) NeibHcsPrio(%d)
Line 942: rrc_ServingCellSysInfoCache_GetScellInfoIdxForHcsPriorityInfo : HcsPrioInfo found at Idx(%d) NeibUarfcn(%d) NeibCpich(%d) NeibHcsPrio(%d)
Line 954: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo : SCellInfoIdx(%d) Not in Use HcsPriorityInfo
Line 960: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo : Uarfcn(%d)
Line 988: rrc_ServingCellSysInfoCache_GetScellInfoIdxForHcsPriorityInfo : HcsPrioInfo found at Idx(%d) ServUarfcn(%d) ServCpich(%d) ServHcsPrio(%d)
Line 1004: rrc_ServingCellSysInfoCache_GetScellInfoIdxForHcsPriorityInfo : HcsPrioInfo found at Idx(%d) NeibUarfcn(%d) NeibCpich(%d) NeibHcsPrio(%d)
Line 1025: rrc_ServingCellSysInfoCache_GetScellInfoIdxForHcsPriorityInfo : HcsPrioInfo found at Idx(%d) NeibUarfcn(%d) NeibCpich(%d) NeibHcsPrio(%d)
Line 1034: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo : SCellInfoIdx(%d) Not in Use HcsPriorityInfo
Line 1039: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo : Uarfcn(%d)
Line 1061: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo: IsHcsInUse(%d) ServHcsPrio(%d) 
Line 1071: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo : ServUarfcn(%d) ServCpich(%d) set to ServHcsPrio(%d)
Line 1081: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo : IsHcsInUse(%d) ServUarfcn(%d)
Line 1097: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo : Sib11Ptr is NULL
Line 1126: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo : ServHcsPrioUpdated(%d)
Line 1134: rrc_ServingCellSysInfoCache_AddIntraFNeighborHcsPrioInfoToSysInfoCache : ServUarfcn(%d) ServCpich(%d) NumNeibPrioInfoList(%d)
Line 1144: ServingCell Found at index(%d) Uarfcn(%d) Cpich(%d) IsServingHcsPrio(%d) HcsPrio(%d)
Line 1166: Add IntraNeighbor HCellPrioInfoIdx(%d) - Uarfcn(%d) Cpich(%d) HcsPrio(%d)
Line 1172: Invalid Info HCellPrioInfoIdx(%d) Uarfcn(%d) Cpich(%d) HcsPrio(%d)
Line 1180: Invalid Info NumNeibPrioInfoList(%d) NeibPrioInfoList(0X%x)
Line 1188: rrc_ServingCellSysInfoCache_AddIntraFNeighborHcsPrioInfoToSysInfoCache : ServUarfcn(%d) is not supported
Line 1196: rrc_ServingCellSysInfoCache_AddInterFNeighborHcsPrioInfoToSysInfoCache : ServUarfcn(%d) ServCpich(%d) NumNeibPrioInfoList(%d)
Line 1223: Add InterNeighbor HCellPrioInfoIdx(%d) - Uarfcn(%d) Cpich(%d) HcsPrio(%d)
Line 1229: Invalid Info HCellPrioInfoIdx(%d) Uarfcn(%d) Cpich(%d) HcsPrio(%d)
Line 1240: rrc_ServingCellSysInfoCache_AddInterFNeighborHcsPrioInfoToSysInfoCache : ServUarfcn(%d) is not supported
Line 1272: Clear SysInfoContainerList
Line 1326: succeeded in creating a MIB
Line 1332: Failed to create a MIB
Line 1338: Failed to create MIB in SysInfoContainer: decoded MIB is NULL
Line 1353: succeeded in creating a SB1
Line 1359: Failed to create a SB1
Line 1367: Failed to create SB1 in SysInfoContainer
Line 1371: SB1 Not Included in SysInfoContainer
Line 1387: succeeded in creating a SB2
Line 1393: Failed to create a SB2
Line 1401: Failed to create SB2 in SysInfoContainer
Line 1405: SB2 Not Included in SysInfoContainer
Line 1421: succeeded in creating a SIB1
Line 1427: Failed to create a SIB1
Line 1433: can not use the decoded data for SIB1 in SysInfoContainer
Line 1448: succeeded in creating a SIB3
Line 1454: Failed to create a SIB3
Line 1460: can not use the decoded data for SIB3 in SysInfoContainer
Line 1476: succeeded in creating a SIB5
Line 1481: succeeded in creating a SIB5bis
Line 1486: succeeded in creating a SIB5
Line 1487: Cause of lack of scheduling info from MIB, Creating SIB5
Line 1494: Failed to create a SIB5
Line 1500: can not use the decoded data for SIB5 in SysInfoContainer
Line 1515: succeeded in creating a SIB7
Line 1521: Failed to create a SIB7
Line 1527: can not use the encoded data for SIB7 in SysInfoContainer
Line 1542: succeeded in creating a SIB11
Line 1548: Failed to create a SIB11
Line 1556: Failed to create SIB11 in SysInfoContainer
Line 1560: SIB11 Not Included in SysInfoContainer
Line 1576: succeeded in creating a SIB11bis
Line 1582: Failed to create a SIB11bis
Line 1590: Failed to create SIB11bis in SysInfoContainer
Line 1594: SIB11bis Not Included in SysInfoContainer
Line 1610: succeeded in creating a SIB12
Line 1616: Failed to create a SIB12
Line 1624: Failed to create SIB12 in SysInfoContainer
Line 1628: SIB12 Not Included in SysInfoContainer
Line 1635: DecodedSysInfo is NULL
Line 1641: IsCampedSysInfoContainer == FALSE
Line 1663: Clear SysInfoContainer (num = %d)
Line 1723: CampedSysInfoContainer is available (Uarfcn %d, Cpich %d)
Line 1736: SysInfoContainerList is available (Idx %d, Uarfcn %d, Cpich %d)
Line 1743: Critical :: Uarfcn and Cpich match up but Data is not available (Idx %d, Uarfcn %d, Cpich %d)
Line 1783: Critial : failed to create SIBs from CampedSysInfoContainer
Line 1804: Critial : failed to decode SysInfoContainer
Line 1820: SysInfoContainer is not available
Line 1836: CampedSysInfoContainer is available
Line 1842: Cell Info is different (SysInfoContainer: uarfcn %d, cpich %d, ServingCell: uarfcn %d, cpich %d
Line 1850: CampedSysInfoContainer is not available
Line 1895: rrc_ServingCellSysInfoCache_InitPrioBaseReselEutraParamInfo: PrioBaseReselEutraParam initialized
Line 1906: Get Bandwidth = %d, Priority = %d, QrxlevminEutra = %d, ThresXhigh = %d, ThresXlow = %d
Line 1914: Set Priority = %d
Line 1920: Set QrxlevminEutra = %d
Line 1926: Set ThreshXhigh = %d
Line 1932: Set ThreshXlow = %d
Line 1938: Set QqualminEutra = %d
Line 1944: Set ThreshXhigh2 = %d
Line 1950: Set ThreshXlow2 = %d
