Line 324: (I)LTE_Block_Initialize
Line 339: S%x EVT%x ExtHBUF base:0x%x
Line 342: (I) DSP_conn_drx_paging_skip:0x%x
Line 616: (SCG) Default Setting: pscell_idx:%d nAnt:%d, bw:%d, tm:%d, ng:%d, sf:%d, ssf:%d
Line 800: (F) #_config CC:%d
Line 803: (I) Cfg_SetPUCCHconfig cfg_num(%d), large_A (%d), reverse(%d), ack0(0x%x), ack1(0x%x), ack2(0x%x) 
Line 846: Cfg_SetPaPb: cc:(%d), PA (%d), PB(%d)
Line 867: FDP_Para: cc:(%d), sf_assign (%d), ssf_pattern(%d)
Line 872: (F) wrong ul/dl subframe config.(%d)
Line 883: (F) wrong special subframe config.(%d)
Line 968: (I)Update ack size of pcell: Group(MCG)/CC(0)/TM(%d)/acksize(%d)
Line 981: (I)Update ack size of pcell: Group(SCG)/CC(%d)/PCellIdx(%d)/TM(%d)/acksize(%d)
Line 1022: Disable PP ClockGating: DEMOD_4G_CG_OFF(0x%x,0x%x)
Line 1161: (F)SYSTEM_INFO_ST register mismatch: IPC(0x%08x), Register(0x%08x)
Line 1170: CC0_SYSTEM_INFO(0x%x), dw(%d), cell(%d), dl_earfcn(%d), CC0_SYSTEM_INFO_SYSTIME4G(0x%x), SysInfoUpdate_type(%d)
Line 1174: CC0_SYSTEM_INFO(0x%x), CC0_SYSTEM_INFO_SYSTIME4G(0x%x)
Line 1188: IPC: SysInfoUpdate, cellid(%d), n_antP,ue_ant(%04X), cp/dl_bw(%03d), ng(%d), dur(%d), duplex(%d), uldl/sp(%04d)
Line 1211: [TDP_CFG]SI init state : Ue_ant_num[CC0] = %d, n_ue_ant = %d
Line 1252: Update_MIB
Line 1287: (I)Ignore sw_reset, 1.4MHz/4Tx (SYSTEM_INFO:0x%x, dl_earfcn:%d)
Line 1301: (I)Ignore sw_reset (SYSTEM_INFO:0x%x, dl_earfcn:%d)
Line 1312: (I)Received SysInfoUpdate.type = %d
Line 1332: ==================================================================
Line 1333: FFT_EN=0x%X, FFT_STATUS=0x%X, TD_BUF_EN=0x%X, TD_BUF_CC0CONF=0x%X
Line 1367: (F)cmd type(%d) is invalid
Line 1376: (F)SYSTEM_INFO_ST register mismatch: IPC(0x%08x), Register(0x%08x)
Line 1384: SCG-CC%d_SYSTEM_INFO(0x%x), dw(%d), cell(%d), dl_earfcn(%d), CCx_SYSTEM_INFO_SYSTIME4G(0x%x), SysInfoUpdate_type(%d)
Line 1401: SCG-CC%d_SYSTEM_INFO(0x%x), CCx_SYSTEM_INFO_SYSTIME4G(0x%x), SYNC_INT_CFG_R1_2(0x%X
Line 1439: IPC: SCG-SysInfoUpdate(SCG), cellid(%d), n_antP,ue_ant(%04X), cp/dl_bw(%03d), ng(%d), dur(%d), duplex(%d), uldl/sp(%04d)
Line 1459: [TDP_CFG] SI SCG state(CC%d) : Ue_ant_num = %d, n_ue_ant = %d
Line 1505: IPC: PhyRxConfig,cif_valid:%d,cif_pres:%d,pa:%d, alttbsidx1(r12valid/v1280valid/enum):%03d, alttbsidx2(r14valid/v1430valid/enum):%03d
Line 1660: cc_idx (%d) is INVALID!
Line 1981: (F) Cfg_SCell_DB_Update ERROR (%d)
Line 1989: (F)SYSTEM_INFO_ST register mismatch: IPC(0x%08x), Register(0x%08x)
Line 1996: (F) Wrong System Information
Line 2006: DEMOD CC%d_SYSTEM_INFO (0x%x), bw(%d), cell(%d), antenna(tx/rx)(%02d), RxMode/div_cc(0x%02x), isMCG(%d)
Line 2035: (F) CA info mismatch Cellid(%d)(%d), BW(%d)(%d)
Line 2214: CC:%d, pdsch_r12 valid:%d ,config :%d 
Line 2230: CC:%d pdsch_r14 valid:%d ,config :%d 
Line 2278: [CA_ACT : TDP][before][CC%d], Agc/Afc/Str[%3d], RXF_MIXER : 0x%x, RXF_MIX_SYSTIME4G : 0x%x
Line 2361: [CA_ACT : TDP][after][CC%d], Agc/Afc/Str[%3d], RXF_MIXER : 0x%x, RXF_MIX_SYSTIME4G : 0x%x
Line 2368: [CA_ACT : TDP][RXF_MIXER_FREQ][0/1/2/3/4/5] : %5d / %5d / %5d / %5d / %5d / %5d
Line 2373: [CA_ACT : TDP][RXF_MIXER_FREQ][6/7/8/9/10/11] : %5d / %5d / %5d / %5d / %5d / %5d
Line 2379: [CA_ACT : TDP][REG] LATCH_CMD_UPDATE_SEL_A : 0x%x, LATCH_CMD_UPDATE_SEL_B : 0x%x, GAIN_UPDATE_MODE : 0x%x, ACTIVE_RAT : 0x%x
Line 2431: [CA_DEACT : TDP][before][CC%d], Agc/Afc/Str[%3d], RXF_MIXER : 0x%x, RXF_MIX_SYSTIME4G : 0x%x
Line 2437: [CA_DEACT : TDP][before][TC_SERV_CONFIG_CC][0/1/2/3/4/5] : 0x%x / 0x%x / 0x%x / 0x%x / 0x%x
Line 2504: [CA_ACT] AdcPath is not valid [cc : %d][adc_path : %d]
Line 2565: [CA_DEACT : TDP][after][CC%d], Agc/Afc/Str[%3d], RXF_MIXER : 0x%x, RXF_MIX_SYSTIME4G : 0x%x
Line 2571: [CA_DEACT : TDP][after][TC_SERV_CONFIG_CC][0/1/2/3/4/5] : 0x%x / 0x%x / 0x%x / 0x%x / 0x%x / 0x%x
Line 2620: Cfg_BackupDB cell_group(%d) ta_s(%d), rlf_s(%d), ca_deact_time(%d)(%d)(%d)(%d)
Line 2661: Cfg_RestoreDB ta_s(%d), rlf_s(%d), deact(%d)(%d),CA_SFN_backup(%d)
Line 2685: Cfg_Read_UECategory(%d)
Line 2703: Cfg_Read_ULMulticluster(%d)
Line 2753: Cfg_Read_UECategory_DL(%d)
Line 2803: Cfg_Read_UECategory_UL(%d)
Line 2837: Cfg_Update_UE_Carrier(%d)
Line 2871: Cfg_Read_noResourceRestrictionForTTIBundling_r12(%d)
Line 2954: (F) INVALID cell_group(%d)!
Line 2974: (F) INVALID cell_group(%d)!
Line 2994: (F) INVALID cell_group(%d)!
Line 3014: (I)Resume RELEASE IPC processing: cell_group(%d)
Line 3018: (F) INVALID cell_group(%d)!
