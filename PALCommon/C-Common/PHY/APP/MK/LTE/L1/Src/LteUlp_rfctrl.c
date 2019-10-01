Line 247: (W) SPI FIFO not Cleared!!   status_flag:%d, ul_cc_idx:%d
Line 393: UL_PWR2=> pwr:%d, TX_SPI[%d]:0x%x, comp_pwrx10:%d, et_en:%d, srs_on:%d, ul_cc_idx:%d
Line 451: (W) wrong num_tx_path_on. direct_spi_word_num:%d
Line 466: [TX on]. TX_on_SPI[0x%x][0x%x][0x%x][0x%x][0x%x], direct_spi_word_num:%d, ul_cc_idx:%d
Line 471: (F) TX on FAIL. tx_on_fail:%d, TX_on_SPI[0x%x][0x%x][0x%x][0x%x], direct_spi_word_num:%d, ul_cc_idx:%d
Line 678: (W) wrong num_tx_path_off. direct_spi_word_num:%d
Line 694: [TX off]. tx_off_spi[0x%x][0x%x][0x%x][0x%x][0x%x], direct_spi_word_num:%d, ul_cc_idx:%d
Line 702: (F) TX off FAIL. tx_off_fail:%d, tx_off_spi[0x%x][0x%x][0x%x][0x%x][0x%x], ul_cc_idx:%d
Line 862: (W) Invalid MIPI word number. ul_cc_idx:%d, debug_id:%d, val:%d, min_val:%d, max_val:%d
Line 948: [MipiAitControl] ARBIT_TR_NUM0[0x%x], TICKGEN_MIPI_RFFE_PA[0x%x], ON0_CNT[0x%x], OFF0_CNT[0x%x], REG_FEMSIF_ARBIT_CTL0[0x%x], REG_FEMSIF_ARBIT_ENABLE0[0x%x], mipi_reg_idx[%d]
Line 958: [MipiAitControl] NO AIT OPERATION. mipi_reg_idx[%d]
Line 983: (W) Wrong MIPI-CH[%d] for AIT. mipi_ait_ch[%d][%d]
Line 1031: ch_idx[%d], ait_check_flag[%d][%d], ait_mipi_state_set[%d], ait_mipi_set_on[%d]
Line 1497: PA_MODE=> et_en:%d, srs_en:%d, main_word_idx(num1/num2):0x%x, arbitor(add1/add2):0x%x, last_mipi_word:0x%x, pm_trig_word:0x%x, reg_arbit_tr_num0:0x%x
Line 1585: PA_2ndOFF=> main_word_idx:%d, arbitor_add:%d, pa_off_word:0x%x, index_error:%d, ul_cc_idx:%d
Line 1788: [ON0][OFF0] Block HW tick. ul_cc_idx:%d
Line 1829: [ON0][OFF0] Block HW tick. TWO-ANT mode
Line 1990: [ON1][OFF1] Block HW tick. ul_cc_idx:%d
Line 2023: [ON1][OFF1] Block HW tick. TWO-ANT mode
Line 2141: PA_Con=> tx0_tx1_word_idx[0x%x], sample_cnt_on0[%d], sample_cnt_off0[%d], sample_cnt_on1[%d], sample_cnt_off1[%d], next_srs_on/next_empty_on[%02d], pa_on_delay[%d]
Line 2184: (W) Invalid pa gain. pa_gain[%d], pwr_val[%d], arbitor_addr[%d], mipi_ch_for_sm_only[%d]
Line 2445: DSPTX_MipiSmControl => pwr_val[%d], sample_cnt[%d], next_srs_pwr_val[%d], srs_sample_cnt[%d], next_srs_on[%d], et_en(PUSCH/SRS)[%02d], mipi_source_en[0x%x]
Line 2570: DSPTX_DisableControlSm !!  reg_tickgen_main_ctl1 : 0x%x reg_tickgen_mipi_rffe : 0x%x, mipi_reg_idx : %d, ul_cc_idx : %d
Line 2614: DSPTX_DisableControlMIPInGPIO !! pa_control_mode : %d, tickgen_main_ctl0_reg : 0x%x, tickgen_main_ctl0_reg1 : 0x%x, reg_tickgen_mipi_rffe : 0x%x, ul_cc_idx : %d, mipi_reg_idx : %d
Line 2691: GPIO Init=>ireg_tickgen_main_ctrl:0x%x, tti_con:0x%x, REG_TICKGEN_TX_PA_ON_ON0_CNT[0x%x], REG_TICKGEN_TX_PA_MODE_ON0_CNT[0x%x]
Line 3384: PM_module[On]=> spi write fail [0x%x]
Line 3394: PM_Module On[ul_cc_idx:%d]=> a_b_set = %d, word_add = 0x%x, a_val = %d, b_val = %d, word_on_num = %d, a_b_reg_set = %d
Line 3432: PM_module[Off]=> spi write fail [0x%x]
Line 3438: PM_Module off[ul_cc_idx:%d]=> word_off_num:%d, a_b_set:%d, fbrx_dcr_accum:0x%x, dcr_acc_adr:0x%x, dcr_acc_ov_adr:0x%x
Line 3504: PM_Module=> ul_cc_idx/dl_cc_idx:%02d, UL_CH:0x%x, pwr:%d, scaledPwr:%d, PM_val = %d, mod:%d, pm_addr:0x%x
Line 3510: PM_Module=> FBRX report skip / ul_cc_idx/dl_cc_idx:%02d, CL-AIT:%d, SKIP:%d
Line 3515: [PM_DEBUG] There is no detect channel (ul_cc_idx : %d)
Line 3521: PM_Module=> Tx TTI config was set, but FBRX Module is not ready (detect_ch : 0x%x, target Pwr : %d)
Line 3607: [PM_DEBUG] NTPD set=> power_val:%d, ul_tti_conf:0x%x, pm_module[tti:%d]:0x%x
Line 3631: FBRX read skipped(GAP). ul_cc_idx : %d, gap_fbrx_guard : %d
Line 3637: FBRX read skipped(TX recover). ul_cc_idx : %d, txrecover_fbrx_guard : %d
Line 3655: FBRX read skipped(RF REQ). ul_cc_idx : %d, fbrx_skip_cnt : %d
Line 3703: [PM_DEBUG] fbrx_rfd_done = %d
Line 3714: [PM_DEBUG] pm_module[current:%d / trans:%d].detect_ch:[0x%x / 0x%x]
Line 3741: [PM_DEBUG] abnormal Tx power read. pm_val : %d
