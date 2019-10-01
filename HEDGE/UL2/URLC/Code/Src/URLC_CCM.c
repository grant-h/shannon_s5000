Line 172: Decipher check: TotalNumofRbs %d, head %d, tail %d
Line 252: urlc_Flush_CipherConfig  CipherConfigDisposalRoot[%d]=0x%X
Line 256: urlc_Flush_CipherConfig: No Entry was in CipherConfigDisposalRoot[%d]
Line 262:          0x%X is freed
Line 349: urlc_CcmNewCipherConfig Asn_CipheringAlgorithm_r7: %d
Line 354: CipherKey
Line 358: CipherKey is NULL
Line 392: Error detected: urlc_CcmNewCipherConfig: NewCipherConfig memory allocation failed.
Line 407: Create New Ciphering Configuration: Present %d, Algorithm %d, CipherConfigListRoot %x, NewCipherConfig %x
Line 475: Suspend state (1,3,4) and LI in PDU
Line 490: [SEC] SecModComp pending for Tx, Activation time met(RbId=2), Deciphering failed. Discard PDU : %d
Line 496: [SEC] SecModComp pending for Tx, Activation time met(RbId=2), Deciphering passed. PDU : %d
Line 507: Decipher check: RbId %d, PduSn %d, OldHfn %d, NewHfn %d
Line 509: Decipher check: RbId %d, PduSn %d, OldHfnCipherErr %d, NewHfnCipherErr %d, PaddingLIforOldHfn %d, PaddingLIforNewHfn %d 
Line 516: Decipher failure[New cipher config]: RbId %d, PduSn %d, Activation time %d, OldHfn %d, PendingPtr %d, NewHfn %d 
Line 525: CURLC_CIPHERCONFIGERR_IND (RbId=2)
Line 534: Decipher failure[New cipher config]: RbId %d, PduSn %d, Activation time %d, OldHfn %d, PendingPtr %x, NewHfn %d 
Line 543: CURLC_CIPHERCONFIGERR_IND (RbId=2)
Line 560: urlc_CcmSmcRollback: RB3 Eis is NULL
Line 588: urlc_CcmRbGetUlCipherConfig: UL Pending Config NULL, returning active %x, RbId=%d, PduSn=%d, HFN=%d
Line 623: UL: RbId %d, PduSn(%d)== UlActivationTime of %d, Pending configuration would be used(HfnTobeUsed = %d)
Line 641: UL Returning active config ConfigPtr=%x, HFN=%d
Line 697: DL PendingA activation time meet(I): PduSn %d, DlPendingActivationTime %d, RxWindowSize %d
Line 708: DL PendingA activation time meet(II): PduSn %d, DlPendingActivationTime %d, RxWindowSize %d
Line 744: DL PendingA Config (VR_R == DlPendingActivationTime): RbId %d, PduSn %d, DlPendingActivationTime %d, DlPendingAHfn %d
Line 750: DL PendingA Config is NOT NULL, RbId %d, PduSn %d, DlPendingActivationTime %d, DlPendingAHfn %d
Line 771: DL Pending Activation time meet(I): PduSn %d, DlActivationTime %d, RxWindowSize %d
Line 783: DL Pending Activation time meet(II): PduSn %d, DlActivationTime %d, RxWindowSize %d
Line 798: DL Pending Config is NOT NULL, RbId %d, PduSn %d, VR_R %d, VR_TempR %d, Activation time %d, PendingPtr %x, PendingHfn %d 
Line 806: DL Pending & PendingA are same: RbId %d, PduSn %d, Activation time %d, DlPendingAPtr %x, DlPendingAHfn %d 
Line 831: DL PendingA->Pending, PendingA deleted.(NextActivationTime=%d, NewPendingHfn=%d)
Line 838: Use new cipher config: RbId %d, PduSn %d, ActTime %d, PendingPtr(new)%x, Hfn %d
Line 850: AM MODE: Adjusted active HFN for SN=%d is HFN=%d, VR_R=%d
Line 877: AM MODE: Adjusted active HFN for SN=%d is HFN=%d, VR_R=%d
Line 905: Error detected: urlc_CcmRbGetDlUmCipherConfig: PduSn %d, UmEis is NULL!
Line 917: Error detected: urlc_CcmRbGetDlUmCipherConfig: RbId %d, CcmVars is NULL!
Line 969: DL Pending Config is NOT NULL, RbId %d, PduSn %d, Activation time %d, PendingPtr %x, PendingHfn %d 
Line 974: DL Pending & PendingA are same: RbId %d, PduSn %d, Activation time %d, DlPendingAPtr %x, DlPendingAHfn %d 
Line 1002: DL PendingA->Pending, PendingA deleted.(NextActivationTime=%d, NewPendingHfn=%d)
Line 1020: UM MODE: SN Wrap Increment HFN(RbId=%d, VR_US=%d, SN=%d, HFN=%d)
Line 1035: ActivationTime met Included &  wrap  Increment HFN (RbId %d, VR_US %d, SN %d, HFN %d, DlActivationTime %d)
Line 1045: ActivationTime met Included &  No HFN Increment(RbId %d, VR_US %d, SN %d, HFN %d, DlActivationTime %d, ReestablishInd %d
Line 1192: urlc_CcmRbAlterHfnCipherConfig UL(Old HFN %d, New HFN %d, UlActivePtr %x)
Line 1209: urlc_CcmRbAlterHfnCipherConfig DL(Old HFN %d, New HFN %d, DlListEntry %d, DlActivePtr %x)
Line 1241: Error detected: urlc_CcmRbAddCipherConfig: RbId=%d, CipherConfig is NULL!
Line 1256: Error detected: urlc_CcmRbAddCipherConfig: RbId=%d, AmEis is NULL
Line 1263: Error detected: urlc_CcmRbAddCipherConfig: RbId=%d, CcmVars is NULL
Line 1272: urlc_CcmRbAddCipherConfig(): Need to delete DlPendingPtr (DlPendingPtr %X, DlActivationTime=%d, DlPendingHfn=%d)
Line 1290: DL PendingA->Pending, PendingA deleted.(NewDlPendingAPtr %X, NewActivationTime=%d, NewPendingHfn=%d)
Line 1304: Update current cipherConfigInfo at DlPendingPtr(Activation time is same): RbId %d, DlActivationTime %d
Line 1325: urlc_CcmRbAddCipherConfig(DL Pending): RbId=%d, HFN=%d, Activation=%d, RbAccessCnt %d, CipherConfig %x
Line 1342: SMC rollback(I): RbId %d, VR_R %d, VR_H %d, DlActivationTime %d, RxWindowSize %d
Line 1348: CURLC_CIPHERCONFIGERR_IND (RbId=2)
Line 1358: SMC rollback(II): RbId %d, VR_R %d, VR_H %d, DlActivationTime %d, RxWindowSize %d
Line 1364: CURLC_CIPHERCONFIGERR_IND (RbId=2)
Line 1383: urlc_CcmRbAddCipherConfig(DL PendingA): RbId=%d, HFN=%d, Activation=%d, RbAccessCnt %d, CipherConfig %x
Line 1400: urlc_CcmRbAddCipherConfig(UL Pending): RbId=%d, HFN=%d, Activation=%d, RbAccessCnt %d, CipherConfig %x
Line 1415: urlc_CcmRbAddCipherConfig(UL PendingA): RbId=%d, HFN=%d, Activation=%d, RbAccessCnt %d, CipherConfig %x
Line 1492: urlc_CcmRbIncrementActiveHfn UL: RbId %d, HFN %d
Line 1502: No Active CipherConfigs: RbId %d
Line 1522: urlc_CcmRbIncrementActiveHfn DL: RbId %d, HFN %d, Config %d, CipherConfig %x
Line 1559: urlc_DecipherPendingTransaction(%d): PendingRbList[%d] %d, head, %d, tail %d, NoOfRbs %d
Line 1572: urlc_DecipherPendingTransaction(%d): IsScheduledDecipherSTF %d
Line 1588: urlc_DecipherPendingTransaction(): Scheduled Deciphering for RbId %d
Line 1594: urlc_DecipherPendingTransaction(%d): IsScheduledDecipherSTF %d
Line 1609: urlc_DecipherPendingTransaction(): Scheduled Deciphering for RbId %d
Line 1613: urlc_DecipherPendingTransaction(): Mode %d for RbId %d, tail %d, head %d, EIS 0x%x
Line 1621: Invalid pending RB idx %d, PendingRbList[Rbindex] %d.
Line 1627: urlc_DecipherPendingTransaction() %d, PendingRbList[Rbindex] %d.
Line 1656: urlc_DecipherTransactionScheduling(RbId %d)Received wrong parameter : Transaction=NULL, Eis=%x
Line 1658: urlc_DecipherTransactionScheduling(RbId %d)Received wrong parameter : Transaction=%x, Eis=%x, Xact'n->Eis=%x
Line 1688: LTE LMAC MODE!!!: RbId %d
Line 1717: urlc_DecipherTransactionScheduling: RbId %d Transaction %x
Line 1788: urlc_RxDecipherTimerStart: RbId %d, Transaction %x, TotalSizeCipher %d
Line 1799: LMAC BUSY(decipher transaction) RxLmacQueueStatus (%u)
Line 1834: LMAC BUSY(decipher transaction): RbId %d PollingCnt %d
Line 1857: Data RB Count is BIG, DataRbCnt %d
Line 1953: urlc_CcmUea1AddToTransaction: RbId %d, PduSn %d, UL HFN %d, CipherConfig %x, DataRbCnt %d
Line 1956: CipherKey(Current)
Line 1957: CipherKey(Config)
Line 1967: NgCnt is higher than 2: RbId %d, Ngcnt %d, CipherConfig %x
Line 1974: CipherConfig is different(Ngruop): RbId %d, OldCipherConfig %x, CipherConfig %x
Line 1979: NgCnt Count is BIG %d
Line 1993: UL Transaction->ArrayCnt is out of bound %d
Line 2003: NgCnt Count is BIG %d
Line 2028: CurrPduHandle==NULL: RbId %d
Line 2063: Snow3G : RbId %d, PduSn %d, HFN %d, CkIndex %d
Line 2068: TX Cipher Only Done(SRBs): RbId %d, CipherConfig %x, PduNum %d, PduSn %d, Snow3G %d, HFN %d, PaySize %d
Line 2074: TX Cipher Info(DataRBs): RbId %d, CipherConfig %x, PduNum %d, PduSn %d, Snow3G %d, HFN %d, CKSrcIdx %d
Line 2083: Error detected: RbId %d CipherTransaction ArrayCnt %d exceeds URLC_MAX_CIPHER_REQUESTS
Line 2134: ERROR::urlc_CcmUea1AddToDlTransaction::not supported mode(%)!
Line 2192: NumOfNgroup is higher than max: RbId %d, NumOfNgroup %d
Line 2202: NumOfNgroup value out of bounds : %d(RbId %d)
Line 2208: RX decipher only(New Cipher Config): RbId %d, Algorithm %d, CkIdx %d, NgrCnt %d, NumOfPdu(ForOldConfig)%d, CipherConfig %x, OldCipherConfig %x
Line 2215: NumOfNgroup value out of bounds : %d(RbId %d)
Line 2230: DL Transaction->ArrayCnt is out of bound %d
Line 2248: RX decipher only: RbId %d, PduSn %d, Snow3G %d, HFN %d, CipherConfig %x, PduNum %d, AutoCountc %d
Line 2257: Error detected: RbId %d CipherTransaction ArrayCnt %d exceeds URLC_MAX_CIPHER_REQUESTS
Line 2299: TX urlc_CcmUea1ProcessUlTransaction() : RbId %d, CipheredPdus %d, TransactionTID 0x%x, Snow3G %d, TxGlobalCnt %d
Line 2381: urlc_CcmUea1ProcessDlTransaction(): LMACnotSafe %d , QueuedTransactionNum %d , IsRunningTimer %d , TotalNumOfRbs %d
Line 2386: Start queueing (decipher transaction): RbId %d, Mode %d, TokensTaken %d, TokensTakenMax %d
Line 2409: Push to TransactionInfo: RbId %d, Mode %d, QueuedTransactionNum %d, TotalNumOfRbs stored %d
Line 2437: LTE LMAC MODE!!!: RbId %d, Mode %d, QueuedTransactionNum %d, MaxQCntCipherTransaction %d
Line 2459: urlc_CcmReceiveCipherCnf_UL TID=%d
Line 2467: Remove UL Transaction for inactive RB %d
Line 2525: Remove DL Transaction for inactive RB %d
Line 2530: Resetting IsScheduledDecipherSTF 
Line 2556: LTE LMAC MODE!!!
Line 2561: urlc_CcmReceiveCipherCnf_DL() RbId %d, LMACnotSafe %d
Line 2580: End queueing(decipher transaction): RbId %d, AM, QueuedTransactionNum %d, LMACnotSafe %d
Line 2601: End queueing(decipher transaction): RbId %d, UM, QueuedTransactionNum %d, LMACnotSafe %d
Line 2619: Scheduled next deciphering for RbId %d, PendingQueuedTransNum %d
Line 2632: urlc_CcmReceiveCipherCnf_DL(): head %d, tail %d, TotalNumOfPendingRbs %d
Line 2636: Scheduled Deciphering for Rb Index %d, RBId %d, Pending list head %d
Line 2675: urlc_CcmAbortCiphering UL RbId=%d
Line 2705: urlc_EmGetUlEis debugging test
Line 2731: urlc_CcmAbortCiphering DL RbId=%d
Line 2805: urlc_CcmRbRemoveCipherConfig: RbId%d, CallerId %d, CkIndex %d, RbAccessCnt %d, CipherConfig %x, PrevEntry %x, NextEntry %x
Line 2833: urlc_CcmRbRemoveCipherConfig(Remove): CkIndex %d, CipherConfig(Remove)%x
Line 2863: Error detected: New Active List Entry memory allocation failed RbId %d.
Line 2906: urlc_CcmAddToDlActiveList: RbId %d, DlActivePtr %x, DlActiveHfn %d, NewEntryListPtr %x, NewEntry->DlActivePtr %x, NewEntry->DlActiveHfn %d
Line 2929: urlc_CcmRemoveFromDlActiveList: RbId %d, CallerId %d, OldEntryPtr %x, OldDlActivePtr %x
Line 2955: ........No Active Configs, return NULL: RbId %d, PduSn%d
Line 3027: Error detected: RbId %d, UlCiphernfo memory allocation failed.
Line 3039: Allocate transaction dynamically(UL): RbId %d, iUlDynamicAllocCnt %d
Line 3069: Allocate transaction dynamically(DL): RbId %d, iDlDynamicAllocCnt %d
Line 3107: urlc_CcmRemoveDatabaseTransaction: RbId %d Transaction %x
Line 3114: Already Free for Transaction
Line 3124: stackId : %d is already disabled. do nothing
Line 3133: other stackId : %d is enabled. do nothing
Line 3148: urlc_Destroy_DecpherTime freed complete
Line 3176: Created pal_TmCreateTimer for decipher: RbId %d, UrlcDecipherTimer 0x%x
Line 3181: UrlcDecipherTimer is already exist!! UrlcDecipherTimer 0x%x
Line 3187: Do not initiate pal_TmCreateTimer: RbId %d
Line 3216: urlc_RxDecipherTimerExpiry(Eis is NULL): RbId %d
Line 3224: urlc_RxDecipherTimerExpiry : RxDecipherTimer is not running!
Line 3234: TransactionId->Eis == NULL: RbId %d
Line 3246: TransactionId->Eis == NULL: RbId %d
Line 3254: urlc_RxDecipherTimerExpiry(Invalid Mode): RbId %d, Mode %d
Line 3261: urlc_RxDecipherTimerExpiry: RbId %d, Mode %d, TransactionId %x, QueuedTransactionNum %d
Line 3267: urlc_RxDecipherTimerExpiry: RbId %d, Mode %d, TransactionId %x, QueuedTransactionNum %d
Line 3317: urlc_CcmDeleteCipherTransactionAndPduhandle: RbId =%d, RB In Timer %d, IsScheduledDecipherSTF %d, IsRunningTimer %d 
Line 3323: Decipher flags are reset : RbId %d, IsScheduledDecipherSTF = %d
Line 3355: Free the CipherTransaction: RbId %d, NumOfTransaction %d, Id %d, NumOfPdus %d
Line 3389: Invalid direction: RbId %d
Line 3408: Rearragned Pending Rb List Info, head %d , tail %d 
Line 3423: RbId %d in the pending list removed as transaction is freed, isRbPresent 0x%x
Line 3448: URLC requires Pause delay: IsScheduledDecipherSTF %d, PendingRbs[SIMInstance].TotalNumOfRbs = %d
Line 3534: LMAC Decipher failed, Using SW Deciphering: RbId:%d, Algorithm %d, PduSn %d
Line 3538: SW decipher data: 
Line 3542: PASS through LMAC decipher: 
Line 3548: LMAC Decipher Busy, Using SW Deciphering RbId:%d, Algorithm %d, PduSn %d
Line 3551: SW decipher data: 
Line 3556: Both SIM present: SW decipher: RbId:%d, Algorithm %d, PduSn %d
Line 3559: SW decipher data: 
Line 3566: urlc_CcmExcuteCipherAndCheckLI: Null pointer (RbId =%d)
Line 3644: LI indicates out of PDU range: RbId %d, HFN %d, PduSn %d, %dth, LiSize %d, LiValue 0x%x, payloadSize %d
