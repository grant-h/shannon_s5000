Line 322: ERROR creating TPeriodicInterFResel
Line 328: ERROR registering for State Change notificationwith CnxMgr
Line 387: ERROR deleting TPeriodicInterFResel
Line 516: TPeriodicInterFResel Stopped (TmId=%d)
Line 521: ERROR stopping TPeriodicInterFResel
Line 645: NotifyRequestedInitiateMeasurementExist : RequestedInitiateMeasurementExist[%d] Set to [%d]
Line 788: Processing SIB19
Line 883: Processing SIB11
Line 894: Processing SIB11bis
Line 904: Processing SIB11
Line 915: Processing SIB11bis
Line 923: Processing SIB12
Line 948: WARNING - ServingCell not found in SIB11/12! Adding it.
Line 975: Stopped Tn timer for Serving Cell
Line 1074: Attempting InterFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 1095: Classname:TddCellReselecter: ERROR Illegal State
Line 1118: Attempting IntraFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 1130: Classname:TddCellReselecter: ERROR Illegal State
Line 1156: NasSignalling Pending state:Block Inter-freq and Inter-RAT 
Line 1191: Classname:TddCellReselecter: ERROR Illegal State
Line 1224: NasSignalling Pending state:Block Inter-freq and Inter-RAT 
Line 1257: Classname:TddCellReselecter: ERROR Illegal State
Line 1289: CheckNextCandidate
Line 1303: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 1309: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 1367: GenMsg is NULL
Line 1374: TddCellReselecter: ERROR Illegal State
Line 1451: TddCellReselecter_p->ReselMeasControllerPtr is NULL
Line 1473: RRC connection release in progress in FACH :: ignore reselection
Line 1479: ReleasingInitialAccessResource in progress :: ignore reselection
Line 1490: (CS call exist) && (RRC is in FACH) :: ignore reselection
Line 1595: ERROR Illegal State
Line 1609: GenMsg_1 is NULL 
Line 1620: GenMsg_2 is NULL 
Line 1802: Classname:TddCellReselecter: ERROR Illegal State
Line 1871: GenMsg is NULL
Line 1876: TddCellReselecter: ERROR Illegal State
Line 1961: >>> Ignore Cell Reselection is TRUE . Free the Triggering Msg and return<<<
Line 1975: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 1996: >>> GSM is measured. But Current IRAT Measurement rule is MeasureNone <<<
Line 2022: WaitingForCellReselMeasurements_TddCellReselectionPrioBaseMeasurementsAvailable
Line 2079: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 2085: Evaluation of EUTRA Candidate not allowed BlockIratResel is TRUE!!
Line 2090: Skip Etura Meas: RRC Cnx in progress or User Data Requested
Line 2157: Classname:TddCellReselecter: ERROR Illegal State
Line 2198: GenMsg is NULL
Line 2203: Classname:CellReselecter: ERROR Illegal State
Line 2231: WaitingForCellReselMeasurements_PeriodicInterFReselAvailable
Line 2235: (PeriodicInterFReselAvailable) Ignore Periodic Inter-Freq Reselection
Line 2242: IgnoreCellReselection & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 2265: Call Setup In Progress: Block Periodic Inter-freq
Line 2271: PCH Config Response In Progress: Block Periodic Inter-freq
Line 2285: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 2293: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested
Line 2302: Attempting Eutra Reselection (PeriodicInterFAvailable)
Line 2308: Not Eutra Cell
Line 2318: TReselDuration: %d msec
Line 2324: Invalid Scaled TReselDuration -> Set to %d msec
Line 2345: Attempting PeriodicInterFReselection on CandidateCell(%d,%d)
Line 2352: Not Inter-Freq Cell
Line 2362: ERROR starting TPeriodicInterFResel
Line 2366: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 2377: ERROR stopping TPeriodicInterFResel
Line 2385: SirCandidate Changed & TResel Running & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 2394: SirCandidate Changed & TResel Expired & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 2406: ERROR starting TPeriodicInterFResel
Line 2410: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 2421: Invalid CellId %d
Line 2575: WARNING CandidateInEvalPtr is not NULL
Line 2580: Deactivation finished :: Retry with the previously received measurements
Line 2599: GenMsg is NULL
Line 2609: TddCellReselecter: ERROR Illegal State
Line 2629: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 2635: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 2650: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 2658: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested, IsReleasingProgress
Line 2671: Not Eutra Cell
Line 2691: WARNING Best CandidateCell has been changed during deactivation time: Previous(%d,%d) vs. Now(%d,%d)
Line 2704: WARNING Best CandidateCell has been changed during deactivation time: Previous(%d,%d) vs. Now(%d,%d)
Line 2720: GSM is measured. But Current IRAT Measurement rule is MeasureNone
Line 2751: GenMsg is NULL
Line 2761: TddCellReselecter: ERROR Illegal State
Line 2770: Confirmed-Still checking on CandidateCell(%d,%d)
Line 2775: ERROR (CandidateCellPtr !=NULL)	CandidateInEvalPtr is NULL - return
Line 2791: Started deactivation on CandidateCell being evaluated in CELL_FACH
Line 2797: ERROR CandidateCell is NOT active in CELL_FACH
Line 2817: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 2823: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 2846: EutraCell Found - Started deactivation on CandidateCell for U2L reselection
Line 2851: ERROR CandidateCell is NOT active
Line 2859: Not Eutra Cell
Line 2869: Different LAI of CandidateCell(%d,%d) & Call setup in progress =-> Reject this candidate
Line 2895: CandidateCell(%d,%d) came out of the reject condition
Line 2908: No candidate remaining in the early SIB ranking list
Line 2915: No change in the best cell - Keep attempting on current candidate(%d,%d)
Line 2920: Best cell has changed back to Serving Cell(%d,%d)
Line 2927: ServingCell Not Suitable - Finish cell reselection asap on current candidate(%d,%d)
Line 2932: Best cell has changed to Non-Serving Cell(%d,%d)
Line 2949: Serving cell signal quality is too bad & now ready to camp on TddCellReselecter_p candidate cell
Line 2958: Started deactivation on CandidateCell(%d,%d) for candidate cell change
Line 2965: ERROR CandidateCell is NOT active
Line 2981: TResel expired or ignored & IsSelectable received for CandidateCell(%d,%d) -> Finish cell reselection
Line 3008: MUST NOT OCCUR - ERROR SavedTriggeringMsg is NULL
Line 3013: TResel expired or Serving cell not suitable, but still IsSelectable NOT received for CandidateCell(%d,%d) -> Wait!
Line 3064: Abort Early SIB Reading received for CandidateCell(%d,%d)
Line 3083: TddCellReselecter: ERROR Illegal State
Line 3107: CheckingIntraFreqReselCandidate_CommonChannelSetupComplete
Line 3136: CheckingIntraFreqReselCandidate_PeriodicInterFReselAvailable
Line 3140: (PeriodicInterFReselAvailable) Ignore Periodic Inter-Freq Reselection
Line 3147: IgnoreCellReselection & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 3170: Call Setup In Progress: Block Periodic Inter-freq
Line 3176: PCH Config Response In Progress: Block Periodic Inter-freq
Line 3191: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 3199: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested
Line 3214: EutraCell Found - Started deactivation on CandidateCell(%d,%d) for U2L reselection
Line 3221: ERROR CandidateCell is NOT active
Line 3229: Not Eutra Cell
Line 3237: TReselDuration: %d msec
Line 3264: Started deactivation on CandidateCell(%d,%d) for candidate cell change
Line 3280: Started deactivation on CandidateCell(%d,%d) for candidate cell change
Line 3288: ERROR CandidateCell is NOT active
Line 3296: Not Inter-Freq Cell
Line 3301: Too Low ServingEcNo (should not stop the on-going reselection) or ERROR No Matching SirCandidate
Line 3310: ERROR starting TPeriodicInterFResel
Line 3314: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 3325: ERROR stopping TPeriodicInterFResel
Line 3334: SirCandidate Changed & TResel Running & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 3344: SirCandidate Changed & TResel Expired & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 3356: ERROR stopping TPeriodicInterFResel
Line 3364: ERROR starting TPeriodicInterFResel
Line 3368: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 3379: Invalid CellId %d
Line 3406: CheckingIntraFreqReselCandidate_PrioBaseNeighbourCellSysInfoRecved
Line 3426: Currently checking intra-freq resel candidate -> Ignore the event PrioBaseNeighbourCellSysInfoRecved
Line 3478: Deactivate received for intra-freq CandidateCell(%d,%d) - DeactivateForOOS=TRUE
Line 3528: TddCellReselecter: ERROR Illegal State
Line 3625: CheckingIntraFreqReselCandidate_TddCellReselectionPrioBaseMeasurementsAvailable
Line 3686: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 3692: Evaluation of EUTRA Candidate not allowed BlockIratResel is TRUE
Line 3697: Skip Etura Meas: RRC Cnx in progress or User Data Requested
Line 3727: StopMruEutraMeas
Line 3779: uphy_SleepManager_duringCellReselection = TRUE
Line 3784: Tphy_SleepManager_duringCellReselection Need to be Implemented in Tdd
Line 3811: NotifySelectionNotMeasController: Msg is NULL cause of Suspending
Line 3815: NotifySelectionNotMeasController: Msg is NULL
Line 3870: NotifySelectionToGsmFailed:[NON FATAL ERROR]rrc_Class_CnxMgr_GenerateNewCellSelected returned NULL
Line 3880: NotifySelectionToGsmFailed:[NON FATAL ERROR]rrc_Class_MeasController_GenerateCellSelectionToGsmFailed returned NULL
Line 3950: ERROR new CandidateCellPtr is NULL
Line 3970: Finishing cell reselection on CandidateCellPtr(%d,%d)
Line 4032:  FinishCellSelection Error Band Detection Error 
Line 4077: Classname:TddCellReselecter: ERROR Illegal State
Line 4103: IsSelectable Received
Line 4126: IsSelectble:: ServingCell NOT suitable for CandidateCell(%d,%d)-> Finish cell reselection
Line 4135: IsSelectble & TResel not running for CandidateCell(%d,%d)-> Finish cell reselection
Line 4157: GenMsg is NULL
Line 4162: IsSelectable but TResel not yet expired for CandidateCell(%d,%d) -> Do nothing. Wait for next neighbor cell ind
Line 4177: IsSelectable: ERROR CandidateInEvalPtr == NULL
Line 4182: IsSelectable: ERROR CandidateCellPtr is NULL -> Abort Reselection
Line 4198: GenMsg is NULL
Line 4209: Classname:TddCellReselecter: ERROR Illegal State
Line 4238: IsNotSelectable Received
Line 4266: (E-SIB) IsRejectedForResel set to TRUE -> Wait for next measurements
Line 4273: (CS call exist) && (RRC is in FACH) :: Ignore reselection
Line 4296: GenMsg is NULL
Line 4313: Classname:TddCellReselecter: ERROR Illegal State
Line 4349: Classname:TddCellReselecter: ERROR Illegal State
Line 4381: Classname:TddCellReselecter: ERROR Illegal State
Line 4455: Classname:TddCellReselecter: ERROR Illegal State
Line 4536: Classname:TddCellReselecter: ERROR Illegal State
Line 4570: Attempting InterFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 4583: MemAllocFailed for Candidate cell
Line 4588: [CurrentM] Set CellReselection
Line 4593: Classname:TddCellReselecter: ERROR Illegal State
Line 4644: (E-SIB) IsRejectedForResel set to TRUE -> Wait for next measurements
Line 4649: CheckingInterFreqReselCandidate_IsNotSelectable
Line 4762: Attempting InterRAT Cell Reselection to neighbour GSM Cell
Line 4766: [CurrentM] Set CellReselection
Line 4778: Classname:TddCellReselecter: ERROR Illegal State
Line 4800: Attempting Eutra RAT Cell Reselection to neighbour Eutra Cell
Line 4804: [CurrentM] Set CellReselection
Line 4816: Classname:TddCellReselecter: ERROR Illegal State
Line 4861: Classname:TddCellReselecter: ERROR Illegal State
Line 4899: Wait for Signaling Grant to do Rollback
Line 4922: Classname:TddCellReselecter: ERROR Illegal State
Line 4964: Classname:TddCellReselecter: ERROR Illegal State
Line 5006: Wait for Signaling Grant to do Rollback
Line 5029: Classname:TddCellReselecter: ERROR Illegal State
Line 5100: MemAllocFailed for Candidate cell
Line 5107: Classname:TddCellReselecter: ERROR Illegal State
Line 5188: CheckingEutraRatReselCandidate_MmReselectionToEutraFailed Cause %d and Barred Time value %d
Line 5217: DefaultState_MmEutraStatusInd - EutraDisabled set to %d
Line 5218: DefaultState_MmEutraStatusInd - BlockU2LMeas set to %d
Line 5275: RevertingToServingCell_IsNotSelectable:[NON FATAL ERROR]TddCellReselecter: ERROR Illegal State
Line 5289: RevertingToServingCell_IsNotSelectable:[NON FATAL ERROR]TddCellReselecter: ERROR Illegal State
Line 5318: Classname:TddCellReselecter: ERROR Illegal State
Line 5361: Classname:TddCellReselecter: ERROR Illegal State
Line 5616: ERROR Illegal State
Line 5640: TddCellReselecter: ERROR Illegal State: %d
Line 5720: Classname:CellReselecter: ERROR Illegal State
Line 5756: Classname:CellReselecter: ERROR Illegal State
Line 5840: ERROR Cannot generate InternalMsg CellReselectionMeasurementsAvailable
Line 5864: ERROR GenMsg is NULL
Line 5887: ERROR GenMsg is NULL
Line 5904: ERROR GenMsg is NULL
Line 5940: ERROR GenMsg is NULL
Line 5961: ERROR GenMsg is NULL
Line 5982: ERROR GenMsg is NULL
Line 6003: ERROR GenMsg is NULL
Line 6024: ERROR GenMsg is NULL
Line 6046: ERROR GenMsg is NULL
Line 6066: ERROR GenMsg is NULL
Line 6086: ERROR GenMsg is NULL
Line 6106: ERROR GenMsg is NULL
Line 6121: ERROR GenMsg is NULL
Line 6141: ERROR GenMsg is NULL
Line 6156: ERROR GenMsg is NULL
Line 6178: ERROR GenMsg is NULL
Line 6329: TddCellReselecter: ERROR Illegal State
Line 6354: ERROR GenMsg is NULL
Line 6409: ERROR GenMsg is NULL
Line 6416: CnxMgr indicates pending state transition to Cell_Dch
Line 6420: ERROR Unexpected State Change Notification
Line 6435: ERROR GenMsg is NULL
Line 6450: ERROR GenMsg is NULL
Line 6466: ERROR GenMsg is NULL
Line 6512: DSDS: DSRC grant rejected (%d, %d)
Line 6519: DSDS: Waiting for DSRC response for CellReselection (%d, %d)
Line 6525: Attempting InterFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 6549: Classname:TddCellReselecter: ERROR Illegal State
Line 6578: Attempting IntraFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i in Cell Fach State Or In Pending CellFach State
Line 6582: Classname:TddCellReselecter: ERROR Illegal State
Line 6593: No fach & measurements  release now
Line 6607: DSDS: DSRC grant rejected (%d, %d)
Line 6614: DSDS: Waiting for DSRC response for CellReselection (%d, %d)
Line 6622: Tdd cellreselecter new state IntraFreqReselection now
Line 6640: Attempting IntraFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CELL PARAM ID %i
Line 6645: Attempting IntraFrequency Cell Reselection
Line 6658: Classname:TddCellReselecter: ERROR Illegal State
Line 6704: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 6710: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 6716: [DSDS]: CandidateInEvalPtr is not NULL
Line 6736: [DSDS]: CandidatePtr is made NULL
Line 6741: Attempting InterFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 6765: Classname:TddCellReselecter: ERROR Illegal State
Line 6773: Attempting IntraFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i in Cell Fach State Or In Pending CellFach State
Line 6777: Classname:TddCellReselecter: ERROR Illegal State
Line 6788: No fach & measurements  release now
Line 6795: Tdd cellreselecter new state IntraFreqReselection now
Line 6813: Attempting IntraFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CELL PARAM ID %i
Line 6818: Attempting IntraFrequency Cell Reselection
Line 6828: [CurrentM] Set CellReselection
Line 6833: Classname:TddCellReselecter: ERROR Illegal State
Line 6843: [DSDS]: CandidatePtr NULL
Line 6862: ERROR GenMsg is NULL
