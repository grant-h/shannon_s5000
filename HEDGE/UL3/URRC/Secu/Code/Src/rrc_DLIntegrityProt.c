Line 92: DLIntProt StartUpInit
Line 104: DLIntProt ShutdownDestroy
Line 117: DLIntProt init
Line 156: DLIntProt free
Line 192: DLIntProt Create SRB%d
Line 267: rrc_DLIntegrityProt_UpdatePrevSmcStartValue No in State AWAITINGSMCACTIVATIONTIME
Line 273: StartMgr  PrevCsSmcStartValue CS: %x
Line 278: StartMgr  PrevPsSmcStartValue PS: %x
Line 327: DLIntProt DoIntChk NotStarted
Line 361: SecMgrInst is NULL
Line 368: SkipSameMsnCheckForSCR :%d 
Line 380: DLIntProt DoIntChk Rx-Msn:%x , Current Msn :%x 
Line 389: DLIntProt DoIntChk Rx-Msn:%x Invalid , Current Msn :%x 
Line 396: SkipSameMsnCheck = %d
Line 408: SecMgr = NULL
Line 419: SMC has been done for CS domain
Line 431: SMC has been done for PS domain
Line 441: Invalid CN Domain ID = %d
Line 449: [Delayed Msg] DLIntProt DoIntChk Unchk'd msg type While Intergrity Starting 
Line 454: DLIntProt DoIntChk Unchk'd msg type
Line 458: DlInt IntegrityCheck requested for SRB %d 
Line 459: DLIntegrityProt_p->CountI and RxMsn in rrc_DLIntegrityProt_PerformDLIntegrityCheck %x %x 
Line 469: DLIntProt F9 class HfnIncrementSkipped is TRUE
Line 481: DlInt MSN Wrap Around, Increment HFN for SRB %d 
Line 499: CountI = %x
Line 501: Calculating MAC using integrity algorithm f9
Line 507: DLIntProt  F9 class failed to perform DLIntCheck
Line 510: IntegrityAlgorithmType = %d
Line 521: DLIntProt DoIntChk Rx-MAC: %x differs to MAC without HFN increment:%x
Line 522: CountI = %x, MAC = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 524: IKUsed = 
Line 525: MessageBuffer = 
Line 541: DLIntProt  F9 class failed to perform DLIntCheck
Line 551: DLIntProt DoIntChk Rx-MAC: %x differs to MAC with HFN increment:%x
Line 552: CountI = %x, MAC = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 559: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 560: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 562: IKUsed = 
Line 563: MessageBuffer = 
Line 575: Retrial (1): Calculating MAC using integrity algorithm f9 without HFN Increment
Line 581: DLIntProt  F9 class failed to perform DLIntCheck
Line 595: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 596: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 598: IKUsed = 
Line 599: MessageBuffer = 
Line 607: DLIntProt  F9 class failed to perform DLIntCheck Check for Alternative Start Value
Line 623: DlInt MSN Wrap Around, Increment HFN for SRB %d 
Line 631: Retrial (2): Calculating MAC using integrity algorithm f9 with START value at latest SMC
Line 637: DLIntProt  F9 class failed to perform DLIntCheck
Line 647: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 648: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 664: Retrial (3): Calculating MAC using integrity algorithm f9 without HFN Increment with START value at latest SMC
Line 670: DLIntProt  F9 class failed to perform DLIntCheck
Line 681: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 682: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 689: Latest Startvalues at DLIntegrityProt_p moment are : %d 
Line 700: Retrial (4): Calculating MAC using integrity algorithm f9 without HFN Increment with Latest transmitted START
Line 706: DLIntProt  F9 class failed to perform DLIntCheck
Line 717: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 718: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 735: DlInt MSN Wrap Around, Increment HFN for SRB %d 
Line 742: Retrial (5): Calculating MAC using integrity algorithm f9 with previous start value stored
Line 748: DLIntProt  F9 class failed to perform DLIntCheck
Line 755: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 756: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 775: ReconfigAborted: Retrial with latest configuration
Line 794: DlInt MSN Wrap Around, Increment HFN for SRB %d 
Line 811: DLIntProt  F9 class failed to perform DLIntCheck
Line 817: CountI = %x, MAC = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 819: IKUsed = 
Line 823: ReconfigAborted: Retrial without HFN increment
Line 846: DLIntProt  F9 class failed to perform DLIntCheck
Line 852: CountI = %x, MAC = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 854: IKUsed = 
Line 875: ReconfigAborted: COUNT-I = %x
Line 881: SecMgrInst is NULL
Line 897: DLIntProt  No DomainId available in SecModeCmd to DlIntCheck
Line 915: DlInt MSN Wrap Around, Increment HFN for SRB %d 
Line 925: Retrial (2): Calculating MAC using integrity algorithm f9 with previous transmitted START value
Line 931: DLIntProt  F9 class failed to perform DLIntCheck
Line 937: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 938: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 949: Retrial (3): Calculating MAC using integrity algorithm f9 without HFN Increment with previous transmitted START value 
Line 955: DLIntProt  F9 class failed to perform DLIntCheck
Line 961: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 962: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 1000: DlInt MSN Wrap Around, Increment HFN for SRB %d 
Line 1010: Retrial (4): Calculating MAC using integrity algorithm f9 with Latest transmitted START
Line 1016: DLIntProt  F9 class failed to perform DLIntCheck
Line 1022: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 1023: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 1034: Retrial (5): Calculating MAC using integrity algorithm f9 without HFN Increment with Latest transmitted START
Line 1040: DLIntProt  F9 class failed to perform DLIntCheck
Line 1046: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 1047: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 1094: Same as previous message,discarded for duplicate
Line 1139: DSDS: DlInt MSN Wrap Around success ( RxMsn >= Previous MSN), update the COUNTI[SRB %d] = %x 
Line 1164: DLIntProt DoIntChk successful
Line 1189: DLIntProt  ,New Fresh value %x  specified 
Line 1203: DLIntProt  No DomainId available in SecModeCmd to DlIntCheck
Line 1209: UpdateCheckParamsFromDlMsg: No Algorithm
Line 1240: SecMgrInst is NULL
Line 1249: DlInt HFN is reset to zero  %x
Line 1257: DlInt HFN to be used  is from StartValues  %x
Line 1266: DlInt HFN to be used  initialised to Zero  
Line 1271: DlInt Increment HFN since MSN Wrap Around Occurred 
Line 1282: DlInt HFN to be used  is from StartValues  %x
Line 1285: DlInt Increment HFN since MSN Wrap Around Occurred 
Line 1308: DLIntProt Idle StartSmc
Line 1330: DlInt Idle ModifySmc for SRB %d 
Line 1341: DlInt Idle Invalid Activation Time  %d for SRB %d specified
Line 1371: Activation time is wrapped around
Line 1373: DlInt PendingActivation for SRB %d, Current-MSN: %d, Activation-MSN:%d	
Line 1404: Activation time is wrapped around
Line 1406: DlInt PendingActivation for SRB %d, Current-MSN: %d, Activation-MSN:%d	
Line 1423: DlInt Idle StartRelocation for SRB %d 
Line 1439: DlInt  SmcReconfiguring ConfigurationComplete for SRB %d 
Line 1457: DlInt  SmcReconfiguring Abort for SRB %d 
Line 1475: Latest DlIntegrity configuration is stored
Line 1482: SecMgrInst is NULL
Line 1514: DlInt  AwaitingSmcCompleteL2ack ConfigurationComplete for SRB %d 
Line 1534: DlInt  AwaitingSmcCompleteL2ack Abort for SRB %d 
Line 1552: Latest DlIntegrity configuration is stored
Line 1559: SecMgrInst is NULL
Line 1595: DlInt  AwaitingActivationTime ModifySMC for SRB %d 
Line 1614: DlInt  AwaitingActivationTime StartRelocation for SRB %d 
Line 1633: DlInt  AwaitRelocComplete Complete for SRB %d 
Line 1657: DlInt DefaultState EnteringIdle  for SRB %d 
Line 1703: DLIntProt GenerateConfigurationStartSmc
Line 1721: DLIntProt GenerateConfigurationModifySmc
Line 1741: DLIntProt GenerateConfigurationComplete
Line 1759: DLIntProt GenerateConfigurationAbort
Line 1777: DLIntProt GenerateConfigurationStartRelocation
Line 1795: DLIntProt GenerateEnteringIdle
Line 1821: DLIntProt ActivationTimeExpired for SRB%d
Line 1870: DLIntProt ActivationTimeMissed for SRB%d
Line 1904: DlInt Keys and Counts activated for  SRB %d 
Line 1911: CnDomain @ ApplyLatestKeysAndCounts%d 
Line 1920: DlInt NoNew Keys nor no Authentication, set 20MSB of HFN to START for SRB  %d 
Line 1923: Latest Startvalues at DLIntegrityProt_p moment are : %d 
Line 1939: DlInt Keys and Counts backuped for  SRB %d 
Line 1942: Backup CnDomain %d
Line 1948: Backup IK = 
Line 1955: DlInt NoNew Keys nor no Authentication, set 20MSB of HFN to START for SRB	%d
Line 1958: Latest Startvalue at DLIntegrityProt_p moment is: %x 
Line 1962: Backup COUNT-I: %x
Line 1975: DlInt Keys and Counts activated for  SRB %d 
Line 1978: CnDomain @ ApplyLatestKeysAndCounts%d 
Line 1984: DlInt NoNew Keys nor no Authentication, set 20MSB of HFN to START for SRB  %d 
Line 1987: Latest Startvalues at DLIntegrityProt_p moment are : %d 
Line 2001: DlInt Keys and Counts activated for  SRB %d 
Line 2004: CnDomain @ ApplyLatestKeysAndCounts%d 
Line 2010: DlInt NoNew Keys nor no Authentication, set 20MSB of HFN to START for SRB  %d 
Line 2019: Latest Startvalues at DLIntegrityProt_p moment are : %d 
Line 2027: CountIUpdated = %d, SrbId = %d
Line 2044: CountI of Srb %d before rollback = %x
Line 2047: CountI of Srb %d after rollback = %x
