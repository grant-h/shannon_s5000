Line 193: Set USIM wakelock = %d
Line 223: ##Error Expected < Received in drv_USIMSetRxTide
Line 224: Expected=0x%X, Received=0x%X
Line 237: pal_DrvSimClockStopSet...no clock stopping
Line 244: hw_UsimIO.iSCICR0 = 0x%X,hw_UsimIO.iSCICR1 = 0x%X
Line 283: pal_DrvSimClockStopSet... Clock stop Failed - One more try
Line 289: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 297: pal_DrvSimClockStopSet... Clock stop Failed !!
Line 303: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 313: Clock Stop mode enabled....Clock Stop !!!
Line 318: Already Cock stopped.skip..pal_DrvSimClockStopSet
Line 325: *** USIM retention at pal_DrvSimClockStopSet
Line 403: Usim Clock fRef: %d, SCICLKICC: %d, f: %d
Line 491: << DUAL SIM SOCKET DEVICE >>
Line 495: << SINGLE SIM SOCKET DEVICE >>
Line 500: << ATR WWT Default = %d etu >>
Line 522: << hw_UsimIO.iSCIAUXCR = 0x%X >>
Line 551: Disable Internal pull-up of SIM0 DATA_IO
Line 555: Can't process NULL handle: SIM0_DATA(%x)
Line 567: Enable Internal pull-up of SIM0 DATA_IO
Line 571: Can't process NULL handle: SIM0_DATA(%x)
Line 666: Can't process NULL handle: SIM0_CLK(%x), SIM0_DATA(%x), SIM0_RST(%x)
Line 698: Can't process NULL handle: SIM0_CLK(%x), SIM0_DATA(%x), SIM0_RST(%x)
Line 710: Enter drv_UsimHwUsim0Backup
Line 718: Exit drv_UsimHwUsim0Backup
Line 723: Enter drv_UsimHwUsim0Restore
Line 780: Exit drv_UsimHwUsim0Restore
Line 786: Enter drv_UsimReadyRetention
Line 790: Exit drv_UsimReadyRetention
Line 799: Enter drv_UsimStartRetention
Line 812: Exit drv_UsimStartRetention
Line 983: Can't process NULL handle: SIM_DET
Line 1000: <<< Use GPIO %s invention
Line 1016: Can't process NULL handle: SIM_DET
Line 1041: detectLevel = %d
Line 1059: --- UsimDetectCount is over 0x10000 --- 
Line 1065: <<< SIM CARD INSERT Detected!! >>>
Line 1076: <<< SIM CARD REMOVED Detected!! >>>
Line 1101: <<< UsimDetectNoti interrupt enable >>>
Line 1258: <<< SIM CARD inserted !!! >>>
Line 1268: <<< usim_PalHandleSimInsertInd(SINGLE_USIM_TRAY) >>>
Line 1274: <<< SIM CARD remove interrupt enable >>>
Line 1278: <<< Detect Ignore...>>>
Line 1285: <<< SIM CARD insert interrupt re-enable >>>
Line 1296: <<< Detect=low Ignore...>>>
Line 1304: <<< SIM CARD remove interrupt re-enable >>>
Line 1309: Send TxRx timeout to Appl. for recovery SIM1
Line 1321: Send TxRx timeout to Appl. for recovery SIM2
Line 1332: UsimRemoveDetectIntr = FALSE
Line 1342: <<< SIM CARD removed count %d >>>
Line 1356: <<< SIM CARD removed !!! >>>
Line 1379:  *** FORCED RETURN SIM REQUEST *** 
Line 1420:  *** FORCED RETURN SIM2 REQUEST *** 
Line 1457: <<< usim_PalHandleSimRemoveInd(SINGLE_USIM_TRAY) >>>
Line 1464: <<< SIM CARD insert interrupt enable >>>
Line 1468: <<< CheckDetectIntrCount is abnormal %d >>>
Line 1555: ** Parity error at TS byte
Line 1570: == USIM_ATR_INVERSE_CONV == 
Line 1587: Receive 0x3B twice..skip
Line 1600: ATR Parity error ...UsimRxReceivedBytes = 0x%X, RxByte = 0x%X 
Line 1677: Current WWT value = %d etu
Line 1719: ResponseSleepTime = %d uSec( = 21 etu)
Line 1723: Di = %d, WI = %d
Line 1725: Change WWT value = %d etu
Line 1770: Calculate PPS : Fi = %d, Di = %d,FDratio = %d
Line 1807: UsimDriverState != DRV_IS_PPS
Line 1808: UsimDriverState = 0x%X
Line 1836: drv_UsimDecodeAtr - ATR rejected
Line 1945: TC1...GUARDTIME ADDED = %d
Line 1963: TD(1) Protocol= %d
Line 1996: ProcessATR...ATR_T0_TA3 = 0x%X
Line 1999: ** UsimClockStopState = 0x%X
Line 2030: << PPS = 0x%X >>
Line 2086: ProcessATR...usePPS = FALSE
Line 2093: >>> Change F/D = %d
Line 2099: >>> Invalid TA1 value.. no Change speed
Line 2144: The TX FIFO is not empty ...The value of TXCount is 0x%X
Line 2150: The RX FIFO is not empty ...The value of RxCount is 0x%X
Line 2188: UsimHandlePPSData... RxCount=%d
Line 2205: UsimHandlePPSData... Receive Parity error
Line 2211: Receive PPS response
Line 2219: Receive PPS[%d] = 0x%X
Line 2225: UseDefaultPPS == TRUE
Line 2241: Receive PPS[%d] = 0x%X
Line 2254: >>> PPS rejected from CARD. using default speed
Line 2263: >>> Change F/D = %d
Line 2269: >>> Invalid TA1 value=0x%X ...no Change speed
Line 2281: For receive remained PPS Data..drv_USIMSetRxTide = %d
Line 2315: drv_UsimTxRx..pData=null skip
Line 2327: drv_UsimTxRx..DRV_IS_NO_SIM
Line 2335: drv_UsimTxRx..DRV_IS_WAIT_FOR_ATR
Line 2340: drv_UsimTxRx - DRV_IS_TX_RX
Line 2345: drv_UsimTxRx - DRV_IS_WAIT_FOR_CMD
Line 2354: drv_UsimTxRx - UICC_EXCH_TYPE2..NoOfBytesExpected++ = 0x%X
Line 2359: drv_UsimTxRx.. NoOfBytesExpected = 0x%X
Line 2378: drv_UsimTxRx - The TX FIFO is not empty(TxCount = 0x%X) -- flush
Line 2385: drv_UsimTxRx - The RX FIFO is not empty(RxCount = 0x%X) -- flush
Line 2424: drv_UsimTxRx.. Tx Header => 0x%X, 0x%X, 0x%X, 0x%X, 0x%X
Line 2450: !!! UICC_EXCH_TYPE_UNKNOWN !!!
Line 2475: RxParityCount = 0x%X
Line 2481: RxParityCount = 10....Cold reset
Line 2490: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 2492: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X,pData->NoOfRxBytes = 0x%X
Line 2512: Null byte is received...continue without save data
Line 2519: *** Received Null byte 100 times ***
Line 2536: UsimHandleRxData. NullProcByteCount = %d
Line 2552: pData->NoOfBytesExpected = 3, RxByte=0x%X
Line 2557: UsimHandleRxData. Error!! pData->NoOfRxBytes = 0x%X,RxByte = 0x%X
Line 2564: UsimHandleRxData..CmdExchType=1...Expect=2
Line 2584: Error!! pData->NoOfRxBytes = 0x%X,RxByte = 0x%X
Line 2591: UsimHandleRxData..CmdExchType=1...Expect=2
Line 2610: UsimHandleRxData. Error!! pData->NoOfRxBytes = 0x%X,RxByte =0x%X
Line 2659: UsimHandleRxData. ## Error pData->NoOfBytesExpected < pData->NoOfRxBytes
Line 2690: UsimHandleRxData. RxParityCount = 0x%X
Line 2696: UsimHandleRxData. RxParityCount = 10....Cold reset
Line 2705: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 2707: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X
Line 2735: UsimHandleRxData. Receive Byte <= 0x%X
Line 2754: UsimHandleRxData. Receive ACK Byte : 0xFE
Line 2763: UsimHandleRxData. Receive Rx Byte : 0x60
Line 2771: +++ UsimHandleRxData. Receive Null byte 100 times
Line 2787: UsimHandleRxData. NullProcByteCount = %d
Line 2824: UsimHandleRxData. ## Error pData->NoOfBytesExpected < pData->NoOfRxBytes
Line 2846: !!!! Abnormal Exchange Type !!!!
Line 2851: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 2852: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X
Line 2874: UsimCopyDataToTxFifo. NoOfTxBytes is too long: 0x%X
Line 2880: UsimCopyDataToTxFifo. UsimCopyDataToTxFifo. NoOfBytesTrasmitted is wrong: 0x%X
Line 2892: UsimCopyDataToTxFifo(Data <= 64) pData->NoOfTxBytes=0x%X
Line 2900: Tx Byte=0x%X
Line 2910: pData->NoOfBytesExpected=0x%X, pData->NoOfRxBytes=0x%X
Line 2926: UsimCopyDataToTxFifo(Data > 64) pData->NoOfTxBytes=0x%X
Line 2934: TxFifo=0x%X
Line 2945: NoOfBytesTrasmitted is wrong: 0x%X
Line 2997: DRV_IS_NO_SIM - SCICARDININTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 2999: Rxbuffer = 0x%X,ITIP = 0x%X
Line 3014: DRV_IS_NO_SIM - SCICARDOUTINTR
Line 3035: DRV_IS_NO_SIM - SCICARDUPINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3037: Rxbuffer = 0x%X,ITIP = 0x%X
Line 3061: DRV_IS_NO_SIM - Deactivation completed !!
Line 3072: DRV_IS_NO_SIM - Overrun Error
Line 3086: DRV_IS_NO_SIM - SCIRXTIDEINTR
Line 3098: +++ RxTideCount > 10 , it maybe Card Damaged!!..go to Unknown state
Line 3111: Abnormal INTR = 0x%X in the DRV_IS_NO_SIM
Line 3112: RIS = 0x%X,MIS = 0x%X
Line 3135: DRV_IS_WAIT_FOR_ATR - SCIRXTIDEINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3137: ITIP = 0x%X
Line 3193: DRV_IS_WAIT_FOR_ATR - SCIATRDTOUTINTR
Line 3216: DRV_IS_WAIT_FOR_ATR - SCIATRSTOUTINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3218: Rxbuffer = 0x%X,ITIP = 0x%X
Line 3241: DRV_IS_WAIT_FOR_ATR - SCICARDOUTINTR
Line 3257: DRV_IS_WAIT_FOR_ATR - SCICARDDNINTR
Line 3282: DRV_IS_WAIT_FOR_ATR - SCICHTOUTINTR
Line 3284: NoOfRxBytes=%d,NoOfBytesExpected=%d
Line 3305: DRV_IS_WAIT_FOR_ATR - Overrun Error
Line 3321: Abnormal INTR = 0x%X in the DRV_IS_WAIT_FOR_ATR
Line 3342: DRV_IS_PPS - SCITXTIDEINTR
Line 3348: DRV_IS_PPS - SCIRXTIDEINTR
Line 3363: DRV_IS_PPS - SCITXERRINTR
Line 3383: DRV_IS_PPS - SCICHTOUTINTR
Line 3385: NoOfRxBytes=%d,NoOfBytesExpected=%d
Line 3414: DRV_IS_PPS - SCIBLKTOUTINTR
Line 3420: SCIBLKTIMEMS = 0x%X, SCIBLKTIMELS = 0x%X
Line 3421: PPSTA1 = 0x%X, PPSTC2 = 0x%X, iSCIBAUD = 0x%X, SCICLKICC = 0x%X, SCIVALUE = 0x%X
Line 3434: PPS...CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3436: Rxbuffer = 0x%X, ITIP = 0x%X
Line 3450: DRV_IS_PPS - Overrun Error
Line 3466: Abnormal INTR = 0x%X in the DRV_IS_PPS
Line 3488: DRV_IS_WAIT_FOR_CMD - SCIRXTIDEINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3490: Rxbuffer = 0x%X,ITIP = 0x%X,RxCount = 0x%X
Line 3498: ***flush Rx buffer SCIRXTIDEINTR in the DRV_IS_WAIT_FOR_CMD
Line 3508: +++ AbnormalReceiveCount > 10 , it maybe Card Damaged!!..go to Unknown state
Line 3524: DRV_IS_WAIT_FOR_CMD - SCIRTOUTINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3526: Rxbuffer = 0x%X,ITIP = 0x%X
Line 3538: ***flush Rx buffer SCIRTOUTINTR in the DRV_IS_WAIT_FOR_CMD
Line 3546: DRV_IS_WAIT_FOR_CMD - SCITXERRINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3548: ITIP = 0x%X
Line 3559: ###flush Tx buffer SCITXERRINTR in the DRV_IS_WAIT_FOR_CMD
Line 3565: DRV_IS_WAIT_FOR_CMD - Overrun Error
Line 3580: DRV_IS_WAIT_FOR_CMD - Abnormal INTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3581: Rxbuffer = 0x%X,ITIP = 0x%X,RxCount = 0x%X
Line 3586: Abnormal INTR = 0x%X in the DRV_IS_WAIT_FOR_CMD
Line 3606: DRV_IS_TX_RX - SCITXTIDEINTR
Line 3612: DRV_IS_TX_RX - SCIRXTIDEINTR
Line 3624: DRV_IS_TX_RX - SCITXERRINTR
Line 3648: DRV_IS_TX_RX - SCICHTOUTINTR
Line 3651: NoOfRx=0x%X,NoOfExpected=0x%X,RxBuff[0]=0x%X,RxBuff[1]=0x%X,IsIdleState=0x%X
Line 3653: pData->NoOfBytesTrasmitted = 0x%X
Line 3675: DRV_IS_TX_RX - SCIBLKTOUTINTR
Line 3682: SCIBLKTIMEMS = 0x%X, SCIBLKTIMELS = 0x%X
Line 3683: PPSTA1 = 0x%X, PPSTC2 = 0x%X, iSCIBAUD = 0x%X, SCICLKICC = 0x%X, SCIVALUE = 0x%X
Line 3696: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3698: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X,pData->NoOfRxBytes = 0x%X
Line 3712: DRV_IS_TX_RX - SCICARDOUTINTR
Line 3725: DRV_IS_TX_RX - SCICARDDNINTR
Line 3742: DRV_IS_TX_RX - Overrun Error
Line 3759: Abnormal INTR = 0x%X in the DRV_IS_TX_RX
Line 3783: DRV_IS_TX - SCITXTIDEINTR
Line 3792: DRV_IS_TX - SCITXERRINTR
Line 3814: DRV_IS_TX - SCICHTOUTINTR
Line 3817: NoOfRxBytes=0x%X,NoOfBytesExpected=0x%X 
Line 3838: DRV_IS_TX - SCIBLKTOUTINTR
Line 3845: SCIBLKTIMEMS = 0x%X, SCIBLKTIMELS = 0x%X
Line 3846: PPSTA1 = 0x%X, PPSTC2 = 0x%X, iSCIBAUD = 0x%X, SCICLKICC = 0x%X, SCIVALUE = 0x%X
Line 3859: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3861: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X
Line 3874: DRV_IS_TX - SCICARDOUTINTR
Line 3888: DRV_IS_TX - SCICARDDNINTR
Line 3905: DRV_IS_TX - Overrun Error
Line 3921: Abnormal INTR = 0x%X in the DRV_IS_TX
Line 3973: RxParityCount = 0x%X
Line 3979: RxParityCount = 10....Cold reset
Line 3991: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3993: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X
Line 4012: DRV_IS_RX - Received Byte(0x60)
Line 4023: DRV_IS_RX - Received 0x60 %d times, USIM_NULLTIMEOUT_OCCURED occured
Line 4038: DRV_IS_RX - Receive Null byte(0x60)
Line 4054: DRV_IS_RX - Error!! pData->NoOfRxBytes = 0x%X, RxCount = 0x%X, pData->NoOfBytesExpected = 0x%X, RxByte = 0x%X
Line 4063: ***flush Rx buffer SCIRXTIDEINTR in the DRV_IS_RX
Line 4073: DRV_IS_RX - Error!! pData->NoOfRxBytes = 0x%X, RxCount = 0x%X, pData->NoOfBytesExpected = 0x%X, RxByte = 0x%X
Line 4090: DRV_IS_RX - pData->NoOfBytesExpected == pData->NoOfRxBytes == 0x%X
Line 4095: DRV_IS_RX - pData->NoOfBytesExpected == pData->NoOfRxBytes == 0x%X
Line 4108: DRV_IS_RX - pData->NoOfBytesExpected =0x%X , pData->NoOfRxBytes =0x%X
Line 4110: Call drv_USIMSetRxTide
Line 4127: DRV_IS_RX - SCICHTOUTINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 4128: ITIP = 0x%X
Line 4129: NoOfRx=0x%X, NoOfExpected=0x%X, RxBuff[0]=0x%X, RxBuff[1]=0x%X, CmdExchType=0x%X
Line 4150: DRV_IS_RX - SCIBLKTOUTINTR
Line 4153: SCIBLKTIMEMS = 0x%X, SCIBLKTIMELS = 0x%X
Line 4154: PPSTA1 = 0x%X, PPSTC2 = 0x%X, iSCIBAUD = 0x%X, SCICLKICC = 0x%X, SCIVALUE = 0x%X
Line 4167: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 4169: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X,pData->NoOfRxBytes = 0x%X
Line 4186: DRV_IS_RX - SCICARDOUTINTR
Line 4199: DRV_IS_RX - SCICARDDNINTR
Line 4216: DRV_IS_RX - Overrun Error
Line 4232: Abnormal INTR = 0x%X in the DRV_IS_RX
Line 4258: Abnormal INTR = 0x%X in the DRV_IS_UNKNOWN
Line 4259: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 4268: Disable abnormal interrupt and request cold reset !!!
Line 4269: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 4273: drv_UsimHISR_EventHandler: pData is NULL for event[%d], just return
Line 4292: Abnormal INTR = 0x%X in the DRV_IS_IDLE
Line 4323: pData == NULL.. restore pData from pStoreDeviceBlk in drv_UsimHISR_EventHandler
Line 4332: drv_UsimHISR_EventHandler: pData is NULL for event[%d], just return
Line 4397: drv_UsimHISR_EventHandler ************** ERROR OCCURED **************
Line 4408: UsimRemoveDetectIntr is TRUE, Block response
Line 4449: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4451: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4462: drv_UsimHISR_EventHandler - USIM_DRV_CARD_REJECTED
Line 4474: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4476: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4495: drv_UsimHISR_EventHandler - USIM_DRV_CARD_NOT_FOUND
Line 4503: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4505: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4528: drv_UsimHISR_EventHandler - USIM_CHTIMEOUT_OCCURED
Line 4536: UsimRemoveDetectIntr is TRUE, Block response
Line 4558: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4560: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4584: drv_UsimHISR_EventHandler - UICC_RXTIMEOUT_OCCURED
Line 4614: drv_UsimHISR_EventHandler - USIM_NORESPONSE_OCCURED
Line 4621: ERROR DeviceId == 0x0
Line 4628: UsimRemoveDetectIntr is TRUE, Block response
Line 4648: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4650: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4677: drv_UsimHISR_EventHandler - USIM_UNKNOWN_OCCURED
Line 4686: UsimRemoveDetectIntr is TRUE, Block response
Line 4705: drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4706: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4733: drv_UsimHISR_EventHandler - USIM_NULLTIMEOUT_OCCURED
Line 4741: drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4742: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4771: drv_UsimHISR_EventHandler - USIM_PPSTIMEOUT_OCCURED
Line 4778: ERROR DeviceId == 0x0
Line 4785: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4787: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4815: drv_UsimHISR_EventHandler - USIM_DRV_CARD_REMOVED
Line 4827: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4829: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4932: Received Status bytes : SW1=0x%X, SW2=0x%X 
Line 4943: UsimRemoveDetectIntr is TRUE, Block response
Line 4945: Received Status bytes : SW1=0x%X, SW2=0x%X 
Line 4959: Received Status bytes : SW1=0x%X, SW2=0x%X 
Line 4979: End of USIM SocketRequest ]]
Line 4986: UsimRemoveDetectIntr is TRUE, Block response
Line 4988: Received Status bytes : SW1=0x%X, SW2=0x%X 
Line 5014: End of USIM SocketRequest ]]
Line 5040: End of USIM SocketRequest ]]
Line 5049: drv_UsimHISR_EventHandler - USIM_DRV_HISR_EVENT_NULL
Line 5084: PS Service Request %x
Line 5116: PS Service Release %x
Line 5141: Inside drv_UsimActivate
Line 5154: drv_UsimActivate... CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 5168: Leaving drv_UsimActivate
Line 5201: Inside drv_UsimDeActivate
Line 5209: drv_UsimDeActivate... CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 5211: Rxbuffer = 0x%X,ITIP = 0x%X
Line 5251: DeactivateStatus = FALSE !!! one more try - drv_UsimDeActivate
Line 5257: DeactivateStatus = FALSE !!! Fail just change status - drv_UsimDeActivate
Line 5267: Leaving drv_UsimDeActivate
Line 5292: Inside drv_UsimWarmReset
Line 5305: Leaving drv_UsimWarmReset
Line 5350: drv_UsimSocketCreate - No Task ID
Line 5357: drv_UsimSocketCreate - Mailbox cration failed
Line 5373: USIM_DetectTimeoutTimer is NULL
Line 5428: Inside pal_drv_UsimDrvConstructor
Line 5475: Leaving pal_drv_UsimDrvConstructor
Line 5532:  << HISR context so return TRUE >>
Line 5533: HwEO = 0x%X
Line 5534: DeviceBlk = 0x%X
Line 5541: pal_EDrvHweoSocketCreation
Line 5570: +++ pal_drv_UsimDrvRequest - %d !!! +++
Line 5595: +++ pal_drv_UsimDrvRequest - UICC_ACTIVATION !!! +++
Line 5600: drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 5601: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 5682: UICC_DEACTIVATION... Clock start Failed - One more try
Line 5688: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5696: UICC_DEACTIVATION... Clock start Failed !!
Line 5700: bClockStopped = FALSE
Line 5705: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5709: Usim Clock start !!
Line 5716: Usim Clock start !!
Line 5728:  *** UICC_DEACTIVATION
Line 5758: Clock Stop mode enabled....Clock Start !!!
Line 5779: UICC_TX_RX... Clock start Failed - One more try
Line 5785: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5787: ITIP = 0x%X
Line 5795: UICC_TX_RX... Clock start Failed !!
Line 5797: bClockStopped = FALSE
Line 5804: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5806: ITIP = 0x%X
Line 5810: Usim Clock start !!
Line 5817: Usim Clock start !!
Line 5827: Inside UICC_WARM_RESET
Line 5848: +++ pal_drv_UsimDrvRequest - DRV_IS_UNKNOWN !!! +++
Line 5853: drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 5854: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 5886: Clock Stop mode enabled....Clock Start !!!
Line 5907: UICC_TX_RX... Clock start Failed - One more try
Line 5913: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5915: ITIP = 0x%X
Line 5922: drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 5923: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 5925: bClockStopped = FALSE
Line 5932: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5964: Usim Clock started !!
Line 5968: [[ Start of USIM SocketRequest
Line 5986: +++ pal_drv_UsimDrvRequest - DRV_IS_UNKNOWN !!! +++
Line 5991: drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 5992: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 6024: Usim Clock is stopped => Try Clock Start !!!
Line 6044: UICC_TX_RX... Clock start Failed - One more try
Line 6049: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 6057: UICC_TX_RX... Clock start Failed !! request cold reset !!
Line 6059: bClockStopped = FALSE
Line 6065: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 6072: drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 6073: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 6102: Usim Clock started !!
Line 6126:  *** UICC_IDLE
Line 6139: Inside pal_drv_UsimDrvRequest -- default case
