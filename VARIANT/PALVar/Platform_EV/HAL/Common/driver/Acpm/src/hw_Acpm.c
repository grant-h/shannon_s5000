Line 200: [ACPM] hw_AcpmGetSyncEvent:%d
Line 215: [ACPM] hw_AcpmFreeSyncEvent:%d
Line 220: [CPR_PAL][ACPM] Already Free Sync Event!!
Line 229: [CPR_PAL][ACPM] Invalid Free Sync Event Index!!
Line 257: Failed to pal_TaskCreateHisr
Line 263: Failed to pal_SmCreateEventGroup(): ACPM_PMIC_RX_EVENT
Line 270: [ACPM] Shannon OS [%s]
Line 275: [ACPM] Failed to pal_SmCreateEventGroup() ACPM_TASK_EVENT
Line 284: [ACPM] Failed to pal_SmCreateEventGroup() ACPM_SYNCH_EVENT
Line 305: [ACPM] LISR Rcvd Int MSTS:0x%x STS:%x, seq:%d
Line 311: [ACPM] LISR sequence ERROR -- cp acpm act: %d, cp seq: %d, acpm seq: %d
Line 316: [ACPM] re-tried seq number: %d, reset reSeqNumber
Line 322: [ACPM] LISR FREQ ERROR result: 0x%x
Line 332: [ACPM] LISR PMIC ERROR result: 0x%x
Line 345: [ACPM] LISR DCXO ERROR result: (%d, %d)
Line 354: [CPR_PAL][ACPM] Invalid Return Protocol Type!!
Line 390: [ACPM] PMIC Control %d time, Resule:%d, return PMIC Value:%x
Line 395: [CPR_PAL][ACPM] PMIC control many times failure!!
Line 405: [ACPM] Sending Sync Event Index:%d
Line 417: [ACPM] DVFS Control %d time, Resule:%d Action:%d
Line 422: [CPR_PAL][ACPM] DVFS control many times failure!!
Line 440: [ACPM] DCXO Control - Resule:%d Action:%d ReadValue:%d
Line 451: [ACPM] Sending Sync Event Index:%d
Line 458: [ACPM] ERROR, received event, but don't know what todo, toDo is empty.
Line 482: [ACPM] task event received(flag: 0x%x), but the result: 0x%x
Line 486: [ACPM] task event received:0x%x
Line 497: [ACPM] hw_AcpmRetryTimer, seq: %d, expired cnt: %d total expired cnt: %d
Line 503: [CPR_PAL][ACPM] Retry timer time out twice !!
Line 516: [ACPM] ignore hw_AcpmRetryTimer, readyForRetry %d
Line 522: [ACPM] HISR response for seq: %d, nFreeQue: %d
Line 529: [ACPM] HISR STOP retry timer
Line 532: [ACPM] HISR send RxEvent
Line 554: [ACPM] PMIC Polling seq: %d waiting Cnt:%d
Line 596: [CPR_PAL][ACPM] PMIC Polling Timeout %d %d
Line 611: [ACPM] PMIC wrong seq num, act: %d, txact: %d, rxact: %d, cp seq: %d, acpm seq: %d
Line 618: [CPR_PAL][ACPM] Invalid Protocol type !!
Line 632: [CPR_PAL][ACPM] PMIC polling many times failure!!
Line 657: [CPR_PAL][ACPM] ISR called ACPM, pmic !!
Line 672: [ACPM] hw_AcpmPmicExt, condition not match any case.
Line 682: [CPR_PAL][ACPM] freeq is empty !!
Line 691: [ACPM] PMIC get pool, nFreeQue:%d
Line 700: [CPR_PAL][ACPM] Full Sync Event!!
Line 706: [ACPM] Alloc Sync Event Index:%d
Line 726: [ACPM] Waiting Sync Event Index:%d
Line 793: [ACPM] Set PMIC act:%d, seq:%d
Line 805: [ACPM] TASK STOP retry timer
Line 809: [ACPM] PMIC Acpm_RxEvent received, result: %x
Line 827: [ACPM] ERROR PMIC write or update, receiveflag: 0x%x
Line 852: [ACPM] Polling freq: %u, act:%d, seq:%d waiting cnt:%d
Line 870: [ACPM] polling, Set Freq error act::%d
Line 893: [CPR_PAL][ACPM] FREQ Polling Timeout %d %d
Line 908: [ACPM] DVFS wrong seq num, act: %d, rxact: %d, cp seq: %d, acpm seq: %d
Line 915: [ACPM] Invalid Protocol type !!
Line 926: [CPR_PAL][ACPM] DVFS polling many times failure!!
Line 946: [CPR_PAL][ACPM] ISR called ACPM for DFS !!
Line 957: [ACPM] acpmFreePool(mif) is empty, nFreeQue:%d, Qinit:%d
Line 960: [CPR_PAL][ACPM] freeq is empty !!
Line 970: [ACPM] Req Frequency index:%x Table:%d Latest Req Freq:%d
Line 977: [ACPM] Ignored lower min-lock frequency request(target:%d Prev:%d)
Line 986: [ACPM] Req Frequency %d Latest Req Freq:%d
Line 991: [ACPM] FREQ get pool, nFreeQue:%d
Line 1005: [CPR_PAL][ACPM] Invalid MIF frequency target value !!
Line 1051: [ACPM] Set Freq error act::%d
Line 1056: [ACPM] rSR0_CP2ACPM_0:%x rSR1_CP2ACPM_1:%x
Line 1072: [ACPM] Set Freq: %d, act:%d, seq: %d
Line 1083: [ACPM] TASK STOP retry timer
Line 1087: [ACPM] mif Acpm_RxEvent received, result: %d
Line 1107: [ACPM] Retry func. called: cTimeoutCnt: %d
Line 1145: [ACPM] hw_AcpmRead param NULL
Line 1160: [ACPM] hw_AcpmRead not support:%d
Line 1164: [ACPM] hw_AcpmRead:%d
Line 1177: [ACPM] hw_AcpmWrite param NULL
Line 1195: [ACPM] hw_AcpmWrite not support:%d
Line 1199: [ACPM] hw_AcpmWrite:%d
Line 1216: [ACPM] hw_AcpmControl param1 NULL
Line 1225: [ACPM] hw_AcpmControl not support:%d
Line 1239: [ACPM] hw_AcpmControl:%d
Line 1263: [ACPM] hw_AcpmControl not support cmd:%s
Line 1311: [ACPM] ISR called ACPM !!
Line 1321: [ACPM] hw_AcpmPmicExt, condition not match any case.
Line 1337: [ACPM] hw_AcpmDcxoExt, syncType:%d, opCode:%d
Line 1347: [ACPM] freeq is empty !!
Line 1353: [ACPM] PMIC get pool, nFreeQue:%d
Line 1361: [ACPM] Full Sync Event!!
Line 1364: [ACPM] Alloc Sync Event Index:%d
Line 1389: [ACPM] Waiting Sync Event Index:%d
Line 1437: [ACPM] Send DCXO request
Line 1449: [ACPM] TASK STOP retry timer
Line 1454: [ACPM] DCXO Acpm_RxEvent received, result: %x
Line 1465: [ACPM] ERROR DCXO write or update, receiveflag: 0x%x
Line 1486: [ACPM] Read register(0x%x: 0x%x)
Line 1490: [ACPM] hw_DcxoReadRegister, return address is NULL
