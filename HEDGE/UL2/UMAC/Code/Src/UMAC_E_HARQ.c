Line 252: NEW Transmission for SI MAX Retransmission: HARQ Process ID %d
Line 255: NON SRL HARQ ACK but Previous tranmssion was SI. SI Retransmission!!![HARQ Process ID %d]
Line 264: Unknown Case in Non SRL HARQ Indication 
Line 283: SI Transmission Fail For NACK
Line 286: Unknown Retransmission Count in HARQ Indication Decision InSgHarqInfo->CurrentTxNumber[InHarqProcessId] %d InSgHarqInfo->MaxNoOfRetrans[InHarqProcessId] %d
Line 288: NEW Transmission for MAX Retransmission: HARQ Process ID %d
Line 298: Transmission occurred in Previous RTT, but No HARQ info in this TTI, Assume the NACK Case!!!
Line 336: NEW Transmission: HARQ Process ID: %d, Happy: %d, ETFCI: %d
Line 354: Resetting RSN to 0 after Pause Resume for HARQ process %d
Line 381: Retransmission[%d]: Current TX NUM: %d, RSN: %d, Happy: %d, ETFCI: %d
Line 398: Control only transmission: HARQ Process ID :%d
Line 404: Unknown Case in Control only transmission
Line 426: Unknown Case whether initial transmission or retransmission
Line 539: <CPC> ReTrans or SIonly. ShortPreamble. AirCFN: %d, AirSubFr: %d
Line 603: SI transmission decision ind
Line 613: SI retransmission for Serving cell NACK
Line 619: SI retransmission for HARQ fail
Line 630: SI transmission for Pause Resume
Line 666: NO TRANSMISSION[%d]: TEBS is Zero
Line 722: SI transmission for Serving cell change
Line 733: SIG timer Start, but No SI transmission
Line 745: SI transmission because SIG timer expired
Line 771: SI transmission: SG and TEBS not Zero and current HARQ Process inactive but other condition is satisfied
Line 775: SI Transmission: SG and TEBS is not Zero but current HARQ Process inactive
Line 835: SI transmission because EDCH Configuration change and EDCH buffer is not zero
Line 850: SI TRANSMISSION: All HARQ inactive or SG zero but TEBS becomes larger than zero
Line 869: SI transmission because SING timer expired or start
Line 875: SING timer Restart
Line 891: [NO TRANSMISSION [%d]] SG value: %d, Total EDCH Buffer: %d, IsAnyActiveHarqThisTti: %d, OneHarqActiveAtLeast: %d, TotalNonScheduledPayload: %d
Line 952: [Warning] Limitation of PduNum: 63 <-- %d
Line 957: <UM Buffer Occupancy> DA:%d, NoOfPdus:%d
Line 961: <AM Buffer Occupancy> RbId:%i, DA:%d, RlcPduSize:%d
Line 1085: Unknown Grant Type in Timer_SING TokenCancel
Line 1216: WARNING: *EdchList %d + (LogCh %d ?UMAC_MAX_RB:0) is out of bounds
Line 1257: SI Transmission for Higher priority data incoming
Line 1351: Unknown Case in Timer_HYSTERESIS TokenCancel
Line 1363: CurrentTxNumber %d PrevTransmitData[%d] %d MaxReTransValue %d
Line 1376: Unknown Case in Timer_RTX TokenCancel
Line 1389: Unknown Case in Timer_RTX TokenCancel
Line 1401:  Received Ack HarqId %d 
Line 1411: Unknown Case in Timer_RTX TokenCancel
Line 1423: Unknown Case in Timer_RTX TokenCancel
Line 1446: gTimerRtxStatus %d MaxNoOfRetrans %d
Line 1459: Unknown Case in Timer_RTX TokenCancel
Line 1466:  Timer_RTX  has already stopped
Line 1477: SI Transmission Fail For NACK and MaxNoOfRetransSI %d
Line 1485: Unknown Case in Timer_RTX TokenCancel
Line 1492:  Timer_RTX  has already stopped
Line 1504: Received NACK 
Line 1512: Previous Tranmission SI Only
Line 1525: Unknown Case in Timer_RTX TokenCancel
Line 1534: RTxSI Timer Expired
Line 1549: Retransmission : TDM or RDI not valid
Line 1557: Grant Not Available; SI case
Line 1563: RtxtimerValue %d 
Line 1567: Data+SI and TimerRtxStatus[%d] %d 
Line 1571: RTx Timer Expired
Line 1578: Unknown Case in Timer_RTX TokenCancel
Line 1593: MaxEtfcIndexThisTTI=%d and Previous ETFCI=%d for HarqId %d
Line 1611: Unknown Case in Timer_RTX TokenCancel
Line 1615: RTx Timer Running, therefore Started with value =%d 
Line 1621: RTx Timer Inactive, therefore Started with value =%d 
Line 1632: RTx Timer Inactive, therefore Started with value =%d 
Line 1635: Grant not sufficient for Retransmission or TDM not valid
Line 1644: RTx Timer Inactive, therefore Started with value =%d 
Line 1648: Grant Not Available; Data+SI case
Line 1655: Transmission occurred in Previou RTT, but No HARQ info in this TTI, Assume the NACK Case!!!
Line 1701: NEW Transmission: HARQ Process ID: %d,  ETFCI: %d
Line 1731: Retransmission[%d]: Current TX NUM: %d, RSN: %d, ETFCI: %d HarqPowerOffset %d 
Line 1740: Control only transmission: HARQ Process ID :%d
Line 1744: Unknown Case whether initial transmission or retransmission
Line 1857: SIValue 0x%x
Line 1859: <SI Value> SNPLValue: %d, UPHValue:%d, SIValue:0x%x, Total PDU buffer:%d, Total SDU buffer:%d 
Line 1911: <TEBS Increment by Register> Real TEBS Value:%d, TEBS Increment value by register:%d
Line 1922: <SI Value> HLIDValue:%d, HLBSIndex:%d, TEBSIndex:%d, UPHValue:%d
Line 1924: <SI Value> SNPLValue:%d, SIValue:0x%x, Total PDU buffer:%d, Total SDU buffer:%d,
Line 1953: In tmac_e_ControlOnlyTransmission : EtfcInfo->SiTransmission=%d 
Line 1974: In tmac_e_ControlOnlyTransmission and SI trans : InHarqProcessId=%d, SIValue=%d 
Line 1986: Unknown Case in Control only transmission
Line 2029: TotalEdchBuffer=%d 
Line 2048: SI trigger due to change in working frequency or Serving cell change
Line 2061: Unknown Case in Timer_T_NSI TokenCancel
Line 2094: Unknown Case in Timer_T-SI TokenCancel
Line 2109:  Token delayed from TPHY, No Transmission
Line 2118: gTimerTNSIStatus %d 
Line 2124: SI trigger due to change in working frequency or Serving cell change
Line 2131: Unknown Case in Timer_T_SI TokenCancel
Line 2159: Unknown Case in Timer_T-NSI TokenCancel
Line 2172:  Token delayed from TPHY, No Transmission
Line 2180:  gTimerTEEWStatus=%d, gTimerTWAITStatus=%d, InitialTransmission=%d
Line 2187: NO TRANSMISSION: NO Grants and start EEW timer 
Line 2195: TIMER_TWAIT_EXPIRED
Line 2219: TIMER_TWAIT_EXPIRED
Line 2234:  Loopback %d gTimerTSIStatus %d
Line 2269: gTimerTSIStatus %d
Line 2273: gTimerTSIStatus %d
Line 2288: NO TRANSMISSION: E-PUCH not configured
Line 2328: In tmac_e_SI_ERUCCH : TRUCCHValue=%d, n_RUCCHValue=%d, Hysteresis_Timer=%d 
Line 2339: Unknown Case in Timer_T-RUCCH TokenCancel
Line 2342: TIMER_TRUCCH_RUNNING
Line 2353: Hysteresis Timer Inactive and therefore Started 
Line 2360:  TransmissionCounter=%d 
Line 2378: E-RUCCH RACH FAILURE ,Cause[%d]!!!
Line 2390:  EdchStatus=%d,E_WaitingForConfirm=%d 
Line 2403:  E_PersistenceRetry=%d, E_EndFlag=%d 
Line 2411:  E_M=%d, Max_Transmission=%d 
Line 2420: WARNING: Given up on sending RACH data, discarded
Line 2441: WARNING: AscInfo is NULL
Line 2460:  SIValue = 0x%x,datareq_1 = 0x%x, datareq_2 = 0x%x  
Line 2479: Retry due to persistence check 
Line 2487: EndFlag is True 
Line 2494: Waiting for ACK
Line 2558: WARNING: *EdchList + (LogCh?UMAC_MAX_RB:0) is out of bounds
Line 2643: POS ACK from U-PHY
Line 2649: NO ACK from U-PHY
Line 2667: Unknown Case in Timer_HYSTERESIS TokenCancel
Line 2848: WARNING: *EdchList + (LogCh?UMAC_MAX_RB:0) is out of bounds
Line 2878: [Warning] Limitation of PduNum: 63 <-- %d
Line 2886: <UM Buffer Occupancy> DA:%d, NoOfPdus:%d
Line 2890: <AM Buffer Occupancy> RbId:%i, DA:%d, RlcPduSize:%d
Line 2989: SI Transmission for Higher priority data incoming
