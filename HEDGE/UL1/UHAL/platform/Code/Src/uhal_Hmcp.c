Line 323: uhal_CHmcp_GetRfRATState rfState %d
Line 337: DSP SHM mapped
Line 343: DSP SHM unmapped
Line 379: activeStackId %d uhal_CHmcp_LoopBackMode1. LoopBackMode1: %d
Line 390: activeStackId %d uhal_CHmcp_LoopBackMode2. LoopBackMode2: %d
Line 397: uhal_Hmcp_SetRbTestMode. RbTestmode: %d, RbTestmode is set but IPC not sent to DSP
Line 570: activeStackId %d [CGI ACQUISITION] uhal_Hmcp_SetCgiAcq CgiAcquisition %d
Line 635: activeStackId %d Skip Initial configuration.
Line 664: [3GF SLP] uhal_HmcpInitialDecoderBlockReset (SW_RESETn.SymbProc_CS_ApbClk, SW_RESETn.SymbProc_CS_FuncClk, SP_CS_SW_RESET)
Line 687: uhal_HmcpInfraGenClockSet
Line 895: activeStackId %d Failed to allocate U-HAL DL debug storage. Storing is disabled!
Line 934: activeStackId %d Store REG_CK_REG0[%d] = 0x%x
Line 938: activeStackId %d Store uhal_CHmcpChipsetData[activeStackId].REG_CK_REG1[%d] = 0x%x
Line 943: activeStackId %d Store uhal_CHmcpChipsetData[activeStackId].RX_MODE_INDICATOR = 0x%x
Line 947: activeStackId %d Store uhal_CHmcpChipsetData[activeStackId].TSN14Bit_Mode = 0x%x
Line 971: activeStackId %d isResume %d isTDDActive %d HW destination control(3GRATSel). BASE_ADDR 0x%x, END_ADDR 0x%x
Line 983: activeStackId %d Restore uhal_CHmcpChipsetData[activeStackId].REG_CK_REG0[%d] = 0x%x
Line 992: activeStackId %d Restore uhal_CHmcpChipsetData[activeStackId].REG_CK_REG1[%d] = 0x%x
Line 998: activeStackId %d Restore uhal_CHmcpChipsetData[activeStackId].RX_MODE_INDICATOR(R7) = 0x%x
Line 1002: activeStackId %d Restore uhal_CHmcpChipsetData[activeStackId].TSN14Bit_Mode = 0x%x
Line 1006: activeStackId %d Restore uhal_CHmcpChipsetData[activeStackId].RX_MODE_INDICATOR(R6) = 0x%x
Line 1014: [PktProc] Init!
Line 1032: [PktProc] SwReset!
Line 1108: uhal_HmcpCpichFrame_LISR
Line 1116: CPICH_FRAME_HISR execution failure
Line 1328: REG TUNING WRITE: cnt%d val0x%08X
Line 1488: [PRACH Encoder Check] Dpcch Buf[CFN %d] : 0x%x, 0x%x, 0x%x, 0x%x, 0x%x htx_prach 0x%x
Line 1489: [PRACH debugging log] htx_ch_info 0x%x, htx_ch_mon 0x%x, htx_prach_pre_en 0x%x, htx_prach_start 0x%x, htx_aich 0x%x, htx_aich_mon_ack_slot 0x%x, htx_prach_pre_num 0x%x
Line 1491: [PRACH debugging log] AICHReqCnt 0x%x, AICHPreDoneCnt 0x%x, ai_ctrl_0 0x%x, ai_rpt_0 0x%x, front_modem_sel 0x%x, tx_clk_gate_ctrl_sel 0x%x int_status_aich_lisr 0x%x
Line 1494: [PRACH debugging log] TX_MODEM_SEL 0x%x, UL0_FILTER_INPUT_SEL 0x%x, SC4_PREDONECNT %d, PRE_SLOT_NUM 0x%x, AICH_SLOT_NUM 0x%x
Line 1527: [DPCH DPCCH Encoder Check] Dpcch Buf[CFN %d] : 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 1528: [DPCH debugging log] htx_ch_info 0x%x, htx_ch_mon 0x%x, front_modem_sel 0x%x, tx_clk_gate_ctrl_sel 0x%x, int_status_TxFr2E_lisr 0x%x, int_status_TxFr10E_lisr 0x%x, int_tx_fr_10e 0x%x
Line 1537: [TxRx Timing Check] Ref RL No %d :: DL SFN %d, Slot %d, TxTmSlot %d, TxTmChip %d, Tx_tm_time_r %d, TxtimeDIff(URTG-TxTM) %d
Line 1568: Enable CPICH int. However, modem is off
Line 1590: RX_DPC_TG_EN=%d, RX_DPC_TG_SYN10_POS=%d, rx_dpc_tg_timer_r=%d
Line 1607: [CGI ACQUISITION] refFrame %d refSlot %d refChip %d cellkFrame %d cellkSlot %d cellkChip %d CELLK_ACTIVE %d
Line 1627: activeStackId %d uhal_HmcpCPI_HISR: sysvalid %d dspPowStatus %d activeStackId %d
Line 1637: activeStackId %d uhal_HmcpCPI_HISR Return
Line 1730: isFrameIntAfterWakeUp = %d, cpichFrameIntCount = %d, index = %d
Line 1778: activeStackId %d ***Don't send signal to SMC: diffRsn = %d
Line 1797: RX_DPC_CLTD_ON_FIELD=%d RX_DPC_TG_EN_FIELD=%d
Line 1821: cellRtgSlot=%d cellRtgChip=%d CELLK_ACTIVE=%d boundary RSN %d current RSN %d boundarySFN %d currentSFN %d
Line 1831: activeStackId %d uhal_HmcpCPI_HISR: hw_sfn %d hw_slot %d hw_chip %d
Line 1875: activeStackId %d ***uhal_CHmcpChipsetData[activeStackId].FrameIntCnt %d isUphyInitialized %d 
Line 1880: activeStackId %d ***uhal_CHmcpChipsetData[activeStackId].FrameIntCnt %d isUphyInitialized %d 
Line 1902: Disable Aux CPICH int.
Line 1927: Enable Aux CPICH int.
Line 1931: Enable Aux CPICH int. However, modem is off
Line 1956: uhal_HmcpUCpuAux_LISR
Line 1964: uhal_HmcpRakeAux HISR execution failure
Line 1974: activeStackId %d MainSubInfo %d uhal_HmcpUCpuAux_HISR Return
Line 2027: uhal_HmcpPamPowerControl
Line 2132: isFirstTimeLogging = %d, index = %d, isRfrejectByDsl1rc = %d
Line 2152: uhal_AGCFingerFreezeDSDS - AGCFingerFreeze == TRUE - Freezing all the fingers and AGC, fn_frz_frc=0x%x
Line 2162: uhal_AGCFingerFreezeDSDS - AGCFingerFreeze == FALSE - Unfreezing all the fingers and AGC, fn_frz_frc=0x%x
Line 2168: uhal_AGCFingerFreezeDSDS - UHAL_AllowAGCFingerFreeze == FALSE
Line 2209: uhal_IsAGCFingerFreeze, fn_frz_frc=0x%x, result = %d
Line 2216: activeStackId %d uhal_hmcpDLPCRegisterStatusDump - Start
Line 2219:  fa0_dlpc_ctrl_0 %x fa0_dlpc_ctrl_1 %x fa0_acc_sir_rd %x fa0_sir_est %x fa0_sir_est_slot00 %x fa0_sir_est_slot01 %x
Line 2228:  fa0_sir_est_slot02 %x fa0_sir_est_slot03 %x fa0_sir_est_slot04 %x fa0_sir_est_slot05 %x fa0_sir_est_slot06 %x fa0_sir_est_slot07 %x
Line 2237:  fa0_sir_est_slot08 %x fa0_sir_est_slot09 %x fa0_sir_est_slot10 %x fa0_sir_est_slot11 %x fa0_sir_est_slot12 %x fa0_sir_est_slot13 %x
Line 2246:  fa0_sir_est_slot14 %x t_fa0_valid_sir_slot %x t_fa0_dpch_rscp_div_in_rd %x t_fa0_iscp_div_in_rd %x fa0_ul_tpc_rd %x
Line 2256: activeStackId %d uhal_hmcpDLPCRegisterStatusDump - End
