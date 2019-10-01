Line 197: ##Error Expected < Received in drv_USIMSetRxTide
Line 198: Expected=0x%X, Received=0x%X
Line 210: pal_DrvSim2ClockStopSet...no clock stopping
Line 217: hw_Usim2IO.iSCICR0 = 0x%X,hw_Usim2IO.iSCICR1 = 0x%X
Line 255: pal_DrvSimClockStopSet... Clock stop Failed - One more try
Line 260: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 267: pal_DrvSimClockStopSet... Clock stop Failed !!
Line 272: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 281: Clock Stop mode enabled....Clock Stop !!!
Line 285: Already Cock stopped.skip..pal_DrvSimClockStopSet
Line 291: *** USIM retention at pal_DrvSim2ClockStopSet
Line 369: Usim Clock fRef: %d, SCICLKICC: %d, f: %d
Line 453: << ATR WWT Default = %d etu >>
Line 475: << hw_Usim2IO.iSCIAUXCR = 0x%X >>
Line 933:  *** FORCED RETURN SIM2 REQUEST *** 
Line 1024: ** Parity error at TS byte
Line 1038: == USIM2_ATR_INVERSE_CONV == 
Line 1054: Receive 0x3B twice..skip
Line 1066: ATR Parity error ...UsimRxReceivedBytes = 0x%X, RxByte = 0x%X 
Line 1142: Current WWT value = %d etu
Line 1185: ResponseSleepTime_USIM2 = %d uSec( = 21 etu)
Line 1188: Di = %d, WI = %d
Line 1189: Change WWT value = %d etu
Line 1234: Calculate PPS : Fi = %d, Di = %d,FDratio = %d
Line 1270: Usim2DriverState != DRV_IS_PPS
Line 1271: Usim2DriverState = 0x%X
Line 1298: drv_Usim2DecodeAtr - ATR rejected
Line 1406: TC1...GUARDTIME ADDED = %d
Line 1423: TD(1) Protocol= %d
Line 1456: ProcessATR...ATR_T0_TA3 = 0x%X
Line 1459: ** UsimClockStopState = 0x%X
Line 1490: << PPS = 0x%X >>
Line 1545: ProcessATR...usePPS = FALSE
Line 1551: >>> Change F/D = %d
Line 1556: >>> Invalid TA1 value.. no Change speed
Line 1600: The TX FIFO is not empty ...The value of TXCount is 0x%X
Line 1605: The RX FIFO is not empty ...The value of RxCount is 0x%X
Line 1644: Usim2HandlePPSData... RxCount=%d
Line 1660: UsimHandlePPSData... Receive Parity error
Line 1665: Receive PPS response
Line 1672: Receive PPS[%d] = 0x%X
Line 1678: UseDefaultPPS == TRUE
Line 1693: Receive PPS[%d] = 0x%X
Line 1705: >>> PPS rejected from CARD. using default speed
Line 1713: >>> Change F/D = %d
Line 1718: >>> Invalid TA1 value=0x%X ...no Change speed
Line 1730: For receive remained PPS Data..drv_USIM2SetRxTide = %d
Line 1746: Disable Internal pull-up of SIM1 DATA_IO
Line 1750: Can't process NULL handle: SIM1_DATA(%x)
Line 1762: Enable Internal pull-up of SIM1 DATA_IO
Line 1766: Can't process NULL handle: SIM1_DATA(%x)
Line 1860: Can't process NULL handle: SIM1_CLK(%x), SIM1_DATA(%x), SIM1_RST(%x)
Line 1892: Can't process NULL handle: SIM1_CLK(%x), SIM1_DATA(%x), SIM1_RST(%x)
Line 1904: Enter drv_UsimHwUsim1Backup
Line 1912: Exit drv_UsimHwUsim1Backup
Line 1918: Enter drv_UsimHwUsim1Restore
Line 1971: Exit drv_UsimHwUsim1Restore
Line 1978: Enter drv_Usim1ReadyRetention
Line 1982: Exit drv_Usim1ReadyRetention
Line 1991: Enter drv_Usim1StartRetention
Line 2004: Exit drv_Usim1StartRetention
Line 2035: drv_Usim2TxRx..pData=null skip
Line 2046: drv_Usim2TxRx..DRV_IS_NO_SIM
Line 2053: drv_Usim2TxRx..DRV_IS_WAIT_FOR_ATR
Line 2057: drv_Usim2TxRx - DRV_IS_TX_RX
Line 2061: drv_Usim2TxRx - DRV_IS_WAIT_FOR_CMD
Line 2069: drv_Usim2TxRx - UICC_EXCH_TYPE2..NoOfBytesExpected++ = 0x%X
Line 2074: drv_Usim2TxRx.. NoOfBytesExpected = 0x%X
Line 2092: drv_Usim2TxRx - The TX FIFO is not empty(TxCount = 0x%X) -- flush
Line 2098: drv_Usim2TxRx - The RX FIFO is not empty(RxCount = 0x%X) -- flush
Line 2137: drv_UsimTxRx.. Tx Header => 0x%X, 0x%X, 0x%X, 0x%X, 0x%X
Line 2163: !!! UICC_EXCH_TYPE_UNKNOWN !!!
Line 2188: RxParityCount_USIM2 = 0x%X
Line 2193: RxParityCount = 10....Cold reset
Line 2201: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 2202: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X,pData->NoOfRxBytes = 0x%X
Line 2220: Null byte is received...continue without save data
Line 2226: *** Received Null byte 100 times ***
Line 2241: Usim2HandleRxData. NullProcByteCount_USIM2 = %d
Line 2257: pData->NoOfBytesExpected = 3, RxByte=0x%X
Line 2261: Usim2HandleRxData. Error!! pData->NoOfRxBytes = 0x%X,RxByte = 0x%X
Line 2267: Usim2HandleRxData..CmdExchType=1...Expect=2
Line 2286: Error!! pData->NoOfRxBytes = 0x%X,RxByte = 0x%X
Line 2292: Usim2HandleRxData..CmdExchType=1...Expect=2
Line 2310: Usim2HandleRxData. Error!! pData->NoOfRxBytes = 0x%X,RxByte =0x%X
Line 2359: Usim2HandleRxData. ## Error pData->NoOfBytesExpected < pData->NoOfRxBytes
Line 2389: Usim2HandleRxData. RxParityCount_USIM2 = 0x%X
Line 2394: Usim2HandleRxData. RxParityCount_USIM2 = 10....Cold reset
Line 2402: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 2403: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X
Line 2429: Usim2HandleRxData. Receive Byte <= 0x%X
Line 2447: Usim2HandleRxData. Receive ACK Byte : 0xFE
Line 2455: Usim2HandleRxData. Receive Rx Byte : 0x60
Line 2463: +++ Usim2HandleRxData. Receive Null byte 100 times
Line 2478: Usim2HandleRxData. NullProcByteCount_USIM2 = %d
Line 2515: Usim2HandleRxData. ## Error pData->NoOfBytesExpected < pData->NoOfRxBytes
Line 2537: !!!! Abnormal Exchange Type !!!!
Line 2542: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 2543: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X
Line 2563: Usim2CopyDataToTxFifo. NoOfTxBytes is too long: 0x%X
Line 2568: Usim2CopyDataToTxFifo. NoOfBytesTrasmitted is wrong: 0x%X
Line 2579: Usim2CopyDataToTxFifo(Data <= 64) pData->NoOfTxBytes=0x%X
Line 2586: Tx Byte=0x%X
Line 2595: pData->NoOfBytesExpected=0x%X, pData->NoOfRxBytes=0x%X
Line 2610: Usim2CopyDataToTxFifo(Data > 64) pData->NoOfTxBytes=0x%X
Line 2617: TxFifo=0x%X
Line 2627: NoOfBytesTrasmitted is wrong: 0x%X
Line 2677: DRV_IS_NO_SIM - SCICARDININTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 2678: Rxbuffer = 0x%X,ITIP = 0x%X
Line 2691: DRV_IS_NO_SIM - SCICARDOUTINTR
Line 2710: DRV_IS_NO_SIM - SCICARDUPINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 2711: Rxbuffer = 0x%X,ITIP = 0x%X
Line 2735: DRV_IS_NO_SIM - Deactivation completed !!
Line 2744: DRV_IS_NO_SIM - Overrun Error
Line 2757: DRV_IS_NO_SIM - SCIRXTIDEINTR
Line 2768: +++ RxTideCount > 10 , it maybe Card Damaged!!..go to Unknown state
Line 2780: Abnormal INTR = 0x%X in the DRV_IS_NO_SIM
Line 2781: RIS = 0x%X,MIS = 0x%X
Line 2803: DRV_IS_WAIT_FOR_ATR - SCIRXTIDEINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 2804: ITIP = 0x%X
Line 2860: DRV_IS_WAIT_FOR_ATR - SCIATRDTOUTINTR
Line 2881: DRV_IS_WAIT_FOR_ATR - SCIATRSTOUTINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 2882: Rxbuffer = 0x%X,ITIP = 0x%X
Line 2904: DRV_IS_WAIT_FOR_ATR - SCICARDOUTINTR
Line 2918: DRV_IS_WAIT_FOR_ATR - SCICARDDNINTR
Line 2941: DRV_IS_WAIT_FOR_ATR - SCICHTOUTINTR
Line 2942: NoOfRxBytes=%d,NoOfBytesExpected=%d
Line 2961: DRV_IS_WAIT_FOR_ATR - Overrun Error
Line 2976: Abnormal INTR = 0x%X in the DRV_IS_WAIT_FOR_ATR
Line 2995: DRV_IS_PPS - SCITXTIDEINTR
Line 3000: DRV_IS_PPS - SCIRXTIDEINTR
Line 3013: DRV_IS_PPS - SCITXERRINTR
Line 3031: DRV_IS_PPS - SCICHTOUTINTR
Line 3032: NoOfRxBytes=%d,NoOfBytesExpected=%d
Line 3059: DRV_IS_PPS - SCIBLKTOUTINTR
Line 3065: SCIBLKTIMEMS = 0x%X, SCIBLKTIMELS = 0x%X
Line 3066: PPSTA1 = 0x%X, PPSTC2 = 0x%X, iSCIBAUD = 0x%X, SCICLKICC = 0x%X, SCIVALUE = 0x%X
Line 3078: PPS...CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3079: Rxbuffer = 0x%X, ITIP = 0x%X
Line 3092: DRV_IS_PPS - Overrun Error
Line 3107: Abnormal INTR = 0x%X in the DRV_IS_PPS
Line 3128: DRV_IS_WAIT_FOR_CMD - SCIRXTIDEINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3129: Rxbuffer = 0x%X,ITIP = 0x%X,RxCount = 0x%X
Line 3136: ***flush Rx buffer SCIRXTIDEINTR in the DRV_IS_WAIT_FOR_CMD
Line 3145: +++ AbnormalReceiveCount > 10 , it maybe Card Damaged!!..go to Unknown state
Line 3158: DRV_IS_WAIT_FOR_CMD - SCIRTOUTINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3159: Rxbuffer = 0x%X,ITIP = 0x%X
Line 3169: ***flush Rx buffer SCIRTOUTINTR in the DRV_IS_WAIT_FOR_CMD
Line 3176: DRV_IS_WAIT_FOR_CMD - SCITXERRINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3177: ITIP = 0x%X
Line 3187: ###flush Tx buffer SCITXERRINTR in the DRV_IS_WAIT_FOR_CMD
Line 3192: DRV_IS_WAIT_FOR_CMD - Overrun Error
Line 3206: DRV_IS_WAIT_FOR_CMD - SCIRXTIDEINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3207: Rxbuffer = 0x%X,ITIP = 0x%X,RxCount = 0x%X
Line 3211: Abnormal INTR = 0x%X in the DRV_IS_WAIT_FOR_CMD
Line 3229: DRV_IS_TX_RX - SCITXTIDEINTR
Line 3234: DRV_IS_TX_RX - SCIRXTIDEINTR
Line 3245: DRV_IS_TX_RX - SCITXERRINTR
Line 3266: DRV_IS_TX_RX - SCICHTOUTINTR
Line 3268: NoOfRx=0x%X,NoOfExpected=0x%X,RxBuff[0]=0x%X,RxBuff[1]=0x%X,IsIdleState=0x%X
Line 3269: pData->NoOfBytesTrasmitted = 0x%X
Line 3289: DRV_IS_TX_RX - SCIBLKTOUTINTR
Line 3295: SCIBLKTIMEMS = 0x%X, SCIBLKTIMELS = 0x%X
Line 3296: PPSTA1 = 0x%X, PPSTC2 = 0x%X, iSCIBAUD = 0x%X, SCICLKICC = 0x%X, SCIVALUE = 0x%X
Line 3308: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3309: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X,pData->NoOfRxBytes = 0x%X
Line 3322: DRV_IS_TX_RX - SCICARDOUTINTR
Line 3333: DRV_IS_TX_RX - SCICARDDNINTR
Line 3348: DRV_IS_TX_RX - Overrun Error
Line 3363: Abnormal INTR = 0x%X in the DRV_IS_TX_RX
Line 3385: DRV_IS_TX - SCITXTIDEINTR
Line 3393: DRV_IS_TX - SCITXERRINTR
Line 3413: DRV_IS_TX - SCICHTOUTINTR
Line 3414: NoOfRxBytes=0x%X,NoOfBytesExpected=0x%X 
Line 3433: DRV_IS_TX - SCIBLKTOUTINTR
Line 3439: SCIBLKTIMEMS = 0x%X, SCIBLKTIMELS = 0x%X
Line 3440: PPSTA1 = 0x%X, PPSTC2 = 0x%X, iSCIBAUD = 0x%X, SCICLKICC = 0x%X, SCIVALUE = 0x%X
Line 3452: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3453: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X
Line 3465: DRV_IS_TX - SCICARDOUTINTR
Line 3477: DRV_IS_TX - SCICARDDNINTR
Line 3492: DRV_IS_TX - Overrun Error
Line 3507: Abnormal INTR = 0x%X in the DRV_IS_TX
Line 3559: RxParityCount = 0x%X
Line 3564: RxParityCount_USIM2 = 10....Cold reset
Line 3574: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3575: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X
Line 3592: DRV_IS_RX - Received Byte(0x60)
Line 3602: DRV_IS_RX - Received 0x60 %d times, USIM_NULLTIMEOUT_OCCURED occured
Line 3617: DRV_IS_RX - Receive Null byte(0x60)
Line 3632: DRV_IS_RX - Error!! pData->NoOfRxBytes = 0x%X, RxCount = 0x%X, pData->NoOfBytesExpected = 0x%X, RxByte = 0x%X
Line 3639: ***flush Rx buffer SCIRXTIDEINTR in the DRV_IS_RX
Line 3648: DRV_IS_RX - Error!! pData->NoOfRxBytes = 0x%X, RxCount = 0x%X, pData->NoOfBytesExpected = 0x%X, RxByte = 0x%X
Line 3664: DRV_IS_RX - pData->NoOfBytesExpected == pData->NoOfRxBytes == 0x%X
Line 3668: DRV_IS_RX - pData->NoOfBytesExpected == pData->NoOfRxBytes == 0x%X
Line 3680: DRV_IS_RX - pData->NoOfBytesExpected =0x%X , pData->NoOfRxBytes =0x%X
Line 3681: Call drv_USIMSetRxTide
Line 3698: DRV_IS_RX - SCICHTOUTINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3699: ITIP = 0x%X
Line 3700: NoOfRx=0x%X, NoOfExpected=0x%X, RxBuff[0]=0x%X, RxBuff[1]=0x%X, CmdExchType=0x%X
Line 3719: DRV_IS_RX - SCIBLKTOUTINTR
Line 3722: SCIBLKTIMEMS = 0x%X, SCIBLKTIMELS = 0x%X
Line 3723: PPSTA1 = 0x%X, PPSTC2 = 0x%X, iSCIBAUD = 0x%X, SCICLKICC = 0x%X, SCIVALUE = 0x%X
Line 3735: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3736: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X,pData->NoOfRxBytes = 0x%X
Line 3750: DRV_IS_RX - SCICARDOUTINTR
Line 3762: DRV_IS_RX - SCICARDDNINTR
Line 3777: DRV_IS_RX - Overrun Error
Line 3792: Abnormal INTR = 0x%X in the DRV_IS_RX
Line 3817: Abnormal INTR = 0x%X in the DRV_IS_UNKNOWN
Line 3818: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3827: Disable abnormal interrupt and request cold reset !!!
Line 3828: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3832: drv_UsimHISR_EventHandler: pData is NULL for event[%d], just return
Line 3850: Abnormal INTR = 0x%X in the DRV_IS_IDLE
Line 3880: pData == NULL.. restore pData from pStoreDeviceBlk in drv_Usim2HISR_EventHandler
Line 3888: drv_Usim2HISR_EventHandler: pData is NULL for event[%d], just return
Line 3952: drv_Usim2HISR_EventHandler ************** ERROR OCCURED **************
Line 3963: UsimRemoveDetectIntr is TRUE, Block response2
Line 4003: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4004: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4014: drv_Usim2HISR_EventHandler - USIM_DRV_CARD_REJECTED
Line 4025: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4026: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4044: drv_Usim2HISR_EventHandler - USIM_DRV_CARD_NOT_FOUND
Line 4051: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4052: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4075: drv_Usim2HISR_EventHandler - USIM_CHTIMEOUT_OCCURED
Line 4083: UsimRemoveDetectIntr is TRUE, Block response2
Line 4104: drv_Usim2Status...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4105: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4127: drv_Usim2HISR_EventHandler - UICC_RXTIMEOUT_OCCURED
Line 4155: drv_Usim2HISR_EventHandler - USIM_NORESPONSE_OCCURED
Line 4161: ERROR DeviceId == 0x0
Line 4168: UsimRemoveDetectIntr is TRUE, Block response2
Line 4186: drv_Usim2Status...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4187: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4213: drv_Usim2HISR_EventHandler - USIM_UNKNOWN_OCCURED
Line 4222: UsimRemoveDetectIntr is TRUE, Block response2
Line 4240: drv_Usim2HwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4241: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4269: drv_Usim2HISR_EventHandler - USIM_NULLTIMEOUT_OCCURED
Line 4277: drv_Usim2HwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4278: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4305: drv_Usim2HISR_EventHandler - USIM_PPSTIMEOUT_OCCURED
Line 4311: ERROR DeviceId == 0x0
Line 4317: drv_Usim2Status...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4318: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4344: drv_Usim2HISR_EventHandler - USIM_DRV_CARD_REMOVED
Line 4355: drv_Usim2Status...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4356: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4464: UsimRemoveDetectIntr is TRUE, Block response
Line 4466: Received Status bytes : SW1=0x%X, SW2=0x%X 
Line 4480: Received Status bytes : SW1=0x%X, SW2=0x%X 
Line 4500: End of USIM SocketRequest ]]
Line 4507: UsimRemoveDetectIntr is TRUE, Block response
Line 4509: Received Status bytes : SW1=0x%X, SW2=0x%X 
Line 4535: End of USIM SocketRequest ]]
Line 4547: Received Status bytes : SW1=0x%X, SW2=0x%X 
Line 4567: End of USIM SocketRequest ]]
Line 4575: drv_UsimHISR_EventHandler - USIM_DRV_HISR_EVENT_NULL
Line 4609: PS Service Request %x
Line 4640: PS Service Release %x
Line 4664: Inside drv_Usim2Activate
Line 4675: drv_UsimActivate... CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 4688: Leaving drv_Usim2Activate
Line 4720: Inside drv_Usim2DeActivate
Line 4727: drv_Usim2DeActivate... CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 4728: Rxbuffer = 0x%X,ITIP = 0x%X
Line 4767: DeactivateStatus = FALSE !!! one more try - drv_Usim2DeActivate
Line 4772: DeactivateStatus = FALSE !!! Fail just change status - drv_Usim2DeActivate
Line 4781: Leaving drv_Usim2DeActivate
Line 4805: Inside drv_Usim2WarmReset
Line 4817: Leaving drv_Usim2WarmReset
Line 4861: drv_Usim2SocketCreate - No Task ID
Line 4867: drv_Usim2SocketCreate - Mailbox cration failed
Line 4929: Inside pal_drv_Usim2DrvConstructor
Line 4974: Leaving pal_drv_Usim2DrvConstructor
Line 5031:  << HISR context so return TRUE >>
Line 5032: HwEO = 0x%X
Line 5033: DeviceBlk = 0x%X
Line 5040: pal_EDrvHweoSocketCreation
Line 5069: +++ pal_drv_Usim2DrvRequest - %d !!! +++
Line 5094: +++ pal_drv_Usim2DrvRequest - UICC_ACTIVATION !!! +++
Line 5099: drv_Usim2HwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 5100: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 5182: UICC_DEACTIVATION... Clock start Failed - One more try
Line 5187: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5194: UICC_DEACTIVATION... Clock start Failed !!
Line 5196: bClockStopped_USIM2 = FALSE
Line 5202: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5206: Usim Clock start !!
Line 5213: Usim Clock start !!
Line 5225:  *** UICC_DEACTIVATION
Line 5254: Clock Stop mode enabled....Clock Start !!!
Line 5274: UICC_TX_RX... Clock start Failed - One more try
Line 5279: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5280: ITIP = 0x%X
Line 5287: UICC_TX_RX... Clock start Failed !!
Line 5289: bClockStopped_USIM2 = FALSE
Line 5295: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5296: ITIP = 0x%X
Line 5300: Usim Clock start !!
Line 5307: Usim Clock start !!
Line 5315: Inside UICC_WARM_RESET
Line 5336: +++ pal_drv_Usim2DrvRequest - DRV_IS_UNKNOWN !!! +++
Line 5341: drv_Usim2HwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 5342: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 5373: Clock Stop mode enabled....Clock Start !!!
Line 5393: UICC_TX_RX... Clock start Failed - One more try
Line 5398: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5399: ITIP = 0x%X
Line 5406: drv_Usim2HwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 5407: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 5409: bClockStopped_USIM2 = FALSE
Line 5415: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5447: Usim Clock started !!
Line 5451: [[ Start of USIM SocketRequest
Line 5469: +++ pal_drv_UsimDrvRequest - DRV_IS_UNKNOWN !!! +++
Line 5474: drv_Usim2HwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 5475: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 5507: Usim Clock is stopped => Try Clock Start !!!
Line 5527: UICC_TX_RX... Clock start Failed - One more try
Line 5532: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5540: UICC_TX_RX... Clock start Failed !! request cold reset !!
Line 5542: bClockStopped_USIM2 = FALSE
Line 5548: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5555: drv_Usim2HwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 5556: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 5585: Usim Clock started !!
Line 5609:  *** UICC_IDLE
Line 5619: Inside pal_drv_Usim2DrvRequest -- default case
