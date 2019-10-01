Line 614: [RFCTRL] InitRfCtrl
Line 711: [RFCTRL] InitRfCtrl
Line 765: [RFCTRL] rat(%d)
Line 775: [start] HAL_RFCTRL_Data_Clear
Line 812: [end] HAL_RFCTRL_Data_Clear
Line 818: [HAL_GetSPIRatStatus] SINGLE_GEN_MASK: 0x%x, ARB0_MASK_(A/B): 0x%x 0x%x ARB0_PRIORITY8: 0x%x, ARB1_MASK_(A/B): 0x%x 0x%x, ARB1_PRIORITY8: 0x%x
Line 827: There is no [IRAT_MUX_RXADC_CTL_RD] register
Line 859: [FrAsyncStartMarconi] Overflow:(%x), Ch_Status(0x%x), MAR_LINK_INTR:(%x) Monitor SOT(0x%x), EOT(0x%x), 0xCRC(0x%x)
Line 1051: [RFCTRL] SetRfIratMux: RAT(%d -> %d)
Line 1156: HAL_CfgSet2GIratMuxtds index %d
Line 1282: [2G_MARCONI] Overflow:(%x), Ch_Status(0x%x), MAR_LINK_INTR:(%x) Monitor SOT(0x%x), EOT(0x%x), 0xCRC(0x%x)
Line 1310: [GsmMarconiRecovery] Overflow:(%x), Ch_Status(0x%x), MAR_LINK_INTR:(%x) Monitor SOT(0x%x), EOT(0x%x), 0xCRC(0x%x)
Line 1504: [RFCTRL] HAL_SetRxUpdateCmd: Not supported CC(%d)
Line 1560: [RFCTRL] HAL_SetRxUpdateCmd: update_mode_B(%x) gen_mask_B(%x) word(%x) update_work4/5/6/7(%x/%x/%x/%x)
Line 1573: [RFCTRL] HAL_SetRxUpdateCmd: update_mode_A(%x) gen_mask_A(%x) word(%x) update_work0/1/2/3(%x/%x/%x/%x)
Line 1611: [RFCTRL] SetRfUpdateMode: Not supported CC(%d)
Line 1675: [RFCTRL] Error - HAL_SetRxUpdateMode: wrong CC info.
Line 1683: [RFCTRL] SetRfUpdateMode: rat(%d), cc(%d), mode(%x), word(%x)
Line 1723: [RFCTRL] SetAfcPdmValue: PDM(%d), REG(0x%x -> 0x%x)
Line 1787: [RFCTRL] SetGpRfioGenMode: idx(%d), mode(%d)
Line 1811: [RFCTRL] Not supported RF(QS) index(%d)
Line 1830: [RFCTRL] SetRfQuickSleepCmd: rf(%d), on_addr(%d, %d), on_cmd(0x%x, 0x%x) 
Line 1838: [RFCTRL] SetRfQuickSleepCmd: mask(0x%08x), off_addr(%d, %d), off_cmd(0x%x, 0x%x)
Line 1879: [ADC] Not supported RF(ADC) index(%d)
Line 1924: [ADC] adc_en 0x%x adc_vc 0x%x adc_on(0x%x) ChipName 0x%x
Line 2433: [ADC] Unknown ADC mode(%d)
Line 2467: [ADC] SetAdcMode: rf(%d), mode(%d), sel(%d -> %d)
Line 2546: [RFCTRL] HAL_SetNumOfRFIF maxNumOfDIF(%d) maxNumOfAIF(%d)
Line 2611: [RFCTRL] HAL_ClearPgcRamTable is started !! Xdma GenStatus(%d) LliTransferState(%d)
Line 2650: [RFCTRL] HAL_ClearPgcRamTable is finished !!
Line 2735: [RFCTRL] FEMSIF_F1_TX0_MAIN_CTL0.FEMSIF_GEN_MODE (%d)
Line 2779: [RFCTRL] Clear_FEM_SIF_Arbit
Line 2813: [RFCTRL] rat(%d)
Line 2953: RFIF_RFCtrl_FEM_SIF_Arbit_WriteData : Wrong Source ID[%d] 
Line 2958: RFIF_RFCtrl_FEM_SIF_Arbit_WriteData : Source ID[%d], arbit[%d], addr[%x]
Line 3013: [RFCTRL] RFIF_RFCtrl_FEM_SIF_MemAddr_Calculator : %d,%d,%d,%d,%d,%d,%d
Line 3021: [RFCTRL] RFIF_RFCtrl_FEM_SIF_MemAddr_Calculator :  Building address table has already Done 
Line 3036: [RFCTRL] RFIF_RFCtrl_FEM_SIF_MemAddr_Calculator : Currently unsupported return mode 
Line 3076: pREG_RFCTRL0->FEMSIF_ARBIT0_TX0_CTL0:0x%x
Line 3077: pREG_RFCTRL0->FEMSIF_ARBIT0_TR_NUM0:0x%x
Line 3078: pREG_RFCTRL0->FEMSIF_ARBIT0_ENABLE0:0x%x
Line 3081: pREG_RFCTRL0->FEMSIF_ARBIT1_TX0_CTL0:0x%x
Line 3082: pREG_RFCTRL0->FEMSIF_ARBIT1_TR_NUM0:0x%x
Line 3083: pREG_RFCTRL0->FEMSIF_ARBIT1_ENABLE0:0x%x
Line 3086: pREG_RFCTRL0->FEMSIF_ARBIT2_TX1_CTL0:0x%x
Line 3087: pREG_RFCTRL0->FEMSIF_ARBIT2_TR_NUM0:0x%x
Line 3088: pREG_RFCTRL0->FEMSIF_ARBIT2_ENABLE0:0x%x
Line 3091: pREG_RFCTRL0->FEMSIF_ARBIT3_TX1_CTL0:0x%x
Line 3092: pREG_RFCTRL0->FEMSIF_ARBIT3_TR_NUM0:0x%x
Line 3093: pREG_RFCTRL0->FEMSIF_ARBIT3_ENABLE0:0x%x
Line 3096: pREG_RFCTRL0->FEMSIF_MAIN_CTL :0x%x
Line 3097: pREG_RFCTRL0->FEMSIF_RAM_SW0_ADDR:0x%x
Line 3098: pREG_RFCTRL0->FEMSIF_RAM_SW0_WR_DATA:0x%x
Line 3128: [RFCTRL] DEBUG C-SPEEDY : INFRA SW_RESETn 0xC1001000 = 0x%x
Line 3129: [RFCTRL] DEBUG C-SPEEDY : RFCTRL SINGLE_GEN_MASK = 0x%x
Line 3130: [RFCTRL] DEBUG C-SPEEDY : RFCTRL BURST_GEN_MASK0 = 0x%x
Line 3131: [RFCTRL] DEBUG C-SPEEDY : RFCTRL SW_FIFO_MODE0 = 0x%x
Line 3132: [RFCTRL] DEBUG C-SPEEDY : RFCTRL SW_DATA_FIFO_WR_POINT0 = 0x%x
Line 3133: [RFCTRL] DEBUG C-SPEEDY : RFCTRL ARB0_REQ_STATUS_A = 0x%x
Line 3134: [RFCTRL] DEBUG C-SPEEDY : RFCTRL ARB0_SELECT_STATUS_A = 0x%x
Line 3135: [RFCTRL] DEBUG C-SPEEDY : RFCTRL ARB0_MASK_(A/B) = 0x%x, 0x%x
Line 3136: [RFCTRL] DEBUG C-SPEEDY : RFCTRL ARB0_PRIORITY0 = 0x%x
Line 3137: [RFCTRL] DEBUG C-SPEEDY : RFCTRL ARB0_PRIORITY1 = 0x%x
Line 3144: [RFCTRL] DEBUG M-SPEEDY : INFRA SW_RESETn 0x8A002000 = 0x%x
Line 3146: [RFCTRL] DEBUG M-SPEEDY : MCW M_REQ_GEN_MASK = 0x%x
Line 3147: [RFCTRL] DEBUG M-SPEEDY : MCW M_SW_FIFO_MODE0 = 0x%x
Line 3148: [RFCTRL] DEBUG M-SPEEDY : MCW M_SW_DATA_FIFO_WR_POINT0 = 0x%x
Line 3149: [RFCTRL] DEBUG M-SPEEDY : MCW M_SPI_REQ_STATUS0 = 0x%x
Line 3150: [RFCTRL] DEBUG M-SPEEDY : MCW M_SPI_SELECT_STATUS0 = 0x%x
Line 3151: [RFCTRL] DEBUG M-SPEEDY : MCW M_ARB0_MASK = 0x%x
Line 3152: [RFCTRL] DEBUG M-SPEEDY : MCW M_ARB0_PRIORITY0 = 0x%x
Line 3153: [RFCTRL] DEBUG M-SPEEDY : MCW M_ARB0_PRIORITY1 = 0x%x
Line 3748: RFIF_Check_SpeedyWakeupSeq_flag fWakeUpSeq: %d , ov:%d , flag%d
Line 3839: RFIF_Check_SpeedyWakeupSeq_flag 
Line 3862: [RFCTRL] CtrlSWSpi0 CSpeedy Parity En fail [%d] trial !!!
Line 3902: ReadSWFemsif0 read fail 
Line 3915: ReadSWFemsif0 read fail 
Line 3932: ReadSWFemsif0 read fail 
Line 3948: ReadSWFemsif0 read fail 
Line 3989: ReadSWFemsif1 read fail 
Line 4003: ReadSWFemsif1 read fail 
Line 4020: ReadSWFemsif2 read fail 
Line 4036: ReadSWFemsif2 read fail 
Line 4077: ReadSWSm0 read fail 
Line 4091: ReadSWSm0 read fail 
Line 4108: ReadSWFemsif1 read fail 
Line 4124: ReadSWFemsif1 read fail 
Line 4165: ReadSWSm1 read fail 
Line 4179: ReadSWSm1 read fail 
Line 4195: ReadSWFemsif3 read fail 
Line 4211: ReadSWFemsif3 read fail 
Line 4253: ReadSWExtendedSm0 read fail 
Line 4268: ReadSWExtendedSm0 read fail 
Line 4285: ReadSWExtendedSm0 read fail 
Line 4301: ReadSWFemsif1 read fail 
Line 4338: ReadSWExtendedSm0 read fail 
Line 4352: ReadSWExtendedSm0 read fail 
Line 4369: ReadSWExtendedSm0 read fail 
Line 4385: ReadSWFemsif0 read fail 
Line 4421: ReadSWExtendedFemsif2 read fail 
Line 4435: ReadSWExtendedFemsif2 read fail 
Line 4453: ReadSWExtendedSm2 read fail 
Line 4469: ReadSWFemsif2 read fail 
Line 4515: ReadExtendedSWSm1 read write fail 
Line 4529: ReadExtendedSWSm1 read write fail 
Line 4547: ReadSWExtendedSm3 read fail 
Line 4563: ReadSWFemsif3 read fail 
Line 4650: [RFCTRL] ReadSWSpi0: check1, EXCEPTION CASE FIFO NOT CLEARED (spiGenWrPtr=%d)!!!!!!!
Line 4671: [RFCTRL] ReadSWSpi0: check2, EXCEPTION CASE FIFO NOT CLEARED (spiGenWrPtr=%d spiGenStatusFld=%d)!!!!!!!
Line 4694: [RFCTRL] ReadSWSpi0: SPEEDY Parity Error (Read Data 0x%x [0x%x])
Line 4845: WriteSWFemsif0 write fail 
Line 4863: WriteSWFemsif0 write fail 
Line 4899: WriteSWFemsif0 write fail 
Line 4917: RFIF_WriteSWFemsif0_t write fail 
Line 4959: WriteSWFemsif1 write fail 
Line 4978: WriteSWFemsif2 write fail 
Line 5017: WriteSWFemsif1 write fail 
Line 5035: WriteSWFemsif2 write fail 
Line 5077: WriteSWSm0 write fail 
Line 5097: WriteSWFemsif1 write fail 
Line 5136: WriteSWSm0 write fail 
Line 5155: WriteSWFemsif1 write fail 
Line 5198: WriteSWSm1 write fail 
Line 5217: WriteSWFemsif3 write fail 
Line 5255: WriteSWSm1 write fail 
Line 5274: WriteSWFemsif3_t write fail 
Line 5318: WriteSWExtentedSm0 write fail 
Line 5336: WriteSWFemsif1 write fail 
Line 5371: ReadSWExtentedFemsif0 fail 
Line 5390: WriteSWFemsif0 write fail 
Line 5434: WriteSWExtentedSm1 write fail 
Line 5452: WriteSWFemsif2 write fail 
Line 5497: WriteSWExtentedSm1 write fail 
Line 5514: WriteSWFemsif3 write fail 
Line 5558: ReadSWExtentedDataFemsif0 fail 
Line 5573: ReadSWExtentedDataFemsif1 fail 
Line 5588: ReadSWExtentedDataFemsif2 fail 
Line 5603: ReadSWExtentedDataFemsif0 fail 
Line 5626: ReadSWExtentedDataFemsif0 fail 
Line 5647: ReadSWExtentedDataFemsif1 fail 
Line 5669: ReadSWExtentedDataFemsif2 fail 
Line 5692: ReadSWExtentedDataFemsif3 fail 
Line 5806: [RFCTRL] RFIF_WriteSWSpi0_t: Addr:0x%x Data:0x%x
Line 5821: [RFCTRL] RFIF_WriteSWSpi0_t: nBuffer[%d] of  spi_cnt exceeded the limit !!!!!!!
Line 5832: [RFCTRL] WriteSWSpi0_t: EXCEPTION CASE FIFO NOT CLEARED (spiGenStatusFld=%d)!!!!!!! cnt %d
Line 5964: [RFCTRL] RFIF_WriteSWSpi0_t: EXCEPTION CASE FIFO NOT CLEARED (spiGenStatusFld=%d)!!!!!!!
Line 5978: [RFCTRL] RFIF_FlushSWSpi0_t : pal_cpu_busy_wait_us[%d] 
Line 6134: mSpeedy failed  %d
Line 6139: mSpeedy failed  %d
Line 6148: [RFCTRL] Read MSpeedy0: EXCEPTION CASE FIFO NOT CLEARED (M_SW_DATA_FIFO_WR_POINT0 : %d) !!!!!!!
Line 6183: [RFCTRL] Read MSpeedy0: EXCEPTION CASE FIFO NOT CLEARED (M_SPI_SELECT_STATUS0 : %d) !!!!!!!
Line 6202: [RFCTRL] Read MSpeedy0: Error case happened and passed by solution flag!! error_cnt [%d] 
Line 6250: mSpeedy failed %d 
Line 6260: [RFCTRL] Write MSpeedy0: EXCEPTION CASE FIFO NOT CLEARED (M_SW_DATA_FIFO_WR_POINT0 : %d) !!!!!!!
Line 6325: RFIF_StartRfInterupter 0x%x pllLockTime %d agcLargeTime %d  agcSmallTime %d 
Line 6544: RFIF_Enable3GRachOnTick %d 
Line 6567: onTick read  TICKGEN_TX0_MAIN_OUT 0x%x  
Line 6568: on Tick read FEMSIF_ARBIT0_CTL_RD1 0x%x  
Line 6573: onTick read	TICKGEN_TX0_MAIN_OUT 0x%x  
Line 6574: on Tick read FEMSIF_ARBIT1_CTL_RD1 0x%x	
Line 6579: on Tick read  TICKGEN_MIPI_RFFE2_CTL 0x%x	
Line 6580: on Tick read FEMSIF_ARBIT2_CTL_RD1 0x%x	
Line 6585: on Tick read  TICKGEN_MIPI_RFFE3_CTL 0x%x	
Line 6586: on Tick read FEMSIF_ARBIT3_CTL_RD1 0x%x	
Line 6725: RFIF_Enable3GRachOffTick %d 
Line 6731: off Tick read FEMSIF_ARBIT0_CTL_RD1 0x%x  
Line 6736: off Tick read FEMSIF_ARBIT1_CTL_RD1 0x%x  
Line 6741: off Tick read FEMSIF_ARBIT2_CTL_RD1 0x%x  
Line 6746: off Tick read FEMSIF_ARBIT3_CTL_RD1 0x%x  
Line 6778: RFIF_Set3GRachTickSPI %d 
Line 6801: RachTickSPI PA on 0x%x PA mode 0x%x read reg %x
Line 6809: RachTickSPI MIPI on %x 
Line 6827: RachTickSPI PA off 0x%x PA mode 0x%x read reg %x
Line 6836: RachTickSPI mipi off 0x%x 
Line 6840: RFIF_Set3GRachTickSPI power %d tx_gain 0x%x tx_falling_gain 0x%x paMode %d 
Line 6853: RachOnTick onSlot %d onChip %d onChipx8 %d
Line 6867: RachOnTick not support mipi_path %d
Line 6900: Set3GRachOffTickTiming %d 
Line 6903: RachOffTick offSlot %d offChip %d offChipx8 %d type %d
Line 6917: RachOffTick not support mipi_path %d
Line 6964: RFIF_OvPowerDetector %d 
Line 7050: RFIF_IOPAM_ovEnable %d , %x
Line 7079: [RF D2D] %s D2D gain feedback
Line 7094: [RF BDA] mipi device fail count %d
Line 7106: [RF BDA] pam device count : %d
Line 7123: [RF BDA] rfic device count : %d, rfic : %d, pam : %d, rf device check done : %d
