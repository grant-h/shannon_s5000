Line 143: EutraMapper FREED
Line 182: TerminateMeasurement: MeasInstId is NULL
Line 196: [rrc_EutraMeasMapper_TerminateMeasurement]:EutraMeasMapper_p MID(%d) will be terminated
Line 197: [rrc_EutraMeasMapper_TerminateMeasurement]:EutraMeasMapper_p->ConfiguredMids = 0X%x
Line 202: [rrc_EutraMeasMapper_TerminateMeasurement]:EutraMeasMapper_p MID(%d) wasn't configured
Line 207: [rrc_EutraMeasMapper_TerminateMeasurement]:There is no MID to be terminated
Line 224: [rrc_EutraMeasMapper_TerminateMeasurement]:MID %d released at UPHY
Line 237: [rrc_EutraMeasMapper_TerminateMeasurement]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 242: [rrc_EutraMeasMapper_TerminateMeasurement]: TID = 0 for FirstConfMID = %d
Line 265: [rrc_EutraMeasMapper_TerminateMeasurement]:First Configured MID Change [%d] -> [%d]
Line 273: [rrc_EutraMeasMapper_TerminateMeasurement]: No Cells to Config
Line 294: There is more MIDs(0x%X) left
Line 304: [rrc_EutraMeasMapper_TerminateMeasurement]: No Cells to Remove
Line 329: [rrc_EutraMeasMapper_DoMeasurement]:EutraMeasMapper_p MID(%d) will be modified
Line 334: [rrc_EutraMeasMapper_DoMeasurement]:EutraMeasMapper_p MID(%d) will be configured
Line 335: [rrc_EutraMeasMapper_DoMeasurement]:EutraMeasMapper_p->ConfiguredMids = 0X%x
Line 357:  FILTERED EUTRA REMOVE FREQ[%d] = %d 
Line 375:  FILTERED EUTRA ADD FREQ[%d] = %d 
Line 397: [rrc_EutraMeasMapper_DoMeasurement]: Release Meas for MID[%d]
Line 409: [rrc_EutraMeasMapper_DoMeasurement]: Remove TID Failed , TID = %d MID = %d
Line 414: [rrc_EutraMeasMapper_DoMeasurement]: TID = 0 for MID = %d
Line 421: [rrc_EutraMeasMapper_DoMeasurement]: Modify for MID = %d
Line 443: [rrc_EutraMeasMapper_DoMeasurement]: No Cells to Modify
Line 448: [rrc_EutraMeasMapper_DoMeasurement]: ERROR: MeasInst [MID %d] is NULL
Line 472: [rrc_EutraMeasMapper_DoMeasurement]: No Cells to Config
Line 477: [rrc_EutraMeasMapper_DoMeasurement]: ERROR: MeasInst [MID %d] is NULL
Line 549: rrc_ss_AllocBuff failed for rrc_CUPHY_EutraMeasMod_REQ
Line 582: rrc_ss_AllocBuff failed for rrc_CUPHY_EutraMeasMod_REQ!!
Line 604: [rrc_EutraMeasMapper_DoMeasurementConfig]:EutraMeasMapper_p MID(%d) will be FIRST configured
Line 608: [rrc_EutraMeasMapper_DoMeasurementConfig]: FIRST configured MID(%d), CURRENT Configuring MID(%d)
Line 653: rrc_ss_AllocBuff failed for rrc_CUPHY_EutraMeasConf_REQ
Line 694: [rrc_EutraMeasMapper_NotifyReport][EUTRA_EVENT] Earfcn %d Configured for MID %d
Line 698: MID(%d) is not existed, so removed from DB
Line 709: MID[%d] Created EutraMeasInd(0x%X)
Line 739: rrc_EutraMeasMapper_NotifyReport : Inst Id is NULL !!
Line 764: [rrc_EutraMeasMapper_NotifyReport] MID %d was stopped
Line 805: [rrc_EutraMeasMapper_NotifyReport][EUTRA_PERIOD] Earfcn %d Configured for MID %d
Line 809: MID(%d) is not existed, so removed from DB
Line 822: MID[%d] Created EutraMeasInd(0x%X)
Line 859: rrc_EutraMeasMapper_NotifyReport : Inst Id is NULL !!
Line 880: [rrc_EutraMeasMapper_NotifyReport] MID %d was stopped
Line 913: rrc_InterRMeasMapper_ApplyUtranFilterCoeff : Inst Id is NULL !!
Line 1002: rrc_InterRMeasMapper_ApplyUtranFilterCoeff : Inst Id is NULL !!
Line 1197: [rrc_EutraMeasMapper_AddFreq]: Earfcn  %d :  MidBitmap = 0X%x
Line 1204: [rrc_EutraMeasMapper_AddFreq]: Freq TABLE FULL : Earfcn  %d NOT added
Line 1214: [rrc_EutraMeasMapper_AddFreq]:  Earfcn  %d : ++MID %d : MidBitmap = 0X%x
Line 1220: [rrc_EutraMeasMapper_AddFreq]: ERROR: FreqIdx = %d Out of bound 
Line 1245: [rrc_EutraMeasMapper_RemoveFreq]: Earfcn %d not configured in UPHY
Line 1257: [rrc_EutraMeasMapper_RemoveFreq]: Earfcn %d still configured at UPHY:  MidBitmap = 0X%x
Line 1263: [rrc_EutraMeasMapper_RemoveFreq]: Earfcn %d is REMOVED from UPHY:  MidBitmap = 0X%x
Line 1279: [rrc_EutraMeasMapper_RemoveFreq]: ERROR: FreqIdx %d OutOfBound
Line 1289: [rrc_EutraMeasMapper_RemoveFreq]: MeasInstId is NULL
Line 1295: [rrc_EutraMeasMapper_RemoveFreq]: REPLACED Earfcn %d is REMOVED from UPHY:  MidBitmap = 0X%x
Line 1307: [rrc_EutraMeasMapper_RemoveFreq]: Replaced Earfcn %d not configured in UPHY
Line 1314: [rrc_EutraMeasMapper_RemoveFreq]: Replaced Earfcn %d is REMOVED from UPHY:  MidBitmap = 0X%x
Line 1331: [rrc_EutraMeasMapper_RemoveFreq]: ERROR: FreqIdx %d OutOfBound
Line 1338: [rrc_EutraMeasMapper_RemoveFreq]: Earfcn %d not Found in both New and Saved Freq Lsit
Line 1358: [rrc_EutraMeasMapper_GetFreqMidBitmap]: Earfcn %d not configured in UPHY
Line 1369: [rrc_EutraMeasMapper_GetFreqMidBitmap]: FreqIdx %d Out of Bound
Line 1446: [rrc_EutraMeasMapper_InvalidateTid]: TID invalidate called for MID %d configured in UPHY
Line 1453: [rrc_EutraMeasMapper_InvalidateTid]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 1474: rrc_InterRMeasMapper_ApplyUtranFilterCoeff : Inst Id is NULL !!
