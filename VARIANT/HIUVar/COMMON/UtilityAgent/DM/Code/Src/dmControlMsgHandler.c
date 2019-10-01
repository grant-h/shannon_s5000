Line 158: DM recieved control message 0x%x %d
Line 205: [DM] DM_TRACE_START_REQ
Line 210: [DM] DM_TRACE_STOP_REQ
Line 215: [DM] DM_TRACE_STATUS_GET_REQ
Line 220: [DM] DM_TRACE_TABLE_GET_REQ
Line 225: [DM] DM_TRACE_ITEM_SEL_REQ
Line 230: [DM] DM_ILM_START_REQ
Line 236: [DM] DM_ILM_STOP_REQ
Line 242: [DM] DM_ILM_ENTITY_TABLE_GET_REQ
Line 247: [DM] DM_ILM_ITEM_SELECT_REQ
Line 253: [DM] DM_REGISTRY_INFO_GET_REQ
Line 258: [DM] DM_REGISTRY_READ_REQ
Line 263: [DM] DM_REGISTRY_WRITE_REQ
Line 268: [DM] DM_TCP_IP_DUMP_REQ
Line 282: [DM] DM_CONSOLE_STARTSTOP_REQ
Line 288: [DM] DM_SVC_CONSOLE_STARTSTOP_REQ %x
Line 295: RSCtest, DM_RESOURCE_MONITOR_STARTSTOP_REQ
Line 301: [DM] DM_TRIGGER_TABLE_REQ %x
Line 306: [DM] DM_TRIGGER_EVENT %x
Line 322: error: Invalid cmd type - dmStartMsgProc
Line 340: error: msg pointer is NULL - dmProcDmStartReq
Line 344: dmProcDmStartReq, current state=%d
Line 359: changed state=%d
Line 363: Ignore DM start message, DM is in %d state
Line 371: [DM]Magic code: %x UE Config: %x
Line 378: [DM]TIME1:%d
Line 395: [DM]Magic code sequence check enabled
Line 493: dmProcDmStopReq, current state=%d
Line 519: ns_DmUpdateTimerChange process error %d
Line 527: ns_DmUpdateTimerChange process error %d
Line 544: changed state=%d
Line 548: Ignore DM stop message, DM is in %d state
Line 647: Not Supported cmdType: %d
Line 689: [DM] update runtime period change to %d
Line 698: [DM] update period change to %d
Line 718: ns_DmUpdateTimerChange process error %d
Line 727: ns_DmUpdateTimerChange process error %d
Line 1464: dmIlmTableGet %d
Line 1591: TraceGroupNum = %d
Line 1762: [DM]DUMMYINFO id %d, strlen %d typelen %d
Line 1832: Registry information %d exceed MAX size %d (%d)
Line 1869: DUMMYREG %d arraysize %d %c %c.. %c %c
Line 2072: Secure WRITE
Line 2257: [DM] dmProcSvcConsoleStartStopReq 
Line 2267: [DM] dmProcSvcConsoleStartStopReq svcConsoleMsg->flag=%d, svcMode=0x%X, svcSubMode=0x%X
Line 2285: pal_MemAlloc failed
Line 2292: [DM] send dmProcSvcConsoleStartStopRsp result= %d
Line 2318: dmProcSvcScreenString() : Invalid ucNumLine(=%d)
Line 2334: Tx Display Screen NTF to DM (Num Line=%d)
Line 2363: dmProcSvcScreenWideString() : Invalid ucNumLine(=%d)
Line 2379: Tx Display Screen Wide NTF to DM (Num Line=%d)
Line 2409: Invalid MemAlloc
Line 2468: Invalid MemAlloc
Line 2482: pktNum =%d totalPktNum=%d bufSize=%d
Line 2483: rsp->totalNumPacket =%d rsp->packetNum=%d rsp->cpuMonitorDataCnt=%d 
Line 2510: Invalid MemAlloc
Line 2532: CPU idletime =%d --> %d
Line 2544: Invalid MemAlloc
Line 2570: DynMem[ %d, %d, %d, %d, %d, %d]
Line 2610: Invalid MemAlloc
Line 2622: ThreadMEM pktNum =%d totalPktNum=%d bufSize=%d
Line 2623: ThreadMEM rsp->totalNumPacket =%d rsp->packetNum=%d rsp->cpuThreadDataCnt=%d 
