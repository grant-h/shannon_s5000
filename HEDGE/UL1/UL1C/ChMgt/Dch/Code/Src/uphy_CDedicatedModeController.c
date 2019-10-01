Line 382: DSDS: RelsasePostponeUphyFsmStf - dedicatedModeController is NULL
Line 382: DSDS: RelsasePostponeUphyFsmStf - dedicatedModeController is NULL
Line 404: DSDS: RelsasePostponeUphyFsmStf - UHAL_DSDS_PAUSE reset got postponed due to CM sequence. Reset Now
Line 404: DSDS: RelsasePostponeUphyFsmStf - UHAL_DSDS_PAUSE reset got postponed due to CM sequence. Reset Now
Line 427: [Compressed Mode] postponeUphyFsmStf runs at Rsn %d releaseforInterRatHandover %d
Line 427: [Compressed Mode] postponeUphyFsmStf runs at Rsn %d releaseforInterRatHandover %d
Line 458: DSDS:uphy_CDedicatedModeController_TgpsReleased - dedicatedModeController is NULL
Line 458: DSDS:uphy_CDedicatedModeController_TgpsReleased - dedicatedModeController is NULL
Line 491: Cancel UphyRelPostPoneToken
Line 491: Cancel UphyRelPostPoneToken
Line 516: **uphy_CDedicatedModeController_TgpsReleased
Line 516: **uphy_CDedicatedModeController_TgpsReleased
Line 538: SendPauseStf:releaseTriggered false,pause was already sent
Line 538: SendPauseStf:releaseTriggered false,pause was already sent
Line 547: Message NULL
Line 547: Message NULL
Line 560: Message sending failed
Line 560: Message sending failed
Line 565: Pause Req after TGPS Release is3gHwRelReqd %d
Line 565: Pause Req after TGPS Release is3gHwRelReqd %d
Line 592: Message NULL
Line 592: Message NULL
Line 605: Message sending failed
Line 605: Message sending failed
Line 610: Pause Req after IRAT measurement is3gHwRelReqd %d
Line 610: Pause Req after IRAT measurement is3gHwRelReqd %d
Line 643: Message sending failed
Line 643: Message sending failed
Line 648: IRAT Measurement complete Trigger DCH release  
Line 648: IRAT Measurement complete Trigger DCH release  
Line 673: **TgpsReleased_DuringPause
Line 673: **TgpsReleased_DuringPause
Line 677: TgpsReleased_DuringPause pause enable false
Line 677: TgpsReleased_DuringPause pause enable false
Line 706: **uphy_CDedicatedModeController_FdpchReleased
Line 706: **uphy_CDedicatedModeController_FdpchReleased
Line 962: Instance created for stackId %d
Line 962: Instance created for stackId %d
Line 1020: Clear HHOMsg pointer %x
Line 1020: Clear HHOMsg pointer %x
Line 1066: Process pending RlModify msg with a negative CNF
Line 1066: Process pending RlModify msg with a negative CNF
Line 1070: Process pending RlModify msg with a positive CNF
Line 1070: Process pending RlModify msg with a positive CNF
Line 1080: Process pending RlModify msg with a negative CNF
Line 1080: Process pending RlModify msg with a negative CNF
Line 1108: DedicatedModeController timesout DCH release during IRAT
Line 1108: DedicatedModeController timesout DCH release during IRAT
Line 1249: [HHO] uphy_CDedicatedModeController_process: HHO = %d
Line 1249: [HHO] uphy_CDedicatedModeController_process: HHO = %d
Line 1251: Received l2uCandiCellinfo.numOfCells %d
Line 1251: Received l2uCandiCellinfo.numOfCells %d
Line 1268: Update MPDB for [%d %d] frameOffset %d
Line 1268: Update MPDB for [%d %d] frameOffset %d
Line 1272: failed to allocate multipathInfo for [%d %d]
Line 1272: failed to allocate multipathInfo for [%d %d]
Line 1288: No uplinkDpchPowerControlInfo
Line 1288: No uplinkDpchPowerControlInfo
Line 1297: Processing hho request with activationTimeTokenPtr set
Line 1297: Processing hho request with activationTimeTokenPtr set
Line 1304: Processing hho request with isHHOTakingPlace set
Line 1304: Processing hho request with isHHOTakingPlace set
Line 1309: Processing hho request with hhoMsg set
Line 1309: Processing hho request with hhoMsg set
Line 1333: currentRefRl - refCellInformation=0
Line 1333: currentRefRl - refCellInformation=0
Line 1345: Problems processing HHO request as cant locate cpich of current ref RL, replacing it to the old one (%d)
Line 1345: Problems processing HHO request as cant locate cpich of current ref RL, replacing it to the old one (%d)
Line 1349: Problems processing HHO request as cant locate cpich of current ref RL
Line 1349: Problems processing HHO request as cant locate cpich of current ref RL
Line 1372: Cfn %d Dedicated Mode Controller receives InterFreqTimingReinit HHO request
Line 1372: Cfn %d Dedicated Mode Controller receives InterFreqTimingReinit HHO request
Line 1379: Cfn %d Dedicated Mode Controller receives InterFreqTimingMaintain HHO request
Line 1379: Cfn %d Dedicated Mode Controller receives InterFreqTimingMaintain HHO request
Line 1386: Cfn %d Dedicated Mode Controller receives InterFreqTimingMaintainNoSync HHO request
Line 1386: Cfn %d Dedicated Mode Controller receives InterFreqTimingMaintainNoSync HHO request
Line 1394: Cfn %d Dedicated Mode Controller receives IntraFreqTimingReinit HHO request
Line 1394: Cfn %d Dedicated Mode Controller receives IntraFreqTimingReinit HHO request
Line 1401: Cfn %d Dedicated Mode Controller receives IntraFreqTimingMaintain HHO request
Line 1401: Cfn %d Dedicated Mode Controller receives IntraFreqTimingMaintain HHO request
Line 1408: Cfn %d Dedicated Mode Controller receives IntraFreqTimingMaintainNoSync HHO request
Line 1408: Cfn %d Dedicated Mode Controller receives IntraFreqTimingMaintainNoSync HHO request
Line 1443: Cancel compModeScheduleStopToken while processing DCH HHO
Line 1443: Cancel compModeScheduleStopToken while processing DCH HHO
Line 1458: Schedule Comp Mode Stop Token for processing DCH HHO compModeGapStopMarginSlots %d compModeScheduleStopRSN %d
Line 1458: Schedule Comp Mode Stop Token for processing DCH HHO compModeGapStopMarginSlots %d compModeScheduleStopRSN %d
Line 1468: Stop scheduling compressed mode immediately and adjust activationRSN to %d while processing DCH HHO
Line 1468: Stop scheduling compressed mode immediately and adjust activationRSN to %d while processing DCH HHO
Line 1494: Boundary Rsn %d Current Rsn %d Boundary Cfn %d ActivationTime %d submitted to framework to process hho msg at Rsn %d
Line 1494: Boundary Rsn %d Current Rsn %d Boundary Cfn %d ActivationTime %d submitted to framework to process hho msg at Rsn %d
Line 1521: After cellSfnServer release, AdvanceCellSynchroRequests will be submitted
Line 1521: After cellSfnServer release, AdvanceCellSynchroRequests will be submitted
Line 1576: Before HHO:Cell: SFN %d SLOT %d CHIP %d Channel: CFN %d, SLOT %d, CHIP %d: PalTime: beforeHHOTime %d
Line 1576: Before HHO:Cell: SFN %d SLOT %d CHIP %d Channel: CFN %d, SLOT %d, CHIP %d: PalTime: beforeHHOTime %d
Line 1589: Pending DCH release till IRAT measurements completes
Line 1589: Pending DCH release till IRAT measurements completes
Line 1620: Delay resetting of UHAL_DSDS_PAUSE as CM sequence is running
Line 1620: Delay resetting of UHAL_DSDS_PAUSE as CM sequence is running
Line 1631: S0 Freeing up INNERLPENUpdateToken at DCH release
Line 1631: S0 Freeing up INNERLPENUpdateToken at DCH release
Line 1637: Freeing AllowSIRUpdateToken at DCH release
Line 1637: Freeing AllowSIRUpdateToken at DCH release
Line 1664: Pending DCH release till IRAT measurements completes
Line 1664: Pending DCH release till IRAT measurements completes
Line 1738: Soft Handover failed to process ReplaceRL Msg
Line 1738: Soft Handover failed to process ReplaceRL Msg
Line 1743: Dedicated Mode Controller rejected ReplaceRl Msg as already processing one
Line 1743: Dedicated Mode Controller rejected ReplaceRl Msg as already processing one
Line 1820: RlModify Msg pending due to RL REPLACE
Line 1820: RlModify Msg pending due to RL REPLACE
Line 2059: Soft handover rejected Cell Synchro Ind
Line 2059: Soft handover rejected Cell Synchro Ind
Line 2064: Unknown subid for Cell Synchro Ind
Line 2064: Unknown subid for Cell Synchro Ind
Line 2066: Cell Synchro Rejected
Line 2066: Cell Synchro Rejected
Line 2078: Unknown subid for Cell Sfn Ind
Line 2078: Unknown subid for Cell Sfn Ind
Line 2080: Cell Sfn Rejected
Line 2080: Cell Sfn Rejected
Line 2102: Invalid MsgId=%d
Line 2102: Invalid MsgId=%d
Line 2118: DedicatedModeController receives tgpsCfgCnf with destSubid!=0
Line 2118: DedicatedModeController receives tgpsCfgCnf with destSubid!=0
Line 2140: RL[freq(%d), scr(%d) try to add on HSUPA RL
Line 2140: RL[freq(%d), scr(%d) try to add on HSUPA RL
Line 2162: uphy_CUlDchProcessor_isUlEstablished == TRUE
Line 2162: uphy_CUlDchProcessor_isUlEstablished == TRUE
Line 2167: uphy_CUlDchProcessor_isUlEstablished == FALSE
Line 2167: uphy_CUlDchProcessor_isUlEstablished == FALSE
Line 2185: DSDS:DCH controller receives Rf Use Response from DSLRC Message interface
Line 2185: DSDS:DCH controller receives Rf Use Response from DSLRC Message interface
Line 2191: DSDS:uphy_CDedicatedModeController_process: RF pause received from DSLRC interface is3gHwRelReqd %d
Line 2191: DSDS:uphy_CDedicatedModeController_process: RF pause received from DSLRC interface is3gHwRelReqd %d
Line 2206: DSDS: uphy_CDedicatedModeController_process: maxTGPSLengthBackup %d isCmSeqRunning %d 
Line 2206: DSDS: uphy_CDedicatedModeController_process: maxTGPSLengthBackup %d isCmSeqRunning %d 
Line 2210: IRAT ongoing,process pause after IRAT meas
Line 2210: IRAT ongoing,process pause after IRAT meas
Line 2221: TGPS running return
Line 2221: TGPS running return
Line 2230: DSDS: uphy_CDedicatedModeController_process: Reset DCH configuration to init
Line 2230: DSDS: uphy_CDedicatedModeController_process: Reset DCH configuration to init
Line 2306: uphy_CDedicatedModeController_process EDedicatedModeControllerMsgId_RfUsePauseReq, DedModePauseCurTime: %d, Pause2Pause: %d ms, ActualResumeDuration: %d, PauseDutyCycle :%d 
Line 2306: uphy_CDedicatedModeController_process EDedicatedModeControllerMsgId_RfUsePauseReq, DedModePauseCurTime: %d, Pause2Pause: %d ms, ActualResumeDuration: %d, PauseDutyCycle :%d 
Line 2312: [TX-OFF]Pause - uphy_CDedicatedModeController_TurnOffTxSTF isDsConfig %d
Line 2312: [TX-OFF]Pause - uphy_CDedicatedModeController_TurnOffTxSTF isDsConfig %d
Line 2316: Freeing up INNERLPENUpdateToken in pause
Line 2316: Freeing up INNERLPENUpdateToken in pause
Line 2327: Freeing up AllowSIRUpdateToken in pause
Line 2327: Freeing up AllowSIRUpdateToken in pause
Line 2368: DSDS:uphy_CDedicatedModeController_process: Pause IPC issued
Line 2368: DSDS:uphy_CDedicatedModeController_process: Pause IPC issued
Line 2375: [IPC:IPC_CONSUMER_ACTION_ID_SET_DSP_OPERATION_MODE] execution=%d
Line 2383: DSDS:uphy_CDedicatedModeController_process: TIMEOUT
Line 2383: DSDS:uphy_CDedicatedModeController_process: TIMEOUT
Line 2388: DSDS:uphy_CDedicatedModeController_process: Pause IPC handling completed
Line 2388: DSDS:uphy_CDedicatedModeController_process: Pause IPC handling completed
Line 2398: S%  DSDS:uphy_CDedicatedModeController_process: Data mover pause
Line 2402: DSDS:uphy_CDedicatedModeController_process: Aready DSP was in pause state.
Line 2402: DSDS:uphy_CDedicatedModeController_process: Aready DSP was in pause state.
Line 2407: S0 Send Release IPC to DSP during pause
Line 2407: S0 Send Release IPC to DSP during pause
Line 2427: 3G3G DSDS: uphy_CDedicatedModeController_process:Pause received
Line 2427: 3G3G DSDS: uphy_CDedicatedModeController_process:Pause received
Line 2449: DSDS:uphy_CDedicatedModeController_process: RF not in use
Line 2449: DSDS:uphy_CDedicatedModeController_process: RF not in use
Line 2471: DSDS:uphy_CDedicatedModeController_process: RF resume received from DSLRC interface
Line 2471: DSDS:uphy_CDedicatedModeController_process: RF resume received from DSLRC interface
Line 2475: DSDS: uphy_CDedicatedModeController_process: Restart DCH configuration
Line 2475: DSDS: uphy_CDedicatedModeController_process: Restart DCH configuration
Line 2485: 3G3G DSDS: uphy_CDedicatedModeController_process: Resume Received
Line 2485: 3G3G DSDS: uphy_CDedicatedModeController_process: Resume Received
Line 2490: DSDS: uphy_CDedicatedModeController_process: Enable DCH decoding
Line 2490: DSDS: uphy_CDedicatedModeController_process: Enable DCH decoding
Line 2504: 3G3G DSDS: uphy_CDedicatedModeController_process: Resume Received
Line 2504: 3G3G DSDS: uphy_CDedicatedModeController_process: Resume Received
Line 2519: DSDS:EDedicatedModeControllerMsgId_RfUseResumeReq Rf Pause not enabled, probably released by URRC
Line 2519: DSDS:EDedicatedModeControllerMsgId_RfUseResumeReq Rf Pause not enabled, probably released by URRC
Line 2527: Invalid MsgId=%d
Line 2527: Invalid MsgId=%d
Line 2628: CellSfnReqMsg == NULL pointer
Line 2628: CellSfnReqMsg == NULL pointer
Line 2651: Cant Request SFN
Line 2651: Cant Request SFN
Line 2687: CellSynchroReqMsg == NULL pointer
Line 2687: CellSynchroReqMsg == NULL pointer
Line 2720: Sending Cell Synchro request failed.
Line 2720: Sending Cell Synchro request failed.
Line 2757: CellSynchroIndMsg == NULL pointer
Line 2757: CellSynchroIndMsg == NULL pointer
Line 2776: Dedicated Mode RequestCellTiming exits with no outstanding requests - generating artificial trigger
Line 2776: Dedicated Mode RequestCellTiming exits with no outstanding requests - generating artificial trigger
Line 2780: requestCellTiming: outstandingRlToSynchronise=%d isSentReqForGetSFN=%d isHHOTakingPlace=%d hhotype=%d
Line 2780: requestCellTiming: outstandingRlToSynchronise=%d isSentReqForGetSFN=%d isHHOTakingPlace=%d hhotype=%d
Line 2804: CellSynchroIndMsg == NULL pointer
Line 2804: CellSynchroIndMsg == NULL pointer
Line 2923: [Rollback Fix] Processing failed cellSyncInd as passed (rollback:%d, TransId:%d(PSC%d), msgid:%d)
Line 2923: [Rollback Fix] Processing failed cellSyncInd as passed (rollback:%d, TransId:%d(PSC%d), msgid:%d)
Line 2951: Problems processing HHO request as cant locate cpich of new ref RL
Line 2951: Problems processing HHO request as cant locate cpich of new ref RL
Line 2968: DedicatedModeController receives duplicate CellSfnInd Tid %d
Line 2968: DedicatedModeController receives duplicate CellSfnInd Tid %d
Line 2975: Dedicated Mode isCellTimingCompleted processes artificial trigger
Line 2975: Dedicated Mode isCellTimingCompleted processes artificial trigger
Line 2992: Problems processing HHO request as cant locate cpich of new ref RL
Line 2992: Problems processing HHO request as cant locate cpich of new ref RL
Line 3008: DedicatedModeController receives duplicate Cell Synchro Ind Tid %d
Line 3008: DedicatedModeController receives duplicate Cell Synchro Ind Tid %d
Line 3015: DedicatedModeController receives unknown msg id %d in isCellTimingCompleted
Line 3015: DedicatedModeController receives unknown msg id %d in isCellTimingCompleted
Line 3028: DedicatedModeController: outstandingRlToSynchronise = %d
Line 3028: DedicatedModeController: outstandingRlToSynchronise = %d
Line 3162: UhalConfig in DsSuspend State: Returning Token
Line 3162: UhalConfig in DsSuspend State: Returning Token
Line 3187: engagedRlPhychLinksArray == NULL pointer
Line 3187: engagedRlPhychLinksArray == NULL pointer
Line 3195: S0  Send Init IPC during resume
Line 3195: S0  Send Init IPC during resume
Line 3221: Dedicated Mode Config Msg omits DlFdpchPowerControlMode - Asn_singleTPC assumed
Line 3221: Dedicated Mode Config Msg omits DlFdpchPowerControlMode - Asn_singleTPC assumed
Line 3234: Dedicated Mode Config Msg omits DlPowerControlMode - Asn_singleTPC assumed
Line 3234: Dedicated Mode Config Msg omits DlPowerControlMode - Asn_singleTPC assumed
Line 3254: Initial Target SIR is set %d
Line 3254: Initial Target SIR is set %d
Line 3261: DedicatedCommonConfig - uhal_Cmd_exec
Line 3261: DedicatedCommonConfig - uhal_Cmd_exec
Line 3274: DpchSyncModify - uhal_Cmd_exec
Line 3274: DpchSyncModify - uhal_Cmd_exec
Line 3344: refRlIndex %d should be less than nRl %d
Line 3344: refRlIndex %d should be less than nRl %d
Line 3378: No reference Rl in place
Line 3378: No reference Rl in place
Line 3385: Insufficient Rls
Line 3385: Insufficient Rls
Line 3411: Modifying Exisitng Fdpch RL has failed
Line 3411: Modifying Exisitng Fdpch RL has failed
Line 3418: RlRelease - uhal_Cmd_exec
Line 3418: RlRelease - uhal_Cmd_exec
Line 3430: Modifying Exisitng Dpch RL has failed
Line 3430: Modifying Exisitng Dpch RL has failed
Line 3437: RlRelease - uhal_Cmd_exec
Line 3437: RlRelease - uhal_Cmd_exec
Line 3451: Dedicated mode:configureRL
Line 3451: Dedicated mode:configureRL
Line 3468: Configure RL Fdpch failed
Line 3468: Configure RL Fdpch failed
Line 3481: Failed to map RL %d to PSC %d
Line 3481: Failed to map RL %d to PSC %d
Line 3489: Mapped RL %d to PSC %d
Line 3489: Mapped RL %d to PSC %d
Line 3501: EHalDlRlStartCmd - uhal_Cmd_exec
Line 3501: EHalDlRlStartCmd - uhal_Cmd_exec
Line 3530: Configure RL Dpch failed
Line 3530: Configure RL Dpch failed
Line 3543: Failed to map RL %d to PSC %d
Line 3543: Failed to map RL %d to PSC %d
Line 3550: Mapped RL %d to PSC %d
Line 3550: Mapped RL %d to PSC %d
Line 3561: EHalDlRlStartCmd - uhal_Cmd_exec
Line 3561: EHalDlRlStartCmd - uhal_Cmd_exec
Line 3620: Insufficient Phychs
Line 3620: Insufficient Phychs
Line 3637: Phych Config Failed
Line 3637: Phych Config Failed
Line 3655: Insufficient Phychs
Line 3655: Insufficient Phychs
Line 3665: Unexpected numOfDlDpchPerRl %d
Line 3665: Unexpected numOfDlDpchPerRl %d
Line 3679: Phych Config Failed
Line 3679: Phych Config Failed
Line 3700: No free RL for a dummy rollback RL
Line 3700: No free RL for a dummy rollback RL
Line 3747: rlPhyCh config failed
Line 3747: rlPhyCh config failed
Line 3795: rlPhyCh config failed
Line 3795: rlPhyCh config failed
Line 3817: Not enough free Trch-s
Line 3817: Not enough free Trch-s
Line 3853: trCh config failed
Line 3853: trCh config failed
Line 3875: Not enough free Cctrch-s
Line 3875: Not enough free Cctrch-s
Line 3903: DlCcTrCh config failed
Line 3903: DlCcTrCh config failed
Line 3938: UlUarfcn config failed
Line 3938: UlUarfcn config failed
Line 3951: UlPhych config failed
Line 3951: UlPhych config failed
Line 3990: Not enough free UlTrChs
Line 3990: Not enough free UlTrChs
Line 4002: UlTrCh config failed
Line 4002: UlTrCh config failed
Line 4079: refRlIndex %d should be less than nRl %d
Line 4079: refRlIndex %d should be less than nRl %d
Line 4101: Dedicated Mode Config Msg with no Ul PowerControlInfo
Line 4101: Dedicated Mode Config Msg with no Ul PowerControlInfo
Line 4133: Cant map Dpch Id
Line 4133: Cant map Dpch Id
Line 4145: [IRAT U2G] No GSM Mid server to trigger
Line 4145: [IRAT U2G] No GSM Mid server to trigger
Line 4182: Unknown state %d
Line 4182: Unknown state %d
Line 4188: Dedicated Mode UhalCfg Failed
Line 4188: Dedicated Mode UhalCfg Failed
Line 4318: Release UlTrCh - uhal_Cmd_exec
Line 4318: Release UlTrCh - uhal_Cmd_exec
Line 4359: DpchSyncModify - uhal_Cmd_exec
Line 4359: DpchSyncModify - uhal_Cmd_exec
Line 4366: DSDS:DCH processRfUseResume: syncPhase %d isRfEnabled %d
Line 4366: DSDS:DCH processRfUseResume: syncPhase %d isRfEnabled %d
Line 4386: DSDS:DCH processRfUseResume: Enable SYNC reporting for FDPCH
Line 4386: DSDS:DCH processRfUseResume: Enable SYNC reporting for FDPCH
Line 4399: Freeing up INNERLPENUpdateToken before issuing a new one
Line 4399: Freeing up INNERLPENUpdateToken before issuing a new one
Line 4417: DSDS:DCH processRfUseResume: Data mover resume
Line 4417: DSDS:DCH processRfUseResume: Data mover resume
Line 4445: [IPC:IPC_CONSUMER_ACTION_ID_SET_DSP_OPERATION_MODE] execution=%d
Line 4542: Freeing up AllowSIRUpdateToken before issuing a new one
Line 4542: Freeing up AllowSIRUpdateToken before issuing a new one
Line 4560: WARNING: Too Big a pause for Agilent to handle. ActualPauseDuration: %d 
Line 4560: WARNING: Too Big a pause for Agilent to handle. ActualPauseDuration: %d 
Line 4566: uphy_CDedicatedModeController_process EDedicatedModeControllerMsgId_RfUseResumeReq ActualPauseDuration : %dms
Line 4566: uphy_CDedicatedModeController_process EDedicatedModeControllerMsgId_RfUseResumeReq ActualPauseDuration : %dms
Line 4610: Corrupt Ul TrChMappingTable
Line 4610: Corrupt Ul TrChMappingTable
Line 4619: Release UlTrCh - uhal_Cmd_exec
Line 4619: Release UlTrCh - uhal_Cmd_exec
Line 4632: nUlTrChs=%d Array Index Out of bound
Line 4632: nUlTrChs=%d Array Index Out of bound
Line 4694: Cancel UphyRelPostPoneToken
Line 4694: Cancel UphyRelPostPoneToken
Line 4701: Cancel compModeScheduleStopToken while releasing DCH
Line 4701: Cancel compModeScheduleStopToken while releasing DCH
Line 4721: [RX DIV] RF ANT #2 Turn OFF forcely
Line 4721: [RX DIV] RF ANT #2 Turn OFF forcely
Line 4733: commonCfgCmd exec failure: ErrCode %d, AddErrCode %d
Line 4733: commonCfgCmd exec failure: ErrCode %d, AddErrCode %d
Line 4746: [RX DIV] Adaptive Control
Line 4746: [RX DIV] Adaptive Control
Line 4865: Set CFN: palSwCfn=%d, palSwSlot=%d, palSwChip=%d, timeDiff =%d us
Line 4865: Set CFN: palSwCfn=%d, palSwSlot=%d, palSwChip=%d, timeDiff =%d us
Line 4900: Set CFN STF: rlNr=%d, hwSfn=%d, palSwCfn=%d, DOFF=%d, hwChipTiming=%d, DFO=%d
Line 4900: Set CFN STF: rlNr=%d, hwSfn=%d, palSwCfn=%d, DOFF=%d, hwChipTiming=%d, DFO=%d
Line 4905: Rl Set Sfn - uhal cmd exec
Line 4905: Rl Set Sfn - uhal cmd exec
Line 4928: UE did not camp to any frequency.
Line 4928: UE did not camp to any frequency.
Line 4955: FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 4955: FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 4978: afcGainUpdatingToken = NULL
Line 4978: afcGainUpdatingToken = NULL
Line 4991: [AFC] Cancel afcGainUpdatingToken
Line 4991: [AFC] Cancel afcGainUpdatingToken
Line 5083: currentRefRl - refCellInformation=0
Line 5083: currentRefRl - refCellInformation=0
Line 5090: currentRl==UPHY_MAPPING_DATABASE_VALUE_NOT_FOUND
Line 5090: currentRl==UPHY_MAPPING_DATABASE_VALUE_NOT_FOUND
Line 5117: [CPC]uphy_CDedicatedModeController_enableDecoding-Enabling Delay started at CFN: %d for  HHO 
Line 5117: [CPC]uphy_CDedicatedModeController_enableDecoding-Enabling Delay started at CFN: %d for  HHO 
Line 5135: Set CFN: rlNr=%d, hwSfn=%d, fwkSfn=%d, DOFF=%d, hwChipTiming=%d, DFO=%d
Line 5135: Set CFN: rlNr=%d, hwSfn=%d, fwkSfn=%d, DOFF=%d, hwChipTiming=%d, DFO=%d
Line 5140: Rl Set Sfn - uhal cmd exec
Line 5140: Rl Set Sfn - uhal cmd exec
Line 5158: Set CFN STF: rlNr=%d, hwSfn=%d, palSwCfn=%d, DOFF=%d, hwChipTiming=%d, DFO=%d
Line 5158: Set CFN STF: rlNr=%d, hwSfn=%d, palSwCfn=%d, DOFF=%d, hwChipTiming=%d, DFO=%d
Line 5180: Rl Set Sfn - uhal cmd exec
Line 5180: Rl Set Sfn - uhal cmd exec
Line 5229: uhal command exec failed
Line 5229: uhal command exec failed
Line 5242: uphy_CDedicatedModeController_sendDpchConfiDoneIndMessage To E-DCH Controller
Line 5242: uphy_CDedicatedModeController_sendDpchConfiDoneIndMessage To E-DCH Controller
Line 5287: Freeing up SetFwkCfnAndRlSfnToken
Line 5287: Freeing up SetFwkCfnAndRlSfnToken
Line 5303: Framework Cfn %d slot %d Dedicated Mode Controller enables cctrch %d
Line 5303: Framework Cfn %d slot %d Dedicated Mode Controller enables cctrch %d
Line 5333: FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 5333: FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 5390: Set initial DPCCH Power - uhal_Cmd_exec
Line 5390: Set initial DPCCH Power - uhal_Cmd_exec
Line 5406: EHalEDpchConfigCmd fail
Line 5406: EHalEDpchConfigCmd fail
Line 5418: edpchStartCommand exec failed: Err Code %d AddErrCode %d
Line 5418: edpchStartCommand exec failed: Err Code %d AddErrCode %d
Line 5439: No pending Advance cell synchro
Line 5439: No pending Advance cell synchro
Line 5445: Dedicated mode controller ReSubmit AdvanceCellSynchroRequests: isHHOProcessing %d
Line 5445: Dedicated mode controller ReSubmit AdvanceCellSynchroRequests: isHHOProcessing %d
Line 5487: Cant Request CellSfnServer Release
Line 5487: Cant Request CellSfnServer Release
Line 5492: Dedicated mode controller requests CellSfnServer release
Line 5492: Dedicated mode controller requests CellSfnServer release
Line 5497: UphyCellSfnServerReleaseAllMsg_t msg is Null
Line 5497: UphyCellSfnServerReleaseAllMsg_t msg is Null
Line 5530: cancelMsg == NULL pointer
Line 5530: cancelMsg == NULL pointer
Line 5538: configMessage == NULL pointer
Line 5538: configMessage == NULL pointer
Line 5568: Cant Cancel SFN
Line 5568: Cant Cancel SFN
Line 5618: uphy_CHsdschResources_t is NULL.
Line 5618: uphy_CHsdschResources_t is NULL.
Line 5628: uphy_CCpcResources is NULL.
Line 5628: uphy_CCpcResources is NULL.
Line 5714: DedicatedMode CNF message: MsId=%d
Line 5714: DedicatedMode CNF message: MsId=%d
Line 5727: cnfMsg == NULL pointer
Line 5727: cnfMsg == NULL pointer
Line 5744: DSDS: sendConfirmationMsg - UHAL_DSDS_PAUSE reset got postponed due to CM sequence. Reset Now
Line 5744: DSDS: sendConfirmationMsg - UHAL_DSDS_PAUSE reset got postponed due to CM sequence. Reset Now
Line 5752: Invalid MsgId=%d
Line 5752: Invalid MsgId=%d
Line 5762: cnfMsg send failure
Line 5762: cnfMsg send failure
Line 5793: DSDS: sendConfirmationMsg - UHAL_DSDS_PAUSE reset got postponed due to CM sequence. Reset Now
Line 5793: DSDS: sendConfirmationMsg - UHAL_DSDS_PAUSE reset got postponed due to CM sequence. Reset Now
Line 5804: Only Config and release need confirm
Line 5804: Only Config and release need confirm
Line 5834: confirmMsg send failure
Line 5834: confirmMsg send failure
Line 5874: RlRelease - uhal_Cmd_exec
Line 5874: RlRelease - uhal_Cmd_exec
Line 5885: [HHO] Unmap successful for RlNr=%d from MappingDatabase
Line 5885: [HHO] Unmap successful for RlNr=%d from MappingDatabase
Line 5889: [HHO] Failed to unmap RlNr=%d from MappingDatabase
Line 5889: [HHO] Failed to unmap RlNr=%d from MappingDatabase
Line 5899: CNF HHO msg without isHHOTakingPlace set
Line 5899: CNF HHO msg without isHHOTakingPlace set
Line 5904: HHO CNF with activationTimeToken is canceled
Line 5904: HHO CNF with activationTimeToken is canceled
Line 5911: HHO CNF with configDelayToken is canceled
Line 5911: HHO CNF with configDelayToken is canceled
Line 5937: [CPC] CPCModeRelease: CFN=%d
Line 5937: [CPC] CPCModeRelease: CFN=%d
Line 6017: Rf Info - uhal_Cmd_exec
Line 6017: Rf Info - uhal_Cmd_exec
Line 6037: uphy_CCpcResources is NULL.
Line 6037: uphy_CCpcResources is NULL.
Line 6067: UrrcCPCReleaseReqMsg is Null
Line 6067: UrrcCPCReleaseReqMsg is Null
Line 6087: **Release EDCH forcely
Line 6087: **Release EDCH forcely
Line 6091: Cancel pendingEdchRelease token
Line 6091: Cancel pendingEdchRelease token
Line 6098: Clearing EdchResourcesController->activationTimeTokenPtr
Line 6098: Clearing EdchResourcesController->activationTimeTokenPtr
Line 6108: edchResourceController_ptr->UlModifyTokenPtr = TRUE, So, it's cleared.
Line 6108: edchResourceController_ptr->UlModifyTokenPtr = TRUE, So, it's cleared.
Line 6118: edchResourceController_ptr->DlModifyTokenPtr = TRUE, So, it's cleared.
Line 6118: edchResourceController_ptr->DlModifyTokenPtr = TRUE, So, it's cleared.
Line 6143: UphyEdchReleaseReqMsg is Null
Line 6143: UphyEdchReleaseReqMsg is Null
Line 6148: **Condition check not satisfied to release EDCH forcely
Line 6148: **Condition check not satisfied to release EDCH forcely
Line 6151: Clearing EdchResourcesController->activationTimeTokenPtr
Line 6151: Clearing EdchResourcesController->activationTimeTokenPtr
Line 6181: **Release SC HSDSCH forcely
Line 6181: **Release SC HSDSCH forcely
Line 6185: Cancel pendingSecHsDschRelease token
Line 6185: Cancel pendingSecHsDschRelease token
Line 6212: UphySecHsdschReleaseReqMsg is Null
Line 6212: UphySecHsdschReleaseReqMsg is Null
Line 6217: **Condition check not satisfied to release SC HSDSCH forcely
Line 6217: **Condition check not satisfied to release SC HSDSCH forcely
Line 6236: **Release HSDSCH forcely
Line 6236: **Release HSDSCH forcely
Line 6240: Cancel pendingSecHsDschRelease token
Line 6240: Cancel pendingSecHsDschRelease token
Line 6268: UphyHsdschReleaseReqMsg is Null
Line 6268: UphyHsdschReleaseReqMsg is Null
Line 6273: **Condition check not satisfied to release HSDSCH forcely
Line 6273: **Condition check not satisfied to release HSDSCH forcely
Line 6336: Set initial DPCCH Power - uhal_Cmd_exec
Line 6336: Set initial DPCCH Power - uhal_Cmd_exec
Line 6364: start Encoding - uhal_Cmd_exec
Line 6364: start Encoding - uhal_Cmd_exec
Line 6394: UlDpchRelease - uhal_Cmd_exec
Line 6394: UlDpchRelease - uhal_Cmd_exec
Line 6433: Unable to set MaxUlTxPower
Line 6433: Unable to set MaxUlTxPower
Line 6439: maxUlTxPowerControllerInstance is Null
Line 6439: maxUlTxPowerControllerInstance is Null
Line 6450: No MaxUlTxPower available
Line 6450: No MaxUlTxPower available
Line 6466: Unable to set MaxUlTxPower
Line 6466: Unable to set MaxUlTxPower
Line 6472: No MaxUlTxPower available
Line 6472: No MaxUlTxPower available
Line 6478: maxUlTxPowerControllerInstance is Null
Line 6478: maxUlTxPowerControllerInstance is Null
Line 6498: Dedicated Mode Config Msg omits DlFdpchPowerControlMode - Asn_singleTPC assumed
Line 6498: Dedicated Mode Config Msg omits DlFdpchPowerControlMode - Asn_singleTPC assumed
Line 6511: Dedicated Mode Config Msg omits DlDpchPowerControlMode - Asn_singleTPC assumed
Line 6511: Dedicated Mode Config Msg omits DlDpchPowerControlMode - Asn_singleTPC assumed
Line 6672: [CPC]uphy_CDedicatedModeController_CPCSetEnablingDelayStartCfn, MsgId=%d,IsDedConfigDoneBeforeCPC =%d,DedConfigDoneCfn=%d
Line 6672: [CPC]uphy_CDedicatedModeController_CPCSetEnablingDelayStartCfn, MsgId=%d,IsDedConfigDoneBeforeCPC =%d,DedConfigDoneCfn=%d
Line 6802: Invalid MsgId=%d
Line 6802: Invalid MsgId=%d
Line 6813: confirmMsg send failure
Line 6813: confirmMsg send failure
Line 6983: Invalid TTI=%d
Line 6983: Invalid TTI=%d
Line 6995: Urrc/Uphy activation time disagreement rrc:%d phy:%d
Line 6995: Urrc/Uphy activation time disagreement rrc:%d phy:%d
Line 7006: At cfn %d desired offset %d from activation time %d cannot be used, use activation time %d instead
Line 7006: At cfn %d desired offset %d from activation time %d cannot be used, use activation time %d instead
Line 7020: At cfn %d desired offset %d from activation time %d cannot be used, use activation time %d instead
Line 7020: At cfn %d desired offset %d from activation time %d cannot be used, use activation time %d instead
Line 7064: rlInfoCommand uhal cmd exec failed
Line 7064: rlInfoCommand uhal cmd exec failed
Line 7091: rlInfoCommand uhal cmd exec failed
Line 7091: rlInfoCommand uhal cmd exec failed
Line 7110: Dedicated Mode Controller unable to reset chipset sfn to be cfn as slot %d too close to frame boundary, retry next frame
Line 7110: Dedicated Mode Controller unable to reset chipset sfn to be cfn as slot %d too close to frame boundary, retry next frame
Line 7127: Don't change SW SFN-CFN in case of timing maintained IFHHO
Line 7127: Don't change SW SFN-CFN in case of timing maintained IFHHO
Line 7140: Framework Sfn and Cfn Setup: OldSfn %d NewSfn %d New Cfn %d
Line 7140: Framework Sfn and Cfn Setup: OldSfn %d NewSfn %d New Cfn %d
Line 7150: Framework Sfn and Cfn Setup: OldSfn %d NewSfn %d New Cfn %d
Line 7150: Framework Sfn and Cfn Setup: OldSfn %d NewSfn %d New Cfn %d
Line 7183: blerCallbacksMidMapInfo == NULL pointer
Line 7183: blerCallbacksMidMapInfo == NULL pointer
Line 7212: blerCallbacksMidMapInfo == NULL pointer
Line 7212: blerCallbacksMidMapInfo == NULL pointer
Line 7246: theConfigMsg == NULL pointer
Line 7246: theConfigMsg == NULL pointer
Line 7288: Failed Configuration Notification Yet To Be Written
Line 7288: Failed Configuration Notification Yet To Be Written
Line 7323: Sfn %d Cfn %d: cellTimingIndInAbnormalState. Assign RlAndFingers for pScrCode %d
Line 7323: Sfn %d Cfn %d: cellTimingIndInAbnormalState. Assign RlAndFingers for pScrCode %d
Line 7343: Problems processing HHO request as cant locate cpich of new ref RL
Line 7343: Problems processing HHO request as cant locate cpich of new ref RL
Line 7373: HHO Cfg failed: outstandingRlToSynchronise=%d, hasHhoActivationTimeOccured=%d, isHHOTakingPlace=%d
Line 7373: HHO Cfg failed: outstandingRlToSynchronise=%d, hasHhoActivationTimeOccured=%d, isHHOTakingPlace=%d
Line 7382: Duplicate Advance Cell Synchro Ind
Line 7382: Duplicate Advance Cell Synchro Ind
Line 7396: Sfn %d Cfn %d: cellTimingIndInAbnormalState. Sfn obtained for pScrCode %d Inheriting Rl %d
Line 7396: Sfn %d Cfn %d: cellTimingIndInAbnormalState. Sfn obtained for pScrCode %d Inheriting Rl %d
Line 7415: Problems processing HHO request as cant locate cpich of new ref RL
Line 7415: Problems processing HHO request as cant locate cpich of new ref RL
Line 7425: Duplicate Advance Cell Sfn Ind
Line 7425: Duplicate Advance Cell Sfn Ind
Line 7447: Sfn %d Cfn %d: cellTimingIndInAbnormalState. Failed AdvanceCellSynchro for pScrCode %d
Line 7447: Sfn %d Cfn %d: cellTimingIndInAbnormalState. Failed AdvanceCellSynchro for pScrCode %d
Line 7453: uphy_CDedicatedModeController_cellTimingIndInAbnormalState: TransactId is out of range
Line 7453: uphy_CDedicatedModeController_cellTimingIndInAbnormalState: TransactId is out of range
Line 7476: Send config event to HHO
Line 7476: Send config event to HHO
Line 7480:  uphy_CDedicatedModeController_ProcessConfig hhoMsg=%d activationTimeTokenPtr=%d hhoStarted=%d
Line 7480:  uphy_CDedicatedModeController_ProcessConfig hhoMsg=%d activationTimeTokenPtr=%d hhoStarted=%d
Line 7495: uphy_CDedicatedModeController_activationTimeStf[%d] 
Line 7495: uphy_CDedicatedModeController_activationTimeStf[%d] 
Line 7501: Activation Time STF without isHHOTakingPlace
Line 7501: Activation Time STF without isHHOTakingPlace
Line 7523: rlInfoCommand uhal cmd exec failed
Line 7523: rlInfoCommand uhal cmd exec failed
Line 7538: rlInfoCommand uhal cmd exec failed
Line 7538: rlInfoCommand uhal cmd exec failed
Line 7563: Rf Info - uhal_Cmd_exec
Line 7563: Rf Info - uhal_Cmd_exec
Line 7588: Pening Dedicated mode config due to advance cell synchro
Line 7588: Pening Dedicated mode config due to advance cell synchro
Line 7602: Rf Info - uhal_Cmd_exec
Line 7602: Rf Info - uhal_Cmd_exec
Line 7630: Pening Dedicated mode config due to advance cell synchro
Line 7630: Pening Dedicated mode config due to advance cell synchro
Line 7640: ActivationTimeStf with unknown hho type
Line 7640: ActivationTimeStf with unknown hho type
Line 7683: HHO CNF with configDelayToken is canceled
Line 7683: HHO CNF with configDelayToken is canceled
Line 7750: uphy_CCellSFNServer is NULL
Line 7750: uphy_CCellSFNServer is NULL
Line 7760: CellSfnReqMsg == NULL pointer
Line 7760: CellSfnReqMsg == NULL pointer
Line 7764: Send SFN request to cell SFN server
Line 7764: Send SFN request to cell SFN server
Line 7785: Cant Request Cell Sfn
Line 7785: Cant Request Cell Sfn
Line 7798: Pending HHO flag
Line 7798: Pending HHO flag
Line 7805: hho Triggered already, so cell tracking is needed
Line 7805: hho Triggered already, so cell tracking is needed
Line 7823: CellSynchroReqMsg == NULL pointer
Line 7823: CellSynchroReqMsg == NULL pointer
Line 7856: Sending Cell Synchro request failed.
Line 7856: Sending Cell Synchro request failed.
Line 7914: hhoMsg becomes NULL pointer when cfgFsmState is %d
Line 7914: hhoMsg becomes NULL pointer when cfgFsmState is %d
Line 7939: HHO configure RL failed
Line 7939: HHO configure RL failed
Line 7943: Sfn %d Cfn %d: HhoAssignRlAndFingers rlNr %d pScrCode %d
Line 7943: Sfn %d Cfn %d: HhoAssignRlAndFingers rlNr %d pScrCode %d
Line 7953: [HHO] Failed to map RL %d to PSC %d
Line 7953: [HHO] Failed to map RL %d to PSC %d
Line 7957: [HHO] Mapped RL %d to PSC %d
Line 7957: [HHO] Mapped RL %d to PSC %d
Line 7980: HHO configure RL failed
Line 7980: HHO configure RL failed
Line 7984: Sfn %d Cfn %d: HhoAssignRlAndFingers rlNr %d pScrCode %d
Line 7984: Sfn %d Cfn %d: HhoAssignRlAndFingers rlNr %d pScrCode %d
Line 7994: [HHO] Failed to map RL %d to PSC %d
Line 7994: [HHO] Failed to map RL %d to PSC %d
Line 7998: [HHO] Mapped RL %d to PSC %d
Line 7998: [HHO] Mapped RL %d to PSC %d
Line 8015: EHalDlRlStartCmd - uhal_Cmd_exec
Line 8015: EHalDlRlStartCmd - uhal_Cmd_exec
Line 8021: RlRelease - uhal_Cmd_exec
Line 8021: RlRelease - uhal_Cmd_exec
Line 8034: [HHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 8034: [HHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 8040: [HHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 8040: [HHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 8048: [HHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 8048: [HHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 8054: [HHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 8054: [HHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 8090: rlInfoCommand uhal cmd exec failed
Line 8090: rlInfoCommand uhal cmd exec failed
Line 8117: cannot find off for [%d %d]
Line 8117: cannot find off for [%d %d]
Line 8126: cannot find old off for [%d %d]
Line 8126: cannot find old off for [%d %d]
Line 8148: rlFdpchInfoArray is NULL pointer
Line 8148: rlFdpchInfoArray is NULL pointer
Line 8158: rlInfoArray is NULL pointer
Line 8158: rlInfoArray is NULL pointer
Line 8174: cannot find off for [%d %d]
Line 8174: cannot find off for [%d %d]
Line 8183: cannot find old off for [%d %d]
Line 8183: cannot find old off for [%d %d]
Line 8250: AttachRl(%d): oldRefCpich %d newRefCpich %d targetCellTm %d refTimeToSetSfn %d
Line 8250: AttachRl(%d): oldRefCpich %d newRefCpich %d targetCellTm %d refTimeToSetSfn %d
Line 8253: AttachRl: cpich_diff %d ref_chip_count %d target_chip_count %d off %d refOff %d refRlSfn %d chs_tm_chip %d
Line 8253: AttachRl: cpich_diff %d ref_chip_count %d target_chip_count %d off %d refOff %d refRlSfn %d chs_tm_chip %d
Line 8282: EHalDlRlSfnConfigCmd - uhal_Cmd_exec
Line 8282: EHalDlRlSfnConfigCmd - uhal_Cmd_exec
Line 8316: getDlDpchFrameOffset finds no phych connected to Rl
Line 8316: getDlDpchFrameOffset finds no phych connected to Rl
Line 8334: getDlDpchFrameOffset finds no dpch connected to Rl %d
Line 8334: getDlDpchFrameOffset finds no dpch connected to Rl %d
Line 8361: getDlDpchFrameOffset finds refCellInformation=0
Line 8361: getDlDpchFrameOffset finds refCellInformation=0
Line 8370: getDlDpchFrameOffset cannot look up reference Rl
Line 8370: getDlDpchFrameOffset cannot look up reference Rl
Line 8390: DedicatedModeController timesout configuring tgps info
Line 8390: DedicatedModeController timesout configuring tgps info
Line 8425: DedicatedModeController receives negative cnf from CompressedModeManager when configuring TGPS info
Line 8425: DedicatedModeController receives negative cnf from CompressedModeManager when configuring TGPS info
Line 8439: DedicatedModeController processTgpsIndMsg without timeout set
Line 8439: DedicatedModeController processTgpsIndMsg without timeout set
Line 8512: reqMsg send failure
Line 8512: reqMsg send failure
Line 8577: Dedicated mode re-used the Dpch RL with new modification
Line 8577: Dedicated mode re-used the Dpch RL with new modification
Line 8634: uhal EHalDlRlModifyCmd Failed for DEDI Existing RL %d
Line 8634: uhal EHalDlRlModifyCmd Failed for DEDI Existing RL %d
Line 8643: uphy_CDedicatedModeController_ConfigureExistingDpchRL: NO CHANGE
Line 8643: uphy_CDedicatedModeController_ConfigureExistingDpchRL: NO CHANGE
Line 8651: uhal EHalDlRlModifyCmd command instance allocation failure for Existing Dpch RL %d
Line 8651: uhal EHalDlRlModifyCmd command instance allocation failure for Existing Dpch RL %d
Line 8688: Dedicated mode re-used the Fdpch RL with new modification
Line 8688: Dedicated mode re-used the Fdpch RL with new modification
Line 8721: uhal EHalDlRlModifyCmd Failed for DEDI Existing RL %d
Line 8721: uhal EHalDlRlModifyCmd Failed for DEDI Existing RL %d
Line 8730: uphy_CDedicatedModeController_ConfigureExistingFdpchRL: NO CHANGE
Line 8730: uphy_CDedicatedModeController_ConfigureExistingFdpchRL: NO CHANGE
Line 8738: uhal EHalDlRlModifyCmd command instance allocation failure for Existing Fdpch RL %d
Line 8738: uhal EHalDlRlModifyCmd command instance allocation failure for Existing Fdpch RL %d
Line 8765: confirmMsg == NULL pointer
Line 8765: confirmMsg == NULL pointer
Line 8794: confirmMsg send failure
Line 8794: confirmMsg send failure
Line 8822: IndicationMsg == NULL pointer
Line 8822: IndicationMsg == NULL pointer
Line 8841: IndicationMsg send failure
Line 8841: IndicationMsg send failure
Line 8866: Cannot create RefCellIndMsg
Line 8866: Cannot create RefCellIndMsg
Line 8886: Cannot send RefCellIndMsg
Line 8886: Cannot send RefCellIndMsg
Line 8890: [BCH for RefCell]: SendRefCellInd (%d %d)
Line 8890: [BCH for RefCell]: SendRefCellInd (%d %d)
Line 8894: [BCH for RefCell]: Ref. Cell Indication not supported
Line 8894: [BCH for RefCell]: Ref. Cell Indication not supported
Line 8924: DSDS: Unable to send RF pause done message to DSLRC
Line 8924: DSDS: Unable to send RF pause done message to DSLRC
Line 8928: DSDS: sendRfPauseDone sent to DSLRC interface with %d
Line 8928: DSDS: sendRfPauseDone sent to DSLRC interface with %d
Line 8950: 3G3G DSDS: uphy_CDedicatedModeController_forcedOOSIndStf
Line 8950: 3G3G DSDS: uphy_CDedicatedModeController_forcedOOSIndStf
Line 8978: 3G3G DSDS: DCH is paused, start sending forced Out of Syncs to RRC
Line 8978: 3G3G DSDS: DCH is paused, start sending forced Out of Syncs to RRC
Line 9023: RemainingFrames = %d
Line 9023: RemainingFrames = %d
Line 9030: Freeing up stopTfciBasedProtectionTimer
Line 9030: Freeing up stopTfciBasedProtectionTimer
Line 9049: ongoingDCHReason = %d
Line 9049: ongoingDCHReason = %d
Line 9069: txTimingCommand uhal command exec failed: Err Code %d Add Err Code %d
Line 9069: txTimingCommand uhal command exec failed: Err Code %d Add Err Code %d
Line 9077: rollbackTxTmDpcPos: %d
Line 9077: rollbackTxTmDpcPos: %d
Line 9126: uhal EHalDlRlModifyCmd command exec failed for Fdpch RL %d
Line 9126: uhal EHalDlRlModifyCmd command exec failed for Fdpch RL %d
Line 9189: uhal EHalDlRlModifyCmd command exec failed for RL %d
Line 9189: uhal EHalDlRlModifyCmd command exec failed for RL %d
Line 9223: uphy_CDedicatedModeController_preprocessConfigMsg: Releasing EDCH
Line 9223: uphy_CDedicatedModeController_preprocessConfigMsg: Releasing EDCH
Line 9248: uphy_CDedicatedModeController_preprocessConfigMsg: UphyEdchReleaseReqMsg is Null
Line 9248: uphy_CDedicatedModeController_preprocessConfigMsg: UphyEdchReleaseReqMsg is Null
Line 9259: uphy_CDedicatedModeController_preprocessConfigMsg: Releasing SC HSDSCH
Line 9259: uphy_CDedicatedModeController_preprocessConfigMsg: Releasing SC HSDSCH
Line 9285: uphy_CDedicatedModeController_preprocessConfigMsg: UphySecHsdschReleaseReqMsg is Null
Line 9285: uphy_CDedicatedModeController_preprocessConfigMsg: UphySecHsdschReleaseReqMsg is Null
Line 9296: uphy_CDedicatedModeController_preprocessConfigMsg: Releasing HSDSCH
Line 9296: uphy_CDedicatedModeController_preprocessConfigMsg: Releasing HSDSCH
Line 9322: uphy_CDedicatedModeController_preprocessConfigMsg: UphyHsdschReleaseReqMsg is Null
Line 9322: uphy_CDedicatedModeController_preprocessConfigMsg: UphyHsdschReleaseReqMsg is Null
Line 9325: uphy_CDedicatedModeController_preprocessConfigMsg: isRelForPreProcessinProgress=%d 
Line 9325: uphy_CDedicatedModeController_preprocessConfigMsg: isRelForPreProcessinProgress=%d 
Line 9350: uphy_CDedicatedModeController_processConfigMsg, isEdchConfigured = %d, isScHsdschConfigured = %d, isHsdschConfigured = %d
Line 9350: uphy_CDedicatedModeController_processConfigMsg, isEdchConfigured = %d, isScHsdschConfigured = %d, isHsdschConfigured = %d
Line 9365: uphy_CDedicatedModeController_processConfigMsg
Line 9365: uphy_CDedicatedModeController_processConfigMsg
Line 9370: uphy_CDedicatedModeController_processConfigMsg HHO message NULL
Line 9370: uphy_CDedicatedModeController_processConfigMsg HHO message NULL
Line 9386: uphy_CDedicatedModeController_updateSfnCfnDiff: Not in dedicated mode
Line 9386: uphy_CDedicatedModeController_updateSfnCfnDiff: Not in dedicated mode
Line 9398: compModeScheduleStopForHhOStf runs in currentRSN %d to stop scheduling compressed mode GAP for DCH HHO
Line 9398: compModeScheduleStopForHhOStf runs in currentRSN %d to stop scheduling compressed mode GAP for DCH HHO
