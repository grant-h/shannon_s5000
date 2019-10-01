Line 77: ISR_A2D ST: [tTX=0x%08X] [tRFIF=0x%08X] [tCS=0x%08X] [tCEtJD=0x%08X] [tSLP=0x%08X] [tHSLP=0x%08X] [tCI=0x%08X]
Line 111: ISR_A2D ED: [tTX=0x%08X] [tRFIF=0x%08X] [tCS=0x%08X] [tCEtJD=0x%08X] [tSLP=0x%08X] [tHSLP=0x%08X] [tCI=0x%08X]
Line 129: ISR_D2A: [SbfCnt=%4d] tFRIF_XSWI_GEN [ipc_msg= %X]
Line 135: ISR_D2A: [SbfCnt=%4d] tCS_XSWI_GEN [ipc_msg= %X]
Line 141: ISR_D2A: [SbfCnt=%4d] tCE_tJD_XSWI_GEN [ipc_msg= %X]
Line 147: ISR_D2A: [SbfCnt=%4d] tSLP_XSWI_GEN [ipc_msg= %X]
Line 153: ISR_D2A: [SbfCnt=%4d] tHSLP_XSWI_GEN [ipc_msg= %X]
Line 159: ISR_D2A: [SbfCnt=%4d] tHSLP2_XSWI_GEN [ipc_msg= %X]
Line 165: ISR_D2A: [SbfCnt=%4d] tDM_XSWI_GEN [ipc_msg= %X]
Line 171: ISR_D2A: [SbfCnt=%4d] tMON_XSWI_GEN [ipc_msg= %X]
Line 177: ISR_D2A: [SbfCnt=%4d] tAbruptHold_XSWI_GEN [ipc_msg= %X]
Line 182: ISR_D2A: [SbfCnt=%4d] tAtcuException_XSWI_GEN [ipc_msg= %X]
Line 197: IpcHndlr_thspa_C2D_NullFunc called: addr %d!!!!!
Line 215: IpcHndlr_thspa_C2D_RF_init [cmd=%d] CMD UNKNOWN!!!!!
Line 219: IpcHndlr_thspa_C2D_RF_init done: cmd %d, dataSize %d, currentReadIndex %d
Line 238: ISR_A2D: [SbfCnt=%4d] AGC_ASYNC
Line 245: ISR_A2D: [SbfCnt=%4d] AGC_SYNC_SF
Line 251: ISR_A2D: [SbfCnt=%4d] AGC_SYNC_TS
Line 270: ISR_A2D: [SbfCnt=%4d] AGC_SYNC_PS [dpch_slot=0x%x][spi0=0x%x][spi1=0x%x][spi2=0x%x]
Line 277: ISR_A2D: [SbfCnt=%4d] AGC CLEAR
Line 283: ISR_A2D: [SbfCnt=%4d] AGC settling
Line 285: WARNING [SbfCnt=%4d] AGC settling received during ASYNC_AGC_MODE
Line 293: ISR_A2D: [SbfCnt=%4d] AGC_ASYNC_RX_CAL_ON
Line 300: ISR_A2D: [SbfCnt=%4d] AGC_ASYNC_RX_CAL_OFF
Line 308: ISR_A2D: [SbfCnt=%4d] AGC_CS_START
Line 315: ISR_A2D: [SbfCnt=%4d] AGC_CS_END
Line 319: IpcHndlr_thspa_C2D_RF_agc [cmd=%d] CMD UNKNOWN!!!!!
Line 325: IpcHndlr_thspa_C2D_RF_agc done: cmd %d, dataSize %d, currentReadIndex %d
Line 343: IpcHndlr_thspa_C2D_RF_Mixer_init [cmd=%d] CMD UNKNOWN!!!!!
Line 347: IpcHndlr_thspa_C2D_RF_Mixer_init done: cmd %d, dataSize %d, currentReadIndex %d
Line 383: IpcHndlr_thspa_C2D_RF_ant_switch [cmd=%d] CMD UNKNOWN!!!!!
Line 387: IpcHndlr_thspa_C2D_RF_ant_switch done: cmd %d, dataSize %d, currentReadIndex %d
Line 405: ISR_A2D: [SbfCnt=%4d] Inter-Freq config [SEARCH_WINDOW_SIZE=%d]
Line 409: ISR_A2D: [SbfCnt=%4d] Inter-Freq release 
Line 412: IpcHndlr_thspa_C2D_MEAS_inter [cmd=%d] CMD UNKNOWN!!!!!
Line 416: IpcHndlr_thspa_C2D_MEAS_inter done: cmd %d, dataSize %d, currentReadIndex %d
Line 437: ISR_A2D: [SbfCnt=%4d] T2O_CONFIG, rIRAT_GAP_BITMAP %d, gap_type %d
Line 451: ISR_A2D: [SbfCnt=%4d] O2T_CONFIG, chipx8_offset %d, subframe_offset %d
Line 455: ISR_A2D: [SbfCnt=%4d] IRAT START
Line 459: ISR_A2D: [SbfCnt=%4d] IRAT END
Line 462: IpcHndlr_thspa_C2D_RF_irat [cmd=%d] CMD UNKNOWN!!!!!
Line 466: IpcHndlr_thspa_C2D_RF_irat done: cmd %d, dataSize %d, currentReadIndex %d
Line 545: ISR_A2D: Frequency Change[SbfCnt=%4d] - [Prx_IF_type=%d][Prx_max_UsedWord=%d][Drx_IF_type=%d][Drx_max_UsedWord=%d]
Line 547: ISR_A2D: Frequency Change[SbfCnt=%4d] - [Prx_ExtLNA_Band_A_on0=%x][Prx_ExtLNA_Band_A_on1=%x][Prx_ExtLNA_Band_A_on2=%x][Prx_ExtLNA_Band_A_off0=%x][Prx_ExtLNA_Band_A_off1=%x][Prx_ExtLNA_Band_A_off2=%x]
Line 550: ISR_A2D: Frequency Change[SbfCnt=%4d] - [Prx_ExtLNA_Band_F_on0=%x][Prx_ExtLNA_Band_F_on1=%x][Prx_ExtLNA_Band_F_on2=%x][Prx_ExtLNA_Band_F_off0=%x][Prx_ExtLNA_Band_F_off1=%x][Prx_ExtLNA_Band_F_off2=%x]
Line 555: IpcHndlr_thspa_C2D_RF_freq_change [cmd=%d] CMD UNKNOWN!!!!!
Line 559: IpcHndlr_thspa_C2D_RF_freq_change done: cmd %d, dataSize %d, currentReadIndex %d
Line 573: IpcHndlr_thspa_C2D_RF_def_mipi_set done: cmd %d, dataSize %d, currentReadIndex %d
Line 604: IPC_C2D [SbfCnt=%4d] SEARCHER_s1 [cmd=%d] CMD UNKNOWN!!!!!
Line 608: IPC_C2D [SbfCnt=%4d] SEARCHER_s1 [cmd=%d] [dataSize=%d] [currentReadIndex=%d]
Line 626: IPC_C2D [SbfCnt=%4d] SEARCHER_s2 [cmd=%d] CMD UNKNOWN!!!!!
Line 630: IPC_C2D [SbfCnt=%4d] SEARCHER_s2 [cmd=%d] [dataSize=%d] [currentReadIndex=%d]
Line 651: IPC_C2D [SbfCnt=%4d] SEARCHER_mp [cmd=%d] CMD UNKNOWN!!!!!
Line 655: IPC_C2D [SbfCnt=%4d] SEARCHER_mp [cmd=%d] [dataSize=%d] [currentReadIndex=%d]
Line 670: IPC_C2D [SbfCnt=%4d] SEARCHER_sfn [cmd=%d] CMD UNKNOWN!!!!!
Line 674: IPC_C2D [SbfCnt=%4d] SEARCHER_sfn [cmd=%d] [dataSize=%d] [currentReadIndex=%d]
Line 689: IPC_C2D [SbfCnt=%4d] SEARCHER_stop [cmd=%d] CMD UNKNOWN!!!!!
Line 693: IPC_C2D [SbfCnt=%4d] SEARCHER_stop [cmd=%d] [dataSize=%d] [currentReadIndex=%d]
Line 717: IPC_C2D [SbfCnt=%4d] AFC [cmd=%d] CMD UNKNOWN!!!!!
Line 721: IPC_C2D [SbfCnt=%4d] AFC [cmd=%d] [dataSize=%d] [currentReadIndex=%d]
Line 739: IPC_C2D [SbfCnt=%4d] TT [cmd=%d] CMD UNKNOWN!!!!!
Line 743: IPC_C2D [SbfCnt=%4d] TT [cmd=%d] [dataSize=%d] [currentReadIndex=%d]
Line 759: IpcHndlr_thspa_C2D_CEJD_common [cmd=%d] CMD UNKNOWN!!!!!
Line 763: IpcHndlr_thspa_C2D_CEJD_common done: cmd %d, dataSize %d, currentReadIndex %d
Line 788: IpcHndlr_thspa_C2D_CEJD_clpmode [cmd=%d] CMD UNKNOWN!!!!!
Line 792: IpcHndlr_thspa_C2D_CEJD_clpmode done: cmd %d, dataSize %d, currentReadIndex %d
Line 808: IPC_C2D [SbfCnt=%4d] PICH [cmd=%d] CMD UNKNOWN!!!!!
Line 812: IPC_C2D [SbfCnt=%4d] PICH [cmd=%d] [dataSize=%d] [currentReadIndex=%d]
Line 827: IPC_C2D [SbfCnt=%4d] HICH [cmd=%d] CMD UNKNOWN!!!!!
Line 830: IPC_C2D [SbfCnt=%4d] HICH [cmd=%d] [dataSize=%d] [currentReadIndex=%d]
Line 845: IpcHndlr_thspa_C2D_CEJD_dsch [cmd=%d] CMD UNKNOWN!!!!!
Line 848: IpcHndlr_thspa_C2D_CEJD_dsch done: cmd %d, dataSize %d, currentReadIndex %d
Line 863: IpcHndlr_thspa_C2D_CEJD_measure_dlpc [cmd=%d] CMD UNKNOWN!!!!!
Line 867: IpcHndlr_thspa_C2D_CEJD_measure_dlpc done: cmd %d, dataSize %d, currentReadIndex %d
Line 882: IPC_C2D [SbfCnt=%4d] SB [cmd=%d] CMD UNKNOWN!!!!!
Line 886: IPC_C2D [SbfCnt=%4d] SB [cmd=%d] [dataSize=%d] [currentReadIndex=%d]
Line 900: IpcHndlr_thspa_C2D_CEJD_multicell done: cmd %d, dataSize %d, currentReadIndex %d
Line 919: IPC_C2D [SbfCnt=%4d] SLP [cmd=%d] CMD SLP WA NOT USED!!!!!
Line 922: IPC_C2D [SbfCnt=%4d] SLP [cmd=%d] CMD UNKNOWN!!!!!
Line 926: IPC_C2D [SbfCnt=%4d] SLP [cmd=%d] [dataSize=%d] [currentReadIndex=%d]
Line 951: IPC_C2D [SbfCnt=%4d] THSLP_dsch [cmd=%d] CMD UNKNOWN!!!!!
Line 955: IPC_C2D [SbfCnt=%4d] THSLP_dsch [cmd=%d] [dataSize=%d] [currentReadIndex=%d]
Line 975: IPC_C2D [SbfCnt=%4d] THSLP_agch [cmd=%d] CMD UNKNOWN!!!!!
Line 979: IPC_C2D [SbfCnt=%4d] THSLP_agch [cmd=%d] [dataSize=%d] [currentReadIndex=%d]
Line 994: IpcHndlr_thspa_C2D_TX_config [cmd=%d] CMD UNKNOWN!!!!!
Line 998: IpcHndlr_thspa_C2D_TX_config done: cmd %d, dataSize %d, currentReadIndex %d
Line 1012: IpcHndlr_thspa_C2D_TCI done: cmd %d, dataSize %d, currentReadIndex %d
Line 1026: IpcHndlr_thspa_C2D_VOICE done: cmd %d, dataSize %d, currentReadIndex %d
Line 1068: IpcHndlr_thspa_C2D_Hold_Free done: cmd %d, dataSize %d, currentReadIndex %d, hold_free_info %d
