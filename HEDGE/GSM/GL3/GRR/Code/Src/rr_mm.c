Line 105: NoSvc variable is reset
Line 128: rr_CellInd->Lai %d %d %d %d %d
Line 134: RxLev(%d) rxev_min(%d) plmnState(%d)
Line 205: rr_ResumedForCsfbCall:%d NetworkMode:%d
Line 236: NwExtUtbf:%d
Line 307: GRR_MM_CELL_IND Type(%d) T3212(%d) Attach (%d) NMO(%d)
Line 335: Band is changed... Stored EST REQ is freed
Line 339: Band is changed during ReEst... Stored EST REQ is freed
Line 369: rr_MMPlmnFreqSearchMode to RR_FULL_SCAN_SEARCH
Line 426: Dtm: Indicate CellUpdateRequired %d 
Line 445: DTM: PacketServiceType %d
Line 454: GRR_MM_DEDI_CELL_IND LAI(%x %x %x %x %x)
Line 486: GRR_MM_INITIAL_PLMN_CNF:Fail
Line 534: INITIAL_PLMN_CNF:Success -> Scell Lai(%x,%x,%x,%x,%x)
Line 590: GRR_MM_NO_CELL_IND
Line 696: Release to MM (Cause:%x)
Line 706: GRR=>GRR_MM_REL_CNF
Line 752: GRR=>GRR_MM_REL_IND
Line 763: GRR=>GRR_MM_ABORT_IND (%d)
Line 1222: GRR_MM_PAGE_IND (Cause:%d Identity:%d)
Line 1351: rr_HandlePagingReq: Paging for Serv Cell PseudoLength(%d) 
Line 1369: Skipped P1 Rest Octets:  pktPagingInd1:%d,  pktPagingInd2:%d
Line 1385: Handling PCK_NOTI
Line 1429: rr_HandlePagingReq: IMSI matched 
Line 1450: CS paging for us - send Paging Indication to GMM 
Line 1500:   P-TMSI matched
Line 1632:  Error Possible with MobId[0] :%d 
Line 1773: Dummy PACKET PAGING REQUEST MSG for PRIVACY at BT
Line 1839: EST_REQ RecSysInfo = 0x%x/  rr_SI1_needed = 0x%x
Line 1845: Store EST_REQ - Waiting for Idle Cnf
Line 1979: GRR_MM_EST_REQ(TypReq %x) - rr_State : 0x%x
Line 1988: Check DSRC state to know if CS EST is possible 
Line 1993: WAIT for SRRC gran to proceed with NAS signaling 
Line 2008: rr_NewIdleToL1 & Store EST_REQ - Delayed for REEST, rr_IdleReqState:%d
Line 2015: Stop Old Reselection and start Reselection due to Re-estb
Line 2037: Store EST_REQ - Waiting for Idle Cnf
Line 2049: Store EST_REQ - Waiting for Cell Cnf
Line 2059: Store EST_REQ -rr_PostReselFailReadNBCCH  is set %d
Line 2072: Store EST_REQ - Cell Reselection in progress (Reason %d)
Line 2111: EST_REQ - CCO (%d) or IRAT (%d) in progress:Type (%d) 
Line 2116:  Go EST_REQ - though PCCO not cleared
Line 2134: Store EST_REQ - Delayed for REEST
Line 2144: EST_REQ RecSysInfo = 0x%x rr_SI1_needed = 0x%x
Line 2158: Store EST_REQ - Need SI
Line 2246:  Clear  rr_BcchReadArfcn in EST REQ (%d)
Line 2355: No LAU
Line 2375: CellSelec: SRCH CMPLTD
Line 2418: REORG Mode Avoid DSRC to go to IDLE after CELL RSP
Line 2706: Dedi: Bar the ARFCN received from NAS: %d
Line 2739: Bar the ARFCN received from NAS: %d
Line 2886: GRR_MM_UPD_FLAI_LIST_REQ : %d
Line 2965: MPH_STOP_NC_MEAS_REQ
Line 3025: [CandSrch] rr_RecGmmAssignReq: TlliType(%d) 
Line 3078: GRR_GMM_START_DRX_REQ
Line 3101: Partial Search will be performed in PTM
Line 3105: rr_AttachCompleted -- UARFCN_SCAN_TRIGGERED
Line 3115: UARFCN_SCAN_TRIGGERED SKIPPED % %
Line 3142: GRR_GMM_STOP_DRX_REQ
Line 3149: Suspend Acquisition Guard Timer
Line 3156: Start SysGuardTimer
Line 3177: GRR_MM_INIT_REQ Src:%x
Line 3265: BPLMN: GRR_MM_BACKGND_TIMER_IND. Sleep_Time=%ld ms, Start_Time = %ld 
Line 3298: BPLMN:Error:NonDrx CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d) AttachInProg(%d)
Line 3319: BPLMN:Error: BPLMN State Mismatch!
Line 3371: GRR_MM_DRX_UPD_REQ in invalid state, IdleReqState:%d
Line 3381: BPLMN:Error:NonDrx CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d) AttachInProg(%d) AccInProg(%d) DlTbfProc(%d)
Line 3390: rr_WaitIdleCnfForImmResel is TRUE, Donot handle UPD DRX REQ
Line 3411: WAIT for SRRC response
Line 3449: BPLMN: Wait for IDLE_CNF
Line 3460: rr_NewIdleToL1 rr_IdleReqState:%d
Line 3503: BPLMN: Unexpected BACKGND_START_IND from MM
Line 3514: BPLMN: GRR_MM_BACKGND_START_IND: Sleep_Time:%ld, Start_Time=%ld
Line 3520: BPLMN:Error: RR state is NOT RR_RAT_SUSPEND_NULL!
Line 3528: BPLMN:Error:! Waiting for SUSPEND_CNF!
Line 3541: BPLMN:Error: Unexpected Error!
Line 3559: BPLMN:Error:!Invalid BPLMN State
Line 3608: BPLMN: Sleep_Time (%ld)ms
Line 3636: BPLMN: RR_BPLMN_DRX_TIMER rem_time (%d)milli s
Line 3653: BPLMN: RR_BPLMN_DRX_TIMER rem_time (%d)
Line 3702: BPLMN: Sleep_Time (%ld)ms
Line 3714: BPLMN: RR_BPLMN_DRX_TIMER rem_time (%d) ms
Line 3724: BPLMN:Error: Unexpected Error! 
Line 3748: BPLMN: GRR_MM_BACKGND_STOP_REQ
Line 3781: SI2qInd: %d <-Org %d
Line 3788: SI2qInd: NeededSI
Line 3796: SI2qInd: %d
Line 3828: GRR_MM_MODE_UPDATE_IND: EPD_Mode Changed from %d to %d
Line 3832: EDP mode is Hedge or Multimode:%d
Line 3838: LTE Support is  set by EPD, rr_EutranMeasCtrlFromLte:%d made TRUE
Line 3843: LTE Support is reset by EPD, rr_EutranMeasCtrlFromLte:%d made FALSE
Line 3878: Warning! rr_ServCell=NULL
Line 3911: Warning! rr_ServCell=NULL
Line 3945: GRR_MM_LCS_FREQ_AID_REQ start =%d
Line 3988: GRR_MM_SRVCC_HO_CNF cause (%d)
Line 4020: SRVCC Req TO GSM %d
Line 4081: candidateCellInfo afcPdm(%d)
Line 4084: candidateCellInfo[%d] band(%d) arfcn(%d) bsic(%d) fn(%d) qb(%d) net_fn(%d)
Line 4096: HO cell found in candidateCellInfo[%d], put it in MPH_MULTICTX_REQ
Line 4106: SRVCC HO from LTE  Arfcn:%d, rr_BandInd:%d, rr_band_type:%s
Line 4122:  IR HO Inconsistant BANDs
Line 4200: AfterTimeHopStatus(0x%x)/ BeforeTimeHopStatus(0x%x)
Line 4218: Ciphering Change on new channel
Line 4246: Non Synch Handover
Line 4252: Synch Handover
Line 4258: Pseudo Synch Handover
Line 4259: RTD = %d
Line 4265: Pre Synch Handover
Line 4288: SYNC with VCG
Line 4302:  IR HO Message error
Line 4313:  IR HO Hopping list error
Line 4323:  IR HO Cell creation error
Line 4333:  IR HO Cell creation error
Line 4343:  IR HO Message type not valid
Line 4355:  IR HO Empty GSM message
Line 4359:  IR HO GSM message pointer is NULL
Line 4386: GRR_MM_HANDOVER_TYPE_IND (%d)
Line 4408: Send MM GRR_MM_CGI_HOLD_IND
Line 4435: Send MM GRR_MM_CGI_STOP_CNF ANR Rxlev %d
Line 4457: MM_GRR_CGI_STOP_REQ: STOP ANR : ANR Ongoing (%d) 
Line 4462: Anr: RR state is NOT RR_RAT_SUSPEND_NULL!
Line 4470: Anr: ANR procedure was already stopped. Send confim now
Line 4488: MPH_SUSPEND_RAT_REQ 
Line 4492: MPH_SUSPEND_RAT_REQ already sent. Avoid sending another Req
Line 4518: Anr: MM_GRR_START_CGI_IND: Sleep_Time:%d
Line 4522: Anr: RR state is NOT RR_RAT_SUSPEND_NULL!
Line 4537: Anr Error  Waiting for SUSPEND_CNF
Line 4547: BckGrndMode Anr/BPLMN:Error: Unexpected Error!
Line 4558: BckGrndMode Anr/BPLMN:Error:!Invalid BPLMN State
Line 4567: Anr Sleep_Time (%d)
Line 4572: BckGrndMode Anr/BPLMN: Sleep_Time Less than %d: Not enough
Line 4607: BckGrndMode Anr/BPLMN:Error: Unexpected Error! 
Line 4641: CS Signalling Start, This ILM is not used
Line 4646: rr_GrrStartDsSignaling: Signaling Type %d, rr_DsdsNasSignalingOngoing[StackId] : %x
Line 4651: PS/IMS NAS SIG is triggered from MM
Line 4664: PS Signalling start, Resume RLC
Line 4708: CS Signalling Start, This ILM is not used
Line 4713: rr_GrrStopDsSignaling: typeofproc %d, rr_DsdsNasSignalingOngoing : %x
Line 4720: CS Signalling Stop, ILM is not used
Line 4737: Moving SRRC state to PS DATA  after PS NAS SIG Completion
Line 4742: SIG STOP received in rr_State(%d)
Line 4747: Suspend RLC/MAC, NAS signaling is ended
Line 4752: SIG END received in Idle State
Line 4794: rr_GrrHandlePsSupportInd: PsSupported: %d
Line 4814: rr_GrrHandlePsSupportInd: PsSupported: %d
Line 4822: PS Service Disabled, Suspend RLC/MAC
Line 4827: Invalid Case: PS Support True came when GRR already on C-Tran mode
Line 4832: PS Service (%d) received in RR State (%d) rr_RlcSuspensionState (%d), rr_RlcSuspensionState (%d)
Line 4838: Resume RLC after DSDS Suspend 
Line 4857: rr_GrrPsSupportedFlag == TRUE so set rr_GPRSSvcAllowed (%d)
Line 4874: rr_GrrPsSupportedFlag == FALSE so set rr_GPRSSvcAllowed (%d)
Line 4895: QRB: GRR_MM_QRB_MODE_IND(rr_QrbState Old %d New %d)
Line 4906: QRB: Reject! QRB START recieved in RACH failure
Line 4922: QRB: Dtm release is ongoing %d
Line 4934: QRB: Reject! QRB START recieved in invalid state %d
Line 4948: QRB: QRB STOP recieved in invalid state %d
Line 4953: QRB: Ingnore! Same QRB_MODE comes
Line 4991: QRB: Send GRR_MM_QRB_ABORT_IND(rr_QrbState %d)
Line 5023: QRB: rr_QrbEutranSacnStatus (%d)
Line 5057: QRB: Not initiated
Line 5077: GRR_MM_UPDATE_DUPLEX_MODE_IND(%d->%d)
Line 5096: GRR_MM_POWER_OFF_IND
Line 5185: Invalid Band in function: rr_SendMmSupportBandListInd
Line 5207: Send GRR_MM_SUPPORT_BAND_LIST_IND(%d %d)
Line 5218: [CandSrch] rr_SemRecCandRplmnScanRsp: Result(%d)
Line 5233: [CandSrch] rr_SendCandRplmnScanReq rr_State(%d)
Line 5241: [CandSrch] GuardT(%d), PeriodicT(%d), NAS Reg(%d) rr_state(%d)
Line 5243: [CandSrch] NeedSI2Q(%d), RxSI2Q(%d), EPD(%d) Earfcn cnt(%d)
Line 5250: [CandSrch] Abort: EPD:%d
Line 5255: [CandSrch] Abort: GRR_MM_DRX_UPD_REQ in invalid state, IdleReqState:%d
Line 5260: [CandSrch] Abort: PLMN:Error:NonDrx CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d) AttachInProg(%d) AccInProg(%d) DlTbfProc(%d)
Line 5272: [CandSrch] Abort: rr_InterRatStatus = %d
Line 5278: rr_ResumedForCsfbCall set, RPLMN SCAN not required
Line 5283: [CandSrch] No 4G Info in Si2Q Complete Set.. 
Line 5290: [CandSrch]  4G Info Present in Si2Q Complete Set.. Reset timers 
Line 5321: GRR_MM_BATT_CAPACITY_SET_REQ battCapacity = %d
