Line 371: ERROR creating TPeriodicInterFResel
Line 377: ERROR registering for State Change notificationwith CnxMgr
Line 385: Failed to create T322
Line 439: ERROR deleting TPeriodicInterFResel
Line 444: ERROR deleting T_AutonomousCsgSearch
Line 640: TPeriodicInterFResel Stopped (TmId=%d)
Line 645: ERROR stopping TPeriodicInterFResel
Line 792: NotifyRequestedInitiateMeasurementExist : RequestedInitiateMeasurementExist[%d] Set to [%d]
Line 937: Processing SIB19
Line 1050: Processing SIB11
Line 1058: Processing SIB11bis
Line 1068: Processing SIB11
Line 1076: Processing SIB11bis
Line 1084: Processing SIB12
Line 1108: WARNING - ServingCell not found in SIB11/12! Adding it.
Line 1127: ServingCell SibCellInfo Index %d
Line 1134: Stopped Tn timer for Serving Cell
Line 1194: Candidate rejected due to PlmnId not matchingSelected PlmnId
Line 1257: DSDS: [BPLMN OPT] Serving cell (%d) measurments better than -13dB and BPLMN ongoing on same stack -> ignore cellreselection
Line 1263: DSDS: [BPLMN OPT] IsManualScan = %d
Line 1270: DSDS: [BPLMN OPT] Serving cell (%d) measurments less than -13dB, Request cause set to Srrc_ImmediateResel
Line 1277: DSDS: [BPLMN OPT] Serving cell not suitable so, Request cause set to Srrc_ImmediateResel
Line 1284: DSDS: DSRC grant rejected (%d, %d)
Line 1291: DSDS: Waiting for DSRC response for CellReselection (%d, %d)
Line 1300: Attempting InterFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 1321: Classname:CellReselecter: ERROR Illegal State
Line 1343: Attempting IntraFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 1357: [CurrentM] Set CellReselection
Line 1362: Classname:CellReselecter: ERROR Illegal State
Line 1388: EvaluateGsmCandidate: NasSignalling Pending state:ignore GSM Reselection 
Line 1423: Classname:CellReselecter: ERROR Illegal State
Line 1456: EvaluateEutraCandidate: NasSignalling Pending state:ignore EUTRA reselection 
Line 1485: Classname:CellReselecter: ERROR Illegal State
Line 1525: SirBasedReselEnabled is disabled for CS
Line 1533: CheckNextCandidate
Line 1547: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 1553: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 1596: Ignore Normal IF reselection: run SIR reselection (Freq %d, PSC %d, SIR %d)
Line 1602: Ignore Normal IF reselection & SIR reselection (ServingFreqSir %d, NeighFreqSir %d)
Line 1641: GenMsg is NULL
Line 1648: CellReselecter: ERROR Illegal State
Line 1679: SirBasedReselEnabled is disabled for CS
Line 1688: CheckNextPrioCandidate
Line 1702: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 1708: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 1720: [APBCR] InterF Reselection Measurements Received for Utra Priority Based Cell Reselection
Line 1726: [APBCR] No Feasible UtraPrio Candidate
Line 1736: [APBCR] InterRat Reselection Measurements Received for GSM Priority Based Cell Reselection
Line 1743: [APBCR] No Feasible GsmPrio Candidate
Line 1749: Check normal next Candidate
Line 1767: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 1774: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested
Line 1782: [APBCR] Checking InterF Reselection Measurements for Utra Priority Based Cell Reselection
Line 1788: [APBCR] No Feasible UtraPrio Candidate
Line 1801: [APBCR] No Feasible GsmPrio Candidate
Line 1805: Check normal next Candidate
Line 1837: Ignore Normal IF reselection: run SIR reselection (Freq %d, PSC %d, SIR %d)
Line 1843: Ignore Normal IF reselection & SIR reselection (ServingFreqSir %d, NeighFreqSir %d)
Line 1885: GenMsg is NULL
Line 1892: CellReselecter: ERROR Illegal State
Line 1914: Reset CSG to non-CSG Reselection flag 
Line 1953: CellReselecter_p->ReselMeasControllerPtr is NULL
Line 1969: RRC connection release in progress in FACH :: ignore reselection
Line 1975: ReleasingInitialAccessResource in progress :: ignore reselection
Line 1983: (CS call exist) && (RRC is in FACH) :: ignore reselection
Line 1991: (PCH Response in progress) && (RRC is in FACH) :: ignore reselection
Line 2076: ERROR Illegal State
Line 2088: GenMsg_1 is NULL 
Line 2099: GenMsg_2 is NULL 
Line 2151: SirBasedReselEnabled is disabled for CS
Line 2168: >> Triggering Conditions for SirInterFResel (ServingFreq: %d)
Line 2184: >> CHECK: Found SirCandidate in the SirRankingList? -> PASS (CandidateFreq: %d)
Line 2188: >> CHECK: Found SirCandidate in the SirRankingList? -> FAIL
Line 2197: >> CHECK: BestRscp(%d) > BestRscpTh(%d) -> PASS
Line 2202: >> CHECK: BestRscp(%d) > BestRscpTh(%d) -> FAIL
Line 2217: Invalid BandId of ServingCell (%d)
Line 2224: ServingFreq %d: SirMeasured %d (SirStored %d - BandOffset(%d))
Line 2229: >> CHECK: ServingCellSir(%d) < 10dB -> PASS
Line 2234: >> CHECK: ServingCellSir(%d) < 10dB -> FAIL
Line 2242: >> CHECK: CandidateEcNo(%d) > -13dB -> PASS
Line 2247: >> CHECK: CandidateEcNo(%d) > -13dB -> FAIL
Line 2255: >> CHECK: NumCellsInSameFreq(%d) > 1 -> PASS
Line 2260: >> CHECK: NumCellsInSameFreq(%d) > 1 -> FAIL
Line 2272: >> VERDICT: Found SirCandidate -> Ignore Normal IF reselection: run SIR reselection (Freq %d, PSC %d, SIR %d)
Line 2277: >> VERDICT: No SirCandidate Found
Line 2409: Classname:CellReselecter: ERROR Illegal State
Line 2473: GenMsg is NULL
Line 2527: URRC is not in IDLE mode, start ASF Timer for %d sec 
Line 2532: URRC is not in IDLE mode, and ASF Timer is already running
Line 2547: ERROR stopping T_AutonomousCsgSearch
Line 2551: URRC is in IDLE mode, start ASF immediately
Line 2561: NumofTargetCsgCells(%d) Target-Rat(%d), so just ignore this target cell
Line 2568: ERROR stopping T_AutonomousCsgSearch
Line 2575: CellReselecter: This is not a source cell of FingerPrinted CSG Cell
Line 2581: ERROR stopping T_AutonomousCsgSearch
Line 2589: CellReselecter: ERROR Illegal State
Line 2595: SIB11_READ_DCHSPA_YES
Line 2600: SIB11_READ_DCHSPA_NO
Line 2709: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 2715: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 2730: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 2738: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested, IsReleasingProgress
Line 2750: Not Eutra Cell
Line 2759: [APBCR] InterF Reselection Measurements Received for Utra Priority Based Cell Reselection
Line 2766: [APBCR] No Feasible UtraPrio Candidate
Line 2778: [APBCR] ERROR Unknown type of CandidateCell : CellReselecter_p->CandidatePtr->type(%d)
Line 2788: [APBCR] InterRat Reselection Measurements Received for GSM Priority Based Cell Reselection
Line 2796: [APBCR] No Feasible GsmPrio Candidate
Line 2806: [APBCR] ERROR Unknown type of CandidateCell : CellReselecter_p->CandidatePtr->type(%d)
Line 2828: Periodic: PeriodicInterFResel Enabled (Count: %d)
Line 2839: PeriodicInterFReselMeas Not Required Anymore -> Clear PeriodicIFReselEnabled
Line 2846: ServingCell is Femto -> Skip the procedure of finding the best SIR cell
Line 2855: Periodic: NormalCandidatePtr is NULL -> Find SirCandidate
Line 2870: No Normal Candidate & SirCandidate Found -> Trigger PeriodicInterFResel
Line 2880: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 2901: Periodic: Normal InterF Candidate Found-> Find SirCandidate
Line 2909: Normal IF resel candidate is replaced by the SirInterFResel candidate
Line 2919: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 2938: Periodic: Normal IntraF Candidate Found-> Find SirCandidate
Line 2953: Normal IntraF Candidate & SirCandidate Found -> Trigger PeriodicInterFResel
Line 2963: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 2990: >>> GSM is measured. But Current IRAT Measurement rule is MeasureNone <<<
Line 3020: WaitingForCellReselMeasurements_CellReselectionPrioBaseMeasurementsAvailable
Line 3077: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 3083: Evaluation of EUTRA Candidate not allowed BlockIratResel is TRUE!!
Line 3088: Skip Etura Meas: RRC Cnx in progress or User Data Requested
Line 3115: StopMruEutraMeas
Line 3176: Classname:CellReselecter: ERROR Illegal State
Line 3228: GenMsg is NULL
Line 3233: Classname:CellReselecter: ERROR Illegal State
Line 3261: WaitingForCellReselMeasurements_PeriodicInterFReselAvailable
Line 3265: (PeriodicInterFReselAvailable) Ignore Periodic Inter-Freq Reselection
Line 3272: IgnoreCellReselection & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 3295: Call Setup In Progress: Block Periodic Inter-freq
Line 3301: PCH Config Response In Progress: Block Periodic Inter-freq
Line 3315: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 3323: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested
Line 3332: Attempting Eutra Reselection (PeriodicInterFAvailable)
Line 3338: Not Eutra Cell
Line 3348: TReselDuration: %d msec
Line 3354: Invalid Scaled TReselDuration -> Set to %d msec
Line 3367: Attempting PeriodicInterFReselection on CandidateCell(%d,%d)
Line 3374: Not Inter-Freq Cell
Line 3384: ERROR starting TPeriodicInterFResel
Line 3388: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 3399: ERROR stopping TPeriodicInterFResel
Line 3407: SirCandidate Changed & TResel Running & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 3416: SirCandidate Changed & TResel Expired & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 3428: ERROR starting TPeriodicInterFResel
Line 3432: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 3443: Invalid CellId %d
Line 3588: MeasurementInd is ingored by Pending State - CellDch
Line 3606: WARNING CandidateInEvalPtr is not NULL
Line 3611: Deactivation finished :: Retry with the previously received measurements
Line 3630: GenMsg is NULL
Line 3641: CellReselecter: ERROR Illegal State
Line 3661: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 3667: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 3682: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 3690: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested, IsReleasingProgress
Line 3703: Not Eutra Cell
Line 3721: [APBCR] WARNING No Feasible UtraPrio Candidate
Line 3733: [APBCR] ERROR Unknown type of CandidateCell : CellReselecter_p->CandidatePtr->type(%d)
Line 3751: [APBCR] WARNING No Feasible GsmPrio Candidate
Line 3761: [APBCR] ERROR Unknown type of CandidateCell : CellReselecter_p->CandidatePtr->type(%d)
Line 3785: Periodic: PeriodicInterFResel Enabled (Count: %d)
Line 3796: PeriodicInterFReselMeas Not Required Anymore -> Clear PeriodicIFReselEnabled
Line 3803: ServingCell is Femto -> Skip the procedure of finding the best SIR cell
Line 3812: Periodic: NormalCandidatePtr is NULL -> Find SirCandidate
Line 3827: No Normal Candidate & SirCandidate Found -> Trigger PeriodicInterFResel
Line 3837: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 3858: Periodic: Normal InterF Candidate Found-> Find SirCandidate
Line 3866: Normal IF resel candidate is replaced by the SirInterFResel candidate
Line 3876: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 3895: Periodic: Normal IntraF Candidate Found-> Find SirCandidate
Line 3910: Normal IntraF Candidate & SirCandidate Found -> Trigger PeriodicInterFResel
Line 3920: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 3942: WARNING Best CandidateCell has been changed during deactivation time: Previous(%d,%d) vs. Now(%d,%d)
Line 3957: GSM is measured. But Current IRAT Measurement rule is MeasureNone
Line 3991: GenMsg is NULL
Line 4003: CellReselecter: ERROR Illegal State
Line 4013: Confirmed-Still checking on CandidateCell(%d,%d)
Line 4018: ERROR (CandidateCellPtr !=NULL)	CandidateInEvalPtr is NULL - return
Line 4034: Started deactivation on CandidateCell(%d,%d) being evaluated in CELL_FACH
Line 4041: ERROR CandidateCell is NOT active in CELL_FACH
Line 4061: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 4067: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 4090: EutraCell Found - Started deactivation on CandidateCell for U2L reselection
Line 4095: ERROR CandidateCell is NOT active
Line 4103: Not Eutra Cell
Line 4113: Different LAI of CandidateCell(%d,%d) & Call setup in progress =-> Reject this candidate
Line 4126: Different LAI of CandidateCell(%d,%d) & ServingCell >= -15 -> Reject this candidate
Line 4136: CandidateCell(%d,%d) came out of the reject condition
Line 4152: No candidate remaining in the early SIB ranking list
Line 4159: No change in the best cell - Keep attempting on current candidate(%d,%d)
Line 4164: Best cell has changed back to Serving Cell(%d,%d)
Line 4172: ServingCell energy is too low & CandidateCell(%d,%d) energy is not bad -> Keep attempting
Line 4180: Best neighbor changed, but within meas error margin -> Keep attempting on previous candidate(%d,%d)
Line 4185: ServingCell Not Suitable - Finish cell reselection asap on current candidate(%d,%d)
Line 4190: Best cell has changed to Non-Serving Cell(%d,%d)
Line 4213: (CheckingIntraF) Periodic: PeriodicInterFResel Enabled (Count: %d)
Line 4224: PeriodicInterFReselMeas Not Required Anymore -> Clear PeriodicIFReselEnabled
Line 4231: ServingCell is Femto -> Skip the procedure of finding the best SIR cell
Line 4241: (CheckingIntraF)  Normal InterF Candidate Found-> Find SirCandidate
Line 4247: Best Candidate Changed for InterFResel & SirCandidate Found-> To be Handled After Deactivation
Line 4249: Check if the best EcNo and Sir candidates are the same
Line 4259: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 4278: (CheckingIntraF) Periodic: No Restrictions on PeriodicInterFResel  -> Find SirCandidate
Line 4293: No Other Restrictions & SirCandidateFound -> Trigger PeriodicInterFResel
Line 4303: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 4324: Serving cell signal quality is too bad & now ready to camp on CellReselecter_p candidate cell
Line 4333: Started deactivation on CandidateCell(%d,%d) for candidate cell change
Line 4340: ERROR CandidateCell is NOT active
Line 4356: TResel expired or ignored & IsSelectable received for CandidateCell(%d,%d) -> Finish cell reselection
Line 4383: GenMsg is NULL
Line 4391: MUST NOT OCCUR - ERROR SavedTriggeringMsg is NULL
Line 4396: TResel expired or Serving cell not suitable, but still IsSelectable NOT received for CandidateCell(%d,%d) -> Wait!
Line 4452: Abort Early SIB Reading received for CandidateCell(%d,%d)
Line 4472: CellReselecter: ERROR Illegal State
Line 4494: CheckingIntraFreqReselCandidate_CommonChannelSetupComplete
Line 4529: CheckingIntraFreqReselCandidate_PeriodicInterFReselAvailable
Line 4533: (PeriodicInterFReselAvailable) Ignore Periodic Inter-Freq Reselection
Line 4540: IgnoreCellReselection & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 4563: Call Setup In Progress: Block Periodic Inter-freq
Line 4569: PCH Config Response In Progress: Block Periodic Inter-freq
Line 4583: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 4591: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested
Line 4606: EutraCell Found - Started deactivation on CandidateCell(%d,%d) for U2L reselection
Line 4613: ERROR CandidateCell is NOT active
Line 4621: Not Eutra Cell
Line 4629: TReselDuration: %d msec
Line 4656: Started deactivation on CandidateCell(%d,%d) for candidate cell change
Line 4663: ERROR CandidateCell is NOT active
Line 4670: Not Inter-Freq Cell
Line 4675: Too Low ServingEcNo (should not stop the on-going reselection) or ERROR No Matching SirCandidate
Line 4684: ERROR starting TPeriodicInterFResel
Line 4688: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 4699: ERROR stopping TPeriodicInterFResel
Line 4708: SirCandidate Changed & TResel Running & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 4718: SirCandidate Changed & TResel Expired & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 4730: ERROR stopping TPeriodicInterFResel
Line 4738: ERROR starting TPeriodicInterFResel
Line 4742: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 4753: Invalid CellId %d
Line 4778: CheckingIntraFreqReselCandidate_PrioBaseNeighbourCellSysInfoRecved
Line 4798: Currently checking intra-freq resel candidate -> Ignore the event PrioBaseNeighbourCellSysInfoRecved
Line 4844: Deactivate received for intra-freq CandidateCell(%d,%d) - DeactivateForOOS=TRUE
Line 4886: CellReselecter: ERROR Illegal State
Line 4980: CheckingIntraFreqReselCandidate_CellReselectionPrioBaseMeasurementsAvailable
Line 5040: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 5046: Evaluation of EUTRA Candidate not allowed BlockIratResel is TRUE
Line 5051: Skip Etura Meas: RRC Cnx in progress or User Data Requested
Line 5111: uphy_SleepManager_duringCellReselection = TRUE
Line 5141: NotifySelectionNotMeasController: Msg is NULL cause of Suspending
Line 5145: NotifySelectionNotMeasController: Msg is NULL
Line 5203: NotifySelectionToGsmFailed:[NON FATAL ERROR]rrc_Class_CnxMgr_GenerateNewCellSelected returned NULL
Line 5213: NotifySelectionToGsmFailed:[NON FATAL ERROR]rrc_Class_MeasController_GenerateCellSelectionToGsmFailed returned NULL
Line 5279: ERROR new CandidateCellPtr is NULL
Line 5290: Finishing cell reselection on CandidateCellPtr(%d,%d)
Line 5347:  FinishCellSelection Error Band Detection Error 
Line 5379: Classname:CellReselecter: ERROR Illegal State
Line 5396: IsSelectable Received
Line 5413: IsSelectble :: ServingCell NOT suitable for CandidateCell(%d,%d)-> Finish cell reselection
Line 5420: IsSelectable received for CandidateCell(%d,%d) :: Wait for next neighbor cell meas ind
Line 5440: GenMsg is NULL
Line 5454: IsSelectable: ERROR CandidateInEvalPtr == NULL
Line 5459: IsSelectable: ERROR CandidateCellPtr is NULL -> Abort Reselection
Line 5476: GenMsg is NULL
Line 5488: Classname:CellReselecter: ERROR Illegal State
Line 5511: IsNotSelectable Received
Line 5538: (E-SIB) IsRejectedForResel set to TRUE -> Wait for next measurements
Line 5563: GenMsg is NULL
Line 5580: Classname:CellReselecter: ERROR Illegal State
Line 5623: Classname:CellReselecter: ERROR Illegal State
Line 5641: [DSDS]: Dsrc grant received
Line 5665: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 5671: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 5677: [DSDS]: CandidateInEvalPtr is not NULL
Line 5695: [DSDS]: CandidatePtr is made NULL
Line 5699: Attempting InterFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 5720: Classname:CellReselecter: ERROR Illegal State
Line 5743: Attempting IntraFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 5757: [CurrentM] Set CellReselection
Line 5766: Classname:CellReselecter: ERROR Illegal State
Line 5772: [DSDS]: CandidatePtr NULL
Line 5803: Classname:CellReselecter: ERROR Illegal State
Line 5873: Classname:CellReselecter: ERROR Illegal State
Line 5941: Classname:CellReselecter: ERROR Illegal State
Line 5968: Attempting InterFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 5981: MemAllocFailed for Candidate cell
Line 5986: [CurrentM] Set CellReselection
Line 5991: Classname:CellReselecter: ERROR Illegal State
Line 6026: CheckingInterFreqReselCandidate_IsNotSelectable
Line 6132: Attempting InterRAT Cell Reselection to neighbour GSM Cell
Line 6136: [CurrentM] Set CellReselection
Line 6148: Classname:CellReselecter: ERROR Illegal State
Line 6166: Attempting Eutra RAT Cell Reselection to neighbour Eutra Cell
Line 6170: [CurrentM] Set CellReselection
Line 6182: Classname:CellReselecter: ERROR Illegal State
Line 6227: Classname:CellReselecter: ERROR Illegal State
Line 6263: Wait for Signaling Grant to do Rollback
Line 6285: Classname:CellReselecter: ERROR Illegal State
Line 6328: Classname:CellReselecter: ERROR Illegal State
Line 6365: Classname:CellReselecter: ERROR Illegal State
Line 6398: Classname:CellReselecter: ERROR Illegal State
Line 6431: Wait for Signaling Grant to do Rollback
Line 6455: Classname:CellReselecter: ERROR Illegal State
Line 6530: MemAllocFailed for Candidate cell
Line 6537: Classname:CellReselecter: ERROR Illegal State
Line 6608: CheckingEutraRatReselCandidate_MmReselectionToEutraFailed Cause %d and Barred Time value %d
Line 6643: DefaultState_MmEutraStatusInd - EutraDisabled set to %d
Line 6644: DefaultState_MmEutraStatusInd - BlockU2LMeas set to %d
Line 6687: RevertingToServingCell_IsNotSelectable:[NON FATAL ERROR]CellReselecter: ERROR Illegal State
Line 6700: RevertingToServingCell_IsNotSelectable:[NON FATAL ERROR]CellReselecter: ERROR Illegal State
Line 6726: Classname:CellReselecter: ERROR Illegal State
Line 6764: Classname:CellReselecter: ERROR Illegal State
Line 6988: ERROR Illegal State
Line 7010: CellReselecter: ERROR Illegal State: %d
Line 7077: ERROR Cannot generate InternalMsg CellReselectionMeasurementsAvailable
Line 7109: ERROR GenMsg is NULL
Line 7146: ERROR GenMsg is NULL
Line 7195: ERROR GenMsg is NULL
Line 7338: ERROR GenMsg is NULL
Line 7483: ERROR GenMsg is NULL
Line 7513: ERROR GenMsg is NULL
Line 7534: ERROR GenMsg is NULL
Line 7578: ServingCell will be notified after CandidateCell
Line 7699: CellReselecter: ERROR Illegal State
Line 7722: ERROR GenMsg is NULL
Line 7786: ERROR GenMsg is NULL
Line 7793: CnxMgr indicates pending state transition to Cell_Dch
Line 7797: ERROR Unexpected State Change Notification
Line 7851: ERROR GenMsg is NULL
Line 7884: ERROR GenMsg is NULL
Line 7913: Stop T_AutonomousCsgSearch
Line 7920: pal_ERegId_URRC_autonomous_csg_search_compensation_interval - %d sec
Line 7925: TimeInSec - %d sec
Line 7934: Successfully started T_AutonomousCsgSearch(%d sec)
Line 7938: Could not start T_AutonomousCsgSearch(%d sec)
Line 7943: Could not start T_AutonomousCsgSearch(%d sec)
Line 7964: URRC is not in IDLE mode, start ASF Timer for %d sec 
Line 7969: URRC is not in IDLE mode, and ASF Timer is already running
Line 8010: URRC is in IDLE mode, start ASF immediately
Line 8018: NumofTargetCsgCells(%d) Target-Rat(%d), so just ignore this target cell
Line 8025: ERROR stopping T_AutonomousCsgSearch
Line 8032: CellReselecter: This is not a source cell of FingerPrinted CSG Cell
Line 8038: ERROR stopping T_AutonomousCsgSearch
Line 8084: Targer csg cell with Uarfcn(%d) Cpich(%d) found using ASF on Source CellID(%d) Freq(%d)
Line 8086: Received RSCP from BplmnHandler : Rscp(%d) EcN0(%d)
Line 8097: CellReselecter_p->csgMeasRule[%d] Updated
Line 8213: MFBI Eutra frequency %d at Eutra Band %d Earfcn %d
Line 8220: MFBI Eutra frequency %d from Earfcn %d
Line 8235: MFBI Earfcn %d at Eutra Band %d Frequency %d
Line 8241: MFBI Earfcn invalid at Eutra Band %d from Eutra Frequency %d
