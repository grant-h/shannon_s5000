Line 298: <<< LTE DM Command List >>>
Line 299: [01] ltedm help
Line 300: [02] ltedm on
Line 301: [03] ltedm off
Line 302: [04] ltedm default
Line 303: [05] ltedm vu     [RATE]
Line 304:        ex) ltedm vu 1000
Line 305:             -> LTEDM_VU update rate is 1000ms
Line 306: [06] ltedm phy    [RATE]
Line 307: [07] ltedm l1     [RATE]
Line 308: [08] ltedm mac    [RATE]
Line 309: [09] ltedm rlc    [RATE]
Line 310: [10] ltedm pdcp   [RATE]
Line 311: [11] ltedm rrc    [RATE]
Line 312: [12] ltedm nas    [RATE]
Line 313: [15] ltedm pal    [RATE]
Line 314: [16] ltedm status
Line 327: LTE DM : ON
Line 608: <<< LTE DM Status >>>
Line 612: LTE DM : ON
Line 616: LTE DM : OFF
Line 1374: LTEDMTaskPoll_LTE_DM_VU Start
Line 2791: LTEDMTaskPoll_LTE_DM_VU End
Line 2822: [Malloc couldnot able to allocate memory: ] event=%d
Line 2843: [LTEDM_Send_NS_Event: Sending Error] event=%d
Line 2847: [Lte_ProtocolPostEvent: pal Mem Free Fail]
Line 2856: [LTEDM_Send_NS_Event: Sending Error] event=%d
Line 2860: [Lte_ProtocolPostEvent: pal Mem Free Fail]
Line 3457: LTEDM_Send_NS_SignalQuality [Malloc couldnot able to allocate memory]
Line 3497: [LTEDM_Send_NS_SignalQuality: Sending Error]
Line 3501: [LTEDM_Send_NS_SignalQuality: pal Mem Free Fail]
Line 3664: PDCCH C/U:0x%02x 0x%02x, CFI:0x%02x ..PDCCH_FER:(%d/%d), (%d/%d)
Line 3679: PDCCH FORMAT:%X, HOPPING:%d, RA:0x%x, MCS:%d, NDI/TPC:%03d, CQI/SHIFT:%03d, RNTI:0x%X
Line 3692: PDCCH FORMAT:%X, RA:0x%x, MCS:%04d, ACID:%d, SWAP/PCI/RV/NDI:0x%08x, TYPE/TPC/NRB:%07d, RNTI:0x%X
Line 3701: PDCCH FORMAT:%X, RA:0x%x, MCS:%d, ACID:%d, TPMI/PMI/RV/NDI:0x%08x, LD/TPC/NRB:%05d, RNTI:0x%X
Line 3710: PDCCH FORMAT:%X, RA:0x%x, MCS:%d, GAP:%d, NRB:%d, RNTI:0x%X
Line 3718: PDCCH FORMAT:%X, RA:0x%x, MCS:%d, ACID:%d, POff/TPMI/RV/NDI:0x%08x, LD/TPC/NRB:%05d, RNTI:0x%X
Line 3727: PDCCH FORMAT:%X, RA:0x%x, MCS:%d, ACID:%d, RV/NDI:0x%04x, LD/TPC/NRB:%05d, RNTI:0x%X
Line 3736: PDCCH FORMAT:%X, RA:0x%x, MCS:%d, ACID:%d, RV/NDI:0x%04x, TYPE/TPC/NRB:%05d, RNTI:0x%X
Line 3749: PDCCH FORMAT:%X RNTI:0x%x
Line 3755: FREQUENCY HOPPING:%d
Line 3759: BCCH_FER:(%d/%d), (%d/%d)
Line 3781: PDSCH ... PDSCH_FER:(%d/%d), (%d/%d)
Line 3800: CQI: txc(%08d, %08d, %08d, %08d)
Line 3801: CQI: rxc(%08d, %08d, %08d, %08d)
Line 3804: DL RB_CNT(CC0:%d, CC1:%d, CC2:%d)
Line 3805: UL RB_CNT(CC0:%d, CC1:%d, CC2:%d)
Line 3821: [IC_INFO_MAX3] Mode(%d) State(%d) Num_activated(%d) ITF2_CCMapping(%d) ITF1_CCMapping(%d) ITF0_CCMapping(%d)
Line 3822: [IC_INFO_MAX3] ITF0_cellID(%d) ITF1_cellID(%d) ITF2_cellID(%d)
Line 3826: [IC_INFO_MAX2] Mode(%d) State(%d) Num_activated(%d) ITF1_CCMapping(%d) ITF0_CCMapping(%d)
Line 3827: [IC_INFO_MAX2] ITF0_cellID(%d) ITF1_cellID(%d)
Line 4062: LTEDMTaskPoll_LTE_DM_NULL
Line 4099: LTEDMTaskPoll_LTE_DM_L1 Start
Line 4251: | %s_S |CC0| SFN [ %d,%d ], DL EARFCN [%2d, %4d], PCell ID [%3d], DL Bandwidth [ %s]
Line 4258: | CONN_S |CC%d| SFN [ %d,%d ], DL EARFCN [%2d, %4d], SCell ID [%3d], DL Bandwidth [ %s]
Line 4268: |CC0| PCell RSRP [%4d (%4d, %4d)], RSSI [%3d (%3d, %3d)],TimeDifference [ %6d]
Line 4269: |CC0| PCell SINR [ -%01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4270: |CC0| PCell SINR [ %01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4274: |CC0| PCell RSRP [%4d (%4d, %4d)], RSSI [%4d (%4d, %4d)], TimeDifference [ %6d]
Line 4275: |CC0| PCell SINR [ -%01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4276: |CC0| PCell SINR [ %01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4280: |CC0| PCell RSRP [%4d (%4d, %4d)], RSSI [%4d (%4d, %4d)], TimeDifference [ %6d]
Line 4281: |CC0| PCell SINR [ -%01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4282: |CC0| PCell SINR [ %01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4286: |CC0| PCell RSRP [%4d (%4d, %4d, %4d, %4d)], TimeDifference [ %6d]
Line 4287: |CC0| PCell RSRQ [%4d (%4d, %4d, %4d, %4d)]
Line 4288: |CC0| PCell RSSI [%4d (%4d, %4d, %4d, %4d)]
Line 4289: |CC0| PCell SINR [ -%01d.%02d (%3d, %3d, %3d, %3d)]
Line 4290: |CC0| PCell SINR [ %01d.%02d (%3d, %3d, %3d, %3d)]
Line 4301: |CC%d| SCell RSRP [%4d (%4d, %4d)], RSSI [%3d (%3d, %3d)]
Line 4302: |CC%d| SCell SINR [%3d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4306: |CC%d| SCell RSRP [%4d (%4d, %4d)], RSSI [%4d (%4d, %4d)]
Line 4307: |CC%d| SCell SINR [%3d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4311: |CC%d| SCell RSRP [%4d (%4d, %4d)], RSSI [%4d (%4d, %4d)]
Line 4312: |CC%d| SCell SINR [%3d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4316: |CC%d| SCell RSRP [%4d (%4d, %4d, %4d, %4d)], SearchTimeOffset [ %6d]
Line 4317: |CC%d| SCell RSRQ [%4d (%4d, %4d, %4d, %4d)]
Line 4318: |CC%d| SCell RSSI [%4d (%4d, %4d, %4d, %4d)]
Line 4319: |CC%d| SCell SINR [%3d (%3d, %3d, %3d, %3d)]
Line 4386: |CC0| PCell TransMode [%d], CFI [%d], PDCCH [%5d/%5d], UCI [%5d], DCI [%5d]
Line 4391: |CC0| PCell UCI_FORMAT [%d], MCS [%2d], NRB [%2d], RNTI [0x%04X]
Line 4402: |CC0| PCell DCI_FORMAT [%X], MCS [%2d,%2d], NRB [%2d], RNTI [0x%04X]
Line 4406: |CC0| PCell DCI_FORMAT [%X], MCS [%2d], NRB [%2d], RNTI [0x%04X]
Line 4416: |CC0| PCell DL BLER [%3d%%][%5d(%d)/%5d](ack:%5d), DataRate [DL:%7d(%d) (kbps)]
Line 4417: |CC0| PCell UL BLER [%3d%%][%5d(%d)/%5d], DataRate [UL:%7d(%d) (kbps)]
Line 4425: PCell eMBMS DataRate [DL:%7d(%d) (kbps)]
Line 4431: PCell eMBMS PMCH BLER[(ID:%d) %5d/%5d], MRS_SNR_RX0[%3d], MRS_SNR_RX1[%3d]
Line 4432: PCell eMBMS RSRP_RX0[%3d], RSRP_RX1[%3d], RSSI_RX0[%3d], RSSI_RX1[%3d],
Line 4441: |CC%d| SCell TransMode [%d], CFI [%d], PDCCH [%5d/%5d], UCI [%5d], DCI [%5d]
Line 4445: |CC%d| SCell UCI_FORMAT [%d], MCS [%2d], NRB [%2d], RNTI [0x%04X]
Line 4456: |CC%d| SCell DCI_FORMAT [%X], MCS [%2d,%2d], NRB [%2d], RNTI [0x%04X]
Line 4460: |CC%d| SCell DCI_FORMAT [%X], MCS [%2d], NRB [%2d], RNTI [0x%04X]
Line 4470: |CC%d| SCell DL BLER [%3d%%][%5d(%d)/%5d](ack:%5d)]
Line 4471: |CC%d| SCell DataRate [DL:%7d(%d) (kbps)]
Line 4475: |CC%d| SCell UL BLER [%3d%%][%5d(%d)/%5d], DataRate [UL:%7d(%d) (kbps)]
Line 4481: |CC%d| SCell eMBMS DataRate [DL:%7d(%d) (kbps)]
Line 4487: |CC%d| SCell eMBMS PMCH BLER [(ID:%d) %5d/%5d]
Line 4488: |CC%d| SCell eMBMS RSRP_RX0[%3d], RSRP_RX1[%3d], RSSI_RX0[%3d], RSSI_RX1[%3d],
Line 4515: CA DL DataRate [P:%7d(%d) (kbps), S:%7d(%d) (kbps), T:%7d(%d) (kbps)]
Line 4516: CA UL DataRate [P:%7d(%d) (kbps), S:%7d(%d) (kbps), T:%7d(%d) (kbps)]
Line 4528: |CC0| UL Power : PRACH [%d], PUCCH [%d], PUSCH [%d, CC%d:%d], SRS [%d]
Line 4532: |CC0| UL Power : PRACH [%d], PUCCH [%d], PUSCH [%d], SRS [%d]
Line 4540: |CC0| PCell CQI [%2d,%2d], RI [%2d], NormTP [ %5d (bits/10RB)]
Line 4544: |CC0| PCell CQI [%2d,%2d], RI [%2d], PMI[%2d,%2d], NormTP [ %5d (bits/10RB)]
Line 4548: |CC0| PCell CQI [%2d], PMI[%2d,%2d], NormTP [ %5d (bits/10RB)]
Line 4552: |CC0| PCell CQI [%2d], NormTP [ %5d (bits/10RB)]
Line 4561: |CC%d| SCell CQI [%2d,%2d], RI [%2d]
Line 4565: |CC%d| SCell CQI [%2d,%2d], RI [%2d], PMI[%2d,%2d]
Line 4569: |CC%d| SCell CQI [%2d], PMI[%2d,%2d]
Line 4573: |CC%d| SCell CQI [%2d]
Line 4585: |CC0| PCell Frequency [DL: %dkHz, UL: %dkHz], Bandwidth [DL: %s, UL: %s], Antenna No. [eNB: %d, UE: %d]
Line 4592: |CC%d| SCell Frequency [DL: %dkHz, UL: %dkHz], Bandwidth [DL: %s, UL: %s], Antenna No. [eNB: %d, UE: %d]
Line 4596: |CC%d| SCell Frequency [DL: %dkHz], Bandwidth [DL: %s], Antenna No. [eNB: %d, UE: %d]
Line 4601: |CC0| AGC    %3d %3d (%3d %3d) (%4d %4d) , RMS Cntl : %2d dB
Line 4606: |CC%d| AGC    %3d %3d (%3d %3d) (%4d %4d)
Line 4610: |CC0| DCmV  %4d %4d, %4d %4d
Line 4615: |CC%d| DCmV  %4d %4d, %4d %4d
Line 4619: |CC0| AFC PDM: %4d
Line 4624: AFC ANGLE CC%d: %4d
Line 4637: |CC%d| STR  %7d	%4d	%7d %7d  |  RTG [ %6d]
Line 4644: |CC0| STR  %7d  %4d  %7d %7d  |  RTG [ %6d]
Line 4647: GP ADC  %4d, %4d degrees Celsius
Line 4684: LTEDMTaskPoll_LTE_DM_L1 End
Line 4718: RACH : INIT [%3d], HO_DEDI [%3d], HO_RAND [%3d], RACH_RLF [%3d], UL_RAND [%3d], DL_DEDI [%3d], DL_RAND [%3d]
Line 4719: SR [%5d, %5d], TA Timer Expired [%3d], ReTx BSR Timer Expired [%3d], DSR MAX FAIL [%3d][%3d]
Line 4850: Cell Reselection : Start [%3d], Complete [%3d]
Line 4854: Meas Report [%3d] | Handover : Start [%3d], Complete[%3d], Latency [%3dms] | RRE : Start [%3d], Reject [%3d]
Line 4859: RRE Cause : T304HoFail[%3d], RachFail[%3d], RlcMaxRetrans[%3d], T310OutOfSync[%3d], ReconfigFail[%3d]
Line 4862: RRE Cause : IntegrityCheckFail[%3d], MobCmdFail[%3d], MobCmdFailRrcAbort[%3d], IratConfigFail[%3d], MuiListFail[%3d], Other[%3d]
Line 4867: Protocol Error Detect : lte_ul_oos_cnt[%3d], lte_rach_rar_mismatch_cnt[%3d], lte_rach_access_fail_cnt[%3d], lte_rrc_oos_cnt[%3d], lte_rrc_rlf_cnt[%3d], lte_rrc_resel_fail_cnt[%3d]
Line 4870: Protocol Error Detect : lte_rrc_ho_fail_cnt[%3d], lte_rrc_irat_ho_fail_cnt[%3d], lte_rrc_irat_resel_fail_cnt[%3d], lte_rrc_irat_redirect_fail_cnt[%3d], lte_rrc_sib_read_fail_cnt[%3d]
Line 4925: Cell Reselection : Start [%3d], Complete [%3d]
Line 4929: Meas Report [%3d] | Handover : Start [%3d], Complete[%3d], Latency [%3dms] | RRE : Start [%3d], Reject [%3d]
Line 4934: RRE Cause : T304HoFail[%3d], RachFail[%3d], RlcMaxRetrans[%3d], T310OutOfSync[%3d], ReconfigFail[%3d]
Line 4937: RRE Cause : IntegrityCheckFail[%3d], MobCmdFail[%3d], MobCmdFailRrcAbort[%3d], IratConfigFail[%3d], MuiListFail[%3d], Other[%3d]
Line 4942: Protocol Error Detect : lte_ul_oos_cnt[%3d], lte_rach_rar_mismatch_cnt[%3d], lte_rach_access_fail_cnt[%3d], lte_rrc_oos_cnt[%3d], lte_rrc_rlf_cnt[%3d], lte_rrc_resel_fail_cnt[%3d]
Line 4945: Protocol Error Detect : lte_rrc_ho_fail_cnt[%3d], lte_rrc_irat_ho_fail_cnt[%3d], lte_rrc_irat_resel_fail_cnt[%3d], lte_rrc_irat_redirect_fail_cnt[%3d], lte_rrc_sib_read_fail_cnt[%3d]
Line 5183: | U-CPU Idle = %2d.%d%%, %d MHz | L-CPU Idle = %d%%, HARQ stuck = %d |
Line 5213: SystemDynamic Usage : %2d%% (%2d%%) [ %dk total, %dk used, %dk free ]
Line 5217: PMD Usage: %2d%% (%2d%%) [ %dk total, %dk used, %dk free ]
Line 5496: LTEDMTaskPoll : %s
Line 6650: cc_idx (%d) of the given sCellIndex (%d) EXCEEDs the maximum (3)!!!
Line 6663: The input cc_idx (%d) EXCEEDs the maximum (3)!!!
Line 9574: PCell Neighbor(%d): EARFCN[%4d], PCID[%3d], RSRP_N[%4d (%4d, %4d)], RSRQ_N[%3d]
Line 9610: SCell Freq. Neighbor(%d): EARFCN[%4d], PCID[%3d], RSRP_N[%4d (%4d, %4d)], RSRQ_N[%3d]
Line 9653: InterFreq. Neighbor(%d): EARFCN[%4d], PCID[%3d], RSRP_N[%4d (%4d, %4d)], RSRQ_N[%3d]
Line 9659: InterFreq. Neighbor(%d): EARFCN[%4d], PCID[%3d], RSRP_N[%4d (%4d, %4d)], RSRQ_N[%3d]
Line 9699: UtraFreq. Neighbor(%d): UARFCN[%5d], PSC[%3d], RSCP[%4d], EcNo[%3d]
Line 9738: GeranFreq. Neighbor(%d): ARFCN[%5d], BSIC[%3d], RSSI[%3d]
Line 9764: [MAC] Tx : PDU[%d] Rx : PDU[%d] [ST:%d](per 960ms)
Line 9771: [RLC] Tx : RB_ID[%d] SDU[%d] SDU[%d Bytes] PDU[%d] ReTx PDU[%d]
Line 9789: [RLC] Rx : RB_ID[%d] SDU[%d] SDU[%d Bytes] PDU[%d] ReRx PDU[%d]
Line 9807: [PDCP] Tx : RB_ID[%d] PDU[%d] Rx : RB_ID[%d] PDU[%d]
Line 9823: [MAC] Tx : PDU[%d] Rx : PDU[%d] [ST:%d](Reset/Release case)
Line 9840: [RLC] Tx : RB_ID[%d] SDU[%d] SDU[%d Bytes] PDU[%d] ReTx PDU[%d]
Line 9861: [RLC] Rx : RB_ID[%d] SDU[%d] SDU[%d Bytes] PDU[%d] ReRx PDU[%d]
Line 9882: [PDCP] Tx : RB_ID[%d] PDU[%d] Rx : RB_ID[%d] PDU[%d]
Line 9926: Invalid stackNum:%d
Line 9936: Invalid stackNum:%d
Line 9953: Invalid stackNum:%d
Line 9963: Invalid stackNum:%d
Line 10038: Invalid sCellIndex:%d
Line 11008: LTE dsl1rc State: %d
Line 11041: [%s] LTE RF Black-out during %d (ms)
Line 11280: [LCE_CONN] PHYTP[%d], CSITP[%d]
Line 11289: [LCE_IDLE] PHYTP[%d], CSITP[%d]
Line 11320: [LCE_IDLE] Conf_Level[%d]
