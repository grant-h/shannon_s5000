Line 506: HAL_LmacCheckXdma : int_tc_status[%x]
Line 516: HAL_LmacXdmaWaitBeforeDSPHotSwap : 
Line 533: HAL_LmacXdmaWaitBeforeDSPHotSwap : pal_SmRetrieveEvents fail
Line 558: HAL_LmacXdmaQueuePut : ReqID[%x], DescID[%x], Dest[%x], Src[%x], Size[%x]
Line 581: HAL_LmacXdmaDone : DoneIdx[%x], CurReqID[%x], NextReqID[%x]
Line 593: HAL_LmacXdmaDone : L2TCM_XDMA_REQBLOCK_WAIT done [%x,%x]
Line 600: HAL_LmacXdmaDone : L2TCM_XDMA_REQBLOCK_DSP_CODE_HOTSWAP done [%x,%x]
Line 623: HAL_LmacXdmaDone : bufPtr : %x
Line 655: HAL_LmacXdmaDone : Run Pend XDMA ReqID[%x]
Line 688: %s
Line 705: HAL_LmacXdmaWait : pal_SmRetrieveEvents fail
Line 739: HAL_LmacXdmaRequest : CurIdx[%x], NextIdx[%x], DoneIdx[%x]
Line 907: RX Security Blocked[%x] !!!!
Line 927: Clear Security Blocked TX[%x],RX[%x] in Idle State !!!!
Line 968: TX busy on wake-up, LMAC Busy(%d)
Line 1491: HAL_Set2TXTransfer : Desc num[%d] over !!!!
Line 1514: HAL_Set2TXTransfer : 2TX HID[%d] wrong!!!!
Line 1619: FSM Busy
Line 1715: Illegal Modem Access on POWER OFF
Line 1724: TX_FSM0[%d], TX_FSM1[%d]
Line 1981: HAL_LmacGetCgType : %x
Line 1990: HAL_LmacGetPDUType : %x
Line 1997: HAL_LmacPrintHeaderInfo0 : V[%x], CG[%x], CC[%x], PHYCH[%x], TTI[%x], RNTI[%x]
Line 2009: HAL_LmacPrintOverallHeaderInfo0 : CurrAddr[%x], NextAddr[%x], LCID[%x], MacCE_LEN[%x]
Line 2015: HAL_LmacPrintOverallHeaderInfo1 : OnlyPaddingCw[%x], Abnormal[%x], MacHeaderNumErr[%x], TransOnly[%x], LastSduIndicator[%x]
Line 2035: !!! LMAC DUMP REGISTER !!!
Line 2036: RXWPtr[%x], TXFSM[%x], CPFSM[%x], RXFSM[%x], RXError[%x]
Line 2037: BUFS[%x], BUFE[%x], BUFF[%x], DESA[%x], CUR_DESC[%x], FREE_DESC[%x]
Line 2038: SWRESET BUFA[%x], DESA[%x], DESNUM[%x], SW_WP[%x], SW_FP[%x]
Line 2042: !!! LMAC DUMP REGISTER [%d][%x]!!!
Line 2048: !!! Discard LMAC RX Desc due to 0th index corruption !!!
Line 2064: !!! Discard LMAC RX Desc [H_C:%x, H_F:%x][S:%x]!!!
Line 2120: !!! LMAC DUMP REGISTER !!!
Line 2121: RXWPtr[%x], TXFSM[%x], CPFSM[%x], RXFSM[%x], RXError[%x]
Line 2122: BUFS[%x], BUFE[%x], BUFF[%x], DESA[%x], CUR_DESC[%x], FREE_DESC[%x]
Line 2123: SWRESET BUFA[%x], DESA[%x], DESNUM[%x], SW_WP[%x], SW_FP[%x]
Line 2127: !!! LMAC DUMP REGISTER [%d][%x]!!!
Line 2133: !!! Discard LMAC RX Desc due to 0th index corruption !!!
Line 2148: !!! Discard LMAC RX Desc [H_C:%x, H_F:%x][S:%x]!!!
Line 2251: !!! Discard LMAC RX Desc due to MBMS data in cc[%d] !!!
Line 2346: Unknown LMAC RX interrupt !!!
Line 2359: MAC PDU Table FULL !!!
Line 2388: LMAC Data Size is 0 !!!
Line 2441: HAL_LteLmacDlDmaDoneProc stETC0[%x], ETC1[%x], StackID[%x]
Line 2442: HAL_LteLmacDlDmaDoneProc
Line 2458: HAL_LteLmacDlDmaDoneProc : pPduInfo[%x], RXTTI[%x], SFNMCG[%x], TTIIDXMCG[%x]
Line 2532: !!! Discard LMAC RX Desc due to MBMS data in cc[%d] !!!
Line 2566: HAL_LteLmacDlDmaDoneProc : FlagAbnormal[%x], FlagMacHeaderNumErr[%x], LCID[%x]
Line 2573: HAL_LteLmacDlDmaDoneProc : MAC_CE
Line 2585: HAL_LteLmacDlDmaDoneProc : Normal MAC PDU
Line 2592: HAL_LteLmacDlDmaDoneProc : ????
Line 2650: MAC PDU Table FULL !!!
Line 2679: LMAC Data Size is 0 !!!
Line 2720: LMAC Lagging trigger RRE with IDLE eMBMS
Line 2775: gRxCirPduTable W[%d], R[%d]
Line 2915: gRxCirPduTable W[%d], R[%d]
Line 2990: RX_4G_SW_FREE_DESC_NUM is zero !!!
Line 3002: HAL_ProcLMACDLDmaDone : PrevDescNumber[%x] CUR_DESC_NUM[%x], 
Line 3275: LMAC_TX_SEC_BLOCKFLAG_GET is TRUE !!!
Line 3300: LMAC_TX_SEC_BLOCKFLAG_GET is TRUE !!!
Line 3308: Fail to send LTE_L2HTX_HAL_CIPHER_DONE_IND msg !!!
Line 3322: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2HTX_HAL_CIPHER_DONE_IND!!!Discard Data
Line 3330: PktrQueDesc == NULL !!!
Line 3345: LMAC_TX_SEC_BLOCKFLAG_GET is TRUE !!!
Line 3362: CIPHER Interrupt Discard, RB_ID[%d]
Line 3507: Illegal Modem Access on POWER OFF, LmacRX[%x]
Line 3529: LMAC Invalid TrBK Error Triggered
Line 3549: Abnormal LMAC RX intr[%d]
Line 3569: Illegal Modem Access on POWER OFF, LmacTX[%x]
Line 3641: Abnormal LMAC TX intr[%d]
Line 3662: Illegal Modem Access on POWER OFF
Line 3673: [A-GAP] HAL_LteLmacHeNBLisr
Line 3739: HeNB SIB Decoding Buf Invalid
Line 3748: HeNB SIB Decoding Size[%d] Error
Line 3767: Send HeNB SIB to RRC
Line 3830: LMAC Lagging trigger RRE
Line 3841: Forced RRE (sleeping)
Line 3876: eMBMS Trigger RX Reset But Unicast Data remained
Line 3905: Unicast RX Buffer Reset
Line 3917: Clear Security Blocked TX[%x],RX[%x] !!!!
Line 3923: [S%x] L2BUF Not empty[%d], DescErrCnt[%d]
Line 3977: LMAC RX Reset After RRE [%d]
Line 3986: Pendig LMAC RX Reset After RRE
Line 4016: ErrorStatus(%x), WAddr[SW:%x, HW:%x], FAddr[HW:%x], RX Desc SR[%d]:SW[%d]:HC[%d]
Line 4029: SW Addr[W:%x, F:%x, HF:%x], RX Desc[W:%d, R:%d]
Line 4034: Full Reset LMAC
Line 4078: TX LMAC ERROR OCCURED, BUS_ERROR[%x] at the not LTE-RAT!!!
Line 4091: TX LMAC ERROR OCCURED, BUS_ERROR[%x] !!!
Line 4375: Dummy LMAC print [%x][%x]!
Line 4387: LLC_TestInit : Addr[%x], Data[%x]
Line 4539: HAL_LmacSetDbgValue : uDbgIdx[%x], dwValue[%x]
