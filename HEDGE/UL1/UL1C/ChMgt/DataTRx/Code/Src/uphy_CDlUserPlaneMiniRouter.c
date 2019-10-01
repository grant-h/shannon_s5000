Line 238: dlUserPlaneMiniRouter_ptr->bchCctrchInfo is NULL in uphy_CDlUserPlaneMiniRouter_init
Line 238: dlUserPlaneMiniRouter_ptr->bchCctrchInfo is NULL in uphy_CDlUserPlaneMiniRouter_init
Line 371: Instance created for stackId %d
Line 371: Instance created for stackId %d
Line 598: [CGI ACQUISITION] uphy_CDlUserPlaneMinRouter_SFNAcauisitionInd msg 0x%x
Line 598: [CGI ACQUISITION] uphy_CDlUserPlaneMinRouter_SFNAcauisitionInd msg 0x%x
Line 611: [CGI ACQUISITION] ind_msg->header.TransactId 0x%x CgiAcquisition 0x%x CgiAcquisition->sfnAcquisitionReq_TID 0x%x
Line 611: [CGI ACQUISITION] ind_msg->header.TransactId 0x%x CgiAcquisition 0x%x CgiAcquisition->sfnAcquisitionReq_TID 0x%x
Line 614: [CGI ACQUISITION] uphy_CDlUserPlaneMinRouter_SFNAcauisitionInd 0x%x curSfn %d %d %d sfn offset %d %d %d
Line 614: [CGI ACQUISITION] uphy_CDlUserPlaneMinRouter_SFNAcauisitionInd 0x%x curSfn %d %d %d sfn offset %d %d %d
Line 629: EutraCellInfoUpdateInd message is failed
Line 629: EutraCellInfoUpdateInd message is failed
Line 679: numberOfTrCh>8
Line 679: numberOfTrCh>8
Line 691: msg is NULL in uphy_CDlUserPlaneMiniRouter_ExtractAndSendDchCrcInfo
Line 691: msg is NULL in uphy_CDlUserPlaneMiniRouter_ExtractAndSendDchCrcInfo
Line 769: uphy_CDlUserPlaneMiniRouter_ExtractAndSendDchCrcInfo: trChId=%d, numTrBlks=%d, numTrBlksBad=%d, tbSize=%d,  crcSize=%d
Line 769: uphy_CDlUserPlaneMiniRouter_ExtractAndSendDchCrcInfo: trChId=%d, numTrBlks=%d, numTrBlksBad=%d, tbSize=%d,  crcSize=%d
Line 775: Cant Send Crc Info 
Line 775: Cant Send Crc Info 
Line 791: Framework Cfn %d Urrc Trch id %d has received %d good crcs and %d bad crcs, BLER[%%] = %2d.%04d 
Line 791: Framework Cfn %d Urrc Trch id %d has received %d good crcs and %d bad crcs, BLER[%%] = %2d.%04d 
Line 817: Rl Info uhal cmd exec failed 
Line 817: Rl Info uhal cmd exec failed 
Line 827: Chipset believes Ref Rl %d Nbr Rl %d 
Line 827: Chipset believes Ref Rl %d Nbr Rl %d 
Line 850: numberOfTrCh>8
Line 850: numberOfTrCh>8
Line 905: process - NOT SUPPORTED
Line 905: process - NOT SUPPORTED
Line 987: [CGI ACQUISITION] uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo CctrchNr 0x%x
Line 987: [CGI ACQUISITION] uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo CctrchNr 0x%x
Line 994: User Plane discards data for Cctrch%d 
Line 994: User Plane discards data for Cctrch%d 
Line 1007: DataCctrchDecodedInfoCmd Uhal Cmd exec - Error code %d 
Line 1007: DataCctrchDecodedInfoCmd Uhal Cmd exec - Error code %d 
Line 1023: No TrChs reported by HAL 
Line 1023: No TrChs reported by HAL 
Line 1035: S0   Warning!!! trChInfoPtr = NULL 
Line 1041: [CGI ACQUISITION] uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo numTrChs 0x%x trChInfoPtr->DlTrChType %d equipmentMode %d sfnAcquisitionConfig %d
Line 1041: [CGI ACQUISITION] uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo numTrChs 0x%x trChInfoPtr->DlTrChType %d equipmentMode %d sfnAcquisitionConfig %d
Line 1058: uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo() Populated TrCh Nr :%d with TrCh Id:%d for ccTrChNr:%d 
Line 1058: uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo() Populated TrCh Nr :%d with TrCh Id:%d for ccTrChNr:%d 
Line 1068: Cfn %d :Unable to remap TrChId %d 
Line 1068: Cfn %d :Unable to remap TrChId %d 
Line 1071: Cfn %d :Unable to remap TrChId %d 
Line 1071: Cfn %d :Unable to remap TrChId %d 
Line 1104: Invalid memory allocation: iSegBitSize = %d 
Line 1104: Invalid memory allocation: iSegBitSize = %d 
Line 1116: Cancel send to UMAC 
Line 1116: Cancel send to UMAC 
Line 1148: [BCH decoding] trChInfoPtr->CrcCheckRes[0]=%d, isDecodedBchBasicCheckPassed=%d
Line 1148: [BCH decoding] trChInfoPtr->CrcCheckRes[0]=%d, isDecodedBchBasicCheckPassed=%d
Line 1177: [BCH decoding] By chance, hwSfn %d and compensatedCurrentSfn %d are the same
Line 1177: [BCH decoding] By chance, hwSfn %d and compensatedCurrentSfn %d are the same
Line 1196: [BCH decoding] hwSfn %d and compensatedCurrentSfn %d are not the same, If this is 1st decodign result, that's ok
Line 1196: [BCH decoding] hwSfn %d and compensatedCurrentSfn %d are not the same, If this is 1st decodign result, that's ok
Line 1206: SFN Passing for the Segment Received Condition : %d
Line 1206: SFN Passing for the Segment Received Condition : %d
Line 1237: [BCH decoding] HW SFN locked. hwSfnLocked=%d
Line 1237: [BCH decoding] HW SFN locked. hwSfnLocked=%d
Line 1251: [BCH decoding] SFN was set but it was not increased. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1251: [BCH decoding] SFN was set but it was not increased. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1257: [BCH decoding] CRC check passed again after receiving 10ms BCH PDU. False Alarm. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1257: [BCH decoding] CRC check passed again after receiving 10ms BCH PDU. False Alarm. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1263: [BCH decoding] Evidently either this or previous one is false alarm. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1263: [BCH decoding] Evidently either this or previous one is false alarm. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1270: [BCH decoding] There is a false alarm but have no clue which is which, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1270: [BCH decoding] There is a false alarm but have no clue which is which, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1295: [BCH decoding] There is a false alarm but perhaps this PDU, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1295: [BCH decoding] There is a false alarm but perhaps this PDU, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1300: [BCH decoding] hwSfn=%d, compensatedCurrentSfn=%d, isDecodedBchBasicCheckPassed=%d, readyToSendSfnToCellSfnServer=%d, needToWriteSfnOnHw=%d 
Line 1300: [BCH decoding] hwSfn=%d, compensatedCurrentSfn=%d, isDecodedBchBasicCheckPassed=%d, readyToSendSfnToCellSfnServer=%d, needToWriteSfnOnHw=%d 
Line 1303: [BCH decoding] numOfCrcCheckPasses=%d, numOfConsecutiveCrcFailures=%d, bch10msModeAllowed=%d, hwSfnLocked=%d, bchFalseAlarmDetected=%d
Line 1303: [BCH decoding] numOfCrcCheckPasses=%d, numOfConsecutiveCrcFailures=%d, bch10msModeAllowed=%d, hwSfnLocked=%d, bchFalseAlarmDetected=%d
Line 1356: [BCH decoding] There is a false alarm but have no clue which is which, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1356: [BCH decoding] There is a false alarm but have no clue which is which, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1360: SFN Passing for the Segment Received Condition : %d
Line 1360: SFN Passing for the Segment Received Condition : %d
Line 1378: [BCH decoding] There is a false alarm but perhaps this PDU, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1378: [BCH decoding] There is a false alarm but perhaps this PDU, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1416: [BCH decoding] 10 ms mode just restarted
Line 1416: [BCH decoding] 10 ms mode just restarted
Line 1420: [BCH decoding] hwSfn=%d, compensatedCurrentSfn=%d, isDecodedBchBasicCheckPassed=%d, readyToSendSfnToCellSfnServer=%d, needToWriteSfnOnHw=%d 
Line 1420: [BCH decoding] hwSfn=%d, compensatedCurrentSfn=%d, isDecodedBchBasicCheckPassed=%d, readyToSendSfnToCellSfnServer=%d, needToWriteSfnOnHw=%d 
Line 1423: [BCH decoding] numOfCrcCheckPasses=%d, numOfConsecutiveCrcFailures=%d, bch10msModeAllowed=%d, hwSfnLocked=%d, bchFalseAlarmDetected=%d
Line 1423: [BCH decoding] numOfCrcCheckPasses=%d, numOfConsecutiveCrcFailures=%d, bch10msModeAllowed=%d, hwSfnLocked=%d, bchFalseAlarmDetected=%d
Line 1440: ****Framework Sfn %d Cfn %d slot %d User Plane writes sfn %d to chipset Rl %d, isBchConfigSfnReadCallback=%d
Line 1440: ****Framework Sfn %d Cfn %d slot %d User Plane writes sfn %d to chipset Rl %d, isBchConfigSfnReadCallback=%d
Line 1449: ****Framework Sfn %d Cfn %d slot %d User Plane writes sfn %d to chipset Rl %d, isBchConfigSfnReadCallback=%d
Line 1449: ****Framework Sfn %d Cfn %d slot %d User Plane writes sfn %d to chipset Rl %d, isBchConfigSfnReadCallback=%d
Line 1455: ****Doesn't send SFN to SFN server: readyToSendSfnToCellSfnServer %d, isDecodedBchValid %d, isBchConfigSfnReadCallback=%d
Line 1455: ****Doesn't send SFN to SFN server: readyToSendSfnToCellSfnServer %d, isDecodedBchValid %d, isBchConfigSfnReadCallback=%d
Line 1463: debug lookModeOn %d, trChInfoPtr->DlTrChType %d, numTrChs %d, trChInfoPtr->NoTbs %d, trChInfoPtr->CrcCheckRes[0] %d, trChInfoPtr->SizeOfTbs %d, trChInfoPtr->Data %x
Line 1463: debug lookModeOn %d, trChInfoPtr->DlTrChType %d, numTrChs %d, trChInfoPtr->NoTbs %d, trChInfoPtr->CrcCheckRes[0] %d, trChInfoPtr->SizeOfTbs %d, trChInfoPtr->Data %x
Line 1488: No memory handle for DCH data
Line 1488: No memory handle for DCH data
Line 1496: SendDataToMac failure: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1496: SendDataToMac failure: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1509: Discard BCH data:  TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1509: Discard BCH data:  TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1536: ****First scheduled MIB is read
Line 1536: ****First scheduled MIB is read
Line 1542: ****Don't do SFN Correction: BCH call back fn is Unregistered
Line 1542: ****Don't do SFN Correction: BCH call back fn is Unregistered
Line 1553: Debug SendDataToMac: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1553: Debug SendDataToMac: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1578: SendDataToMac failure: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1578: SendDataToMac failure: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1602: ****First scheduled MIB is read
Line 1602: ****First scheduled MIB is read
Line 1608: ****Don't do SFN Correction: BCH call back fn is Unregistered
Line 1608: ****Don't do SFN Correction: BCH call back fn is Unregistered
Line 1722: UmacMsg is NULL in uphy_CDlUserPlaneMiniRouter_SendDataToMac
Line 1722: UmacMsg is NULL in uphy_CDlUserPlaneMiniRouter_SendDataToMac
Line 1791: uphy_CDlUserPlaneMiniRouter_SendDataToMac: UmacMsg=0x%x, destTrChInfoPtr=0x%x,	Data=0x%x, trChId=%d, numTrBlks=%d, tbSize=%d
Line 1791: uphy_CDlUserPlaneMiniRouter_SendDataToMac: UmacMsg=0x%x, destTrChInfoPtr=0x%x,	Data=0x%x, trChId=%d, numTrBlks=%d, tbSize=%d
Line 1827: uphy_CDlUserPlaneMiniRouter_SendDataToMac: destTrChInfoPtr=0x%x,  Data=0x%x,  trChId=%d, numTrBlks=%d, tbSize=%d,  crcSize=%d
Line 1827: uphy_CDlUserPlaneMiniRouter_SendDataToMac: destTrChInfoPtr=0x%x,  Data=0x%x,  trChId=%d, numTrBlks=%d, tbSize=%d,  crcSize=%d
Line 1837: Passing to MAC: stackId %d, Trch Id %02d, CFN %04d, Type %02d, nTrBlks %02d, SizeOfTBs %04d, Ct_Num %02d
Line 1837: Passing to MAC: stackId %d, Trch Id %02d, CFN %04d, Type %02d, nTrBlks %02d, SizeOfTBs %04d, Ct_Num %02d
Line 1857: [ 0]0x%x. [ 1]0x%x. [ 2]0x%x. [ 3]0x%x. [ 4]0x%x. [ 5]0x%x. [ 6]0x%x.
Line 1862: [ 7]0x%x. [ 8]0x%x. [ 9]0x%x. [10]0x%x. [11]0x%x. [12]0x%x. [13]0x%x.
Line 1868: [14]0x%x. [15]0x%x. [16]0x%x. [17]0x%x. [18]0x%x. [19]0x%x. [20]0x%x.
Line 1874: [21]0x%x. [22]0x%x. [23]0x%x. [24]0x%x. [25]0x%x. [26]0x%x. [27]0x%x.
Line 1880: [28]0x%x. [29]0x%x. [30]0x%x. [31]0x%x. [32]0x%x. [33]0x%x. [34]0x%x.
Line 1904: ######## Discard all zero data
Line 1904: ######## Discard all zero data
Line 1931: Unable to send Uphy Data Ind
Line 1931: Unable to send Uphy Data Ind
Line 1949: array index out of bounds.nTrChs=%d
Line 1949: array index out of bounds.nTrChs=%d
Line 1980: Asn_tti
Line 1980: Asn_tti
Line 2094: Illegal cctrch number
Line 2094: Illegal cctrch number
Line 2097: BCH config with newDecoding: uarfcn %d, psc %d, rlNr %d, bch10msModeAllowed %d
Line 2097: BCH config with newDecoding: uarfcn %d, psc %d, rlNr %d, bch10msModeAllowed %d
Line 2137: Illegal cctrch number
Line 2137: Illegal cctrch number
Line 2140: BCH config with ReusingRl: uarfcn %d, psc %d, rlNr %d, bch10msModeAllowed %d
Line 2140: BCH config with ReusingRl: uarfcn %d, psc %d, rlNr %d, bch10msModeAllowed %d
Line 2211: nTrch %d,  gTrch[%d].wNumTrBlocks is %d, gTrch[%d].wNumErrTrBlocks is %d, gTrch[%d].ucTrChType is %d
Line 2211: nTrch %d,  gTrch[%d].wNumTrBlocks is %d, gTrch[%d].wNumErrTrBlocks is %d, gTrch[%d].ucTrChType is %d
Line 2220: uphy_CDlUserPlaneMiniRouter_DecodedBchValidityCheck: Data is %x
Line 2220: uphy_CDlUserPlaneMiniRouter_DecodedBchValidityCheck: Data is %x
