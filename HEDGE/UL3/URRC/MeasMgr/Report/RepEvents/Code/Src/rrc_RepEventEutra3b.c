Line 164: [rrc_Class_RepEventEutra3b_SendMeasReport] MeasInstId is NULL returned.
Line 169: [rrc_Class_RepEventEutra3b_SendMeasReport] ERROR - EutraMeasurementQuantity is NULL - returning
Line 187: [rrc_RepEventEutra3b::SendMeasReport] ERROR - ReportTransferMode not valid [%i].
Line 214: [FreqResults] For Earfcn = %d
Line 222: [CellResults] For Cell = %d
Line 223: [CellResults] Updated rsrp = %d
Line 224: [CellResults] Updated rsrq = %d
Line 233: [CellResults] For Earfcn = %d
Line 234: [CellResults] For Cell = %d
Line 235: [CellResults] Updated rsrp = %d
Line 236: [CellResults] Updated rsrq = %d
Line 285: [rrc_RepEventEutra3b_NotifyReport] Triggered
Line 290: [rrc_RepEventEutra3b_NotifyReport] MeasInstId is NULL returned.
Line 296: rrc_RepEventEutra3b::NotifyReport No Cell Reported in RepEventEutra3b_p Instance So RESET all Stored data.and Return
Line 313: [rrc_RepEventEutra3b_NotifyReport] ERROR - EutraMeasurementQuantity is NULL - returning
Line 324: [rrc_RepEventEutra3b_NotifyReport] No Event3C triggered so Event3B process will be skipped
Line 330: rrc_RepEventEutra3b::NotifyReport  - Event 3c is Not configured along with 3b..
Line 339: [Measurement Quantity] is = RSRP
Line 340: [ThresholdOtherSystem*100] is = %d dBm
Line 347: [Measurement Quantity] is = RSRQ
Line 348: [ThresholdOtherSystem*100] is = %d dB
Line 351: [H_3b] is = %d
Line 362: [NotifyReport] EutraMeasInd Earfcn(%d), CellId(%d), RSRP(%d), RSRQ(%d)
Line 395: [rrc_RepEventEutra3b_NotifyReport] Event3C already triggered on CellId(%d) Earfcn(%d) so Event3B might be evaluated.
Line 405: rrc_RepEventEutra3b::NotifyReport	[NON FATAL ERROR] - NumTriggered > (Asn_maxNumEUTRAFreqs * MaxEutraCellsMeas).
Line 421: [rrc_RepEventEutra3b_NotifyReport] Event3C NOT triggered on CellId(%d) Earfcn(%d) so Event3B won't be evaluated.
Line 431: [rrc_RepEventEutra3b_NotifyReport] Eq1 satisfied [Earfcn: %d CellID: %d] [rsrp] LHS*100(%d) <= RHS*100(%d)
Line 442: [rrc_RepEventEutra3b_NotifyReport] Eq1 satisfied [Earfcn: %d CellID: %d] [rsrq] LHS*100(%d) <= RHS*100(%d)
Line 464: [TTT(%dms) Started] Earfcn(%d), CellId(%d)
Line 472: [rrc_RepEventEutra3bNotifyReport] No of TTT exceeding 32. Needs extension
Line 487: rrc_RepEventEutra3b::NotifyReport Dont Trigger Event 3b for the  Earfcn(%d) Cell (%d) is not already triggerd for 3c.
Line 493: [rrc_RepEventEutra3b_NotifyReport] Cell ID: %d Earfcn %d already present in TRIGGERED 3B EVENT
Line 499: [rrc_RepEventEutra3b_NotifyReport] Dont Trigger Event 3b for the Cell ID: %d Earfcn %d is Barred.
Line 525: [rrc_RepEventEutra3b_NotifyReport] Eq2 satisfied [Earfcn: %d CellID: %d] [rsrp] LHS*100(%d) > RHS*100(%d)
Line 542: [rrc_RepEventEutra3b_NotifyReport] Eq2 satisfied [Earfcn: %d CellID: %d] [rsrq] LHS*100(%d) > RHS*100(%d)
Line 665: [rrc_RepEventEutra3b_TimeToTriggerExpired] Triggering the Measurement Report Event 3B
Line 667: [TTT CellResults] For Earfcn = %d
Line 669: [TTT CellResults] For Cell = %d
Line 671: [TTT CellResults] Updated rsrp = %d
Line 673: [TTT CellResults] Updated rsrq = %d
Line 755: [rrc_priv_RepEventEutra3b_getEvent3cRepInst] Event3C RepClientInst is 0x%X
