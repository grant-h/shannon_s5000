Line 44: MM has registered on an EMERGENCY cell!!!
Line 48: SIM not read - IGNORE!!!
Line 167: rr_EndRegNOK: rr_RegRes_WaitPLMNSearch is Set 
Line 411: REG IND
Line 565: <Selected LAI %x %x %x %x %x> 
Line 569:  <Current  LAI %x %x %x %x %x> 
Line 605: <Selected Plmn %x %x %x> - <Current  Plmn %x %x %x> 
Line 629: <Eq Plmn %x %x %x> - <Current  Plmn %x %x %x> 
Line 699: Forbidden LA for roaming!
Line 753: Latin
Line 774: Chn
Line 811: Frequency Scan Mode (Bandmode : 850/900/1900)
Line 816: Frequency Scan Mode (Bandmode : 850/900/1800)
Line 867: GRR_MM_PLMN_SEARCH_REQ: %x %x %x and HPLMN %x %x %x
Line 896:  Sim Flag is Set (%d) ServThresh(%d)
Line 901:  Sim Flag is Not Set (%d)
Line 932:  Sim Flag G2T Set (%d)
Line 938:  Sim Flag G2T Not Set (%d)
Line 947: SIM Status(%d), AnyPlmn(%d)
Line 980: Non Emerg PLMN requested without SIM
Line 987: Dedicated mode - reject PLMN search req
Line 994: RR_WPLMN_LIST - reject PLMN search req
Line 1004: CellLocking: Enabled
Line 1011: rr_MMPlmnFreqSearchMode: RR_STORED_CELL_SEARCH
Line 1014: rr_MMPlmnFreqSearchMode: RR_FULL_SCAN_EXCLUDING_STORED_CELL_SEARCH
Line 1017: rr_MMPlmnFreqSearchMode: RR_FULL_SCAN_SEARCH
Line 1027: rr_QuickSearch: ManualSelection
Line 1033: rr_QuickSearch %d: RR_STORED_CELL_SEARCH
Line 1037: %x %x %x %d
Line 1057: IRAT Resel In Progress - Wait for SUSP_CON before sending PLMN search Fail
Line 1159: rr_AbortSearchStatus(%d) 
Line 1164: Hold PLMN SEARCH: ABORT_LIST_REQ_AND_PLMN_REQ_DURING_WPOWER
Line 1169: Hold PLMN SEARCH: RR State is WPOWER
Line 1195: GRR_MM_RESEL_HOLD_REQ
Line 1208: IRAT Resel In Progress - Wait for SUSP_CON before sending RESEL_HOLD_CNF
Line 1238: GRR_MM_RESEL_HOLD_CNF
Line 1268: GRR_MM_PLMN_LIST_REQ: Background PLMN Search
Line 1273: GRR_MM_PLMN_LIST_REQ: Foreground PLMN Search
Line 1304: IdleReq pending, stop the timer before FG MPLMN starts
Line 1317: Dedicated mode - reject PLMN list req
Line 1328: Ignore PLMN List Req while already doing one!!!
Line 1344: IRAT Resel In Progress - reject PLMN List req
Line 1402: PLMN with  PLMN id (0x%x)
Line 1423: Hold PLMN LIST REQ: ABORT_LIST_REQ_AND_PLMN_REQ_DURING_WPOWER
Line 1458: GRR_MM_PLMN_LIST_ABORT_REQ, wait for Power Resp
Line 1466: GRR_MM_PLMN_LIST_ABORT_REQ, Move to Resume-Null
Line 1489: Invalid state - ignore PLMN list abort req
Line 1542: Add PLMN to PLMN list: %x %x %x
Line 1603: Detected Band List %d %d
Line 1607: GRR_MM_PLMN_LIST_IND to MM
Line 1648: GRR_MM_PLMN_LIST_IND to MM during IRAT Proc
Line 1689: GRR_MM_PLMN_SEARCH_FAIL_IND
Line 1759: ListSize: %d
Line 1762: RequestedPlmnId: %x %x %x
Line 1767: GRR_MM_NO_CELL_IND
Line 1777: 2G Out of service event occurred
Line 1801: PlmnState %s->%s
Line 1808: SelectPlmn 0x%x 0x%x 0x%x
Line 1838: PLMN selection complete
Line 1872: CellSelec: SRCH CMPLTD
Line 1892: PLMN selection complete -> ON ANY
Line 1899: PLMN selection complete -> ON PLMN
Line 1937: BPLMN:Check ScellLai to rr_BPlmnListElem 
Line 1941: BPLMN:Add ScellLai to rr_BPlmnListElem 
Line 2003: BPLMN DS: Skip 1800 band: ScellBand(%s), BandInd(%d)
Line 2008: BPLMN DS: Skip 1900 band: ScellBand(%s), BandInd(%d)
Line 2033: rr_BplmnBandScanStatus: 850:%d 900:%d 1800:%d 1900:%d Ongoing:%s
Line 2065: BPLMN: <LIST REQ from MM> BPlmnDb %d
Line 2066: BPLMN: rr_PlmnListReq: SearchType %d, SingleRatSearch %d, PlmnReqForOldList %d
Line 2090: ReqBandNum = 0xFF send GRR_MM_PLMN_LIST_IND without search
Line 2097: BPLMN:Error: ReqBand - Invalid Band Requested
Line 2118: BPLMN:Error:NonDrx CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d) AttachInProg(%d) AccInProg(%d) DlTbfProc(%d)
Line 2135: rr_WaitIdleCnfForImmResel is TRUE, Donot handle PLMN LIST REQ
Line 2145: WAIT for SRRC response
Line 2159: BPLMN Proc allowed
Line 2165: Bplmn request for Inactive rat, No DSRC grant required!!!
Line 2181: BPLMN:Error: Already BPLMN ongoing!!
Line 2248: rr_band_type:%s rr_BandInd:%d
Line 2254: BPLMN: Wait for IDLE_CNF
Line 2265: rr_NewIdleToL1 rr_IdleReqState:%d
Line 2280: Peer Stack is on 2G DATA, suspend data before BPLMN starts
Line 2294: BPLMN:Error: Unexpected Error! 
Line 2351: Detected Band List %d %d
Line 2357: GRR_MM_PLMN_LIST_IND to MM
Line 2404: ANR:MM_GRR_PREPARE_CGI_REQ from MM
Line 2408: Anr Error: in wrong state
Line 2422: CGI Parameters arfcn(%d) band_ind(%d) NCC (0x%x) BCC (0x%x) 
Line 2450: rr_band_type:%s rr_BandInd:%d
Line 2456: ANR:Error: Unexpected Error! 
Line 2503: rac present:%x, arfcn value:%d, band indicator:%x, 
Line 2504: ncc:%x, bcc:%x, rac:%x, 
Line 2505: lac:%x, cgi_cell_id:%x
Line 2506: plmnid[0]:%x, plmnid[1]:%x, plmnid[2]:%x, 
Line 2509: GRR_MM_CGI_INFO_IND to MM
Line 2566: BPLMN:PlmnListInd.Cause(%d)!
Line 2575: GRR_MM_BACKGND_PLMN_LIST_FAIL_IND to MM
Line 2591: GSM_PLMN_list_count(%d) StartBPlmnlistValidTimer
Line 2632: BPLMN: Acquired PLMN ID!: %x %x %x
Line 2640: BPLMN: Comparing PLMN from LIST: %x %x %x
Line 2650: BPLMN: Requested BPLMN Id Found!: %x %x %x
Line 2704: BPLMN: Add PLMN to PLMN list: %x %x %x Arfcn:%d Rxlev:%d
Line 2742: ERROR  RtkGetMemory returned NULL in rr_SetBplmnArfcnListToMM
Line 2752: Send Bplmn GSM cell to MM Count:%d, Arfcn %d, BandType %s
Line 2777: rr_InitBplmnArfcnListToMM
Line 2818: BPLMN: Update PLMN to PLMN list: %x %x %x Arfcn:%d RxLev:%d
Line 2863: In BPlmnDb, ARFCN:%d, Is Arfcn-Bsic Entry Found:(%d)
Line 2986: BPlmnDb: Arfcn(%d) Bsic(%x) Age(%d) Plmn(%x %x %x) Band(%d)
Line 3036: BPLMN:Age of ARFCN(%d) Bsic(%d) Plmn(%x %x %x) expired
Line 3059: BPLMN DB has no more elements left
Line 3086: BPLMN: GRR_MM_ABORT_BACKGND_PLMN_LIST_REQ
Line 3094: BPLMN: Inactive 2G Bplmn was Running. Stopping BPLMN ! 
Line 3125: BPLMN:Error: BPLMN not Running, but got ABORT!
Line 3153: BPLMN:Error: Unexpected Error! 
Line 3188: BPLMN: GRR_MM_ABORT_BACKGND_PLMN_LIST_CNF to MM
Line 3243: Stop BPLMN as Other stack is Busy
Line 3267: rr_StopBPlmnProcedure
Line 3273: BPLMN: Inactive 2G Bplmn was Running. Stopping BPLMN ! 
Line 3321: BPLMN:Error: Unexpected Error! 
Line 3363: BPLMN:Error: Invalid state. Already state changed to other state when timer expired
Line 3368: BPLMN: Already Suspend Sent, ABORT Rxd:%d
Line 3414: BPLMN: Already Suspend Sent, ABORT Rxd:%d
Line 3425: BPLMN:Error:!Invalid BPLMN State
Line 3484: MissedBand: Scan Done rr_band_type=%s
Line 3492: BPLMN: 2G SingleRatSearch Done
Line 3532: BPLMN: rr_BPlmnResume
Line 3544: rr_band_type:%s rr_BandInd:%d
Line 3601: BPLMN:Error:  Unexpected
Line 3629: rr_CbchState:%d
Line 3654: rr_CbchState:%d
Line 3666: CbchState:=> CBCH is STOPPED_DURING_BPLMN
Line 3693: BPLMN: SI 1 DecodedCellChnDesc
Line 3745: BPLMN: rr_SyncCellList.Lai(%x,%x,%x,%x,%x) Arfcn:%d
Line 3753: SyncCell Contains Same LAI as SCell:  0x%x 0x%x 0x%x
Line 3762: Arfcn:%d has Valid LAI, Remove from BPLMN Search
Line 3771: NCell Contains Invalid LAI:  0x%x 0x%x 0x%x
Line 3919: BPLMN: rr_State: %x rr_BPlmnState: %s: 
Line 3923: BPLMN: rr_State: %x rr_BPlmnState: %s: 
Line 3969: BPLMN:ERROR: Invalid status
Line 4024: BPLMN:ERROR: Invalid status
Line 4047: BPLMN: BplmnListSize %d
Line 4054: BPLMN: Received PLMN from LIST: %x %x %x
Line 4068: BPLMN: BplmnListSize is ZERO
Line 4073: BPLMN: ReqBandNum %d
Line 4083: BPLMN: ReqBand %d: %s
Line 4097: BPLMN: ReqBand %d %d
Line 4107: Existing HPLMN  0x%x 0x%x 0x%x
Line 4117: PLMN not valid 
Line 4121: New  HPLMN  0x%x 0x%x 0x%x
Line 4127: GRR_MM_UPDATE_ACTING_HPLMN_REQ : ActHplmnValid (%d) 
Line 4133: GRR_MM_UPDATE_ACTING_HPLMN_REQ : %x %x %x
Line 4143: Active HPLMN Param is absent  (%d) 
Line 4182: Invalid FreqBand(%d) in function: rr_UpdateDetectedBandMask
