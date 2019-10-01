Line 218: ERROR creating TPendingOos Timer
Line 224: ERROR creating TReselHyst Timer
Line 282: ERROR deleting TPendingOos timer
Line 287: ERROR deleting TReselHyst timer
Line 367: SIntrasearch received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 382: SIntersearch received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 397: SSearchHcs received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 443: SSearchRATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 449: SSearchRATGsm received value: (%i) consider this value to be absent
Line 459: SLimit,SearchRATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 468: SHCS,RATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 544: ERROR Illegal State
Line 573: ERROR starting TReselHyst timer
Line 577: TReselHyst started (TmId=%d)
Line 640: ERROR stopping TPendingOos Timer
Line 656: ERROR Illegal State
Line 681: ERROR Illegal State
Line 720: [CsCallInProgress] Set pendingState to CellFach temporarily
Line 729: ERROR starting TPendingOos timer
Line 740: ERROR starting TPendingOos timer
Line 751: ERROR Illegal State
Line 817: RecvEutraMeasResult is ignored - Eutra disabled as IsEutraDisabled TRUE 
Line 914: ERROR GenMsg is NULL
Line 935: ERROR GenMsg is NULL
Line 956: ERROR GenMsg is NULL
Line 1050: Overriding cell CPICH code to (%d) - No more measurements for reselection 
Line 1097: Quick RB : ignore TReselHyst
Line 1112: Quick RB : ignore TReselHyst
Line 1136: Not starting neighbour cell measurements yet - waiting for T Reselection Hysteresis timer (1 second) to expire
Line 1237: EutraMeasInterval Updated (%d)
Line 1245: EutraMeasInterval Not Updated (%d)
Line 1265: GenMsg is NULL
Line 1289: ->InterRat Measurement rule is MeasureNone - GSM disabled
Line 1321: Eutra Measurement rule is MeasureNone - Eutra disabled as MULTI_MODE_OPERATION Zero 
Line 1328: Eutra Measurement rule is MeasureNone - Eutra disabled as IsEutraDisabled TRUE 
Line 1334: CurrentRule = %d NewMeasRule = %d
Line 1353: GenMsg is NULL
Line 1427: Serving Cell is not suitable
Line 1428: ->IntraF Measurement rule is MeasureAll
Line 1429: ->InterF Measurement rule is MeasureAll
Line 1430: ->InterRat Measurement rule is MeasureAll
Line 1443: ServingCell Not Suitable & ImmediateInterFReselMeas Required -> Clear ImmediateInterFReselMeas
Line 1464: RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
Line 1468: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 1478: [InterRAT Measurement] new rule will be overriden by no FACH measurement occasion 
Line 1483: [InterF Measurement] newRule(%d) <-> currentRule(%d) 
Line 1492: [InterRAT Measurement] newRule(%d) <-> currentRule(%d) 
Line 1588: Currently Return the Fach Meas Ocassion As TRUE (current value : %d) as This will done with TDM
Line 1599: Clear ImmediateInterFReselMeas
Line 1638: InterFReselMeas Not Active & ImmediateInterFReselMeas Required -> Clear ImmediateInterFReselMeas
Line 1684: ->IntraFreq Measurement rule is MeasureAll(PeriodicInterFReselMeas)
Line 1706: SrxlevS (%i) <= SIntrasearch (%i)
Line 1707: ->IntraFreq Measurement rule is MeasureAll
Line 1718: SIntrasearch not received
Line 1719: ->IntraFreq Measurement rule is MeasureAll
Line 1770: Start Periodic Inter-Freq Resel Meas (Count %d)
Line 1773: ->InterFreq Measurement rule is MeasureAll
Line 1781: Periodic Inter-Freq Resel Meas In Progress (Count %d)
Line 1784: ->InterFreq Measurement rule is MeasureAll
Line 1790: ->InterFreq Measurement rule is MeasureNone
Line 1795: SqualS  (%i) > SIntersearchTdd (%i)
Line 1798: SrxlevS (%i) > SSearchHcsTdd (%i)
Line 1802: SSearchHcs not received
Line 1818: SrxlevS  (%i) <= SIntersearch (%i)
Line 1819: ->InterFreq Measurement rule is MeasureAll
Line 1834: SrxlevS (%i) <= SSearchHcsTdd (%i)
Line 1835: ->InterFreq Measurement rule is MeasureAll
Line 1851: SIntersearch not received
Line 1852: ->InterFreq Measurement rule is MeasureAll
Line 1864: [InterFreq Measurement] new rule will be overriden by no FACH measurement occasion 
Line 1865: [InterFreq Measurement] newRule(%d) <-> currentRule(%d) 
Line 1877: RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
Line 1884: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 1911: ->IntraFreq Measurement rule is MeasureAll(PeriodicInterFReselMeas)
Line 1960: SrxlevS  (%i) > SSearchGsm (%i)
Line 1963: SrxlevS (%i) > SHcsGsm (%i)
Line 1967: SHcsGsm not received
Line 1970: ->InterRat Measurement rule is MeasureNone
Line 1980: SrxlevS  (%i) <= SSearchGsm (%i)
Line 1981: ->InterRat Measurement rule is MeasureAll
Line 1991: SrxlevS (%i) <= SHcsGsm (%i)
Line 1992: ->InterRat Measurement rule is MeasureAll
Line 2001: SSearchGsm not received
Line 2002: ->InterRat Measurement rule is MeasureAll
Line 2015: [InterRAT Measurement] new rule will be overriden by no FACH measurement occasion 
Line 2016: [InterRAT Measurement] newRule(%d) <-> currentRule(%d) 
Line 2025: RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
Line 2029: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 2040: [InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst 
Line 2041: [InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
Line 2049: [InterRAT Measurement] new rule(%d) will be used
Line 2050: [InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
Line 2053: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 2062: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 2155:  rrc_ReselMeasurement_GetIsActive( &ReselMeasController_p->EutraReselMeasInstPtr->common ) (%d)
Line 2157:  rrc_IntraFReselMeas_GetOnlyServingCellMeasRecved(ReselMeasController_p->IntraFReselMeasInstPtr) (%d)
Line 2163:  rrc_ReselMeasurement_GetIsActive( &ReselMeasController_p->EutraReselMeasInstPtr->common ) (%d)
Line 2191:  [APBCR_LOG]rrc_ReselMeasurement_GetIsActive( &ReselMeasController_p->InterFReselMeasInstPtr->common ) (%d)
Line 2193:  [APBCR_LOG]rrc_IntraFReselMeas_GetOnlyServingCellMeasRecved(ReselMeasController_p->IntraFReselMeasInstPtr) (%d)
Line 2199:  [APBCR_LOG]rrc_ReselMeasurement_GetIsActive( &ReselMeasController_p->InterFReselMeasInstPtr->common ) (%d)
Line 2229:  [APBCR_LOG]S_PrioritySearch1 (%d) S_PrioritySearch2 (%d)
Line 2231:  [APBCR_LOG]SrxlevS (%i)  SqualS (%i)
Line 2235:  [APBCR_LOG]SrxlevS (%i) > S_PrioritySearch1 (%i)
Line 2236:  [APBCR_LOG]SqualS (%i) > S_PrioritySearch2 (%i)
Line 2241:  [APBCR_LOG]newPrioBaseMeasurementRule (%d)  MeasurePrioGreaterThanSC Start Inter-F Measurements for Greater than SC
Line 2248:  [APBCR_LOG]SrxlevS (%i) <= S_PrioritySearch1 (%i)
Line 2249:  [APBCR_LOG]SqualS (%i) <= S_PrioritySearch2 (%i)
Line 2254:  [APBCR_LOG]newPrioBaseMeasurementRule (%d) MeasurePrioAllStart Inter-F Measurements for For ALL
Line 2264:  [APBCR_LOG]RrcCnxReq in progress (newPrioBaseRule -> PrioNone)
Line 2268: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 2274:  [APBCR_LOG]newPrioBaseMeasurementRule = %d != currentPrioBaseMeasurementRule = %d
Line 2276:  [APBCR_LOG]Measurement Rule is changed so we will now Check for the Eutra Frequencies to be measured
Line 2291: CurrentRule = %d NewMeasRule = %d
Line 2310: GenMsg is NULL
Line 2363: SrxlevS (%i) <= SSearchHcsTdd (%i)
Line 2367: ->IntraFreq Measurement rule is MeasureAll
Line 2371: ->InterFreq Measurement rule is MeasureAll
Line 2393: SrxlevS  (%i) > SintrasearchTdd (%i)
Line 2396: ->IntraFreq Measurement rule is MeasureHcsGreaterThanSC
Line 2400: ->InterFreq Measurement rule is MeasureHcsGreaterThanSC
Line 2414: SqualS  (%i) <= SintrasearchTdd (%i)
Line 2417: ->IntraFreq Measurement rule is MeasureHcsGreaterThanOrEqualToSC
Line 2421: ->InterFreq Measurement rule is MeasureHcsGreaterThanOrEqualToSC
Line 2438: Sintrasearch not sent
Line 2441: ->IntraFreq Measurement rule is Measure All
Line 2445: ->InterFreq Measurement rule is MeasureHcsGreaterThanSC
Line 2466: SsearchHCS not sent
Line 2470: Sintersearch not sent
Line 2474: ->IntraFreq Measurement rule is Measure All
Line 2478: ->InterFreq Measurement rule is Measure All
Line 2491: [InterFreq Measurement] new rule will be overriden by no FACH measurement occasion 
Line 2492: [InterFreq Measurement] newRule(%d) <-> currentRule(%d) 
Line 2501: RrcCnxReq in progress (newInterRule -> none)
Line 2505: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 2568: SsearchHCS not sent
Line 2572: SrxlevS (%i) <= SSearchHcs (%i)
Line 2577: Sintersearch not sent
Line 2582: ->IntraFreq Measurement rule is MeasureAll
Line 2587: ->InterFreq Measurement rule is MeasureAll
Line 2602: SrxlevS (%i) > SSearchHcsTdd (%i)
Line 2606: ->IntraFreq Measurement rule is MeasureHcsLessThanOrEqualToSC
Line 2610: ->InterFreq Measurement rule is MeasureHcsLessThanOrEqualToSC
Line 2625: [InterFreq Measurement] new rule will be overriden by no FACH measurement occasion 
Line 2626: [InterFreq Measurement] newRule(%d) <-> currentRule(%d) 
Line 2635: RrcCnxReq in progress (newInterRule -> none)
Line 2639: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 2689: SrxlevS (%i) <= SHcsGsm (%i)
Line 2693: SqualS  (%i) <= SSearchGsm (%i)
Line 2696: ->IntrerRat Measurement rule is MeasureAll
Line 2711: SrxlevS (%i) > SHcsGsm (%i)
Line 2715: SqualS (%i) > SLimitSearchGsm (%i)
Line 2718: ->InterRat Measurement rule is MeasureNone
Line 2729: SrxlevS (%i) <= SHcsGsm (%i)
Line 2730: SqualS (%i) <= SLimitSearchGsm (%i)
Line 2731: ->InterRat Measurement rule is MeasureHcsGreaterThanOrEqualToSC
Line 2742: SHcsGsm not sent
Line 2743: ->InterRat Measurement rule is MeasureAll
Line 2755: [InterRAT Measurement] new rule will be overriden by no FACH measurement occasion 
Line 2756: [InterRAT Measurement] newRule(%d) <-> currentRule(%d) 
Line 2765: RrcCnxReq in progress (newIratRule -> none)
Line 2769: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 2780: [InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst 
Line 2781: [InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
Line 2789: [InterRAT Measurement] new rule(%d) will be used
Line 2790: [InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
Line 2793: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 2802: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 2853:  S_PrioritySearch1 (%d) S_PrioritySearch2 (%d)
Line 2862: [QRB] MeasurePrioAll (CurrentRule %d vs NewRule %d)
Line 2866: SrxlevS (%i) > S_PrioritySearch1 (%i)
Line 2873: newEutraIratRule (%d)  MeasurePrioGreaterThanSC Start Eutra Measurements for Greater than SC
Line 2880: SrxlevS (%i) <= S_PrioritySearch1 (%i)
Line 2887: newEutraIratRule (%d) MeasurePrioAllStart Eutra Measurements for For ALL
Line 2898: Eutra disabled -> Measurement rule is forced to be MeasurePrioNone
Line 2907: RrcCnxReq in progress (newPrioBaseRule -> PrioNone)
Line 2911: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 2917: newEutraIratRule = %d != currentEutraIratRule = %d
Line 2919: Measurement Rule is changed so we will now Check for the Eutra Frequencies to be measured
Line 2964: SHcsGsm not sent
Line 2968: SrxlevS (%i) <= SHcsGsm (%i)
Line 2973: IsSSearchGsmValid not sent
Line 2977: SqualS  (%i) <= SSearchGsm (%i)
Line 2980: ->InterRat Measurement rule is MeasureAll
Line 2990: SrxlevS (%i) > SHcsGsm (%i)
Line 2991: SqualS  (%i) > SSearchGsm (%i)
Line 2993: ->InterRat Measurement rule is MeasureHcsLessThanOrEqualToSC
Line 3005: [InterRAT Measurement] new rule will be overriden by no FACH measurement occasion 
Line 3006: [InterRAT Measurement] newRule(%d) <-> currentRule(%d) 
Line 3015: RrcCnxReq in progress (newIratRule -> none)
Line 3019: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 3030: [InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst 
Line 3031: [InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
Line 3039: [InterRAT Measurement] new rule(%d) will be used
Line 3040: [InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
Line 3043: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 3052: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 3095: [rrc_TddReselMeasController_GetCurrentIratRealRule] Serving Cell not Suitable so Measurent Real Rule Is Measure ALL
Line 3135: SrxlevSTdd (%i) > SHcsGsm (%i)
Line 3139: SHcsGsm not received
Line 3142: -> current InterRat Measurement real rule is MeasureNone
Line 3151: SrxlevSTdd  (%i) <= SSearchGsm (%i)
Line 3152: ->current InterRat Measurement real rule is MeasureAll
Line 3159: SrxlevSTdd (%i) <= SHcsGsm (%i)
Line 3160: ->current InterRat Measurement real rule is MeasureAll
Line 3168: SSearchGsm not received
Line 3169: ->InterRat Measurement rule is MeasureAll
Line 3202: SrxlevSTdd (%i) <= SHcsGsm (%i)
Line 3205: ->current InterRat Measurement real rule is MeasureAll
Line 3215: SrxlevSTdd (%i) > SLimitSearchGsm (%i)
Line 3216: ->current InterRat Measurement real rule is MeasureNone
Line 3225: SrxlevSTdd (%i) <= SLimitSearchGsm (%i)
Line 3226: ->current InterRat Measurement real rule is MeasureHcsGreaterThanOrEqualToSC
Line 3234: SHcsGsm not sent
Line 3235: ->current InterRat Measurement real rule is MeasureAll
Line 3269: SHcsGsm not sent
Line 3273: SrxlevSTdd (%i) <= SHcsGsm (%i)
Line 3276: ->current InterRat Measurement real rule is MeasureAll
Line 3283: SrxlevSTdd (%i) > SHcsGsm (%i)
Line 3285: ->current InterRat Measurement real rule is MeasureHcsLessThanOrEqualToSC
Line 3316: AddMRUEutraFreqSelReselInfo
