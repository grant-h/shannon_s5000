Line 388: Reset PrioBaseRankingList from ReselRanker
Line 401: remove a PrioBaseReselCandidate from RankList (0x%x)
Line 419: [rrc_ReselRanker_RemovePrioBaseReselectionCandidate]ReselRanker_p->PrioBaseListCount(%d) > (Asn_maxNumEUTRAFreqs(%d) * MaxEutraCellsMeas(%d))
Line 430: remove a PrioBaseReselCandidate from QrbRankList (0x%x)
Line 535: ERROR Undefined Cell Info List
Line 679: >> Skip GSM Cell: SuitableFddCellPresent %d
Line 687: Reselection candidate, accepted as Tresel Running and Seving Cell Not Suitable
Line 714: >> Skip GSM Cell: SuitableFddCellPresent %d
Line 727: >> Reselection candidate, rejected as on the best Sir-freq while PeriodicInterFReselMeas is configured (Squal > Sintersearch)
Line 760: Prio Base Ranked Cell : CellIdx[%d] = EARFCN[%d] PhyCellId[%d] Priority[%d]
Line 784: Utra Prio Base Ranked Cell : CellIdx[%d] = UARFCN[%d] Cpich[%d] CellId[%d] CellReselType[%d]
Line 837: Serving Cell is barred so not considered to be a reselection candidate
Line 842: cell id(%d) is higher rank than serving cell TReselection(%d)
Line 845: Reselection candidate 
Line 871: Use TReselection (%d) without Flooring
Line 879: Expand Treselection (%d) to above DRX
Line 891: NeighborCell(%d,%d) not yet verified to be better => TResel Not Started
Line 920: CandidateCell(%d,%d) not yet verified to be worse => TResel Not Stopped
Line 929: ReselRanker removed the last %i entries from the Ranking List
Line 954: CellIdx[%d] = Freq[%d] Cpich[%d] CellId[%d] CellReselType[%d]
Line 991: ***Ranking List before prioritising Csg Cells***
Line 1060: ReselRanker moved the the CSG cell Freq[%d] Cpich[%d] CellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1072: This is TargetCSG Cell in neighbor cell list but This is not a best cell on ARFCN[%d] PhyCellId[%d] CellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1080: ***Ranking List after prioritising Csg Cells***
Line 1114: ***Prio Base Ranking List before prioritising Csg Cells***
Line 1183: ReselRanker moved the the CSG cell Arfcn[%d] PhyCellId[%d] CellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1191: This is TargetCSG UMTS Cell in neighbor cell list but This is not a best cell on ARFCN[%d] PhyCellId[%d] CellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1199: ***Prio Base Ranking List after prioritising Csg Cells***
Line 1233: ***Prio Base Ranking List before prioritising Csg Cells***
Line 1302: ReselRanker moved the the CSG cell Arfcn[%d] PhyCellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1310: This is TargetCSG EUTRA Cell in neighbor cell list but This is not a best cell on ARFCN[%d] PhyCellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1318: ***Prio Base Ranking List after prioritising Csg Cells***
Line 1366: Could not refresh BSIC verification request
Line 1367: Could not refresh BSIC verification request
Line 1416: ->Building Ranking list
Line 1464: SuitableFddCellPresent %d
Line 1472: Reselection candidate, rejected as Selection criteria not met
Line 1495: Inter-freq cell (%d,%d), IsMeasValid set to FALSE
Line 1502: GSM cell, IsMeasValid set to FALSE
Line 1553: ->Building PrioBase S Criteria Met List
Line 1587: Fast U2L threshold = %d dBm
Line 1591: Fast U2L criteria met: Rsrp=%d > FastU2LRscpTh=%d
Line 1605: Eutra Treselection %d, Overwrite it to a real eutra meas cycle (DrxCycle %d, NumEutraFreq %d)
Line 1610: New Eutra Treselection %d
Line 1617: Expand Treselection (%d) to above DRX
Line 1633: Remaining Time(%d) is within a Valid Range(%d)
Line 1639: Error Stopping PrioBaseTResel Timer  
Line 1661: Reselection candidate, Rejected as Selection criteria not met, 
Line 1672: Reselection candidate, rejected as Cell Barred in the Barred Cell List
Line 1703:   ->Keep Cells with Highest HCS priority that meet H Criteria
Line 1743:     %d Cells do not meet H Criteria
Line 1785:     %d Cells do not have Highest Priority (%d)
Line 1804: ->Filtering Ranking list
Line 1817: HCS in use: Clear SIR Ranking list
Line 1997: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc CellReselType
Line 2030: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc ScaleType
Line 2057: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2063: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2069: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2076: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc state
Line 2082: rrc_ReselRanker_ScaleTReselection: Treselection*1000(%d) ScaleFactor*1000(%d) Scaled Tresel*1000(%d)  
Line 2157: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc CellReselType
Line 2190: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc ScaleType
Line 2207: ScaleTReselection: (CellPch or UraPch) DrxCoeff %d, DrxCoeff2 %d
Line 2216: ScaleTReselection: (CellPch or UraPch) DrxCoeff2 set to default DrxCycleLenCoeff %d
Line 2224: ScaleTReselection: (CellPch or UraPch) DrxCoeff %d
Line 2239: ScaleTReselection: (Idle) DrxCoeff %d
Line 2245: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2251: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2257: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2264: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc state
Line 2315: Tresel: Invalid DrxCycleLenCoeff
Line 2320: ScaleTReselection: ScaledTResel (%d) before FLOORING with ValDrx (%i), DRXCycleLength (%d)
Line 2332: ScaleTReselection:  Inapplicable DRX cycle -> NO FLOORING TO DRX
Line 2337: ScaleTReselection: Unwanted TResel State or RRC State -> NO FLOORING TO DRX
Line 2343: rrc_ReselRanker_ScaleTReselection: Treselection*1000(%d) ScaleFactor*1000(%d) Scaled Tresel*1000(%d)  
Line 2364: ReselRanker: (Idle) DrxCoeff %d
Line 2374: ReselRanker: (CellPch or UraPch) DrxCoeff %d, DrxCoeff2 %d
Line 2383: ReselRanker: (CellPch or UraPch) DrxCoeff2 set to default DrxCycleCoeff %d
Line 2391: ReselRanker: (CellPch or UraPch) DrxCoeff %d
Line 2397: ReselRanker: (Current State %d) DrxCoeff Not Available
Line 2409: ReselRanker: Sim Not Valid, Overwrite DrxCoeff %d
Line 2436: ReselRanker: Invalid DrxCycleLenCoeff
Line 2447: ReselRanker: DrxCycle Not Available
Line 2516: SIR based reselection: BestRscp %d
Line 2530: =============== Cell Reselection Rscp Ranking list start
Line 2534: =============== Cell Reselection EcN0 Ranking list start
Line 2541: =============== Cell Reselection Rscp Ranking list end
Line 2545: =============== Cell Reselection EcN0 Ranking list end
Line 2635: ->Rank the remaining candidates
Line 2680: >> ServingCellOnlyMeas: SuitableFddCellPresent %d
Line 2701: Updating reselection criteria
Line 2706:   Built Ranking list has %d entries
Line 2714:   Filtered Ranking list has %d entries
Line 2722:   Ranked Ranking list has %d entries
Line 2743: Updating PrioBase Reselection criteria
Line 2748:   Built Ranking list %d, QrbRanking list %d
Line 2756: Start QRB Ranking based on RSRQ
Line 2763: Start QRB Ranking based on RSRP
Line 2775: Start Ranking based on RSRQ
Line 2782: Start Ranking based on RSRP
Line 3196: FLOORING: Error-Divided by zero
Line 3209: FLOORING: remainder (%d) < period(%d) * delta(%d/1000) -> Flooring To %d
Line 3216: FLOORING: remainder(%d) >= period(%d) * delta(%d), NearestFlooringDrx: %d -> Returning Original Value (%d))
Line 3267: Only Intra Freq Meas allowed at this state
Line 3273: CSG to non-CSG LTE Cell is ignored, as 3G CSG Cell is highest priority
Line 3279: TReselection is Zero OR Serving Cell Not suitable condition
Line 3303: Quick RB Criteria Met
Line 3315: TReselection Applies TReselection Done.. Ready for Eutra Reselection
Line 3322: No Eutra Cell Available
Line 3335: Quick Rollback is required for CS Scnx :: Disable E-SIB
Line 3340: Quick Rollback is required for PS Scnx :: Disable E-SIB
Line 3458: Found matched EarlySibCandidateIdx(%d)
Line 3464: WARNING No cell in EarlySibCandidateList is matched to current candidate
Line 3499: Found Candidate with stopped Tresel timer or rejected => EarlySibCandidateList Index (%d) removed
Line 3517: EarlySibListSize=%d
Line 3523: -------------------  Early SIB Reading Candidate List Start
Line 3537: ------------------- Early SIB Reading Candidate List End
Line 3585: WARNING Can't find the next candidate - EarlySibCandidateIdx(%d)
Line 3622: GetFirstSirReselectionCandidate: The best SirCell is the serving cell
Line 3694: GetNextReselectionCandidate: Only serving cell exists in the list - Wait for next measurements
Line 3715: BestRankedIx : %d
Line 3772: PrivIsFddCandidate: Different LAI of CandidateCell(%d,%d) or Reject condition & BCH error -> Search for the next best cell
Line 3790: Reselection CandidateCell(UARFCN%d,PSC%d) has Not Selectable CSG ID %x -> Search for the next best cell
Line 3797: Reselection CandidateCell(UARFCN%d,PSC%d) has Selectable CSG ID %x
Line 3803: Reselection CandidateCell(UARFCN%d,PSC%d) has No CSG ID
Line 3818: PrivIsFddCandidate: ServingCell not suitable or zero TReselection-> Accept this candidate
Line 3826: PrivIsFddCandidate: Tresel timer expired for inter-freq CandidateCell(%d,%d)
Line 3838: Skip E-SIB reading due to Eutra meas
Line 3843: Skip E-SIB reading while BPLMN is running
Line 3852: Skip E-SIB reading while 2G BPLMN is running in peer SIM
Line 3861: Skip E-SIB reading due to DS
Line 3883: PrivIsFddCandidate: (E-SIB) Skip checking TResel of intra-freq CandidateCell(%d,%d)
Line 3894: PrivIsFddCandidate, (Normal Resel) Tresel timer expired for intra-freq CandidateCell(%d,%d)
Line 3903: PrivIsFddCandidate: CandidateCell(%d,%d) is barred or forbidden
Line 3923: PrivFddCandidate: ValidCandidate=TRUE (%d,%d) but, IsMeasValid=FALSE => Wait for new valid measurement
Line 3942: [PConflict] PrivFddCandidate: CandidateCell(%d,%d) is in paging conflict list
Line 3953: [PConflict] PrivFddCandidate: CandidateCell(%d,%d) is in paging conflict list
Line 4013: Reselection candidate, rejected as BSIC not verified
Line 4048: [APBCR] Updating UtraPriority-based Reselection Criteria
Line 4053: [APBCR] Built Ranking List %d
Line 4104: [APBCR] ->Building PrioBase S Criteria Met List
Line 4139: [APBCR]Remaining Time(%d) is within a Valid Range(%d)
Line 4144: Error Stopping UtraPrioBaseTResel Timer
Line 4166: [APBCR] Reselection candidate, Rejected as Selection criteria not met, 
Line 4172: [APBCR] Reselection candidate, rejected as Cell Barred in the Barred Cell List
Line 4201: =============== UtraPriority Based Rscp Ranking List Start
Line 4205: =============== UtraPriority Based EcN0 Ranking List Start
Line 4212: =============== UtraPriority Based Rscp Ranking List End
Line 4216: =============== UtraPriority Based EcN0 Ranking List End
Line 4233: ERROR HCS is in use for UtraPrio Cell Reslection (ivar=%d) -> CHECK THIS
Line 4306: CSG to non-CSG LTE Cell is ignored, as 3G CSG Cell is highest priority
Line 4312: [APBCR] TReselection is Zero OR Serving Cell Not suitable condition
Line 4324: [APBCR] TReselection Applies TReselection Done.. Ready for Priority Based InterF Reselection
Line 4330: [APBCR]No Priority Based InterF Cell Candidate Available
Line 4336: [APBCR] Updating GsmPriority-based Reselection Criteria
Line 4341: [APBCR] Built Ranking List %d
Line 4346: Start Ranking based on RSSI
Line 4365: [APBCR][PrivBuildGsmPrioBaseSCriteriaMetList] ->Building PrioBase S Criteria Met List
Line 4400: Remaining Time(%d) is within a Valid Range(%d)
Line 4406: Error Stopping GsmPrioBaseTResel Timer  
Line 4428: [APBCR] Reselection candidate, Rejected as Selection criteria not met, 
Line 4434: [APBCR] Reselection candidate, rejected as Cell Barred in the Barred Cell List
Line 4510: [APBCR] TReselection is Zero OR Serving Cell Not suitable condition
Line 4521: [APBCR] TReselection Applies TReselection Done.. Ready for Priority Based InterF Reselection
Line 4527: [APBCR]No Priority Based InterRat Cell Candidate Available
