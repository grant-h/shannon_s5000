Line 130: Initialized Assistance data
Line 130: Initialized Assistance data
Line 151: LCSM_SS_DECIPHER_KEY_REQ
Line 151: LCSM_SS_DECIPHER_KEY_REQ
Line 378: SS_LCSM_DECIPHER_KEY_IND
Line 378: SS_LCSM_DECIPHER_KEY_IND
Line 398: RXed SI15-3 data
Line 398: RXed SI15-3 data
Line 403: Decoding of SI15-3 failed
Line 403: Decoding of SI15-3 failed
Line 417: RXed SI15-2 data
Line 417: RXed SI15-2 data
Line 423: Decoding of SI15-2 failed
Line 423: Decoding of SI15-2 failed
Line 437: RXed SI15-1 data
Line 437: RXed SI15-1 data
Line 443: Decoding of SI15-1 failed
Line 443: Decoding of SI15-1 failed
Line 650: Index value exceeded, index = %x
Line 650: Index value exceeded, index = %x
Line 771: Index value exceeded, index = %x
Line 771: Index value exceeded, index = %x
Line 806: lcsm_ExtractAlmanacData: Index Value %d exceeding
Line 806: lcsm_ExtractAlmanacData: Index Value %d exceeding
Line 811: lcsm_ExtractAlmanacData: Extracting Almanac Data
Line 811: lcsm_ExtractAlmanacData: Extracting Almanac Data
Line 876: lcsm_ExtractDgpsData: Index Value %d is exceeding 
Line 876: lcsm_ExtractDgpsData: Index Value %d is exceeding 
Line 881: lcsm_ExtractDgpsData: Extracting DGPS Data
Line 881: lcsm_ExtractDgpsData: Extracting DGPS Data
Line 888: LCSM Stop Timer = %x
Line 888: LCSM Stop Timer = %x
Line 962: LCSM Start Timer = %x
Line 962: LCSM Start Timer = %x
Line 971: LCSM_SMSCB_ASSIST_DATA_CHK_IND
Line 971: LCSM_SMSCB_ASSIST_DATA_CHK_IND
Line 1004: lcsm_ExtractEphemerisData: Index Value %d exceeding
Line 1004: lcsm_ExtractEphemerisData: Index Value %d exceeding
Line 1009: lcsm_ExtractEphemerisData : Extracting Ephemeris Data
Line 1009: lcsm_ExtractEphemerisData : Extracting Ephemeris Data
Line 1129: Entering lcsm_ProcessCbch
Line 1129: Entering lcsm_ProcessCbch
Line 1150: No decipher keys available
Line 1150: No decipher keys available
Line 1172: CBCH data to be extracted = %x
Line 1172: CBCH data to be extracted = %x
Line 1188: Wrong valid_data(0x%x)
Line 1188: Wrong valid_data(0x%x)
Line 1297: lcsm_UmtsStoreRefTimeData
Line 1297: lcsm_UmtsStoreRefTimeData
Line 2038: lcsm_StoreSI15Data : Index Value%d is exceeding
Line 2038: lcsm_StoreSI15Data : Index Value%d is exceeding
Line 2111: lcsm_StoreSI15_1Data: Index Value %d  exceeding 
Line 2111: lcsm_StoreSI15_1Data: Index Value %d  exceeding 
Line 2158: lcsm_StoreSI15_2Data: Index Value %d exceeding
Line 2158: lcsm_StoreSI15_2Data: Index Value %d exceeding
Line 2211: lcsm_StoreSI15_3Data: Index Value %d exceeding
Line 2211: lcsm_StoreSI15_3Data: Index Value %d exceeding
Line 2331: lcsm_ProcessSIData
Line 2331: lcsm_ProcessSIData
Line 2411: RXed SI15 data
Line 2411: RXed SI15 data
Line 2465: RXed SI15-1 data
Line 2465: RXed SI15-1 data
Line 2472: RXed SI15-2 data
Line 2472: RXed SI15-2 data
Line 2479: RXed SI15-3 data
Line 2479: RXed SI15-3 data
Line 2488: RXed SI15-1 data
Line 2488: RXed SI15-1 data
Line 2494: RXed SI15-2 data
Line 2494: RXed SI15-2 data
Line 2500: RXed SI15-3 data
Line 2500: RXed SI15-3 data
Line 2510: Decoding of SI failed
Line 2510: Decoding of SI failed
Line 2674: RESETTING SI Asst data
Line 2674: RESETTING SI Asst data
Line 2690: [lcsm_ProcessRrcAssistanceData]
Line 2690: [lcsm_ProcessRrcAssistanceData]
Line 2717: Acqui Assist Present
Line 2717: Acqui Assist Present
Line 2726: PREVIUOSLY NO ACQUI DATA PRESENT
Line 2726: PREVIUOSLY NO ACQUI DATA PRESENT
Line 2737: Ephemeris Data Present
Line 2737: Ephemeris Data Present
Line 2755: Real Time Integrity Present
Line 2755: Real Time Integrity Present
Line 2773: DGPS Data Present
Line 2773: DGPS Data Present
Line 2791: IONO data Present
Line 2791: IONO data Present
Line 2801: Almanac Present
Line 2801: Almanac Present
Line 2819: Ref Location Present
Line 2819: Ref Location Present
Line 2829: UTC Data Present
Line 2829: UTC Data Present
Line 2837: Assist Data Extracted and stored
Line 2837: Assist Data Extracted and stored
Line 2841: DataType = %d
Line 2841: DataType = %d
Line 2882: lcsm_ProcessRrcGnssAssistanceData
Line 2882: lcsm_ProcessRrcGnssAssistanceData
Line 2891: Processing RRC_GANSS_COMMON_ASSIST_DATA
Line 2891: Processing RRC_GANSS_COMMON_ASSIST_DATA
Line 2898: Rxed BM_GANSS_REF_TIME
Line 2898: Rxed BM_GANSS_REF_TIME
Line 2914: Rxed BM_GANSS_REF_LOCATION
Line 2914: Rxed BM_GANSS_REF_LOCATION
Line 2941: Rxed BM_GANSS_IONO_MODEL
Line 2941: Rxed BM_GANSS_IONO_MODEL
Line 2957: Rxed BM_GANSS_ADD_IONO_MODEL
Line 2957: Rxed BM_GANSS_ADD_IONO_MODEL
Line 2980: Rxed BM_GANSS_EARTH_ORIENT_PARAM
Line 2980: Rxed BM_GANSS_EARTH_ORIENT_PARAM
Line 3009: Processing RRC_GANSS_GENERIC_ASSIST_DATA
Line 3009: Processing RRC_GANSS_GENERIC_ASSIST_DATA
Line 3010: rrc_dedi_asst_data[LcsmCurrentStackId].num_ganss_genericData = %d
Line 3010: rrc_dedi_asst_data[LcsmCurrentStackId].num_ganss_genericData = %d
Line 3018: Rxed BM_GANSS_ID
Line 3018: Rxed BM_GANSS_ID
Line 3024: Offset = %d, Ganss Id = %d
Line 3024: Offset = %d, Ganss Id = %d
Line 3029: Rxed BM_GANSS_TIME_MODEL
Line 3029: Rxed BM_GANSS_TIME_MODEL
Line 3042: Rxed BM_GANSS_DIFF_CORRECT
Line 3042: Rxed BM_GANSS_DIFF_CORRECT
Line 3052: dganss_correct present
Line 3052: dganss_correct present
Line 3057: Rxed BM_GANSS_NAV_MODEL
Line 3057: Rxed BM_GANSS_NAV_MODEL
Line 3079: Add nav_model present
Line 3079: Add nav_model present
Line 3083: Add nav_model not present
Line 3083: Add nav_model not present
Line 3092: Rxed BM_GANSS_REAL_TIME_INTEGRITY
Line 3092: Rxed BM_GANSS_REAL_TIME_INTEGRITY
Line 3102: real_time_int present
Line 3102: real_time_int present
Line 3107: Rxed BM_GANSS_REF_MEAS_ASSIST
Line 3107: Rxed BM_GANSS_REF_MEAS_ASSIST
Line 3117: ref_meas_info present
Line 3117: ref_meas_info present
Line 3122: Rxed BM_GANSS_UTC_MODEL
Line 3122: Rxed BM_GANSS_UTC_MODEL
Line 3132: utc_model present
Line 3132: utc_model present
Line 3190: GPS ToW ASSISTANCE
Line 3190: GPS ToW ASSISTANCE
Line 3207: Overwriting Existing GPS ToW ASSISTANCE
Line 3207: Overwriting Existing GPS ToW ASSISTANCE
Line 3607: lcsm_ProcessRrAssistanceData: Bitmas 0x%X
Line 3607: lcsm_ProcessRrAssistanceData: Bitmas 0x%X
Line 3622: Ref Time Present
Line 3622: Ref Time Present
Line 3634: Ref Location Present
Line 3634: Ref Location Present
Line 3650: DGPS Present
Line 3650: DGPS Present
Line 3667: Navigation Data Present
Line 3667: Navigation Data Present
Line 3685: IONO Data Present
Line 3685: IONO Data Present
Line 3702: UTC Model Present
Line 3702: UTC Model Present
Line 3720: AlmanacData Present
Line 3720: AlmanacData Present
Line 3738: Acqui Assist Data
Line 3738: Acqui Assist Data
Line 3755: Real Time Integrity (RTI) Present
Line 3755: Real Time Integrity (RTI) Present
Line 3758: RR Asst data extracted and stored
Line 3758: RR Asst data extracted and stored
