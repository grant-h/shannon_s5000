Line 280: %s SystemInformation is PENDING
Line 294: %s SystemInformation is PENDING
Line 302: %s BarredFreqAdded
Line 335: RefreshCellsBeingMeasured
Line 422: %s: Adding cells since old measurement rule: %s,New measurement rule: %s
Line 457: > DRX (%d < 640):: Overwrite RemoveCellHyst (%d -> 8)
Line 464: Ignore RemoveHyst
Line 477: %s: removing cells (HystCounter = %i) since old measurement rule: %s, new rule: %s
Line 566: rrc_ReselMeasurement_RefreshEutraFreqsBeingMeasured
Line 604: PrioBaseMeasurementRuleMasks[NewMeasRule]: %d, PrioBaseMeasurementRuleMasks[MeasurePrioDefault]: %d
Line 608: NewMeasurementMask = %d,
Line 611: OldMeasRule = %d, NewMeasRule = %d
Line 621: Barred Earfcn has been added to CellList after Barred Timer Expiry
Line 624: EutraFreqsToAdd = %d, EutraFreqsBeingMeasured = %d, EutraFreqsBeingMeasured ^ NewMeasurementMask = %d,  NewMeasurementMask = %d
Line 644: NumEutraFreqsToAdd %d,EutraFreqsToAdd: %d   EutraFreqsToAddCpy : %d
Line 654:  ReselMeasurement_p->EutraFreqsBeingMeasured %d,CellsToAddCpy: %d
Line 658: %s: Adding Eutra Freqs since old measurement rule: %s,New measurement rule: %s
Line 677: %s: Removing Eutra Freqs (HystCounter = %i) since old measurement rule: %s, new rule: %s
Line 720: CellId: %d Cell %s paired with PlmnId[Last]: 0x%X, 0x%X, 0x%X
Line 729: CellId: %d Cell %s paired with PlmnId[Selected]: 0x%X, 0x%X, 0x%X
Line 738: CellId: %d Cell %s paired with PlmnId[%d]: 0x%X, 0x%X, 0x%X
Line 777: UpdateSib18PlmnIds: CellList Type is %d Is Idle Mode?? %d, Num Idle PLMN ID's in SIB18 %d and  Num Conn PLMN ID's in SIB18 %d
Line 862: ServingCell was not present in Sib11/12 so not pairing it with a PlmnId from Sib18
Line 889: ServingCell was not present in Sib11/12 so not pairing it with a PlmnId from Sib18
Line 903: UpdateSib18PlmnIds: NumShPlmns:  %d 
Line 977: CellInfoId is NULL in UpdateSib18PlmnIds
Line 983: Ignoring %d extra PLMN Identities
Line 1012: Releasing %s Measurement Id: %i
Line 1022: InterFreqMeas to be Released & ImmediateInterFReselMeas Required-> Clear ImmediateInterFReselMeas
Line 1062: ResetRemoveIntraCellsHystCounter %d
Line 1067: ResetRemoveInterCellsHystCounter %d
Line 1072: ResetRemoveIratCellsHystCoutner %d
Line 1076: Invalid CellListType %d
Line 1109: Invalid CellListType %d
Line 1144: Invalid CellListType %d
Line 1147: [CellListType %d] RemoveCellsHystCounter %d
Line 1176: Releasing %s Measurement Id: %i
Line 1257: PostProcessSysInfo: SIB18 ptr present, Num Cells in CellInfoList %d, IsHCS in Use %d and  HcsPrioS %d
Line 1261: rrc_ReselMeasurement_PostProcessSysInfo: SIB18 ptr present, Num Cells in CellInfoList %d, IsHCS in Use %d and  HcsPrioS %d
Line 1268: PostProcessSysInfo: SIB18 ptr not present, Num Cells in CellInfoList %d, IsHCS in Use %d and  HcsPrioS %d
Line 1275: PostProcessSysInfo: CellListType (%d), IsUtraPrioBaseInUse(%d), IsEutraPrioBaseInUse(%d), IsGsmPrioBaseInUse(%d)
Line 1280: PostProcessSysInfo: rrc_Features.UtranApbcr disabled
Line 1365: PostProcessSysInfo: HcsPrioS : %d, HcsPrioN(CellId:%d,CellListType%d) : %d
Line 1423: [APBCR][PostProcessSysInfo] SYS_INFO_PRIORITY selected for UARFCN %d with UtraPrio(%d) from SIB19
Line 1431: [APBCR][PostProcessSysInfo] DEDICATED_PRIORITY / UtraPrio(%d) was from PriorityInfoList
Line 1441: [APBCR][PostProcessSysInfo] DEDICATED_PRIORITY / Error to get Priority from UARFCN(%d) of PriorityInfoList UtraPrio is (%d). So this UARFCN is not considered for Reselection
Line 1454: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanOrEqualToSC] = %d
Line 1460: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioLessThanOrEqualToSC] = %d
Line 1468: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanSC] = %d
Line 1474: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanOrEqualToSC] = %d
Line 1482: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioLessThanOrEqualToSC] = %d
Line 1506: [APBCR][PostProcessSysInfo] SYS_INFO_PRIORITY selected for UARFCN %d with GsmPrio(%d) from SIB19
Line 1514: [APBCR][PostProcessSysInfo] DEDICATED_PRIORITY / GsmPrio(%d) was from PriorityInfoList
Line 1524: [APBCR][PostProcessSysInfo] DEDICATED_PRIORITY / Error to get Priority from UARFCN(%d) of PriorityInfoList. So GsmPrio(%d) is not considered for Reselection
Line 1537: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanOrEqualToSC] = %d
Line 1543: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioLessThanOrEqualToSC] = %d
Line 1551: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanSC] = %d
Line 1557: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanOrEqualToSC] = %d
Line 1565: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioLessThanOrEqualToSC] = %d
Line 1620: [rrc_EutraCellSelReselInfo_IsQuickRBCriteriaMet] DEDICATED_PRIORITY / ServCellPrio(%d) was from PriorityInfoList
Line 1626: DEDICATED_PRIORITY / Error to get Priority from UARFCN(%d) of PriorityInfoList. So ServCellPrioTdd(%d) from rrc_FddCellSelReselInfo is used
Line 1631: rrc_ReselMeasurement_PostProcessEutraPrioBaseSysInfo : NumEutraFreqs = %d, ServCellPrioTdd = %d IsPrioBaseInUse = %d
Line 1650: ThisEutraFreq = %d
Line 1656: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioAll] = %d
Line 1668: [rrc_ReselMeasurement_PostProcessEutraPrioBaseSysInfo] SYS_INFO_PRIORITY selected. EutraPrio(%d) was from SIB19
Line 1676: [rrc_ReselMeasurement_PostProcessEutraPrioBaseSysInfo] DEDICATED_PRIORITY / EutraPrio(%d) was from PriorityInfoList
Line 1684: DEDICATED_PRIORITY / Error to get Priority from EARFCN(%d) of PriorityInfoList. So EutraPrio(%d) from rrc_EutraFreqSelReselInfo is used
Line 1692: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanOrEqualToSC] = %d
Line 1698: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioLessThanOrEqualToSC] = %d
Line 1706: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanSC] = %d
Line 1712: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanOrEqualToSC] = %d
Line 1720: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioLessThanOrEqualToSC] = %d
Line 1731: EutraFreqInfoInstd = NULL @ EutraFreqIx = %d
Line 1744: CellListType (%d), IsUtraPrioBaseInUse(%d), IsEutraPrioBaseInUse(%d)
Line 1760: [PostProcessPrioBaseSysInfo] DEDICATED_PRIORITY / ServCellPrio(%d) was from PriorityInfoList
Line 1766: DEDICATED_PRIORITY / Error to get Priority from UARFCN(%d) of PriorityInfoList. So ServCellPrio(%d) from rrc_FddCellSelReselInfo is used
Line 1770: [PostProcessPrioBaseSysInfo] NumEutraFreqs = %d, ServCellPrio = %d IsEutraPrioBaseInUse = %d
Line 1788: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioAll] = %d
Line 1800: [PostProcessPrioBaseSysInfo] SYS_INFO_PRIORITY selected. EutraPrio(%d) was from SIB19
Line 1808: [PostProcessPrioBaseSysInfo] DEDICATED_PRIORITY / EutraPrio(%d) was from PriorityInfoList
Line 1817: DEDICATED_PRIORITY / Error to get Priority from EARFCN(%d) of PriorityInfoList. So EutraPrio(%d) from rrc_EutraFreqSelReselInfo is used
Line 1826: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanOrEqualToSC] = %d
Line 1832: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioLessThanOrEqualToSC] = %d
Line 1840: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanSC] = %d
Line 1846: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanOrEqualToSC] = %d
Line 1854: ThisEutraFreq = %d, PrioBaseMeasurementRuleMasks[MeasurePrioLessThanOrEqualToSC] = %d
Line 1862: ERROR EutraFreqInfoInstd = NULL @ EutraFreqIx = %d
Line 1933: RefreshCellsBeingMeasured
Line 2000: %s: Adding cells since old measurement rule: %s,New measurement rule: %s
Line 2030: Ignore RemoveHyst
Line 2040: %s: removing cells (HystCounter = %i) since old measurement rule: %s, new rule: %s
