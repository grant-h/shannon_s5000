Line 314: [L1LC_EnableDsdsMask] -> 0x%x (0x%x)
Line 328: [L1LC_DisableDsdsMask] -> 0x%x (0x%x)
Line 369: [L1LC_IsAnyDsdsMaskSet] DSDS Mask(%d)
Line 429: [LTE DSDS] Undefined option for display RFBO
Line 451: [LTE DSDS] Already IsDrxSleep = TRUE.
Line 458: [LTE DSDS] Already IsDrxSleep = FALSE.
Line 463: [LTE DSDS] gL1lc_DsdsDB.IsDrxSleep = [%d][%d]
Line 502: [LTE DSDS] Already PauseIndFlag = TRUE.
Line 509: [LTE DSDS] Already PauseIndFlag = FALSE.
Line 515: [LTE DSDS] gL1lc_DsdsDB.PauseIndFlag = [%d][%d]
Line 549: [LTE DSDS] Undefined option for display RFBO
Line 571: [LTE L1LC DSL1RC] HALSC_GetUeState(%d)@%s IsRfAvailable[%s]
Line 650: [LTE L1LC DSL1RC] Retrigger MIB_READ!
Line 662: [LTE L1LC DSL1RC] MIB_READ will be triggered after processing PbchDecodeReq in RRM Saved Msg!
Line 666: [LTE L1LC DSL1RC] Retrigger SI_READ!
Line 721: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Pre Meas Processing -PendingIratMeasMode (%d) Meas Config(%d)!!!
Line 741: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSetDlFreq!!!
Line 750: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSearchReq!!!
Line 762: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Meas Processing -PendingFromMeasReq[%d]!!!
Line 768: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Meas Processing -IsDuringMeas[%d]!!
Line 773: [LTE_DSDS] !!! pNextMeasElem is NULL !!!
Line 901: gL1LC_DsdsReleaseAndReqTmr Timer stop
Line 906: [LTE L1LC DSL1RC] Response Recieved while in DRX Sleep!!! Issue Rsrc Release to DSL1C
Line 928: [LTE L1LC DSL1RC] RFAvailableRsp : CpuPowerDownHolding( 0 )
Line 961: [LTE L1LC DSL1RC] L1LC_ProcMmcIf_RFUnavailableRsp [0x%x]!!!
Line 991: [LTE L1LC DSL1RC] In CONN mode, RF not available... DSDS Timer started for 10s!!!
Line 1022: [LTE DS]Do not set RetryTimer!!IsNearbySWWakeupTmr(%d) IsNearbyPrepone(%d) remain time(%d)
Line 1028: [LTE DS]Start RetryTimer(%d)!!
Line 1034: [LTE DS]Start RetryTimer(%d)!!
Line 1086: [LTE L1LC DSL1RC] Not waiting for Rsrc-Response (%d), Ignore Response (%d) Early Pause Timer stopped!!!
Line 1096: [LTE L1LC DSL1RC] Waiting For Resume (%d), Ignore Response (%d) Early Pause Timer stopped!!!
Line 1164: [LTE L1LC DSL1RC] retryCntForPSConflict (%d)!!!
Line 1211: [LTE L1LC DSL1RC] retryCntForPSConflict (%d)!!!
Line 1215: [LTE L1LC DSL1RC]L1LC_ProcMmcIfResponseInd Retry time (%d)!!!
Line 1227: [LTE L1LC DSL1RC] Response type is wrong!!!
Line 1248: [LTE L1LC DSL1RC] Next time, L1LC will request RF with updated RF reason!!!
Line 1302: [LTE L1LC DSL1RC] Set SW Wakeup Timer (setting: %d us) ! Lte_OHE.Stack_status (0, 1) = (%d, %d)
Line 1342: [LTE L1LC DSL1RC] Paging frame is changed from (%d) to (%d)
Line 1351: [LTE L1LC DSL1RC] Remaining Paging time (%d us), RetryPeriod (%d us)
Line 1380: [LTE L1LC DSL1RC] Remaining Paging time (%d us), RetryPeriod (%d us)
Line 1388: [LTE L1LC DSL1RC] Remaining Paging time (%d us), RetryPeriod (%d us)
Line 1391: [LTE L1LC DSL1RC] PreponePagingRFReqTime(%d) is updated!
Line 1419: [DEBUG] gL1LC_DrxControl.state = [%d, %d], gDrxL1_Flag = [%d, %d]
Line 1428: [LTE L1LC DSL1RC] ILM pause received when Wakeup is on hold due to nearby early pause timer expiry!!!
Line 1434: [LTE L1LC DSL1RC] IRAT measurement is pending.Do not stop early pause request!gL1lc_DsdsDB.PendingIratMeasMode(%d)
Line 1440: [LTE L1LC DSL1RC] CauseUpdate is Pended!
Line 1452: [LTE L1LC DSL1RC] Pause request received when RF (%s) and DRX Sleep (%s)!!!
Line 1457: [LTE L1LC DSL1RC] Ignore PAUSE_REQ as IsWaitResponse = TRUE!!!
Line 1461: [LTE L1LC DSL1RC] Ignore Pause Req as MBMS is ongoing and RF is already released!!!
Line 1471: [LTE L1LC DSL1RC] Pause Request recieved when L1 is already in waiting state for Resume!!!
Line 1485: [LTE L1LC DSL1RC] Pause Request recieved when L1 is doing wakeup procedure!!!
Line 1500: [LTE L1LC DSL1RC] MBMS is ongoing, delay pause done by time = %d ms
Line 1519: [4G_DRDS] During 4G_DRDS, Pause procedure should be done
Line 1554: [LTE L1LC DSL1RC] Mandatory SIBs are decoded, execute Pause
Line 1562: [LTE L1LC DSL1RC] PAUSE :: Time[%dms] Pause Flag [%s] RF[%s] Current Proc[%s], UE state(%d), gRSPNeeded(%d))
Line 1569: [LTE L1LC DSL1RC] In CONN mode, RF not available... DSDS Timer started for 10s!!!
Line 1600: [LTE L1LC DSL1RC] Resume Recieved while in DRX Sleep!!! Issue Rsrc Release to DSL1C
Line 1612: gL1LC_DsdsReleaseAndReqTmr Timer stop
Line 1668: [LTE L1LC DSL1RC] ILM pause is not done since measure activity is pending(%d) or wakeup procedure(%d)!!!
Line 1683: [LTE L1LC DSL1RC] In CONN mode, RF not available... DSDS Timer started for 10s!!!
Line 1690: PAUSE in CGI case
Line 1712: [LTE L1LC DSL1RC] Mandatory SIBs are decoded, execute Pause
Line 1719: [LTE L1LC DSL1RC] ILM pause is not done since activity (0x%x) is pending!!!
Line 1749: [4G_DRDS] Do not update RF cause, eDV_Active(%d)
Line 1756: [LTE L1LC DSL1RC] Do not update RF cause as Paging Rcv Timer is running 
Line 1786: [LTE L1LC DSL1RC] Do not request RF with lower priority than PAGING due to nearby e.p.t (%d)! 
Line 1832: Measurement ongoing. Hence do not change RF request to PS Data
Line 1848: Measurement/Wakeup is ongoing. Hence do not change RF reason
Line 1857: RACH is ongoing. Hence do not release
Line 1915: [LTE L1LC] pause_ind action
Line 1951: [LTE L1LC] Do not pause as Pause Delay timer running due to MBMS
Line 1958: [LTE L1LC] pause_done (%d)
Line 2055: Set IsMandatarySibsReadReq as TRUE.
Line 2066: Set IsMandatarySibsReadReq as FALSE.
Line 2168: [4G_DRDS] Receive Intra meas!! result[%d]
Line 2191: [DSP] gHalDrx_ConnDrxState = DRX_CONN_INIT
Line 2318: Reset PauseFlag to ignore early pause timer (Signalling Start)
Line 2329: Early Pause Timer stop
Line 2332: [LTE L1LC] Signalling for Handover!!!
Line 2337: [LTE L1LC] Signalling for CSFB!!!
Line 2358: [LTE L1LC DSL1RC] Updated RF reason!!
Line 2369: [LTE L1LC DSL1RC] Release RF by ST[%d] in case it has done pause done with release[NO] and both stack is in Conn-Conn state
Line 2414: [LTE L1LC DSL1RC] Can be PS conflict (4G-HEDGE) situation!!!
Line 2420: [LTE L1LC] High Priority end. Result is MMC_L1LC_REQUESTREASON_NULL!No Action!
Line 2428: [LTE L1LC] Do not request RF as 4G_DRDS is active
Line 2460: [LTE L1LC] Do not update RF case as 4G_DRDS is active
Line 2503: RESET gL1lc_DsdsDB_[%d].IsSuspend
Line 2532: RF not released as Measurement ongoing.
Line 2610: Early Pause Timer stop
Line 2618: Set IsMandatarySibsReadReq as FALSE.
Line 2688: (L1LC_DecodeRrmConnSleepReq) (R value no update for long time)
Line 2689: (L1LC_DecodeRrmConnSleepReq) (R value no update for long time)
Line 2887: [LTE L1LC DSL1RC] Doesn't request RF! Check Req ID[%d]!!!!)
Line 2893: [LTE L1LC DSL1RC] Pre result[%d])
Line 2971: [L1LC @%s] Final result[%d]: (DsdsMas[0x%x], Pause[%s], Req ID[%d], HO Flag[%s], gCurProc[%d])
Line 3163: [L1LC @%s] Do not Process HAL_L1LC_SINR_STATUS_IND otherwise RF will be released. Pause Ind (%d), Pause Flag (%d)
Line 3177: [L1LC @%s]Pre Processing (DsdsMas[0x%x], Pause[%s], Current Proc[%s], Req ID[%d])
Line 3179: [L1LC @%s]Pre Processing (Result[%s], Cause[%s], IsConn(%d))
Line 3190: There is no ongoing Search/Meas !!!!!!!
Line 3205: Don't perform RF Pause/Release,  gL1LC_DrxControl.state: %d, gDrx_CfoEnable: %d
Line 3222: Don't perform RF Pause/Release,  gL1LC_DrxControl.state: %d, gDrx_CfoEnable: %d
Line 3235: [L1LC @%s] Post Processing (DsdsMask[0x%x], Pause[%s], Current Proc[%s], Req ID[%d] Result[%s])
Line 3346: L1LC_DsdsCheckPauseIndAction
Line 3353: [4G_DRDS] 4G_DRDS ongoing, don't do L1LC_DsdsCheckPauseIndAction !!!
Line 3360: Wakeup procedure is not completed. Hence do not send pause done yet!
Line 3366: [LTE L1LC DSL1RC] RF released due to Pause Ind action
Line 3425: [LTE L1LC DSL1RC] Signaling mask already set, request RF with signaling
Line 3545: [LTE L1LC DSL1RC] 4G_DRDS is activated already
Line 3589: [LTE L1LC DSL1RC] Waiting for resume, hence Release RF before activating 4G_DRDS
Line 3639: [L1LC @%s] (DsdsMask[%d] ,Pause[%s], Current Proc[%s], Req ID[%d], Result[%s], Cause[%s])
Line 3694: RF aquired for power on(BPLMN_SRCH_START_IND)
Line 3702: RESET gL1lc_DsdsDB_[%d].IsSuspend
Line 3713: RF request triggered before power on(BPLMN_SRCH_START_IND)
Line 3740: [L1LC @%s] Post Processing (DsdsMas[0x%x], Pause[%s], Current Proc[%s], msg_id[%d], Cause[%s])
Line 3781: [LTE L1LC DSL1RC] RF Available [%s] Req Reason [%s] IratMeasFlag[%d]
Line 3802: RF will not be requested because RRM_L1LC_SIGNALLING_IND comes in Modem off state
Line 3832: [LTE L1LC DSL1RC] Saved RRM Msg[%s] Msg ID[%d]
Line 3841: [LTE L1LC DSL1RC] RRM Msg Waiting for Pause Done/Resume/Response :: Pause[%s] Resume[%s], PauseIndFlag[%s], RetryTimerRunning[%s]
Line 3876: [LTE L1LC DSL1RC] Saved RRM Msg[%s] Msg ID[%d] IsEDV_Active[%d]
Line 3901: [LTE L1LC DSL1RC] Do not request RF with lower priority than PAGING due to nearby e.p.t (%d)! 
Line 3909: gL1LC_DrxControl.state: %d, gDrx_CfoEnable: %d
Line 3930: [L1LC @%s] Saved RRM Msg[%s] Msg ID[%d] isProcOngoing [0x%x] isRFUpdate [%d]
Line 3949: [L1LC @%s] RRM_NOHOLDMSG[%d], NO_PAUSE_RESUME[%d], IsRfCauseUpdatePending(%d), isProcOngoing[%d], CurrMeasFlag(%d)
Line 4013: [LTE L1LC DSL1RC] Wakeup Start Indication Recieved from HAL; but RF is Unavailable
Line 4063: [LTE L1LC DSL1RC] Stop Retry Timer and Requests for RF
Line 4070: [LTE L1LC DSL1RC] DSDS_RRM_NOHOLDMSG[%d] DSDS_NO_PAUSE_RESUME[%d],IsRfCauseUpdatePending(%d)
Line 4114: [L1LC @%s] RRM Saved Msg [%d] is not freed !
Line 4117: [L1LC @%s] RRM Saved Msg [%d] is freed !
Line 4124: [L1LC @%s] HAL Saved Msg [%d] is freed !
Line 4130: [L1LC @%s] MMC Saved Msg [%d] is freed !
Line 4138: [L1LC @%s] L1LC_DsdsDB cleared !
Line 4160: [L1LC PSPS] PS Protection is not valid as no Autopause timer is running!
Line 4170: [L1LC PSPS] Don't Release RF during Sleep! PS Protection is valid. SleepTime[%u], EarlyPauseTime[%u]
Line 4176: [L1LC PSPS] Release RF during Sleep! SleepTime[%u], EarlyPauseTime[%u]
Line 4232: [LTE L1LC DSL1RC] L1LC_ProcWakeUpStart :: RF Available[%s] Wakeup from Sleep[%s]
Line 4268: [LTE L1LC DSL1RC] L1LC_ProcConfigGapInt :: RF Available[%s]
Line 4299: [LTE L1LC DSL1RC] L1LC_ProcReConfigL1C (gDrx_ActiveRat : %d)
Line 4329: [LTE L1LC DSL1RC] Cannot Restore L1LC Parameters!!! (Sync Mode[%d] Meas Mode[%d] gDrx_ActiveRat[%d])
Line 4357: [LTE L1LC DSL1RC] L1LC_ProcReConfigL1C (gDrx_ActiveRat : %d)
Line 4522: [LTE L1LC DSL1RC] Cannot Store L1LC Parameters!!! (Sync Mode[%d] Meas Mode[%d])
Line 4527: [LTE L1LC DSL1RC]L1LC_ProcStoreL1CParameters (gDrx_ActiveRat : %d)
Line 4565: [LTE L1LC DSL1RC] Cannot Store L1LC Parameters!!! (Sync Mode[%d] Meas Mode[%d])
Line 4570: [LTE L1LC DSL1RC]L1LC_ProcStoreL1CParameters (gDrx_ActiveRat : %d)
Line 4717: [SC] CC%d: earfcn(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(%x), rf_path(%x)
Line 4748: [4G_DRDS] No more procedure is needed to release RF in ScgStackId (%d)
Line 4763: [4G_DRDS] restore Dynamic QS (4G_DRDS deact)
Line 4768: [4G_DRDS] DEACTIVATED From DR_State(%d) ===
Line 4778: RF is not initialized yet (RfAvailable[%d] WaitResponse[%d]). Dont perform RF Release procedure!
Line 4786: L1LC_DsdsPerformRFRelease
Line 4849: [LTE L1LC DSL1RC] Release RF during SI_READ!
Line 4859: [LTE L1LC DSL1RC] Release during Conn SIB Read!
Line 4891: L1LC_DsdsPerformRFRelease: No Pending LMAC operation for L2
Line 4901: L1LC_DsdsPerformRFRelease count(%d), cipher pending(%d) Decipher Penidng(%d)
Line 4914:  RX_STATUS(%d)
Line 4930: FORCED LMAC_DECIPHER_BLOCKFLAG_CLR, RX_STATUS(0x%x)
Line 4935: Cipher/Decipher Reach Max Count(%d)
Line 4953: RTG(ST:%d) is saved: SFN(%d), TTI(%d) RTGoffset(%d), ReleasePalTime(%d)
Line 4969: Early Pause Timer stop
Line 4976: gL1LC_DsdsReleaseAndReqTmr Timer stop
Line 5031: RF release(ST: %d) in conn - conn state! And STACK(%d) didn't have RF yet!!
Line 5046: Retry Timer is already running. Stop the timer and request again!!
Line 5076: Don't update RF cause for otherstack(Is_ResumeReq(%d), IsWaitResponse(%d), remain_time(%d))
Line 5085: [SC] CC%d: earfcn(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(%x), rf_path(%x)
Line 5119: L1LC_DsdsPerformRFPause
Line 5123: [SC] CC%d: earfcn(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(%x), rf_path(%x)
Line 5135: [4G_DRDS] No more procedure is needed to Pause RF in ScgStackId (%d)
Line 5151: [4G_DRDS] restore Dynamic QS (4G_DRDS deact)
Line 5154: [4G_DRDS] DEACTIVATED From DR_State(%d) ===
Line 5180: [LTE L1LC DSL1RC] During Conn-Conn State, L1LC should release RF!!
Line 5265: [LTE L1LC DSL1RC] Paused during SI_READ!
Line 5273: [LTE L1LC DSL1RC] Paused during Conn SIB READ!
Line 5304: L1LC_DsdsPerformRFPause: No Pending LMAC operation for L2
Line 5314: L1LC_DsdsPerformRFPause count(%d), cipher pending(%d) Decipher Penidng(%d)
Line 5327: TX_STATUS(%x, %x) RX_STATUS(%x)
Line 5343: FORCED LMAC_DECIPHER_BLOCKFLAG_CLR, RX_STATUS(0x%x)
Line 5348: Cipher/Decipher Reach Max Count(%d)
Line 5368: RTG(ST:%d) is saved: SFN(%d), TTI(%d) RTGoffset(%d), ReleasePalTime(%d)
Line 5423: Not early pause case. Check other stack's SWWakeupTmr and prepone
Line 5439: Don't update RF cause for otherstack(Is_ResumeReq(%d), IsWaitResponse(%d), remain_time(%d))
Line 5446: Early pause case. Don't update other stack's RF cause
Line 5461: [SC] CC%d: earfcn(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(%x), rf_path(%x)
Line 5477: [LTE L1LC DSL1RC] 10s DSDS TIMER EXPIRED in CONN mode!!!
Line 5506: [LTE L1LC DSL1RC] DSDS RETRY TIMER EXPIRED!!!
Line 5511: [LTE L1LC DSL1RC] SUSPEND FLAG is Set!Return....
Line 5522: [LTE L1LC DSL1RC] There is RrmSaveMsg! but also, HalSaveMsg is RsrcReq
Line 5548: [LTE L1LC DSL1RC] Updated RF reason!!
Line 5607: [LTE L1LC DSL1RC] Do not request RF with SysInfo as RRC is in Paused state!
Line 5629: [LTE L1LC DSL1RC] Updated RF reason!!
Line 5644: [LTE L1LC DSL1RC] Abnormal case!!
Line 5653: [LTE L1LC DSL1RC] 4G_DRDS is activated hence free HAL_L1LC_RF_RSRC_REQ_IND for SCG stack!
Line 5658: [4G_DRDS] No need to Update RF reason for SCG stack as 4G_DRDS is activated!
Line 5689: [LTE L1LC DSL1RC] DSDS SW WAKEUP TIMER EXPIRED!!!
Line 5723: current_sfn_tti[%d], gDrxSiRnti[%d] 
Line 5746: [LTE L1LC DSL1RC] Timer started for %d !!!
Line 5754: [LTE L1LC DSL1RC] Timer started for %d !!!
Line 5790: UE state[%d], Rnti[%d], Rf available[%d] 
Line 5814: [LTE L1LC DSL1RC] DRX sleep / CLKEST ongoing (State: %d), hence not doing pause even Early timer expired!!!
Line 5827: [LTE_DSDS]Initial Search/ measure hence not doing pause even Early timer expired
Line 5834: [LTE_DSDS]During GAP hence not doing pause even Early timer expired
Line 5841: [LTE_DSDS]Irat measure(%d) hence not doing pause even Early timer expired
Line 5848: [LTE_DSDS]Scell srch/meas(%d) hence not doing pause even Early timer expired
Line 5855: [LTE_DSDS]Inter srch/meas(%d) hence not doing pause even Early timer expired
Line 5861: [LTE_DSDS]Handover(%d)/CSFB(%d) already in progress. Hence not doing pause even Early timer expired
Line 5867: [4G_DRDS] Don't do early pause as pauseFlag is not set ! gL1lc_DsdsDB.PauseFlag [%d]
Line 5939: [4G_DRDS] eDV_AvailableforEPT(%d -> %d)
Line 5941: [4G_DRDS] set EptCheckForARFC(%d -> %d)
Line 5949: [4G_DRDS] Don't do early pause ! EDV_Active [%u] EDV_State [%d]
Line 5963: [LTE_DSDS]Intra srch/meas(%d) is ongoing in idle state
Line 5970: [LTE_DSDS] During Intra srch/meas in idle state, LTE L1 was paused before!
Line 5981: [LTE_DSDS] During Intra srch/meas in idle state, LTE L1 is paused this time!
Line 6000: [LTE_DSDS] LTE Conn-Conn state and MeasPending is TRUE. Current stack was paused before. Hence skip EPT for now !
Line 6005: [LTE_DSDS] LTE Conn-Conn state and MeasPending is TRUE. Current stack is paused this time!
Line 6011: [LTE_DSDS] Other ST is in Conn state, and Stack status is Active! False E.P.T!
Line 6021: [LTE_DSDS] e.p.t expired, pause done not sent. Send RF request as IsRfCauseUpdatePending is TRUE, RF Requet[%s]
Line 6037: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Meas Processing -PendingFromMeasReq[%d]!!!
Line 6043: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Meas Processing -IsDuringMeas[%d]!!
Line 6049: [LTE_DSDS] !!! pNextMeasElem is NULL !!!
Line 6062: gL1LC_PbchMode[%d]
Line 6071: Send Pause done on 4G BCH conflict with Other SIM IsLastRejectOnConflict[%d]
Line 6077: Do not send pause Done as there is 4G BCH conflict with Other SIM IsLastRejectOnConflict[%d]
Line 6086: Send Pause done on 4G BCH conflict with Other SIM IsLastRejectOnConflict[%d]
Line 6092: Do not send pause Done as there is 4G BCH conflict with Other SIM IsLastRejectOnConflict[%d]
Line 6101: [LTE_DSDS] Volte is ongoing [%d]. Hence not doing pause even Early timer expired
Line 6110: [LTE_DSDS] PDCCH Ordered RACH is ongoing, do not perform Pause done
Line 6123: [MBMS RF Throttling] randValue(%u)
Line 6128: [MBMS RF Throttling] Do not send pause done confirm, randValue(%u)
Line 6162: [LTE_DSDS] Pause(%d), Resume(%d)
Line 6171: [LTE_DSDS] e.p.t expired, pause done not sent. Send RF request as IsRfCauseUpdatePending is TRUE, RF Requet[%s]
Line 6181: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSearchReq!!!
Line 6192: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Meas Processing -PendingFromMeasReq[%d]!!!
Line 6197: [LTE_DSDS] !!! pNextMeasElem is NULL !!!
Line 6207: [LTE_DSDS]RF Pause Flag Reset
Line 6209: [LTE_DSDS]Wait for Resume[%s] Wait for RF RSRC RSP[%s]
Line 6254: [DSP] Modem Status: % d, gL1LC_DrxControl.state: %d, DSDS_RF_AVAILABLE(): %d
Line 6276: [LTE L1LC DSL1RC] Requesting rf for saved RRM msg
Line 6428: [LTE L1LC DSL1RC] GetRemainEarlyPauseTime(%u)
Line 6452: [LTE L1LC DSL1RC] L1LC_ProcIsWakeUpPossible() Returned %d
Line 6501: [LTE L1LC] : Set DsdsRetryTmr!
Line 6528: Stop gL1LC_DsdsBplmnDurationTmr at L1LC on reception of RF grant
Line 6539: [LTE L1LC] : error Case! BplmnDurationTimer should have expired
Line 6565: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 6630: %s: Irat pending Dont release RF and Dont update RF cause since measure activity is pending(%d) or wakeup procedure(%d)!!!
Line 6697: [LTE L1LC] Signalling End!Paging ongoing. Switch RF cause to Paging
Line 6703: [LTE L1LC] Signalling End!Sys Info Read ongoing. Switch RF cause to SysInfo
Line 6709: [LTE L1LC] Signalling End!Measurement ongoing. Switch RF cause to MEAS
Line 6725: [LTE L1LC] Signalling End!Cell search ongoing. Switch RF cause to CellSearch
Line 6731: [LTE L1LC] Signalling End!MBMS ongoing. Switch RF cause to PSCALL
Line 6794: [LTE L1LC DSL1RC] L1LC_DsdsUpdateRfCause Prev(%d), New (%d), Rf Status(%d),Meas Status (%d)!!!
Line 6798: Retry Timer is already running. Stop the timer!!
Line 6804: Procedure with higher priority is ongoing!!
Line 6810: Measurement on going, RETURN!!! RequestReason(%d), CurrMeasFlag(%d) gL1LC_DrxControl.state(%d)
Line 6822: Clkest is ongoing, RETURN!!!
Line 6875: [LTE L1LC DSL1RC] Can be PS conflict (4G-HEDGE) situation!!!
Line 6880: L1LC_DsdsUpdateRfCause: isRFReqSent(%d), Current Procedure(%d)!!!
Line 6938: There is no case
Line 6988: L1LC_IsConflictWithBCH: Check SI scheduling for any conflict
Line 7029: There is conflict between BCH(4G) with PCH(other SIM) for index in SIB-1[%d] CurrentSfnTTI(%d) CurrentSfnTTI + EPT windowLength(%d) NextSiSfnTTI(%d) PrevSiSfnTTI(%d), si_WindowLength(%d)
Line 7042: Conflict in SI-Win(%d) and GAP. CurrentSfnTTI(%d) NextSiSfnTTI(%d) + SI windowLength(%d) gap_sfn_tti(%d)
Line 7048: SI-Window ongoing in SI-Win(%d). CurrentSfnTTI(%d) NextSiSfnTTI(%d) + SI windowLength(%d) gap_sfn_tti(%d)
Line 7075: Pre cellboundary is changed from %d to %d
Line 7077: Pre cellboundary is %d
Line 7098: Pre cellboundary of MCG Stack (%d) is changed from %d to %d
Line 7100: Pre cellboundary of MCG Stack (%d) is %d
Line 7121: Pre cellboundary of SCG Stack (%d) is changed from %d to %d
Line 7123: Pre cellboundary of SCG Stack (%d) is %d
Line 7159: [4G_DRDS] SCG (%d) Difference of cellboundary is changed from %d to %d
Line 7161: [4G_DRDS] SCG (%d) Difference of cellboundary is %d
Line 7201: Difference of cellboundary is changed from %d to %d
Line 7203: Difference of cellboundary is %d
Line 7228: [OHE] Stack Status (%d to %d) => OHE_StackStatus[0][1] (%d, %d)
Line 7266: [DRX] Otherstack's CellBoundary: %d, Diff: %d
Line 7292: [DRX] Cellboundary: %d, Otherstack: %d, Diff: %d
Line 7320: [DSDS] curTimeTti(%d), curTimeOffset(%d)
Line 7321: [DSDS] time_diff(%d) blackout_time_tti(%d) blackout_time_mclk(%d) blackout_tti_mclk(%d) Updated_tti(%d), RFReleasePalTime(%d), RFGrantPalTime(%d)
Line 7325: [DSDS] RTG update Check!!! curTimeTti(%d), curTimeOffset(%d), Updated_tti(%d), Mclk(%d)
Line 7397: L1LC_DsdsMbmsReset
Line 7449: [DSDS]Dose not need to update ealry_pause_timer
Line 7464: [DSDS]calculated remaining_time was short(%d->500ms)
Line 7473: [DSDS]remaining_time(%d->%d),ca_deact_time(%d),type_4rx_deact_time(%d), gL1lc_DsdsDB.early_pause_duration(%u->%u)
Line 7478: [DSDS]DSDS_CA_count(%d)->(%d),DSSDS_4RX_count(%d)->(%d)
Line 7487: [DSDS]remaining_time was short(%d)
Line 7512: L1LC_ProcEdvRrmHoldMsg
Line 7524: [4G_DRDS] L1LC_ProcEdvRrmHoldMsg -PendingFromMeasReq[%d]!!!
Line 7530: [4G_DRDS] L1LC_ProcEdvRrmHoldMsg -IsDuringMeas[%d]!!!
Line 7536: [4G_DRDS] !!! pNextMeasElem is NULL !!!
Line 7568: [4G_DRDS] DrxConfirmInd: 4G_DRDS end, Reset CdrxRecoveryFlag(%d)
Line 7636: [4G_DRDS] DEACTIVATED From DR_State(%d) /SendRrmMeasScheduleInd ===
