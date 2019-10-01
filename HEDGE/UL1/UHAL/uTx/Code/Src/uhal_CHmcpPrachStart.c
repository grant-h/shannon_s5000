Line 238: [DBG]currentTxAntNum %d, scrflt_fb : %d
Line 257: [DBG]SCR_FLT_FB : %d SLOT, %d CHIP_8
Line 344: activeStackId %d uhal_CHmcpPrachStart_enableAICH EHalDlAichIndicatorInfoCmd errCode=%d addErrCode=%d
Line 350: activeStackId %d     enableAICH phychNr=%d
Line 358: activeStackId %d uhal_CHmcpPrachStart_enableAICH EHalDlPhychStartCmd exec() failed errCode %d addErrCode %d
Line 386: WARNING:uhal_CHmcpPrachStart_setAichStatus EHalDlAichIndicatorInfoCmd exec() failed errCode %d addErrCode %d
Line 435:  Prach cmd is NULL
Line 441:  Prach cmdPtr is NULL
Line 447: activeStackId %d DSDS:uhal_CScomPrachStart_response  %d
Line 486: uhal_CScomPrachStart_response:[%d,%d] failed after checkAfter- to be run 1 frame later...
Line 516:  Prach cmdPtr is NULL
Line 526: activeStackId %d DSDS:uhal_CScomPrachStart_undo kill SubsequentPreambleToken
Line 536: activeStackId %d DSDS:uhal_CScomPrachStart_undo kill FirstPreambleToken
Line 546: activeStackId %d DSDS:uhal_CScomPrachStart_undo kill ReleasePrachToken
Line 555: activeStackId %d DSDS: uhal_CScomPrachStart_undo kill AichSyncToken
Line 563: activeStackId %d DSDS:uhal_CScomPrachStart_undo Aich Int pending
Line 569: activeStackId %d DSDS: uhal_CScomPrachStart_undo Encode Int pending
Line 581: 3G3G: uhal_CHmcpPrachStart_undo, disable TX interrupt
Line 585: activeStackId %d DSDS: uhal_CScomPrachStart_undo EHalDlAich_NoSignal
Line 592: uhal_CPrach_SetState:EPrachConfigured (uhal_CPrachStart_undo) %d
Line 670: activeStackId %d rachTxPowerMax %d maxTxPower %d txPrachOffset[3] %d txPowerTempOffset %d
Line 682: activeStackId %d Prach override: retries %d
Line 770: activeStackId %d [TAS-RACH] currentTxAntNum: %d, rscp: %d, uhalCmdPrachStart->preambleInitPower: %d, init_power: %d 
Line 782: activeStackId %d init_power %d is limited to %d
Line 793: activeStackId %d PrachStart init=%d, rscp=%d outpower=%d dBm
Line 811: uhal_CHmcpPrachStart_request: sfn %6d slot %3d chip %5d
Line 831: uhal_CHmcpPrachStart_request: FirstRachProcess AddOffset %d
Line 954: [uhal_CHmcpPrachStart_getRefRLFramePosition] sfn_p %x, slot_p %x, chip_p %x 
Line 974: currentTxAntNum : %d, adjust tx path delay %d
Line 1084: numAvailableASPerSfn is out of bound
Line 1086:     searchASSet: not found
Line 1184: activeStackId %d Impossible case[current_aich_slots %d, sfnMod8 %d, selectedAS %d]
Line 1191: activeStackId %d uhal_CHmcpPrachStart_subsequentPreamble: submit SubsequentPreamble token
Line 1243: activeStackId %d [uhal_CHmcpPrachStart_firstPreamble] ulPhyProcInstance %x, prach %x
Line 1282: activeStackId %d [uhal_CHmcpPrachStart_firstPreamble] numberOfAvailAsAtNextSfn %d, current_aich_slots %d, 
Line 1289: activeStackId %d uhal_CHmcpPrachStart_firstPreamble: selectedAS %d
Line 1306: activeStackId %d uhal_CHmcpPrachStart_firstPreamble: submit FirstPreamble token by selectedAS %d < current_aich_slots %d
Line 1336: activeStackId %d     Access slot No %d 		 preambleSignature %d
Line 1380: activeStackId %d     EHalDlAich_ReleasePrach by overtime on selection of available number
Line 1404: activeStackId %d uhal_CHmcpPrachStart_firstPreamble: submit FirstPreamble token
Line 1427: activeStackId %d uhal_CHmcpPrachStart_request: FirstPreamble with numOf1stPreambleFailure %d
Line 1449: activeStackId %d uhal_CHmcpPrachStart_request: RachChannelSetup
Line 1485: activeStackId %d PRACH_EN [UL_CH_INFO] 0x%x
Line 1517: AichSync: sfn %6d slot %3d chip %5d
Line 1535: activeStackId %d AichSync:(aichslot<13)&&(aichsfn&1) token modify: FirstPreamble
Line 1556: AichSync token late: resubmit noOfTries %d aichsfn %d aichslot %d noOfFrames %d
Line 1574: activeStackId %d uhal_CPrach_SetState:EPrachConfigured (AichSync) %d
Line 1605: DSDS:uhal_CPrach_SetCmdAborted:EPrachAborted %d
Line 1641: Hmcp_TXGEN_LISR
Line 1649: TXGEN_HISR execution failure
Line 1700: DSDS iscmdAborted=%d
Line 1724: Hmcp_TXGEN_LISR at slot 0x%x rachTxPower %d pdPower %d rfTxSPI 0x%x rfTxPll 0x%x rfTxmode 0x%x
Line 1726: activeStackId %d RACH Read 0x20A4 0x%x dac_input_power %d RMS %d htx_urtg_en 0x%x SW_CLK_ON[0] 0x%x SW_CLK_ON[1] 0x%x
Line 1729: tickgen: tx0_main_ctl0 0x%x tx0_main_ctl1 0x%x tx0_main_ctl2  0x%x tx1_main_ctl0 0x%x tx1_main_ctl1 0x%x tx1_main_ctl2 0x%x
Line 1731: tickgen_mipi_rffe0_ctl 0x%x tickgen_mipi_rffe1_ctl 0x%x tickgen_mipi_rffe2_ctl 0x%x tickgen_mipi_rffe3_ctl 0x%x htx_urtg_time %d htx_urtg_celltype %d
Line 1733: mipi_rffe0_on0_cnt 0x%x mipi_rffe0_off0_cnt 0x%x ref_count_rd_value 0x%x FEMSIF_ARBIT0_CTL_RD1 0x%x
Line 1766: activeStackId %d Re lock
Line 1800: activeStackId %d Hmcp_Aich_Rf_Lisr
Line 1816: OVR_EN : %d, OVR_VALUE : %d
Line 1847: activeStackId %d [NEW AICH DETECTION SCHEME] phychNr %d, phychType %d, ai po %d
Line 1856: activeStackId %d [NEW AICH DETECTION SCHEME] ai po is incorrect. realRakeEnergy : %d Skip NEW AICH DETECTION SCHEME 
Line 1865: activeStackId %d ai sym %d, realRakeEnergy %d, aichPO %d, sqrt_gamma %d, aich_ack_th %d
Line 1950: activeStackId %d [R:%d][EAICH_ACK]	 AI SIG = %d, 	 EdchRscIdx = %d
Line 1973: activeStackId %d Enable Slot interrupt at %d slot (AS Timing %d, AS %d)
Line 1984: activeStackId %d msgCurrentPower %d is limited to %d
Line 1990: msgCurrentPower %d = preambleCurrentPower %d +  msgStepPower %d + dpcchPowerOffset %d 
Line 1996: activeStackId %d Hmcp_Aich_Rf_Lisr: PrachAck TxPowerSet failed %d
Line 2024: [R:%d][EAICH_NACK]	  EAI SYM = %d 	, EAI SIG = %d
Line 2034: [R:%d][EAICH_ACK]	  EAI SYM = %d 	, 	 AI SIG = %d, 	 EAI SIG = %d, 	 EdchRscIdx = %d
Line 2130: activeStackId %d AICH_HISR execution failure
Line 2156: WARNING: In uhal_HmcpAICH_HISR, cmdPtr is NULL
Line 2172: DSDS iscmdAborted=%d
Line 2219: activeStackId %d [R:%d] 	  AI SYM = %d 	, 	 ISCP = %d
Line 2227: activeStackId %d WARNING: AICH result changed to %d from %d
Line 2242: activeStackId %d [AICH monitoring] frameCounter=%d, slotCounter = %d, chipCounter = %d
Line 2275: activeStackId %d AICH result POS
Line 2285: activeStackId %d     EHalDlAich_PosAck Asn_tti10 ReleasePrach
Line 2312: activeStackId %d Hmcp_Aich_Rf_HISR: Absurd AICH result from chipset
Line 2325: activeStackId %d AICH NACK [UL_CH_INFO] 0x%x
Line 2332: activeStackId %d ## Warning!! uhal_HmcpIpcGetDstStatus is False##
Line 2355: activeStackId %d AICH result NACK
Line 2372: Preamble remains: %d out of %d [ul_ch_info : %d]
Line 2440: activeStackId %d preambleCurrentPower %d is limited to %d
Line 2447: activeStackId %d Additional PrachNoSig MsgPower=%d dBm
Line 2456: activeStackId %d PrachNoSig TxPowerSet failed %d
Line 2490: activeStackId %d Next Preamble Signature: %d, Next Access Slot: %d
Line 2504: activeStackId %d preambleCurrentPower %d is limited to %d
Line 2517: activeStackId %d PrachNoSig TxPowerSet failed %d
Line 2529: txtm_sfn : %d, txtm_chip : %d, htx_urtg : %d, cur_slot : %d, cur_chip : %d, dbg_ul_slot : %d, dbg_ul_chipx8 : %d,
Line 2531: cur_fing_pos : %d, DL_AS : %d, DL_AS_Chip : %d, ref_cnt_chip38400 : %d, urtg_chip38400 : %d, tx_tm_pos : %d, urtg_pos : %d,
Line 2533:  frameCounter_0=%d, slotCounter_0 = %d, chipCounter_0 = %d  frameCounter_1=%d, slotCounter_1 = %d, chipCounter_1 = %d rlNr = %d
Line 2552: activeStackId %d uhal_CScomPrachStart_abort command received 
Line 2626: [uhal_CHmcpPrachStart_timeout] INT_MASK 0x%x, AICH(slot %d, chip %d) htx_ch_info 0x%x, htx_ch_mon 0x%x, ai_ctrl_0 0x%x 
Line 2652: actStkId %d [uhal_CHmcpPrachStart_MeasureMsgPwr] RACH message power = %d
Line 2683: [rlNr %d] finger cumulative value %d, converted value %d
