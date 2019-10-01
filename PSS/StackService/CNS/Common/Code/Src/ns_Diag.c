Line 335: [Big] ns_Diag_SendTrigger (SimIndex %d, Trigger %d)
Line 339: [Big] fail: unexpected SimIndex(%d)
Line 354: [Big] 2G/3G-RRC-Event(=%d) is not equal to HandoverFail(=%d) or RlfOrWeakSignal(=%d) or RxRrcRelease(=%d) .. No DIAG_IND will be sent to BDA
Line 361: [Big] Old values from NS: EventType (%d) Cause (%d) will be overwritten!
Line 389: [Big] NS_DIAG_TRIGGER_2G_3G_4G_PDP_ACTIVATE_PRIM_EVENT(cause %d) will be mapped to Trigger %d
Line 412: [Big] NS_DIAG_TRIGGER_2G_3G_4G_PDP_ACTIVATE_SEC_EVENT(cause %d) will be mapped to Trigger %d
Line 446: [Big] fail: unrecognized trigger (%d)
Line 471: [Big] ns_sendDiagInfoInd
Line 476: [Big] fail: unknown act
Line 480: [Big] Selected Act for trigger (%d) is (%d)
Line 486: MemAlloc Fail
Line 487: [Big] fail: alloc failure
Line 505: [Big] fail: unable to get trigger configuration
Line 521: [Big] Selected Act is (%d) and pmliRat is (%d)
Line 524: [Big] Converting PlmiRat value for LTE RAT to match BD_ACT
Line 534: [Big] diag_SetSrvCellInfo execluded
Line 543: [Big] Act %d, LTE RRC Event = %d Cause = %d
Line 548: [Big] Act %d, 2G/3G RRC Event = %d
Line 561: [Big] bda_SetCallInfo execluded
Line 575: [Big] bda_SetChannelQualityInfo execluded
Line 589: [Big] diag_SetDataInfo execluded
Line 603: [Big] diag_SetSmsInfo execluded
Line 645: [Big] diag_SetMiscInfo execluded
Line 659: [Big] diag_SetRfInfo execluded
Line 667: [Big] fail: ns_SendNsClientMessage
Line 670: [Big] send NS_DIAG_INFO_IND, result=%d
Line 695: [Big] ns_Diag_SendEventMain (SimIndex %d, Event %d)
Line 699: [Big] fail: unexpected SimIndex(%d)
Line 710: MemAlloc Fail
Line 711: [Big] fail: alloc failure
Line 736: [Big] fail: unexpected callDomain(%d)
Line 749: [Big] fail: ns_SendNsClientMessage
Line 755: [Big] fail: diag_SetSrvCellInfo failure
Line 761: [Big] fail: Unknown BD_ACT failure
Line 765: [Big] fail: unrecognized event(%d)
Line 789: [Big] fail: unable to get trigger configuration
Line 831: [Big] fail: unexpected event type
Line 858: [Big] fail: unable to get trigger configuration
Line 905: [Big] fail: unexpected callDomain(%d)
Line 923: [Big] fail: unexpected RFPD Rat(%d)
Line 929: [Big] fail: unrecognized trigger
Line 971: diag_mapLteRrcEvent2EventType(LteRrcEvent = %d, EventType =%d)
Line 1010: [Big][CellInfo] act=%d
Line 1031: [Big][SrvCellInfo] PLMN:[0]0x%X [1]:0x%X [2]:0x%X, RAC:[2]0x%X
Line 1034: [Big][SrvCellInfo] LAC:[0]0x%X [1]:0x%X, CellID:[0]0x%X [1]0x%X, DL_ARFCN:%d
Line 1055: [Big][SrvCellInfo] PLMN:[0]:0x%X [1]:0x%X [2]:0x%X [3]:0x%X [4]:0x%X [5]:0x%X
Line 1058: [Big][SrvCellInfo] RAC:0x%X Lac:[0]:0x%X [1]:0x%X CellId:0x%X PSC:0x%X UARFCN:0x%X
Line 1079: [Big][SrvCellInfo] prim PLMN:[0]:0x%X [1]:0x%X [2]:0x%X [3]:0x%X [4]:0x%X [5]:0x%X
Line 1082: [Big][SrvCellInfo] out PLMN:[0]:0x%X [1]:0x%X [2]:0x%X [3]:0x%X [4]:0x%X [5]:0x%X
Line 1086: [Big][SrvCellInfo] TAC:[0]:0x%X,[1]:0x%X CID:0x%X, PID:%d DL_ARFCN:%d
Line 1098: Unhandled ACT(%d)
Line 1132: Unhandled PLMN Mode Select Value(%d)
Line 1137: [Big][CallInfo] ns_GetSipcPlmnModeSelectValue()=%d, PlmnModeSelect=%d
Line 1187: [Big][CallInfo] Unhandled multiRabInfo value(%d)
Line 1192: [Big][CallInfo] ns_dmBigDataInfo.multiRabInfo=%d
Line 1200: [Big][CallInfo] ActiveRat:%d, EventType=%d, Cause=%d, MultiRAB=%d
Line 1255: [Big][QualityInfo] RSSI0:%d RSSI1:%d BER=%d ActTxPower=%d SINR0=%d SINR1=%d
Line 1311: [Big][QualityInfo] RSSI0:%d RSCP0=%d EcN00=%d SINR0=%d BLER=%d DSPTxPower=%d
Line 1315: [Big][QualityInfo] RSSI1:%d RSCP1=%d EcN01=%d SINR1=%d BLER=%d DSPTxPower=%d
Line 1319: [Big][QualityInfo] ActTxPower=%d CompTxPower=%d NetTxPower=%d TunerMode=%d OL_Index=%d DiversityState=%d
Line 1323: [Big][QualityInfo] CL_TuneCode=%d Sw=%d Cap1=%d Cap2=%d
Line 1326: [Big][QualityInfo]  OLTC Sw=%d OLTC Cap1=%d OLTC Cap2=%d
Line 1348: [Big][QualityInfo] RSSI2:%d RSSI3:%d RSCP2=%d RSCP3=%d EcNo2=%d EcNo3=%d
Line 1447: [Big][QualityInfo] RSSI0:%d RSSI1:%d RSRP0:%d RSRP1:%d RSRQ0:%d RSRQ1:%d
Line 1451: [Big][QualityInfo] SINR0:%d SINR1:%d FER:%d DSPTxPower:%d
Line 1455: [Big][QualityInfo] ActTxPower=%d CompTxPower=%d NetTxPower=%d DiversityState=%d
Line 1459: [Big][QualityInfo] CL_TuneCode=%d Sw=%d Cap1=%d Cap2=%d
Line 1462: [Big][QualityInfo]  OLTC Sw=%d OLTC Cap1=%d OLTC Cap2=%d
Line 1496: [Big][QualityInfo] RSSI2:%d RSSI3:%d RSRP2:%d RSRP3:%d RSRQ2:%d RSRQ3:%d
Line 1500: [Big][QualityInfo] SINR2:%d SINR3:%d
Line 1506: Unhandled ACT(%d)
Line 1541: [Big][DataInfo] Cause %d => EndReason %d
Line 1548: [Big][DataInfo] Cause %d => EndReason %d
Line 1556: [Big][DataInfo] AttachType %d, EmmCause %d, EsmCause %d
Line 1565: [Big][DataInfo] AttachType %d, EmmCause %d, EsmCause %d
Line 1574: [Big][DataInfo] AttachType %d, EmmCause %d, EsmCause %d
Line 1579: [Big][DataInfo] Unexpected trigger (%d)
Line 1616: [Big][DataInfo] Unexpected trigger (%d)
Line 1620: [Big][SmsInfo] RefId %d, EndReason %d, ErrorType %d
Line 1660: [Big][MiscInfo] GripSensorStatus:%d
Line 1670: [Big][MiscInfo] TxAsState:%d
Line 1727: Unhandled ACT(%d)
Line 1746: [Big][MiscInfo] MipiDeviceCheckDone:%d and RfDeviceCheckDone:%d
Line 1752: [Big][MiscInfo] hal_rf_mipi_device_check_fail_count:%d
Line 1757: Received hal_rf_mipi_device_check_fail_count value is invalid!!!
Line 1771: [Big][MiscInfo] hal_rf_rf_device_rf_count:%d
Line 1774: Received hal_rf_rf_device_rf_count value is invalid!!!
Line 1783: [Big][MiscInfo] hal_rf_rf_device_pam_count:%d
Line 1786: Received hal_rf_rf_device_pam_count value is invalid!!!
Line 1927: [Big][SrvCellInfo] RegSap_GeneralData.Plmn.PlmnId:[0]:0x%X [1]:0x%X [2]:0x%X
