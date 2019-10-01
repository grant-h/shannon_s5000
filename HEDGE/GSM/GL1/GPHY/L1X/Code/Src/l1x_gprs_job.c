Line 336: *** ERROR cease job. id=%d
Line 362: check_current_job
Line 369: Running Job %s (prio:%d) Disallow JOB %s (prio:%d)
Line 380: Running Job %s (prio:%d) Disallow JOB %s (prio:%d)
Line 425: check_future_job
Line 429: [DBG] action_list_sel (%d)
Line 490: JOB skip : L1X_JOB51_CBCH found but, run %s
Line 496: JOB skip : L1X_JOB51_CBCH found Don't run %s
Line 524: JOB skip : %s found, so can't run %s
Line 528: Future Job %s found but, run %s
Line 544: JOB skip : %s found, so can't run %s
Line 548: Future Job %s found but, run %s
Line 569: JOB skip : %s found, so can't run %s
Line 590: JOB skip : %s found, so can't run %s
Line 594: Future Job %s found but, run %s
Line 610: JOB skip : %s found, so can't run %s
Line 614: Future Job %s found but, run %s
Line 629: JOB skip : %s found, so can't run %s
Line 650: JOB skip : %s found, so can't run %s
Line 726: RdmRndRbn: L1X_JOB51_PCH1 found in PCH2, conflict count %d
Line 730: RdmRndRbn: L1X_JOB51_PCH found but, run PCH2
Line 736: RdmRndRbn: L1X_JOB51_PCH found and, run PCH1 
Line 742: RdmRndRbn: Wrong New job %s
Line 752: RdmRndRbn: L1X_JOB51_PCH2 found in PCH1, conflict count %d
Line 756: RdmRndRbn: L1X_JOB51_PCH2 found but, run PCH1
Line 762: RdmRndRbn: L1X_JOB51_PCH2 found and, run PCH2 
Line 768: RndRbn: Wrong New job %s
Line 773: Default case idx1 %d newJob %d 
Line 783: JOB skip : L1X_JOB51_CBCH found but, run %s
Line 876: JOB skip : %d now running, so can't run %d
Line 889: JOB skip : %d now running, so can't run %d
Line 899: Low prio Running Job %s (prio:%d) Disallow JOB %s (prio:%d)
Line 928: JOB skip : %d(51) or %d(52) found, so can't run %d
Line 966: SI skip {%d}
Line 1022: Current Possible SI (0x%x, 0x%x ) 
Line 1029: Serving Cell SI occurence seen during parallel read
Line 1053: Normal SI skip {%d} expected TC 0x%x, bcch_type 0x%x
Line 1059: Extended SI skip {%d} expected TC 0x%x, bcch_type 0x%x
Line 1110: read status %x  SI type %d
Line 1119: No Neighbor Cell SI Occurence at %d 
Line 1124: No Neighbor Cell SI to be Read 
Line 1132: No Serving Cell SI to Read 
Line 1169: read status %x  SI type %d
Line 1178: No Neighbor Cell SI Occurence at %d 
Line 1183: No Neighbor Cell SI to be Read 
Line 1191: No Serving Cell SI to Read 
Line 1235: *** ERROR invalid PPG params 2
Line 1243: Adjust PPG mfrm(%d)
Line 1603: check_valid_cbch_ps: check_fn(%d) last_tc3_fn(%d)
Line 1674: check_valid_cbch2_ps: check_fn(%d) last_tc3_fn(%d)
Line 1851: Enter BSIC reconf job Sim1State(%d), Sim2State(%d)
Line 1856: skip BSIC reconf due to pending toggle
Line 1892: Skip scheduling of Ncell FB search in IDLE_RECONF dispatcher in stationary: Sim1Static(%d), Sim2Static(%d)
Line 1900: skip BSIC reconf due to IRAT
Line 1929: FB/SB decode scheduled after Paging
Line 1933: l1c_fb_sb_arfcn = %d  l1c_fb_sb_scheduled = %d
Line 1952: BSIC reconf job required GSM:%d Umts:%d Lte:%d
Line 1960: IRAT meas skipped for BPLMN
Line 2009: Schedule PCH JOb extention %s
Line 2035: BSIC reconf delayed to FN %d
Line 2096: Toggled Job pending - SKIP ENTER SYNC NCELL
Line 2100: Enter: l1x_enter_sync_ncell_seq (%d)
Line 2106: skip Sync ncell  due to IRAT G2X or X2G FN: %d
Line 2125: delay NCELL SYNC(%d)
Line 2142: High priority job %d pending
Line 2173: SYNC_NCELL Job Found - Cur job id: %d future job id: %d
Line 2202: Toggled Job pending - SKIP SYNC NCELL
Line 2262: Fn_offset %d job_index %d priority %d
Line 2279: SYNC_NCELL delayed - Future Job: %d @ %d
Line 2356: Current FN %d DRX half length %d ncell sync schedule_fn %d
Line 2402: delay NCELL SYNC(%d)
Line 2407: delay NCELL SYNC(%d)
Line 2430: DUMMY_JOB %d
Line 2485: quit JOB(%d,%d,%d) for toggling
Line 2522: Enter: JOB51_SBCCH 
Line 2533: Toggled FOR RA/SWAP Job pending - SKIP SBCCH 
Line 2539: skip l1x_job51_Sbcch due to IRAT
Line 2633: JOB51_SBCCH %i
Line 2679: Enter: JOB51_EXT_SBCCH 
Line 2686: Toggled FOR RA Job pending - SKIP SBCCH 
Line 2692: skip l1x_job51_Ext_Sbcch due to IRAT
Line 2787: JOB51_EXT_SBCCH %i
Line 2825: Set RF release counter %d, idx %d
Line 2858: DSL1RC release seq is added after %d frame
Line 2880: l1x_send_rf_init_seq is added after %d frame
Line 2921: Enter: JOB51_PCH %d Rcnt %d
Line 2928: Toggled FOR RA Job pending - SKIP NBCCH 
Line 2934: skip l1x_job51_pch due to IRAT
Line 2949: **PCH JOB SKIP** Due to DL assignment  %d
Line 2969: invalid PG params 1
Line 2994: RRR_PCH_Parm: PCH1 cur_mfrm %d
Line 3001: PG mfrm not matched, CurMrfm: %d SpecificMrfm: %d 
Line 3030: RRR_PCH_Parm: cur_mfrm_prim %d, cur_mfrm_sec %d pch_rrr_required %d
Line 3044: **PCH JOB SKIP** Due to Job Idx:  %d
Line 3055: TP: granted %d distance %d
Line 3060: granted %d distance %d
Line 3090: **PCH JOB SKIP** Due to Job Idx:  %d
Line 3161: **PCH JOB SKIP** Due to Job Idx:  %d
Line 3270: JOB51_PCH %i
Line 3302: DSL1RC resrouce release for PCH is skipped for truncated paging
Line 3475: Enter: JOB51_PCH2 %d
Line 3479: skip JOB51_PCH2 due to IRAT
Line 3503: invalid PG params 1
Line 3508: [GL1 Error] invalid PG params (%d)
Line 3514: **PCH2 JOB SKIP** Due to DL assignment  %d
Line 3526: RRR_PCH_Parm: PCH2 cur_mfrm %d
Line 3533: PG mfrm not matched, AbsFn:%d CurMrfm: %d SpecificMrfm: %d 
Line 3560: RRR_PCH_Parm: cur_mfrm_sec %d, cur_mfrm_prim %d pch_rrr_required %d 
Line 3573: **PCH2 JOB SKIP** Due to Job Idx:  %d
Line 3582: granted %d distance %d
Line 3616: **PCH2 JOB SKIP** Due to Job Idx:  %d
Line 3673: **PCH2 JOB SKIP** Due to Job Idx:  %d
Line 3682: **PCH2 JOB SKIP** Due to Job Toggle for RA
Line 3715: JOB51_PCH2 %i Sec Scell %d 
Line 3779: skip JOB51_EXT_PCH2 due to IRAT
Line 3799: EXT SEC PCH JOB MFRM %d Not Matching
Line 3823: **EXT SEC PCH NOT ENABLED**
Line 3841: **EXT PCH JOB SKIP** Due to Job Idx:  %d
Line 3861: **EXT PCH JOB SKIP** Due to Future Job Idx:  %d
Line 3876: **PCH2 JOB SKIP** Due to Job Toggle for RA
Line 3925: JOB51_EXT_PCH2 %i
Line 3988: Enter: JOB51_EXT_PCH %d
Line 4016: Toggled FOR RA Job pending - SKIP NBCCH 
Line 4028: skip l1x_job51_pch due to IRAT
Line 4059: **EXT PCH NOT ENABLED**
Line 4079: **EXT PCH JOB SKIP** Due to Job Idx:  %d
Line 4124: Skip scheduling SYNC_NCELL_BCCH
Line 4139: JOB51_EXT_PCH %i
Line 4191: Enter: JOB51_NBCCH %d Prio(%d)
Line 4197: **Dont schedule BPLMN-NBCCH when 3G DRX timer is expired.
Line 4204: Toggled FOR RA Job pending - SKIP NBCCH 
Line 4210: skip l1x_job51_nbcch due to IRAT
Line 4250: No SyncInfo %i
Line 4259: skip l1x_job51_nbcch(BPLMN) due to no SYNC INFO
Line 4269: NBCCH SI map check in L1_NCELL_PARALLEL_READ
Line 4278: NBCCH SI map check in BPLMN
Line 4300: NBCCH SI map check:  si_grant = %d
Line 4346: check grant for JOB51_NBCCH Low priority SI
Line 4365:  SKIP NBCCH due to JOB PCH1/2 / EXT_PCH1/2 found : grant status lowprio si %i JOB = %d
Line 4384:  SBCCH skipped for NBCCH(reselection)
Line 4388:  job_index %d 
Line 4436: check grant for JOB51_NBCCH
Line 4498: JOB51_NBCCH skip for second future job
Line 4513: JOB51_NBCCH skip for toggle(%d) at %d
Line 4594: JOB51_NBCCH %i
Line 4650: Enter: JOB51_EXT_NBCCH %d Prio(%d)
Line 4657: Toggled FOR RA Job pending - SKIP NBCCH 
Line 4663: skip l1x_job51_Ex_nbcch due to IRAT
Line 4680: EXT_NBCCH SI map check in L1_NCELL_PARALLEL_READ
Line 4689: NBCCH SI map check in BPLMN
Line 4711: EXT_NBCCH SI map check:  si_grant = %d
Line 4761: check grant for JOB51_EXT_NBCCH Low priority SI
Line 4779: job_index %d
Line 4786:  SKIP EXT NBCCH due to JOB PCH1/2 / EXT_PCH1/2 found : grant status lowprio si %i JOB = %d
Line 4804:  SBCCH skipped for EXT_NBCCH(reselection)
Line 4808:  job_index %d 
Line 4857: check grant for JOB51_EXT_NBCCH
Line 4917: JOB51_NBCCH skip for second future job
Line 4932: JOB51_NBCCH skip for toggle(%d) at %d
Line 5021: JOB51_EXT_NBCCH %i
Line 5073: Toggled Job pending - SKIP SYNC NCELL
Line 5098: SYNC_NCELL Job Found - Cur job id: %d future job id: %d
Line 5111: DSL1RC release RF due to sync cell clash with other job
Line 5131: DSL1RC release RF due to DSL1RC paused in between
Line 5149: DSL1RC release RF due to ongoing CBCH
Line 5168: JOB51_SYNC_NCELL %i
Line 5255: Toggled FOR RA Job pending - SKIP CBCH 
Line 5261: skip l1x_job51_CBCH due to IRAT
Line 5291: skip l1x_job51_cbch due to invalid CBCH or skip_ind(%d)
Line 5313: skip l1x_job51_cbch due to current job
Line 5349: skip l1x_job51_cbch due to future job
Line 5411: JOB51_CBCH %i
Line 5496: skip l1x_job51_CBCH2 due to IRAT
Line 5586: JOB51_CBCH2 %i sec_fn %i
Line 5650: check_future_jobs_info
Line 5670: #overlap1: %d, #overlap2: %d
Line 5683: JOB skip : %s found, so can't run %s
Line 5695: JOB skip : %s found, so can't run %s
Line 5713: JOB skip : %s found, so can't run %s
Line 5732: JOB skip : %s found, so can't run %s
Line 5752: JOB skip : %s found, so can't run %s
Line 5771: JOB skip : %s found, so can't run %s
Line 5786: JOB skip : %s found, so can't run %s
Line 5808: JOB skip : %s found, so can't run %s
Line 5823: Future Job L1X_JOB51_EXT_PCH found but, run %s
Line 5826: JOB skip : %s found, so can't run %s
Line 5839: Future Job L1X_JOB51_EXT_PCH2 found but, run %s
Line 5842: JOB skip : %s found, so can't run %s
Line 5865: JOB skip : %s found, so can't run %s
Line 5877: JOB skip : %s found, so can't run %s
Line 5884: NON JOB : %s detected
Line 5904: JOB skip : %s found, so can't run %s
Line 5926: JOB skip : %s found, so can't run %s
Line 5945: JOB skip : %s found, so can't run %s
Line 5965: JOB skip : %s found, so can't run %s
Line 5983: JOB skip : %s found, so can't run %s
Line 5999: JOB skip : %s found, so can't run %s
Line 6023: JOB skip : %s found, so can't run %s
Line 6035: JOB skip : %s found, so can't run %s
Line 6069: grant_run_jobs_across_length
Line 6099: l1x_dsl1rc_resource_request %i
Line 6138: Toggled pending - SKIP BSIC Reconf schedule during USE RSP 
Line 6145: l1x_job51_bsic_reconf_use_rsp
Line 6180: Skip l1x_job51_bsic_reconf_use_rsp due to job overlap and releasing RF
Line 6244: PrevTime(%d), CurrTime(%d) Diff(%d)
Line 6252: SKIP BSIC Reconf - 4G data ongoing, diff time(%d)
Line 6264: Toggled FOR RA Job pending - SKIP BSIC Reconf 
Line 6272: skip bsic reconf  due to IRAT
Line 6286: JOB51_BSIC_RECONF %i
Line 6431: JOB52_SPBCCH skip
Line 6437: fill remaining PPCH seq
Line 6441: fill remaining ExtPPCH seq
Line 6459: JOB52_SPBCCH (SPBCCH-PPCH) {%d,%i}
Line 6464: JOB52_SPBCCH (SPBCCH-ExtPPCH) %i
Line 6474: JOB52_SPBCCH (PPCH-SPBCCH) {%d,%i}
Line 6482: JOB52_SPBCCH (ExtPPCH-SPBCCH) %i
Line 6490: JOB52_SPBCCH {%d,%i}
Line 6497: JOB52_SPBCCH skip (cur%d overlap%d)
Line 6505: [GL1 Error] l1x_job52_spbcch: *seq NOT set
Line 6560: JOB52_NPBCCH %i
Line 6613: JOB52_PCCCH %i
Line 6674: *** ERROR invalid PPG params 1
Line 6688: fill remaining SPBCCH
Line 6705: JOB52_PPCH skip
Line 6709: fill remaining SPBCCH seq
Line 6724: JOB52_PPCH (PPCH-SPBCCH) %i
Line 6733: JOB52_PPCH (SPBCCH-PPCH) %i
Line 6741: JOB52_PPCH %i
Line 6748: JOB52_PPCH skip (cur%d overlap%d)
Line 6756: [GL1 Error] l1x_job52_ppch: *seq NOT set
Line 6810: JOB52_ExtPPCH skip
Line 6814: fill remaining SPBCCH seq
Line 6829: JOB52_ExtPPCH (ExtPPCH-SPBCCH) %i
Line 6839: JOB52_ExtPPCH (SPBCCH-ExtPPCH) %i
Line 6847: JOB52_ExtPPCH %i
Line 6854: JOB52_ExtPPCH skip (cur%d overlap%d)
Line 6862: [GL1 Error] l1x_job52_ext_ppch: *seq NOT set
Line 6927: fbsb_required:%d, reconf_required:%d, utran_required:%d, loneEnd_required:%d
Line 6951: JOB52_SYNC_NCELL %i
Line 6985: No cell to find %i
Line 7089: JOB52_SBCCH %i
Line 7142: JOB52_EXT_SBCCH %i
Line 7191: invalid PG params 1
Line 7196: [GL1 Error] invalid PG params (%d)
Line 7250: JOB52_PCH %i
Line 7301: JOB52_EXT_PCH %i
Line 7354: JOB52_NBCCH %i
Line 7412: JOB52_EXT_NBCCH %i
Line 7499: [PS] RF init check in l1x_wakeup_job_ds
Line 7508: [PS] Release l1ps_prog_immediate_on_for_ds_running (FALSE) 
Line 7539: Inserted l1x_wakeup_prog_seq for immediate execution: Rem_fn=%d
Line 7558: l1x_send_rach_req %d
Line 7581: L1F RACH REQ start on new primary Scell SIM %d
