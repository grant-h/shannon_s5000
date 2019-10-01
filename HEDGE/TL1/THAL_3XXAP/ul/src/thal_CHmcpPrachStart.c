Line 143: basic_ul_info 0x%x
Line 144: ue_state 0x%x
Line 146: phy_ts1[0] 0x%x phy_ts1[1] 0x%x
Line 151: phy_ts2[0] 0x%x phy_ts2[1] 0x%x
Line 156: phy_ts3[0] 0x%x phy_ts3[1] 0x%x
Line 161: phy_ts4[0] 0x%x phy_ts4[1] 0x%x
Line 166: phy_ts5[0] 0x%x phy_ts5[1] 0x%x
Line 171: phy_ts6[0] 0x%x phy_ts6[1] 0x%x
Line 177: kcell_ts[0] 0x%x
Line 178: kcell_ts[1] 0x%x
Line 179: kcell_ts[2] 0x%x
Line 180: kcell_ts[3] 0x%x
Line 181: kcell_ts[4] 0x%x
Line 182: kcell_ts[5] 0x%x
Line 323: [THAL_DSP_WRITE_ELEM] START RF SPI READ from LCPU (PRACH)
Line 357: [THAL_DSP_WRITE_ELEM] prxPrachDes %d powerRampStep %d currentSyncUlNr %d
Line 414: Sel SubChan & Send Uppch Token SubFrm %d bRSN %d cRSN %d
Line 483: tx_ref_cnt SFN %d != timefrnmonitor SFN %d 
Line 486: Start RACH Encode SubFrm(mod 512) %d bRSN %d cRSN %d
Line 497: Abort RACH Encode
Line 525: Cctrch %d Ndata_j %d
Line 576: [THAL_DSP_WRITE_ELEM] scrCode (%d), ulSwitchPos (%d)
Line 583: LMAC Data Transfer
Line 592: RACH TxFrameInterrupt Enabled
Line 618: Submit Release Prach Token bRsn %d cRsn %d
Line 630: Added 1TS more delay for PRACH Release
Line 689: Start ERUCCH Encode SubFrm( mod 512 ) %d bRSN %d cRSN %d
Line 711: [THAL_DSP_WRITE_ELEM] ulSwitchPos (%d)
Line 771: Stop ERUCCH Encode SubFrm( mod 512 ) %d bRSN %d cRSN %d
Line 836: Prach Release Inprogress. Return without selecting Subchan
Line 840: Select Subchan & Send Uppch STF
Line 875: subChanSize %d selSubChanNr %d subFrmNrToTx %d
Line 876: subFrameNr %d bRSN %d cRSN %d
Line 894: new selSubChanNr %d subFrmNrToTx %d diffSubSfn %d
Line 943: Prach Release Inprogress. Return without sending First Uppch
Line 998: Uppch Shift Forced to 0
Line 1017: Erorr UppchShift %d
Line 1045: WT Timer Started for (%d) slots
Line 1046: [THAL_DSP_WRITE_ELEM] Chipset(%x) ScrCode %d SyncUlId %d  Tadv %d
Line 1047: [THAL_DSP_WRITE_ELEM] uppchShift %d switchPosition %d
Line 1077: Inform SyncInfoHO1 to DSP at UppchSend
Line 1109: Uppch Sent SubFrm %d bRSN %d cRSN %d
Line 1115: Token submisstion to Stop Inter-freq Measurement
Line 1120: NULL Token %d
Line 1167: Uppch Stop (%d) SubFrm %d bRSN %d cRSN %d
Line 1194: isErucchConfig %d erucchTTI %d setErucchTTI %d 
Line 1198: Prach Release Inprogress. Return without configuring FPACH
Line 1242: Selected Fpach %d
Line 1273: Fpach Config Fail
Line 1290: Fpach Start
Line 1295: Fpach Start Fail
Line 1306: [THAL_DSP_WRITE_ELEM] fpachDlSlotIndex (%d), fpachChCode(%d) 
Line 1345: Fpach Stop
Line 1350: Fpach Stop Fail
Line 1382: TDD_TX_FRAME_HISR execution failure
Line 1434: FPACH HISR (%d)
Line 1441: Prach Release Inprogress. Return without processing FPACH
Line 1451: Disable WT Timer Success
Line 1455: Disable WT Timer Fail
Line 1469: FPACH CRC Good. FPACH Info 0x%x
Line 1475: FPACH Info Reserved Bits 0x%x
Line 1490: Rcvd Sign %d Sent Sign %d SentSubFrm %d CurrSubFrm %d RelSubFrm %d
Line 1497: FPACH TS 6 currSubFrm %d
Line 1531: [THAL_DSP_WRITE_ELEM] uppchPosFinal %d TxPwrCmd %d
Line 1547: UpPCHPos out of range. Setting default value 1024
Line 1559: txPwrCmd[%d] increases max val[81]
Line 1574: Disable WT Timer Success
Line 1578: Disable WT Timer Fail
Line 1587: SynchInfoHO:Release Prach
Line 1596: prachReleaseCmd == 0
Line 1603: prachReleaseCmd exec() failed errCode %d addErrCode %d
Line 1618: Token submisstion to NFreq setup
Line 1623: NULL Token %d
Line 1628: FPACH on Secondary Freq release
Line 1638: fpachHISR: configureUlPhyCh(), UlPhychConfigCmd exec failed - Err Code = %d, Addl Err Code = %d
Line 1675: selPrachIndex(%d) > numChanCode(%d)
Line 1746: selPrachIndex %d nSlotToWait %d
Line 1748: Submit RACH Encode Token SubFrm %d bRSN %d cRSN %d
Line 1802: Selected Signature %d
Line 1831: Selected SubChan %d
Line 1872: WT Timer Expiry
Line 1880: Returning without action
Line 1922: Max UpPCH Tx Reached
Line 1934: setErucchTTI %d isErucchConfig %d
Line 1943: [THAL_DSP_WRITE_ELEM] UpPCHPos set to %d
Line 1948: SynchInfoHO:Release Prach
Line 1953: prachReleaseCmd == 0
Line 1960: prachReleaseCmd exec() failed errCode %d addErrCode %d
Line 1975: Token submisstion to NFreq setup
Line 1980: NULL Token %d
Line 1985: FPACH on Secondary Freq release
Line 1995: fpachHISR: configureUlPhyCh(), UlPhychConfigCmd exec failed - Err Code = %d, Addl Err Code = %d
Line 2011: Token submisstion to TphyThalRachCnf Port
Line 2019: NULL Token %d
Line 2067: Sel Subseq SubChan & Send Uppch Token currentSyncUlTxNr %d
Line 2068: SubFrm( mod 512) %d bRSN %d cRSN %d
Line 2074: Error:: currentSyncUlTxNr %d
Line 2107: Release Prach bRsn %d cRsn %d
Line 2125: Token submisstion to TphyThalRachCnf Port
Line 2132: NULL Token %d
Line 2138: Release Prach
Line 2143: Release Prach Fail
Line 2170: Fpach Config On TS0
