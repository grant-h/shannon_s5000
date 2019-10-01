Line 288: [RR_SRRC]rr_InitSrrcContext
Line 330: [RR_SRRC]rr_CheckIfClientIsRegisteredToSrrc: ClinetId(%d)
Line 379: [RR_SRRC]ClientId is Invalid, Resource request to SRIF not allowed!!!
Line 387: [RR_SRRC]ReqProc[%s] CurrProc[%s] CurrProcState[%s]
Line 394: [RR_SRRC]RR_SRRC_REQ_PROC_REJECT
Line 398: [RR_SRRC]ReqProcAction[%s]
Line 452: [RR_SRRC]CurrProc[%s] CurrProcState[%s]
Line 546: [RR_SRRC]RequestedProcCause(%d)
Line 570: [RR_SRRC]GRR state is already Resumed State
Line 602: [RR_SRRC]rr_MmSuspendRatCnfPending: Ignore start for Cell Selection
Line 620: [RR_SRRC]Peer is Idle/Init, Camping to previous cell(%d)
Line 627: [RR_SRRC]rr_GrrSrrcStartCellSelection: Start Cell Selection
Line 651: [RR_SRRC]rr_MmSuspendRatCnfPending: Ignore resume for Cell Selection
Line 655: [RR_SRRC]rr_GrrSrrcResumeCellSelection: RR is in RR_WPOWER, resume RSSI SCAN procedure
Line 672: [RR_SRRC]rr_GrrSrrcResumeCellSelection: Resume Cell Selection
Line 724: [RR_SRRC]rr_GrrSrrcPauseCellSelection: Abort RSSI SCAN
Line 754: [RR_SRRC]rr_GrrSrrcPauseCellSelection: STOP BCCH READ
Line 770: [RR_SRRC]Cell search already paused due to DSDS Error, Send ACK to SRRC
Line 780: [RR_SRRC] ds_rr_GrrSrrcPauseCellSelection: Pause cell selection is wrong state, rr_State(%d)
Line 806: [RR_SRRC]rr_SrrcStartDiscreteCellSearch: Start Discrete Cell Search
Line 811: [RR_SRRC]RR not proper state to Start Discrete Cell Search
Line 836: [RR_SRRC]rr_SrrcStopDiscreteCellSearch: Start Discrete Cell Search
Line 848: [RR_SRRC]Error Case: Discrete cell search is not on!!!
Line 853: [RR_SRRC]RR not proper state to Start Discrete Cell Search
Line 878: [RR_SRRC]Copy rr_BplmnMsg
Line 905: [RR_SRRC]Release rr_BplmnMsg
Line 913: [RR_SRRC]already released
Line 1027: [RR_SRRC]rr_StartBplmnProcedure: BplmnProcType(%d)
Line 1042: [RR_SRRC]rr_StartBplmnProcedure: Wrong Bplmn Proc(%d)
Line 1068: [RR_SRRC]rr_SaveBplmnRequestForSrrcGrant: Saving Bplmn Msg, rr_BplmnMsg(%d)
Line 1072: ERROR RtkGetMemory returned NULL
Line 1077: [RR_SRRC]rr_BplmnMsg saved
Line 1090: [RR_SRRC]Resel Cause stored(%d)
Line 1106: [RR_SRRC]Wrong Resel Cause stored(%d): REJECT with WAIT
Line 1111: [RR_SRRC] Resel Proc not started, reset to IDLE
Line 1135: [RR_SRRC]Stop BPLMN as Other stack is Busy
Line 1163: [RR_SRRC]rr_GrrAbortIratProcedure: Abort Ongoing Irat Procedure
Line 1184: [RR_SRRC]rr_SaveIratRequestForSrrcGrant: Saving IRAT Message, rr_IratMsg
Line 1193: [RR_SRRC] rr_IratMsg already stored
Line 1199: [RR_SRRC] IRAT Req Msg pointer is NULL
Line 1208: ERROR RtkGetMemory returned NULL
Line 1213: [RR_SRRC]rr_IratMsg saved
Line 1223: [RR_SRRC] rr_IratLteMsg already stored
Line 1229: [RR_SRRC] IRAT Req Msg pointer is NULL
Line 1239: ERROR RtkGetMemory returned NULL
Line 1245: [RR_SRRC]rr_IratLteMsg saved
Line 1251: [RR_SRRC]rr_InterRatStatus Not Valid
Line 1278: [RR_SRRC]CopyIratMsg to trigger IRAT: rr_InterRatStatus(%d)
Line 1289: ERROR RtkGetMemory returned NULL
Line 1303: ERROR RtkGetMemory returned NULL
Line 1332: [RR_SRRC] rr_ReleaseIratMsg: rr_InterRatStatus(%d), rr_IratMsg(%x), rr_IratLteMsg(%x)
Line 1347: [RR_SRRC] rr_IratMsg & rr_IratLteMsg already released
Line 1368: [RR_SRRC]rr_StartIratProcedure: rr_InterRatStatus(%d)
Line 1378: [RR_SRRC] IRAT pointer is NULL
Line 1398: [RR_SRRC] IRAT pointer is NULL
Line 1418: [RR_SRRC] IRAT pointer is NULL
Line 1496: [RR_SRRC]rr_SrrcResumePsSignaling: rr_RlcSuspensionState(%d)
Line 1502: Resume RLC after DSDS Suspend 
Line 1528: [RR_SRRC]rr_SrrcStartPsSignaling: Direction(%d)
Line 1543: MemAlloc fail
Line 1551: [RR_SRRC]Resume RLC after DSDS Suspend 
Line 1581: [RR_SRRC]rr_SrrcStopPsSignaling: Direction(%d)
Line 1595: MemAlloc fail
Line 1709: [RR_SRRC]Suspend Rat CNF is pending, Ignore Signaling procedure.
Line 1713: [RR_SRRC]Process pending NAS Signaling
Line 1729: [RR_SRRC]No Saved Signaling message to Process
Line 1749: [RR_SRRC]rr_SrrcSuspendDataRequest
Line 1778: [RR_SRRC]rr_SrrcSuspendDataCnf
Line 1815: [RR_SRRC]rr_CheckSrrcIfClinetRegisteredAsPassiveRat
Line 1835: [RR_SRRC]rr_SrrcActionHandlerForResReq
Line 1849: [RR_SRRC]rr_SrrcActionHandlerForUpdate
Line 1861: NAS SIG already updated to SRRC, Donot update IDLE to SRRC
Line 1875: rr_WaitSiAfterResel is set, Donot Change SRRC state to IDLE, RESEL continue.
Line 1909: ACCESS In Progress or PS NAS SIG ongoing
Line 1920: GRR is in Packet Transfer State
Line 1946: PS NAS SIG -> PS AS SIG possible with SIG_END
Line 1954: EST REQ pending CS NAS SIG -> PS AS SIG Ignored
Line 2000: Not suitable to update state (%d) when Curr state(%d)
Line 2010: [RR_SRRC]rr_SrrcActionHandlerForResReqGrant
Line 2021: NasSigOng, Continue without requesting Srrc for Cell Selection
Line 2026: Requesting Srrc for Cell Selection
Line 2041: [RR_SRRC]rr_SrrcActionHandlerForResRejWait
Line 2069: Wait for SRRC grant 
Line 2079: [RR_SRRC]rr_SrrcActionHandlerForResReject: SrrcProc(%d)
Line 2083: [RR_SRRC] BPLMN PROC rejected. Let MM retry again!!!
