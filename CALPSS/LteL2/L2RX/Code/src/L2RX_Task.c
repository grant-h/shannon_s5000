Line 222: send LTE_CPDCP_DL_RESET_CNF
Line 231: Fail pal_Malloc and Fail Send LTE_CPDCP_DL_RESET_CNF!!!
Line 258: send LTE_CPDCP_DL_RELEASE_ALL_CNF
Line 267: Fail pal_Malloc and Fail Send LTE_CPDCP_DL_RELEASE_ALL_CNF!!!
Line 288: send LTE_CPDCP_DL_RELEASE_SCG_CNF
Line 297: Fail pal_Malloc and Fail Send LTE_CPDCP_DL_RELEASE_SCG_CNF!!!
Line 320: L2HRX_ResetAll IsNextRelease %d, ScgReset[%d]], RX SecurityBlockF[%d]
Line 370: [DS] PDCP Release without reset when 3G-4G opertaion
Line 409: [DS] PDCP Release without reset when 3G-4G opertaion
Line 443: LMAC_RX_SEC_BLOCKFLAG_GET[%d] PdcpMain.IsDrbDecipher[%d] !!!
Line 510: L2HRX_ResetCCRb[%d]
Line 546: L2HRX_ResetFullConfig(%d)
Line 664: L2HRX_FreePdcpRlcDescIf START - RD/WR[%d, %d]
Line 693: L2HRX_FreePdcpRlcDescIf END - RD/WR[%d, %d]
Line 757: L2HRX_ReleaseAll
Line 881: L2HRX_ReleaseAll
Line 916: L2HRX_DRBRelease
Line 1010: SMC Message Error, cause=%d
Line 1040: LTE_PDCP_DL_BEARER_RESUME_REQ :LTE_RB_SRB1
Line 1049: LTE_PDCP_DL_BEARER_RESUME_REQ :LTE_RB_OTHER
Line 1058: ROHC DL Configuration for RB_OHTER_FULL_CONFIG
Line 1073: LTE_PDCP_DL_BEARER_RESUME_REQ :LTE_RB_HO_ALL
Line 1082: ROHC DL Configuration for RB_HO_FULL_CONFIG
Line 1096: LTE_PDCP_DL_BEARER_RESUME_REQ :LTE_RB_SCG
Line 1254: L2RX PDCP Rxed L2HRX_L1LC_RX_CNF
Line 1324: RB_ID[%d] L2PdcpRlcRxDataDescIf Full WD[%d], RD[%d]
Line 1335: RB_ID[%d]L2RXRLC TASK 1:NO ACTIVE[%d]
Line 1415: RB_ID[%d]L2HRXRLC_ProcT1TmrExIndMsg
Line 1421: RB_ID[%d]L2RXRLC TASK 2:NO ACTIVE[%d]
Line 1459: Fail pal_Malloc and Fail Send LTE_L2LTX_L2HTX_SRI_REQ!!! 
Line 1548: L2HRX_ForwardRrcMsg : pRRCmsg[%x], msgid[%x], trid[%x] 
Line 1553: LTE_PDCP_DATA_IND msg Send fail
Line 1613: RB_ID[%d]LTE_L2HRX_L2HRX_STATUS_PROHIBIT_TMR_EX_IND
Line 1616: RB_ID[%d]L2RXRLC TASK 3 :NO ACTIVE[%d]
Line 1648: LTE_L2HRX_L2LRX_RESET_IND, invalid resetCause[%d]
Line 1699: RB_ID[%d]LTE_L2HRX_L2HRX_PDCP_REORDER_TMR_EX_IND, But Empty
Line 1702: RB_ID[%d]LTE_L2HRX_L2HRX_PDCP_REORDER_TMR_EX_IND
Line 1706: RB_ID[%d]Pending PDCP reoredering timer exp due to decipher running
Line 1720: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2HRX_HAL_TRANSFER_EXT_IF_REQ!!!
Line 1732: RB_ID[%d]Fail to send msg to L2HRX_HAL !!!
Line 1846: LMAC_RX_SEC_BLOCKFLAG_GET[%d] is not NULL !!!
Line 1860: LTE_ProcL2HRxPdcpHalMsg : LTE_L2HRX_HAL_DRB_AFTER_DECIPHER_IND/LTE_L2HRX_HAL_TRANSFER_EXT_IF_REQ
Line 1872: LMAC_RX_SEC_BLOCKFLAG_GET[%d] is not NULL !!!
Line 1877: RB_ID[%d]: Decipher Done But pLastDecipherDesc is NULL!!!
Line 1915: LMAC_RX_SEC_BLOCKFLAG_GET[%d] is not NULL !!!
Line 1917: LTE_L2HRX_HAL_DRB_AFTER_DECIPHER_IND but DrbDecipher not flag !!!
Line 2081: RB_ID[%d]Host if Socket Fulll : Sdu discard!!!
Line 2148: RB_ID[%d]Host if Socket Fulll : Sdu discard!!!
Line 2421: LTE_SendL2HRXMsgToL2 Fail msgid[%x]!!!
Line 2523: LTE_SendL2HRXMsgToRRC Fail msgid[%x]!!!
Line 2584: LTE_SendL2HRXMsgToL1LC Fail !!!
Line 2612: Not Send L2HRX_L1LC_RX_REQ (WatiCmd %d,CurCmd:%d)
Line 2617: [L2RX => L1LC] Send L2HRX_L1LC_RX_REQ (Cmd:%d)
Line 2624: Cannot Allocate L2HRX_L1LC_RX_REQ
