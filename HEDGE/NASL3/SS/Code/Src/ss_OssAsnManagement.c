Line 189: [OSS]:Oss Decoding Started
Line 194: length =%d
Line 195: FacilityIePtr Dump-->..........
Line 204: SS_ProAsnDecode: Success
Line 207: SS_ProAsnDecode: SIZE_INVALID
Line 210: SS_ProAsnDecode: CHOICE_INVALID
Line 213: SS_ProAsnDecode: RANGE_INVALID
Line 216: SS_ProAsnDecode: UNSUPPORTED_PDU
Line 219: SS_ProAsnDecode: DECODER_LENGTH_EXCEED (InputLen(%d bits) < unpackedLen(%d bits))
Line 222: SS_ProAsnDecode: Misc error #: %d
Line 228: [ASN]: SS_ProAsnDecode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Line 233: [ASN]: SS_ProAsnDecode Success, pdu(%d) unpackedLen(%d bits)
Line 274: [OSS]: Enter ss_OssEncodeMsg
Line 315: [OSS]: Invalid Type of service. Due to that OSS encoding failed
Line 326: SS_ProAsnEncode: Success
Line 329: SS_ProAsnEncode: SIZE_INVALID
Line 332: SS_ProAsnEncode: CHOICE_INVALID
Line 335: SS_ProAsnEncode: RANGE_INVALID
Line 338: SS_ProAsnEncode: UNSUPPORTED_PDU
Line 341: SS_ProAsnEncode: ENCODER_BUFSIZE_EXCEED
Line 344: SS_ProAsnEncode: Misc error #: %d
Line 351: [ASN]: SS_ProAsnEncode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Line 356: [ASN]: SS_ProAsnEncode Success, pdu(%d) packedLen(%d bits)
Line 490: [SS_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 496: [OSS]: Freed ss_OssDecodedMsg ptr
Line 588: [OSS]:[Testing]: Invalid Operation
Line 677: [OSS]:[Testing]: Invalid Operation
Line 687: [OSS]:[Testing]: PDU Number/Local Number = %d
Line 728: Memory Allocation failed!!!
Line 814: [OSS][Testing] :SetBasicServiceCode = %d, ServiceCode = %d
Line 819: [OSS][Testing] :Not Sending Basic Service Group
Line 826: [OSS][DBG] : getarg->bit_mask= %x
Line 833: Memory Allocation failed!!!
Line 883: [OSS][DBG] : LcsCommand= %d
Line 896: molr_Type = %d 
Line 931: [OSS][DBG] : molr_Type = %d 
Line 940: [OSS][DBG] : locationMethod = %d 
Line 961: gpsAssistDataLength = %d 
Line 972: [OSS][DBG] : molr_Type = %d 
Line 983: [OSS][DBG] : locationMethod = %d 
Line 1000: [OSS][DBG] : referenceNumber,hGmlcAddressLength,hGmlcAddress = %d,%d,%s 
Line 1020: Memory Allocation failed!!!
Line 1068: [OSS][DBG] : VerificationRes= %d
Line 1080: Memory Allocation failed!!!
Line 1139: [OSS]: DataCodingSchemeIe = %d 
Line 1146: [OSS]: ussd_DataCodingScheme = %d 
Line 1155: [OSS]: ussd_String Length = %d 
Line 1201: Memory Allocation failed!!!
Line 1245: invarg.decoded
Line 1253: [OSS]:[ss_CreateOssInvokeProcessUssdDataArg]: Memory Allocation failed for USSD
Line 1302: [OSS]: [Testing]: Basic Service Code = %d
Line 1316: [OSS]: TeleService Ie: ServiceCode = %d 
Line 1323: [OSS]: BearerService Ie: ServiceCode = %d 
Line 1338: [OSS]: BearerService Ie: NoReplyDurationIe = %d 
Line 1349: [OSS]: Fwd To Number = %d
Line 1358: [OSS]: nbrUser = %d 
Line 1366: [OSS]: defaultPriority = %d 
Line 1379: [OSS]: [ss_CreateOssInvokeRegisterSsArg]: GetArg Memory allocation failed
Line 1411: Memory Allocation failed!!!
Line 1431: [OSS]:[Testing]: Invoke Id = %d
Line 1441: [OSS]: Local value = %d
Line 1515: [OSS]:[Testing]: Invalid Local Value = %d
Line 1576: invarg.decoded
Line 1585: Memory Allocation failed!!!
Line 1645: Memory Allocation failed!!!
Line 1677: Memory Allocation failed!!!
Line 1724: unstructuredSS-Notify: Return Result TRUE
Line 1758: [OSS]: [ss_CreateReturnResultMsg]:Invalid message or Implementation not done
Line 1798: Memory Allocation failed!!!
Line 1900: [OSS]:[Testing]: Invalid value 
Line 1910: Memory Allocation failed!!!
Line 2123: [OSS]:[Testing]:[ss_AnalyzeOssCfxSsInfoIe]: SS_SS_Info_forwardingInfo_chosen 
Line 2132: [OSS]:[Testing]: SS-Code is not present 
Line 2139: [OSS]:[Testing]:[ss_AnalyzeOssCfxSsInfoIe]: In For loop 
Line 2149: [OSS]:[Testing]: BasicServiceCode is not present 
Line 2159: [OSS]:[Testing]: Status is not present 
Line 2188: [OSS]:[Testing]: Telephone Number is not present 
Line 2206: OverallStatus - %d
Line 2207: No Of Bearer services - %d
Line 2211: [OSS]: SS_SS_Info_forwardingInfo_chosen is not Present
Line 2216: [OSS]: OssDecodedSsInfo is NULL
Line 2249: [OSS]:[Testing]: Interrogate SS: SS_InterrogateSS_Res: Choice Value = %d
Line 2257: [OSS]:[Testing]: SsStatus is present. OverallStatus= %d
Line 2273: [OSS]:[Testing]: Interrogate->Choice: SS_basicServiceGroupList_chosen
Line 2279: [OSS]:[Testing]:[ss_AnalyzeOssCfxInterrogateSsResIe]: SS_forwardingFeatureList_chosen 
Line 2286: [OSS]:[Testing]:[ss_AnalyzeOssCfxInterrogateSsResIe]: In For loop 
Line 2298: [OSS]:[Testing]: BasicServiceCode is not present 
Line 2305: [OSS]:[Testing]: Status is  present & Value = %d
Line 2310: [OSS]:[Testing]: Status param not present 
Line 2322: [OSS]:[Testing]: TelephoneNumberDigits are present: TelephoneNumberDigitsLength = %d 
Line 2332: [OSS]:[Testing]: longForwardedToNumber present 
Line 2341: [OSS]:[Testing]: Telephone Number not present 
Line 2362: OverallStatus - %d
Line 2368: [OSS]:[Testing]: Interrogate->Choice: SS_genericServiceInfo_chosen
Line 2375: [OSS]:[Testing]: No Info Present
Line 2497: [OSS]: SS_SS_Info_ss_Data_chosen param not present
Line 2502: [OSS]: OssDecodedReturnResult is NULL
Line 2507: [OSS]: OssDecodedMsgPtr is NULL
Line 2541: [OSS]:[Testing]: Interrogate SS: SS_InterrogateSS_Res: Choice Value = %d
Line 2548: [OSS]:[Testing]: SsStatus is present. OverallStatus= %d
Line 2596: [OSS]:[Testing]: Interrogate->Choice: SS_basicServiceGroupList_chosen: No Of BearerServices = %d 
Line 2600: [OSS]:[Testing]: ss_SsCwxSeq[%d].BasicServiceCode = %d 
Line 2607: [OSS]:[Testing]: Interrogate->Choice: SS_forwardingFeatureList_chosen-> Not Expected 
Line 2613: [OSS]:[Testing]: Interrogate->Choice: SS_genericServiceInfo_chosen
Line 2621: [OSS]:[Testing]: No Info Present
Line 2628: [OSS]: OssInterogateSsDecRetResult is NULL
Line 2664: [OSS]:[Testing]: SS_SS_Info_callBarringInfo_chosen 
Line 2683: [OSS]:[Testing]: BasicServiceCode not present 
Line 2688: [OSS]:[Testing]: SS_CallBarringFeature_ss_Status_present present 
Line 2703: Invalid Operation Type Rxed = %d
Line 2713: OverallStatus - %d
Line 2717: [OSS]:[Testing]: SS_SS_Info_ss_Data_chosen 
Line 2721: [OSS]:[Testing]: SS_SS_Data_ss_Code_present: Present = %d
Line 2727: [OSS]:[Testing]: SS_SS_Data_basicServiceGroupList_present 
Line 2742: [OSS]:[Testing]: SS_SS_Data_ss_Status_present: Present = %d
Line 2762: [OSS]:[Testing]: Invalid Operation type = %d 
Line 2772: [OSS]: IE  not present 
Line 2792: [OSS]:[Testing]: Invalid Operation Type = %d  
Line 2799: [OSS]: IE  not present 
Line 2819: [OSS]:[Testing]: Invalid Operation Type = %d  
Line 2854: [OSS]:[Testing]: Interrogate SS: SS_InterrogateSS_Res: Choice Value = %d
Line 2861: [OSS]:[Testing]: SsStatus is present. OverallStatus= %d
Line 2882: Invalid Operation Type Rxed = %d
Line 2886: [OSS]:[Testing]: Interrogate->Choice: SS_basicServiceGroupList_chosen
Line 2892: [OSS]:[Testing]: Interrogate->Choice: SS_forwardingFeatureList_chosen-> Not Expected 
Line 2898: [OSS]:[Testing]: Interrogate->Choice: SS_genericServiceInfo_chosen
Line 2907: [OSS]:[Testing]: No Info Present
Line 2914: [OSS]: OssInterogateSsDecRetResult is NULL
Line 2981: [OSS]:[Testing]:Validation Success: Send Call Barring Pwd Change Ind to GAPI 
Line 2986: [OSS]:[Testing]:Validation Failed: Send Call Barring Pwd Change Ind to GAPI 
Line 3021: LinkedIdIe -> 0x%02X, InvokeId -> 0x%02X
Line 3050: [OSS]: Interrogate SS: SS_InterrogateSS_Res: Choice Value = %d
Line 3055: [OSS]:SsStatus is present.
Line 3065: [OSS]:: Interrogate->Choice: SS_basicServiceGroupList_chosen: Not expceted for CLIP
Line 3071: [OSS]:: Interrogate->Choice: SS_forwardingFeatureList_chosen-> Not Expected 
Line 3077: [OSS]:: Interrogate->Choice: SS_genericServiceInfo_chosen
Line 3092: [OSS]: No Info Present
Line 3099: [OSS]: OssInterogateSsDecRetResult is NULL
Line 3194: ss_AnalyzeOssInvokeCompIe - ss_State = %s
Line 3199: InvokeId = %d
Line 3204: InvokeId not present
Line 3236: OperationCode -> SS_OP_CODE_NOTIFY_SS.... Do Nothing
Line 3242: OperationCode -> SS_OP_CODE_GET_PWD
Line 3250: OperationCode -> SS_OP_CODE_USS_REQUEST
Line 3280: Message received in illegal ussd state
Line 3309: OperationCode -> SS_OP_CODE_PROCESS_USS_REQUEST
Line 3325: Message received in illegal ussd state
Line 3355: OperationCode -> SS_OP_CODE_USS_NOTIFY
Line 3377: Message received in illegal ussd state
Line 3407: OperationCode -> SS_OP_CODE_LOCATION_NOTIFICATION
Line 3413: OperationCode -> SS_OP_CODE_LCS_AREA_REQ
Line 3420: OperationCode -> SS_OP_CODE_LCS_AREA_CANCEL
Line 3426: Invalid invoke received
Line 3478: [OSS][DBG] : Decoding Success
Line 3495: [OSS][DBG] : LocationType
Line 3515: [OSS][DBG] : LCSClientExternalID
Line 3542: [OSS][DBG] : LCSClientName
Line 3567: [OSS][DBG] : lcsClientName.lcs_FormatIndicator
Line 3569: lcsFormatInd = %d 
Line 3590: [OSS][DBG] : LCSRequestorID
Line 3596: dataCodingScheme = %d 
Line 3597: requestorIDStringLen = %d ,len =%d
Line 3620: [OSS][DBG] : lcsRequestorID.lcs_FormatIndicator
Line 3640: [OSS][DBG] : LCSCodeword
Line 3645: lcsCodewordStringLen = %d  ,len =%d
Line 3672: [OSS][DBG] : LCSServiceTypeID
Line 3676: lcsServiceTypeIDLen = %d ,len =%d
Line 3688: NotificationType = %d
Line 3699: [OSS]:Oss Decoding Failed
Line 3727: [OSS][DBG] : Decoding Success
Line 3767: [OSS]:Oss Decoding Failed
Line 3795: [OSS][DBG] : Decoding Success
Line 3820: [OSS]:Oss Decoding Failed
Line 3852: [OSS][DBG] : Decoding Success
Line 3862: [OSS][DBG] : locationEstimate.length = %d
Line 3869: [OSS][DBG] : Ext_GeographicalInformation
Line 3885: [OSS][DBG] : add_LocationEstimate.length = %d
Line 3892: [OSS][DBG] : Add_GeographicalInformation
Line 3909: [OSS][DBG] : velocityEstimate.length = %d
Line 3921: Velocity Estimate IE Len = %d 
Line 3932: [OSS][DBG] : referenceNumber.length = %d
Line 3934: Reference Number IE = %d 
Line 3947: [OSS][DBG] : h_gmlc_address.length = %d
Line 3951: [OSS][DBG] : GSN_Address
Line 3958: HGLMC IE Len = %d 
Line 3965: [OSS]:Oss Decoding Failed
Line 4002: [OSS]:Oss Decoding Failed
Line 4038: [OSS]: ComponentType = %d
Line 4043: [OSS]: Invoke received
Line 4052: [OSS]: Reject received
Line 4066: [OSS]: Return Error received
Line 4091: [OSS]: Return Result received
Line 4096: Received Invoke ID from NW = %d
Line 4097: Rx (Invoke ID=%d) (Orig ID=%d)
Line 4112: Result Returned Fail.
Line 4119: RX msg is missing an Invoke ID.
Line 4132: [OSS]: Invalid ComponentType = %d
Line 4139: [OSS]:Oss Decoding Failed
Line 4170: [OSS]: ComponentType = %d
Line 4182: [OSS]: InvokeId = %d
Line 4194: [OSS]: unstructuredSS-Request = %d
Line 4205: [OSS]: unstructuredSS-Notify = %d
Line 4233: HCOMMON.MM.LCS_VA_capability = %d
Line 4244: SS_OP_CODE_LOCATION_NOTIFICATION_NOT_SUPPORT
Line 4277: [OSS]: Invalid Local value received = %d
Line 4284: Message doesn't contain a valid InvokeID.
Line 4295: [OSS]: Return Result/Reject/Return Error received: Not Expected in this message
Line 4307: [OSS]: Invalid ComponentType = %d
Line 4314: [OSS]:Oss Decoding Failed
Line 4340: [OSS]: Invoke Received 
Line 4455: [OSS]: Retrun Error Received 
Line 4503: [OSS]: Return Result Received
Line 4519: [OSS]: Received Invoke ID from NW = %d
Line 4520: [OSS]: Rx (Invoke ID=%d) (Orig ID=%d)
Line 4530: [OSS]: Invoke Id not present.
Line 4610: Component Type -> %s
