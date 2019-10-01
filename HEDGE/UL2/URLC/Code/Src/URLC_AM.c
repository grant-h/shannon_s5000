Line 99: General:-----------------------------------------
Line 100: Mode: MODE_AM
Line 101: UL PduSize: %d
Line 102: DL PduSize: %d
Line 106: Detect DL PduSize: TRUE
Line 110: Detect DL PduSize: FALSE
Line 113: DL FlexibleSize: %d
Line 114: DL LI Size: %d
Line 115: Special HE value DL: %d, UL: %d
Line 117: Tx Window Size: %d
Line 118: Confirm Tx Window Size: %d
Line 119: UL_MAX_BUFFERS: %d
Line 120: Rx Window Size: %d
Line 124: In Sequence Delivery: TRUE
Line 128: In Sequence Delivery: FALSE
Line 131: Maximum RST: %d
Line 132: Timer RST: %d
Line 133: Minimum Wsn: %d
Line 134: Polling:-----------------------------------------
Line 135: Polling Settings -->(0x%x)
Line 137: ....................x
Line 138: ....................x
Line 139: ....................x
Line 140: ....................x
Line 141: ....................x
Line 142: ....................x
Line 143: ....................x
Line 144: ....................x
Line 146: Timer Poll: %d
Line 147: Timer Poll Periodic: %d
Line 148: Timer Poll Prohibit: %d
Line 149: Poll PDU: %d
Line 150: Poll Window: %d
Line 151: NewPoll Window: %d
Line 153: Tx Status Report:-----------------------------------------
Line 154: Tx Status Report Settings-->(0x%x)
Line 156: ....................x
Line 157: ....................x
Line 158: ....................x
Line 159: ....................x
Line 161: Timer Status Prohibit: %d
Line 162: Timer Status Periodic: %d
Line 163: Sdu Discard:-----------------------------------------
Line 164: Sdu Discard Settings-->(0x%0x)
Line 166: ....................x
Line 167: ....................x
Line 168: ....................x
Line 169: ....................x
Line 171: Timer Discard: %d
Line 172: Max Data: %d
Line 173: Timer Mrw: %d
Line 174: Max Mrw: %d
Line 227: urlc_AmReconfigureEntity(UL PDU size is ZERO!!): RbId %d
Line 263: urlc_AmConfigureEntity(UL PDU size is ZERO!!): RbId %d
Line 278: urlc_AmConfigureEntity: Critical SRB reception: RbId %d, SRBRegistrySetting %d, Active clients %d
Line 360: urlc_AmConfigureEntity(Forced ISD): RbId %d
Line 399: urlc_AmConfigureEntity() : RbId %d, MaxDat %d, MaxRst %d
Line 471: CipherKey
Line 497: [Stats] Start Timer:
Line 506: Radio Bearer Configuration Summary: RbId %d:
Line 553: urlc_AmModifyEntity: Critical SRB reception: RbId %d, Clients %d, SRBRegistrySetting %d
Line 561: Critical SRB reception: Guard Timer was still active, Send token to PHY: Guard_Timer %x, PduSn %d 
Line 575: urlc_AmModifyEntity(UL PDU size is ZERO!!). No Update: RbId %d UlPduSize(old)%d
Line 599: urlc_AmModifyEntity(Updated HFN): RbId %d, HFN(UL/DL)%d
Line 645: Radio Bearer MODIFIED Configuration Summary: RbId %d:
Line 666: urlc_AmReleaseEntity() : RbId %d SDUs are restoring now
Line 718: Radio Bearer Summary: RbId %d(Eis %d)
Line 719: .UL:-----------------------------------------
Line 720: ..Mode: MODE_AM
Line 721: ..PduSize: %d
Line 722: ..NumDataPdusTxed: %d
Line 723: ..NumRetransmitions: %d
Line 724: ..NumStatusPdusTxed: %d
Line 725: ..NumPiggyBackStatusTxed: %d
Line 726: ..NumSdusReceived: %d
Line 727: ..NumSdusDelivered: %d
Line 728: ..NumSdusDiscarded: %d
Line 729: .DL:-----------------------------------------
Line 730: ..Mode: MODE_AM
Line 731: ..PduSize: %d
Line 732: ..NumDataPdusRxed: %d
Line 733: ..NumStatsReportsRxed: %d
Line 734: ..NumInvalidPdusDetected: %d
Line 735: ..NumSdusCreated: %d
Line 736: .Control:-------------------------------------
Line 737: ..NumResetsCompleted: %d
Line 738: ..NumResetsInitiatedByUe: %d
Line 739: ..NumResetsInitiatedByPeer: %d
Line 740: ..NumDlllIndicationsSentToUrrc: %d
Line 773: urlc_AmReestablishEntity: Critical SRB reception: RbId %d, SRBRegistrySetting %d, Clients %d
Line 782: Critical SRB reception[%d]: Guard Timer was still active, Send token to PHY: Guard_Timer %x, PduSn %d 
Line 798: urlc_AmReestablishEntity() : Re-established BOTH_SIDE, RbId %d
Line 872: urlc_AmReestablishEntity: Cancelling Poll_Prohibit_Timer(RbId=%d)
Line 917: urlc_AmReestablishEntity() : Re-established RECEIVER_SIDE, RbId %d
Line 956: urlc_AmReestablishEntity() : RbId %d, RlcResetReInit %d already in reset procedure
Line 975: urlc_AmReestablishEntity() : Re-established TRANSMITTER_SIDE, RbId %d
Line 1048: urlc_AmReestablishEntity() : RLC reset is ongoing, RbId %d, RlcResetReInit %d
Line 1074: urlc_AmReestablishEntity: Cancelling Poll_Prohibit_Timer(RbId=%d)
Line 1128: urlc_AmResumeEntity: RbId %d, State %d, PbDataQueuedForTxWindow %d, NumTxRequests %d, NumRetxRequests %d 
Line 1280: Txwindow Full(Reconfig): RbId %d, TxWinSize %d, VT_A %d, UpperEdge %d, VT_S %d
Line 1289: Txwindow is available(Reconfig): RbId %d, TxWindowSize %d, LowerEdge %d, UpperEdge %d, VT_A %d, VT_S %d
Line 1302: PDU segmentation can start(Reconfig): RbId %d, PduSn %d, UpperEdge %d, VT_A %d, VT_S %d
Line 1307: PDU segmentation is still stopped(Reconfig): RbId %d, PduSn %d, UpperEdge %d, VT_A %d, VT_S %d
Line 1355: urlc_AmReconfigureEntity(Forced ISD): RbId %d
Line 1380: urlc_AmReconfigureEntity() : RbId %d, MaxDat %d, MaxRst %d
Line 1433: urlc_AmReconfigureEntity() : RbId %d, BO %d, VT_A %d, VT_S %d
Line 1435: urlc_AmReconfigureEntity() : NumTxReq %d, NumRetxReq %d, SduFifoCnt %d, TCPSduFifoCnt %d, TCPAckSduFifoCnt %d
Line 1437:  UlPduSize %d, VR_R %d, VR_H %d, DetectDlPduSize %d, DlPduSize %d, DlFlexibleSize %d
Line 1439: Radio Bearer Reconfiguration Summary: RbId %d:
Line 1446: urlc_AmReconfigureEntity: Critical SRB reception: RbId %d, SRBRegistrySetting %d, Clients present %d
Line 1454: Critical SRB reception[%d]: Guard Timer was still active, Send token to PHY: Guard_Timer %x, PduSn %d 
Line 1473: urlc_AmStopTimers: poll %x, Periodic %X, Prohibit %x
Line 1484: urlc_AmStopTimers: Cancelling Poll_Timer(RbId=%d)
Line 1492: urlc_AmStopTimers: Cancelling Poll_Prohibit_Timer(RbId=%d)
