Line 113: UMS: Starting Initial RSCP/ECNO step 1 duration(%d)
Line 120: L1ST_UMM: Ignoring UMM Request... triggering 3G MODEM OFF.
Line 140: UMS: !!!! l1x_UmmMeasureInitialRscp: Out Of Memory MP 0x%8x, MLP 0x%8x, RP 0x%8x
Line 169: L1ST_UMM: Aborting measurement, reset the UHAL measurement server
Line 183: L1PS_UMM ERROR: UARFCN - %d is not valid
Line 184: L1PS_UMM ERROR: Umts timing offsets could not be recalculated
Line 190: L1PS_UMM ERROR: UARFCN - %d is not valid
Line 191: L1PS_UMM ERROR: Cummulative Qbit offset could not be reset
Line 232: l1x_UmmInitialRscpStep1: SIL_3GSigGen start:%dqbits, delta:%dqbits
Line 245: ERROR: UARFCN - %d is not found
Line 281: UMS: RSSI measurement
Line 288: L1ST_UMM: Ignoring UMM Request... triggering 3G MODEM OFF.
Line 304: UMS: !!!! l1x_UmmMeasureUarfcnRssi: Out Of Memory MP 0x%8x, FP 0x%8x
Line 324: L1ST_UMM: Aborting measurement, reset the UHAL measurement server
Line 350: l1x_UmmUarfcnRssiRequest: SIL_3GSigGen start:%dqbits, delta:%dqbits
Line 387: l1x_UmmRscpUpdateReqHisr Start
Line 391: l1x_UmmRscpUpdateReqHisr End
Line 455: --- UMS: RSCP UPDATE
Line 459: --- UMS: RSCP UPDATE called without cell
Line 468: L1ST_UMM: Ignoring UMM Request... triggering 3G MODEM OFF.
Line 487: UMS: !!!! l1x_UmmMeasureRscpUpdate: Out Of Memory MP 0x%8x, MLP 0x%8x, RP 0x%8x
Line 512: L1ST_UMM: Aborting measurement, reset the UHAL measurement server
Line 551: Update Timing UARFCN:%d, SC:%d, sfn:%d, slot:%d, chip:%d, frame_offset:%d
Line 561: L1PS_UMM ERROR:Modem is not in power up state - cannot clock latch!!!
Line 600: ERROR: UARFCN - %d is not valid
Line 601: ERROR: Umts timing offsets could not be recalculated
Line 606: ERROR: UARFCN - %d is not valid
Line 607: ERROR: Could not reset cummulative Qbit shift
Line 612: ERROR: UARFCN - %d is not valid
Line 613: ERROR: Could not retrieve cummulative Qbit shift
Line 620: l1x_UmmInitialRscpStep1: SIL_3GSigGen start:%dqbits, delta:%dqbits
Line 652: UMS: l1x_TddRscpUpdate called !
Line 668: the UTRAN RSCP update avoided for BCH(%d) PCH( %d) l1x_toggle_pending %d
Line 693: UMS: l1x_UmmInitial_Step1_Adapter called !
Line 711:  UTRAN Initial RSCP step 1 avoided for BCH(%d) PCH( %d)
Line 735: UMS: l1x_TddUmmInitial2_Adapter called !
Line 744: UMS: l1x_UmmInitial2_Adapter called when two step measurements not enabled!
Line 749: UTRAN Initial RSCP step 2 avoided for BCH(%d) PCH( %d)
Line 778:  UMM Cell Search avoided for BCH(%d) PCH( %d) l1x_toggle_pending %d
Line 801: UMS :l1x_UmmDummy_Adapter called. This should not be possible!
Line 858: UMM: Latch G and U-MODEMs - {%dFN, %dQb}; {%dSLOT, %dHALF CHIP};gFrameCount=%d:%d
Line 875: Reset G2U & G2T IRAT measurement Flags %d G2U %d G2T %d
Line 921: UMM: Last TCU Latch: {%d, %d}
Line 923: UMM: Last U-MODEM Counter Latch: SLOT = %d; HALF CHIP = %d
Line 936: UMM: TCU wrap around - Latch time Qbit delta = %d
Line 945: UMM: Latch time Qbit delta = %d
Line 950: UMM ERROR: Consecutive G-Modem latches with equal frame num: %d
Line 977: ROUND UP UMTS INTERUPT DELTA
Line 980: UMM: Intermediate umts time base chip delta = %d
Line 988: UMM: umts time add on = %d
Line 1006: FINAL UMTS INTERUPT DELTA IN CHIPS = %d
Line 1043: ---UMM:Timing offset < time base delta; New offset = {%d, %d}
Line 1052: ---UMM:Timing offset > time base delta; New offset = {%d, %d}
Line 1059: ---UMM:Timing offset == time base delta; New offset = {%d, %d}
