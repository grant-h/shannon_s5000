Line 93: CbchState:ON=>REQUIRED due to removing serv cell
Line 129: MPH_INIT_REQ : rr_PurgeSyncRequired(%d)
Line 162: invalid FreqPosition + rr_FreqPos_offset : %d
Line 179: Parallel ARFCN: %d, SYNC_REQ_SENT
Line 189: ARFCN: %d, sync_status(%d)!=SYNC_REQ_PENDING, max_arfcn_try:%d 
Line 198: Parallel ARFCN: %d, CELL_NOT_SUITABLE_FOR_SYNC_REQ
Line 236: Pause cell selection. rr_State(%d)
Line 332: Abort PLMN List Req Done: Received Power Rsp
Line 359: New Plmn Search Handle: Received Power Rsp
Line 384: DSDS busy Stop CELL SEL:Exit 
Line 389: Abort Received Power Rsp...
Line 394: rr_TriggerRxlevReqCounter(%d) 
Line 400: rr_MaxPlmnSearchFailCounter(%d) 
Line 408: Trigger rr_NoCellToMM 
Line 417: Start Trigger RXLEV REQ AGAIN timer
Line 426: DSDS BUSY: During Discrete Cell Search
Line 453: rr_band_type_local=%s
Line 457: CellSelec:ERROR: Invalid rr_band_type_local
Line 465: BPLMN: MPH_RXLEV_CON came for Background: rr_band_type_local %s
Line 469: BPLMN:Error: Invalid rr_band_type_local
Line 480: BPLMN RSSI SCAN Reject, RssiRetryTime(%d), rem_time(%d) 
Line 500: (rem_time < (MIN_BPLMN_SLEEP_TIME_REQUIRED_FOR_POWER + MIN_GRR_GL1_ILM_DELAY))
Line 509: BPLMN:Error: Rxd MPH_RXLEV_CON in wrong BPLMN state
Line 543: BPLMN:Error: MPH_RXLEV_CON in Unexpected State
Line 554: ERROR RtkGetMemory returned NULL
Line 574: CellSelec: Warning Memory Leak: rr_PowerMsg:%x
Line 582: ERROR RtkGetMemory returned NULL
Line 682: Idx %d: Arfcn %d, RxLev %d, LowPrio %d 
Line 706: BPLMN: Foreground BCCH made as not ongoing for ARFCN %d
Line 749: SIDatabase: Matched Cell is in best cell %d
Line 754: SIDatabase(%d): Matched Cell (%d) Rxlev (%d) within 15dB of BestCellRxLev
Line 761: SIDatabase(%d): Matched Cell (%d) Rxlev (%d) ignored since more than 15dB less than BestCellRxLev
Line 806: cell_idx:%d ARFCN: %d
Line 819: Try Arfcn %d
Line 851: SIDatabase: Saved Cell is in best cell %d
Line 855: SIDatabase: Best Cell available (%d), RxlevLast best cell (%d)> 20
Line 856: SIDatabase: Saved Cell (%d), Rxlev (%d)
Line 925: Skip ARFCN(%d) after Immediate Reselection
Line 971: Resume CellSelection from last cell position mode(%d)
Line 978: Wrong FreqPos in CellSelection %d
Line 984: Last Serv Cell %d, rr_LastServArfcn.Cnt %d, rr_TryCampingToLastServCell %d
Line 997: Cell available (%d), Rxlev cell (%d)
Line 1003: Last Serv Cell is in best cell %d
Line 1010: Best Cell available (%d), RxlevLast best cell (%d)> 20
Line 1011: Last registered Serv Cell (%d), Rxlev (%d)
Line 1021: Last Reg Serv Cell rxlev is very less compared to best cell available
Line 1025: Last Serv Cell is in best cell %d
Line 1031: Last Serv Cell weak cell %d, rxlev %d
Line 1043: Total %d ARFCNs tried, MaxAllowed %d
Line 1053: BAND Not Supported by Operator : ARFCN(%d)
Line 1076: Arfcn %d not tried, Total (%d) ARFCNs , RxlevOk(%d), LowPrio (%d),InBA (%d), HC (%d)
Line 1107: Wait timer is still active : Restart Selection (%d)
Line 1123: L2G Redir Failed
Line 1220: CellSelec:ERROR: Invalid State Change  %s => %s
Line 1261: CellSelec:Warning: OngoingBand %s, but rr_BandInd %d changed! Restart
Line 1385: CellSelec: Wait for Suspend Cnf
Line 1450: rr_QuickSearch %d: PlmnSearchReq again with Full scan
Line 1476: rr_CellSelection: Mode %d
Line 1485: Avoid SRRC check in cell Sel
Line 1493: Cell Selection can not be proceed
Line 1524: ---> START CELL SELECTION <---
Line 1534: CellSelec: SRCH CMPLTD
Line 1571: CellSelec: SRCH CMPLTD
Line 1604: CellSelec: SRCH CMPLTD
Line 1647: CellSelec: SRCH CMPLTD
Line 1675: CellSelec: SRCH CMPLTD
Line 1704: PLMN re-selection
Line 1779: CellSelec:ERROR: Invalid request
Line 1810: CellLocking: rr_BandInd %d
Line 1811: CellLocking: %d %d
Line 1876: CellSelec: Band switched
Line 1888: rr_BandInd is changed to %d at 2nd stage
Line 1960: CellSelec: Try to select a low priority cell
Line 1977: CellSelec: No low priority cell to search
Line 1983: CellSelec:ERROR: Invalid state
Line 2005: TMOUSA: Make 900 Band Low Priority than 1900, 850
Line 2053: CellLocking: Add BA for %d
Line 2067: rr_FullBa, rr_FirstPLMNSelection %d rr_SimPresent[StackId] %d
Line 2081: Take SIM BA list(USIM):
Line 2096: Take SIM BA list:(SIM)
Line 2115: Take Last Registered BA list:
Line 2136: Take full BA list
Line 2144: Take stored PLMN BA list:
Line 2146: rr_FirstPLMNSelection %d rr_SimPresent %d
Line 2159: Take SIM BA list(USIM):
Line 2170: Add SIM BA list:
Line 2188: Take Last Registered BA list:
Line 2211: rr_FullBa
Line 2216: MRU: Add MRU[0]: %d
Line 2236: MRU: rr_LastServArfcn Fce(%d)
Line 2245: MRU: Stored Cell Search Error, rr_LastServArfcn.Cnt is %d 
Line 2261: STORED_CELL_SEARCH: There's no Stored Ba for both stage
Line 2267: STORED_CELL_SEARCH: There's no Stored Ba for 1st stage
Line 2273: STORED_CELL_SEARCH: There's no Stored Ba for 2nd stage
Line 2279: STORED_CELL_SEARCH: There's no Stored Ba
Line 2287: FULL_SCAN_EXCLUDING_STORED_CELL_SEARCH: There's no stored Ba to inverse
Line 2291: FULL_SCAN_EXCLUDING_STORED_CELL_SEARCH: Inversing Stored BA mode
Line 2315: MRU: rr_UpdateLastServArfcn
Line 2332: MRU: rr_UpdateLastServArfcn Remove it from the list
Line 2351: MRU: rr_LastServArfcn.Cnt = %d
Line 2371: MRU: rr_UpdateLastServArfcnForHplmn
Line 2388: MRU: rr_UpdateLastServArfcn Remove it from the list
Line 2407: MRU: rr_LastServArfcn.Cnt = %d
Line 2510: CellSelec:ERROR: Invalid request
Line 2574: CellSelec:ERROR: Invalid TryCellPriority %d
Line 2584: CellSelec:ERROR: Invalid NbLowCell %d
Line 2593: CellSelec:ERROR: Invalid Index %d
Line 2674: CellSelec:rr_State %s rr_CellSelState %s Mode %d 
Line 2692: CellSelec: InverseBa(%d) PlmnListReq(%d)
Line 2694: CellSelec: OngoingBand(%s) SwitchBand(%s) BandInd(%d)
Line 2717: AddLowPrioCell:%d
Line 2733: LowPrioCell:%d
Line 2831: EqPlmn --> LowPriority !!
Line 2893: BPLMN: RR_BPLMN_DRX_TIMER rem_time (%d)micro s
Line 2900: BPLMN: Sleep Time %d less than MIN_BPLMN_SLEEP_TIME_REQUIRED_FOR_BCCH %d
Line 2923: BPLMN: reset: FrgrndBcchOngoing ARFCN %d
Line 2935: BPLMN: ServCell SI 2Q read later, to allow BPLMN
Line 2940: BPLMN: rr_BPlmnNextBcchReq: ret: FrgrndBcchOngoing ARFCN %d
Line 2969: ResumeFromLastArfcnIndex: %d
Line 2982: Retry Same Band Again for missed BCCH: AttemptNum(%d)
Line 3010: ResumeFromLastArfcnIndex: %d
Line 3057: BPLMN: RR_BPLMN_MAX_ARFCN_TRY %d tried!
Line 3065: BPLMN: CurrentIndex:%d > NbFreq:%d !
Line 3082: BPLMN: Try Arfcn %d Rxlev %d, total tried:%d
Line 3105: BPLMN: Ignored because not in Search List: ARFCN %d!
Line 3109: BPLMN: Ignore Arfcn %d Rxlev %d
Line 3184: PLMN ID:%x %x %x Missing! Add ARFCN:%d in band:%d into List
Line 3242: BPLMN: FB-SB Failed in ARFCN %d with sleep time %d ms
Line 3250: BPLMN: ARFCN %d SYNC NOT acquired: %d 
Line 3255: BPLMN: ARFCN %d SYNC ACQUIRED: %d 
Line 3271: BPLMN: ARFCN SYNC FOUND. Retry to maximum 5 times. %d has been stopped %d times
Line 3279: BPLMN: SYNC ARFCN %d has been stopped %d times, attmepting next 
Line 3304: Function: rr_FilteringNon2GCell num Cells %d
Line 3311: CELL(ARFCN %d, %ddBm) => isValid2G(%d), isValid3G(%d)
Line 3320: CELL(ARFCN %d, %ddBm) => Non 2G signal
Line 3331: CELL(ARFCN %d, %ddBm) => Non 2G signal
Line 3340: Filtered cell is exist. Sorting again!!
Line 3364: FilteringAdjacentArfcnSideLobe num Cells %d
Line 3373: CELL(ARFCN %d, %ddBm) => SideLobe of CELL(ARFCN %d, %ddBm)
Line 3383: CELL(ARFCN %d, %ddBm) => SideLobe of CELL(ARFCN %d, %ddBm)
Line 3389: CELL(ARFCN %d, %ddBm) => SideLobe of CELL(ARFCN %d, %ddBm)
Line 3399: CELL(ARFCN %d, %ddBm) => SideLobe of CELL(ARFCN %d, %ddBm)
Line 3426: Function: rr_UseBandModeGsm900
Line 3479: Function:rr_UseBandModeGsm850
Line 3522: Function:rr_UseBandModeDcs1800
Line 3565: Function:rr_UseBandModePcs1900
Line 3609: Function:rr_UseBandModeGsm900_1800
Line 3715: Function:rr_UseBandModeGsm900_850
Line 3820: Function:rr_UseBandModeGsm900_1900
Line 3924: Function:rr_UseBandModeGsm850_1800
Line 4019: Function:rr_UseBandModeGsm850_1900
Line 4114: Function:rr_UseBandModeGsm900_850_1800
Line 4255: Function:rr_UseBandModeGsm900_850_1900
Line 4328: TMOUSA: Make 900 Band Low Priority than 1900, 850
Line 4437: 3G filtering Index(%d ~ %d) ARFCN(%d ~ %d): ARFCNs are not consecutive, exit filtering process
Line 4470: 3G filtering Index(%d ~ %d) ARFCN(%d ~ %d): mean %d , exit filtering process
Line 4494: 3G filtering Index(%d ~ %d) ARFCN(%d ~ %d): mean %d, variance %d
Line 4520: Idx %d: Arfcn %d, RxLev %d
Line 4554: rr_PlmnState %d
Line 4555: Mark 3G filtering result for BPLMN searching
Line 4601: ResumeFromLastArfcnIndex: %d->Reset CurrentIndex:%d
Line 4646: BPLMN: Delete Arfcn %d from rr_BPlmnCurrentBaList[StackId]
Line 4657: Idx %d: Arfcn %d, RxLev %d, rr_IsFceInBa %d
Line 4675: BPLMN: Trying all Failed Cells in current Band Again
Line 4699: BPLMN: CurrentIndex%d, Sorted %d frequencies using ARFCN, Reg.BPLMN_ARFCN_Jump_Val:%d Used:%d
Line 4708: BPLMN: Try Same ARFCN: with index:%d cause:%d
Line 4879: BPLMN: CurrentIndex:%d, MinWindowIndex:%d MaxWindowIndex:%d IsDirectionForward:%d
Line 4903: rr_ReArrangePowerScanResults: rr_LastCampedCell (%d)
Line 4917: rr_ReArrangePowerScanResults: Re-arrange RSSI SCAN results not required
