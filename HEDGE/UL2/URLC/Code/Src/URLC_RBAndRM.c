Line 90: Critical SRB reception[%d]: activeSetUpdate detected Msg Type %d
Line 93: Critical SRB reception[%d]]: handoverFromUTRANCommand_GSM detected Msg Type %d
Line 96: Critical SRB reception[%d]: physicalChannelReconfiguration detected Msg Type %d
Line 99: Critical SRB reception[%d]: radioBearerReconfiguration detected Msg Type %d
Line 103: Critical SRB reception[%d]: radioBearerRelease detected Msg Type %d
Line 107: Critical SRB reception[%d]: transportChannelReconfiguration detected Msg Type %d
Line 111: Critical SRB reception[%d]: ChangeOrderFromUTRAN detected Msg Type %d
Line 115: Critical SRB reception[%d]: handoverFromUTRANCommand detected Msg Type %d
Line 119: Critical SRB reception[%d]: radioBearerSetup detected Msg Type %d
Line 123: Critical SRB reception[%d]: utranMobilityInformation detected Msg Type %d
Line 126: Critical SRB reception[%d]: cellUpdateConfirm detected Msg Type %d
Line 129: Critical SRB reception[%d]: measurementControl detected Msg Type %d
Line 136: Critical SRB reception: No protection required. Detected Msg Type %d.
Line 143: Error detected: RbrmVars->Guard_Timer is NULL.
Line 155: Critical SRB reception[%d]: Guard timer %x started for pending Sn %d 
Line 168: Critical SRB reception but RbrmVars->Guard_Timer is running
Line 176: Error detected: RbrmVars->Guard_Timer is NULL.
Line 191: Critical SRB reception: Resetting Pending SN %d.
Line 194: Critical SRB reception[%d]: Guard timer %x started for message type %d
Line 212: Critical SRB reception:  Integrety protected, Segment size %d, MobSize %d 
Line 233: Critical SRB reception: No Integrety protection, Segment size %d, MobSize %d 
Line 261: Error detected: pos is NULL.
Line 268: Error detected: node is NULL.
Line 293: Error detected: head is NULL.
Line 316: Error detected: ppHead is NULL.
Line 324: Error detected: node is NULL.
Line 370: ListNextEntry is NULL: PduSnBot %d, PduSnTop %d, Type %d, LiNum %d
Line 476: Critical SRB reception[%d]: Requesting turn OFF protection: Guard timer %x, SN in timer %d, PduSnBot %d, PriorityDuration %d
Line 491: Critical SRB reception[%d]: Turn ON TFCI protection scheme on delivery of non Critical SRB RbId = %d
Line 579: Critical SRB reception[%d]: Turn ON TFCI protection scheme: RbId = %d, VR_R %d
Line 585: Critical SRB reception[%d]: Turn ON TFCI protection scheme: RbId = %d, VR_R %d
Line 662: urlc_RbrmMaintainStateVars: RbId %d, HFN Inc Exceptional case(Warp around but No HFN Increment< SN %d,  VR_US=%d(BF update)
Line 674: urlc_RbrmMaintainStateVars: RbId %d, Sn %d, VR_US %d
Line 691: Critical SRB reception[%d]: Guard Timer was still active, Send token to PHY: RbrmVars->Guard_Timer %x, PduSn %d 
Line 713: Error detected: MainSduList creation failed.
Line 762: Error detected: RbId %d NumPdus is 0.
Line 769: Error detected: RbId %d PduArray[0] is NULL.
Line 781: After Pre-Processing [%d] [0x%X]
Line 782:      - Deciphered1: 
Line 786:    INVALIDATED !!!
Line 787: After Pre-Processing [%d] [0x%X]
Line 788:      - Deciphered2: 
Line 797: urlc_RbrmPassToReceptBuff() : RbId %d, VR_US %d, PduSn(F)%d, PduSn(L)%d, NumPdus %d
Line 849: Discard UM Data(Duplicated): RbId %d, NumPdus %d, VR_US %d, PduSn %d
Line 881: UM mode. Not equal to VR_US!: RbId %d, VR_US %d, PduSn %d
Line 893: urlc_RbrmPassToReceptBuff(): RbId %d, VR_R %d, VR_H %d, PduSn(F)%d, PduSn(L)%d, NumPdus %d, PduSize(F) %d
Line 916: RxWinFull RbId=%d, SN=%d, num=%d, VR_R=%d, VR_H=%d, WinTop=%d, 
Line 981: urlc_RbrmMrwStf RbId = %d unsafe to process token
Line 985: urlc_RbrmMrwStf RbId = %d SnLength = %d NLength = %d
Line 1004: urlc_RbrmMrwStf RbId = %d ListEntry LI %d [%d %d] type %d data %x
Line 1093: urlc_RbrmMrwStf: RbId=%d VR_R %d VR_H %d 
Line 1114: RbId=%d, NumLis=%d, SN=%d
Line 1115: Exact PDU HEX DUMP (8 bytes):
Line 1152: Error detected: current %d or next %d is NULL.
Line 1215: Error detected: pHead is NULL.
Line 1223: Error detected: *pHead is NULL.
Line 1231: Error detected: current is NULL.
Line 1239: Error detected: next is NULL.
Line 1293: Current segment (sn [%d %d] li %d first %d last %d) shouldn't be combined with trim marker
Line 1316: Error detected: current->Type == PADDING_MARKER && next->Type == LAST_TRIM_MARKER
Line 1323: Error detected: current->Type == LAST_TRIM_MARKER && next->Type == LAST_TRIM_MARKER
Line 1363: Error detected: head is NULL!
Line 1415: Error detected: duplicated PDU SN %d found.
Line 1472: Error detected: RbId %d Eis is NULL.
Line 1497: ProcessSduSegment: special case discard: RbId %d, PduSn %d, Data %d, First %d, Last %d skipping it since it doesn't have start marker
Line 1507: Critical SRB reception[%d]: Turn ON TFCI protection scheme on delivery of non Critical SRB RbId = %d
Line 1519: Error detected: RbId %d newEntry is NULL.
Line 1532: ProcessSduSegment: special case: RbId %d, PduSn %d marking as first sdu segment
Line 1545: Error detected: RbId %d newEntry is NULL.
Line 1564: Error detected: RbId %d unsupported mode %d
Line 1646: Error detected: RbId %d RbrmVars->MainSduList is NULL.
Line 1653: Error detected: RbId %d *ppIterator is NULL.
Line 1678: Critical SRB reception: MessageType %d, PduSn %d, PduSnBot %d, LastSeg %d, Guard Timer %x PendingPDUSn %d
Line 1702: Critical SRB reception[%d]: Deleting Guard timer %x, SN in timer %d, PduSnBot %d, PriorityDuration %d
Line 1711: Critical SRB reception: Higher Req reason: Pending SN %d, MsgType %d, VR_R %d, VR_H %d
Line 1727: Critical SRB reception: Cant decide abt RLC protection, TURN ON TFCI protection: PduSnBot %d, PduSnTop %d, VR_R %d, VR_H %d
Line 1820: LI_CHECK() : NumLis=%d
Line 1829: LI_CHECK() : RbId=%d, PduSn %d, %dth, LiSize=%d, LI value=0x%x PDUPosOffset=%d PDUsize= %d
Line 1875: INVALID Piggy Received: RbId=%d LiAndHdrSize=%d PDUoffset=%d Mobsize=%d
Line 1882: INVALID Piggy Received: RbId=%d (%x)
Line 1897: LI = 0x7FFB but It is not first LI
Line 1906: INVALID Data LI(LI offset <= previous): RbId=%d LI=%d LiAndHdrSize=%d PDUoffset=%d PrevPDUPosOffset=%d
Line 1912: INVALID Data LI(LI offset bigger than PDU size): RbId=%d LI=%d LiAndHdrSize=%d PDUoffset=%d Mobsize=%d
Line 1998: PDU with SN:%d received with HE(1%d) on RbId:%d
Line 2172: Error detected: RbId %d unsupported mode %d
Line 2181: urlc_RbrmProcDecodePdu: RbId %d RbrmVars is NULL.
Line 2209: Error detected: PduData[%d] is NULL.
Line 2217: Error detected: PduData[%d] iSegBitSize is not equal to iMobBitSize
Line 2254: Critical SRB reception [%d]: Requesting turn OFF protection: Guard Timer %x, SN %d discarded, SN in timer %d, PriorityDuration %d
Line 2273: Critical SRB reception: Requesting turn OFF RLC protection:  SN %d ,
Line 2285: PDU received out of sequence (missing PDU detection) [RbId=%d, SN=%d, VR_R=%d, VR_H=%d]
Line 2304: urlc_RbrmProcDecodePdu() : RbId %d, UM, AlternativeEbit TRUE SduSize %d, PaySrc 0x%x, RlcH %x
Line 2316: urlc_RbrmProcDecodePdu(): Discarding LI due to MRW: RbId=%d, PduSn %d, NumLis %d, LiDisLimit %d, LiOffset %d
Line 2340: ###### urlc_RbrmProcDecodePdu() : RbId=%d, PduSn %d, LI count=%d, LiSize=%d, LI value=0x%x
Line 2372: RbId=%d : SN=%d, (%dth/Tot:%d) LI = 0x7FFB recieved in first PDU
Line 2385: RbId=%d : SN=%d, (%dth/Tot:%d) LI = 0x7FFB
Line 2397: Error deteced: RbId=%d : SN=%d, (%dth/Tot:%d), LI = 0x7FFC invalid LI received for mode %d
Line 2430: Error detected: invalid condition for LI 0x7FFA, Mode: %d, AlternativeEbit: %d, LiSize: %d
Line 2433: Error detected: invalid condition for LI 0x7FFA, Mode: %d, LiSize: %d
Line 2454: Error detected: invalid condition for LI 0x7FFD, Mode: %d, AlternativeEbit: %d
Line 2457: Error detected: invalid condition for LI 0x7FFD, Mode: %d
Line 2484: Error detected: SduPortion is NULL.
Line 2508: DecodePDU : RbId=%d, SN=%d  LI count=%d, LiSize=%d, LI value=0x%x:8bits remained on LISize=15
Line 2535: VALID Piggy Received being passed to ISP: RbId %d, PduSn %d 
Line 2544: Error detected: PduHandle->PduData[%d] is NULL.
Line 2555: Error detected: CurrEntry is NULL.
Line 2559: UM SDU delivery(AlternativeEbit) or 0x7ffd: RbId %d, PduSn %d, PaySrc 0x%x
Line 2571: SpecialHEVal(else): RbId %d, PduSn %d, NumLis %d
Line 2664: Error detected: NewEntry is NULL.
Line 2706: Invalid LI %d DataSizeOffset %d MobSize %d SplitOffset %d
Line 2752: umac_urlc_sap_DataInd: No valid Configuration for (RbId =%d)
Line 2783: WARNING: PDU Size 0, discard (RbId=%d)
