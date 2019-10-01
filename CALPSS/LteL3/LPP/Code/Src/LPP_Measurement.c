Line 93: LPP_ProcessCommonIEsRequestLocationInformation() - LPP_commonIEsRequestLocationInformation_present
Line 98: LPP_ProcessCommonIEsRequestLocationInformation() - triggeredReporting.cellChange(%d)
Line 123: LPP_ProcessCommonIEsRequestLocationInformation() - responseTime(%d) seconds
Line 172: LPP_ProcessCommonIEsRequestLocationInformation() - periodicReportingAmount(%d)
Line 213: LPP_ProcessCommonIEsRequestLocationInformation() - periodicReportingInterval(%d)
Line 278: LPP_ProcessOTDOA_RequestLocationInformation() - assistanceDataTimeStamp(%d)
Line 290: LPP_ProcessOTDOA_RequestLocationInformation() - LPP_otdoa_RequestAssistanceData_present
Line 302: LPP_ProcessOTDOA_RequestLocationInformation() - servingCellId(0x%x) otdoa_ReferenceCellInfo.physCellId(0x%x) - Send OTDOA Reqeust
Line 311: LPP_ProcessOTDOA_RequestLocationInformation() - assistanceAvailability(%d)
Line 387: LPP_RequestLocationInformation_r9() - requestLocationInformation_r9.bit_mask(0x%x)
Line 408: LPP_RequestLocationInformation_r9() - LPP_a_gnss_RequestLocationInformation_present
Line 437: LPP_RequestLocationInformation_r9() - LPP_ecid_RequestLocationInformation_present
Line 474: LPP_RequestLocationInformation_r9() - LPP_otdoa_RequestLocationInformation_present
Line 533: LPP_ProcessRequestLocationInformation()
Line 538: LPP_ProcessRequestLocationInformation() - MALLOC FAIL!!!
Line 542: <<-------------------------------------------------
Line 543: | ++ LocatioinInformationElement
Line 546: | sessionTableIndex(%d)
Line 550: | transactionNumber(%d)
Line 554: | requestedLocationInformation(%d)
Line 558: | errorBitMask(0x%x)
Line 565: LPP_ProcessRequestLocationInformation() - MALLOC FAIL!!!
Line 571: >>-------------------------------------------------
Line 668: LPP_ConvertToOTDOA_SignalMeasurementInformation() - NULL Pointer!!!
Line 682: <<-------------------------------------------------
Line 683: | ++ referenceCell
Line 690: | systemFrameNumber.value(0x%02x %02x)
Line 693: | systemFrameNumber.length(%d)
Line 699: !!!!!!!!!! physCellIdRef(%d) is out of range !!!!!!!!!!
Line 701: >>-------------------------------------------------
Line 705: | physCellIdRef(%d)
Line 712: | MCC
Line 716: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 717: >>-------------------------------------------------
Line 722: | MNC
Line 726: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 727: >>-------------------------------------------------
Line 737: | cellIdentity.value(0x%02x %02x %02x %02x)
Line 743: | cellIdentity.length(%d)
Line 751: | earfcnRef(%d)
Line 758: | earfcnRef_v9a0(%d)
Line 774: | error_Resolution(0x%02x)
Line 784: | error_Value(0x%02x)
Line 796: | error_NumSamples(0x%02x)
Line 801: >>-------------------------------------------------
Line 805: LPP_ConvertToOTDOA_SignalMeasurementInformation() - numberOfNeibourCells(%d)
Line 813: <<-------------------------------------------------
Line 814: | ++ neibourCell[%d]
Line 820: LPP_ConvertToOTDOA_SignalMeasurementInformation() - MALLOC FAIL!!!
Line 840: !!!!!!!!!! physCellIdNeighbour(%d) is out of range !!!!!!!!!!
Line 842: >>-------------------------------------------------
Line 849: | physCellIdNeighbour(%d)
Line 857: | MCC
Line 862: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 863: >>-------------------------------------------------
Line 870: | MNC
Line 875: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 876: >>-------------------------------------------------
Line 893: | earfcnNeighbour(%d)
Line 900: | earfcnNeighbour_v9a0(%d)
Line 908: !!!!!!!!!! rstd(%d) is out of range !!!!!!!!!!
Line 910: >>-------------------------------------------------
Line 916: | rstd(%d)
Line 929: | error_Resolution(0x%02x)
Line 940: | error_Value(0x%02x)
Line 953: | error_NumSamples(0x%02x)
Line 958: >>-------------------------------------------------
Line 965: !!!!!!!!!! neighbourMeasurementList is NULL !!!!!!!!!!
Line 1000: LPP_ProcessOTDOA_ProvideLocationInformation() - NULL Pointer!!!
Line 1008: LPP_ProcessOTDOA_ProvideLocationInformation() - NULL Pointer!!!
Line 1021: LPP_ProcessOTDOA_ProvideLocationInformation() - ValildMeas(%d)
Line 1090: LPP_OTDOA_ProvideLocationInformation_otdoa_Error_present is set to TRUE
Line 1153: LPP_ConvertToECID_MeasuredResultsElement() - NULL Pointer!!!
Line 1162: !!!!!!!!!! physCellId(%d) is out of range !!!!!!!!!!
Line 1166: | physCellId(%d)
Line 1172: | MCC
Line 1176: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 1180: | MNC
Line 1184: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 1195: | cellIdentity.value(0x%02x %02x %02x %02x)
Line 1201: | cellIdentity.length(%d)
Line 1212: | arfcnEUTRA_v9a0(%d)
Line 1217: | arfcnEUTRA(%d)
Line 1231: | systemFrameNumber.value(0x%02x %02x)
Line 1235: | systemFrameNumber.length(%d)
Line 1245: !!!!!!!!!! rsrp-Result(%d) is out of range !!!!!!!!!!
Line 1249: | rsrp_Result(%d)
Line 1258: !!!!!!!!!! rsrq_Result(%d) is out of range !!!!!!!!!!
Line 1262: | rsrq_Result(%d)
Line 1271: !!!!!!!!!! ue_RxTxTimeDiff(%d) is out of range !!!!!!!!!!
Line 1275: | ue_RxTxTimeDiff(%d)
Line 1322: <<-------------------------------------------------
Line 1323: | ++ primaryCell
Line 1326: >>-------------------------------------------------
Line 1336: LPP_ProcessECID_ProvideLocationInformation() - numberOfNeibourCells(%d)
Line 1341: <<-------------------------------------------------
Line 1342: | ++ neibourCell[%d]
Line 1347: LPP_ProcessECID_ProvideLocationInformation() - MALLOC FAIL!!!
Line 1361: >>-------------------------------------------------
Line 1379: measuredResultsList list is empty. Clear servingCellMeasuredResults.
Line 1385: <<-------------------------------------------------
Line 1390: LPP_ProcessECID_ProvideLocationInformation() - MALLOC FAIL!!!
Line 1408: >>-------------------------------------------------
Line 1452: LPP_ProcessECID_ProvideLocationInformation() - NULL Pointer!!!
Line 1456: LPP_ProcessECID_ProvideLocationInformation() - ValildMeas(0x%x)
Line 1515: LPP_ProvideLocationInformation_r9() - NULL Pointer!!!
Line 1519: LPP_ProvideLocationInformation_r9() - pDst->bit_mask(0x%x) bitMask(0x%x)
Line 1535: LPP_ProvideLocationInformation_r9() - LPP_a_gnss_ProvideLocationInformation_present
Line 1581: LPP_ProvideLocationInformation_r9() - LPP_otdoa_ProvideLocationInformation_present
Line 1593: LPP_ProvideLocationInformation_r9() - LPP_ecid_ProvideLocationInformation_present
Line 1604: LPP_ProvideLocationInformation_r9() - errorBitMask(0x%x)
Line 1643: LPP_ProcessProvideLocationInformation() - NULL Pointer!!!
Line 1675: LPP_ProcessProvideLocationInformation() - ret(0x%x) requestedLocationInformation(0x%x)
