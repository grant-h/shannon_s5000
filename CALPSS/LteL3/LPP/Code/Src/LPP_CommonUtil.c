Line 227: LPP_AsnDecodeMsg() - NULL Pointer!!!
Line 240: LPP_ProAsnDecode: Success
Line 243: LPP_ProAsnDecode: SIZE_INVALID
Line 246: LPP_ProAsnDecode: CHOICE_INVALID
Line 249: LPP_ProAsnDecode: RANGE_INVALID
Line 252: LPP_ProAsnDecode: UNSUPPORTED_PDU
Line 255: LPP_ProAsnDecode: DECODER_LENGTH_EXCEED (InputLen(%d bits) < unpackedLen(%d bits))
Line 258: LPP_ProAsnDecode: Misc error #: %d
Line 264: [seqNum_de:%d] LPP_ProAsnDecode FAIL, pdu(%d) CodecReturnCode(%d) CodecErrorStruct(%s)
Line 270: [seqNum_de:%d] LPP_ProAsnDecode Success, pdu(%d) unpackedLen(%d bits)
Line 339: EUTRAN_LCS_AsnDecodeMsg() - NULL Pointer!!!
Line 352: EutranLcs_ProAsnDecode: Success
Line 355: EutranLcs_ProAsnDecode: SIZE_INVALID
Line 358: EutranLcs_ProAsnDecode: CHOICE_INVALID
Line 361: EutranLcs_ProAsnDecode: RANGE_INVALID
Line 364: EutranLcs_ProAsnDecode: UNSUPPORTED_PDU
Line 367: EutranLcs_ProAsnDecode: DECODER_LENGTH_EXCEED (InputLen(%d bits) < unpackedLen(%d bits))
Line 370: EutranLcs_ProAsnDecode: Misc error #: %d
Line 376: [seqNum_de:%d] EutranLcs_ProAsnDecode FAIL, pdu(%d) CodecReturnCode(%d) CodecErrorStruct(%s)
Line 383: [seqNum_de:%d] EutranLcs_ProAsnDecode Success, pdu(%d) unpackedLen(%d bits)
Line 445: LPP_AsnEncodeMsg() - Invalid PDU Number!!! pduNum(%d)
Line 454: LPP_AsnEncodeMsg() - NULL Pointer!!!
Line 464: LPP_ProAsnEncode: Success
Line 467: LPP_ProAsnEncode: SIZE_INVALID
Line 470: LPP_ProAsnEncode: CHOICE_INVALID
Line 473: LPP_ProAsnEncode: RANGE_INVALID
Line 476: LPP_ProAsnEncode: UNSUPPORTED_PDU
Line 479: LPP_ProAsnEncode: ENCODER_BUFSIZE_EXCEED
Line 482: LPP_ProAsnEncode: Misc error #: %d
Line 488: [seqNum_en:%d] LPP_ProAsnEncode FAIL, pdu(%d) CodecReturnCode(%d) CodecErrorStruct(%s)
Line 495: [seqNum_en:%d] LPP_ProAsnEncode Success, pdu(%d) packedLen(%d bits)
Line 553: EUTRAN_LCS_AsnEncodeMsg() - Invalid PDU Number!!! pduNum(%d)
Line 562: EUTRAN_LCS_AsnEncodeMsg() - NULL Pointer!!!
Line 571: EutranLcs_ProAsnEncode: Success
Line 574: EutranLcs_ProAsnEncode: SIZE_INVALID
Line 577: EutranLcs_ProAsnEncode: CHOICE_INVALID
Line 580: EutranLcs_ProAsnEncode: RANGE_INVALID
Line 583: EutranLcs_ProAsnEncode: UNSUPPORTED_PDU
Line 586: EutranLcs_ProAsnEncode: ENCODER_BUFSIZE_EXCEED
Line 589: EutranLcs_ProAsnEncode: Misc error #: %d
Line 595: [seqNum_en:%d] EutranLcs_ProAsnEncode FAIL, pdu(%d) CodecReturnCode(%d) CodecErrorStruct(%s)
Line 601: [seqNum_en:%d] EutranLcs_ProAsnEncode Success, pdu(%d) packedLen(%d bits)
Line 644: [LPP_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 651: LPP_AsnFreeMsg() - ossFreePDU FAIL!!! asnRetCode(%d)
Line 684: [EutranLcs_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 2556: <<-------------------------------------------------
Line 2557: | ++ SBAS_IDs
Line 2569: LPP_ConvertSBAS_IDsToASN() - MALLOC FAIL!!!
Line 2570: >>-------------------------------------------------
Line 2591: | sbas_IDs(0x%02x)
Line 2592: >>-------------------------------------------------
Line 2618: <<-------------------------------------------------
Line 2619: | ++ PositioningModes - src(%d)
Line 2630: LPP_ConvertPositioningModesToASN() - MALLOC FAIL!!!
Line 2631: >>-------------------------------------------------
Line 2647: | posModes(0x%02x)
Line 2648: >>-------------------------------------------------
Line 2674: <<-------------------------------------------------
Line 2675: | ++ AccessTypes [%d]
Line 2686: LPP_ConvertAccessTypesToASN() - MALLOC FAIL!!!
Line 2687: >>-------------------------------------------------
Line 2703: | accessTypes(0x%02x)
Line 2704: >>-------------------------------------------------
Line 2730: <<-------------------------------------------------
Line 2731: | ++ GNSS_IonosphericModelSupport
Line 2741: LPP_ConvertGNSS_IonosphericModelSupport() - MALLOC FAIL!!!
Line 2742: >>-------------------------------------------------
Line 2754: | ionoModel(0x%02x)
Line 2755: >>-------------------------------------------------
Line 2783: <<-------------------------------------------------
Line 2784: | ++ GNSS_CommonAssistanceDataSupport
Line 2791: <<-------------------------------------------------
Line 2792: | ++ GNSS_ReferenceTimeSupport
Line 2801: >>-------------------------------------------------
Line 2802: >>-------------------------------------------------
Line 2813: >>-------------------------------------------------
Line 2814: >>-------------------------------------------------
Line 2819: >>-------------------------------------------------
Line 2825: <<-------------------------------------------------
Line 2826: | ++ GNSS_ReferenceLocationSupport
Line 2831: >>-------------------------------------------------
Line 2841: >>-------------------------------------------------
Line 2849: <<-------------------------------------------------
Line 2850: | ++ GNSS_EarthOrientationParametersSupport
Line 2855: >>-------------------------------------------------
Line 2857: >>-------------------------------------------------
Line 2881: <<-------------------------------------------------
Line 2882: | ++ GNSS_NavigationModelSupport
Line 2899: LPP_ConvertGNSS_NavigationModelSupport() - MALLOC FAIL!!!
Line 2900: >>-------------------------------------------------
Line 2929: | clockModel(0x%02x)
Line 2945: LPP_ConvertGNSS_NavigationModelSupport() - MALLOC FAIL!!!
Line 2946: >>-------------------------------------------------
Line 2974: | orbitModel(0x%02x)
Line 2976: >>-------------------------------------------------
Line 3002: <<-------------------------------------------------
Line 3003: | ++ GNSS_AcquisitionAssistanceSupport
Line 3010: | LPP_confidenceSupport_r10_present
Line 3017: | LPP_dopplerUncertaintyExtSupport_r10_present
Line 3021: >>-------------------------------------------------
Line 3045: <<-------------------------------------------------
Line 3046: | ++ GNSS_AlmanacSupport
Line 3065: LPP_ConvertGNSS_AlmanacSupport() - MALLOC FAIL!!!
Line 3066: >>-------------------------------------------------
Line 3100: LPP_ConvertGNSS_AlmanacSupport() - Unsupported Almanac Model recieved [%d]
Line 3103: | almanacModel(0x%02x)
Line 3105: >>-------------------------------------------------
Line 3131: <<-------------------------------------------------
Line 3132: | ++ GNSS_UTC_ModelSupport
Line 3149: LPP_ConvertGNSS_UTC_ModelSupport() - MALLOC FAIL!!!
Line 3150: >>-------------------------------------------------
Line 3177: LPP_ConvertGNSS_UTC_ModelSupport() - Unsupported UTC Model received [%d]
Line 3179: | utc_Model(0x%02x)
Line 3181: >>-------------------------------------------------
Line 3211: <<-------------------------------------------------
Line 3212: | ++ AssistanceDataSupportList
Line 3223: <<-------------------------------------------------
Line 3224: | ++ GNSS_GenericAssistanceDataSupport [%d]
Line 3230: LPP_ConvertAssistanceDataSupportList() - MALLOC FAIL!!!
Line 3231: >>-------------------------------------------------
Line 3232: >>-------------------------------------------------
Line 3266: | sbas_id(%d)
Line 3272: <<-------------------------------------------------
Line 3273: | ++ GNSS_TimeModelsSupport
Line 3278: >>-------------------------------------------------
Line 3284: <<-------------------------------------------------
Line 3285: | ++ GNSS_DifferentialCorrectionsSupport
Line 3294: | dgnss_ValidityTimeSup(%d)
Line 3296: >>-------------------------------------------------
Line 3306: >>-------------------------------------------------
Line 3307: >>-------------------------------------------------
Line 3317: <<-------------------------------------------------
Line 3318: | ++ GNSS_RealTimeIntegritySupport
Line 3323: >>-------------------------------------------------
Line 3329: <<-------------------------------------------------
Line 3330: | ++ GNSS_DataBitAssistanceSupport
Line 3335: >>-------------------------------------------------
Line 3352: >>-------------------------------------------------
Line 3353: >>-------------------------------------------------
Line 3367: >>-------------------------------------------------
Line 3368: >>-------------------------------------------------
Line 3378: <<-------------------------------------------------
Line 3379: | ++ GNSS_AuxiliaryInformationSupport
Line 3384: >>-------------------------------------------------
Line 3390: <<-------------------------------------------------
Line 3391: | ++ BDS_DifferentialCorrectionsSupport_r12
Line 3397: >>-------------------------------------------------
Line 3403: <<-------------------------------------------------
Line 3404: | ++ BDS_GridModelSupport_r12
Line 3410: >>-------------------------------------------------
Line 3413: >>-------------------------------------------------
Line 3420: >>-------------------------------------------------
Line 3446: <<-------------------------------------------------
Line 3447: | ++ A_GNSS_ProvideCapabilities
Line 3450: | bit_mask(0x%x)
Line 3461: LPP_ConvertA_GNSS_ProvideCapabilities() - numberOfGNSS_SupportList is ZERO!!!
Line 3468: <<-------------------------------------------------
Line 3469: | ++ GNSS_SupportList [%d]
Line 3474: LPP_CopyA_GNSS_ProvideCapabilities() - MALLOC FAIL!!!
Line 3539: | adr_Support(%d)
Line 3545: | velocityMeasurementSupport(%d)
Line 3548: >>-------------------------------------------------
Line 3560: LPP_ConvertA_GNSS_ProvideCapabilities() - numberOfGNSS_GenericAssistanceDataSupport is ZERO!!!
Line 3572: <<-------------------------------------------------
Line 3573: | ++ LocationCoordinateTypes
Line 3578: | ellipsoidPoint(%d)
Line 3584: | ellipsoidPointWithUncertaintyCircle(%d)
Line 3590: | ellipsoidPointWithUncertaintyEllipse(%d)
Line 3596: | polygon(%d)
Line 3602: | ellipsoidPointWithAltitude(%d)
Line 3608: | ellipsoidPointWithAltitudeAndUncertaintyEllipsoid(%d)
Line 3614: | ellipsoidArc(%d)
Line 3617: >>-------------------------------------------------
Line 3623: <<-------------------------------------------------
Line 3624: | ++ VelocityTypes
Line 3629: | horizontalVelocity(%d)
Line 3635: | horizontalWithVerticalVelocity(%d)
Line 3641: | horizontalVelocityWithUncertainty(%d)
Line 3647: | horizontalWithVerticalVelocityAndUncertainty(%d)
Line 3650: >>-------------------------------------------------
Line 3653: >>-------------------------------------------------
Line 3684: <<-------------------------------------------------
Line 3685: | ++ GPS_TOW_AssistDst [%d]
Line 3689: | satelliteID(%d)
Line 3693: | tlmWord(%d)
Line 3697: | antiSpoof(%d)
Line 3701: | alert(%d)
Line 3705: | tlmRsvdBits(%d)
Line 3707: >>-------------------------------------------------
Line 3735: <<-------------------------------------------------
Line 3736: | ++ GNSS_SystemTime
Line 3745: | gnss_DayNumber(%d)
Line 3749: | gnss_TimeOfDay(%d)
Line 3754: | LPP_gnss_TimeOfDayFrac_msec_present
Line 3757: | gnss_TimeOfDayFrac_msec(%d)
Line 3763: | LPP_notificationOfLeapSecond_present
Line 3766: | notificationOfLeapSecond(0x%02x)
Line 3772: | LPP_gps_TOW_Assist_present
Line 3777: >>-------------------------------------------------
Line 3801: <<-------------------------------------------------
Line 3802: | ++ NetworkTime
Line 3808: | secondsFromFrameStructureStart(%d)
Line 3812: | fractionalSecondsFromFrameStructureStart(%d)
Line 3817: | LPP_frameDrift_present
Line 3820: | frameDrift(%d)
Line 3828: <<-------------------------------------------------
Line 3829: | ++ EUTRA
Line 3835: | physCellId(%d)
Line 3847: | earfcn(%d)
Line 3848: >>-------------------------------------------------
Line 3851: <<-------------------------------------------------
Line 3852: | ++ UTRA
Line 3863: | fddPrimary_CPICH_Info(%d)
Line 3870: | tddCellParameters(%d)
Line 3874: !!!!!!!!!! mode.choice(%d) is wrong choice !!!!!!!!!!
Line 3888: | uarfcn(%d)
Line 3889: >>-------------------------------------------------
Line 3892: <<-------------------------------------------------
Line 3893: | ++ GSM
Line 3899: | bcchCarrier(%d)
Line 3903: | bsic(%d)
Line 3911: | MCC(%d %d %d)
Line 3919: | MNC(%d %d %d)
Line 3929: | locationAreaCode(0x%02x %02x)
Line 3938: | cellIdentity(0x%02x %02x)
Line 3942: >>-------------------------------------------------
Line 3945: !!!!!!!!!! cellID.choice(%d) is wrong choice !!!!!!!!!!
Line 3950: >>-------------------------------------------------
Line 3981: <<-------------------------------------------------
Line 3982: | ++ GNSS_ReferenceTimeForCells [%d]
Line 3992: | referenceTimeUnc(%d)
Line 3999: | bsAlign(%d)
Line 4003: >>-------------------------------------------------
Line 4032: <<-------------------------------------------------
Line 4033: | ++ GNSS_ReferenceTime
Line 4044: | referenceTimeUnc(%d)
Line 4053: >>-------------------------------------------------
Line 4077: <<-------------------------------------------------
Line 4078: | ++ GNSS_ReferenceLocation
Line 4089: | latitudeSign(%d)
Line 4093: | degreesLatitude(%d)
Line 4097: | degreesLongitude(%d)
Line 4108: | altitudeDirection(%d)
Line 4112: | altitude(%d)
Line 4116: | uncertaintySemiMajor(%d)
Line 4120: | uncertaintySemiMinor(%d)
Line 4124: | orientationMajorAxis(%d)
Line 4128: | uncertaintyAltitude(%d)
Line 4132: | confidence(%d)
Line 4134: >>-------------------------------------------------
Line 4158: <<-------------------------------------------------
Line 4159: | ++ GNSS_IonosphericModel
Line 4167: | dataID(0x%02x)
Line 4171: | alfa0(%d)
Line 4175: | alfa1(%d)
Line 4179: | alfa2(%d)
Line 4183: | alfa3(%d)
Line 4187: | beta0(%d)
Line 4191: | beta1(%d)
Line 4195: | beta2(%d)
Line 4199: | beta3(%d)
Line 4207: | ai0(%d)
Line 4211: | ai1(%d)
Line 4215: | ai2(%d)
Line 4221: | ionoStormFlag1(%d)
Line 4228: | ionoStormFlag2(%d)
Line 4235: | ionoStormFlag3(%d)
Line 4242: | ionoStormFlag4(%d)
Line 4249: | ionoStormFlag5(%d)
Line 4253: >>-------------------------------------------------
Line 4277: <<-------------------------------------------------
Line 4278: | ++ GNSS_CommonAssistData
Line 4303: <<-------------------------------------------------
Line 4304: | ++ GNSS_EarthOrientationParameters
Line 4308: | teop(%d)
Line 4312: | pmX(%d)
Line 4316: | pmXdot(%d)
Line 4320: | pmY(%d)
Line 4324: | pmYdot(%d)
Line 4328: | deltaUT1(%d)
Line 4332: | deltaUT1dot(%d)
Line 4333: >>-------------------------------------------------
Line 4336: >>-------------------------------------------------
Line 4364: | gnss_TimeModelRefTime(%d)
Line 4368: | tA0(%d)
Line 4374: | tA1(%d)
Line 4381: | tA2(%d)
Line 4391: | weekNumber(%d)
Line 4398: | deltaT(%d)
Line 4427: <<-------------------------------------------------
Line 4428: | ++ GNSS_DifferentialCorrections
Line 4446: LPP_ConvertGNSS_DifferentialCorrections() - MALLOC FAIL!!!
Line 4457: <<-------------------------------------------------
Line 4458: | ++ DGNSS-SgnTypeList [%d]
Line 4463: | gnss_SignalID(%d)
Line 4469: | gnss_StatusHealth(%d)
Line 4484: LPP_ConvertGNSS_DifferentialCorrections() - MALLOC FAIL!!!
Line 4493: <<-------------------------------------------------
Line 4494: | ++ DGNSS-SatList [%d]
Line 4500: | svID(%d)
Line 4506: | iod(0x%02x %02x)
Line 4512: | udre(%d)
Line 4517: | pseudoRangeCor(%d)
Line 4522: | rangeRateCor(%d)
Line 4529: | udreGrowthRate(%d)
Line 4537: | udreValidityTime(%d)
Line 4540: >>-------------------------------------------------
Line 4545: >>-------------------------------------------------
Line 4550: >>-------------------------------------------------
Line 4577: <<-------------------------------------------------
Line 4578: | ++ GNSS_ClockModel
Line 4589: <<-------------------------------------------------
Line 4590: | ++ StandardClockModelList [%d]
Line 4596: | stanClockToc(%d)
Line 4601: | stanClockAF2(%d)
Line 4606: | stanClockAF1(%d)
Line 4611: | stanClockAF0(%d)
Line 4618: | stanClockTgd(%d)
Line 4624: | sisa(%d)
Line 4631: | stanModelID(%d)
Line 4634: >>-------------------------------------------------
Line 4641: <<-------------------------------------------------
Line 4642: | ++ NAV_ClockModel
Line 4646: | navToc(%d)
Line 4650: | navaf2(%d)
Line 4654: | navaf1(%d)
Line 4658: | navaf0(%d)
Line 4662: | navTgd(%d)
Line 4663: >>-------------------------------------------------
Line 4667: <<-------------------------------------------------
Line 4668: | ++ CNAV_ClockModel
Line 4672: | cnavToc(%d)
Line 4676: | cnavTop(%d)
Line 4680: | cnavURA0(%d)
Line 4684: | cnavURA1(%d)
Line 4688: | cnavURA2(%d)
Line 4692: | cnavAf2(%d)
Line 4696: | cnavAf1(%d)
Line 4700: | cnavAf0(%d)
Line 4704: | cnavTgd(%d)
Line 4710: | cnavISCl1cp(%d)
Line 4716: | cnavISCl1cd(%d)
Line 4722: | cnavISCl1ca(%d)
Line 4728: | cnavISCl2c(%d)
Line 4734: | cnavISCl5i5(%d)
Line 4740: | cnavISCl5q5(%d)
Line 4742: >>-------------------------------------------------
Line 4746: <<-------------------------------------------------
Line 4747: | ++ GLONASS_ClockModel
Line 4751: | gloTau(%d)
Line 4755: | gloGamma(%d)
Line 4761: | gloDeltaTau(%d)
Line 4763: >>-------------------------------------------------
Line 4766: <<-------------------------------------------------
Line 4767: | ++ SBAS_ClockModel
Line 4771: | sbasTo(%d)
Line 4775: | sbasAgfo(%d)
Line 4779: | sbasAgf1(%d)
Line 4780: >>-------------------------------------------------
Line 4783: <<-------------------------------------------------
Line 4784: | ++ BDS_ClockModel_r12
Line 4788: | bdsAODC_r12(%d)
Line 4792: | bdsToc_r12(%d)
Line 4796: | bdsA0_r12(%d)
Line 4800: | bdsA1_r12(%d)
Line 4804: | bdsA2_r12(%d)
Line 4808: | bdsTgd1_r12(%d)
Line 4809: >>-------------------------------------------------
Line 4812: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 4817: >>-------------------------------------------------
Line 4841: <<-------------------------------------------------
Line 4842: | ++ NavModelKeplerianSet
Line 4846: | keplerToe(%d)
Line 4850: | keplerW(%d)
Line 4854: | keplerDeltaN(%d)
Line 4858: | keplerM0(%d)
Line 4862: | keplerOmegaDot(%d)
Line 4866: | keplerE(%d)
Line 4870: | keplerIDot(%d)
Line 4874: | keplerAPowerHalf(%d)
Line 4878: | keplerI0(%d)
Line 4882: | keplerOmega0(%d)
Line 4886: | keplerCrs(%d)
Line 4890: | keplerCis(%d)
Line 4894: | keplerCus(%d)
Line 4898: | keplerCrc(%d)
Line 4902: | keplerCic(%d)
Line 4906: | keplerCuc(%d)
Line 4907: >>-------------------------------------------------
Line 4931: <<-------------------------------------------------
Line 4932: | ++ NavModelNAV_KeplerianSet
Line 4938: | navURA(%d)
Line 4942: | navFitFlag(%d)
Line 4946: | navToe(%d)
Line 4950: | navOmega(%d)
Line 4954: | navDeltaN(%d)
Line 4958: | navM0(%d)
Line 4962: | navOmegaADot(%d)
Line 4966: | navE(%d)
Line 4970: | navIDot(%d)
Line 4974: | navAPowerHalf(%d)
Line 4978: | navI0(%d)
Line 4982: | navOmegaA0(%d)
Line 4986: | navCrs(%d)
Line 4990: | navCis(%d)
Line 4994: | navCus(%d)
Line 4998: | navCrc(%d)
Line 5002: | navCic(%d)
Line 5006: | navCuc(%d)
Line 5011: | LPP_addNAVparam_present
Line 5015: | ephemCodeOnL2(%d)
Line 5019: | ephemL2Pflag(%d)
Line 5024: | ephemSF1Rsvd.reserved1(%d)
Line 5028: | ephemSF1Rsvd.reserved2(%d)
Line 5032: | ephemSF1Rsvd.reserved3(%d)
Line 5036: | ephemSF1Rsvd.reserved4(%d)
Line 5040: | ephemAODA(%d)
Line 5042: >>-------------------------------------------------
Line 5068: <<-------------------------------------------------
Line 5069: | ++ NavModelCNAV_KeplerianSet
Line 5073: | cnavTop(%d)
Line 5077: | cnavURAindex(%d)
Line 5081: | cnavDeltaA(%d)
Line 5085: | cnavAdot(%d)
Line 5089: | cnavDeltaNo(%d)
Line 5093: | cnavDeltaNoDot(%d)
Line 5102: | cnavMo(%ld)
Line 5111: | cnavE(%ld)
Line 5120: | cnavOmega(%ld)
Line 5129: | cnavOMEGA0(%ld)
Line 5133: | cnavDeltaOmegaDot(%d)
Line 5142: | cnavIo(%ld)
Line 5146: | cnavIoDot(%d)
Line 5150: | cnavCis(%d)
Line 5154: | cnavCic(%d)
Line 5158: | cnavCrs(%d)
Line 5162: | cnavCrc(%d)
Line 5166: | cnavCus(%d)
Line 5170: | cnavCuc(%d)
Line 5171: >>-------------------------------------------------
Line 5195: <<-------------------------------------------------
Line 5196: | ++ NavModel_GLONASS_ECEF
Line 5200: | gloEn(%d)
Line 5204: | gloP1(0x%02x)
Line 5208: | gloP2(%d)
Line 5212: | gloM(%d)
Line 5216: | gloX(%d)
Line 5220: | gloXdot(%d)
Line 5224: | gloXdotdot(%d)
Line 5228: | gloY(%d)
Line 5232: | gloYdot(%d)
Line 5236: | gloYdotdot(%d)
Line 5240: | gloZ(%d)
Line 5244: | gloZdot(%d)
Line 5248: | gloZdotdot(%d)
Line 5249: >>-------------------------------------------------
Line 5273: <<-------------------------------------------------
Line 5274: | ++ NavModel_SBAS_ECEF
Line 5282: | sbasTo(%d)
Line 5287: | sbasAccuracy(0x%02x)
Line 5291: | sbasXg(%d)
Line 5295: | sbasYg(%d)
Line 5299: | sbasZg(%d)
Line 5303: | sbasXgDot(%d)
Line 5307: | sbasYgDot(%d)
Line 5311: | sbasZgDot(%d)
Line 5315: | sbasXgDotDot(%d)
Line 5319: | sbagYgDotDot(%d)
Line 5323: | sbasZgDotDot(%d)
Line 5324: >>-------------------------------------------------
Line 5348: <<-------------------------------------------------
Line 5349: | ++ NavModel_BDS_KeplerianSet
Line 5353: | bdsAODE_r12(%d)
Line 5357: | bdsURAI_r12(%d)
Line 5361: | bdsToe_r12(%d)
Line 5365: | bdsAPowerHalf_r12(%d)
Line 5369: | bdsE_r12(%d)
Line 5373: | bdsW_r12(%d)
Line 5377: | bdsDeltaN_r12(%d)
Line 5381: | bdsM0_r12(%d)
Line 5385: | bdsOmega0_r12(%d)
Line 5389: | bdsOmegaDot_r12(%d)
Line 5393: | bdsI0_r12(%d)
Line 5397: | bdsIDot_r12(%d)
Line 5401: | bdsCuc_r12(%d)
Line 5405: | bdsCus_r12(%d)
Line 5409: | bdsCrc_r12(%d)
Line 5413: | bdsCrs_r12(%d)
Line 5417: | bdsCic_r12(%d)
Line 5421: | bdsCis_r12(%d)
Line 5422: >>-------------------------------------------------
Line 5449: <<-------------------------------------------------
Line 5450: | ++ GNSS_NavigationModel
Line 5454: | nonBroadcastIndFlag(%d)
Line 5467: LPP_ConvertGNSS_NavigationModel() - MALLOC FAIL!!!
Line 5476: <<-------------------------------------------------
Line 5477: | ++ GNSS_SatelliteList [%d]
Line 5483: | svID.satellite_id(%d)
Line 5487: | svHealth(0x%02x)
Line 5492: | iod(0x%02x %02x)
Line 5530: !!!!!!!!!! gnss_OrbitModel.choice(%d) is wrong choice !!!!!!!!!!
Line 5539: | svHealthExt(0x%02x)
Line 5541: >>-------------------------------------------------
Line 5546: >>-------------------------------------------------
Line 5573: <<-------------------------------------------------
Line 5574: | ++ GNSS_RealTimeIntegrity
Line 5581: <<-------------------------------------------------
Line 5582: | ++ GNSS_BadSignalList [%d]
Line 5588: | badSVID(%d)
Line 5596: >>-------------------------------------------------
Line 5602: >>-------------------------------------------------
Line 5630: <<-------------------------------------------------
Line 5631: | ++ GNSS_DataBitAssistance
Line 5637: | gnss_TOD(%d)
Line 5643: | gnss_TODfrac(%d)
Line 5659: LPP_ConvertGNSS_DataBitAssistance() - MALLOC FAIL!!!
Line 5670: <<-------------------------------------------------
Line 5671: | ++ GNSS_DataBitsSatList [%d]
Line 5675: | svID(%d)
Line 5689: LPP_ConvertGNSS_DataBitAssistance() - MALLOC FAIL!!!
Line 5700: <<-------------------------------------------------
Line 5701: | ++ GNSS_DataBitsSgnList [%d]
Line 5706: | gnss_SignalType(%d)
Line 5714: | gnss_DataBits(0x%02x %02x %02x %02x ...)
Line 5720: >>-------------------------------------------------
Line 5725: >>-------------------------------------------------
Line 5730: >>-------------------------------------------------
Line 5757: <<-------------------------------------------------
Line 5758: | ++ GNSS_AcquisitionAssistance
Line 5764: | gnss_SignalID(%d)
Line 5779: LPP_ConvertGNSS_AcquisitionAssistance() - MALLOC FAIL!!!
Line 5788: <<-------------------------------------------------
Line 5789: | ++ GNSS_AcquisitionAssistList [%d]
Line 5795: | svID(%d)
Line 5799: | doppler0(%d)
Line 5803: | doppler1(%d)
Line 5807: | dopplerUncertainty(%d)
Line 5811: | codePhase(%d)
Line 5815: | intCodePhase(%d)
Line 5819: | codePhaseSearchWindow(%d)
Line 5823: | azimuth(%d)
Line 5827: | elevation(%d)
Line 5833: | codePhase1023(%d)
Line 5865: | dopplerUncertaintyExt_r10(%d)
Line 5869: >>-------------------------------------------------
Line 5878: | confidence_r10(%d)
Line 5881: >>-------------------------------------------------
Line 5905: <<-------------------------------------------------
Line 5906: | ++ AlmanacKeplerianSet
Line 5912: | svID(%d)
Line 5916: | kepAlmanacE(%d)
Line 5920: | kepAlmanacDeltaI(%d)
Line 5924: | kepAlmanacOmegaDot(%d)
Line 5928: | kepSV_StatusINAV(%d)
Line 5934: | kepSV_StatusFNAV(0x%02x)
Line 5939: | kepAlmanacAPowerHalf(%d)
Line 5943: | kepAlmanacOmega0(%d)
Line 5947: | kepAlmanacW(%d)
Line 5951: | kepAlmanacM0(%d)
Line 5955: | kepAlmanacAF0(%d)
Line 5959: | kepAlmanacAF1(%d)
Line 5960: >>-------------------------------------------------
Line 5984: <<-------------------------------------------------
Line 5985: | ++ AlmanacNAV_KeplerianSet
Line 5989: | svID(%d)
Line 5993: | navAlmE(%d)
Line 5997: | navAlmDeltaI(%d)
Line 6001: | navAlmOMEGADOT(%d)
Line 6005: | navAlmSVHealth(%d)
Line 6009: | navAlmSqrtA(%d)
Line 6013: | navAlmOMEGAo(%d)
Line 6017: | navAlmOmega(%d)
Line 6021: | navAlmMo(%d)
Line 6025: | navAlmaf0(%d)
Line 6029: | navAlmaf1(%d)
Line 6030: >>-------------------------------------------------
Line 6054: <<-------------------------------------------------
Line 6055: | ++ AlmanacReducedKeplerianSet
Line 6059: | svID(%d)
Line 6063: | redAlmDeltaA(%d)
Line 6067: | redAlmOmega0(%d)
Line 6071: | redAlmPhi0(%d)
Line 6075: | redAlmL1Health(%d)
Line 6079: | redAlmL2Health(%d)
Line 6083: | redAlmL5Health(%d)
Line 6084: >>-------------------------------------------------
Line 6108: <<-------------------------------------------------
Line 6109: | ++ AlmanacMidiAlmanacSet
Line 6113: | svID(%d)
Line 6117: | midiAlmE(%d)
Line 6121: | midiAlmDeltaI(%d)
Line 6125: | midiAlmOmegaDot(%d)
Line 6129: | midiAlmSqrtA(%d)
Line 6133: | midiAlmOmega0(%d)
Line 6137: | midiAlmOmega(%d)
Line 6141: | midiAlmMo(%d)
Line 6145: | midiAlmaf0(%d)
Line 6149: | midiAlmaf1(%d)
Line 6153: | midiAlmL1Health(%d)
Line 6157: | midiAlmL2Health(%d)
Line 6161: | midiAlmL5Health(%d)
Line 6162: >>-------------------------------------------------
Line 6186: <<-------------------------------------------------
Line 6187: | ++ AlmanacGLONASS_AlmanacSet
Line 6193: | gloAlm_NA(%d)
Line 6197: | gloAlmnA(%d)
Line 6201: | gloAlmHA(%d)
Line 6205: | gloAlmLambdaA(%d)
Line 6209: | gloAlmtlambdaA(%d)
Line 6213: | gloAlmDeltaIa(%d)
Line 6217: | gloAlmDeltaTA(%d)
Line 6221: | gloAlmDeltaTdotA(%d)
Line 6225: | gloAlmEpsilonA(%d)
Line 6229: | gloAlmOmegaA(%d)
Line 6233: | gloAlmTauA(%d)
Line 6237: | gloAlmCA(%d)
Line 6243: | gloAlmMA(0x%02x)
Line 6245: >>-------------------------------------------------
Line 6269: <<-------------------------------------------------
Line 6270: | ++ AlmanacECEF_SBAS_AlmanacSet
Line 6274: | sbasAlmDataID(%d)
Line 6278: | svID(%d)
Line 6282: | sbasAlmHealth(0x%02x)
Line 6286: | sbasAlmXg(%d)
Line 6290: | sbasAlmYg(%d)
Line 6294: | sbasAlmZg(%d)
Line 6298: | sbasAlmXgdot(%d)
Line 6302: | sbasAlmYgDot(%d)
Line 6306: | sbasAlmZgDot(%d)
Line 6310: | sbasAlmTo(%d)
Line 6311: >>-------------------------------------------------
Line 6335: <<-------------------------------------------------
Line 6336: | ++ AlmanacBDS_AlmanacSet_r12
Line 6342: | svID(%d)
Line 6348: | bdsAlmToa_r12(0x%02x)
Line 6353: | bdsAlmSqrtA_r12(%d)
Line 6357: | bdsAlmE_r12(%d)
Line 6361: | bdsAlmW_r12(%d)
Line 6365: | bdsAlmM0_r12(%d)
Line 6369: | bdsAlmOmega0_r12(%d)
Line 6373: | bdsAlmOmegaDot_r12(%d)
Line 6377: | bdsAlmDeltaI_r12(%d)
Line 6381: | bdsAlmA0_r12(%d)
Line 6385: | bdsAlmA1_r12(%d)
Line 6392: | bdsSvHealth_r12(0x%02x %02x)
Line 6396: >>-------------------------------------------------
Line 6423: <<-------------------------------------------------
Line 6424: | ++ GNSS_Almanac
Line 6432: | weekNumber(%d)
Line 6439: | toa(%d)
Line 6446: | ioda(%d)
Line 6453: | ioda(%d)
Line 6460: | ioda(%d)
Line 6479: LPP_ConvertGNSS_Almanac() - MALLOC FAIL!!!
Line 6488: <<-------------------------------------------------
Line 6489: | ++ GNSS_AlmanacList [%d]
Line 6531: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 6535: >>-------------------------------------------------
Line 6540: >>-------------------------------------------------
Line 6564: <<-------------------------------------------------
Line 6565: | ++ GNSS_UTC_Model
Line 6576: | gnss_Utc_A1(%d)
Line 6580: | gnss_Utc_A0(%d)
Line 6584: | gnss_Utc_Tot(%d)
Line 6588: | gnss_Utc_WNt(%d)
Line 6592: | gnss_Utc_DeltaTls(%d)
Line 6596: | gnss_Utc_WNlsf(%d)
Line 6600: | gnss_Utc_DN(%d)
Line 6604: | gnss_Utc_DeltaTlsf(%d)
Line 6612: | utcA0(%d)
Line 6616: | utcA1(%d)
Line 6620: | utcA2(%d)
Line 6624: | utcDeltaTls(%d)
Line 6628: | utcTot(%d)
Line 6632: | utcWNot(%d)
Line 6636: | utcWNlsf(%d)
Line 6641: | utcDN(0x%02x)
Line 6645: | utcDeltaTlsf(%d)
Line 6654: | nA(%d)
Line 6658: | tauC(%d)
Line 6664: | b1(%d)
Line 6671: | b2(%d)
Line 6678: | kp(0x%02x)
Line 6686: | utcA1wnt(%d)
Line 6690: | utcA0wnt(%d)
Line 6694: | utcTot(%d)
Line 6698: | utcWNt(%d)
Line 6702: | utcDeltaTls(%d)
Line 6706: | utcWNlsf(%d)
Line 6710: | utcDN(%d)
Line 6714: | utcDeltaTlsf(%d)
Line 6718: | utcStandardID(%d)
Line 6726: | utcA0_r12(%d)
Line 6730: | utcA1_r12(%d)
Line 6734: | utcDeltaTls_r12(%d)
Line 6738: | utcWNlsf_r12(%d)
Line 6742: | utcDN_r12(%d)
Line 6746: | utcDeltaTlsf_r12(%d)
Line 6750: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 6755: >>-------------------------------------------------
Line 6783: <<-------------------------------------------------
Line 6784: | ++ GNSS_AuxiliaryInformation
Line 6797: <<-------------------------------------------------
Line 6798: | ++ GNSS_ID_GPS [%d]
Line 6802: | svID(%d)
Line 6808: >>-------------------------------------------------
Line 6821: <<-------------------------------------------------
Line 6822: | ++ GNSS_ID_GLONASS [%d]
Line 6828: | svID(%d)
Line 6838: | channelNumber(%d)
Line 6840: >>-------------------------------------------------
Line 6847: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 6852: >>-------------------------------------------------
Line 6880: <<-------------------------------------------------
Line 6881: | ++ BDS_DifferentialCorrections_r12
Line 6885: | dbds_RefTime_r12(%d)
Line 6894: <<-------------------------------------------------
Line 6895: | ++ BDS_SgnTypeList_r12 [%d]
Line 6903: | gnss_SignalID(%d)
Line 6913: <<-------------------------------------------------
Line 6914: | ++ DBDS_CorrectionList_r12 [%d]
Line 6918: | svID(%d)
Line 6922: | bds_UDREI_r12(%d)
Line 6926: | bds_RURAI_r12(%d)
Line 6930: | bds_ECC_DeltaT_r12(%d)
Line 6932: >>-------------------------------------------------
Line 6938: >>-------------------------------------------------
Line 6944: >>-------------------------------------------------
Line 6971: <<-------------------------------------------------
Line 6972: | ++ BDS_GridModelParameter_r12
Line 6976: | bds_RefTime_r12(%d)
Line 6985: <<-------------------------------------------------
Line 6986: | ++ GridIonList_r12 [%d]
Line 6990: | igp_ID_r12(%d)
Line 6994: | dt_r12(%d)
Line 6998: | givei_r12(%d)
Line 7000: >>-------------------------------------------------
Line 7006: >>-------------------------------------------------
Line 7088: <<-------------------------------------------------
Line 7089: | ++ GNSS_GenericAssistData [%d]
Line 7116: | sbas_ID(%d)
Line 7128: <<-------------------------------------------------
Line 7129: | ++ GNSS_TimeModels [%d]
Line 7134: >>-------------------------------------------------
Line 7211: >>-------------------------------------------------
Line 7239: <<-------------------------------------------------
Line 7240: | ++ ECGI
Line 7243: | MCC
Line 7247: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 7248: >>-------------------------------------------------
Line 7253: | MNC
Line 7257: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 7258: >>-------------------------------------------------
Line 7267: | cellIdentity.value(0x%02x %02x %02x %02x)
Line 7271: | cellIdentity.length(%d)
Line 7272: >>-------------------------------------------------
Line 7295: <<-------------------------------------------------
Line 7296: | ++ ECGI
Line 7303: !!!!!!!!!! FAIL to copy MCC !!!!!!!!!!
Line 7304: >>-------------------------------------------------
Line 7307: | MCC (%d %d %d)
Line 7314: !!!!!!!!!! FAIL to copy MNC !!!!!!!!!!
Line 7315: >>-------------------------------------------------
Line 7318: | MNC (%d %d %d)
Line 7324: | cellidentity.value(0x%02x %02x %02x %02x)
Line 7330: | cellIdentity.length(%d)
Line 7333: >>-------------------------------------------------
Line 7353: <<-------------------------------------------------
Line 7354: | ++ PRS_Info
Line 7357: | bit_mask(0x%02x)
Line 7360: | prs_Bandwidth(%d)
Line 7363: | prs_ConfigurationIndex(%d)
Line 7366: | numDL_Frames(%d)
Line 7371: | prs_MutingInfo_r9.choice(%d)
Line 7379: | prs_MutingInfo_r9.u.po2_r9.value(0x%02x)
Line 7387: | prs_MutingInfo_r9.u.po4_r9.value(0x%02x)
Line 7395: | prs_MutingInfo_r9.u.po8_r9.value(0x%02x)
Line 7404: | prs_MutingInfo_r9.u.po16_r9.value(0x%02x %02x)
Line 7413: >>-------------------------------------------------
Line 7439: <<-------------------------------------------------
Line 7440: | ++ OTDOA_ProvideAssistanceData
Line 7443: | bit_mask(0x%02x)
Line 7447: <<-------------------------------------------------
Line 7448: | ++ OTDOA_ReferenceCellInfo
Line 7451: | bit_mask(0x%02x)
Line 7455: | physCellId(%d)
Line 7465: !!!!!!!!!! FAIL to copy ECGI !!!!!!!!!!
Line 7466: >>-------------------------------------------------
Line 7467: >>-------------------------------------------------
Line 7477: | earfcnRef(%d)
Line 7483: | earfcnRef_v9a0(%d)
Line 7491: | antennaPortConfig(%d)
Line 7496: | cpLength(%d)
Line 7504: >>-------------------------------------------------
Line 7520: <<-------------------------------------------------
Line 7521: | ++ otdoa_NeighbourCellInfo
Line 7527: LPP_CopyOTDOA_AssistanceData() - MALLOC FAIL!!!
Line 7528: >>-------------------------------------------------
Line 7529: >>-------------------------------------------------
Line 7541: <<-------------------------------------------------
Line 7542: | ++ otdoa_NeighbourCellFreqInfo
Line 7548: LPP_CopyOTDOA_AssistanceData() - MALLOC FAIL!!!
Line 7549: >>-------------------------------------------------
Line 7550: >>-------------------------------------------------
Line 7551: >>-------------------------------------------------
Line 7566: | bit_mask(0x%02x)
Line 7570: | physCellId(%d)
Line 7579: !!!!!!!!!! FAIL to copy ECGI !!!!!!!!!!
Line 7580: >>-------------------------------------------------
Line 7581: >>-------------------------------------------------
Line 7582: >>-------------------------------------------------
Line 7602: | earfcn(%d)
Line 7609: | earfcn_v9a0(%d)
Line 7618: | cpLength(%d)
Line 7636: | antennaPortConfig(%d)
Line 7646: | slotNumberOffset(%d)
Line 7656: | prs_SubframeOffset(%d)
Line 7663: | expectedRSTD(%d)
Line 7669: | expectedRSTD_Uncertainty(%d)
Line 7672: >>-------------------------------------------------
Line 7679: >>-------------------------------------------------
Line 7689: <<-------------------------------------------------
Line 7690: | ++ otdoa_Error
Line 7693: | choice(%d)
Line 7699: | locationServerErrorCauses.cause(%d)
Line 7705: | targetDeviceErrorCauses.cause(%d)
Line 7712: >>-------------------------------------------------
Line 7715: >>-------------------------------------------------
Line 7739: <<-------------------------------------------------
Line 7740: | ++ PeriodicalReportingCriteria
Line 7763: | reportingAmount(%d)
Line 7782: | reportingInterval(%d)
Line 7784: >>-------------------------------------------------
Line 7802: <<-------------------------------------------------
Line 7803: | ++ QoS
Line 7811: | horizontalAccuracy.accuracy(%d)
Line 7813: | horizontalAccuracy.confidence(%d)
Line 7818: | verticalCoordinateRequest(%d)
Line 7824: | verticalAccuracy.accuracy(%d)
Line 7826: | verticalAccuracy.confidence(%d)
Line 7833: | responseTime.time(%d)
Line 7838: | velocityRequest(%d)
Line 7841: >>-------------------------------------------------
Line 7865: <<-------------------------------------------------
Line 7866: | ++ CommonIEsRequestLocationInformation
Line 7879: | locationInformationType(%d)
Line 7884: <<-------------------------------------------------
Line 7885: | ++ TriggeredReportingCriteria
Line 7889: | cellChange(%d)
Line 7892: | reportingDuration(%d)
Line 7894: >>-------------------------------------------------
Line 7910: | additionalInformation(%d)
Line 7928: | environment(%d)
Line 7934: <<-------------------------------------------------
Line 7935: | ++ LocationCoordinateTypes
Line 7940: | ellipsoidPoint(%d)
Line 7946: | ellipsoidPointWithUncertaintyCircle(%d)
Line 7952: | ellipsoidPointWithUncertaintyEllipse(%d)
Line 7958: | polygon(%d)
Line 7964: | ellipsoidPointWithAltitude(%d)
Line 7970: | ellipsoidPointWithAltitudeAndUncertaintyEllipsoid(%d)
Line 7976: | ellipsoidArc(%d)
Line 7979: >>-------------------------------------------------
Line 7985: <<-------------------------------------------------
Line 7986: | ++ VelocityTypes
Line 7991: | horizontalVelocity(%d)
Line 7997: | horizontalWithVerticalVelocity(%d)
Line 8003: | horizontalVelocityWithUncertainty(%d)
Line 8009: | horizontalWithVerticalVelocityAndUncertainty(%d)
Line 8012: >>-------------------------------------------------
Line 8015: >>-------------------------------------------------
Line 8033: <<-------------------------------------------------
Line 8034: | ++ GNSS_ID
Line 8061: | gnssID(%d)
Line 8062: >>-------------------------------------------------
Line 8080: <<-------------------------------------------------
Line 8081: | ++ GNSS_ID
Line 8112: | gnss_id(%d)
Line 8113: >>-------------------------------------------------
Line 8137: <<-------------------------------------------------
Line 8138: | ++ GNSS_ID_Bitmap
Line 8171: | gnss_ids(0x%02x %02x)
Line 8172: >>-------------------------------------------------
Line 8196: <<-------------------------------------------------
Line 8197: | ++ GNSS_ID_Bitmap
Line 8208: LPP_ConvertGNSS_ID_BitmapToASN() - MALLOC FAIL!!!
Line 8209: >>-------------------------------------------------
Line 8238: | gnss_ids.value(0x%02x %02x)
Line 8239: | gnss_ids.length(%d)
Line 8240: >>-------------------------------------------------
Line 8266: <<-------------------------------------------------
Line 8267: | ++ A_GNSS_RequestLocationInformation
Line 8269: <<-------------------------------------------------
Line 8270: | ++ GNSS_PositioningInstructions
Line 8276: | fineTimeAssistanceMeasReq(%d)
Line 8281: | adrMeasReq(%d)
Line 8286: | multiFreqMeasReq(%d)
Line 8291: | assistanceAvailability(%d)
Line 8295: >>-------------------------------------------------
Line 8297: >>-------------------------------------------------
Line 8321: <<-------------------------------------------------
Line 8322: | ++ Ellipsoid_Point
Line 8329: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8331: >>-------------------------------------------------
Line 8334: | latitudeSign(%d)
Line 8339: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8341: >>-------------------------------------------------
Line 8345: | degreesLatitude(%d)
Line 8350: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8352: >>-------------------------------------------------
Line 8356: | degreesLongitude(%d)
Line 8357: >>-------------------------------------------------
Line 8383: <<-------------------------------------------------
Line 8384: | ++ Ellipsoid_PointWithUncertaintyCircle
Line 8391: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8393: >>-------------------------------------------------
Line 8396: | latitudeSign(%d)
Line 8401: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8403: >>-------------------------------------------------
Line 8407: | degreesLatitude(%d)
Line 8412: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8414: >>-------------------------------------------------
Line 8418: | degreesLongitude(%d)
Line 8423: !!!!!!!!!! uncertainty(%d) is out of range !!!!!!!!!!
Line 8425: >>-------------------------------------------------
Line 8429: | uncertainty(%d)
Line 8430: >>-------------------------------------------------
Line 8456: <<-------------------------------------------------
Line 8457: | ++ EllipsoidPointWithUncertaintyEllipse
Line 8464: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8466: >>-------------------------------------------------
Line 8469: | latitudeSign(%d)
Line 8474: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8476: >>-------------------------------------------------
Line 8480: | degreesLatitude(%d)
Line 8485: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8487: >>-------------------------------------------------
Line 8491: | degreesLongitude(%d)
Line 8496: !!!!!!!!!! uncertaintySemiMajor(%d) is out of range !!!!!!!!!!
Line 8498: >>-------------------------------------------------
Line 8502: | uncertaintySemiMajor(%d)
Line 8507: !!!!!!!!!! uncertaintySemiMinor(%d) is out of range !!!!!!!!!!
Line 8509: >>-------------------------------------------------
Line 8513: | uncertaintySemiMinor(%d)
Line 8518: !!!!!!!!!! orientationMajorAxis(%d) is out of range !!!!!!!!!!
Line 8520: >>-------------------------------------------------
Line 8524: | orientationMajorAxis(%d)
Line 8529: !!!!!!!!!! confidence(%d) is out of range !!!!!!!!!!
Line 8531: >>-------------------------------------------------
Line 8535: | confidence(%d)
Line 8536: >>-------------------------------------------------
Line 8569: <<-------------------------------------------------
Line 8570: | ++ Polygon [%d]
Line 8575: LPP_ConvertPolygon() - MALLOC FAIL!!!
Line 8576: >>-------------------------------------------------
Line 8587: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8589: >>-------------------------------------------------
Line 8594: | latitudeSign(%d)
Line 8599: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8601: >>-------------------------------------------------
Line 8607: | degreesLatitude(%d)
Line 8612: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8614: >>-------------------------------------------------
Line 8620: | degreesLongitude(%d)
Line 8621: >>-------------------------------------------------
Line 8650: <<-------------------------------------------------
Line 8651: | ++ EllipsoidPointWithAltitude
Line 8658: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8660: >>-------------------------------------------------
Line 8663: | latitudeSign(%d)
Line 8668: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8670: >>-------------------------------------------------
Line 8674: | degreesLatitude(%d)
Line 8679: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8681: >>-------------------------------------------------
Line 8685: | degreesLongitude(%d)
Line 8692: !!!!!!!!!! altitudeDirection(%d) is out of range !!!!!!!!!!
Line 8694: >>-------------------------------------------------
Line 8697: | altitudeDirection(%d)
Line 8702: !!!!!!!!!! altitude(%d) is out of range !!!!!!!!!!
Line 8704: >>-------------------------------------------------
Line 8708: | altitude(%d)
Line 8709: >>-------------------------------------------------
Line 8735: <<-------------------------------------------------
Line 8736: | ++ EllipsoidPointWithAltitudeAndUncertaintyEllipsoid
Line 8743: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8745: >>-------------------------------------------------
Line 8748: | latitudeSign(%d)
Line 8753: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8755: >>-------------------------------------------------
Line 8759: | degreesLatitude(%d)
Line 8764: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8766: >>-------------------------------------------------
Line 8770: | degreesLongitude(%d)
Line 8777: !!!!!!!!!! altitudeDirection(%d) is out of range !!!!!!!!!!
Line 8779: >>-------------------------------------------------
Line 8782: | altitudeDirection(%d)
Line 8787: !!!!!!!!!! altitude(%d) is out of range !!!!!!!!!!
Line 8789: >>-------------------------------------------------
Line 8793: | altitude(%d)
Line 8798: !!!!!!!!!! uncertaintySemiMajor(%d) is out of range !!!!!!!!!!
Line 8800: >>-------------------------------------------------
Line 8804: | uncertaintySemiMajor(%d)
Line 8809: !!!!!!!!!! uncertaintySemiMinor(%d) is out of range !!!!!!!!!!
Line 8811: >>-------------------------------------------------
Line 8815: | uncertaintySemiMinor(%d)
Line 8820: !!!!!!!!!! orientationMajorAxis(%d) is out of range !!!!!!!!!!
Line 8822: >>-------------------------------------------------
Line 8826: | orientationMajorAxis(%d)
Line 8831: !!!!!!!!!! uncertaintyAltitude(%d) is out of range !!!!!!!!!!
Line 8833: >>-------------------------------------------------
Line 8837: | uncertaintyAltitude(%d)
Line 8842: !!!!!!!!!! confidence(%d) is out of range !!!!!!!!!!
Line 8844: >>-------------------------------------------------
Line 8848: | confidence(%d)
Line 8850: >>-------------------------------------------------
Line 8876: <<-------------------------------------------------
Line 8877: | ++ EllipsoidArc
Line 8884: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8886: >>-------------------------------------------------
Line 8889: | latitudeSign(%d)
Line 8894: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8896: >>-------------------------------------------------
Line 8900: | degreesLatitude(%d)
Line 8905: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8907: >>-------------------------------------------------
Line 8911: | degreesLongitude(%d)
Line 8924: | innerRadius(%d)
Line 8929: !!!!!!!!!! uncertaintyRadius(%d) is out of range !!!!!!!!!!
Line 8931: >>-------------------------------------------------
Line 8935: | uncertaintyRadius(%d)
Line 8940: !!!!!!!!!! offsetAngle(%d) is out of range !!!!!!!!!!
Line 8942: >>-------------------------------------------------
Line 8946: | offsetAngle(%d)
Line 8951: !!!!!!!!!! includedAngle(%d) is out of range !!!!!!!!!!
Line 8953: >>-------------------------------------------------
Line 8957: | includedAngle(%d)
Line 8962: !!!!!!!!!! confidence(%d) is out of range !!!!!!!!!!
Line 8964: >>-------------------------------------------------
Line 8968: | confidence(%d)
Line 8970: >>-------------------------------------------------
Line 8998: <<-------------------------------------------------
Line 8999: | ++ LocationCoordinates
Line 9023: LPP_ConvertLocationCoordinates() - numberOfPolygonPoints is ZERO!!!
Line 9024: >>-------------------------------------------------
Line 9047: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 9052: >>-------------------------------------------------
Line 9078: <<-------------------------------------------------
Line 9079: | ++ HorizontalVelocity
Line 9084: !!!!!!!!!! bearing(%d) is out of range !!!!!!!!!!
Line 9086: >>-------------------------------------------------
Line 9090: | bearing(%d)
Line 9095: !!!!!!!!!! horizontalSpeed(%d) is out of range !!!!!!!!!!
Line 9097: >>-------------------------------------------------
Line 9101: | horizontalSpeed(%d)
Line 9103: >>-------------------------------------------------
Line 9129: <<-------------------------------------------------
Line 9130: | ++ HorizontalWithVerticalVelocity
Line 9135: !!!!!!!!!! bearing(%d) is out of range !!!!!!!!!!
Line 9137: >>-------------------------------------------------
Line 9141: | bearing(%d)
Line 9146: !!!!!!!!!! horizontalSpeed(%d) is out of range !!!!!!!!!!
Line 9148: >>-------------------------------------------------
Line 9152: | horizontalSpeed(%d)
Line 9159: !!!!!!!!!! verticalDirection(%d) is out of range !!!!!!!!!!
Line 9161: >>-------------------------------------------------
Line 9164: | verticalDirection(%d)
Line 9177: | verticalSpeed(%d)
Line 9178: >>-------------------------------------------------
Line 9204: <<-------------------------------------------------
Line 9205: | ++ HorizontalVelocityWithUncertainty
Line 9210: !!!!!!!!!! bearing(%d) is out of range !!!!!!!!!!
Line 9212: >>-------------------------------------------------
Line 9216: | bearing(%d)
Line 9221: !!!!!!!!!! horizontalSpeed(%d) is out of range !!!!!!!!!!
Line 9223: >>-------------------------------------------------
Line 9227: | horizontalSpeed(%d)
Line 9240: | uncertaintySpeed(%d)
Line 9241: >>-------------------------------------------------
Line 9267: <<-------------------------------------------------
Line 9268: | ++ HorizontalWithVerticalVelocityAndUncertainty
Line 9273: !!!!!!!!!! bearing(%d) is out of range !!!!!!!!!!
Line 9275: >>-------------------------------------------------
Line 9279: | bearing(%d)
Line 9284: !!!!!!!!!! horizontalSpeed(%d) is out of range !!!!!!!!!!
Line 9286: >>-------------------------------------------------
Line 9290: | horizontalSpeed(%d)
Line 9297: !!!!!!!!!! verticalDirection(%d) is out of range !!!!!!!!!!
Line 9299: >>-------------------------------------------------
Line 9302: | verticalDirection(%d)
Line 9315: | verticalSpeed(%d)
Line 9328: | horizontalUncertaintySpeed(%d)
Line 9341: | verticalUncertaintySpeed(%d)
Line 9342: >>-------------------------------------------------
Line 9370: <<-------------------------------------------------
Line 9371: | ++ Velocity
Line 9397: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 9402: >>-------------------------------------------------
Line 9428: <<-------------------------------------------------
Line 9429: | ++ LocationError
Line 9437: >>-------------------------------------------------
Line 9463: <<-------------------------------------------------
Line 9464: | ++ CommonIEsProvideLocationInformation
Line 9475: >>-------------------------------------------------
Line 9486: >>-------------------------------------------------
Line 9497: >>-------------------------------------------------
Line 9523: <<-------------------------------------------------
Line 9524: | ++ CellGlobalIdEUTRA_AndUTRA
Line 9528: | MCC(%d %d %d)
Line 9532: | MNC(%d %d %d)
Line 9543: | cellIdentity.u.eutra(0x%02x %02x %02x %02x)
Line 9555: | pDst->cellIdentity.u.utra(0x%02x %02x %02x %02x)
Line 9562: !!!!!!!!!! cellIdentity.choice(%d) is wrong choice !!!!!!!!!!
Line 9567: >>-------------------------------------------------
Line 9593: <<-------------------------------------------------
Line 9594: | ++ CellGlobalIdEUTRA_AndUTRA
Line 9597: | plmn_Identity.mcc
Line 9601: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 9602: >>-------------------------------------------------
Line 9607: | plmn_Identity.mnc
Line 9611: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 9612: >>-------------------------------------------------
Line 9626: LPP_ConvertCellGlobalIdEUTRA_AndUTRA_ToASN() - MALLOC FAIL!!!
Line 9627: >>-------------------------------------------------
Line 9634: | cellIdentity.u.eutra.value(0x%02x %02x %02x %02x)
Line 9639: | cellIdentity.u.eutra.length(%d)
Line 9648: LPP_ConvertCellGlobalIdEUTRA_AndUTRA_ToASN() - MALLOC FAIL!!!
Line 9649: >>-------------------------------------------------
Line 9656: | cellIdentity.u.utra.value(0x%02x %02x %02x %02x)
Line 9661: | cellIdentity.u.eutra.length(%d)
Line 9665: !!!!!!!!!! cellIdentity.choice(%d) is wrong choice !!!!!!!!!!
Line 9670: >>-------------------------------------------------
Line 9698: <<-------------------------------------------------
Line 9699: | ++ CellGlobalIdGERAN
Line 9702: | plmn_Identity.mcc
Line 9706: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 9707: >>-------------------------------------------------
Line 9712: | plmn_Identity.mnc
Line 9716: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 9717: >>-------------------------------------------------
Line 9726: LPP_ConvertMeasurementReferenceTime() - MALLOC FAIL!!!
Line 9727: >>-------------------------------------------------
Line 9732: | locationAreaCode.value(0x%02x %02x)
Line 9735: | locationAreaCode.length(%d)
Line 9743: LPP_ConvertMeasurementReferenceTime() - MALLOC FAIL!!!
Line 9744: >>-------------------------------------------------
Line 9749: | cellIdentity.value(0x%02x %02x)
Line 9752: | cellIdentity.length(%d)
Line 9754: >>-------------------------------------------------
Line 9782: <<-------------------------------------------------
Line 9783: | ++ MeasurementReferenceTime
Line 9790: !!!!!!!!!! gnss_TOD_msec(%d) is out of range !!!!!!!!!!
Line 9792: >>-------------------------------------------------
Line 9796: | gnss_TOD_msec(%d)
Line 9803: !!!!!!!!!! gnss_TOD_frac(%d) is out of range !!!!!!!!!!
Line 9805: >>-------------------------------------------------
Line 9809: | gnss_TOD_frac(%d)
Line 9817: !!!!!!!!!! gnss_TOD_unc(%d) is out of range !!!!!!!!!!
Line 9819: >>-------------------------------------------------
Line 9823: | gnss_TOD_unc(%d)
Line 9836: <<-------------------------------------------------
Line 9837: | ++ EUTRA
Line 9844: !!!!!!!!!! gnss_TOD_unc(%d) is out of range !!!!!!!!!!
Line 9846: >>-------------------------------------------------
Line 9847: >>-------------------------------------------------
Line 9851: | physCellId(%d)
Line 9860: >>-------------------------------------------------
Line 9861: >>-------------------------------------------------
Line 9872: LPP_ConvertMeasurementReferenceTime() - MALLOC FAIL!!!
Line 9873: >>-------------------------------------------------
Line 9874: >>-------------------------------------------------
Line 9881: | systemFrameNumber.value(0x%02x %02x)
Line 9884: | systemFrameNumber.length(%d)
Line 9886: >>-------------------------------------------------
Line 9889: <<-------------------------------------------------
Line 9890: | ++ UTRA
Line 9902: !!!!!!!!!! fddPrimary_CPICH_Info(%d) is out of range !!!!!!!!!!
Line 9904: >>-------------------------------------------------
Line 9905: >>-------------------------------------------------
Line 9910: | primary_CPICH_Info(%d)
Line 9917: !!!!!!!!!! cellParameters(%d) is out of range !!!!!!!!!!
Line 9919: >>-------------------------------------------------
Line 9920: >>-------------------------------------------------
Line 9925: | cellParameters(%d)
Line 9929: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 9941: >>-------------------------------------------------
Line 9942: >>-------------------------------------------------
Line 9950: !!!!!!!!!! referenceSystemFrameNumber(%d) is out of range !!!!!!!!!!
Line 9952: >>-------------------------------------------------
Line 9953: >>-------------------------------------------------
Line 9958: | referenceSystemFrameNumber(%d)
Line 9960: >>-------------------------------------------------
Line 9963: <<-------------------------------------------------
Line 9964: | ++ GSM
Line 9971: !!!!!!!!!! bcchCarrier(%d) is out of range !!!!!!!!!!
Line 9973: >>-------------------------------------------------
Line 9974: >>-------------------------------------------------
Line 9978: | bcchCarrier(%d)
Line 9984: !!!!!!!!!! bsic(%d) is out of range !!!!!!!!!!
Line 9986: >>-------------------------------------------------
Line 9987: >>-------------------------------------------------
Line 9991: | bsic(%d)
Line 10000: >>-------------------------------------------------
Line 10001: >>-------------------------------------------------
Line 10020: | referenceFrame.referenceFN(%d)
Line 10028: !!!!!!!!!! referenceFrame.referenceFNMSB(%d) is out of range !!!!!!!!!!
Line 10030: >>-------------------------------------------------
Line 10031: >>-------------------------------------------------
Line 10035: | referenceFrame.referenceFNMSB(%d)
Line 10044: !!!!!!!!!! deltaGNSS_TOD(%d) is out of range !!!!!!!!!!
Line 10046: >>-------------------------------------------------
Line 10047: >>-------------------------------------------------
Line 10051: | deltaGNSS_TOD(%d)
Line 10054: >>-------------------------------------------------
Line 10057: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 10063: >>-------------------------------------------------
Line 10093: <<-------------------------------------------------
Line 10094: | ++ GNSS_SignalMeasurementInformation
Line 10099: >>-------------------------------------------------
Line 10105: LPP_ConvertGNSS_SignalMeasurementInformation() - numberOfGNSS_MeasurementList is ZERO!!!
Line 10106: >>-------------------------------------------------
Line 10116: <<-------------------------------------------------
Line 10117: | ++ GNSS_MeasurementList [%d]
Line 10122: LPP_ConvertGNSS_SignalMeasurementInformation() - MALLOC FAIL!!!
Line 10123: >>-------------------------------------------------
Line 10124: >>-------------------------------------------------
Line 10135: LPP_ConvertGNSS_SignalMeasurementInformation() - [%d].numberOfGNSS_SgnMeasList is ZERO!!!
Line 10136: >>-------------------------------------------------
Line 10137: >>-------------------------------------------------
Line 10150: <<-------------------------------------------------
Line 10151: | ++ GNSS_SgnMeasList[%d]
Line 10156: LPP_ConvertGNSS_SignalMeasurementInformation() - MALLOC FAIL!!!
Line 10157: >>-------------------------------------------------
Line 10158: >>-------------------------------------------------
Line 10159: >>-------------------------------------------------
Line 10176: | gnss_SignalID.gnss_SignalID(%d)
Line 10184: !!!!!!!!!! gnss_CodePhaseAmbiguity(%d) is out of range (0..127) !!!!!!!!!!
Line 10186: >>-------------------------------------------------
Line 10187: >>-------------------------------------------------
Line 10188: >>-------------------------------------------------
Line 10200: | gnss_CodePhaseAmbiguity(%d)
Line 10206: LPP_ConvertGNSS_SignalMeasurementInformation() - [%d].[%d].numberOfGNSS_SatMeasList is ZERO!!!
Line 10207: >>-------------------------------------------------
Line 10208: >>-------------------------------------------------
Line 10209: >>-------------------------------------------------
Line 10226: <<-------------------------------------------------
Line 10227: | ++ GNSS_SatMeasList[%d]
Line 10232: LPP_ConvertGNSS_SignalMeasurementInformation() - MALLOC FAIL!!!
Line 10233: >>-------------------------------------------------
Line 10234: >>-------------------------------------------------
Line 10235: >>-------------------------------------------------
Line 10236: >>-------------------------------------------------
Line 10259: | svID.satellite_id(%d)
Line 10264: !!!!!!!!!! cNo(%d) is out of range (0..63) !!!!!!!!!!
Line 10266: >>-------------------------------------------------
Line 10267: >>-------------------------------------------------
Line 10268: >>-------------------------------------------------
Line 10269: >>-------------------------------------------------
Line 10287: | cNo(%d)
Line 10310: | mpathDet(%d)
Line 10317: !!!!!!!!!! carrierQualityInd(%d) is out of range (0..3) !!!!!!!!!!
Line 10319: >>-------------------------------------------------
Line 10320: >>-------------------------------------------------
Line 10321: >>-------------------------------------------------
Line 10322: >>-------------------------------------------------
Line 10340: | carrierQualityInd(%d)
Line 10346: !!!!!!!!!! codePhase(%d) is out of range (0..2097151) !!!!!!!!!!
Line 10348: >>-------------------------------------------------
Line 10349: >>-------------------------------------------------
Line 10350: >>-------------------------------------------------
Line 10351: >>-------------------------------------------------
Line 10369: | codePhase(%d)
Line 10376: !!!!!!!!!! integerCodePhase(%d) is out of range (0..127) !!!!!!!!!!
Line 10378: >>-------------------------------------------------
Line 10379: >>-------------------------------------------------
Line 10380: >>-------------------------------------------------
Line 10381: >>-------------------------------------------------
Line 10399: | integerCodePhase(%d)
Line 10405: !!!!!!!!!! codePhaseRMSError(%d) is out of range (0..63) !!!!!!!!!!
Line 10407: >>-------------------------------------------------
Line 10408: >>-------------------------------------------------
Line 10409: >>-------------------------------------------------
Line 10410: >>-------------------------------------------------
Line 10428: | codePhaseRMSError(%d)
Line 10451: | doppler(%d)
Line 10459: !!!!!!!!!! adr(%d) is out of range (0..33554431) !!!!!!!!!!
Line 10461: >>-------------------------------------------------
Line 10462: >>-------------------------------------------------
Line 10463: >>-------------------------------------------------
Line 10464: >>-------------------------------------------------
Line 10482: | adr(%d)
Line 10485: >>-------------------------------------------------
Line 10491: >>-------------------------------------------------
Line 10497: >>-------------------------------------------------
Line 10503: >>-------------------------------------------------
Line 10531: <<-------------------------------------------------
Line 10532: | ++ GNSS_LocationInformation
Line 10538: >>-------------------------------------------------
Line 10546: >>-------------------------------------------------
Line 10550: >>-------------------------------------------------
Line 10774: <<-------------------------------------------------
Line 10775: | ++ A_GNSS_ProvideLocationInformation
Line 10792: >>-------------------------------------------------
Line 10811: >>-------------------------------------------------
Line 10836: | pSrc->gnss_Error.cause(0x%x)
Line 10839: >>-------------------------------------------------
Line 10868: <<-------------------------------------------------
Line 10869: | ++ GNSS_ReferenceTimeReq
Line 10878: <<-------------------------------------------------
Line 10879: | ++ gnss_TimeReqPrefList [%d]
Line 10884: LPP_ConvertGNSS_ReferenceTimeReq() - MALLOC FAIL!!!
Line 10885: >>-------------------------------------------------
Line 10886: >>-------------------------------------------------
Line 10894: >>-------------------------------------------------
Line 10903: | gps_TOW_assistReq(%d)
Line 10910: | notOfLeapSecReq(%d)
Line 10913: >>-------------------------------------------------
Line 10937: <<-------------------------------------------------
Line 10938: | ++ GNSS_SignalIDs
Line 10955: | gnss_SignalIDs(0x%02x)
Line 10956: >>-------------------------------------------------
Line 10980: <<-------------------------------------------------
Line 10981: | ++ GNSS_SignalIDs
Line 10993: LPP_ConvertGNSS_SignalIDsToASN() - MALLOC FAIL!!!
Line 10994: >>-------------------------------------------------
Line 11006: | gnss_SignalIDs(0x%02x)
Line 11007: >>-------------------------------------------------
Line 11031: <<-------------------------------------------------
Line 11032: | ++ GNSS_DifferentialCorrectionsReq
Line 11039: | dgnss_ValidityTimeReq(%d)
Line 11040: >>-------------------------------------------------
Line 11066: <<-------------------------------------------------
Line 11067: | ++ GNSS_NavigationModelReq
Line 11074: <<-------------------------------------------------
Line 11075: | ++ StoredNavListInfo
Line 11082: !!!!!!!!!! gnss_WeekOrDay(%d) is out of range (0..4095) !!!!!!!!!!
Line 11084: >>-------------------------------------------------
Line 11085: >>-------------------------------------------------
Line 11089: | gnss_WeekOrDay(%d)
Line 11103: | gnss_Toe(%d)
Line 11108: !!!!!!!!!! t_toeLimit(%d) is out of range (0..15) !!!!!!!!!!
Line 11110: >>-------------------------------------------------
Line 11111: >>-------------------------------------------------
Line 11115: | t_toeLimit(%d)
Line 11126: LPP_ConvertGNSS_NavigationModelReq() - numberOfSatListRelatedDataList is ZERO!!!
Line 11133: <<-------------------------------------------------
Line 11134: | ++ SatListRelatedDataList [%d]
Line 11140: LPP_ConvertGNSS_NavigationModelReq() - MALLOC FAIL!!!
Line 11141: >>-------------------------------------------------
Line 11142: >>-------------------------------------------------
Line 11143: >>-------------------------------------------------
Line 11154: | svID.satellite_id(%d)
Line 11161: LPP_ConvertGNSS_NavigationModelReq() - MALLOC FAIL!!!
Line 11162: >>-------------------------------------------------
Line 11163: >>-------------------------------------------------
Line 11164: >>-------------------------------------------------
Line 11173: | svID.iod(0x%02x %02x)
Line 11182: !!!!!!!!!! clockModelID(%d) is out of range (0..8) !!!!!!!!!!
Line 11184: >>-------------------------------------------------
Line 11185: >>-------------------------------------------------
Line 11186: >>-------------------------------------------------
Line 11193: | clockModelID(%d)
Line 11201: !!!!!!!!!! orbitModelID(%d) is out of range (0..8) !!!!!!!!!!
Line 11203: >>-------------------------------------------------
Line 11204: >>-------------------------------------------------
Line 11205: >>-------------------------------------------------
Line 11212: | orbitModelID(%d)
Line 11215: >>-------------------------------------------------
Line 11222: >>-------------------------------------------------
Line 11225: <<-------------------------------------------------
Line 11226: | ++ ReqNavListInfo
Line 11235: LPP_ConvertGNSS_NavigationModelReq() - MALLOC FAIL!!!
Line 11236: >>-------------------------------------------------
Line 11237: >>-------------------------------------------------
Line 11248: | svReqList(0x%02x %02x %02x %02x ...)
Line 11253: | svReqList(... 0x%02x %02x %02x %02x)
Line 11267: >>-------------------------------------------------
Line 11268: >>-------------------------------------------------
Line 11283: >>-------------------------------------------------
Line 11284: >>-------------------------------------------------
Line 11295: | addNavparamReq(%d)
Line 11298: >>-------------------------------------------------
Line 11301: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 11306: >>-------------------------------------------------
Line 11330: <<-------------------------------------------------
Line 11331: | ++ GNSS_DataBitAssistanceReq
Line 11338: !!!!!!!!!! gnss_TOD_Req(%d) is out of range (0..3599) !!!!!!!!!!
Line 11340: >>-------------------------------------------------
Line 11344: | gnss_TOD_Req(%d)
Line 11351: !!!!!!!!!! gnss_TOD_FracReq(%d) is out of range (0..999) !!!!!!!!!!
Line 11353: >>-------------------------------------------------
Line 11357: | gnss_TOD_FracReq(%d)
Line 11363: !!!!!!!!!! dataBitInterval(%d) is out of range (0..15) !!!!!!!!!!
Line 11365: >>-------------------------------------------------
Line 11369: | dataBitInterval(%d)
Line 11383: LPP_ConvertGNSS_DataBitAssistanceReq() - numberOfGNSS_DataBitsReq is ZERO!!!
Line 11390: <<-------------------------------------------------
Line 11391: | ++ GNSS_DataBitsReq [%d]
Line 11397: LPP_ConvertGNSS_DataBitAssistanceReq() - MALLOC FAIL!!!
Line 11398: >>-------------------------------------------------
Line 11399: >>-------------------------------------------------
Line 11406: | svID.satellite_id(%d)
Line 11407: >>-------------------------------------------------
Line 11413: >>-------------------------------------------------
Line 11437: <<-------------------------------------------------
Line 11438: | ++ GNSS_CommonAssistDataReq
Line 11448: LPP_ConvertGNSS_CommonAssistDataReq() - numberOfGNSS_TimeReqPrefList is ZERO!!!
Line 11459: <<-------------------------------------------------
Line 11460: | ++ GNSS_ReferenceLocationReq
Line 11464: >>-------------------------------------------------
Line 11470: <<-------------------------------------------------
Line 11471: | ++ GNSS_IonosphericModelReq
Line 11483: LPP_ConvertGNSS_CommonAssistDataReq() - MALLOC FAIL!!!
Line 11484: >>-------------------------------------------------
Line 11485: >>-------------------------------------------------
Line 11490: | klobucharModelReq(0x%02x)
Line 11497: | neQuickModelReq_present
Line 11500: >>-------------------------------------------------
Line 11506: <<-------------------------------------------------
Line 11507: | ++ GNSS_EarthOrientationParametersReq
Line 11512: >>-------------------------------------------------
Line 11514: >>-------------------------------------------------
Line 11538: <<-------------------------------------------------
Line 11539: | ++ A_GNSS_RequestAssistanceData
Line 11543: LPP_ConvertA_GNSS_RequestAssistanceData() - NULL Pointer!!!
Line 11544: >>-------------------------------------------------
Line 11553: | gnss_CommonAssistDataReq.bit_mask(0x%x)
Line 11561: LPP_ConvertA_GNSS_RequestAssistanceData() :: ERROR!! No CommonAssistDataReq, but bitmask is Set!!!
Line 11577: LPP_ConvertA_GNSS_RequestAssistanceData() - numberOfGNSS_GenericAssistDataReq is ZERO!!!
Line 11582: <<-------------------------------------------------
Line 11583: | ++ GNSS_GenericAssistDataReq [%d]
Line 11589: LPP_ConvertA_GNSS_RequestAssistanceData() - MALLOC FAIL!!!
Line 11590: >>-------------------------------------------------
Line 11591: >>-------------------------------------------------
Line 11625: | sbas_ID.sbas_id(%d)
Line 11635: LPP_ConvertA_GNSS_RequestAssistanceData() - numberOfGNSS_TimeModelsReq is ZERO!!!
Line 11642: <<-------------------------------------------------
Line 11643: | ++ GNSS_TimeModelsReq [%d]
Line 11649: LPP_ConvertA_GNSS_RequestAssistanceData() - MALLOC FAIL!!!
Line 11650: >>-------------------------------------------------
Line 11651: >>-------------------------------------------------
Line 11652: >>-------------------------------------------------
Line 11669: | gnss_TO_IDsReq(%d)
Line 11675: | deltaTreq(%d)
Line 11678: >>-------------------------------------------------
Line 11703: <<-------------------------------------------------
Line 11704: | ++ GNSS_RealTimeIntegrityReq
Line 11709: >>-------------------------------------------------
Line 11722: <<-------------------------------------------------
Line 11723: | ++ GNSS_AcquisitionAssistanceReq
Line 11729: | gnss_SignalID_Req.gnss_SignalID(%d)
Line 11736: | ERROR :: gnss_SignalID_Req.gnss_SignalID(%d). Value Discarded.
Line 11739: >>-------------------------------------------------
Line 11745: <<-------------------------------------------------
Line 11746: | ++ GNSS_AlmanacReq
Line 11753: | modelID(%d)
Line 11756: >>-------------------------------------------------
Line 11762: <<-------------------------------------------------
Line 11763: | ++ GNSS_UTCModelReq
Line 11770: | modelID(%d)
Line 11773: >>-------------------------------------------------
Line 11779: <<-------------------------------------------------
Line 11780: | ++ GNSS_AuxiliaryInformationReq
Line 11785: >>-------------------------------------------------
Line 11791: <<-------------------------------------------------
Line 11792: | ++ BDS_DifferentialCorrectionsReq_r12
Line 11799: >>-------------------------------------------------
Line 11805: <<-------------------------------------------------
Line 11806: | ++ BDS_GridModelReq_r12
Line 11811: >>-------------------------------------------------
Line 11814: >>-------------------------------------------------
Line 11822: >>-------------------------------------------------
Line 11857: LPP_ConvertLocationInfo() - MALLOC FAIL!!!
Line 11881: LPP_ConvertLocationInfo() - ret(%d) len(%d)
Line 11955: LPP_ConvertLocationInfo() - ret(%d) len(%d)
Line 11969: <<-------------------------------------------------
Line 11972: !!!!!!!!!! gnss_TOD_msec(%d) is out of range !!!!!!!!!!
Line 11974: >>-------------------------------------------------
Line 11978: | gnss_TOD_msec(%d)
Line 11979: >>-------------------------------------------------
Line 12273: LPP_ConvertBIT1ToASN_U8() - MALLOC FAIL!!!
Line 12308: LPP_ConvertBIT1ToASN_U16() - MALLOC FAIL!!!
Line 12349: LPP_ConvertBIT1ToASN_U32() - MALLOC FAIL!!!
Line 12396: LPP_CopySeqof3() - pDst is not NULL!!!
Line 12407: LPP_CopySeqof3() - MALLOC FAIL!!!
Line 12453: LPP_ConvertSeqof3ToASN() - pDst is not NULL!!!
Line 12466: LPP_ConvertSeqof3ToASN() - out of range src[%d](%d)!!!
Line 12474: LPP_ConvertSeqof3ToASN() - MALLOC FAIL!!!
Line 12497: | %d %d
Line 12501: | %d %d %d
Line 12538: LPP_ConvertSeqof3withNumToASN() - pDst is not NULL!!!
Line 12547: LPP_ConvertSeqof3withNumToASN() - MALLOC FAIL!!!
Line 12614: <<-------------------------------------------------
Line 12615: | ++ MOLRArg
Line 12645: | molr_Type(%d)
Line 12660: <<-------------------------------------------------
Line 12661: | ++ lcs_QoS
Line 12678: | horizontal_accuracy.value(0x%02x)
Line 12685: | EUTRAN_LCS_verticalCoordinateRequest_present
Line 12700: | vertical_accuracy.value(0x%02x)
Line 12730: | responseTime.responseTimeCategory(%d)
Line 12737: | EUTRAN_LCS_velocityRequest_present
Line 12740: >>-------------------------------------------------
Line 12745: <<-------------------------------------------------
Line 12746: | ++ lcsClientExternalID
Line 12754: | externalAddress.value(0x%02x %02x %02x %02x ...)
Line 12759: >>-------------------------------------------------
Line 12764: <<-------------------------------------------------
Line 12765: | ++ mlc_Number
Line 12770: | value(0x%02x %02x %02x %02x ...)
Line 12775: >>-------------------------------------------------
Line 12792: <<-------------------------------------------------
Line 12793: | ++ supportedGADShapes
Line 12800: EUTRAN_LCS_ConvertLCS_MOLRReq() - MALLOC FAIL!!!
Line 12841: | value(0x%02x)
Line 12845: >>-------------------------------------------------
Line 12857: | lcsServiceTypeID(%d)
Line 12875: | ageOfLocationInfo(%d)
Line 12887: <<-------------------------------------------------
Line 12888: | ++ locationType
Line 12930: | locationEstimateType(%d)
Line 12954: EUTRAN_LCS_ConvertLCS_MOLRReq() - MALLOC FAIL!!!
Line 12985: | deferredLocationEventType.value(0x%02x)
Line 12990: >>-------------------------------------------------
Line 12996: | EUTRAN_LCS_pseudonymIndicator_present
Line 13050: >>-------------------------------------------------
Line 13091: <<-------------------------------------------------
Line 13092: | ++ LocationNotificationArg
Line 13105: | notificationType(%d)
Line 13139: | locationType.locationEstimateType(%d)
Line 13177: | locationType.deferredLocationEventType.length(%d)
Line 13179: | locationType.deferredLocationEventType.value(0x%02x %02x)
Line 13221: | lcsClientExternalID.externalAddress.length(%d)
Line 13223: | lcsClientExternalID.externalAddress.value(0x%02x %02x %02x %02x)
Line 13228: | lcsClientExternalID.externalAddress.value(0x%02x %02x %02x %02x)
Line 13233: | lcsClientExternalID.externalAddress.value(0x%02x)
Line 13267: | lcsClientName.dataCodingScheme.length(%d)
Line 13269: | lcsClientName.dataCodingScheme.value(0x%02x)
Line 13274: | lcsClientName.nameString.length(%d)
Line 13276: | lcsClientName.nameString.value(0x%02x %02x %02x %02x ...)
Line 13299: | lcsClientName.lcs_FormatIndicator(%d)
Line 13338: | lcsRequestorID.dataCodingScheme.length(%d)
Line 13340: | lcsRequestorID.dataCodingScheme.value(0x%02x)
Line 13345: | lcsRequestorID.requestorIDString.length(%d)
Line 13347: | lcsRequestorID.requestorIDString.value(0x%02x %02x %02x %02x ...)
Line 13370: | lcsRequestorID.lcs_FormatIndicator(%d)
Line 13408: | lcsCodeword.dataCodingScheme.length(%d)
Line 13410: | lcsCodeword.dataCodingScheme.value(0x%02x)
Line 13415: | lcsCodeword.lcsCodewordString.length(%d)
Line 13417: | lcsCodeword.lcsCodewordString.value(0x%02x %02x %02x %02x ...)
Line 13434: | lcsCodeword.lcsServiceTypeID(%d)
Line 13439: >>-------------------------------------------------
Line 13463: <<-------------------------------------------------
Line 13464: | ++ MOLRRes
Line 13473: | locationEstimate.length(%d)
Line 13475: | locationEstimate.value(0x%02x %02x %02x %02x ...)
Line 13497: | add_LocationEstimate.length(%d)
Line 13499: | add_LocationEstimate.value(0x%02x %02x %02x %02x ...)
Line 13514: | velocityEstimate.length(%d)
Line 13516: | velocityEstimate.value(0x%02x %02x %02x %02x ...)
Line 13549: >>-------------------------------------------------
Line 13587: | networkResource(%d)
Line 13612: | networkResource(%d)
Line 13641: | additionalNetworkResource(%d)
Line 13652: | failureCauseParam(%d)
Line 13829: | positionMethodFailure_Diagnostic(%d)
