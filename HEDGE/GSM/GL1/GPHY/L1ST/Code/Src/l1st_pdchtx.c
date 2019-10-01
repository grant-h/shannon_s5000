Line 177: PDCH Tx mask -0x%x
Line 211: pdchData_p->macMode[%d]pdchData_p->isAccess[%d] 
Line 223: BLOCK PDCH Tx 
Line 249: PDCH Tx Cancelled (# of TS):-%d
Line 268: PDCH Tx Cancelled (# of TS):-%d
Line 286: PDCH Tx Cancelled (# of TS):-%d, Base TS %d startTimetoCancel %d txData_p->txBlkAlloc %d rxData_p->rxBlkInit %d 
Line 309: BLOCK PDCH Tx 
Line 335: PDCH Tx Cancelled (# of TS):-%d
Line 353: PDCH Tx Cancelled (# of TS):-%d
Line 372: PDCH Tx Cancelled (# of TS):-%d, Base TS %d startTimetoCancel %d txData_p->txBlkAlloc %d rxData_p->rxBlkInit %d 
Line 375: numblksbch-%d numblkspch-%d page_blk-%d bch_blk-%d rxint-%d  usfhalloc-%x
Line 378: USF Allocation %d 
Line 402: *** More than 4 Ts, or Tx TS window size violated 
Line 404: Dyn blocks txAlloc %d, txInit %d   txBlkFixedAlloc  0x%02x
Line 414: TxPos cannot be bigger than 7, TX should be done in TS6 from baseTS
Line 461: scheduleTxTasks txBlkAlloc(0x%x) pdchTxCount(%d) Alloc(0x%x) Init(0x%x)
Line 467: ****scheduleTxTasks called twice
Line 480: ***Schedule ERROR
Line 484: txAlloc:  %d, txInit = %d
Line 501: Destroy handles after reading USF
Line 516: Destroy handles after reading USF , fixed block case 
Line 552: [DTM-L1] dtmUsfState[%d] txBlkAlloc [0x%x] DTM init[%d] CSTX FLAG[%d]
Line 556: DSP Int Set
Line 710: [DTM-L1] USF PS not allocated PsRxAlloc[0x%x] PsTxAlloc[0x%x] 
Line 768: ****scheduleTxTasks called twice
Line 780: ***Schedule ERROR
Line 784: scheduleTxTasksInUsfInt txAlloc:  %d, txInit = %d slotcount = %d
Line 851: Destroy handles after reading USF
Line 853:    SIL_Schedule, destroy dyn handles: destroy index 
Line 866: pdchData_p->isDspSet[%d] txData_p->pdchTxCount MOD 4 [%d] 
Line 870: Destroy handles after reading USF , fixed block case 
Line 885: l1_dtm_control_info.dtm_tch_sm_tx_scheduletasks in USF
Line 889: pdchData_p->isDspSet[%d] txData_p->pdchTxCount%4 [%d] 
Line 978: ***Prepare ERROR
Line 1098: In txWriteData: txAlloc 0x%x, txInit %d , assignedDynAlloc  0x%x,  txBlkFixedAlloc  0x%x
Line 1160: ERROR - txWriteData - more than 4 DynBlks
Line 1268: [SRLB] -OPENTX_COUNT1- SIL_DestroyILHandles
Line 1354: [SRLB] -L1PDCH_POSTTX- SIL_DestroyILHandles
Line 1381: Default case
Line 1392: Default case
Line 1422: ****scheduleTxTasks called twice
Line 1436: ***Schedule ERROR
Line 1442: txAlloc:  %d, txInit = %d
Line 1461: Destroy handles after reading USF
Line 1462:    SIL_Schedule, destroy dyn handles: destroy index 
Line 1476: Destroy handles after reading USF , fixed block case 
