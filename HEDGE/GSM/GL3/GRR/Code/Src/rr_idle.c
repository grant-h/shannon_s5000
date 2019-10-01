Line 81: Allow NCell SI to be Read
Line 93: !!!SI Read In Action Doesn't Match!!!SIQ Freq(%d) Recv Freq(%d)
Line 99: SI for wrong cell
Line 108: PSI not SI expected
Line 138: Unsolicited SCell Read
Line 147: Unsolicited NCell Read
Line 152: Proceeding to read only NCell SI
Line 267: MPH_NO_BCCH - ARFCN:%d Cause:%d Background_Read : %d, Rxlev : %d
Line 280: MPH_NO_BCCH - ARFCN:%d Cause:%d
Line 341: LTE_Meas Ongoing at GL1, Pend STOP_BCCH READ %d
Line 376: ARFCN: %d CONFLICT_PACCH_TX %d, retry BCCH_READ again
Line 397: LTE_Meas Ongoing at GL1, Pend BCCH READ %d
Line 449:  !!!Wrong entry in SyncCellList
Line 507: NO BCCH Recieved for wrong Cell (%d) , send BCCH again for (%d) sent (%d)
Line 548: DSDS busy Stop Cell Resel on Cell (%d)
Line 583: RLC is not resumed as GPRS is OFF
Line 600: DSDS L1 busy Avoid cell handicap  on Cell (%d)
Line 641: DSDS busy Stop Cell Resel on Cell (%d)
Line 675: RLC is not resumed as GPRS is OFF
Line 686: DSDS busy Avoid cell handicap and N2F  on Cell (%d)
Line 751: LTE_Meas Ongoing at GL1, Pend SCELL BCCH READ for %d Seconds
Line 805: Stop BCCH READ REQ timer for cell search if running
Line 819: MPH NO BCCH with DSDS error received for Arfcn (%d), Start timer to retry BCCH READ.
Line 825: NO BCCH with DSDS Error received in W-IdleCnf State, no need to pause cell selection
Line 869: !!! SyncErr %x on ServCell during NON DRX, set rr_WaitIdleCnfForImmResel and triggered IDLE REQ to GL1
Line 879: !!! SyncErr %x on ServCell : Immed Resel
Line 886: DSDS Error received: ServCell(%d), NeededSI(%x)
Line 899: MPH_NO_BCCH received: Cell(%d), cause(%x)
Line 906: !!! SyncErr %x on ServCell during rr_WaitSiAfterResel, SingleSim(%d)
Line 922: DSDS Error received: ServCell(%d), NeededSI(%x)
Line 932: DSDS Error received on Cell(%d), NeededSI(%x)
Line 944: !!! SyncErr %x on ServCell : Stay  on Scell
Line 957: BPLMN: Foreground NO_BCCH %d RXVD. BPLMN BCCH Can be resumed
Line 963: BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
Line 976: BPLMN: Foreground NO_BCCH %d RXVD. BPLMN RXLEV Can be resumed
Line 1025: Immediate Assigment Ext
Line 1029: Immediate Assigment Normal
Line 1036: Immediate Assigment Length Error %d
Line 1047:  Decode Error
Line 1069:  Extended, Request Reference 2
Line 1077:  Extended, Request Reference 1
Line 1086:  Normal, Request Reference 1
Line 1094:  After time Freq Hopping
Line 1104:  No after time CA FH failed
Line 1117:  No after time Freq lists FH failed
Line 1125:  After time Freq lists OK
Line 1144: IA_RO[0] %x Len %d
Line 1158: rr_use_compressed_IRAT_HO_INFO %d
Line 1162: IA_RO Absent
Line 1168: FreqLen: %d / IA_RO[%d]: %x 
Line 1170: rr_use_compressed_IRAT_HO_INFO %d
Line 1183:  BeforeTime FreqHop IA
Line 1189:  No BeforeTime FreqHop
Line 1219: Channel Count %d
Line 1225:  Hopping error - Number of Frequencies is 0
Line 1232: Channel List %d 
Line 1261:  AfterTimeHopStatus(0x%x), BeforeTimeHopStatus(0x%x)
Line 1289:  Storing default val Channel_Information.ChanDescr for as 0xFF RequestRefNum (0x%x)
Line 1301:  Storing default val Channel_Information.ChanDescrfor as 0xFF RequestRefNum (0x%x)
Line 1308:  Storing default val Channel_Information.ChanDescrfor as 0xFF RequestRefNum (0x%x)
Line 1336:  ImmASS: MPH_IMMED_ASSIGN_REQ
Line 1342:  Hopping error
Line 1392: MPH_ERROR_IND(cause %d)
Line 1403: MPH_ERROR_IND received for wrong cell(ARFCN %d), rr_ServCell (%d)
Line 1426: Resel In Prog
Line 1453: !!! DSF during full CCCH listening: set rr_WaitIdleCnfForImmResel and triggered IDLE REQ to GL1 in 2G/2G
Line 1477: MPH_ERROR_IND with invalid cause %d
Line 1505:  Need SI1
Line 1555: rr_HandleIdleCnfPreEmption Error # Waiting for IDLE CNF 
Line 1591: SCell is Handicapped! Trigger Resel
Line 1701: GRR: MPH_[P]CCCH_IDLE_CNF
Line 1707: L1 unable to process IDLE REQ
Line 1719: DL TBF is On, avoid sending IDLE REQ again
Line 1726: L1 reject IDLE REQ - Peer Stack ARFCN is same as requested ARFCN
Line 1764: rr_ReselHoldforIdleCnf - Start  RESEL
Line 1784: rr_WaitIdleCnfForImmResel %d - Start IMM RESEL
Line 1805:  Invalid rr_WaitIdleCnfForImmResel cause
Line 1815: Idle Cnf received after PCCO Fail, Start RESEL to %d
Line 1910: RLC is not resumed as GPRS is OFF
Line 1933: Calling Process Reselection after Dedicated state
Line 1983: CCCH_IDLE_REQ in Bad Channel
Line 2029: MPH_START_NC_MEAS_REQ
Line 2052: RESEL from UTRAN Complete - IdleCnf
Line 2074: DTM: rr_SetDTMAccessStatusToRlc(T)
Line 2080: ACESS IND not sent (%d) (%d)
Line 2090: Needed PSI(0x%x)
Line 2096: No Needed PSI
Line 2579: ## SICell ## %d
Line 2580: rr_GPRSReadSIFlag=%x
Line 2625: ## Ignore!! Sys Read Req for S cell Needed SI ## 0x%x
Line 2632: Status msg already in progresss
Line 2708: NCELL to be schd for BCCH %d bsic %d neededSI 0x%x
Line 2719: NCELL NOT schd for BCCH %d bsic %d neededSI 0x%x
Line 2738: #ACTUAL NCELL to be schd for BCCH %d bsic %d Rx level %d neededSI 0x%x
Line 2764: NO NCELLs to be schd for BCCH in PTM
Line 2790:  Clear N rr_BcchReadArfcn  (%d)
Line 2802:  Clear S rr_BcchReadArfcn  (%d)
Line 2841: Send Pening  CELL Ind to MM
Line 2848: CSend Pening  CELL Ind to MM ....... For CS Path
Line 2875: Earlier PendedMsgByLteMeas:%d BcchArfcn:%d StopBcchArfcn:%d
Line 2967: PendedMsgByLteMeas:%d BcchArfcn:%d StopBcchArfcn:%d
Line 2989: rr_WaitRecoveryFromDSF(%d)
Line 3026: Rxd MPH_NO_BCCH
Line 3033: MPH_NO_BCCH - ARFCN:%d Cause:%d Bckgnd %d)
Line 3038: ANR: Rxlev %d
Line 3048: BPLMN: BPlmnResultToMmPending, ignoring Msg
Line 3055: BPLMN:Error: Rxd MPH_NO_BCCH in not IDLE state, stop BPlmn procedure
Line 3063: BPLMN:  L1_CAUSE_BPLMN_NOT_IN_IDLE_STATE: Stop BPLMN: L1 Cause:%d)
Line 3074: BPLMN:Error: BPLMN not Running, but got MPH_NO_BCCH!
Line 3085: BPLMN: Arfcn:%d was expected. Ignore NO_BCCH)
Line 3089: BPLMN: rr_BPowerMsg is NULL!)
Line 3102: BPLMN:Error: BCCH_READ for BPLMN failed L1_CAUSE_FN_OFFSET_CHANGE, send BCCH_READ again
Line 3118: BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
Line 3136: BPLMN:Error: BCCH_READ for BPLMN & PAGE READ conflict! Ignoring NO_BCCH, let BCCH_READ proceed 
Line 3154: BPLMN: Include Retrylist due to ARFCN %d! Rxlev %d in Thresh
Line 3158: BPLMN: Not retry due to ARFCN %d! Rxlev %d not in Thresh
Line 3173: BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
Line 3185: BPLMN:Error: Unexpected Error! 
Line 3207: ***ERROR*** Debug this: NO_BCCH in WIDLE_CNF
