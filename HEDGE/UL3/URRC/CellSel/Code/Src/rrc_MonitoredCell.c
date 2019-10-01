Line 119: Invalid CnxMgr Pending state: CellDch - using CellFach as the pending state instead
Line 130: CnxMgr CnxState = Rrc_Cnx_Establishing
Line 136: CnxMgr CnxState = Rrc_Cnx_Releasing
Line 142: CnxMgr CnxState = Rrc_Cnx_Established
Line 144: CnxMgr PendingState = %i
Line 150: CnxMgr CnxState = Rrc_Cnx_Released
Line 152: CnxMgr PendingState = %i
Line 393: Cell barred due to %s [and its peer] not being scheduled
Line 439: Cell barred due to %s [and its peer] not being scheduled
Line 471: Cell barred due to %s [and its peer SIB5/SIB 5 bis] not being scheduled
Line 479: Cell barred due to %s [and its peer] not being scheduled
Line 598: Before assimilation: thisCell(%d,%d), CellToAssim(%d,%d)
Line 644: [rrc_MonitoredCell_AssimilateCell] CellToAssim->NumStoredCells(%d)> FREQUENCY_MAXCELLS(%d)
Line 652: Before assimilation: thisCell(%d,%d), CellToAssim(%d,%d)
Line 679: [rrc_MonitoredCell_AssimilateCell] CellToAssim->NumStoredCells(%d)> FREQUENCY_MAXCELLS(%d)
Line 717: copy MIB/SIB from SCellSysInfoCache (%d)
Line 728: wrong SCellSysInfoIndex (%d)
Line 766: Invalid SibIdExt(%i)
Line 778: Invalid SibId(%i)
Line 797: copy %d from SCellSysInfoCache (%d)
Line 817: ValueTag Changed (ServingCell vs SCellSysInfoCache)
Line 822: wrong SCellSysInfoIndex (%d)
Line 880: copy MIB/SB/SIB from CampedSysInfoContainer (%d)
Line 899: Number of Shared PLMNs: %d
Line 907: Candidate rejected due to PlmnId not matching Target PlmnId
Line 914: Candidate Accepcted due to PlmnId matching Target PlmnId
Line 919: Candidate Accepcted due to PlmnId matching Equiv PlmnId
Line 932: Fatal Error: MIB is not availabe in CampedSysInfoContainer
Line 944: Fatal Error: CampedSysInfoContainer is not available (Uarfcn %d, CellParamId %d)
Line 950: Fatal Error: CampedSysInfoContainer is not available (Uarfcn %d, Cpich %d)
Line 986: Waiting for the NecessarySibsRecved Sibs %d to be received
Line 1014: Waiting for the Idle Mode Sibs to be received
Line 1025: Checking if any other SIB is subscribed other than %s, Id(%i)
Line 1033: Checking Subscription: %s, Id(%i) is subscribed
Line 1051: Ignore assimilating from ServingCell Instance as %s, Id(%i) is not latest
Line 1072: Waiting for the Common Channel Sibs to be received
Line 1132: SIB11/12 recved or requested
Line 1137: need to read Scheduling Info
Line 1142: need to read MIB
Line 1182: SIB4/6 recved or requested
Line 1187: need to read Scheduling Info
Line 1192: need to read MIB
Line 1246: NumStoredCells > FREQUENCY_MAXCELLS
Line 1260: [rrc_MonitoredCell_GetStoredCellSearchCells] MonitoredCell_p->NumStoredCells(%d) >FREQUENCY_MAXCELLS(%d)
Line 1314: IsDCMTestOpModeConditionMet is TRUE
Line 1374: %s indicates that %s is barred for %i seconds
Line 1396: %s indicates that %s is reserved for operator use
Line 1412: %s indicates that %s is reserved for operator use
Line 1432: %s indicates that %s is reserved for extension (future use)
Line 1460: Candidate rejected due to CsgId not matching Target CsgId
Line 1472: Candidate rejected due to CsgId not found in SIB3
Line 1494: Cannot Find MibPtr in ServincCell's SysInfo and NewMibPtr in CandidateCell
Line 1497: ProcessSib3 CSG ID : %x
Line 1506: ProcessSib3 CSG ID : %x is not in WhiteList, this CSG cell is not suitable. (CsgIndicator %d)
Line 1511: ProcessSib3 CSG ID : %x is in WhiteList, this cell is suitable (CsgIndicator %d)
Line 1526: ProcessSib3 CSG ID : %x is not in WhiteList, this cell is not suitable
Line 1535: ProcessSib3 CSG ID : %x
Line 1541: %s: Frequency barred due to %s AccessRestriction IE Processing
Line 1622: ProcessSib5or6: Result of the func call rrc_CellSelecter_IsHHOToDifferentBandInProgress is %d
Line 1703: %s Processing : %s not rejected Band Ind (%d) in SIB5 and the PrimaryBandId (%d)
Line 1708: %s Processing : %s barred due to Band Indicated not supported by UE (supported : %x, BandInd %x)
Line 1724: %s Processing : %s not rejected Band Ind (%d) in SIB5 and the PrimaryBandId (%d)
Line 1729: %s Processing : %s not rejected Band Ind (%d) in SIB5 and the PrimaryBandId (%d)
Line 1734: %s Processing : %s rejected due to Band Ind (%d) in SIB5 and the PrimaryBandId (%d) doesn't match.
Line 1750: %s Processing : %s barred due to SIB5 is received in between 2110MHz-2170MHz without Band Ind during Band IV searching
Line 1760: %s Processing : %s barred due to SIB5bis is received in between 2110MHz-2170MHz during Band I searching
Line 1820: Setting the receipt of %s to be necessary since its peer does not have both AICH and PICH info
Line 1833: For %s, PeerSibInfoPtr->IsCurrent is FALSE, return FAIL
Line 1845: %s Processing : %s barred due to missing AICH/PICH info
Line 1918: Setting the receipt of %s to be necessary since its peer does not have both AICH and PICH info
Line 1936: %s Processing : %s barred due to missing PICH info
Line 1967: %s, Id(%i)  stored in %s DB
Line 1985: %s, Id(%i)  stored in %s DB
Line 2019: %s, Id(%i)  deleted from %s DB
Line 2059: %s: Invalid SibIdExt(%i)
Line 2080: %s: Invalid SibId(%i)
Line 2135: OOS in RRC Cnx Establishing : overwrite the Pending state to Idle
Line 2186: LTE not supported: skip SIB19 reading
Line 2194: Cnx Establishing & no QRB: skip SIB19 reading
Line 2213: No deferred SIB11/12 reading (target state = CellFach, rrc cnx setup received
Line 2227: [Cnx Req] deferred SIB11/12 reading (%d)
Line 2233: [Cnx Req] Skip SIB18 reading (%d)
Line 2254: No deferred SIB(%d) reading (target state = CellFach, rrc cnx setup received
Line 2262: [Cnx Req]Deffered SIB(%d) Reading during RRC_Cnx_Setup from Idle
Line 2286: Force to skip SIB11/12 reading (%d)
Line 2313: Force to skip SIB11/12 reading (%d)
Line 2338: Force to skip SIB11/12 reading (%d)
Line 2354: %s: Prepare subscription to %s, Id(%i)
Line 2408: CreateSibCancelSubscription : No MIB 
Line 2440: No deferred SIB11/12 reading (target state = CellFach, rrc cnx setup received
Line 2455: [Cnx Req] deferred SIB11/12 reading::cancel it (%d)
Line 2478: deferred SIB11/12 reading::cancel it (%d)
Line 2495: Force to cancel SIB11/12 reading (%d)
Line 2517: deferred SIB11/12 reading::cancel it (%d)
Line 2539: Force to cancel SIB11/12 reading (%d)
Line 2592: %s: Cancel subscription to %s, Id(%i)
Line 2639: Setting Pending State to Ura Pch to Identify Required Sib 2 in Ura Pch state
Line 2645: OOS in Cnx Establishing : overwrite Pending state to Idle
Line 2657: Setting Pending State to Ura Pch to Identify Required Sib 2 in Ura Pch state
Line 2664: OOS in Cnx Establishing : overwrite Pending state to Idle
Line 2671: [CandidateCell] Cnx Establishing : overwrite Pending state to Idle
Line 2682: IdentifyRequiredSibs : No MIB 
Line 2736: %s is  necessary
Line 2780: pccpchInfo.cellParamId %d, MonitoredCell_p->UarfcnDl %d
Line 2899: %s: Prepare subscription to %s, Id(%i)
Line 2928: %s: Cancelling subscription to %s, Id(%i)
Line 3416: ERROR Sib: %s already has a requester registered for it!
Line 3424: Registered a requester entry for Sib: %s
Line 3434: ERROR Sib: %s already has a requester registered for it!
Line 3442: Registered a requester entry for Sib: %s
Line 3643: Cell(%i,%i): Checking Value Tags in last received MIB against those in the just received MIB
Line 3666: Class:CandidateCell: %s, Id(%i)  is no longer scheduled - deleting Sib
Line 3674: Class:CandiateCell: %s, Id(%i) tag has changed
Line 3702: Cell(%i,%i): Checking Value Tags in last received MIB against those in the just received MIB
Line 3727: Class:CandidateCell: %s, Id(%i)  is no longer scheduled - deleting Sib
Line 3742: Class:CandiateCell: %s, Id(%i) tag has changed
