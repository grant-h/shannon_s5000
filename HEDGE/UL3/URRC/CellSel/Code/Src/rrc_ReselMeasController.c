Line 200: ERROR creating TPendingOos Timer
Line 206: ERROR creating TReselHyst Timer
Line 260: ERROR deleting TPendingOos timer
Line 265: ERROR deleting TReselHyst timer
Line 345: SIntrasearch received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 361: SIntersearch received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 377: SSearchHcs received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 425: SSearchRATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 431: SSearchRATGsm received value: (%i) consider this value to be absent
Line 442: SLimit,SearchRATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 452: SHCS,RATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 513: SirBasedReselEnabled is disabled for CS
Line 536: Avoid this band (%d) if possible
Line 548: CSFB in progress: No ImmediateInterFReselMeas
Line 555: No FachMeasOccasion Available -> No ImmediateInterFReselMeas
Line 609: ERROR Illegal State
Line 638: ERROR starting TReselHyst timer
Line 642: TReselHyst started (TmId=%d)
Line 699: ERROR stopping TPendingOos Timer
Line 714: ERROR Illegal State
Line 737: ERROR Illegal State
Line 769: [CsCallInProgress] Set pendingState to CellFach temporarily
Line 778: ERROR starting TPendingOos timer
Line 789: ERROR starting TPendingOos timer
Line 800: ERROR Illegal State
Line 834: ImmediateInterFReselMeas Required -> IsSirInterFReselMeasTriggered set to TRUE
Line 843: PeriodicInterFReselMeas Required -> IsSirInterFReselMeasTriggered set to TRUE
Line 847: PeriodicInterFReselMeas Required but PeriodicInterFReselMeas Not Configured
Line 873: No SirInterFReselCandidate Found
Line 882: ImmediateInterFReselMeas Configured & No SirInterFReselCandidate Found -> Clear ImmediateInterFReselMeas
Line 889: PeriodicInterFReselMeasCount is decreased to %d
Line 942: RecvEutraMeasResult is ignored - Eutra disabled as IsEutraDisabled TRUE 
Line 1134: Overriding cell CPICH code to (%d) - No more measurements for reselection 
Line 1229: Invalid BandId of TargetCell (%d)
Line 1237: NeighFreq %d, Sir %d (Sir + BandOffset(%d))
Line 1249: BestSirFreq %d, BestSir %d, CandicateCell %d
Line 1254: >> CHECK: Freq %d, NumCellsInSameFreq(%d) > 1 -> FAIL
Line 1265: >> Triggering Conditions for SirInterFResel (ServingFreq: %d, CandidateFreq: %d)
Line 1272: >> CHECK: BestRscp(%d) > BestRscpTh(%d) -> PASS
Line 1285: Invalid BandId of ServingCell (%d)
Line 1293: ServingFreq %d: SirMeasured %d (SirStored %d - BandOffset(%d))
Line 1298: >> CHECK: ServingCellSir(%d) < 10dB -> PASS
Line 1303: >> CHECK: ServingCellSir(%d) < 10dB -> FAIL
Line 1311: >> CHECK: CandidateEcNo(%d) > -13dB -> PASS
Line 1316: >> CHECK: CandidateEcNo(%d) > -13dB -> FAIL
Line 1330: >> VERDICT: Find Better SirInterFReselCandididate -> FOUND (CandidateFreq %d,  BestCell %d, CellId %d)
Line 1335: >> VERDICT: Find Better SirInterFReselCandididate -> NOT FOUND (BestSir %d > ServingFreqSir %d + ServingFreqHyst %d)
Line 1341: >> CHECK: BestRscp(%d) > BestRscpTh(%d) -> FAIL
Line 1404: Quick RB : Ignore TReselHyst
Line 1418: Quick RB : Ignore TReselHyst
Line 1436: LTE supported : Ignore TReselHyst
Line 1444: ImmediateInterFReselMeasRequired: Ignore TReselHyst
Line 1459: Not refreshing measurement rules yet - waiting for T Reselection Hysteresis timer (1 second) to expire
Line 1470: ImmediateInterFReselMeas Required: Intra-freq. cell reselection is not triggered while TReselHyst is running
Line 1563: EutraMeasInterval Updated (%d)
Line 1571: EutraMeasInterval Not Updated (%d)
Line 1589: GenMsg is NULL
Line 1613: ->InterRat Measurement rule is MeasureNone - GSM disabled
Line 1645: Eutra Measurement rule is MeasureNone - Eutra disabled as MULTI_MODE_OPERATION Zero 
Line 1652: Eutra Measurement rule is MeasureNone - Eutra disabled as IsEutraDisabled TRUE 
Line 1658: CurrentRule = %d NewMeasRule = %d
Line 1678: GenMsg is NULL
Line 1754: Serving Cell is not suitable
Line 1755: ->IntraF Measurement rule is MeasureAll
Line 1756: ->InterF Measurement rule is MeasureAll
Line 1757: ->InterRat Measurement rule is MeasureAll
Line 1760: Reset CSG to non-CSG Reselection flag
Line 1772: ServingCell Not Suitable & ImmediateInterFReselMeas Required -> Clear ImmediateInterFReselMeas
Line 1790: RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
Line 1802: [InterRAT Measurement] new rule will be overriden by no FACH measurement occasion 
Line 1808: [InterF Measurement] newRule(%d) <-> currentRule(%d) 
Line 1811: [InterF Measurement] newPrioBaseRule(%d) <-> CurrentPrioBaseRule(%d) 
Line 1823: [InterRAT Measurement] newRule(%d) <-> currentRule(%d) 
Line 1837: [InterRAT Measurement] newPrioBaseRule(%d) <-> CurrentPrioBaseRule(%d) 
Line 1881: AvoidCsgtoNonCsgResel[%d]
Line 1899: [UpdateMeasurementRules] HCS shall not be used for Inter-F & Inter-Rat layers
Line 1961: HsDsch-MeasurementOccasionAvailable
Line 1987: Clear ImmediateInterFReselMeas
Line 2029: InterFReselMeas Not Active & ImmediateInterFReselMeas Required -> Clear ImmediateInterFReselMeas
Line 2078: SqualS (%i) > SIntrasearch (%i): ImmediateInterFReselMeas or PeriodicInterFReselMeas -> IntraFreq MeasureRule Changed to MeasureAll
Line 2088: SqualS (%i) > SIntrasearch (%i): found IntraF CSG Cell during ASF -> IntraFreq MeasureRule Changed to MeasureAll
Line 2098: SqualS (%i) > SIntrasearch (%i): IntraFreq MeasureRule Changed to MeasureServingCellOnly
Line 2109: SqualS (%i) <= SIntrasearch (%i): IntraFreq MeasRule Changed to MeaureAll
Line 2115: WARNING - SIntrasearch not received
Line 2121: -> IntraFreq MeasRule Changed to MeaureAll
Line 2163: SqualS (%i) > SIntersearch (%i): ImmediateInterFReselMeas Configured (MeasureAll)
Line 2170: -> InterFreq MeasureRule Changed to MeaureAll
Line 2180: SqualS (%i) > SIntersearch (%i): Start Sir-based Periodic IF Resel Meas (Count %d)
Line 2187: -> InterFreq MeasureRule Changed to MeaureAll
Line 2194: SqualS (%i) > SIntersearch (%i): PeriodicInterFReselMeas In Progress (MeasureAll, Count %d)
Line 2201: -> InterFreq MeasureRule Changed to MeaureAll
Line 2210: SqualS (%i) > SIntersearch (%i): found InterF CSG Cell during ASF -> InterFreq MeasureRule Changed to MeasureAll
Line 2220: SqualS (%i) > SIntersearch (%i): PeriodicInterFReselMeas Not Required -> InterFreq MeasureRule Changed to MeasureNone
Line 2229: SrxlevS (%i) > SSearchHcs (%i): InterFreq MeasureRule Changed to %d
Line 2234: SSearchHcs not received
Line 2245: SqualS (%i) <= SIntersearch (%i): PeriodicInterFReselMeasConfigured -> Hand the control over to CellReselecter (MeasureAll)
Line 2257: SqualS <= SIntersearch & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
Line 2262: SqualS (%i) <= SIntersearch (%i): InterFreq MeasureRule Changed to MeasureAll
Line 2279: IsSSearchHcsValid & SrxlevS <= SSearchHcs & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
Line 2284: SrxlevS (%i) <= SSearchHcs (%i): InterFreq MeasureRule Changed to MeasureAll
Line 2293: SIntersearch not received (MeasureAll)
Line 2305: SIntersearch not received & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
Line 2310: -> InterFreq MeasureRule Changed to MeaureAll
Line 2320: [InterFreq Measurement] new rule will be overriden by no FACH measurement occasion 
Line 2321: [InterFreq Measurement] newRule(%d) <-> currentRule(%d) 
Line 2331: RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
Line 2347: oldRule !=newRule==MeasureNone & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
Line 2369: -> IntraFreq MeasureRule Changed to MeasureAll Due to Immediate or PeriodicInterFReselMeas Configured
Line 2385: oldRule==newRule==MeasureNone & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
Line 2394: oldRule==newRule==MeasureNone & PeriodicInterFReselMeasConfigured -> Clear PeriodicInterFReselMeas
Line 2432: SqualS  (%i) > SSearchGsm (%i)
Line 2435: SrxlevS (%i) > SHcsGsm (%i)
Line 2439: SHcsGsm not received
Line 2442: ->InterRat Measurement rule is MeasureNone
Line 2452: SqualS  (%i) <= SSearchGsm (%i)
Line 2453: ->InterRat Measurement rule is MeasureAll
Line 2463: SrxlevS (%i) <= SHcsGsm (%i)
Line 2464: ->InterRat Measurement rule is MeasureAll
Line 2473: SSearchGsm not received
Line 2474: ->InterRat Measurement rule is MeasureAll
Line 2485: [InterRAT Measurement] new rule will be overriden by no FACH measurement occasion 
Line 2486: [InterRAT Measurement] newRule(%d) <-> currentRule(%d) 
Line 2493: RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
Line 2502: [InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst 
Line 2503: [InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
Line 2511: [InterRAT Measurement] new rule(%d) will be used
Line 2512: [InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
Line 2515: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 2524: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 2608: [APBCR] UpdatePrioBaseMeasurementRules_EutraUsed : U2L reselection in CellFach is not suppoted
Line 2615: [APBCR] UpdatePrioBaseMeasurementRules_EutraUsed : No FACH measurement occasion
Line 2620:  rrc_ReselMeasurement_GetIsActive_Eutra (%d)
Line 2622:  rrc_IntraFReselMeas_GetOnlyServingCellMeasRecved (%d)
Line 2639: [APBCR] UpdatePrioBaseMeasurementRules_UtraUsed: No FACH measurement occasion
Line 2647:  [APBCR] rrc_ReselMeasurement_GetIsActive_Utra (%d)
Line 2649:  [APBCR] rrc_IntraFReselMeas_GetOnlyServingCellMeasRecved (%d)
Line 2677: [APBCR] S_PrioritySearch1 (%d) S_PrioritySearch2 (%d)
Line 2679: [APBCR] SrxlevS (%i)  SqualS (%i)
Line 2683: [APBCR] SrxlevS (%i) > S_PrioritySearch1 (%i)
Line 2684: [APBCR] SqualS (%i) > S_PrioritySearch2 (%i)
Line 2689:  [APBCR] newPrioBaseMeasurementRule (%d) :: Measure Inter-frequencies with greater priority than SC
Line 2696: [APBCR] SrxlevS (%i) <= S_PrioritySearch1 (%i)
Line 2697: [APBCR] SqualS (%i) <= S_PrioritySearch2 (%i)
Line 2702: [APBCR] newPrioBaseMeasurementRule (%d) :: Measure ALL of Inter-frequencies
Line 2713: [APBCR] found InterF CSG Cell during ASF -> newPrioBaseMeasurementRule (%d) Changed to MeasureAll
Line 2723:  [APBCR_LOG]RrcCnxReq in progress (newPrioBaseRule -> PrioNone)
Line 2728:  [APBCR_LOG]newPrioBaseMeasurementRule = %d != currentPrioBaseMeasurementRule = %d
Line 2730:  [APBCR_LOG]Measurement Rule is changed so we will now Check for the Eutra Frequencies to be measured
Line 2743: CurrentRule = %d, NewMeasRule = %d
Line 2763: GenMsg is NULL
Line 2776: [APBCR] UpdatePrioBaseMeasurementRules_GsmUsed: No FACH measurement occasion
Line 2783:  [APBCR] rrc_ReselMeasurement_GetIsActive_Gsm (%d)
Line 2785:  [APBCR] rrc_IntraFReselMeas_GetOnlyServingCellMeasRecved (%d)
Line 2804: UpdateMeasurementRules_PrioBaseUsed_Gsm
Line 2812: [APBCR] S_PrioritySearch1 (%d) S_PrioritySearch2 (%d)
Line 2814: [APBCR] SrxlevS (%i)  SqualS (%i)
Line 2818: [APBCR] SrxlevS (%i) > S_PrioritySearch1 (%i)
Line 2819: [APBCR] SqualS (%i) > S_PrioritySearch2 (%i)
Line 2824:  [APBCR] newPrioBaseMeasurementRule (%d) :: Measure Inter-frequencies with greater priority than SC
Line 2831: [APBCR] SrxlevS (%i) <= S_PrioritySearch1 (%i)
Line 2832: [APBCR] SqualS (%i) <= S_PrioritySearch2 (%i)
Line 2837: [APBCR] newPrioBaseMeasurementRule (%d) :: Measure ALL of Inter-frequencies
Line 2845: [APBCR] RrcCnxReq in progress (newPrioBaseRule -> PrioNone)
Line 2850: [APBCR] newPrioBaseMeasurementRule = %d != currentPrioBaseMeasurementRule = %d
Line 2852: [APBCR] Measurement Rule is changed so we will now Check for the GSM Frequencies to be measured
Line 2867: GSM Measurement rule is MeasureNone - GSM disabled as MULTI_MODE_OPERATION Zero 
Line 2871: CurrentRule = %d, NewMeasRule = %d
Line 2891: GenMsg is NULL
Line 2947: SrxlevS (%i) <= SSearchHcs (%i)
Line 2951: SqualS  (%i) <= Sintersearch (%i)
Line 2955: ->IntraFreq Measurement rule is MeasureAll
Line 2959: ->InterFreq Measurement rule is MeasureAll
Line 2999: > [HCS] Apply IntraSearchHyst (%d dB):: Overwrite HcsGreaterThanSC to HcsGreaterThanOrEqualToSC
Line 3007: > [HCS] Apply IntraSearchHyst (%d dB):: Overwrite HcsGreaterThanSC to HcsGreaterThanOrEqualToSC
Line 3027: SqualS (%i) > SIntrasearch (%i): found IntraF CSG Cell during ASF -> IntraFreq MeasureRule Changed to MeasureAll
Line 3036: SqualS (%i) > SIntrasearch (%i): found InterF CSG Cell during ASF -> InterFreq MeasureRule Changed to MeasureAll
Line 3044: SqualS  (%i) > Sintrasearch (%i)
Line 3047: ->IntraFreq Measurement rule is MeasureHcsGreaterThanSC
Line 3051: ->InterFreq Measurement rule is MeasureHcsGreaterThanSC
Line 3084: > [HCS] Apply IntraSearchHyst (%d dB):: Overwrite HcsGreaterThanOrEqualToSC to HcsGreaterThanSC
Line 3092: > [HCS] Apply IntraSearchHyst (%d dB):: Overwrite HcsGreaterThanOrEqualToSC to HcsGreaterThanSC
Line 3102: > [HCS] Apply InterSearchHyst (%d dB):: OverwriteHcsGreaterThanOrEqualToSC to All
Line 3110: > [HCS] Apply InterSearchHyst (%d dB):: Overwrite HcsGreaterThanOrEqualToSC to All
Line 3120: SqualS  (%i) <= Sintrasearch (%i)
Line 3123: ->IntraFreq Measurement rule is MeasureHcsGreaterThanOrEqualToSC
Line 3127: ->InterFreq Measurement rule is MeasureHcsGreaterThanOrEqualToSC
Line 3144: Sintrasearch not sent
Line 3147: ->IntraFreq Measurement rule is Measure All
Line 3151: ->InterFreq Measurement rule is MeasureHcsGreaterThanSC
Line 3172: SsearchHCS not sent
Line 3176: Sintersearch not sent
Line 3180: ->IntraFreq Measurement rule is Measure All
Line 3184: ->InterFreq Measurement rule is Measure All
Line 3195: [InterFreq Measurement] new rule will be overriden by no FACH measurement occasion 
Line 3196: [InterFreq Measurement] newRule(%d) <-> currentRule(%d) 
Line 3202: RrcCnxReq in progress (newInterRule -> none)
Line 3211: Priority Based Cell Reselection in progress (newInterRule -> none)
Line 3271: SsearchHCS not sent
Line 3275: SrxlevS (%i) <= SSearchHcs (%i)
Line 3280: Sintersearch not sent
Line 3284: SqualS  (%i) <= Sintersearch (%i)
Line 3289: ->IntraFreq Measurement rule is MeasureAll
Line 3293: ->InterFreq Measurement rule is MeasureAll
Line 3313: SqualS (%i) > SIntrasearch (%i): found IntraF CSG Cell during ASF -> IntraFreq MeasureRule Changed to MeasureAll
Line 3322: SqualS (%i) > SIntrasearch (%i): found InterF CSG Cell during ASF -> InterFreq MeasureRule Changed to MeasureAll
Line 3330: SrxlevS (%i) > SSearchHcs (%i)
Line 3331: SqualS  (%i) > Sintersearch (%i)
Line 3335: ->IntraFreq Measurement rule is MeasureHcsLessThanOrEqualToSC
Line 3339: ->InterFreq Measurement rule is MeasureHcsLessThanOrEqualToSC
Line 3352: [InterFreq Measurement] new rule will be overriden by no FACH measurement occasion 
Line 3353: [InterFreq Measurement] newRule(%d) <-> currentRule(%d) 
Line 3360: RrcCnxReq in progress (newInterRule -> none)
Line 3369: Priority Based Cell Reselection in progress (newInterRule -> none)
Line 3415: SrxlevS (%i) <= SHcsGsm (%i)
Line 3419: SqualS  (%i) <= SSearchGsm (%i)
Line 3422: ->IntrerRat Measurement rule is MeasureAll
Line 3435: SqualS (%i) > SLimitSearchGsm (%i)
Line 3436: ->InterRat Measurement rule is MeasureNone
Line 3447: SqualS (%i) <= SLimitSearchGsm (%i)
Line 3448: ->InterRat Measurement rule is MeasureHcsGreaterThanOrEqualToSC
Line 3459: SHcsGsm not sent
Line 3460: ->InterRat Measurement rule is MeasureAll
Line 3470: [InterRAT Measurement] new rule will be overriden by no FACH measurement occasion 
Line 3471: [InterRAT Measurement] newRule(%d) <-> currentRule(%d) 
Line 3478: RrcCnxReq in progress (newIratRule -> none)
Line 3487: [InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst 
Line 3488: [InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
Line 3496: [InterRAT Measurement] new rule(%d) will be used
Line 3497: [InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
Line 3500: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 3509: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 3558:  S_PrioritySearch1 (%d) S_PrioritySearch2 (%d)
Line 3560: SrxlevS (%i)  SqualS (%i)
Line 3584: measInd->inter_RAT_len : %d
Line 3590: GSM measure enabled
Line 3601: FGI 3 is not supported
Line 3607: UpdateMeasurementRules_PrioBaseUsed_EutraIRAT called in CellFach
Line 3613: GSM measure not available
Line 3620: cellfachMeasIndExist is false
Line 3628: Sib19Id->FachAbsPriorityMeasInd is all_layers and FGI4 supported
Line 3636: Sib19Id->FachAbsPriorityMeasInd is high_priority_layers and Srxlev and SqualS satisfied
Line 3642: Sib19Id->FachAbsPriorityMeasInd is high_priority_layers and Srxlev and SqualS not satisfied.. No measure Eutra
Line 3649: Sib19Id->FachAbsPriorityMeasInd is invalid value
Line 3664: [U2L_CSG_ASF] Target CSG EutraFreq need to be measured in this source cell : newEutraIratRule (%d) MeasurePrioAllStart Eutra Measurements for For ALL
Line 3673: [QRB] MeasurePrioAll (CurrentRule %d vs NewRule %d)
Line 3677: SrxlevS (%i) > S_PrioritySearch1 (%i)
Line 3678: SqualS (%i) > S_PrioritySearch2 (%i)
Line 3685: newEutraIratRule (%d)  MeasurePrioGreaterThanSC Start Eutra Measurements for Greater than SC
Line 3692: SrxlevS (%i) <= S_PrioritySearch1 (%i)
Line 3693: SqualS (%i) <= S_PrioritySearch2 (%i)
Line 3700: newEutraIratRule (%d) MeasurePrioAllStart Eutra Measurements for For ALL
Line 3712: Eutra disabled -> Measurement rule is forced to be MeasurePrioNone
Line 3719: RrcCnxReq in progress (newPrioBaseRule -> PrioNone)
Line 3724: newEutraIratRule = %d != currentEutraIratRule = %d
Line 3726: Measurement Rule is changed so we will now Check for the Eutra Frequencies to be measured
Line 3765: SHcsGsm not sent
Line 3769: SrxlevS (%i) <= SHcsGsm (%i)
Line 3774: IsSSearchGsmValid not sent
Line 3778: SqualS  (%i) <= SSearchGsm (%i)
Line 3781: ->InterRat Measurement rule is MeasureAll
Line 3791: SrxlevS (%i) > SHcsGsm (%i)
Line 3792: SqualS  (%i) > SSearchGsm (%i)
Line 3794: ->InterRat Measurement rule is MeasureHcsLessThanOrEqualToSC
Line 3804: [InterRAT Measurement] new rule will be overriden by no FACH measurement occasion 
Line 3805: [InterRAT Measurement] newRule(%d) <-> currentRule(%d) 
Line 3812: RrcCnxReq in progress (newIratRule -> none)
Line 3821: [InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst 
Line 3822: [InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
Line 3830: [InterRAT Measurement] new rule(%d) will be used
Line 3831: [InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
Line 3834: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 3843: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 3880: [rrc_ReselMeasController_GetCurrentIratRealRule] Serving Cell not Suitable so Measurent Real Rule Is Measure ALL
Line 3937: SqualS  (%i) > SSearchGsm (%i)
Line 3940: SrxlevS (%i) > SHcsGsm (%i)
Line 3944: SHcsGsm not received
Line 3947: -> current InterRat Measurement real rule is MeasureNone
Line 3955: SqualS  (%i) <= SSearchGsm (%i)
Line 3956: ->current InterRat Measurement real rule is MeasureAll
Line 3963: SrxlevS (%i) <= SHcsGsm (%i)
Line 3964: ->current InterRat Measurement real rule is MeasureAll
Line 3972: SSearchGsm not received
Line 3973: ->InterRat Measurement rule is MeasureAll
Line 4001: SrxlevS (%i) <= SHcsGsm (%i)
Line 4005: SqualS  (%i) <= SSearchGsm (%i)
Line 4008: ->current InterRat Measurement real rule is MeasureAll
Line 4018: SqualS (%i) > SLimitSearchGsm (%i)
Line 4019: ->current InterRat Measurement real rule is MeasureNone
Line 4028: SqualS (%i) <= SLimitSearchGsm (%i)
Line 4029: ->current InterRat Measurement real rule is MeasureHcsGreaterThanOrEqualToSC
Line 4037: SHcsGsm not sent
Line 4038: ->current InterRat Measurement real rule is MeasureAll
Line 4066: SHcsGsm not sent
Line 4070: SrxlevS (%i) <= SHcsGsm (%i)
Line 4075: IsSSearchGsmValid not sent
Line 4079: SqualS  (%i) <= SSearchGsm (%i)
Line 4082: ->current InterRat Measurement real rule is MeasureAll
Line 4089: SrxlevS (%i) > SHcsGsm (%i)
Line 4090: SqualS  (%i) > SSearchGsm (%i)
Line 4092: ->current InterRat Measurement real rule is MeasureHcsLessThanOrEqualToSC
Line 4119: AddMRUEutraFreqSelReselInfo
