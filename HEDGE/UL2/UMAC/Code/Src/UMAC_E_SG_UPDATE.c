Line 288: <CPC> CPC Deactivated by Order
Line 295: <CPC> CPC Activated by Order
Line 415: NO TRANSMISSION[%d]: UPHY not ready to transmit EDCH data uphy_IsUlEdchReadyForData %d uphy_IsUlDchReadyForDataInCPC %d IsCpcReady %d
Line 425: <UPHY not ready> gStoredHichInfo... [HarqId:%d] HICH Value %d -> %d, Non HICH Value %d -> %d
Line 440:  Before EDCH is configured, AG/RG/HICH ISR Occured
Line 551:  Token Delayed Count %d
Line 579:  Received Ack HarqId when PHY not ready %d 
Line 586: NO TRANSMISSION[%d]: TPHY not ready to transmit EDCH data
Line 591:  Before EDCH is configured, AG/RG/HICH ISR Occured
Line 663: Unknown Case of HighLayer singnalings in EDCH status
Line 702: <AG/RG/HI Info> AG Received: %d, Value: %d, HICH Value %d, RGCH Value %d, Non HICH Value %d, Non RGCH Value %d
Line 709: Now is the TTI changing, MAC stop transmission for a while
Line 796: ****Critical Error***** => RLC didn't transmit the data to MAC
Line 807: [Warning] UMAC give up EUL procedure due to TokenDelay (HarqID[%d]. TimeDifference: %d chip)
Line 874: <CPC> gStoredHichInfo... [HarqId:%d] HICH Value %d -> %d, Non HICH Value %d -> %d
Line 913: <TokenDelayed> gStoredHichInfo... [HarqId:%d] HICH Value %d -> %d, Non HICH Value %d -> %d
Line 1021: HSUPA Statistics. Duration:1000ms, OctetCnt:%d, AckBlkCnt:%d, NackBlkCnt:%d, HappyCnt:%d, UnhappyCnt:%d, ServingCell:%d
Line 1075: <CPC> ItUeDtxCycle2Timer Expire... Set SG to DefaultSgInDtxCycle2( %d ) for All Harq
Line 1094: <CPC> E-TFC Selection Condition OK... Ready for TRANSMISSION in %dms TTI
Line 1198: <SG INFO> HarqID[%d]. Non-Serving-RG Down Received, Updated SG: %d
Line 1206: Unknown Case in Non RG Timer Token Cancel
Line 1218: <SG INFO> HarqID[%d]. Non-Serv-RG Timer Active State, Updated SG: %d
Line 1285: Unknown Case in 3 Index Step Rg Value
Line 1291: <SG INFO> HarqID[%d]. RG index: [3] Step Up, Updated SG: %d
Line 1298: <SG INFO> HarqID[%d]. RG index: [2] Step Up, Updated SG: %d
Line 1305: <SG INFO> HarqID[%d]. RG index: [1] Step Up, Updated SG: %d
Line 1317: <SG INFO> HarqID[%d]. RG index: [1] Step Down, Updated SG: %d
Line 1321: Unknown RG value
Line 1331: RG received but Secondary Grant. No Effect to SG!
Line 1333: RG received but AG Timer is Not Expired. No Effect to SG!
Line 1338: RG received but SG is ZERO or HARQ Process is Inactive. No Effect to SG!
Line 1396: <SG INFO> HARQ Process ID [%d] is Inactivated by AG
Line 1408: Accoring to AG, SG Update Module Working with Secondary Grant instead of Primary Grant
Line 1416: All HARQ Processes are Inactivated by AG
Line 1419: Unknown Case in AG inactive status
Line 1424: Unknown Case in AG inactive status
Line 1442: <SG INFO> SG Value[%d] is updated by Secondary Grant
Line 1445: Unknown Case in AG active status
Line 1468: <SG INFO> SG Value[%d] is updated by Primary Grant, HARQ ID: %d, AG Scope: %d
Line 1476: <SG INFO> HARQ Process ID [%d] is Activated by AG
Line 1491: All HARQ Processes are Activated by AG
Line 1498: Unknown Case in AG Timer TokenCancel
Line 1572: <AG/HI Info> AG Received: %d, Value: %d, HICH Value %d
Line 1583: Unknown Case in Timer_TWAIT TokenCancel
Line 1593: Unknown Case in Timer_EEW TokenCancel
Line 1612: Unknown Ernti ID type in AG case
Line 1620: NonScheduled Grant
Line 1624: No Absolute Grants received (I): Harqid %d  IsEEW_true %d
Line 1642: ****Critical Error***** => RLC didn't transmit the data to MAC
Line 1650: No Absolute Grants received (II): Harqid %d IsEEW_true %d
Line 1666: MAC will not Transmit as HARQ Ids are busy!!!
Line 1823: Unknown Case in AG Timer TokenCancel
Line 1834: Unknown Case in Non RG Timer Token Cancel
Line 1891: Unknown Case in AG Timer TokenCancel
Line 1960: Handle free of MAC-ES PDU is an error
Line 2159: WARNING: pLC is NULL
Line 2190: ES Reset Indicator %d 
Line 2216: WARNING: *EdchList + (LogCh?UMAC_MAX_RB:0) is out of bounds
Line 2226: WARNING: pLC or EdchLcInfo is NULL
Line 2287: MaxRetx %d, RtxtimerHARQProcess %d
Line 2299: TSIValue %d isEEW %d, EEW_TTIs %d 
Line 2308: min_coderate : %d, max_coderate : %d 
Line 2315: Ref_coderate_QPSK[%d] : %d, Ref_Beta_QPSK[%d] : %d 
Line 2323: Ref_coderate_16QAM[%d] : %d, Ref_Beta_16QAM[%d] : %d 
Line 2335: AG Index value is out of bound
Line 2341: <NonScheduled Grant> NofTimeslots %d  SF %d  alpha %d  TNSIValue %d RP %d RL %d
Line 2345: Power Resource %d ActivatTime %d
Line 2358: Unknown Case in Timer_EEW TokenCancel
Line 2367: Unknown Case in Timer_TWAIT TokenCancel
Line 2374: E-DCH category %d TWAIT %d
Line 2489: WARNING: pLC is NULL
Line 2565: Non Scheduled contents size is over 20000
Line 2615: WARNING: *EdchList %d + (LogCh %d?UMAC_MAX_RB:0) is out of bounds
Line 2623: WARNING: pLC or EdchLcInfo is NULL for *EdchList %d and LogCh %d
Line 2640: WARNING: EdchInfoUl.LogChId[%d] is invalid
Line 2875: The range of MaxChCode is over SPEC
Line 3071: <CPC> Previous RTT HARQ ID[%d] is NACK
Line 3155: <CPC> Overlap With CM...  NO TRANSMISSION: 2ms TTI
Line 3195: <CPC> HW Timing Info(%dms)... CFN:%d, SubFrame:%d, Slot:%d
Line 3205: <CPC> No trans (no LongPreamble)
Line 3301: <CPC> HW Timing Info(%dms)... CFN:%d, MacDtxCycle OK
Line 3310: <CPC> No trans (no LongPreamble)
Line 3341: <CPC> HW Timing Info(%dms)... CFN:%d
Line 3435: <CPC> Overlap Btw Time Align and CM Trans Gap...  TANSMISSION in non overlapping TTI
Line 3475: WARNING: *EdchList %d + (LogCh %d?UMAC_MAX_RB:0) is out of bounds
Line 3494: <CPC> UM BO. DA:%d, NoOfPdus:%d
Line 3499: <CPC> AM BO. RbId:%i, DA:%d, RlcPduSize:%d
Line 3507: <CPC> Trans SRB data in case of continuous data
Line 3522: <CPC> No trans DA=0 data in case of continuous data
Line 3574: Unknown Case in MacItTimer TokenCancel
Line 3585: Unknown Case in ItUeDtxCycle2Timer TokenCancel
Line 3597: Unknown Case in ItUEGrantMonitoringTimer TokenCancel
Line 3688: <CPC> HARQID[%d]->[%d]. LongPreamble Transmission
