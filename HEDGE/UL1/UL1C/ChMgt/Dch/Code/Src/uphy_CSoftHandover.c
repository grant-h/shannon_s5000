Line 396: Soft handover reset with replaceRlMsg set
Line 396: Soft handover reset with replaceRlMsg set
Line 400: Soft handover reset with actTimeTokenP set
Line 400: Soft handover reset with actTimeTokenP set
Line 424: Soft handover reset with fsm not in state 0
Line 424: Soft handover reset with fsm not in state 0
Line 428: Soft handover reset with timeoutIds set
Line 428: Soft handover reset with timeoutIds set
Line 433: Soft handover reset with deferredCellSynchroTokenP set
Line 433: Soft handover reset with deferredCellSynchroTokenP set
Line 476: [SHO] Soft handover requested to process new req when already busy
Line 476: [SHO] Soft handover requested to process new req when already busy
Line 489: [SHO] UE did not camp to any frequency
Line 489: [SHO] UE did not camp to any frequency
Line 500: [SHO] refRlCellInfo is NULL
Line 500: [SHO] refRlCellInfo is NULL
Line 515: [SHO] fails to find reference RL - PSC=%d
Line 515: [SHO] fails to find reference RL - PSC=%d
Line 526: [SHO] Reference RL have no phych: rlNr=%d, PSC=%d
Line 526: [SHO] Reference RL have no phych: rlNr=%d, PSC=%d
Line 545: [SHO] Reference RL Info: rlNr=%d, PSC=%d, rlStr=0x%x
Line 545: [SHO] Reference RL Info: rlNr=%d, PSC=%d, rlStr=0x%x
Line 583: [SHO] FDPCH/DPCH %d, PSC = %d, mappedRlNr = 0x%x, rlState = %d 
Line 583: [SHO] FDPCH/DPCH %d, PSC = %d, mappedRlNr = 0x%x, rlState = %d 
Line 606: [SHO] Reference RL should be removed. PSC=%d
Line 606: [SHO] Reference RL should be removed. PSC=%d
Line 613: [SHO] faile to find RL in MappingDatabase. PSC=%d
Line 613: [SHO] faile to find RL in MappingDatabase. PSC=%d
Line 646: [SHO] FDPCH/DPCH %d, PSC = %d, mappedRlNr = 0x%x, rlState = %d 
Line 646: [SHO] FDPCH/DPCH %d, PSC = %d, mappedRlNr = 0x%x, rlState = %d 
Line 670: [SHO] Reference RL should be removed. PSC=%d
Line 670: [SHO] Reference RL should be removed. PSC=%d
Line 677: [SHO] faile to find RL in MappingDatabase. PSC=%d
Line 677: [SHO] faile to find RL in MappingDatabase. PSC=%d
Line 698: [SHO] Cant determine new reference RL
Line 698: [SHO] Cant determine new reference RL
Line 712: [SHO] fails to seek PSC of new reference RL at MappingDatabase: rlNr=%d, rlStr=0x%x
Line 712: [SHO] fails to seek PSC of new reference RL at MappingDatabase: rlNr=%d, rlStr=0x%x
Line 723: [SHO] Reference RL will be changed. New rlNr=%d, PSC=%d
Line 723: [SHO] Reference RL will be changed. New rlNr=%d, PSC=%d
Line 785: [softHandover_ptr->nRlToChange] nRlToModify %d, numOfFdpchRls %d,
Line 785: [softHandover_ptr->nRlToChange] nRlToModify %d, numOfFdpchRls %d,
Line 790: [softHandover_ptr->nRlToModify] ChangeIndex %d, rlIndex %d, 
Line 790: [softHandover_ptr->nRlToModify] ChangeIndex %d, rlIndex %d, 
Line 832: FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 832: FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 865: [SHO] nRlToAdd is %d but all FSM are idle
Line 865: [SHO] nRlToAdd is %d but all FSM are idle
Line 875: [SHO] activationTimeStf with no RL to add finds hasFailed set - will be corrected
Line 875: [SHO] activationTimeStf with no RL to add finds hasFailed set - will be corrected
Line 935: CellSynchroReqMsg == NULL pointer
Line 935: CellSynchroReqMsg == NULL pointer
Line 970: [SHO] Sending Cell Synchro request failed.
Line 970: [SHO] Sending Cell Synchro request failed.
Line 1034: [SHO] TID %d should be equal or greater than BaseID
Line 1034: [SHO] TID %d should be equal or greater than BaseID
Line 1040: [SHO] activeRlIndex %d should be equal or less than available num of RL %d
Line 1040: [SHO] activeRlIndex %d should be equal or less than available num of RL %d
Line 1112: [SHO] releaseRl: rlNr=%d, PSC=%d, removeRefRl=%d
Line 1112: [SHO] releaseRl: rlNr=%d, PSC=%d, removeRefRl=%d
Line 1134: [SHO] requested to release last RL. rlNr=%d, PSC=%d, phyChStr=0x%x
Line 1134: [SHO] requested to release last RL. rlNr=%d, PSC=%d, phyChStr=0x%x
Line 1163: [SHO] RlInfoCmd failure: errCode=%d, addErrCode=%d
Line 1163: [SHO] RlInfoCmd failure: errCode=%d, addErrCode=%d
Line 1179: [SHO] Reference RL change: Old RefRL %d PSC %d. New RefRl %d PSC %d. IsNbrRlChanged %d. rlStr 0x%x
Line 1179: [SHO] Reference RL change: Old RefRL %d PSC %d. New RefRl %d PSC %d. IsNbrRlChanged %d. rlStr 0x%x
Line 1195: [SHO] RlNeighbourConfigCmd failure: errCode=%d, addErrCode=%d
Line 1195: [SHO] RlNeighbourConfigCmd failure: errCode=%d, addErrCode=%d
Line 1212: [SHO] RlReferenceConfigCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 1212: [SHO] RlReferenceConfigCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 1240: [SHO] Unable to set a new reference cell in MPDB: rlNr=%d, PSC=%d
Line 1240: [SHO] Unable to set a new reference cell in MPDB: rlNr=%d, PSC=%d
Line 1244: uphy_CSoftHandover_releaseRl: Sending Ref. Cell Indication, uarfcn=%d, primaryScrCode=%d
Line 1244: uphy_CSoftHandover_releaseRl: Sending Ref. Cell Indication, uarfcn=%d, primaryScrCode=%d
Line 1263: [SHO] RlPhychConfigCmd failure: rlNr=%d, PSC=%d, phyChNr=%d, errCode=%d, addErrCode=%d
Line 1263: [SHO] RlPhychConfigCmd failure: rlNr=%d, PSC=%d, phyChNr=%d, errCode=%d, addErrCode=%d
Line 1308: [SHO] requested to release unconnected RL: rlNr=%d, rlStr=0x%x
Line 1308: [SHO] requested to release unconnected RL: rlNr=%d, rlStr=0x%x
Line 1319: [SHO] RlReleaseCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 1319: [SHO] RlReleaseCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 1335: [SHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1335: [SHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1339: [SHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1339: [SHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1351: [SHO] Unable to modify NPhych. PSC=%d
Line 1351: [SHO] Unable to modify NPhych. PSC=%d
Line 1357: [SHO] ReleaseRl failure. Cannot seek PSC=%d at MPDB
Line 1357: [SHO] ReleaseRl failure. Cannot seek PSC=%d at MPDB
Line 1419: [SHO] Cant Send Replace Rl Cnf
Line 1419: [SHO] Cant Send Replace Rl Cnf
Line 1466: [SHO] null timeout
Line 1466: [SHO] null timeout
Line 1572: [SHO] assignRlAndFingers: Fail to obtain free RL
Line 1572: [SHO] assignRlAndFingers: Fail to obtain free RL
Line 1582: [SHO] assignRlAndFingers: Cannot seek PSC=%d at MappingDatabase
Line 1582: [SHO] assignRlAndFingers: Cannot seek PSC=%d at MappingDatabase
Line 1594: [SHO] assignRlAndFingers: Cannot obtain free RL for PSC=%d
Line 1594: [SHO] assignRlAndFingers: Cannot obtain free RL for PSC=%d
Line 1624: [SHO] failed to configure RL %d, PSC %d
Line 1624: [SHO] failed to configure RL %d, PSC %d
Line 1653: [SHO] failed to configure RL %d, PSC %d
Line 1653: [SHO] failed to configure RL %d, PSC %d
Line 1665: [SHO] failed to map RL %d to PSC %d
Line 1665: [SHO] failed to map RL %d to PSC %d
Line 1669: [SHO] mapped RL %d to PSC %d
Line 1669: [SHO] mapped RL %d to PSC %d
Line 1676: [SHO] No available finger for SHO: errCode=%d
Line 1676: [SHO] No available finger for SHO: errCode=%d
Line 1682: [SHO] RlReleaseCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 1682: [SHO] RlReleaseCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 1696: [SHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1696: [SHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1701: [SHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1701: [SHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1719: [SHO] RlModifyCmd failure: rlNr=%d, PSC=%d, fingerNr=%d, errCode=%d, addErrCode=%d
Line 1719: [SHO] RlModifyCmd failure: rlNr=%d, PSC=%d, fingerNr=%d, errCode=%d, addErrCode=%d
Line 1740: [SHO] RlStartCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 1740: [SHO] RlStartCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 1749: [SHO] RlReleaseCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 1749: [SHO] RlReleaseCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 1763: [SHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1763: [SHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1768: [SHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1768: [SHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 2007: [SHO] Attach Rl Failed due to mismatch b/w nPhych %d and numOfDlDpchPerRl %d
Line 2007: [SHO] Attach Rl Failed due to mismatch b/w nPhych %d and numOfDlDpchPerRl %d
Line 2016: [SHO] can't find currentRefRl as refCellInformation=0
Line 2016: [SHO] can't find currentRefRl as refCellInformation=0
Line 2026: [SHO] cant find currentRefRl as ScrCode not in mapping table
Line 2026: [SHO] cant find currentRefRl as ScrCode not in mapping table
Line 2075: [SHO] no fingers are attached to reference RL and no multipath info are available
Line 2075: [SHO] no fingers are attached to reference RL and no multipath info are available
Line 2089: [SHO] fingerInfoCommand failure: fingerNr=%d, errCode=%d, addErrCode=%d
Line 2089: [SHO] fingerInfoCommand failure: fingerNr=%d, errCode=%d, addErrCode=%d
Line 2103: Reference finger %d on reference cell %d is unlocked. So get the position out of the locked fingers
Line 2103: Reference finger %d on reference cell %d is unlocked. So get the position out of the locked fingers
Line 2116: [SHO] fingerInfoCommand failure: fingerNr=%d, errCode=%d, addErrCode=%d
Line 2116: [SHO] fingerInfoCommand failure: fingerNr=%d, errCode=%d, addErrCode=%d
Line 2149: [SHO] attachRL unable to find a locked finger - no multipath info available either
Line 2149: [SHO] attachRL unable to find a locked finger - no multipath info available either
Line 2156: currentRefRl=%d refPsc=%d phyChNr=%d refRlDpchFo=%d fingerNr=%d refFingerPosition=%d (isLocked=%d)
Line 2156: currentRefRl=%d refPsc=%d phyChNr=%d refRlDpchFo=%d fingerNr=%d refFingerPosition=%d (isLocked=%d)
Line 2183: [SHO] attachRL unable to find any multipath info for new cell %d %d
Line 2183: [SHO] attachRL unable to find any multipath info for new cell %d %d
Line 2213: [SHO] fails to attach new RL as no fingers are attached to new RL and no multipath info are available
Line 2213: [SHO] fails to attach new RL as no fingers are attached to new RL and no multipath info are available
Line 2229: [SHO] fingerInfoCommand failure: fingerNr=%d, errCode=%d, addErrCode=%d
Line 2229: [SHO] fingerInfoCommand failure: fingerNr=%d, errCode=%d, addErrCode=%d
Line 2255: [SHO] attachRL unable to find a locked finger - no multipath info available either
Line 2255: [SHO] attachRL unable to find a locked finger - no multipath info available either
Line 2268: [SHO] rlReleaseCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 2268: [SHO] rlReleaseCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 2282: [SHO] Unmap successful for (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2282: [SHO] Unmap successful for (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2287: [SHO] Failed to unmap (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2287: [SHO] Failed to unmap (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2315: [SHO] New Cell DPCH does not arrive in /-48 chip window of current reference cell dpch: refDpchPosition %d newDpchPosition %d dpchDifference %d newRlDpchFo %d refRlDpchFo %d (all in chips)
Line 2315: [SHO] New Cell DPCH does not arrive in /-48 chip window of current reference cell dpch: refDpchPosition %d newDpchPosition %d dpchDifference %d newRlDpchFo %d refRlDpchFo %d (all in chips)
Line 2320: Attaching new Rl in SHO - new dpch meets /-48 chip window requrements: refDpchPosition %d newDpchPosition %d dpchDifference %d newRlDpchFo %d refRlDpchFo %d (all in chips)
Line 2320: Attaching new Rl in SHO - new dpch meets /-48 chip window requrements: refDpchPosition %d newDpchPosition %d dpchDifference %d newRlDpchFo %d refRlDpchFo %d (all in chips)
Line 2340: [SHO] cannot find off for [%d %d]
Line 2340: [SHO] cannot find off for [%d %d]
Line 2346: [SHO] cannot find old off for [%d %d]
Line 2346: [SHO] cannot find old off for [%d %d]
Line 2423: AttachRl: cpich_diff %d ref_chip_count %d target_chip_count %d chs_tm_chip %d cfn %d off %d target_chip_delay %d
Line 2423: AttachRl: cpich_diff %d ref_chip_count %d target_chip_count %d chs_tm_chip %d cfn %d off %d target_chip_delay %d
Line 2434: [SHO] rlSfnConfigCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 2434: [SHO] rlSfnConfigCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 2497: [SHO] RlPhych config failed: rlNr=%d, phyChNr=%d
Line 2497: [SHO] RlPhych config failed: rlNr=%d, phyChNr=%d
Line 2518: [SHO] RlPhych release failed: rlNr=%d, phyChNr=%d
Line 2518: [SHO] RlPhych release failed: rlNr=%d, phyChNr=%d
Line 2527: [SHO] RlReleaseCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 2527: [SHO] RlReleaseCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 2539: [SHO] Unmap successful for (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2539: [SHO] Unmap successful for (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2544: [SHO] Failed to unmap (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2544: [SHO] Failed to unmap (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2562: [SHO] Unable to modify NPhych
Line 2562: [SHO] Unable to modify NPhych
Line 2577: [SHO] phyChId (%d) Out of Bounds
Line 2577: [SHO] phyChId (%d) Out of Bounds
Line 2594: [SHO] RlPhych config failed: rlNr=%d, phyChNr=%d
Line 2594: [SHO] RlPhych config failed: rlNr=%d, phyChNr=%d
Line 2615: [SHO] RlPhych release failed: rlNr=%d, phyChNr=%d
Line 2615: [SHO] RlPhych release failed: rlNr=%d, phyChNr=%d
Line 2625: [SHO] RlReleaseCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 2625: [SHO] RlReleaseCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 2637: [SHO] Unmap successful for (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2637: [SHO] Unmap successful for (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2642: [SHO] Failed to unmap (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2642: [SHO] Failed to unmap (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2661: [SHO] Unable to modify NPhych
Line 2661: [SHO] Unable to modify NPhych
Line 2696: SoftHandoverFSMStates_Idle_processEventFn : event=0
Line 2696: SoftHandoverFSMStates_Idle_processEventFn : event=0
Line 2726: [SHO] Timeout in Idle state
Line 2726: [SHO] Timeout in Idle state
Line 2731: [SHO] CellSynchroInd in Idle state
Line 2731: [SHO] CellSynchroInd in Idle state
Line 2736: [SHO] ActivationTime in Idle state
Line 2736: [SHO] ActivationTime in Idle state
Line 2746: Unknown Event 
Line 2746: Unknown Event 
Line 2764: SoftHandoverFSMStates_PreSynchronising_processEventFn : event=0
Line 2764: SoftHandoverFSMStates_PreSynchronising_processEventFn : event=0
Line 2772: [SHO] AddRl in Presynchronising state
Line 2772: [SHO] AddRl in Presynchronising state
Line 2812: Unknown Event
Line 2812: Unknown Event
Line 2830: SoftHandoverFSMStates_PostSynchronising_processEventFn : event=0
Line 2830: SoftHandoverFSMStates_PostSynchronising_processEventFn : event=0
Line 2838: [SHO] AddRl in Postsynchronising state
Line 2838: [SHO] AddRl in Postsynchronising state
Line 2859: [SHO] ActivationTime in Postsynchronising state
Line 2859: [SHO] ActivationTime in Postsynchronising state
Line 2869: Unknown Event
Line 2869: Unknown Event
Line 2887: SoftHandoverFSMStates_AwaitingActivationTimeRlAssigned_processEventFn : event=0
Line 2887: SoftHandoverFSMStates_AwaitingActivationTimeRlAssigned_processEventFn : event=0
Line 2895: [SHO] AddRl in AwaitingActivationTimeRlAssigned state
Line 2895: [SHO] AddRl in AwaitingActivationTimeRlAssigned state
Line 2901: [SHO] Timeout in AwaitingActivationTimeRlAssigned state
Line 2901: [SHO] Timeout in AwaitingActivationTimeRlAssigned state
Line 2906: [SHO] CellSynchroInd in AwaitingActivationTimeRlAssigned state
Line 2906: [SHO] CellSynchroInd in AwaitingActivationTimeRlAssigned state
Line 2927: Unknown Event
Line 2927: Unknown Event
Line 2945: SoftHandoverFSMStates_AwaitingActivationTimeRlNotAssigned_processEventFn : event=0
Line 2945: SoftHandoverFSMStates_AwaitingActivationTimeRlNotAssigned_processEventFn : event=0
Line 2954: [SHO] AddRl in AwaitingActivationTimeRlNotAssigned state
Line 2954: [SHO] AddRl in AwaitingActivationTimeRlNotAssigned state
Line 2960: [SHO] Timeout in AwaitingActivationTimeRlNotAssigned state
Line 2960: [SHO] Timeout in AwaitingActivationTimeRlNotAssigned state
Line 2978: Unknown Event
Line 2978: Unknown Event
Line 2997: SoftHandoverFSMStates_AwaitingCellSynchroInd_processEventFn : event=0
Line 2997: SoftHandoverFSMStates_AwaitingCellSynchroInd_processEventFn : event=0
Line 3006: [SHO] AddRl in AwaitingCellSynchroInd state
Line 3006: [SHO] AddRl in AwaitingCellSynchroInd state
Line 3027: [SHO] ActivationTime in AwaitingCellSynchroInd state
Line 3027: [SHO] ActivationTime in AwaitingCellSynchroInd state
Line 3037: Unknown Event
Line 3037: Unknown Event
Line 3056: SoftHandoverFSMStates_AwaitingActivationTime_processEventFn : event=0
Line 3056: SoftHandoverFSMStates_AwaitingActivationTime_processEventFn : event=0
Line 3065: [SHO] AddRl in AwaitingActivationTime state
Line 3065: [SHO] AddRl in AwaitingActivationTime state
Line 3071: [SHO] Timeout in AwaitingActivationTime state
Line 3071: [SHO] Timeout in AwaitingActivationTime state
Line 3076: [SHO] CellSynchroInd in AwaitingActivationTime state
Line 3076: [SHO] CellSynchroInd in AwaitingActivationTime state
Line 3097: Unknown Event
Line 3097: Unknown Event
Line 3109: [SHO FSM] - Idle_Entry state: RSN=%d, CFN=%d, rlIndex=%d
Line 3109: [SHO FSM] - Idle_Entry state: RSN=%d, CFN=%d, rlIndex=%d
Line 3121: [SHO FSM] - PreSynchronising_Entry state: RSN=%d, CFN=%d, rlIndex=%d
Line 3121: [SHO FSM] - PreSynchronising_Entry state: RSN=%d, CFN=%d, rlIndex=%d
Line 3133: [SHO FSM] - AwaitingActivationTimeRlNotAssigned_Entry state: RSN=%d, CFN=%d, rlIndex=%d
Line 3133: [SHO FSM] - AwaitingActivationTimeRlNotAssigned_Entry state: RSN=%d, CFN=%d, rlIndex=%d
Line 3144: [SHO FSM] - AwaitingActivationTime_Entry state: RSN=%d, CFN=%d, rlIndex=%d
Line 3144: [SHO FSM] - AwaitingActivationTime_Entry state: RSN=%d, CFN=%d, rlIndex=%d
Line 3223: [SHO] refRlCellInfo == NULL
Line 3223: [SHO] refRlCellInfo == NULL
Line 3256: CellSynchroReqMsg == NULL pointer
Line 3256: CellSynchroReqMsg == NULL pointer
Line 3290: [SHO] Sending Cell Synchro request failed.
Line 3290: [SHO] Sending Cell Synchro request failed.
Line 3369: [SHO] uphy_CSoftHandover_SeekCellMPdb : psc=%d, uarfcn=%d, found=%d
Line 3369: [SHO] uphy_CSoftHandover_SeekCellMPdb : psc=%d, uarfcn=%d, found=%d
