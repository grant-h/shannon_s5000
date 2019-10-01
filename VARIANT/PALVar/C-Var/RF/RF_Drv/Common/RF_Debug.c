Line 92: [RF DBG] =================== GPIO Dump START ===================
Line 93: [RF DBG] GPIO size:%d RFIO state:0x%x
Line 102: [RF DBG] [%s] [gpio%d] [%s] [%s] [%s]
Line 108: [RF DBG] [%s] [gpio%d] [%s] [%s] [%s] - XCP_ANT_SW%d
Line 118: [RF DBG] =================== GPIO(TRX SW) Dump START ===================
Line 119: [RF DBG] GPIO size:%d
Line 128: [RF DBG] [%s] [gpio%d] [%s] [%s] [%s]
Line 134: [RF DBG] [%s] [gpio%d] [%s] [%s] [%s] - XCP_ANT_SW%d
Line 142: [RF DBG] TRX SW GPIO is not initialized!!! size(%d)
Line 239: [RF DBG] ================ LNA Dump START (%s dev type)================
Line 249: %s: Invalid usid[0x%x] or path[0x%x]
Line 252: [RF DBG] LNA usid:0x%x mipi_ch:%d
Line 253: [RF DBG] LNA Addr0:0x%x Addr1:0x%x Addr2:0x%x Addr3:0x%x Addr0x1C:0x%x
Line 267: [RF DBG] LNA usid:0x%x mipi_ch:%d
Line 268: [RF DBG] LNA Addr0:0x%x Addr1:0x%x Addr2:0x%x Addr3:0x%x Addr0x1C:0x%x
Line 287: [RF DBG] [%s] [gpio%d] [%s] [%s] [%s]
Line 293: [RF DBG] [%s] [gpio%d] [%s] [%s] [%s] - XCP_ANT_SW%d 
Line 328: [RF DBG] ================ PAM Dump START (%s dev type) ================
Line 329: [RF DBG] PA usid:0x%x mipi_ch:%d
Line 335: [RF DBG] PAM dump 0x%x 0x%x 0x%x 0x%x 0x%x
Line 343: [RF DBG] PAM dump 0:0x%x 1:0x%x 2:0x%x 3:0x%x 1C:0x%x
Line 350: [RF DBG] =================== GPIO PAM (Not Supported)===================
Line 371: [RF DBG] SM votage read error
Line 374: [RF DBG] =================== SM Dump START ===================
Line 375: [RF DBG] SM mode:%d voltage:%d
Line 402: [RF DBG] ================ FEM Dump START (%s dev type) ================
Line 408: [RF DBG] FEM TRX_type:%s usid:0x%x mipi_ch:%d
Line 414: [RF DBG] FEM 0x%x 0x%x 0x%x 0x%x 0x%x
Line 422: [RF DBG] FEM 0:0x%x 1:0x%x 2:0x%x 3:0x%x 1C:0x%x
Line 440: %s: Invalid usid[0x%x] or path[0x%x]
Line 443: [RF DBG] FEM TRX_type:%s usid:0x%x mipi_ch:%d
Line 449: [RF DBG] FEM 0x%x 0x%x 0x%x 0x%x 0x%x
Line 457: [RF DBG] FEM 0:0x%x 1:0x%x 2:0x%x 3:0x%x 1C:0x%x
Line 488: [RF DBG] =================== RACH Fail Dump START ===================
Line 496: RachCnt(%d) TransTTI(%d) Power(%d) GpadcVal(%d)
Line 555: [RF DBG] %s RFCTRL Power Domain Off !!
Line 565: [RF DBG] %s !! [RachFailCnt:%d][RachFailDumpStep:%d]
Line 599: [RF DBG] %s cal status check !! : %d
Line 682: [RF DBG] =================== HIGH AGC Dump START ===================
Line 683: [RF DBG] AGC of CC%d %s is %d, over %d
Line 696: [RF DBG] AGC of CC%d %s is %d, under %d
Line 717: [RF DBG] RF_DBG_Dump_abnormal_Tx: invalid trx_type(%d)
Line 737: [RF] PD(PAM) : USID[%x] 0x0[%2X] 0x1[%2X] 0x2[%2X] 0x3[%2X] 0x4[%2X] 0x1C[%2X]
Line 746: [RF] PD(PAM) : 0x1D[%2X] MIPI_Read(0x0, 0xD, 0x3)[%2X] MIPI_Read(0x0, 0xD, 0x1C)[%2X] MIPI_Read(0x2, 0xD, 0x3)[%2X] MIPI_Read(0x2, 0xD, 0x1C)[%2X]
Line 754: [RF DBG] RF_DBG_Dump_abnormal_Tx: pd type[%d] Not supported
Line 779: [Info] %s Band[%d][%d] RebuildCheck[%d] OriginalPDStageOffset[%d]
Line 793: [Info] %s : Not need to rebuild
Line 802: [Info] %s : Restore Start : StageOffset[%d]
Line 807: [Info] %s : Abnormal gpadc => CRASH !!!!
Line 815: [Info] %s Start : PDStageShift[%d dB] Original_offset[%d]
Line 865: [RF Drv] %s : exception : cal status[%d] mtm[%d] BigDataReport[%d]
Line 879: [Info] %s : Invalide TX TYPE!!!
Line 893: [Info] FBRX CONFIG[%d] FBRX GAIN[%d]
Line 909: [Info] Modem State GSM[%d] HSPA[%d] LTE[%d] ULCA[%d]
Line 945: [Info] SFN[%4d] CHTYPE[%d] PdStage[%x] GPADC[%6d] TXPOWER[%5d] PDPOWER[%5d] Diff[%5d]
Line 959: [Info] SFN[%4d] PA mipi [0x%x 0x%x 0x%x 0x%x 0x%x] VCC[%3d]
Line 989: [Info] SFN[%d] RXVALUE[%d] PATEMP[%d] CH[%d] Abnormal Counter[%d] Before CHTYPE[%d]
Line 991: [Info] PLLSTATE[%d] TopConfig1[0x%x] TopConfig2[0x%x] MS[0x%x] NVOffset[%d] TX GAIN[%d]
Line 1010: [Info] %s : First Bigdata report
Line 1014: [Info] %s : Due to same band, skip bigdata report
Line 1020: [Info] %s Bigdata report !!!! 
Line 1053: [Info] RFPD : PD Stage recover OriginalPDStageOffset[%d] StopFinetracking[%d]
Line 1138: [CrashInfo] ================================= %s START===============================
Line 1140: [CrashInfo] uarfcn[%d] channelState[%d] rscp[%d]
Line 1141: [CrashInfo] Tx Lock[%d] Tx_topconfig1[0x%x] Tx_topconfig2[0x%x] Tx_gain[0x%x]
Line 1142: [CrashInfo] txPower[%d] pdPower[%d] pdadc[%d] temperature[%d] 
Line 1143: [CrashInfo] PA Vcc[%d] PA Bias[0x%x] PA Mode[0x%x]
Line 1147: [CrashInfo] FBRX config[0x%x] FBRX gain[0x%x] 
Line 1150: [CrashInfo HSPA] =================================E N D================================
