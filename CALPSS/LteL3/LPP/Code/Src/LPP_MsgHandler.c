Line 74: LPP_ProcessTLP_Msg() - TLP ==> LPP: RESET_AGNSS_ASSISTANTDATA
Line 80: LPP_ProcessTLP_Msg() - TLP ==> LPP: RESET_OTDOA_ASSISTANTDATA
Line 86: LPP_ProcessTLP_Msg() - TLP ==> LPP: INVALID msgType(0x%x)
Line 115: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_A_GNSS_CAPA_RSP
Line 121: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_A_GNSS_LOC_INFO_RSP
Line 127: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_A_GNSS_ASSIST_DATA_REQ
Line 133: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_A_GNSS_ERROR
Line 139: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_SUPL_LPP_DATA, flag(%d)
Line 179: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_LCS_MOLR_REQ
Line 183: LPP_ProcessNS_Msg() - EPC LCS is not supported!!!
Line 195: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_LCS_LOC_NOT_RSP
Line 202: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_LOCATION_INFO_CNF
Line 211: LPP_ProcessNS_Msg() - NS ==> LPP: INVALID TypMsg(%d)
Line 240: LPP_ProcessEMM_Msg() - EMM ==> LPP: EMM_LPP_STATE_NOTI
Line 247: LPP_ProcessEMM_Msg() - EMM ==> LPP: EMM_LPP_DATA_CNF
Line 254: LPP_ProcessEMM_Msg() - EMM ==> LPP: EMM_LPP_EST_CNF
Line 261: LPP_ProcessEMM_Msg() - EMM ==> LPP: EMM_LPP_ERR_IND
Line 267: LPP_ProcessEMM_Msg() - EMM ==> LPP: EMM_LPP_MSG_IND
Line 276: LPP_ProcessEMM_Msg() - EMM ==> LPP: EMM_LCS_MSG_IND
Line 284: LPP_ProcessEMM_Msg() - EMM ==> LPP: EMM_LCS_DATA_CNF
Line 291: LPP_ProcessEMM_Msg() - EMM ==> LPP: EMM_LCS_STATUS_IND
Line 299: LPP_ProcessEMM_Msg() - EMM ==> LPP: INVALID TypMsg(0x%x)
Line 328: LPP_ProcessRRC_Msg() - RRC ==> LPP: RRC_LPP_ECID_RSP
Line 334: LPP_ProcessRRC_Msg() - RRC ==> LPP: RRC_LPP_CELL_IND
Line 340: LPP_ProcessRRC_Msg() - RRC ==> LPP: RRC_LPP_OTDOA_RSP
Line 346: LPP_ProcessRRC_Msg() - RRC ==> LPP: RRC_LPP_LOCATION_REQ
Line 355: LPP_ProcessRRC_Msg() - RRC ==> LPP: INVALID msgType(%d)
Line 410: LPP_ProcessNS_A_GNSS_CapabilitiesRsp()
Line 420: LPP_ProcessNS_A_GNSS_CapabilitiesRsp() - sessionTableIndex(%d)
Line 465: LPP_ProcessNS_A_GNSS_ProvideLocationInformation() - found(%d) sessionTableIndex(%d)
Line 473: LPP_ProcessNS_A_GNSS_ProvideLocationInformation() - pAsnLPP_Message is NULL
Line 480: LPP_ProcessNS_A_GNSS_ProvideLocationInformation() - MALLOC FAIL!!!
Line 562: LPP_ProcessNS_A_GNSS_AssistanceDataReq() - found(%d) sessionTableIndex(%d) transactionNumber(%d)
Line 574: LPP_ProcessNS_A_GNSS_AssistanceDataReq() - Error to process request assistance data!!! errorBitMask(0x%x)
Line 629: LPP_ProcessNS_A_GNSS_Error() - found(%d) sessionTableIndex(%d)
Line 637: LPP_ProcessNS_A_GNSS_Error() - pAsnLPP_Message is NULL
Line 643: LPP_ProcessNS_A_GNSS_Error() - MALLOC FAIL!!!
Line 686: LPP_ProcessNS_SUPL_OTDOA_RequestCapability() - MALLOC FAIL!!!
Line 695: LPP_ProcessNS_SUPL_OTDOA_RequestCapability() - MALLOC FAIL!!!
Line 711: LPP_ProcessNS_SUPL_OTDOA_RequestCapability() - numberOfSupportedBand(%d)
Line 732: LPP_ProcessNS_SUPL_OTDOA_RequestCapability() - MALLOC FAIL!!!
Line 746: LPP_ProcessNS_SUPL_OTDOA_RequestCapability() - [%d] pSupportedBandListEUTRA_v9a0->value.bandEUTRA_v9a0(%d)
Line 768: LPP_ProcessNS_SUPL_OTDOA_RequestCapability() - MALLOC FAIL!!!
Line 781: LPP_ProcessNS_SUPL_OTDOA_RequestCapability() - [%d] pSupportedBandListEUTRA->value.bandEUTRA(%d)
Line 802: .......... ASN ENCODING ..........
Line 806: LPP_ProcessNS_SUPL_OTDOA_RequestCapability() - ENCODE FAIL!!! ret(%d)
Line 874: LPP_ProcessNS_SUPL_OTDOA_ProvideAssistanceData() - DECODE FAIL!!! ret(%d)
Line 881: LPP_ProcessNS_SUPL_OTDOA_ProvideAssistanceData() - FREE FAIL!!! ret(%d)
Line 921: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - servingCellId(0x%x) otdoa_ReferenceCellInfo.physCellId(0x%x)
Line 929: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - MALLOC FAIL!!!
Line 935: .......... ASN ENCODING ..........
Line 939: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - ENCODE FAIL!!! ret(%d)
Line 958: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - Send OTDOA Reqeust
Line 982: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - MALLOC FAIL!!!
Line 988: .......... ASN ENCODING ..........
Line 992: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - ENCODE FAIL!!! ret(%d)
Line 1010: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - Send Error
Line 1015: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - MALLOC FAIL!!!
Line 1027: .......... ASN ENCODING ..........
Line 1031: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - ENCODE FAIL!!! ret(%d)
Line 1047: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - DECODE FAIL!!! ret(%d)
Line 1054: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - FREE FAIL!!! ret(%d)
Line 1082: LPP_ProcessNS_SUPL_ECID_RequestCapability() - MALLOC FAIL!!!
Line 1090: LPP_ProcessNS_SUPL_ECID_RequestCapability() - MALLOC FAIL!!!
Line 1106: LPP_ProcessNS_SUPL_ECID_RequestCapability() - pAsnECID_ProvideCapabilities->ecid_MeasSupported.value(0x%x)
Line 1109: .......... ASN ENCODING ..........
Line 1113: LPP_ProcessNS_SUPL_ECID_RequestCapability() - ENCODE FAIL!!! ret(%d)
Line 1147: LPP_ProcessNS_SUPL_OTDOA_TriggerRequestAssistanceData() - MALLOC FAIL!!!
Line 1153: .......... ASN ENCODING ..........
Line 1157: LPP_ProcessNS_SUPL_OTDOA_TriggerRequestAssistanceData() - ENCODE FAIL!!! ret(%d)
Line 1221: EUTRAN_LCS_ProcessLocationNotificationResMsg() - MALLOC FAIL!!!
Line 1227: <<-------------------------------------------------
Line 1228: | ++ LocationNotificationRes
Line 1245: | bit_mask(0x%02x)
Line 1247: | verificationResponse(%d)
Line 1249: >>-------------------------------------------------
Line 1251: .......... ASN ENCODING ..........
Line 1255: EUTRAN_LCS_ProcessLocationNotificationResMsg() - ENCODE FAIL!!! ret(%d)
Line 1299: EUTRAN_LCS_ProcessMOLR_Req() - MALLOC FAIL!!!
Line 1311: .......... ASN ENCODING ..........
Line 1315: EUTRAN_LCS_ProcessMOLR_Req() - ENCODE FAIL!!! ret(%d)
Line 1383: <<<<< INCOMING LPP MESSAGE <<<<<
Line 1408: LPP_ProcessEMM_LPP_MsgInd() - LPP_lpp_MessageBody_present
Line 1414: [][][][ LPP MESSAGE CHOICE ][][][] LPP_requestCapabilities_chosen
Line 1422: [][][][ LPP MESSAGE CHOICE ][][][] LPP_provideAssistanceData_chosen
Line 1428: [][][][ LPP MESSAGE CHOICE ][][][] LPP_requestLocationInformation_chosen
Line 1436: [][][][ LPP MESSAGE CHOICE ][][][] LPP_abort_chosen
Line 1444: [][][][ LPP MESSAGE CHOICE ][][][] LPP_error_chosen
Line 1459: LPP_ProcessEMM_LPP_MsgInd() - LPP_ReliableTransport returns (%d)
Line 1466: LPP_ProcessEMM_LPP_MsgInd() - FREE FAIL!!! ret(%d)
Line 1472: LPP_ProcessEMM_LPP_MsgInd() - DECODE FAIL!!! ret(%d)
Line 1497: EUTRAN_LCS_ProcessEMM_LCS_StatusInd()
Line 1545: LPP_ProcessRRC_ECID_Rsp() - found(%d) sessionTableIndex(%d)
Line 1553: LPP_ProcessRRC_ECID_Rsp() - pAsnLPP_Message is NULL
Line 1559: LPP_ProcessRRC_ECID_Rsp() - MALLOC FAIL!!!
Line 1588: LPP_ProcessRRC_ECID_Rsp() - MALLOC FAIL!!!
Line 1611: .......... ASN ENCODING ..........
Line 1615: LPP_ProcessRRC_ECID_Rsp() - ENCODE FAIL!!! ret(%d)
Line 1647: <<-------------------------------------------------
Line 1648: | ++ RRM_RRC_LPP_MsgCellInd
Line 1649: | ValildCellInd(%d)
Line 1650: | physCellId(%d)
Line 1651: | ecgi_MCC(%d %d %d)
Line 1652: | ecgi_MNC(%d %d %d)
Line 1653: | ecgi_cellIdentity(0x%x)
Line 1654: | DlEarfcn(%d)
Line 1655: >>-------------------------------------------------
Line 1657: LPP_ProcessRRC_CELL_Ind() - previous physicalCellId(%d)
Line 1664: LPP_ProcessRRC_CELL_Ind() - ret(%d)
Line 1691: LPP_ProcessRRC_CELL_Ind() - LPP_ecid_RequestLocationInformation_present
Line 1750: LPP_ProcessRRC_OTDOA_Rsp() - found(%d) sessionTableIndex(%d)
Line 1758: LPP_ProcessRRC_OTDOA_Rsp() - pAsnLPP_Message is NULL
Line 1764: LPP_ProcessRRC_OTDOA_Rsp() - MALLOC FAIL!!!
Line 1793: LPP_ProcessRRC_OTDOA_Rsp() - MALLOC FAIL!!!
Line 1809: LPP_OTDOA_ProvideLocationInformation_otdoa_Error_present is set to TRUE
Line 1843: .......... ASN ENCODING ..........
Line 1847: LPP_ProcessRRC_OTDOA_Rsp() - ENCODE FAIL!!! ret(%d)
Line 1907: LPP_SendMsgToRRC() - Fail to send message! rst(%d)
Line 1914: LPP_SendMsgToRRC() - PAL Event Setting ERROR!!!
Line 1951: LPP_SendMsgToEMM() - msgtype(%d)
Line 1956: LPP_SendMsgToEMM() - LPP ==> EMM: LPP_EMM_DATA_REQ_E, sessionTableIndex(%d) etransactionId(%d)
Line 1962: LPP_SendMsgToEMM() - LPP_EMM_NULL
Line 1970: LPP_SendMsgToEMM() - LPP_EMM_TMP_NOT_READY, Save a message in queue
Line 1977: LPP_SendMsgToEMM() - LPP_EMM_READY, EST_REQ will be sent
Line 1988: LPP_SendMsgToEMM() - LPP_WAITING_FOR_EMM_CON
Line 1995: LPP_SendMsgToEMM() - LPP_EMM_CONNECTED, sending the data_req to EMM!!
Line 2000: LPP_SendMsgToEMM() - LPP ==> EMM: LPP_EMM_DATA_REQ_E
Line 2002: >>>>> OUTGOING LPP MESSAGE >>>>>
Line 2006: LPP_SendMsgToEMM() - Fail to send message! rst(%d)
Line 2021: LPP_SendMsgToEMM() - LPP ==> EMM: LPP_EMM_EST_REQ_E
Line 2025: LPP_SendMsgToEMM() - Fail to send message! rst(%d)
Line 2057: LPP_SendMsgToNS() - Fail to send message! rst(%d)
Line 2112: LPP_SendRRC_ECID_Req() - MALLOC FAIL!!!
Line 2124: LPP_SendRRC_ECID_Req() - LPP ==> RRC: LPP_RRC_ECID_REQ w/ reportingAmount(%d) reportingInterval(%d)
Line 2148: LPP_SendRRC_ECID_Abort() - MALLOC FAIL!!!
Line 2154: LPP_SendRRC_ECID_Abort() - LPP ==> RRC: LPP_RRC_ECID_ABORT
Line 2193: LPP_SendRRC_OTDOA_Req() - MALLOC FAIL!!!
Line 2203: LPP_SendRRC_OTDOA_Req() - LPP ==> RRC: LPP_RRC_OTDOA_REQ w/ reportingAmount(%d) reportingInterval(%d)
Line 2227: LPP_SendRRC_OTDOA_Abort() - MALLOC FAIL!!!
Line 2233: LPP_SendRRC_OTDOA_Abort() - LPP ==> RRC: LPP_RRC_OTDOA_ABORT
Line 2254: LPP_SendRRC_OTDOA_ResultReq() - MALLOC FAIL!!!
Line 2260: LPP_SendRRC_OTDOA_ResultReq() - LPP ==> RRC: LPP_RRC_OTDOA_RESULT_REQ
Line 2283: LPP_SendRRC_LocationInfoCnf() - MALLOC FAIL!!!
Line 2308: LPP_SendRRC_LocationInfoCnf() - LPP ==> RRC: LPP_RRC_LOCATION_INFO_RESULT
Line 2335: LPP_SendNS_A_GNSS_RequestLocationInformation() - MALLOC FAIL!!!
Line 2359: LPP_SendNS_A_GNSS_RequestLocationInformation() - LPP ==> NS: LPP_NS_A_GNSS_LOC_INFO_REQ
Line 2383: LPP_SendNS_A_GNSS_Abort() - MALLOC FAIL!!!
Line 2395: LPP_SendNS_A_GNSS_Abort() - LPP ==> NS: LPP_NS_A_GNSS_ERROR
Line 2458: LPP_SendNS_A_GNSS_ResetAssistanceData() - MALLOC FAIL!!!
Line 2468: LPP_SendNS_A_GNSS_ResetAssistanceData() - LPP ==> NS: LCSM_NS_RESET_ASIST_DATA_NOTI
Line 2500: LPP_SendNS_A_GNSS_CapabilitiesReq() - MALLOC FAIL!!!
Line 2512: LPP_SendNS_A_GNSS_CapabilitiesReq() - LPP ==> NS: LPP_NS_A_GNSS_CAPA_REQ
Line 2540: LPP_SendNS_A_GNSS_AssistanceDataRsp() - MALLOC FAIL!!!
Line 2552: LPP_SendNS_A_GNSS_AssistanceDataRsp() - LPP ==> NS: LPP_NS_A_GNSS_ASSIST_DATA_RSP
Line 2588: LPP_SendNS_SUPL_LPP_Data() - MALLOC FAIL!!!
Line 2602: LPP_SendNS_SUPL_LPP_Data() - MALLOC FAIL!!!
Line 2609: LPP_SendNS_SUPL_LPP_Data() - LPP ==> NS: LPP_NS_SUPL_LPP_DATA flag(%d)
Line 2633: LPP_SendNS_StartMdtLocationNtf() - MALLOC FAIL!!!
Line 2644: LPP_SendNS_StartMdtLocationNtf() - LPP ==> NS: LPP_NS_START_MDT_LOCATION_NTF enable(%d)
Line 2681: EUTRAN_LCS_SendNS_LocationNotification() - MALLOC FAIL!!!
Line 2694: EUTRAN_LCS_SendNS_LocationNotification() - LPP ==> NS: LPP_LCS_NS_LOC_NOT_REQ
Line 2734: EUTRAN_LCS_SendNS_MOLR_Res() - MALLOC FAIL!!!
Line 2751: EUTRAN_LCS_SendNS_MOLR_Res() - LPP ==> NS: LPP_LCS_NS_MOLR_RSP
Line 2786: LPP_SendProvideLocationInformation() - sessionTableIndex(%d) periodicReportingAmount(%d)
Line 2876: LPP_SendOTDOA_Error() - transactionNumber(%d) found(%d) sessionTableIndex(%d)
Line 2884: LPP_SendOTDOA_Error() - pAsnLPP_Message is NULL
Line 2890: LPP_SendOTDOA_Error() - MALLOC FAIL!!!
Line 2952: LPP_SendLPP_Message() - sessionTableIndex(%d)
Line 2955: <<-------------------------------------------------
Line 2956: | ++ LPP_Message
Line 2967: | transactionID.initiator(%d)
Line 2971: | transactionID.transactionNumber(%d)
Line 2975: | endTransaction(%d)
Line 2981: | sequenceNumber(%d)
Line 2986: | acknowledgement.ackRequested(%d)
Line 2993: | bit_mask(0x%x)
Line 2995: >>-------------------------------------------------
Line 3002: .......... ASN ENCODING ..........
Line 3006: LPP_SendLPP_Message() - ENCODE FAIL!!! ret(%d)
Line 3017: LPP_SendLPP_Message() - MALLOC FAIL!!!
Line 3037: LPP_SendLPP_Message() - MALLOC FAIL!!!
Line 3109: LPP_ProcessAbort() - LPP_Abort_criticalExtensions_c1_chosen
Line 3115: LPP_ProcessAbort() - LPP_abort_r9_chosen
Line 3121: LPP_ProcessAbort() - LPP_commonIEsAbort_present
Line 3126: LPP_ProcessAbort() - LPP_epdu_Abort_present
Line 3132: LPP_ProcessAbort() - LPP_Abort_criticalExtensions_c1_spareX_chosen
Line 3140: LPP_ProcessAbort() - LPP_Abort_criticalExtensions_criticalExtensionsFuture_chosen
Line 3144: LPP_ProcessAbort() - INVALID choice
Line 3162: LPP_ProcessAbort() - transactionNumber(%d)
Line 3172: LPP_ProcessAbort() - requestedLocationInfo(0x%x)
Line 3225: LPP_ProcessError() - LPP_error_r9_chosen
Line 3229: LPP_ProcessError() - LPP_commonIEsError_present
Line 3240: LPP_ProcessError() - INVALID errorCause
Line 3246: LPP_ProcessError() - LPP_epdu_Error_preesnt
Line 3250: LPP_ProcessError() - LPP_Error_criticalExtensionsFuture_chosen
Line 3254: LPP_ProcessError() - INVALID choice
Line 3266: LPP_ProcessError() - transactionNumber(%d)
Line 3276: LPP_ProcessError() - requestedLocationInfo(0x%x)
Line 3325: LPP_SendAck() - sessionTableIndex(%d), sequenceNumber(%d)
Line 3331: LPP_SendAck() - MALLOC FAIL!!!
Line 3336: <<-------------------------------------------------
Line 3337: | ++ LPP_Message [ACK]
Line 3340: | endTransaction(%d)
Line 3345: | acknowledgement.ackRequested(%d)
Line 3349: | acknowledgement.ackIndicator(%d)
Line 3352: | bit_mask(0x%x)
Line 3354: >>-------------------------------------------------
Line 3356: .......... ASN ENCODING ..........
Line 3360: LPP_SendAck() - ENCODE FAIL!!! ret(%d)
Line 3369: LPP_SendAck() - MALLOC FAIL!!!
Line 3376: * [ACK] SEND ACK FOR (%d)
Line 3390: LPP_SendAck() - MALLOC FAIL!!!
Line 3424: LPP_ReliableTransport() - sessionTableIndex(%d) endTransaction(%d)
Line 3429: LPP_ReliableTransport() - ackRequested(%d)
Line 3436: LPP_ReliableTransport() - LPP_sequenceNumber_present
Line 3445: LPP_ReliableTransport() - ACK Requested, But SequenceNumber is NOT included!!!
Line 3455: * [ACK] WAITING ACK FOR (%d)
Line 3457: * [ACK] RECEIVE ACK FROM NETWORK (%d)
Line 3467: Received ACK from Network (%d). But sessionTableIndex is out of range!!!
Line 3476: LPP_ReliableTransport() - pAsnLPP_Message->sequenceNumber(%d) recentSequenceNumber(%d)
Line 3501: LPP_ReliableTransport() - NOT DUPLICATED & LPP_transactionID_present
Line 3583: EUTRAN_LCS_SendEMM_LCS_Msg() - transactionId(%d) componentID_Tag(%d) invokeId(%d) errorOperationCode(%d)
Line 3589: EUTRAN_LCS_SendEMM_LCS_Msg() - MALLOC FAIL!!!
Line 3640: EUTRAN_LCS_SendEMM_LCS_Msg() - MALLOC FAIL!!!
