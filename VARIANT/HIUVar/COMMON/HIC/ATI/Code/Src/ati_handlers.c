Line 195:  ati_FwHandlers_HandleUnsolicitedMessage
Line 239: NS_NETWORK_SELECT_MENU : %d
Line 248:  NS_REJ_CAUSE_IND
Line 292: NS_ECT_RSP
Line 451: NS_USSD_TERMINATE_IND(%d)
Line 460: ati_FwHandlers_HandleUnsolicitedMessage: Signal [%04X] NOT IMPLEMENTED.
Line 531: Received NS_NETWORK_SELECT_MENU : NS_STOP_NETWORK_RSP - clearing all PS and CS contexts !!
Line 636: NS_NSATI_COMMAND_REQ
Line 644: NS_PDN_DISCONNECT_IND
Line 656: NS_NETWORK_REGISTRATION_NTF received: EpsAttacthStatus [%d]
Line 661: NS_EPS_DEDICATED_PDP_ACTIVATE_IND 
Line 665: NS_PDP_UPDATE_SID_IND 
Line 672: NS_EPS_PDP_ACTIVATE_CNF
Line 684: NS_USB_CABLE_DISCONNECT_IND
Line 695: [NS_CBST_PARAMS_SET_IND]bearer type %d, Speed %d, Name %d, Ce %d
Line 745: ImsRegistrationStatus : %d ImsFeature : %d
Line 801: ati_FwHandlers_HandleUnsolicitedMessage: UNKNOWN [%04X]
Line 817: MemAlloc fail
Line 849:  - CodingScheme = %d, CodingGroup = %d
Line 864:  - Coding Group = %d - NOT SUPPORTED
Line 953: AtiHandleNsInformationInd
Line 967: FullNetworkName 
Line 968: ShortNetworkName 
Line 985: Time Zone  = %d : %d 
Line 986: UAL Time   = %d : %d 
Line 987: Time Zone Sign   = %d  
Line 1037: Default case : No local date conversion is needed
Line 1043: LocalDay= %d/%d/%d
Line 1052: LocalTime = %d : %d 
Line 1159: %d-%d-
Line 1160: Local Date %d-%d-
Line 1161: LocalTimeHStr 
Line 1162: LocalTimeMStr 
Line 1163: TimeType 
Line 1164: GMT:  TimeZoneHourStr
Line 1165: GMT : TimeZoneMinStr 
Line 1169: CDT: cdtHStr 
Line 1170: cdtMStr
Line 1171: TimeTypecdt
Line 1175: TimeZoneHourStr 
Line 1176: TimeZoneMinStr
Line 1177: TimeType
Line 1262: AtiHandleUpgradeCTMInd Type:%d
Line 1288: Command Timer Stopped [%s] [%d]
Line 1291: AtiRspPlusCTMEDIT: SUCCESS CTM
Line 1332: Command Timer Executed [%s] [%d]
Line 1515: Cannot find out cidIndex Sid[%d]
Line 1519: pAtiCB->cid_idx:%d, Sid:%d
Line 1525: CID table NsSID:%d Rcvd From NS SID:%d
Line 1530: Rcvd Eps Bearer Id:%d Cid:%d, Sid:%d
Line 1591: Cid_idx Out of Bound [%d]
Line 1661: Invalid bearer Type=%d
Line 1691: No Matched Linked SID in AtiHandleEpsDedBearerInd
Line 1697: AtiHandleEpsDedBearerInd: NS_EPS_DEDICATED_PDP_ACTIVATE_IND received for invalid default bearer CID: %d
Line 1705: Free CID not available for TempSID: %d
Line 1725: sec_cid:%d, p_cid:%d, tempSid:%d, LinkedSid:%d
Line 1742: Updating the call status for dedicated baearer CID = %d
Line 1748: cid_sec_idx Out of Bound[%d]
Line 1763: AtiHandleNsPdpUpdateSidInd secondary index %d , Tempsid %d 
Line 1786: AtiHandlePdnDisconnectInd(): BearerType: %d, Sid: %d
Line 1804: Default: Context Status: Cid=%d, state= %d
Line 1815: Context Status updated: Cid = %d, state: %d
Line 1819: AtiHandlePdnDisconnectInd: Received Disconnect for invalid Primary Cid: %d
Line 1838: LinkedSid:%d LinkedCid in ATI: %d
Line 1842: pNsMsg->isTempSID: %d
Line 1853: Sec Cid Index: %d
Line 1867: Sec Cid Index: %d
Line 1878: Dedicated Bearer Deactivated with Sec_CID:%d
Line 1882: AtiHandlePdnDisconnectInd: Received Disconnect for invalid Sec Sid: %d
Line 1888: AtiHandlePdnDisconnectInd: Received Disconnect for invalid LinkedSid: %d
Line 1929: Delegating NS_EPS_PDP_ACTIVATE_IND to generic handler
Line 1938: [AtiHandleNsEGPRSPDPType  SId=%d,   TempSid =: %d
Line 1959: CID context 1 is not used, so allocating
Line 1971: FreeCid = %d found for allocating
Line 1976: Could not allocate CID for TempSID = %d. No free CID available
Line 1994: LTE ATTACHED in PCT Case Base Ns SID:%d!!!!
Line 2040: AtiHandleNsEGPRSPDPType:  pAtiCB->CID_table[%d].PDP_Params.cid=: %d
Line 2041: PdpType= %d, ApnLength = %d, AccessPointName=  
Line 2050: Cid_idx Out of Bound [%d]
Line 2066: Dedicated Bearer CID = %d, Linked CID = %d 
Line 2070: NS_EPS_PDP_ACTIVATE_IND Msg, ApnLength=%d, PdpAddressInfoLength=%d,tftlen=%d
Line 2107: cid_sec_idx Out of Bound[%d]
Line 2110: [AtiHandleNsEGPRSPDPType:  pAtiCB->CID_sec_table[%d].PDP_Sec_Params.cid=: %d
Line 2118: cid_sec_idx Out of Bound[%d]
Line 2122:  Wrong TempSId[%d]
Line 2133:  Wrong TempSId[%d]
Line 2271: Wanted : AtiExtError( pAtiCB, E_ME_UNKNOWN, AT_ERROR )
Line 2290: NS_REL_IND,SId=%u, Cause = %u
Line 2312: AtiUnsoliciteH: Received NS_PDP_ACTIVATE_REJ
Line 2315: atiLteAttachTriggered - PDP activate rej.
Line 2327: MemAlloc fail
Line 2349: MemAlloc fail
Line 2366: MemAlloc fail
Line 2428: atiLteAttachTriggered - PDP deactivate Cnf.
Line 2449: Send Host LINK DOWN message to HOSTIF
Line 2527: MemAlloc fail
Line 2601: MemAlloc fail
Line 2656: Current DDS (INT:%d, IMS:%d)
Line 2687: MemAlloc fail
Line 2735: MemAlloc fail
Line 2779: Command Timer Stopped [%s] [%d]
Line 2828: isSimInserted %d, bSimOnePresent %d, bSimTwoPresent %d
Line 2842: ePinType =%d, PIN1Status = %d, UNBLKPIN1Status = %d, PIN2Status = %d, UNBLKPIN2Status = %d
Line 2844: PIN1RemainCnt = %d, PIN2RemainCnt = %d, UNBLKPIN1RemainCnt = %d, UNBLKPIN2RemainCnt = %d, SimPresent = %d
Line 2850: [ATI] NS Init. PCT enabled. atiInternalAttachValid = TRUE
Line 2855: [ATI] NS Init. PCT disabled. atiInternalAttachValid = FALSE
Line 2860: NO SIM
Line 2864: Command Timer Stopped [%s] [%d]
Line 2879: Command Timer Stopped [%s] [%d]
Line 2889: Command Timer Stopped [%s] [%d]
Line 2898: Invalid UNBLKPIN1Status =%d
Line 2909: Command Timer Stopped [%s] [%d]
Line 2918: Command Timer Stopped [%s] [%d]
Line 2938: [GCF_AUTO] NsSimInsertInd in ATI_HANDLERS : Start Network
Line 2965: Invalid PIN1Status =%d
Line 3014: isSimInserted %d, bSimOnePresent %d, bSimTwoPresent %d
Line 3028: ePinType =%d, PIN1Status = %d, UNBLKPIN1Status = %d, PIN2Status = %d, UNBLKPIN2Status = %d
Line 3030: PIN1RemainCnt = %d, PIN2RemainCnt = %d, UNBLKPIN1RemainCnt = %d, UNBLKPIN2RemainCnt = %d, SimPresent = %d
Line 3036: [ATI] NS Init. PCT enabled. atiInternalAttachValid = TRUE
Line 3041: [ATI] NS Init. PCT disabled. atiInternalAttachValid = FALSE
Line 3046: NO SIM
Line 3050: Command Timer Stopped [%s] [%d]
Line 3065: Command Timer Stopped [%s] [%d]
Line 3075: Command Timer Stopped [%s] [%d]
Line 3084: Invalid UNBLKPIN1Status =%d
Line 3095: Command Timer Stopped [%s] [%d]
Line 3104: Command Timer Stopped [%s] [%d]
Line 3125: [GCF_AUTO] NsInitCnf in ATI_HANDLERS : Start Network
Line 3153: Invalid PIN1Status =%d
Line 3184: MemAlloc fail
Line 3234: AtiHandleNsServiceInd(): MmServiceState %d, GmmServiceState %d, EmmServiceState %d, EmmState %d
Line 3559: PrevGmmNwState = %d, PrevMmNwState = %d
Line 3775: AtiHandleHedgeStateToCM(): unknown GprsStatus
Line 3785: AtiHandleHedgeStateToCM(): Imsi Attach Status %d, Gprs Attach Status = %d
Line 3921: AtiSubtractDate
Line 3958: AtiAddDate
Line 4136: PlmnAttribute = %d,EmmStatus = %d
Line 4142: setEmmStatus = %d
Line 4164: PlmnAttribute = %d ,set EmmStatus = %d
Line 4169: set EmmStatus = %d
Line 4187: PlmnAttribute = %d,set EmmStatus = %d
Line 4193: Unknown PlmnAttribute = %d ,Current EmmStatus = %d
Line 4218: NS_REGISTRATION_STATUS_IND, Rat %d, GprsStatus = %d, ImsiStatus = %d,MmServiceState = %d, GmmServiceState = %d
Line 4221: EmmStatus (ATTACH/DETACH) = %d, RegStatus = %d,EmmCause = %d, cell_id = %d
Line 4257: Unknown GPRS status (%d)
Line 4329: ImsiStatus:%d ,GPRSStatus:%d ,EpsAttacthStatus : %d
Line 4331: ATI_MM_Registration_Status:%d
Line 4333: ATI_GMM_Registration_Status:%d
Line 4347: ATI_EMM_Registration_Status:%d
Line 4374: MemAlloc fail
Line 4410: [ATI] LinkDown, Attatch = %d
Line 4442: Msg Send Error
Line 4471: NS_MM_PS_TYPE_IND, MmPsType %d, eActRatMode %d
Line 4512: AtiHandleNsServingCellInfoCnf: loc = %4X, cellid = %4X pAtiCB->PSC=%d
Line 4521: Sending NS_ABORT_PLMN_LIST_REQ
Line 4549: MemAlloc fail
Line 4594: Command Timer Executed [%s] [%d]
Line 4601: nAtiState %d
Line 4612: TransferMode %d, InfoTransferCapabilty %d
Line 4675: telNumber length = %d toa=%d
Line 4689: Already call present
Line 4693: First Call
Line 4830: NS_MODE_SELECT_IND:Mode %d
Line 4865: NS_ACTIVE_RAT_IND:Rat %d
Line 4892: ATI_PIN_INFO_UPDATE_IND
Line 4902: Pin_State_Update ePinType: %d, PinCnt: %d, Puk1Cnt: %d, Puk2Cnt: %d
Line 4936: Disconnect received with Progress Indicator set to in-band info
Line 4951: MemAlloc fail
Line 5075: AtiSendCregCgregCereg: MmStatus = %d, GmmStatus = %d, EmmStatus = %d, ActiveRat = %d, CREGn = %d, CGREGn = %d, CEREGn = %d
Line 5077: lac = %04X, ci = %04X, Act = %d, rac = %04X
Line 5114: unknown Creg mode (%d)
Line 5143: unknown Creg mode (%d)
Line 5162: unknown Cgreg mode (%d)
Line 5178: unknown Cereg mode (%d)
Line 5240: ns_RegisterClient() from ATI
Line 5295: MemAlloc fail
Line 5313: MemAlloc fail
Line 5327: MemAlloc fail
Line 5336: ApnDataLength %d, AccessPointName: 
Line 5402: FreeCid = %d found for allocating
Line 5452: MemAlloc fail
Line 5482: Mem free Error(PtrMsg)
Line 5483: Memory allocation failure
Line 5525: AtiSendNsSecPdpActivateRejRsp, Cause =%d
Line 5530: MemAlloc fail
Line 5583: Unsolicited: NS_PDP_ACTIVATE_SEC_CNF, call_mode %d, call_state %d
Line 5603: AtiHandleNsSecPdpActivateRej: call_mode  %d, call_state %d
Line 5614: AtiSendUartStatusChangeInd msg to MBX=%d State=%d
Line 5620: MemAlloc fail
Line 5680: atiLteAttachTriggered - Pdp deactivate ind.
Line 5694: Wrong Sid :%d in AtiHandleNsPdpDeactivateInd
Line 5707: AtiHandleNsUSBCableDisconnectInd: Hang up the current PPP connection!
Line 5731: [ATI] Rcv AtiHandleNsNcMisMatchInd:Result %d, NCKType %d, NCKLockByDiffCard %d
Line 5812: ePinType %d
Line 5823:  NS_AT_NC_NET_DEPERSON_IND,ePinType %d, NCK count %d 
Line 5896: Received RRSI value from lower layers : %d
Line 5940: NS_AS_TYPE_IND, AsType %d
Line 5947: pAtiCB->eActRatMode, [%d] 
Line 5959: NS_POWER_OFF_CNF
Line 5978: NS_RAT_MODE_CHANGE_IND: Status %d, RatMode %d
Line 6313: AtiHandleAutoStartRsp: pstNsMsg->Body.NsPlmnSelectionModeChangeRsp.Result: %d
Line 6333: Auto mode PLMN selection fail
Line 6356: ucActiveRat %d
Line 6519: unknown ActiveRat mode (%d)
Line 6522: Received ActiveRat %d ->Changed ActiveRat %d
Line 6547: AtiHandleNetworkNameChangeInd: Network Name is changed
Line 6600: PrimaryCid = %d
Line 6605: pAtiCB->CID_table[%d].PDP_Params.cid = %d, pAtiCB->CID_table[%d].PDP_Params.ActState = %d
Line 6627: SecCid = %d
Line 6651: Bearer type for Cid :%d
Line 6657: Dedicated:pAtiCB->CID_sec_table[%d].PDP_Sec_Params.sec_cid=%d
Line 6664: DEFAULT: pAtiCB->CID_table[%d].PDP_Params.cid=%d
Line 6690: unknown ActiveRat %d
Line 6693: Received ActiveRat %d ->Changed ActiveRat %d
Line 6713: NS_NETWORK_REGISTRATION_NTF received: ACT=0x%X, SVC Domain=0x%X, Reg Status=0x%X, Cell Id=0x%X, REJ Cause=0x%X, TAC=%X-%X)
Line 6729: eActRatMode 0x%X, EMMServiceState 0x%X, MMServiceState 0x%X, GMMServiceState 0x%X)
Line 6830: EPS Registration Status unknown :%d
Line 6834: ATI Context block: EMMServiceState =%d, EPS Registration Status =%d, Attach State=%d
Line 7019: Invalid Result=%d
