Line 108: L2LTXRLC_ResetPduTb
Line 198: L2LTXRLC_Init
Line 250: Dummy RLC print [%x][%x][%x]!
Line 273: RB_ID[%d]Poll Timer Expired !! Poll SN %d ,VT_S %d, VT_A %d
Line 279: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2LTX_L2LTX_POLL_TMR_EX_IND!!! 
Line 336: RB_ID[%d]L2LTXRLC_DiscardAckedPdu
Line 349: pPdcpTxQ->head is NULL
Line 357: ppDiscardSduPtr malloc fail
Line 369: pNackListElem->NACK_PDU_SN[%d] out of range!!!
Line 445: pNackList is empty
Line 496: RB_ID[%d]Selective ACK Discard VT_S %d Discard SN %d
Line 543: L2LTXRLC_SetupRlcEntity FAIL!! Invalid RB_ID[%d] LC_ID[%d]
Line 567: RB_ID[%d]L2LTXRLC_SetupRlcEntity FAIL!! SubState[%d]==RLC_NOT_ACTIVE
Line 574: RB_ID[%d]L2LTXRLC_SetupRlcEntity FAIL!! RlcMode[%d]!=parameters->ulConfig.ulInfo.mode[%d]
Line 583: RB_ID[%d]L2LTXRLC_SetupRlcEntity FAIL!! Wrong UM sn_field_length[%d][%d]
Line 593: RB_ID[%d]L2LTXRLC_SetupRlcEntity FAIL!! pL1RlcTx->SubState[%d]!=RLC_NOT_ACTIVE
Line 635: L2LTXRLC_SetupRlcEntity LC_ID %d/%d, RB_ID %d, Type %d
Line 742: RLC_SNMAP_MALLOC feature is not enabled
Line 757: RB_ID[%d]L1TXRLC Config AM timerPoll_retransmit %d,poll_byte %d,poll_PDU %d,max_retransmit_no %d, ExtLI[%d] ExtSN[%d]
Line 765: RB_ID[%d]L1TXRLC Config UM sn_field_length %d
Line 814: RB_ID[%d]Forced RLC AM Config to t_poll(45ms), max_retx(8)
Line 826: LT12Report timer start [%d]
Line 861: RB_ID[%d]L2LTXRLC_ReleaseRlcEntity
Line 865: L2LTXRLC_ReleaseRlcEntity FAIL!! Invalid RB_ID[%d] 
Line 945: RB_ID[%d]L2LTXRLC_Reset
Line 1015: L2LTXRLC_ReleaseAll,Stack[%d], SCGEntity[%d]
Line 1088: LT12Report timer Stop
Line 1291: L2LTXRLC_SetupSplitRlcEntity LC_ID %d/%d, RB_ID %d, Type %d
Line 1297: L2LTXRLC_SetupSplitRlcEntity FAIL!! Invalid RB_ID[%d] LC_ID[%d]
Line 1304: RB_ID[%d]L2LTXRLC_SetupSplitRlcEntity Wrong RLC Mode[%d/%d]!!
Line 1408: RLC_SNMAP_MALLOC feature is not enabled
Line 1470: RB_ID[%d]L1TXRLC Config AM timerPoll_retransmit %d,poll_byte %d,poll_PDU %d,max_retransmit_no %d,ExtLI[%d] ExtSN[%d]
Line 1474: SCG_RB_ID[%d]L1TXRLC Config AM timerPoll_retransmit %d,poll_byte %d,poll_PDU %d,max_retransmit_no %d,ExtLI[%d] ExtSN[%d]
Line 1573: L2LTXRLC_ModifyDCSpecificDRB LC_ID %d/%d, RB_ID %d, Type %d
Line 1587: L2LTXRLC_ModifyDCSpecificDRB FAIL!! Invalid RB_ID[%d] LC_ID[%d]
Line 1782: pSduDesc == NULL in L1TXRLC_FreeBuffer(), RB_ID[%d]
Line 1790: pSduDesc->q_next == NULL in L1TXRLC_FreeBuffer(), RB_ID[%d]
Line 1797: RB_ID[%d]MUI Confirm PdcpSn %d, MUI %d
Line 1817: RRC_SERVICE pSduDesc == NULL in L1TXRLC_FreeBuffer()
Line 1824: RB_ID[%d]MUI Confirm PdcpSn %d, MUI %d
Line 1838: pSduDesc == NULL in L1TXRLC_FreeBuffer(), RB_ID[%d]
Line 1846: pSduDesc->q_next == NULL in L1TXRLC_FreeBuffer(), RB_ID[%d]
Line 1860: RB_ID[%d] Discard_SDU#[%d] Q_Count[%d/%d]
Line 1911: RB_ID[%d], AckSN[d] pLastSegDesc==NULL !!!
Line 2003: RB_ID[%d] RX RLC Status ACK[%d] VT_A[%d] VT_AH[%d] VT_S[%d]
Line 2010: RB_ID[%d] RX RLC Wrong Status ACK[%d]<VT_A[%d] VT_S[%d]
Line 2019: RB_ID[%d] RX RLC Wrong Status ACK[%d] LAST NACK[%d] VT_A[%d] VT_AH[%d] VT_S[%d]
Line 2027: RB_ID[%d] NackList Empty : VT_A[%d], VT_AH[%d]
Line 2038: RB_ID[%d] RX RLC Wrong Status ACK[%d]>VT_S[%d] VT_A[%d]
Line 2062: RB_ID[%d] rlc_pdu_bo[%d] < OrgReTxDataSize[%d]
Line 2083: RB_ID[%d] RX RLC Wrong Status ACK/NACK[%d/%d] VT_A[%d] VT_S[%d]
Line 2105: RB_ID[%d] RX RLC Status NACK[%d] SO[%d] EO[%d]
Line 2110: RB_ID[%d] endoffset[%d] < startoffset[%d]
Line 2118: RB_ID[%d] RX RLC Wrong Status Offest NACK[%d] SO[%d] EO[%d] PduLength[%d]
Line 2131: RB_ID[%d] RX RLC wrong order NACK(%d>=%d) offset(End>=start)
Line 2145: RB_ID[%d]RX RLC Status NACK[%d]
Line 2153: RB_ID[%d] RX RLC wrong order NACK(%d>=%d)
Line 2165: RB_ID[%d] PDULength[%d] < POffset_BYTE[%d]
Line 2172: RB_ID[%d] Ignore Rx Status
Line 2191: RB_ID[%d]Poll Timer Stop Poll_SN %d ACK %d VT_A %d VT_S %d
Line 2204: RB_ID[%d] NackList->pFirstElem==NULL!!!
Line 2227: RB_ID[%d]RLC Rx Status==>trigger regular BSR
Line 2246: RB_ID[%d]RLC Re-estabilish2 Trigger VT_S %d VT_A %d
