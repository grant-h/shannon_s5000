Line 121: [DB] [ERROR]: File Name = %s : Line No =[%u]
Line 123: [DB] [ERROR]: DbIndex[%u] >= MAX_DB_INDEX
Line 129: [DB] [ERROR]: File Name = %s : Line No =[%u]
Line 131: [DB] [ERROR]: configDb_p[%u] is NULL 
Line 137: [DB] [ERROR]: File Name = %s : Line No =[%u]
Line 139: [DB] [ERROR]: DlSecondaryCellId[%u] >= MAX_SUPPORTED_DL_SECONDARY_CELLS
Line 230: [DB Mgr] rrc_DbMgr_CreateT314ReleaseMsgs
Line 238: [DB Mgr] [FAILURE] ILMSet not created
Line 279: [DB Mgr] rrc_DbMgr_CreateT315ReleaseMsgs
Line 287: [DB Mgr] [FAILURE] ILMSet not created
Line 425: [rrc_DbMgr_commitTPhyDlRlInfoTDD] Stored cellParamId = %d
Line 577: [DB Mgr]ERROR:: Band is TDSCDMA_BAND_UNKNOWN
Line 608: [DB Mgr] Stored Network Pointer is NULL
Line 637: [rrc_TDbMgr_commitDChMeasOccassionSeqPatternInfo] Updated..
Line 667: [DB Mgr] rrc_DbMgr_CreateRollbackForConfigFailureMsgs
Line 675: [DB Mgr]   RollBackRabm, RollBackUmac & RollBackUphy are all FALSE
Line 679: [DB Mgr] [FAILURE] ILMSet not created
Line 686: [DB Mgr]   could not create ILMs for rollback ILM set
Line 714: [DB Mgr] rrc_DbMgr_CreateRollbackForConfigFailureMsgs Checking the N-Freq Roll Back Scenaro
Line 715: [DB Mgr] isSecondaryFreq  in Config DB = %d
Line 716: [DB Mgr] Secondary Freq Value = %d
Line 720: [DB Mgr] rrc_DbMgr_CreateRollbackForConfigFailureMsgs N Freq Present in the Cnxmgr Conn So over ride the DB Value
Line 721: [DB Mgr] Secondary Freq Value Fom CnxmgrConn = %d
Line 728: [DB Mgr] rrc_DbMgr_CreateRollbackForConfigFailureMsgs N Freq Not Present in the Cnxmgr Conn So over ride the DB Value
Line 761: [DB Mgr] rrc_DbMgr_CreateRestoreDedicatedResources
Line 766: [DB Mgr] [FAILURE] ILMSet not created
Line 839: [DB Mgr] Cannot Create ILM Set for Rollback Fach
Line 876: [DB Mgr] Cuamc RB Config ILM not sent as Num RB is Zero from DB
Line 959: [DB Mgr] rrc_DbMgr_AddIlmsForRelTimerIlmSet
Line 963: [DB Mgr]  ILM set not created
Line 1065: [DB Mgr] rrc_DbMgr_popMsgDbforReleaseT314orT315Msgs
Line 1140: [DB Mgr] rrc_DbMgr_Check4RollbackIlms
Line 1149: [DB Mgr]  no RABM ILMs to rollback
Line 1171: [DB Mgr]  no CUPHY ILMs to rollback
Line 1192: [DB Mgr]  no CUMAC ILMs to rollback
Line 1253: [DB Mgr] MsgDb ulDchToModifyBitmask: 0x%x, MsgDb ulPhyTrchToReleaseBitMask: 0x%x,  MsgDb ulDchToAddBitmask: 0x%x
Line 1296: [DB Mgr] MsgDb macConfRbReqBitMask: 0x%x, CfgDb rbIdPresentBitMask: 0x%x, MsgDb deletedRbIdBitMask: 0x%x 
Line 1365: [DB Mgr] cant be sending CPC Deactivate Req as CPC was not configured before
Line 1381: [DB Mgr] cant be sending CPC Rel Req as CPC was not configured before
Line 1483: [DB Mgr] HSUPA was not configured before 
Line 1516: [DB Mgr]  no rollback message for CUMAC_Config_DCH_REQ or CUMAC_REMOVE_DCH_REQ
Line 1544: [DB Mgr]  Rollback ILM: CUMAC_REMOVE_TFCS_REQ is added
Line 1557: [DB Mgr]  no rollback message for CUMAC_Config_RB_REQ or CUMAC_REMOVE_RB_REQ
Line 1613: [DB Mgr] HSDPA was not configured before 
Line 1774: [DB Mgr] DlSecondary Cell HSDPA (%d) was not configured before 
Line 1913: [DB Mgr] cant be sending CPC Deactivate Req as CPC was not configured before
Line 1933: [DB Mgr] cant be sending CPC Rel Req as CPC was not configured before
Line 2012: [DB Mgr] HSUPA was not configured before 
Line 2034: [DB Mgr]  HSUPA was not configured before
Line 2131: [DB Mgr] HSDPA was not configured before 
Line 2175: [DB Mgr] rrc_DbMgr_AddIlmsForRollback
Line 2208: [DB Mgr] no ILMs to actually release, RollbackFlags RollbackRabm[%d],  RollbackCumac[%d], RollbackCuphy[%d] 
Line 2381: [DB Mgr] RollbackDb: ulDchToAddBitmask: 0x%x
Line 2386: [DB Mgr] RollbackDb: macConfRbReqBitMask: 0x%x
Line 2436: [DB Mgr] RollbackDb: macConfRbReqBitMask: 0x%x
Line 2467: [DB Mgr] RollbackDb: macConfRbReqBitMask: 0x%x
Line 2719: [DB Mgr] Create&RelDedRes
Line 3023: [DB Mgr] DB Commit: ulDchActuallyConfiguredInPhyBitMask 0x%x
Line 3084: [DB Mgr] DB Commit: dlDchActuallyConfiguredInPhyBitMask 0x%x
Line 3324: [DB Mgr]  Config Db RLCount : [%u] , Type : [%u] and DlUarfcn : [%u] 
Line 3329: [DB Mgr] Config Db  PSC : [%u]
Line 3332: [DB Mgr] dpchFrameOffset 0x%x
Line 3336: [DB Mgr] fdpchFrameOffset 0x%x
Line 3369: [DB Mgr] ===========Before DB Commit:===============
Line 3398: [DB Mgr] Db Commit: RL with psc: [%u], removed from config Db
Line 3406: [ERROR] PrimaryCpich: [%d] not present in ConfigDb
Line 3417: [ERROR] PrimaryCpich: [%d] not present in ConfigDb
Line 3439: [DB Mgr] Db Commit: HHO : All Rls to be replaced. Config Db RLCount Before: [%u], Config Db RLCount After: [%u]
Line 3460: [DB Mgr] RadioLinkPriv::AddToFddNetwork - No FddNetwork instance available
Line 3479: [DB Mgr] Db Commit: RL with psc: [%u], removed from config Db
Line 3482: [ERROR] PrimaryCpich: [%d] not present in Config Db
Line 3500: [DB Mgr] RadioLinkPriv::AddToFddNetwork - No FddNetwork instance available
Line 3503: [DB Mgr] Db Commit: RL with psc: [%u], added in config Db
Line 3511: [ERROR] No RL Info present at RL Index[%d] Config Db
Line 3521: [DB Mgr] ===========After DB Commit:===============
Line 3559: [DB Mgr] Db Commit: Reconfigured RAB: [%u] updated in Config Db at Index: [%u]
Line 3570: [ERROR] Reconfig Rab [%d] not present in Config Db
Line 3600: [DB Mgr] Db Commit: RAB: [%u] deleted from Config Db at Index: [%u]
Line 3636: [DB Mgr] Db Commit: RAB: [%u] Added in Config Db at Index: [%u]
Line 3663: [DM Update] No RAB(0) - Initiated from reception of RRC Connection Setup
Line 3672: [DM Update] CS RAB + PS RAB(3)
Line 3677: [DM Update] CS RAB only(1)
Line 3682: [DM Update] PS RAB only(2)
Line 3687: [DM Update] No RAB(0)
Line 4049: [DB Mgr] [R6] EDCH & HSDSCH
Line 4055: [DB Mgr] [R6] EDCH Only
Line 4062: [DB Mgr] [R5] HSDSCH
Line 4068: [DB Mgr] [R99] DCH
Line 4144: [DM Update] BandId(%d), Uarfcn(%d), PSC(%d), LAC(%d), RAC(%d)
Line 4195: [DM Update] cycle1(%d), cycle2(%d), InactivityThForCycle2(%d), cycle(%d), InactivityThForCycle(%d)
Line 4200: [DM Update] EDCH TTI is not valid so skip the DM update
Line 4215: [DM Update] UtranDrxCycleLengthCoef(%d)
Line 4296: Primary UARFCN = %d, Secondary UARFCN =  %d, Cell ParamId = %d
Line 4473: [DB Mgr] hsdpaDbInfoInst is NULL 
Line 4645: [DB Mgr] hsupaDbInfoInst is NULL 
Line 4846: [DB Mgr] Config DB Created
Line 4925: [DB Mgr] Message DB Freed at Index [%d]
Line 4983: [DB Mgr] Message DB Created at Index [%d] for msgType [%d]
Line 5315: [DB Mgr] Stored Network Pointer is NULL
Line 5454: [DM Update] BandId(%d), Uarfcn(%d), PSC(%d), RAC(%d)
Line 5456: [DM Update] PLMN(%x%x%x%x%x%x)
Line 5463: Wrong BandId 0(Dluarfcn: %d) was detected so it won't be updated to SIPC
Line 5468: Wrong UARFCN(%d) was detected so it won't be updated to SIPC
Line 5512: [DB Mgr] rrc_DbMgr_RemoveCompressedMode(%d)
Line 5709: [DB Mgr] rrc_DbGetCIQInfoForAllRls: [success] - DlRadioLinkCount = 0
Line 5730: [DB Mgr] RadioLinkSet::GetCIQInfoForAllRls: [success]
Line 5755: Not available configDb existed
Line 5762: CollectAndSendCIQMetricRF64: ResMgrPHY_p==NULL
Line 6040: [DB][ECELL_FACH] Clear C_RNTI_INFO_OK
Line 6053: [DB][ECELL_FACH] Restore C_RNTI_INFO_OK
Line 6100: [DB][ECELL_FACH] Clear H_RNTI_INFO_OK
