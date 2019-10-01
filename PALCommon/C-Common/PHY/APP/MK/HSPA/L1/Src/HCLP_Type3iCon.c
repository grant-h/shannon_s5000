Line 306: HCLP_Type3iCon_Lockdisable1[ce_idx 0x%x][lockedPwrSum %d][serving_ce_index %d][serving_pwrSum %d][sce_type3i_dsp_aided_release_cnt %d]
Line 465: HCLP_Type3iCon_GetCellInfo[fa1_cell_pn[0]: 0x%x][hclp_fa1_cell_pn_pack[0]:0x%x][fa1_cell_pn[1]:0x%x][hclp_fa1_cell_pn_pack[1]:0x%x][fa1_cell_pn[2]:0x%x][hclp_fa1_cell_pn_pack[2]:0x%x]
Line 803: HCLP_Type3iCon_EquInitCheck[k: %d][j: %d][equ_init_current: 0x%x][o_equ_init_indicator: 0x%x][p_type3icon->cellindex_to_searcherinfo[k][j-1]: %d][p_type3icon->type3i_psc[k][j-1]: %d]
Line 874: hCLP_Type3iCon_CellReleaseReplace[fa_idx %d][j %d][own_pwrSum %d]
Line 900: hCLP_Type3iCon_CellReleaseReplace[other_cell %d][fa_idx %d][SCE_idx %d]
Line 905: hCLP_Type3iCon_EquInitCheck[replacement: %d][equ_init_current: 0x%x][o_equ_init_indicator: 0x%x][p_type3icon->cellindex_to_searcherinfo[k][j-1]: %d][p_type3icon->type3i_psc[k][j-1]: %d]
Line 1114: hCLP_Type3iCon_HWRegisterGen_SRELMSCOMMON_CECluster, o_SRELMS_SRE_CLUST_CTRL = 0x%x
Line 1150: hCLP_Type3iCon_HWRegisterGen_SRELMSCOMMON_LMSCluster, o_SRELMS_LMS_CLUST_CTRL = 0x%x, o_SRELMS_LMS_CLUST_CTRL1= 0x%x
Line 1359: hCLP_Type3iCon_HWRegisterGen_SRELMSCluster_Cluster, i= %d, lms_map_info[i].bit.lms_sre_map_info= 0x%x, lms_map_info[i].lms_errcal_rxd_ind= 0x%x, lms_map_info[i].lms_d_est_bitsel = 0x%x
Line 1371: hCLP_Type3iCon_HWRegisterGen_SRELMSCluster_Cluster, i = %d, o_LMS_MAP_INFO[i] = 0x%x, o_LMS_MTG_INFO[i] = 0x%x
Line 1477: hCLP_Type3iCon_HWRegisterGen_HICCOMMON_Cluster, i = %d, (p_hclp_aux_ipc_control->config_ce_clusters[i].cell_idx)-1 = %d, (p_type3icon->fa0_cell_searcher[p_type3icon->cellindex_to_searcherinfo[0][(p_hclp_aux_ipc_control->config_ce_clusters[i].cell_idx)-1]].PscrCode) = %d, hic_ce_schic_con[i].bit.hic_ce_scram_code_group = %d
Line 1926: HCLP_Type3iCon_Get_Ref_Position, i = %d, j = %d, hCLP_SW_TT_RefPos_Align(j)= %d, serving_cell_position = %d, hic_cell_offset_con[i].bit.hic_cell_offset.reg = 0x%x
Line 1933: HCLP_Type3iCon_Get_Ref_Position, i = %d, j = %d, CE_init_enable=0x%x, p_type3icon->type3i_hic_iir_clear[i]=%d
Line 1983: hCLP_Type3iCon_HWRegisterGen, i = %d, o_HIC_P_MAP[i]=0x%x, o_HIC_P_CONFIG[i]=0x%x, p_type3icon->o_HIC_P_SCR_PN_STATE[i]=0x%x, o_HIC_P_4RX_MAP[i]=0x%x, o_HIC_P_WGT_MAP[i]=0x%x, p_type3icon->o_HIC_P_CPI_DM_ADDR[i]=0x%x
Line 2015: hCLP_Type3iCon_HWRegisterGen_HICProcess_HicProcessLast, i = %d, o_HIC_P_CONFIG[i] = 0x%x
Line 2112: hCLP_Type3iCon_HWRegisterGen_SRELMSCluster_LmsWgtAdjLambdaSel, lms_idx = %d, o_LMS_WGT_ADJ_LAMBDA_SEL[lms_idx] = 0x%x
Line 2204: hCLP_Type3iCon_HWRegisterGen, ic_proc_idx_early = %d, config_hic_clusters = 0x%x, HIC_init_enable=0x%x
Line 2209: hCLP_Type3iCon_HWRegisterGen, HIC_index = %d
Line 2303: hCLP_Type3iCon_HWRegisterGen, ic_proc_idx_early = %d, config_hic_clusters = 0x%x, HIC_init_enable=0x%x
Line 2308: hCLP_Type3iCon_HWRegisterGen, HIC_index = %d
Line 2338: hCLP_Type3iCon_HWRegisterGen, CE_init_enable = 0x%x, LMS_init_enable = 0x%x
Line 2343: hCLP_Type3iCon_HWRegisterGen, i = %d, config_ce_clusters = 0x%x, config_lms_clusters = 0x%x, config_hic_clusters = 0x%x
Line 2437: hCLP_Type3iCon_HWEquInitEnable(WA1), equ_init_enable= 0x%x, type3i_remained_equ_init= 0x%x
Line 2484: HCLP_Type3iCon_HWEquInitEnable(after), ant_sel= 0x%x, fb_sel= 0x%x, carrier_mode= 0x%x, rx_div_mode= 0x%x, sce_on_flag= 0x%x
Line 2654: hCLP_Type3iCon_CellReleaseCheck2[other_cell %d][fa_idx %d][SCE_idx %d]
Line 2681: hCLP_Type3iCon_CellReleaseCheck(writeSceOn=1)[i %d][j %d][slot_idx %d][config_ce_clusters[i] 0x%x][o_HIC_P_CELL_OFFSET_CON[j] 0x%x]
Line 2707: hCLP_Type3iCon_CellReleaseCheck(writeSceOn=2)[i %d][j %d][config_ce_clusters[i] 0x%x][o_HIC_P_CONFIG[j] 0x%x]
Line 3820: hCLP_Type3iCon_HICModeChange_Release, slot_idx %d, release_status 0x%x, HIC_init_enable 0x%x
Line 3842: hCLP_Type3iCon_HICModeChange_Release slot 12, i= %d, o_HIC_P_CONFIG 0x%x, o_HIC_P_CELL_OFFSET_CON 0x%x
Line 3865: hCLP_Type3iCon_HICModeChange_Release slot 13, i= %d, o_HIC_P_CONFIG 0x%x
Line 3887: hCLP_Type3iCon_HICModeChange_Release slot 14, i= %d, o_HIC_P_CONFIG 0x%x
Line 3963: hCLP_Type3iCon_Control(WA)[equ_init_enable:0x%x][type3i_remained_equ_init:0x%x]
Line 3979: HCLP_Type3iCon_Control1[equ_init_indicator: 0x%x]
Line 3986: hCLP_Type3iCon_Control2[equ_init_indicator:0x%x]
Line 3996: hCLP_Type3iCon_Control3[equ_init_enable:0x%x][hic_intra_and_type3i_flag:0x%x]
