Line 401: l1c_set_bsic_acq_target: starting sync on ARFCN %d when acquiring sync for ARFCN %d
Line 484: pch_tgl_conflict check %d
Line 518: PScell start_fn %d toggle_fn_51 %d status_flag %d
Line 554: schedule PCH2 1 frm before
Line 578: SScell start_fn %d toggle_fn_51 %d status_flag %d
Line 586: Recheck conflict: pch_tgl_conflict check %d
Line 620: PScell start_fn %d toggle_fn_51 %d status_flag %d
Line 738: TGL-CBCH 1 overlap detected 
Line 745: TGL-CBCH 1 overlap : CBCH1 not present 
Line 772: TGL-CBCH 2 overlap detected 
Line 780: TGL-CBCH2 overlap : CBCH2 not present 
Line 869: pch_abs_fn %d scell_pch_fn51 %d
Line 913: abs_fn_scell_pch_wrt_primary %d sec_scell_pch_fn51 %d
Line 966: prim_scell_tc %d sec_scell_tc %d
Line 973: PCH RR same TC & MF
Line 982: PCH RR diff TC & same MF
Line 990: PCH RR same TC & MF
Line 998: l1c_prim_pg_fn51 %d  l1c_sec_pg_fn51 %d
Line 1010: PCH RR Prim Before Sec
Line 1024: PCH RR sec before prim
Line 1038: PCH RR prm sec same fn
Line 1053: PCH RR Prim Before Sec
Line 1066: PCH RR Sec before Prim
Line 1085: pch_rr_required %d
Line 1193: scheduling PCH1 %d Simno %d pg_blk_tdma_fn %d
Line 1351: SEC SCELL PCH ABS FN %d , %d 
Line 1367: scheduling PCH2 %d %d pg_blk_tdma_fn %d page2_tdma_fn %d
Line 1372: SCELL2 not camped %d %d
Line 1482: scheduling PCH1 %d %d pg_blk_tdma_fn %d
Line 1489: Primary Scell Not present
Line 1594: DRX:Swap Secondary PCH Delayed: %d
Line 1630: SEC SCELL PCH ABS FN %d , %d 
Line 1644: scheduling PCH2 %d %d pg_blk_tdma_fn %d page2_tdma_fn %d
Line 1651: SCELL2 not camped %d %d
Line 1724: CBCH supported fn=%d
Line 1765: CBCH not supported d%d s%d
Line 1771:  CBCH1: Wrong primary serving cell simno %d
Line 1808: CBCH2 supported fn=%d TS= %d
Line 1849: CBCH2 not supported d%d s%d cbch2-ts%d
Line 1855:  CBCH2: Wrong secondary serving cell simno %d %d
Line 2139: l1c_listen_to_full_cch(%d)
Line 2151:  l1x_scell_sysinfo_error_cnt set to %d
Line 2216: l1c_listen_to_full_cch grant
Line 2221: l1c_listen_to_full_cch reject
Line 2287:   Same Cell :l1_scell.arfcn %d  p_l1_passive_chn_data->cell_params[l1c_processing_sim].cell_desc.bcch_carrier %d
Line 2301:   New Cell :l1_scell.arfcn %d l1_scell.simno %d  p_l1_passive_chn_data->cell_params[%d].cell_desc.bcch_carrier %d  l1_new_scell.simno %d
Line 2362: l1c_restart_idle_task {%i}
Line 2529: l1c_restart_idle_task_from_pbcch {%i}
Line 2648: l1c_camp_on_new_cell(%d) {%i}
Line 2671: S: RESEL :l1_new_scell.arfcn %d  l1_new_scell.Simno %d
Line 2676: *** ERROR : 'nSynchGetEntryByArfcn()' function returns NULL
Line 2864: l1c_swap_on_new_cell  FROM:Arfcn(%d) Simno(%d) TO:Arfcn(%d) Simno(%d) Frame{%i}
Line 2958: l1c_idle_req_processing_sim ->%d
Line 3060: l1c_abort_pccch_and_restart_idle_task(%d)
Line 3084: Reselection [%d->%d]
Line 3090: PBCCH deact
Line 3094: Same Cell
Line 3259: L1cAbortTransferAndRestartIdleTask(%d)
Line 3397: l1c_stop_si_reading {%i}
Line 3418:  is_page_params_valid[0] %d is_page_params_valid[1] %d index %d 
Line 3424: Restart periodic task for primary SIM 
Line 3428: periodic task  restart issue CHECK!  %d
Line 3560: l1c_stop_current_activity {%i}
Line 3613: l1c_find_sb(%d) {%i}
Line 3637: SCELL Present
Line 3716: Data ongoing Inc FB/SB interval
Line 3735: Toggle job found updated offset to %d
Line 3755: Frame offset %d gap_mfrm_offset %d
Line 3792: FB/SB sync already in queue
Line 3814: Synch Already present (%d) {%i}
Line 3820: SCELL Not present, FB/SB scheduled parallely
Line 3866: SCELL Not present
Line 3882: SCELL Not present: l1c_nsynch_cell.arfcn %d
Line 3903: l1c_find_sb_reject (requestreponse=%d) Insert l1x_dsl1rc_resource_request ofs(%d)
Line 3990: skip Initial FB/SB due to IRAT
Line 4017: l1c_find_sb_grant(requestreponse=%d) ofs(%d) nfrm(%d)
Line 4024: l1c_find_sb_grant(requestreponse=%d)
Line 4045: l1c_find_sb_reject (requestreponse=%d) Insert l1x_dsl1rc_resource_request ofs(%d)
Line 4114: l1c_find_sb_for_blind_ho(%d) {%i}
Line 4142: Adding Tcell into MMA list during blind HO (%d)
Line 4311: Ext Pg already in queue {%i}
Line 4314: l1c_read_ext_paging {%i}
Line 4360: l1c_job51_ext_pch_seq SKIP - l1c_specific_pag_mfrm (%d) tdma_fn(%d) pg_blk_tdma_fn(%d) l1x_toggle_pending(%d)
Line 4420: l1c_read_sec_ext_paging {%i}
Line 4445: DRX: EXT-PCH2 Secondary PCH Delayed: %d
Line 4488: EXT PCH2: scell_abs_fn %d frm_offs %d pch_abs_fn %d tdma_fn %d
Line 4506: l1c_job51_ext_pch2_seq SKIP - l1c_specific_pag_mfrm (%d) tdma_fn(%d) pg_blk_tdma_fn(%d) l1x_toggle_pending(%d)
Line 4646: l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d
Line 4681: l1c_check_nbcch_pg_conflict: SI requested:0x%x
Line 4719: PG conflict with SI 3
Line 4734: PG conflict with SI 4 (%x)
Line 4741: PG conflict with SI 78
Line 4748: PG conflict with SI 13
Line 4755: PG conflict with SI 13Ext
Line 4759: NO SI's conflict with PCH1 
Line 4842: Sec Scell Asn Fn=%d ,ncell_abs_fn=%d ncell_sec_scell_fn_offset %d
Line 4852: l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d SScell fn %d
Line 4869: l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d
Line 4909: l1c_check_nbcch_sec_pg_conflict: SI requested:0x%x
Line 4945: PG conflict with SI 3
Line 4960: PG conflict with SI 4 (%x)
Line 4967: PG conflict with SI 78
Line 4974: PG conflict with SI 13
Line 4981: PG conflict with SI 13Ext
Line 4985: NO SI's conflict with PCH2 
Line 5021: l1c_read_ncell_si_cont: Read NCell Arfcn:%d
Line 5032: *** ERROR wrong NBCCH req
Line 5042: cell(%d) to %d fo %d bsic %d
Line 5056:  l1x_bcch_ncell_info.sync_info_required(%d)
Line 5150: [GL1 Error] ERROR WRONG BCCH TYPE (%d)
Line 5156: Primary Paging Parameters: ag_blks:%d, pa_mfrm:%d, ccch_grp:%d, page_group:%d, page_block_index:%d
Line 5163: Secondary Paging Parameters: ag_blks:%d, pa_mfrm:%d, ccch_grp:%d, page_group:%d, page_block_index:%d
Line 5238: schedule NBCCH 1 frm before
Line 5297: Primary scell CONFLICT CHECK 
Line 5308: Secondary scell CONFLICT CHECK 
Line 5319: BPLMN NBCCH  CONFLICT CHECK with PCH1 & PCH2 
Line 5331: BPLMN NBCCH  CONFLICT CHECK : TRUE 
Line 5335: BPLMN NBCCH  CONFLICT CHECK : FALSE SIM1(%d) SIM2(%d)
Line 5414: Parallel l1c_read_ncell_si_cont: Read NCell Arfcn:%d
Line 5427: *** ERROR wrong NBCCH req
Line 5440: cell(%d) to %d fo %d bsic %d
Line 5462: [GL1 Error] l1c_si_num_sch (%d) l1c_si_schedule.A[%d].bcch_type (%d)
Line 5477: Parallel Ncell: Paging Parameters: ag_blks:%d, pa_mfrm:%d, ccch_grp:%d, page_group:%d, page_block_index:%d
Line 5522: schedule NBCCH 1 frm before for Parallel Ncell
Line 5643: Multiple BCCH read requested in PTM [%d] %d
Line 5651: Multiple BCCH read requested in PTM [%d] %d
Line 5695: schedule NBCCH 1 frm before
Line 5727: si_abs_fn: %d qb_offset_bch_start: %d
Line 5735: l1c_read_si_in_ptm: Read Arfcn:%d
Line 5746: BCCH read cannot be done now %d
Line 5751: disabled through bch read in PTM registry
Line 5801: BCCH on sim %d not allowed as BCCH already happening on %d
Line 5874: l1c_read_scell_si_cont {%i}
Line 5893: *** ERROR bcch_read_reason(%d) for SCELL(%d)
Line 5903:  l1x_bcch_ncell_info.sync_info_required(%d)
Line 5912: l1c_si_num_sch %d bcch_type %d  bs_ag_blks_res %d
Line 6122: l1c_start_idle_mode(%d) {ARFCN: %d FN %i-> ARFCN: %d FN: %i}
Line 6148: PCCCH_TO_CCCH current scell(%d)->new scell(%d)
Line 6194: RESEL :l1_new_scell.arfcn %d  l1_new_scell.Simno %d
Line 6199: *** ERROR : 'nSynchGetEntryByArfcn()' function returns NULL
Line 6289: CELL_SWAP : l1_new_scell.arfcn %d  l1_new_scell.Simno %d
Line 6294: *** ERROR : 'nSynchGetEntryByArfcn()' function returns NULL
Line 6301: SWAP_SIM2_TO_SIM1 l1_new_scell.Simno %d
Line 6308: SWAP_SIM1_TO_SIM2 l1_new_scell.Simno %d
Line 6563: l1c_start_idle_mode_from_pbcch {%i->%i}
Line 6622: l1c_start_pg_reorg {%i}
Line 6840: l1c_update_ba_list(mode :%d) {%i}
Line 6845: Not yet camp on a cell
Line 6877: l1c_serve_cb
Line 6981: l1c_start_periodic_tasks(%d) {%i}
Line 7119: l1c_skip_cbch StopReq %d
Line 7152: CBCH prio changed
Line 7198: CBCH2 prio changed
Line 7219: Wrong Processing Sim: %d
Line 7292: CBCH slot not matching Byte Pos %d, bit Pos %d
Line 7352: Next CBCH: After %d ms 
Line 7389: l1c_start_cbch_drx
Line 7525: Configuring DRX mode for Inactive 3G BPLMN scan 
Line 7594: MPH_BPLMN_SYNC_IND  %d   %d
Line 7625: BPLMN Stopped: Avoid SYNC_IND
Line 7656: ERR: Wrong SimNo
Line 7663: ERR: Wrong SimNo
Line 7696: BPLMN Stopped: Avoid SYNC_IND
Line 7766: MPH_SYNC_IND  %d   %d
Line 7791: Dummy MPH_SYNC_IND for fastSync %d %d
Line 7916: Data ongoing skip FB/SB here
Line 7921: Full Idle Static: skip FB/SB here
Line 7926: UMTS State:%d 
Line 7934: IRAT SCAN REQ in Queue. Restrict FB/SB
Line 7941: FB_SB going on for BCCH read ARFCN
Line 7966: l1c_schedule_bplmnsearch
Line 7974: l1c_read_ncell_si_cont_parallel_bplmnsearch: invalid Bplmn ncell
Line 7980: l1c_read_ncell_si_cont_parallel_bplmnsearch: NO Bplmn ncell SI to read
Line 8000: BPLMN ncell arfcn not there in nCellSynchRep table
Line 8010: Ongoing BPLMN FB/SB search ARFCN(%d) cleared
Line 8110: IDLE mode restart on new primary Scell %d
Line 8131: L1F RACH REQ restart on secondary Scell SIM %d
Line 8142: GL1_Pause_Duration %d otherclient_RequestReason is %d
Line 8172: RESUME RSSI SCAN : IS_cellsearch_PAUSE = FALSE
Line 8180: DSL1RC RESUME in DRX 
Line 8184: RESUME RSSI SCAN : IS_cellsearch_PAUSE = FALSE
Line 8191: DO NOTHING FOR DSL1RC RESUME
Line 8227: PAUSE already in queue
Line 8278: PAUSE TRANSFER STATE: %d
Line 8290: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 8307: PAUSE Done will be sent aft %d Frames
Line 8320: Skip sending pause_done as supend procedure ongoing 
Line 8370: PAUSE in WAIT State: FrmOff: %d
Line 8388: PAUSE Non DRX
Line 8399: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 8404: PAUSE DONE : G2T||G2U Irat measurement going on
Line 8416: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 8423: PAUSE DRX %d
Line 8476: PAUSE already in queue
Line 8502: PAUSE TRANSFER STATE
Line 8522: PAUSE TRANSFER WAIT: %d
Line 8534: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 8563: Skip sending pause_done as supend procedure ongoing 
Line 8613: PAUSE in WAIT State: FrmOff: %d
Line 8629: PAUSE Non DRX
Line 8641: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 8647: PAUSE DONE : G2T||G2U Irat measurement going on
Line 8659: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 8666: PAUSE DRX %d
Line 8746: GL1_DSL1RC: previous frame lost %d
Line 8753: Too Early to pause =%d
Line 8792: StartEarlyPauseTime timeduration=%d, currentTime=%d currentState %d Frames to Pause =%d
Line 8826: IsPsPsEnabled = %d resume_ready_count = %d
Line 8888: Arfcn: %d DSDS Cause = %d
Line 8902: Requesting SIM ID wrong. Check!
Line 9000: l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d
Line 9018: l1c_check_nbcch_pg_conflict: SI requested:0x%x
Line 9038: PG conflict with SI 3
Line 9046: PG conflict with SI 4 (%x)
Line 9050: NO SI's conflict with PCH1 
Line 9096: Sec Scell Asn Fn=%d ,ncell_abs_fn=%d ncell_sec_scell_fn_offset %d
Line 9106: l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d SScell fn %d
Line 9123: l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d
Line 9150: l1c_check_nbcch_sec_pg_conflict: SI requested:0x%x
Line 9170: PG conflict with SI 3
Line 9178: PG conflict with SI 4 (%x)
Line 9182: NO SI's conflict with PCH2 
Line 9200: Set l1c_rachPrepStatus %d
