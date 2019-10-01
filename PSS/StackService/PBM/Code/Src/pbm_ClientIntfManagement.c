Line 70: [PBM_%d] pbm_DecodeGetCurrentStateReqMsg  Entry
Line 90: [PBM_%d] pbm_DecodeGetMaxCapacityReqMsg Entry
Line 105: [PBM_%d] pbm_PbTypeChanged
Line 128: [PBM_%d] pbm_DecodeGetUsedCapacityReqMsg Entry
Line 141: [PBM_%d] pbm_PbTypeChanged
Line 164: [PBM_%d] pbm_DecodeGetSupportedFieldsReqMsg Entry
Line 198: [PBM_%d] pbm_DecodeSelectAdnReqMsg Entry
Line 202: [PBM_%d] Usim ADN type 0x%x
Line 225: [PBM_%d] pbm_ProcessUpdateEntryReqMsg Entry
Line 237: [PBM_%d] Pbtype 0x%x, Index 0x%x, Update type 0x%x, Update data
Line 272: [PBM_%d] memory allocation fail
Line 283: [PBM_%d] In function pbm_ProcessUpdateEntryReqMsg: Wrong Update Type %d Received
Line 311: [PBM_%d] pbm_DecodeSearchEntryReqMsg Entry
Line 317: [PBM_%d] Pbtype   0x%x    Search string.
Line 343: [PBM_%d] pbm_DecodePbmGetSupportedPhonebookReqMsg Entry
Line 373: [PBM_%d] pbm_DecodePbmGetStorageCapaReqMsg Entry
Line 394: [PBM_%d] pbm_PbTypeChanged
Line 419: [PBM_%d] pbm_DecodeSelectStorageReqMsg Entry
Line 458: [PBM_%d] pbm_DecodeGetStoragelistReqMsg Entry
Line 497: [PBM_%d] pbm_DecodeGetEntriesInfoReqMsg Entry
Line 519: [PBM_%d] pbm_PbTypeChanged
Line 544: [PBM_%d] pbm_DecodeGet3gPbCapaReqMsg Entry
Line 580: [PBM_%d] pbm_DecodeReadEntryReqMsg
Line 596: [PBM_%d] pbm_PbTypeChanged
Line 633: [PBM_%d] Reading Entry... From Cache
Line 681: [PBM_%d] pbm_DecodeUpdateEntryReqMsg Entry
Line 687: [PBM_%d] pbm_PbTypeChanged
Line 712: [PBM_%d] 1. datalen  0x%x 
Line 726: [PBM_%d] 2. datalen  0x%x 
Line 745: [PBM_%d] START PROCESSING NS UPDATE REQUEST
Line 753: [PBM_%d] memory allocation fail
Line 798: [PBM_%d] PBM_OPERATION_FAILED_DIAL_STR_TOO_LONG = %d
Line 801: [PBM_%d] UpdateEntryReqResult = %d
Line 829: [PBM_%d] Sending GetCurrentStatusRsp.....    Current Global State 0x%x
Line 870: [PBM_%d] Sending GetMaxcapacityRsp.....    max Entries 0x%x
Line 908: [PBM_%d] Sending GetUsedcapacityRsp.....    used Entries 0x%x
Line 947: [PBM_%d] Sending GetSupportedFieldsRsp.....   numOfFields 0x%x
Line 973: [PBM_%d] Sending Select AdnRsp.....    Result 0x%x
Line 1000: [PBM_%d] ReadPbEntryRsp.....    DataLen  0x%x    NextIndex 0x%x    data.
Line 1050: [PBM_%d] Sending ReadPbEntryRsp.....    Entry 0x%x
Line 1091: [PBM_%d] Sending UpdatePbEntryRsp.....    Result 0x%x  Update type 0x%x index 0x%x
Line 1131: [PBM_%d] Sending SearchPbEntryRsp.....    No Of seraches 0x%x
Line 1161: [PBM_%d] Sending PB status Ind. to client 0x%x Status  0x%x
Line 1187: [PBM_%d] Sending Pb Cache Status Ind.....    Client 0x%x  status  0x%x PBM state .... %x
Line 1217: [PBM_%d] Sending GetSupportedPhonebookRsp.....    Supp Phonebook 0x%x
Line 1374: [PBM_%d] Sending Get3gPbCapaRsp TO NS.....    Result 0x%x
Line 1432: [PBM_%d] HEX DUMP OF PBM-FIELD
Line 1447: [PBM_%d] HEX DUMP OF Pbm3gPbCapability AFTER COPYING
Line 1451: [PBM_%d] Sending Pb Status Ind to NS.....    Client 0x%x
Line 1635: [PBM_%d] pbm_DecodeStartCachingReqMsg Entry pbm_PbmSupportConfig: 0x%x
Line 1639: [PBM_%d] CachingType: 0x%x
Line 1660: [PBM_%d] pbm_DecodeStartCachingReqMsg Start cache req already received. So ignoring
Line 1666: [PBM_%d] Start PBM initialization
Line 1674: [PBM_%d] PBM caching disabled.
Line 1678: [PBM_%d] Wrong CachingType received
Line 1683: [PBM_%d] Invalid caching Request
Line 1812: [PBM_%d] Handling Get 3G capability  %d
Line 1928: [PBM_%d] pbmGetIpcSubParamFromPbmEntry : wrong storage type received
Line 1966: [PBM_%d] Extracting 0x%x
Line 1978: [PBM_%d] IpcSubParamLen 0x%x
Line 1984: [PBM_%d] UCS2 encoding type 0x%x
Line 1990: [PBM_%d] maxlength 0x%x
Line 1994: [PBM_%d] len_count 0x%x, index 0x%x, pbmEntry[index] 0x%x, pbmEntry[index+1] 0x%x
Line 1999: [PBM_%d] IpcSubParamLen 0x%x
Line 2055: [PBM_%d] C7 modified to  0x%x
Line 2105: [PBM_%d] UCS2 encoding is invalid 
Line 2206: [PBM_%d] SKIPPING UN-SUPPORTED FIELD
Line 2243: [PBM_%d] <<< PBMConvertGsm7_to_UCS2 input_u8: 0x%x *output_ucs2_char: 0x%x
Line 2293: [PBM_%d] In PBMConvertUCS2_to_GSM.....result %d output len %x
Line 2329: [PBM_%d] In pbm_IsUCS2ToGSM7Possible..result 0x%x ucs2: 0x%x gsm7 : 0x%x
Line 2367: [PBM_%d] RetVal in pbm_IsByteFieldTag = %d
Line 2445: [PBM_%d] ucs2_type 0x%x
Line 2504: [PBM_%d] C7 modified to  0x%x
Line 2561: [PBM_%d] KSC5601 encoding
Line 2673: [PBM_%d] Name Tag converted from UCS2 to KSC5601
Line 2692: [PBM_%d] Name Tag converted from UCS2 to GSM7 bit isallGSM
Line 2739: [PBM_%d] field length received from SIPC too large..fieldTag= 0x%x, FieldLength=0x%X !
Line 2788: [PBM_%d] E7 --> 09
Line 2860: [PBM_%d] Wrong Encoding type 0x%x
Line 2877: [PBM_%d] field length received from SIPC too large..fieldTag= 0x%x, FieldLength=0x%X 
Line 2887: [PBM_%d] Wrong Field tag found Tag: 0x%x  parsed dataLen: 0x%x
Line 2929: [PBM_%d] test print alphaId[%d]: 0x%x , alphaId[index+1]:  0x%x 
Line 2961: [PBM_%d] flag81TypeSupport = FALSE
Line 2980: [PBM_%d] flag82TypeSupport = FALSE
Line 2996: alphaCode: 0x%x , minAlphaCode: 0x%x , maxAlphaCode: 0x%x
Line 3006: [PBM_%d] gsm7 : 0x%x
Line 3017: [PBM_%d] Only Capital C present make flag81TypeSupport = FALSE
Line 3033: [PBM_%d] Enc type : 81 , *halfPageBase: 0x%x
Line 3038: [PBM_%d] Specialcase
Line 3044: [PBM_%d] Both Small C and C present,use strict type 81
Line 3051: [PBM_%d] Enc type : 82 , *fullPageBase: 0x%x
Line 3056: [PBM_%d] Base pointers are diff: ENC type selected: 80
Line 3061: [PBM_%d] All data GSM Default data type
Line 3203: [PBM_%d] pbmGet3GPbEntryFromIpcSubParam.....Name Tag converted from UCS2 to KSC5601
Line 3219: [PBM_%d] AddSubParamToPbEntry.....Name Tag converted from UCS2 to GSM7 bit isallGSM
Line 3286: [PBM_%d] E7 --> 09
Line 3347: [PBM_%d] Wrong Encoding type 0x%x
Line 3454: [PBM_%d] pbm_DecodeSubscriberNumGetReqMsg Entry
Line 3538: [PBM_%d] KSC5601 bytes 0x%X 
Line 3556: [PBM_%d] UCS2 char 0x%X 
Line 3562: [PBM_%d] KSC5601 match not found !!!
Line 3595: [PBM_%d] KSC5601 bytes 0x%X 0x%X
Line 3603: [PBM_%d] KSC5601 Extended bytes 0x%X 0x%X 
Line 3627: [PBM_%d] UCSChar bytes 0x%X
Line 3663: [PBM_%d] KSC5601 0x%X 
Line 3670: [PBM_%d] 
Line 3723: [PBM_%d] pbm_handleConversionUCS2ToKSC5601 srcLen 0x%X *outNoOfChar 0x%X
Line 3765: [PBM_%d] pbm_handleConvertionKSC5601ToUCS2 srcLen 0x%X *outNoOfChar 0x%X
Line 3786: [PBM_%d] src[index] 0x%x
Line 3804: [PBM_%d] chaning ASCII @ char to GSM7bit @ char at index 0x%x
Line 3843: [PBM_%d] src[index] 0x%x
