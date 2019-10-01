Line 419: Warning: CellSfnInd ((UphyCellSfnServerIndMsg_t *)message)->payload.referenceSfn out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 424: Warning: CellSfnInd ((UphyCellSfnServerIndMsg_t *)message)->payload.targetSfn out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 554: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 554: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 623: DedicatedModeConfig message rejected : Bad frequency info
Line 623: DedicatedModeConfig message rejected : Bad frequency info
Line 632: DedicatedModeConfig message rejected : Bad DL info
Line 632: DedicatedModeConfig message rejected : Bad DL info
Line 641: DedicatedModeConfig message rejected : Bad UL info
Line 641: DedicatedModeConfig message rejected : Bad UL info
Line 662: checkValidDedicatedModeConfigMsg changing dedicatedModeController referenceCellPrimaryScrCodeis from %d to %d
Line 662: checkValidDedicatedModeConfigMsg changing dedicatedModeController referenceCellPrimaryScrCodeis from %d to %d
Line 669: checkValidDedicatedModeConfigMsg refRlCellInfo is NULL
Line 669: checkValidDedicatedModeConfigMsg refRlCellInfo is NULL
Line 748: [HHO] checkValidDedicatedModeConfigMsg: HHO = %d
Line 748: [HHO] checkValidDedicatedModeConfigMsg: HHO = %d
Line 753: Dedicated Mode Config Message Rejected : hho already pending
Line 753: Dedicated Mode Config Message Rejected : hho already pending
Line 760: Dedicated Mode Config Message Rejected : sho already pending
Line 760: Dedicated Mode Config Message Rejected : sho already pending
Line 814: Dedicated Mode Config Message Rejected : Activation Time but not hho
Line 814: Dedicated Mode Config Message Rejected : Activation Time but not hho
Line 821: Dedicated Mode Config Message Rejected : Cant not supply DpchCommonInfo or FdpchCommonInfo
Line 821: Dedicated Mode Config Message Rejected : Cant not supply DpchCommonInfo or FdpchCommonInfo
Line 827: Dedicated Mode Config Message Rejected : Cant not supply DlDpchPowerControlMode or DlFdpchPowerControlMode
Line 827: Dedicated Mode Config Message Rejected : Cant not supply DlDpchPowerControlMode or DlFdpchPowerControlMode
Line 833: Dedicated Mode Config Message Rejected : Cant not supply UplinkDpchPowerControlInfo
Line 833: Dedicated Mode Config Message Rejected : Cant not supply UplinkDpchPowerControlInfo
Line 839: Dedicated Mode Config Message Rejected : Cant not supply uplink slotFormat
Line 839: Dedicated Mode Config Message Rejected : Cant not supply uplink slotFormat
Line 868: Intra Freq HHO requests with new ref RL part of existing config not supported
Line 868: Intra Freq HHO requests with new ref RL part of existing config not supported
Line 880: Dedicated Mode Config Message Rejected : Cant supply off for timing maintained hho
Line 880: Dedicated Mode Config Message Rejected : Cant supply off for timing maintained hho
Line 888: Dedicated Mode Config Message Rejected : Cant supply off for timing maintained hho
Line 888: Dedicated Mode Config Message Rejected : Cant supply off for timing maintained hho
Line 893: Dedicated Mode Config Message Rejected : Bad Timing Indication
Line 893: Dedicated Mode Config Message Rejected : Bad Timing Indication
Line 901: Dedicated Mode Config Message Rejected : Cant not supply off for intra freq timing reinit hho
Line 901: Dedicated Mode Config Message Rejected : Cant not supply off for intra freq timing reinit hho
Line 909: Dedicated Mode Config Message Rejected : Cant supply off for inter freq timing maintained hho
Line 909: Dedicated Mode Config Message Rejected : Cant supply off for inter freq timing maintained hho
Line 917: Dedicated Mode Config Message Rejected : Cant supply off for inter freq timing maintained hho
Line 917: Dedicated Mode Config Message Rejected : Cant supply off for inter freq timing maintained hho
Line 922: Dedicated Mode Config Message Rejected : Bad Timing Indication
Line 922: Dedicated Mode Config Message Rejected : Bad Timing Indication
Line 930: Dedicated Mode Config Message Rejected : Cant not supply off for inter freq timing reinit hho
Line 930: Dedicated Mode Config Message Rejected : Cant not supply off for inter freq timing reinit hho
Line 935: Dedicated Mode Config Message Rejected : Bad Timing Indication
Line 935: Dedicated Mode Config Message Rejected : Bad Timing Indication
Line 961: Dedicated Mode Config Request RL %d; PSC %d with dOff %d, radio link 0 dpchFrameOffset %d [dpchFrameOffset/256 %d]
Line 961: Dedicated Mode Config Request RL %d; PSC %d with dOff %d, radio link 0 dpchFrameOffset %d [dpchFrameOffset/256 %d]
Line 975: Dedicated Mode Config Request RL %d; PSC %d with dOff %d, radio link 0 dpchFrameOffset %d [dpchFrameOffset/256 %d]
Line 975: Dedicated Mode Config Request RL %d; PSC %d with dOff %d, radio link 0 dpchFrameOffset %d [dpchFrameOffset/256 %d]
Line 1059: Dedicated Mode Config Message Rejected : sho already pending
Line 1059: Dedicated Mode Config Message Rejected : sho already pending
Line 1066: Dedicated Mode Config Message Rejected : hho already pending
Line 1066: Dedicated Mode Config Message Rejected : hho already pending
Line 1077: Dedicated Mode Replace RL Message Rejected : message seems to be corrupted
Line 1077: Dedicated Mode Replace RL Message Rejected : message seems to be corrupted
Line 1084: ReplaceRl message rejected : Number of RL greater than 6 
Line 1084: ReplaceRl message rejected : Number of RL greater than 6 
Line 1100: ReplaceRl message rejected : Number of RL greater than 6 
Line 1100: ReplaceRl message rejected : Number of RL greater than 6 
Line 1158: ReplaceRl message rejected : Bad Fdpch RL info
Line 1158: ReplaceRl message rejected : Bad Fdpch RL info
Line 1167: ReplaceRl message rejected : Bad Dpch RL info
Line 1167: ReplaceRl message rejected : Bad Dpch RL info
Line 1209: ReplaceRl message rejected : Bad Fdpch RL info
Line 1209: ReplaceRl message rejected : Bad Fdpch RL info
Line 1218: ReplaceRl message rejected : Bad Dpch RL info
Line 1218: ReplaceRl message rejected : Bad Dpch RL info
Line 1226: ReplaceRl message rejected : Can't locate Rl to replace
Line 1226: ReplaceRl message rejected : Can't locate Rl to replace
Line 1237: ReplaceRl message rejected : Can't remove a non-existant RL
Line 1237: ReplaceRl message rejected : Can't remove a non-existant RL
Line 1250: ReplaceRl message rejected : Insufficient RL to satisfy request
Line 1250: ReplaceRl message rejected : Insufficient RL to satisfy request
Line 1257: eplaceRl message rejected : No RL is left unchanged
Line 1257: eplaceRl message rejected : No RL is left unchanged
Line 1283: AddDlDpch message rejected : Bad dpchInfo
Line 1283: AddDlDpch message rejected : Bad dpchInfo
Line 1325: ModifyRl message rejected : Bad rlCommonInfo
Line 1325: ModifyRl message rejected : Bad rlCommonInfo
Line 1332: ModifyRl message rejected : Illegal attempt to modify dOff
Line 1332: ModifyRl message rejected : Illegal attempt to modify dOff
Line 1340: ModifyRl message rejected : Invalid fdpch timing maintained mode
Line 1340: ModifyRl message rejected : Invalid fdpch timing maintained mode
Line 1349: ModifyRl message rejected : Invalid dpch timing maintained mode
Line 1349: ModifyRl message rejected : Invalid dpch timing maintained mode
Line 1370: Dodgy ModifyRlCommonInfo message: Illegal attempt to modify dlFdpchPowerControlMode
Line 1370: Dodgy ModifyRlCommonInfo message: Illegal attempt to modify dlFdpchPowerControlMode
Line 1381: Dodgy ModifyRlCommonInfo message: Illegal attempt to modify dlDpchPowerControlMode
Line 1381: Dodgy ModifyRlCommonInfo message: Illegal attempt to modify dlDpchPowerControlMode
Line 1388: Dodgy ModifyRlCommonInfo message : Illegal attempt to modify ssdt
Line 1388: Dodgy ModifyRlCommonInfo message : Illegal attempt to modify ssdt
Line 1395: Dodgy ModifyRlCommonInfo message : Illegal attempt to modify ssdt
Line 1395: Dodgy ModifyRlCommonInfo message : Illegal attempt to modify ssdt
Line 1399: Dodgy ModifyRlCommonInfo message : Illegal attempt to modify ssdt
Line 1399: Dodgy ModifyRlCommonInfo message : Illegal attempt to modify ssdt
Line 1428: Warning: ModifyRl message->payload.numOfFdpchRls out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 1445: ModifyRl message rejected : non-existant Rl
Line 1445: ModifyRl message rejected : non-existant Rl
Line 1459: ModifyRl message has problems : Dodgy attempt to change some Rl attributes
Line 1459: ModifyRl message has problems : Dodgy attempt to change some Rl attributes
Line 1468: Warning: ModifyRl message->payload.numOfRls out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 1485: ModifyRl message rejected : non-existant Rl
Line 1485: ModifyRl message rejected : non-existant Rl
Line 1499: ModifyRl message has problems : Dodgy attempt to change some Rl attributes
Line 1499: ModifyRl message has problems : Dodgy attempt to change some Rl attributes
Line 1537: Illegal attempt to change Rl %d PScrCode from %d to %d
Line 1537: Illegal attempt to change Rl %d PScrCode from %d to %d
Line 1544: SCPICH Active
Line 1544: SCPICH Active
Line 1552: Illegal attempt to change rl %d ChEstInfo from %d to %d
Line 1552: Illegal attempt to change rl %d ChEstInfo from %d to %d
Line 1573: Illegal attempt to change rl %d phych %d fdpchFrameOffset from %d to %d
Line 1573: Illegal attempt to change rl %d phych %d fdpchFrameOffset from %d to %d
Line 1612: Illegal attempt to change Rl %d PScrCode from %d to %d
Line 1612: Illegal attempt to change Rl %d PScrCode from %d to %d
Line 1619: SCPICH Active
Line 1619: SCPICH Active
Line 1627: Illegal attempt to change rl %d ChEstInfo from %d to %d
Line 1627: Illegal attempt to change rl %d ChEstInfo from %d to %d
Line 1640: Illegal attempt to change rl %d nPhych from %d to %d
Line 1640: Illegal attempt to change rl %d nPhych from %d to %d
Line 1657: Illegal attempt to change rl %d phych %d dpchFrameOffset from %d to %d
Line 1657: Illegal attempt to change rl %d phych %d dpchFrameOffset from %d to %d
Line 1690: ReplaceUlDpch message rejected : Bad Ul Dpch Info
Line 1690: ReplaceUlDpch message rejected : Bad Ul Dpch Info
Line 1726: Warning: AddTfcs message->payload.cctrchType out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 1734: AddTfcs message rejected : Bad Cctrch Info
Line 1734: AddTfcs message rejected : Bad Cctrch Info
Line 1756: Warning: RemoveTfcs message->payload.cctrchType out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 1781: Warning: ReplaceTfcs message->payload.cctrchType out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 1786: Warning: ReplaceTfcs message->payload.numOfDlCtfcToRemove out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 1792: Warning: ReplaceTfcs message->payload.numOfDlCtfcToAdd out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 1801: Warning: ReplaceTfcs message->payload.tfciToRemoveArray[i] out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 1809: Warning: ReplaceTfcs message->payload.dlCtfcToAddArray[i] out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 1832: Warning: ReplaceTfcs message->payload.cctrchType out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 1840: ReconfTfcs message rejected : Bad CctrchInfo
Line 1840: ReconfTfcs message rejected : Bad CctrchInfo
Line 1864: Warning: ConfigDlTrch message->payload.numOfDlTrChs out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 1877: ConfigDlTrch message rejected : Bad dlTrchInfo
Line 1877: ConfigDlTrch message rejected : Bad dlTrchInfo
Line 1885: Warning: AddDlTrch message->payload.dlTrChInfoArray[i].blerQualityTarget out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 1911: Warning: ModifyDlTrch message->payload.numOfDlTrChs out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 1924: ModifyDlTrch message rejected : Bad dlTrchInfo
Line 1924: ModifyDlTrch message rejected : Bad dlTrchInfo
Line 1932: Warning: AddDlTrch message->payload.dlTrChInfoArray[i].blerQualityTarget out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 1967: ReleaseDlTrCh message rejected : Can't release non-existant Trch id %d
Line 1967: ReleaseDlTrCh message rejected : Can't release non-existant Trch id %d
Line 1993: Warning: ConfigUlTrch message->payload.numOfUlTrChs out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2006: Config UlTrCh message rejected : Bad ulTrChInfo
Line 2006: Config UlTrCh message rejected : Bad ulTrChInfo
Line 2032: Warning: ModifyUlTrch message->payload.numOfUlTrChs out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2045: Modify UlTrCh message rejected : Bad ulTrChInfo
Line 2045: Modify UlTrCh message rejected : Bad ulTrChInfo
Line 2080: ReleaseUlTrCh message rejected : Can't release non-existant Trch id %d
Line 2080: ReleaseUlTrCh message rejected : Can't release non-existant Trch id %d
Line 2107: Warning: AddPowerOffsetInfo message->payload.ulTrChType out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2116: AddPowerOffset message rejected : Bad ulPowerOffsetInfo
Line 2116: AddPowerOffset message rejected : Bad ulPowerOffsetInfo
Line 2140: Warning: AddPowerOffsetInfo message->payload.ulTrChType out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2164: Warning: ReplacePowerOffsetInfo message->payload.ulTrChType out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2169: Warning: ReplacePowerOffsetInfo message->payload.numOfUlPowerOffsetInfoToRemove out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2174: Warning: ReplacePowerOffsetInfo message->payload.numOfUlPowerOffsetInfoToAdd out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2184: Warning: ReplacePowerOffsetInfo message->payload.ulPowerOffsetToRemoveTfciArray[i] out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2193: Warning: ReplacePowerOffsetInfo message->payload.ulPowerOffsetToRemoveTfciArray[i] out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2202: ReplaceUlPowerOffsetInfo message rejected : Bad ulPowerOffsetInfoToAddArray
Line 2202: ReplaceUlPowerOffsetInfo message rejected : Bad ulPowerOffsetInfoToAddArray
Line 2230: Warning: ReplacePowerOffsetInfo message->payload.ulTrChType out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2239: ReconfPowerOffsetInfo message rejected : Bad ulPowerOffsetInfoArray
Line 2239: ReconfPowerOffsetInfo message rejected : Bad ulPowerOffsetInfoArray
Line 2275: Frequency Info rejected : Bad ul-dl uarfcn separation
Line 2275: Frequency Info rejected : Bad ul-dl uarfcn separation
Line 2304: Warning: DedicatedModeUlInfo dedicatedModeUlInfo->maxUlTxPower out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2311: Warning: DedicatedModeUlInfo dedicatedModeUlInfo->numOfUlTrChs out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2325: Dedicated Mode UL Info rejected : Bad ulTrChInfoArray
Line 2325: Dedicated Mode UL Info rejected : Bad ulTrChInfoArray
Line 2334: Dedicated Mode UL Info rejected : Bad ulDpchInfo
Line 2334: Dedicated Mode UL Info rejected : Bad ulDpchInfo
Line 2359: Dedicated Mode ULDpchInfo rejected : Dont support no UlPowerControlInfo
Line 2359: Dedicated Mode ULDpchInfo rejected : Dont support no UlPowerControlInfo
Line 2366: Dedicated Mode ULDpchInfo rejected : Dont support no UlSlotFormat
Line 2366: Dedicated Mode ULDpchInfo rejected : Dont support no UlSlotFormat
Line 2375: Warning: DedicatedModeUlInfo ulDpchInfo->ulDpchPowerControlInfo.dpcchPowerOffset out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2383: Dedicated Mode ULDpchInfo rejected : Bad dpcchPowerOffset %d
Line 2383: Dedicated Mode ULDpchInfo rejected : Bad dpcchPowerOffset %d
Line 2389: Warning: DedicatedModeUlInfo ulDpchInfo->ulDpchPowerControlInfo.pcPreamble out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2394: Warning: DedicatedModeUlInfo ulDpchInfo->ulDpchPowerControlInfo.powerControlAlgorithm out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2400: Warning: DedicatedModeUlInfo ulDpchInfo->ulDpchPowerControlInfo.tpcStepSize out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2408: Warning: DedicatedModeUlInfo ulDpchInfo->numOfUlCtfc out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2416: Warning: DedicatedModeUlInfo ulDpchInfo->numOfUlCtfc out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2428: Dedicated Mode ULDpchInfo rejected : Bad ulPowerOffsetInfoArray
Line 2428: Dedicated Mode ULDpchInfo rejected : Bad ulPowerOffsetInfoArray
Line 2436: Warning: DedicatedModeUlInfo ulDpchInfo->numOfDpdchs out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2441: Warning: DedicatedModeUlInfo ulDpchInfo->scrCodeType out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2446: Warning: DedicatedModeUlInfo ulDpchInfo->scrCode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2451: Warning: DedicatedModeUlInfo ulDpchInfo->minDpdchSpreadFactor out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2458: Warning: DedicatedModeUlInfo ulDpchInfo->slotFormat out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2464: Warning: DedicatedModeUlInfo ulDpchInfo->puncturingLimit out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2489: Dedicated Mode DL Info rejected : Bad rlCommonInfo
Line 2489: Dedicated Mode DL Info rejected : Bad rlCommonInfo
Line 2497: Warning: DedicatedModeUlInfo dedicatedModeDlInfo->numOfRls out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2508: Dedicated Mode DL Info rejected : Bad rlInfoArray
Line 2508: Dedicated Mode DL Info rejected : Bad rlInfoArray
Line 2519: Warning: DedicatedModeUlInfo dedicatedModeDlInfo->numOfFdpchRls out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2531: Dedicated Mode DL Info rejected : Bad rlFdpchInfoArray
Line 2531: Dedicated Mode DL Info rejected : Bad rlFdpchInfoArray
Line 2539: Dedicated Mode DL Info rejected : Bad numOfRls or numOfFdpchRls
Line 2539: Dedicated Mode DL Info rejected : Bad numOfRls or numOfFdpchRls
Line 2548: Dedicated Mode DL Info rejected : Bad CctrchInfo
Line 2548: Dedicated Mode DL Info rejected : Bad CctrchInfo
Line 2556: Warning: DedicatedModeDlInfo dedicatedModeDlInfo->numOfDlTrChs out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2572: Dedicated Mode DL Info rejected : Bad dlTrChInfoArray
Line 2572: Dedicated Mode DL Info rejected : Bad dlTrChInfoArray
Line 2580: Warning: AddDlTrch dedicatedModeDlInfo->dlTrChInfoArray[i].blerQualityTarget out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2613: Dedicated Mode DL Info rejected : Reference RL PScrCode not in RlInfoArray
Line 2613: Dedicated Mode DL Info rejected : Reference RL PScrCode not in RlInfoArray
Line 2639: Warning: RlCommonInfo RlCommonInfo->txDiveristyMode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2648: RLCommonInfo rejected : Bad ssdtInfo
Line 2648: RLCommonInfo rejected : Bad ssdtInfo
Line 2660: Warning: RlCommonInfo RlCommonInfo->dOff out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2665: [ROLLBACK] don't care the range of DOFF!!!
Line 2665: [ROLLBACK] don't care the range of DOFF!!!
Line 2677: RL CommonInfo Rejected : No Off when not in dedicated mode
Line 2677: RL CommonInfo Rejected : No Off when not in dedicated mode
Line 2688: RL CommonInfo Rejected : Bad dlDpchCommonInfo
Line 2688: RL CommonInfo Rejected : Bad dlDpchCommonInfo
Line 2698: RL CommonInfo Rejected : Bad dlFdpchCommonInfo
Line 2698: RL CommonInfo Rejected : Bad dlFdpchCommonInfo
Line 2705: RL CommonInfo Rejected : Bad RlCommonInfo
Line 2705: RL CommonInfo Rejected : Bad RlCommonInfo
Line 2710: Warning: RlCommonInfo RlCommonInfo->numOfCompressedModeSequences out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2720: RL CommonInfo Rejected : Bad compressedModeInfoArray
Line 2720: RL CommonInfo Rejected : Bad compressedModeInfoArray
Line 2747: Warning: DlDpchCommonInfo DlDpchCommonInfo->dlDpchPowerControlMode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2754: Warning: DlDpchCommonInfo DlDpchCommonInfo->numOfRateMatchingRestrictedTrChs out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2764: DlDpchCommonInfo Rejected : Bad rateMatchingRestrictionInfoArray
Line 2764: DlDpchCommonInfo Rejected : Bad rateMatchingRestrictionInfoArray
Line 2772: Warning: DlDpchCommonInfo DlDpchCommonInfo->powerOffsetPilotDpch out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2777: Warning: DlDpchCommonInfo DlDpchCommonInfo->spreadFactor out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2782: Warning: DlDpchCommonInfo DlDpchCommonInfo->slotFormat out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2787: Warning: DlDpchCommonInfo DlDpchCommonInfo->timingIndication out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2805: Warning: DlFdpchCommonInfo DlFdpchCommonInfo->timingIndication out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2812: Warning: DlFdpchCommonInfo DlFdpchCommonInfo->dlFdpchPowerControlMode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2819: Warning: DlFdpchCommonInfo DlFdpchCommonInfo->tpcCommandErrorRate out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2838: Warning: RateMatchingRestrictionInfo RateMatchingRestrictionInfo->dlTrChType out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2843: Warning: RateMatchingRestrictionInfo RateMatchingRestrictionInfo->restrictedDlTrChId out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2864: Warning: CompressedModeInfo CompressedModeInfo->tgpsStatusFlag out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2872: CompressedModeInfo Rejected : Bad tgpsConfigParams
Line 2872: CompressedModeInfo Rejected : Bad tgpsConfigParams
Line 2895: Warning: TgpsConfigParams TgpsConfigParams->tgmp out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2908: Warning: TgpsConfigParams TgpsConfigParams->tgprc out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2914: Warning: TgpsConfigParams TgpsConfigParams->tgsn out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2919: Warning: TgpsConfigParams TgpsConfigParams->tgl1 out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2926: Warning: TgpsConfigParams TgpsConfigParams->tgl2 out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2934: Warning: TgpsConfigParams TgpsConfigParams->tgd out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2940: Warning: TgpsConfigParams TgpsConfigParams->tgpl1 out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2948: Warning: TgpsConfigParams TgpsConfigParams->tgpl2 out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2954: Warning: TgpsConfigParams TgpsConfigParams->rpp out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2959: Warning: TgpsConfigParams TgpsConfigParams->itp out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2964: Warning: TgpsConfigParams TgpsConfigParams->ulDlCompressedMode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2972: Warning: TgpsConfigParams TgpsConfigParams->dlCompressedMethod out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2981: Warning: TgpsConfigParams TgpsConfigParams->ulCompressedMethod out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2990: Warning: TgpsConfigParams TgpsConfigParams->compressedFrameType out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 2996: Warning: TgpsConfigParams TgpsConfigParams->deltaSir1 out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3001: Warning: TgpsConfigParams TgpsConfigParams->deltaSirAfter1 out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3008: Warning: TgpsConfigParams TgpsConfigParams->deltaSir2 out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3016: Warning: TgpsConfigParams TgpsConfigParams->deltaSirAfter2 out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3024: Warning: TgpsConfigParams TgpsConfigParams->nIdentifyAgort out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3032: Warning: TgpsConfigParams TgpsConfigParams->tReconfirmAbort out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3053: Warning: SsdtInfo SsdtInfo->sField out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3058: Warning: SsdtInfo SsdtInfo->codeWordSet out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3063: Warning: SsdtInfo SsdtInfo->ssdtUl out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3085: Warning: DlCcTrChInfo numDlCtfcEntries out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3094: Warning: DlCcTrChInfo CtfcEntries[i] out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3116: Warning: RlInfo RlInfo->primaryScrCode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3121: Warning: RlInfo RlInfo->primaryCpichForChannelEstimation out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3126: Warning: RlInfo RlInfo->dpchFrameOffset out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3133: RL Info Rejected : Bad dpchFrameOffset
Line 3133: RL Info Rejected : Bad dpchFrameOffset
Line 3141: Warning: RlInfo RlInfo->secondaryCpichInfo.secondaryScrCode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3146: Warning: RlInfo RlInfo->secondaryCpichInfo.chanCode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3152: Warning: RlInfo RlInfo->tpcCombinationIndex out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3159: Warning: RlInfo RlInfo->ssdtCellIdentity out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3167: Warning: RlInfo RlInfo->closedLoopTimingAdjustMode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3173: Warning: RlInfo RlInfo->numOfDlDpchPerRl out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3183: RL Info Rejected : Bad dlDpchInfoArray
Line 3183: RL Info Rejected : Bad dlDpchInfoArray
Line 3205: Warning: RlFdpchInfo RlFdpchInfo->primaryScrCode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3210: Warning: RlFdpchInfo RlFdpchInfo->primaryCpichForChannelEstimation out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3215: Warning: RlFdpchInfo RlFdpchInfo->fdpchFrameOffset out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3222: RL Info Rejected : Bad FdpchFrameOffset
Line 3222: RL Info Rejected : Bad FdpchFrameOffset
Line 3228: Warning: RlFdpchInfo RlFdpchInfo->fdpchSlotFormat out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3235: Warning: RlFdpchInfo RlFdpchInfo->secondaryCpichInfo.secondaryScrCode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3240: Warning: RlFdpchInfo RlFdpchInfo->secondaryCpichInfo.chanCode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3248: Warning: RlFdpchInfo RlFdpchInfo->secondaryScrCode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3256: Warning: RlFdpchInfo RlFdpchInfo->chanCode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3261: Warning: RlFdpchInfo RlFdpchInfo->tpcCombinationIndex out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3266: Warning: RlFdpchInfo RlFdpchInfo->useSttd out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3288: Warning: DlDpchInfo DlDpchInfo->secondarySrcCode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3296: Warning: DlDpchInfo DlDpchInfo->chanCode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3318: Warning: TrchInfo TrChInfo->trChId out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3325: Warning: TrchInfo TrChInfo->trChType out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3332: Warning: TrchInfo TrChInfo->trChType out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3339: Trch info rejected: Bad Semi static Info
Line 3339: Trch info rejected: Bad Semi static Info
Line 3344: Warning: TrchInfo TrChInfo->dynamicInfo.numOfTfTableEntries out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3352: Trch info rejected: Bad Dynamic Info
Line 3352: Trch info rejected: Bad Dynamic Info
Line 3372: Warning: Semistatic TrchInfo SemiStaticInfo->tti out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3377: Warning: Semistatic TrchInfo SemiStaticInfo->channelCoding out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3382: Warning: Semistatic TrchInfo SemiStaticInfo->rateMatchingArgument out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3387: Warning: Semistatic TrchInfo SemiStaticInfo->codingRate out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3392: Warning: Semistatic TrchInfo SemiStaticInfo->crcSize out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3415: Warning: Dynamic TrchInfo DynamicInfo->tfTableEntryArray[i].numOTblocks out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3420: Warning: Dynamic TrchInfo DynamicInfo->tfTableEntryArray[i].tBlockSize out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3441: Warning: PowerOffsetInfo PowerOffsetInfo->gainFactorType out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3446: Warning: PowerOffsetInfo PowerOffsetInfo->betaC out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3451: Warning: PowerOffsetInfo PowerOffsetInfo->betaD out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
Line 3456: Warning: PowerOffsetInfo PowerOffsetInfo->isPowerOffsetppm out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/ChMgt/Dch/Code/Src/uphy_CDedicatedModeResources.c Line %d
