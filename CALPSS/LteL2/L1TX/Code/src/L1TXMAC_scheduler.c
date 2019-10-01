Line 305: pTempRBSchedInfo==NULL !!!
Line 311: LogCH using this LCID has been already setup !!!
Line 349: Searching Error in RB info DB !!!
Line 379: pTempRBSchedInfo==NULL !!!
Line 402: No RB with this LCID: %d
Line 408: pal_ListIsEmpty !!!
Line 439: pTempRBSchedInfo==NULL !!!
Line 464: pTempRBSchedInfo==NULL !!!
Line 487: No RB with this LCID: %d
Line 509: Searching Error in RB info DB !!!
Line 544: RB Setup Info malloc failed !!!
Line 629: RB Reconfig Info malloc failed !!!
Line 648: RB Reconfig Error: No RB has been established !!!
Line 751: RB Release Error: No RB has been established !!!!
Line 901: pTempRBSchedInfo==NULL !!!
Line 933: equalPriGroupInx error[%d] !!!
Line 962: equalPriGroupInx error[%d] !!!
Line 1018: MacEntity[%d]: MAC Timer : PBSR(%d), RTBSR(%d), TATMR(%d)
Line 1032: MacEntity[%d]: PHR configured & triggered : Periodic PHR(%d), Prohibit PHR(%d), dl-pathloss(%d)
Line 1043: MacEntity[%d]: PHR released
Line 1086: MacEntity[%d]: EBSR(%d), EPHR(%d), sCellDeactivationTimer(%d)
Line 1133: sTAG (ID:%d) is released, but sCell(s) (bitmap:%d) still belong to the sTAG!!! Their sTAG need to be handled properly if it is temporal situation.
Line 1169: PUCCH SR cancelled(RA-SR is on-going)
Line 1179: PUCCH SR (sleeping)
Line 1186: PUCCH SR (awake)
Line 1203: Trigger RA-SR: MacEntity[%d], gDSR_Configured(%d) gCurrentMACStatus(%d)
Line 1209: SR triggered already!!: MacEntity[%d], gDSR_Configured(%d) gCurrentMACStatus(%d)
Line 1254: MacEntity[%d]: SR not triggered or SR config(%d)/UL sync status(%d) changed
Line 1260: MacEntity[%d]: SR canceled
Line 1353: MacEntity[%d]: BSR Reserved LONG -> SHORT due to Grant(%d)
Line 1507: info->bufferedRbCnt == 0!!!
Line 1522: info->lcgCnt == 0!!!
Line 1924: gMsg3Info.size==0 at the L2LTXMAC_ScheduleCCCH !!!
Line 2005: pTempRBSchedInfo==NULL!!!
Line 2032: last 1RB rescheduling. buffered RB does not exist!!!
Line 2041: gpSchedList[%d] is empty!!!
Line 2061: BSR cancellation for 1RB(unreserved, This RB is behind the last RB)
Line 2072: BSR not canceled (new last RB is scheduled, but bsrReservedSize is not used)
Line 2080: BSR not caceled (bsrReservedSize is used, but buffer is not empty)
Line 2091: change new last scheduled RB (grant reserve including LF)
Line 2097: keep last scheduled RB
Line 2103: change new last scheduled RB (grant reserve including BSR+LF)
Line 2119: BSR not caceled (reserved grant 0, given grant:%d, remained buffer:%d)
Line 2157: BSR not caceled (bsrReservedSize is not used, given grant:%d, remained buffer:%d)
Line 2164: BSR not caceled (buffer is not empty with bsrReservedSize)
Line 2200: reschedule for status pdu (reserved 1RB case)
Line 2220: BSR not caceled
Line 2374: pTempRBSchedInfo==NULL!!!
Line 2571: Long BSR + RLC Status ACK Only Case
Line 2600: BSR cancellation for 2RB(both unreserved)
Line 2637: BSR not caceled, #2 RB buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 2702: BSR not caceled, #1 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 2786: BSR cancellation for 2RB(1 reserved, 1 unreserved)
Line 2823: BSR not caceled, #2 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 2849: BSR not caceled, #1 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 2918: BSR cancellation for 2RB(1 unreserved, 1 reserved)
Line 2957: BSR not caceled, #2 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 2993: BSR not caceled, #1 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 3198: reschedule for status pdu (more than 2 reserved RB)
Line 3210: pTempRBSchedInfo==NULL!!!
Line 3282: BSR not caceled
Line 3375: BSR cancel for status pdu
Line 3385: BSR not caceled
Line 3465: schedResult.bufferSize[%d] < schedResult.remainedStatus[%d] 
Line 3478: tempBufferSize[%d] < schedResult.bufferSize[%d] 
Line 3518: RLC reserved 0, Received Grant(%d)
Line 3657: pTempRBSchedInfo==NULL!!!
Line 3697: tempBufferSize[%d] < schedResult.bufferSize[%d]
Line 3734: pTempRBSchedInfo==NULL!!!
Line 3773: tempBufferSize[%d] < schedResult.bufferSize[%d] !!!
Line 3840: reschedAgain==TRUE!!!
Line 3859: pTempRBSchedInfo==NULL!!!
Line 3885: schedResult.bufferSize < schedResult.remainedStatus[%d] !!!
Line 3935: pTempRBSchedInfo==NULL!!!
Line 4051: pTempRBSchedInfo==NULL!!!
Line 4146: PHR triggered by PCell pathloss: current pathloss(%d[0.01dB]), reported pathloss(%d[0.01dB]), dl-PathlossChange(%d[0.01dB])
Line 4170: PHR triggered by an SCell pathloss (sCellIndex:%d): current pathloss(%d[0.01dB]), reported pathloss(%d[0.01dB]), dl-PathlossChange(%d[0.01dB])
Line 4195: PHR: Stack[%d], SCell pathloss change update (sCellIndex:%d) of pathloss:%d[0.01dB]
Line 4204: PHR: Stack[%d], PCell pathloss change update of pathloss:%d[0.01dB]
Line 4309: pTempRBSchedInfo==NULL!!!
Line 4377: grant size<MIN_UL_GRANT_SIZE !!!
Line 4383: msg3 grant_size>MAX_TB_SIZE !!!
Line 4390: Stack[%d], MacEntity[%d]: UL Grant, but UL UNSYNC!!!
Line 4398: MacEntity[%d]: L2LTXMAC_ULScheduling, but gL1TxRxCommonDB.RACause is %d
Line 4405: MacEntity[%d]: received NORMAL_GRANT, but gL1TxRxCommonDB.RACause is %d
Line 4412: MacEntity[%d]: received NORMAL_GRANT, but gL1TxRxCommonDB.RACause is %d
Line 4421: |UE -> eNB|  MSG3 Entity[%d] %d, %d, %d M3_GrantSize: %d
Line 4427: M3 Grant[%d] too small
Line 4444: Entity[%d]: init grant(%d), current grant(%d)
Line 4481: Entity[%d]: init grant(%d), current grant(%d)
Line 4531: Entity[%d]: UL SPS grant configured, implicitReleaseAfter(%d))
Line 4683: gSchedListPrev is not NULL
Line 4690: gSchedListPrev Remove LCID %d %d
Line 4722: gSchedListPrev Insert LCID[%d] RBID[%d] QCnt[%d]
Line 5232: Element==NULL !!
Line 5260: SCG Element==NULL !!
Line 5295: gpSchedList SCG Element==NULL !!
Line 5381: pTempRBSchedInfo==NULL !!
Line 5401: Retx BSR Timer expired & regular BSR triggered
Line 5416: Fail pal_Malloc and Fail Send LTE_L2LTX_L2HTX_SRI_REQ!!! 
Line 5482: Periodic PHR Timer expired & Preiodic PHR triggered
Line 5511: Prohibit PHR Timer Expired
Line 5528: Logical Channel SR Prohibit Timer[%d] Expired!!! (0:MCG, 1:SCG)
Line 5597: gpSchedList[MCG_Entity]==NULL !!!
Line 5613: gpSchedList[MCG_Entity]==NULL !!!
Line 5632: gpSchedList[SCG_Entity]==NULL !!!
Line 5648: gpSchedList[SCG_Entity]==NULL !!!
