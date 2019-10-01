Line 221: l1x_handle_sbcch_radio_link_loss : l1x_scell_sysinfo_error_cnt(%d)
Line 241: l1x_scell_sysinfo_error_cnt is set to 0 - #1
Line 250: GOOD SBCCH - error_cnt(%d)
Line 265: l1x_scell_sysinfo_error_cnt is set to 0 - #2
Line 275: Lost BCCH on Cell %d send MPH_NO_BCCH...
Line 294: Requesting SIM ID wrong. Check!
Line 311: Lost BCCH on SCELL %d send MPH_NO_BCCH...
Line 330: SBCCH to SIM %d 
Line 345: Requesting SIM ID wrong. Check!
Line 351: l1x_scell_sysinfo_error_cnt is set to 0 - #3
Line 366: Lost BCCH on Cell %d send MPH_NO_BCCH...
Line 385: Requesting SIM ID wrong. Check!
Line 428: SDCCH: l1x_sdcch_restart_meas_period - Reporting started
Line 440: SDCCH: l1x_sdcch_restart_meas_period - First Report available
Line 454: SDCCH: l1x_sdcch_restart_meas_period - New Report available
Line 460: TCH: Reporting Period Time restart -- ERROR: Not Available
Line 466: l1x_tch_restart_meas_period -- ERROR: Suspended
Line 472: l1x_tch_restart_meas_period -- ERROR: Validity = %d
Line 667: PCH BLOCK ID: Paging Group match
Line 672: PCH BLOCK ID: No Paging Group match
Line 689: PCH BLOCK ID: Paging Group match mfrm %d tdma_fn %d br_no %d
Line 694: PCH BLOCK ID: No Paging Group match mfrm %d tdma_fn %d br_no %d
Line 709: PCH BLOCK ID: Paging Group match mfrm %d tdma_fn %d
Line 714: PCH BLOCK ID: No Paging Group match mfrm %d tdma_fn %d
Line 722: PCH BLOCK ID: BS_PA_MFRMS 0
Line 729: PCH BLOCK ID: MARKING DISABLED
Line 766: Abn Fn %i Sec Scell Arrfcn %d Fn %d To %d Simno %d
Line 802: PCH BLOCK ID: Paging Group match
Line 807: PCH BLOCK ID: No Paging Group match
Line 818: PCH BLOCK ID: Paging Group match mfrm %d tdma_fn %d
Line 823: PCH BLOCK ID: No Paging Group match mfrm %d tdma_fn %d
Line 830: PCH BLOCK ID: BS_PA_MFRMS 0
Line 837: PCH BLOCK ID: MARKING DISABLED
Line 873: Requesting SIM ID wrong. Check!
Line 878: Send MPH_ERROR_IND to RR
Line 958: l1_scell.Simno[%d] to be checked
Line 963: ERROR!!!- dscCallbactFct is NULL!!!!!!!!
Line 972: Send Pending MPH_ERROR_IND 
Line 983: Avoid MPH_ERROR_IND in RACH
Line 1003: Requesting SIM ID wrong. Check!
Line 1012: send MPH_ERROR_IND
Line 1099: l1_scell.Simno[%d] to be checked
Line 1104: ERROR!!!- dscCallbactFct is NULL!!!!!!!!
Line 1113: Send Pending MPH_ERROR_IND 
Line 1140: Requesting SIM ID wrong. Check!
Line 1145: send MPH_ERROR_IND to Sec Scell
Line 1182: l1x_report_rxlev_meas called
Line 1185: Measurement Done posted from Tch act seq
Line 1198: l1x_report_rxlev_meas: l1_mode = L1_DEDICATED_MODE
Line 1203: l1x_report_rxlev_meas: l1_mode = L1_IDLE_MODE
Line 1218: [GL1 Error] Invalid meas_type (%d) 
Line 1264: send MPH_CCCH_IDLE_CON {%i} l1c_Idle_con_pending %d
Line 1291: Issue in sending MPH_CCCH_IDLE_CON {%i} to BOTH SIMl1c_Idle_con_pending %d CHECK!
Line 1302: softsum: Arfcn:%d, IDLE sfotsum(%d)
Line 1319: Issue in sending MPH_CCCH_IDLE_CON {%i} to BOTH SIMl1c_Idle_con_pending %d CHECK!
Line 1330: MetricScale: Arfcn:%d, IDLE MetricScale(%d)
Line 1347: Issue in sending MPH_CCCH_IDLE_CON {%i} to BOTH SIMl1c_Idle_con_pending %d CHECK!
Line 1354: Issue in sending MPH_CCCH_IDLE_CON {%i} l1c_Idle_con_pending %d
Line 1459: CNF_IMMED_ASSIGN send to Sim %d
Line 1464: CNF_IMMED_ASSIGN send to Sim %d
Line 1469: SIM ID wrong. Check!
Line 1485: CNF_ASSIGN send to Sim %d
Line 1490: CNF_ASSIGN send to Sim %d
Line 1495: SIM ID wrong. Check!
Line 1513: CNF_ASYNC_HO send to Sim %d
Line 1518: CNF_ASYNC_HO send to Sim %d
Line 1523: SIM ID wrong. Check!
Line 1545: CNF_HO_FAIL send to Sim %d
Line 1550: CNF_HO_FAIL send to Sim %d
Line 1555: SIM ID wrong. Check!
Line 1604: MPH_SYNC_HO_CON send to Sim %d
Line 1609: MPH_SYNC_HO_CON send to Sim %d
Line 1614: SIM ID wrong. Check!
Line 1674: [GL1 Error] Invalid handoverID (%d) 
Line 1684: L1F_HO_COM ID=%d {%i}
Line 1808: Skip SACCH/FACCH/SDCCH Tx. Dsl1RC Pause
Line 1815: Channel Type: %d
Line 1843: TX DATA on SIM1 %d PtData %d
Line 1852: TX DATA on SIM2 %d PtData %d
Line 1856: l1x_write_block invalid simno,PtData not set
Line 1892: Wrong SIM ID Check! 
Line 1925: Wrong SIM ID Check! 
Line 1935: queue L2 message on SDCCH
Line 1973: TX DATA on SIM1 %d PtData(l2_AssocSapi0Buffer) %d
Line 1978: TX DATA on SIM2 %d PtData(ds_l2_AssocSapi0Buffer) %d
Line 1982: l1x_write_block invalid simno,PtData not set
Line 1990: send meas report
Line 2000: send dummy meas report
Line 2008: l1x_write_block: reporting txpwr %d on SACCH
Line 2020: ** Tx channel error %d:%d
Line 2029: [GL1 Error] p_l2_msg NULL (%d) 
Line 2034: Tx %x %x %x %x FN%8lu
Line 2050: l1x_send_TA_ind() TX PWR : (%d) TA:%d 
Line 2067: Wrong Sim ID Check! 
Line 2099: Avg softsum for MPH_DATA_IND %d
Line 2127: Avg CI metric for MPH_DATA_IND %d
Line 2181: BPLMN IND : bcch_Read_reason Reset
Line 2184: l1c_bcch_read_reason (%d)
Line 2200: p_sync_info->RxLevel (%d)
Line 2226: RR_MSG_ENTITY %d 
Line 2231: DS_RR_MSG_ENTITY %d 
Line 2237: WRONG SIM ID.[%d] Check!! 
Line 2242: L1->RR:
Line 2300: ANR: Rxlev %d
Line 2320: Invalid sim no check!
Line 2326: MPH_NO_BCCH(%d) cause%d
Line 2404: >>>VAL pwr %d
Line 2444: >>>FULL softsum %d
Line 2466: >>>SUB softsum %d
Line 2528: [L1X_BurstUpdateTo]Accumulation[to_value = %d, to_count], timing_offset  = %d, weighting = %d
Line 2647: Rd%8x Wr %8x fct%8x
Line 2681: [CCH_result] chn type(%d), errorcnt(%d)
Line 2764: [GL1 Error] Invalid burst_no (%d) 
Line 2809: Rxlev reset in cch_burst_result_handler no use_power, ch_type %d
Line 2819: MMA METRICSCALE %d
Line 2826: MMA METRICSCALE %d
Line 2876: l1x_cch_burst_result_handler: Power:%d, Rxlev:%d (chan %d)
Line 2910: l1x_cch_burst_result_handler: skip (chan %d - PWRC %d hop %d ARFCN %d vs. BCCH Arfcn %d)
Line 2938: SCELL Rxlev Clr in cch_burst_result_handler , ch_type :%d
Line 2948: l1x_cch_burst_result_handler: Adding Rxlev :%d Burst_no :%d c_lev %d rxlev: %d 
Line 2970: l1x_cch_burst_result_handler: Adding Rxlev :%d
Line 3045: BAD SBCCH (%d) l1x_scell_sysinfo_error_cnt(%d) l1c_paging_parameters.bs_pa_mfrms(%d)
Line 3086: SBCCH to SIM %d 
Line 3095: GOOD SBCCH (%d) - SI Type[%d] l1x_scell_sysinfo_error_cnt(%d) l1c_paging_parameters.bs_pa_mfrms(%d) 
Line 3124: ERROR SBCCH (%d) code %d
Line 3130: *** ERROR lost serving cell 
Line 3171: EXT PCH was scheduled 
Line 3185: GOOD CCCH_R arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3213: BAD CCCH_R arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3313: l1x_hdl_pch: Sending PCH to both the SIM's as ccch_grp and pg_blk_idx matched
Line 3317: GOOD PCH_R dsc%d dsc_max%d Arfcn %d Fn %d TO %d SimNo %d
Line 3319: Prim ccch_type %d
Line 3335: BAD PCH_R arfcn:%d dsc:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3510: ERR: Sec SCELL update timer missed 
Line 3544: l1x_hdl_sec_pch: Sending PCH to both the SIM's as ccch_grp and pg_blk_idx matched
Line 3547: GOOD PCH_R l1x_dsc_sec_scell %d l1_dsc_max_sec_scell %d Arfcn %d Fn %d TO %d SimNo %d
Line 3549: Sec ccch_type %d
Line 3568: BAD PCH_R arfcn:%d l1x_dsc_sec_scell:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3603: SEC EXT PCH was scheduled 
Line 3648: GOOD EXT PCH_R l1x_dsc_sec_scell %d l1_dsc_max_sec_scell %d Arfcn %d Fn %d TO %d SimNo %d
Line 3650: Sec ccch_type %d
Line 3666: BAD PCH_R arfcn:%d l1x_dsc_sec_scell:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3725: GOOD CCCH_M arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3738: BAD CCCH_M arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3785: GOOD PCH_M dsc%d
Line 3799: BAD PCH_M arfcn:%d dsc:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3836: GOOD PCH_in52
Line 3854: BAD PCH_in52 arfcn:%d dsc:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3900: SACCH changed TA%1u P%2u {%8lu}
Line 3909: GOOD SACCH arfcn:%d rlc:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3915: GOOD SACCH(SDCCH) - NEW P:%d NEW TA:%d
Line 3931: l1x_handle_sacch: limited txpwr = %d, arfcn: %d
Line 3945: GOOD SACCH TA:%1u NEW P:%2d CUR P:%d
Line 3970: l1x_handle_sacch invalid simno, L1C_L2_PH_DATA_IND not sent
Line 4008: Requesting SIM ID wrong. Check!
Line 4025: BAD SACCH arfcn:%d rlc:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 4071: BAD SDCCH arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 4084: GOOD SDCCH arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 4117: l1x_handle_sdcch invalid simno, L1C_L2_PH_DATA_IND not sent
Line 4187: Error in sending CBCH IND %d
Line 4215: Error in sending CBCH IND %d
Line 4223: GOOD CBCH on TC%d A[0]=%d
Line 4236: BAD CBCH arfcn:%d TC:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 4305: Error in sending CBCH2 IND %d
Line 4334: Error in sending CBCH2 IND %d
Line 4339: GOOD CBCH2 on TC%d A[0]=%d
Line 4352: BAD CBCH2 arfcn:%d TC:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 4417: l1x_bch_burst_result_handler: Adding Rxlev :%d
Line 4427: SEC CELL MMA METRICSCALE %d
Line 4438: [GL1 Error] Invalid burst_no (%d) 
Line 4580: *** ERROR : 'nSynchGetEntryByArfcn()' function returns NULL
Line 4588: BCCH arfcn (%d) ncell_bcch_arfcn %d rxlev %d
Line 4593: **Dont process BCCH result
Line 4644: BAD NCELL SI data found in PTM
Line 4713: SI 13 not detected
Line 4722: Bad_SI_Cnt[%d] Good_Nbcch_Bad_Decode_Cnt[%d]
Line 4741: BAD NBCH arfcn:%d Extended ErrCnt:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 4753: Lost BCCH on %d sendng MPH_NO_BCCH
Line 4783: Anr Background? (%d) l1c_bcch_read_reason %d
Line 4802: Wrong Sim ID Check!
Line 4848: *** ERROR RR not stopping SI reading
Line 4869: GOOD NBCCH (%d) Err Cnt %d (%d) - SI Type[%d] Requested Sim [%d]  l1x_si_received_status = %d
Line 4889: GOOD NBCCH Not sent as Sync entry is not present 
Line 4940: ERROR NBCCH (%d) code %d
Line 4950: BAD NBCH arfcn:%d cause:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 4960: *** ERROR ncell not changed yet
Line 4965: *** ERROR lost near cell
Line 5050: EARLY PAUSE TIMER SENT: %d
Line 5062: L1F DSL1RC RESUME SENT: %d
Line 5088: l1x_report_rxlev_meas_second_scell 
Line 5093: l1x_report_rxlev_meas: l1_mode = L1_IDLE_MODE
Line 5099: [GL1 Error] l1x_report_rxlev_meas_second_scell: invalid meas_type (%d) 
