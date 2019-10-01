Line 282: ***********************************************************************************************
Line 361: [SFR] UAIF0_CTRL0=0x%08x, UAIF0_CTRL1=0x%08x, UAIF0_STATUS=0x%08x, UAIF1_CTRL0=0x%08x, UAIF1_CTRL1=0x%08x, UAIF1_STATUS=0x%08x
Line 371: [SFR] UAIF2_CTRL0=0x%08x, UAIF2_CTRL1=0x%08x, UAIF2_STATUS=0x%08x, UAIF3_CTRL0=0x%08x, UAIF3_CTRL1=0x%08x, UAIF3_STATUS=0x%08x
Line 381: [SFR] ROUTE_CTRL0=0x%08x, ROUTE_CTRL1=0x%08x, ROUTE_CTRL2=0x%08x, UAIF4_CTRL0=0x%08x, UAIF4_CTRL1=0x%08x, UAIF4_STATUS=0x%08x
Line 389: [SFR] SPUS_CTRL0=0x%08x, SPUS_CTRL1=0x%08x, SPUM_CTRL0=0x%08x, SPUM_CTRL1=0x%08x
Line 398: [SFR] RDMA4_CTRL0=0x%08x, RDMA4_STATUS=0x%08x SPUS_ASRC4_CTRL=0x%08x, SPUS_ASRC4_IS_PARA0=0x%08x, SPUS_ASRC4_OS_PARA0=0x%08x
Line 407: [SFR] RDMA6_CTRL0=0x%08x, RDMA6_STATUS=0x%08x, SPUS_ASRC6_CTRL=0x%08x, SPUS_ASRC6_IS_PARA0=0x%08x, SPUS_ASRC6_OS_PARA0=0x%08x
Line 417: [SFR] RDMA7_CTRL0=0x%08x, RDMA7_STATUS=0x%08x, SPUS_ASRC7_CTRL=0x%08x, SPUS_ASRC7_IS_PARA0=0x%08x, SPUS_ASRC7_OS_PARA0=0x%08x
Line 426: [SFR] WDMA0_CTRL=0x%08x, WDMA0_STATUS=0x%08x, SPUM_ASRC0_CTRL=0x%08x, SPUM_ASRC0_IS_PARA0=0x%08x, SPUM_ASRC0_OS_PARA0=0x%08x
Line 435: [SFR] WDMA2_CTRL=0x%08x, WDMA2_STATUS=0x%08x, SPUM_ASRC2_CTRL=0x%08x, SPUM_ASRC2_IS_PARA0=0x%08x, SPUM_ASRC2_OS_PARA0=0x%08x
Line 451: [SFR] WDMA3_CTRL=0x%08x, WDMA3_STATUS=0x%08x, SPUM_ASRC3_CTRL=0x%08x, SPUM_ASRC3_IS_PARA0=0x%08x, SPUM_ASRC3_OS_PARA0=0x%08x
Line 452: ***********************************************************************************************
Line 463: [VHM_initSampleBuffer] Entry
Line 582: [VHM_VIFcheck_restart] VIF_restart_status(%d)
Line 644: [VIF_RxMuteCount] Cnt %d
Line 659: [VIF_TxMuteCount] Cnt %d
Line 685: [VIF_SIFS2_CNT_Get] reg 0x%x
Line 800: [VIF_cpAudioPath_Set] VIFcpAudioPath %d cpAudioPath %d
Line 1043: [VIF_apAudioPath_Set] Keep the previous VIFapAudioPath
Line 1048: [VIF_apAudioPath_Set] VIFapAudioPath %d apAudioPath %d RDMA6_IN_SRATE %d
Line 1152: [Wdma3_cb] Discard WDMA INT(wd2:%d, echoRef:%d)
Line 1175: [Wdma4_cb] Discard WDMA INT(wd2:%d, echoRef:%d)
Line 1207: [VHM_VIFInit] Entry (AP FW ver.0x%X) - VIF_tx_status(%d) VIF_rx_status(%d)
Line 1209: [VHM_VIFInit] Entry src_inst_upto48 (%d) src_inst_down48(%d) src_inst_upto32 (%d) src_inst_down32(%d) src_inst_upto16 (%d) src_inst_down16(%d)
Line 1220: [VHM_VIFInit] VIF status mismatch : tx(%d/%d) rx(%d/%d)
Line 1293: [VHM_VIFInit] Unsupported sampling rate (%d)
Line 1397: [VHM_VIFInit] Exit DMA_SINGLE(%d) DMA_SINGLE_TX(%d) DMA_SINGLE_RX(%d) DMA_SR_TX(%d) DMA_SR_RX(%d)
Line 1444: [VHM_VIFStart_Tx]CreateSRC[SW_SRC_MIXEDREF_LEFT_48Khz] 48000 to %d (gCur_Path:%d)(handle: 0x%x)
Line 1448: [VHM_VIFStart_Tx][ERROR]CreateSRC[SW_SRC_MIXEDREF_LEFT_48Khz] is not NULL (0x%x)
Line 1455: [VHM_VIFStart_Tx]CreateSRC[SW_SRC_MIXEDREF_RIGHT_48Khz] 48000 to %d (gCur_Path:%d)(handle: 0x%x)
Line 1459: [VHM_VIFStart_Tx][ERROR]CreateSRC[SW_SRC_MIXEDREF_RIGHT_48Khz] is not NULL (0x%x)
Line 1561: [VHM_VIFStart_Tx] Entry (gCur_Path=%d) (wdma%d)
Line 1583: [CALLFWD] ENTRY - RDMA0_CTRL0=0x%08x, RDMA1_CTRL0=0x%08x, RDMA2_CTRL0=0x%08x, RDMA3_CTRL0=0x%08x, RDMA4_CTRL0=0x%08x, RDMA5_CTRL0=0x%08x
Line 1597: [WDMA4 restart] Entry (gCur_Path=%d)
Line 1603: [WDMA4 restart fail] Entry (gCur_Path=%d / Status=%d)
Line 1614: [WDMA3 restart] Entry (gCur_Path=%d)
Line 1620: [WDMA3 restart fail] Entry (gCur_Path=%d / Status=%d)
Line 1646: [CALLFWD] EXIT - RDMA0_CTRL0=0x%08x, RDMA1_CTRL0=0x%08x, RDMA2_CTRL0=0x%08x, RDMA3_CTRL0=0x%08x, RDMA4_CTRL0=0x%08x, RDMA5_CTRL0=0x%08x
Line 1667: [VHM_VIFStart_Rx] Entry (ReqSamplingRate=%d)
Line 1730: [VHM_VIFStart_Rx] Exit src_inst_upto48 (%d) src_inst_down48(%d) src_inst_upto32 (%d) src_inst_down32(%d) src_inst_upto16 (%d) src_inst_down16(%d)
Line 1747: [VHM_VIF SW FadeOut] Entry
Line 1765: [VHM_VIFStop] Entry
Line 1774: [VHM_VIFStop] channel_stop pVHMTxCH
Line 1779: [VHM_VIFStop] channel_stop pVHMRxCH
Line 1801: [VHM_VIFStop] VIF_tx_status(%d), VIF_rx_status(%d)
Line 1846: [VHM_VIFDeInit] Entry
Line 1848: [VHM_VIFDeInit] Entry src_inst_upto48 (%d) src_inst_down48(%d) src_inst_upto32 (%d) src_inst_down32(%d) src_inst_upto16 (%d) src_inst_down16(%d)
Line 1857: [VHM_VIFDeInit] Exit src_inst_upto48 (%d) src_inst_down48(%d) src_inst_upto32 (%d) src_inst_down32(%d) src_inst_upto16 (%d) src_inst_down16(%d)
