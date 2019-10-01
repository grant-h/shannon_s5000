Line 203: rrc_UeCapMngr.c: rrc_UeCapMngr_init: Timer T304 creation failed
Line 255: rrc_UeCapMngr.c: rrc_UeCapMngr_init: T304 Delete Failed
Line 392:  : Support for SIB 11 bis removed for TDD 
Line 419:  : Support for RLC Support of Two LC removed for TDD 
Line 468: disable EUTRA in RatMode = %d
Line 475: rrc_UeCapMngr_PopUlUeCapInfo Setting measurement capabilty for TDD Eutra
Line 582: rrc_UeCapMngr.c: Idle_UECapabilityEnq: ProcessUeCapabilityEnquiry() returned FAIL
Line 601: rrc_UeCapMngr.c: AwaitAck_UECapabilityEnq: Timer T304 Stop Failed.
Line 618: rrc_UeCapMngr.c: AwaitAck_UECapabilityEnq: Post state to UECAPENQAWAITACK failed.
Line 661: rrc_UeCapMngr.c: AwaitAck_UECapInfoAck: Post state to IDLE failed.
Line 673: rrc_UeCapMngr.c: AwaitAck_UECapInfoAck: Post state to AWAITCAPINFOCNF failed.
Line 688: rrc_UeCapMngr.c: AwaitAck_UECapInfoAck: rrc_ss_StartTimer() not Successful
Line 694: AwaitAck_UECapInfoAck: failed to send UECapInfo (cause %d)
Line 700: rrc_UeCapMngr.c: AwaitAck_UECapInfoAck: Timer T304 Stop Failed.
Line 711: rrc_UeCapMngr.c: AwaitAck_UECapInfoAck: Post state to IDLE failed.
Line 750: rrc_UeCapMngr.c: AwaitAck_UECapabilityInfoCnf: Timer T304 Stop Failed.
Line 769: rrc_UeCapMngr.c: AwaitAck_UECapabilityInfoCnf: Failure to post state IDLE
Line 803: rrc_UeCapMngr.c: AwaitAck_UECapabilityInfoCnf: rrc_ss_StartTimer() not Successful
Line 809: rrc_UeCapMngr.c: AwaitAck_UECapabilityInfoCnf: Failure to post state AWAITACK
Line 845: rrc_UeCapMngr.c: AwaitAck_UECapabilityEnq: ProcessUeCapabilityEnquiry() returned FAIL
Line 863: rrc_UeCapMngr.c: AwaitCapInfoCnf_UECapabilityEnq: Timer T304 Stop Failed.
Line 884: rrc_UeCapMngr.c: AwaitCapInfoCnf_UECapabilityEnq: ProcessUeCapabilityEnquiry() returned FAIL
Line 917: rrc_UeCapMngr.c: AwaitCapInfoCnf_UECapabilityInfoCnf: Timer T304 Stop Failed.
Line 938: rrc_UeCapMngr.c: AwaitCapInfoCnf_UECapabilityInfoCnf: Failure to post state IDLE
Line 972: rrc_UeCapMngr.c: AwaitCapInfoCnf_UECapabilityInfoCnf: rrc_ss_StartTimer() not Successful
Line 979: rrc_UeCapMngr.c: AwaitCapInfoCnf_UECapabilityInfoCnf: Failure to post state AWAITACK
Line 1036: ERROR stopping T313 timer
Line 1045: rrc_UeCapMngr.c: DefaultState_T304Expiry: SendInternalMsgSingleton FAIL
Line 1051: rrc_UeCapMngr.c: DefaultState_T304Expiry: Failure to post state IDLE
Line 1061: rrc_UeCapMngr.c: DefaultState_T304Expiry: ProcessUeCapabilityEnquiry() returned FAIL
Line 1088: Failed to stop T304
Line 1092: Running T304 is stopped successfully
Line 1115: Failed to transit to IDLE state
Line 1137: UMTS RAT RESUMED, so LTE supporting frequency bands are being updated
Line 1210: rrc_UeCapMngr.c: Idle_UECapabilityEnq: rrc_DlMsgInitialProcess_postProcess() returned FALSE
Line 1241: rrc_UeCapMngr.c: Idle_UECapabilityEnq: Failure to post state AWAITACK
Line 1463: SetUlRFCapability, UePowerClass = %d TxRxFrequencySeparation = %d
Line 1532: Phy Ch Cap not populated for the 384 and 768 
Line 1550: >> MultiModeCapability: Supported %d
Line 1557: >> MultiModeCapability: Invalid Request (Fdd %d, Tdd %d)
Line 1561: >> MultiModeCapability: Requested %d
Line 1568: >> MultiModeCapability: Requested %d
Line 1575: >> MultiModeCapability: Requested %d, RequestOverwritten %d
Line 1582: >> MultiModeCapability: Invalid Request %d
Line 1586: >> MultiModeCapability: Requested %d
Line 1594: >> MultiModeCapability: Requested %d, RequestOverwritten %d
Line 1601: >> MultiModeCapability: Invalid Request %d
Line 1605: >> MultiModeCapability: Requested %d
Line 1609: [SetUlMsgMultiModeRatCapability] GSMSupport %d, MultiCarrierSupport %d, MultiModeCapability = %d
Line 1758: pal_UserRegInitItem_NMO_2G_band(0x%x), gsm900E configured
Line 1769: pal_UserRegInitItem_NMO_2G_band(0x%x), gsm1800 configured
Line 1780: pal_UserRegInitItem_NMO_2G_band(0x%x), gsm1900 configured
Line 1791: pal_UserRegInitItem_NMO_2G_band(0x%x), gsm850 configured
Line 1842: SetUlMsgMeasCapability, Fill the MeasCapability in asnRacBufferPtr
Line 1876: [GSMCAP] No saved Classmark 2/3
Line 2442: RacRelLaterExtBitMask was set
Line 2685: rrc_Class_UeCapMngr_getNumSoftBitsFromPhyLayerCategory 15
Line 2846: UeCapMngr_p->SuppEutraBands[%d] = %d
Line 2895: UeCapMngr_p->RegEutraBands[%d] = %d
Line 2912: [rrc_UeCapMngr_isValidEutraBand] BAND %d is not a Valid EUTRA BAND
Line 2972: [rrc_UeCapMngr_getEutraBandRange] Invalid Band Range
Line 2984: Eutra bandId greater than 64 found
Line 3017: Max(64) Eutra bands are supported so the rest of them will be ignored
Line 3023: %d is not a valid LTE BAND so it will be ignored
Line 3026: Total NumValidEutraBand(%d)
Line 3049: SuppValidEutraBand[%d], %d
Line 3068: Eutra BandId[%d] cannot be taken, as it already exceed the limit of max
Line 3083: Eutra BandId[%d] cannot be taken, as it already exceed the limit of max
Line 3090: Eutra BandId[64] is reserved.. LTE should not give this
Line 3105: Eutra BandId[%d] cannot be taken, as it already exceed the limit of max
Line 3111: BandId not supported
Line 3122: NumValidEutraBandList1(%d), NumValidEutraBandList2(%d), NumValidEutraBandList3(%d)
Line 3168: NASU_DIV_DUPLEX_MODE 0x%x
Line 3189: BAND%d is not in a valid range
Line 3210: Fatal Error: Messsage Freed abnormally @ [State : %d] [Event : %d] 
Line 3228: rrc_UeCapMngr_isRegisteredEutraBand : UeCapMngr_p->RegEutraBands[%d] = %d
Line 3233: rrc_UeCapMngr_isRegisteredEutraBand : BandId(%d) is supported EUTRA Band
Line 3240: rrc_UeCapMngr_isRegisteredEutraBand : BandId(%d) is not supported EUTRA Band
Line 3257: BAND %d is EUTRA TDD BAND
Line 3262: BAND %d is EUTRA FDD BAND
Line 3268: BAND %d is an invalid BAND
Line 3285: GANSS Not Supported (UtranAgnss %d, ganss_supportInd %d)
Line 3299: GANSS Not Supported (UtranAgnss %d, ganss_supportInd %d)
Line 3322: MaxBand = %d
Line 3331: GetRfFddBandListsFromStoredBands: BandId retrieved = %d
Line 3340: GetRfFddBandListsFromStoredBands: FDD2 BandId retrieved = %d
Line 3345: GetRfFddBandListsFromStoredBands: usupported band = %d
Line 3354: FDDBandList[%d]=%x
Line 3360: FDDBand2List[%d]=%x
Line 3372: UeCapMngr_p is NULL
Line 3384: UeCapMngr_p is NULL
