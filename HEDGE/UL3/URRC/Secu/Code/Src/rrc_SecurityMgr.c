Line 122: SecMgr    StartUpInit
Line 134: SecMgr    ShutdownDestroy
Line 150: SecMgr    init
Line 187: SecMgr    Unable to register for state change info
Line 215: No Memory allocated for rrc_SecurityMgr_init 
Line 229: [SecMgr] free
Line 268: SecMgr    GetInstanceId creates instance
Line 299: SecMgr    MmSecurityKeyIndication
Line 303: CS-IK :
Line 304: CS-CK :
Line 312: isHandoverToUmts is FALSE Update as new Keys
Line 325: isHandoverToUmts is TRUE Considered as Old Keys
Line 330: SRVCC PS-IK :
Line 331: SRVCC PS-CK :
Line 378: SecMgr    GmmSecurityKeyIndication
Line 382: PS-IK :
Line 383: PS-CK :
Line 391: isHandoverToUmts is FALSE Update as new Keys
Line 404: isHandoverToUmts is TRUE Considered as Old Keys
Line 409: SRVCC PS-IK :
Line 410: SRVCC PS-CK :
Line 491: Latest Integrity keys belong to CS-Domain 
Line 496: Latest Integrity keys belong to PS-Domain 
Line 581: PS-IK tostart :
Line 582: PS-CK tostart :
Line 586: CS-IK tostart :
Line 587: CS-CK tostart :
Line 666: [rrc_SecurityMgr_HandoverToUtran] DlMsgInstId is NULL
Line 671: SecMgr    HandoverToUtran
Line 689: SecMgr    HandoverToUtran invalid
Line 748: [SecMgr][NotReconfig] HandleSMI
Line 754: [SecMgr] Wrong SMI during PendingSMC due to DlMsgReconfig
Line 789: [SecMgr][NotReconfig] HandleSMC
Line 799: [SecMgr] Simultaneous SMC Accept
Line 825: [SecMgr] HandleSMC Reject due to PendingSMC
Line 847: [SecMgr][NotReconfig] HandleDelayedSMC
Line 854: [SecMgr] PendingSMC Mismatch
Line 865: [SecMgr] No PendingSMC (Flag %d)
Line 869: [SecMgr] PendingSMC not yet handled
Line 888: [SecMgr][NotReconfig] CellUpdate
Line 921: [SecMgr][NotReconfig] RatModeChangeReq
Line 938: [SecMgr][Config] HandleSMI
Line 942: [SecMgr] HandleSMI Accept
Line 951: [SecMgr] HandleSMI Reject
Line 971: [SecMgr][Config] HandleSMC
Line 976: [SecMgr] HandleSMC Accept
Line 983: [SecMgr] HandleSMC Reject
Line 1001: [SecMgr][Config] ConfigIPCnf
Line 1005: [SecMgr] NACK received from IntegrityMgr
Line 1014: [SecMgr] Configuring -> AwaitCiphResp
Line 1020: [SecMgr] ConfigUnderway
Line 1041: [SecMgr][Config] ConfigCiphCnf
Line 1045: [SecMgr] NACK received from CipheringMgr
Line 1053: [SecMgr] Configuring -> AwaitIPResp
Line 1059: [SecMgr] ConfigUnderway
Line 1079: [SecMgr][Config] InitCellUpdate
Line 1098: [SecMgr][AwaitCiphCnf] HandleSMC
Line 1115: [SecMgr][AwaitCiphCnf] CiphCnf
Line 1118: [SecMgr] NACK received from CipheringMgr
Line 1137: [SecMgr][AwaitCiphCnf] InitCellUpdate
Line 1156: [SecMgr][AwaitIPCnf] HandleSMC
Line 1174: [SecMgr][AwaitIPCnf] IPCnf
Line 1177: [SecMgr] NACK received from IntegrityMgr
Line 1183: [SecMgr] AwaitIpResp -> AwaitCiphResp
Line 1189: [SecMgr] ConfigUnderway
Line 1207: [SecMgr][AwaitIPCnf] InitCellUpdate
Line 1225: [SecMgr][AwaitL2Cnf] HandleSMI
Line 1229: [SecMgr] Simultaneous SMI Accept - Pended
Line 1238: [SecMgr] Simultanous SMI Reject
Line 1259: [SecMgr][AwaitL2Cnf] HandleSMC
Line 1265: [SecMgr] Simultanous SMC Accept - Pended
Line 1273: [SecMgr] Simultanous SMC Reject
Line 1303: [SecMgr] AwaitL2Cnf SMCL2ACK
Line 1314: [SecMgr] AwaitL2Cnf SMCL2NACK
Line 1343: [SecMgr] FirstDLIntCheckedMsgHandled SMCL2ACK
Line 1349: [SecMgr] FirstDLIntCheckedMsgHandled Failed to deregister for Cnf
Line 1380: [SecMgr] AwaitL2Cnf SMIL2ACK
Line 1385: [SecMgr] AwaitL2Cnf SMIL2NACK
Line 1406: [SecMgr][AwaitL2Cnf] InitCellUpdate
Line 1534: [SecMgr] CipherErrorInd
Line 1554: [SecMgr] Entering NotReconfiguring
Line 1561: [SecMgr][NotReconfiguringEntry] PendingDueToDlMsgReconfig %d, ReconfigMsg 0x%x
Line 1566: [SecMgr][NotReconfiguringEntry] PendingDueToDlMsgReconfig %d, ReconfigMsg 0x%x
Line 1575: SecMgr    SMCDLMsg reference not null on EnteringNotReconf 
Line 1579: SecMgr    PendSMCDLMsg reference not null on EnteringNotReconf 
Line 1598: [SecMgr] AwaitCiphResp_Entry
Line 1616: [SecMgr] Generate HandleSMI
Line 1639: [SecMgr] Generate HandleSMC
Line 1660: [SecMgr] Generate HandleSMC
Line 1681: [SecMgr] Generate IPCnf
Line 1700: [SecMgr] Generate CiphCnf
Line 1721: [SecMgr] Generate SMCL2Ack
Line 1745: [SecMgr] Generate FirstDLIntCheckMsgHandled
Line 1765: [SecMgr] Generate SMIL2Ack
Line 1791: [SecMgr] Generate InitCellUpdate
Line 1812: [SecMgr] Generate EnteringIdle
Line 1832: [SecMgr] Generate CipherErrorInd
Line 1855: [SecMgr] Generate RatModeChangeReq
Line 1888: [SecMgr] Priv ProcessSMI IP present
Line 1893: [SecMgr] Priv ProcessSMI Ciph present
Line 1937: [SecMgr] DomainId not returned from SecModeCmd DlMsg
Line 1989: The SMC will be processed after finishing RB reconfiguration
Line 2043: SecMgr	ValidateSMC IP present
Line 2048: SecMgr	ValidateSMC Ciph present
Line 2054: SecMgr	ValidateSMC No security IE's
Line 2064: SecMgr	SecCap not returned from SecModeCmd DlMsg
Line 2068: SecMgr CiphAlgUea0 mismatch 
Line 2073: SecMgr CiphAlgUea1 mismatch 
Line 2078: SecMgr IntAlgUia1 mismatch 
Line 2083: SecMgr CiphAlgUea2 mismatch 
Line 2088: SecMgr IntAlgUia2 mismatch 
Line 2101: SecMgr GsmSecCap MisMatch ,RequestedGsmCap is %x , ActualCap is %x 
Line 2106: SecMgr GsmSecCap not present in the SMC 
Line 2119: SecMgr	ValidateSMC Equipment Mode in TDD Override the Capabilities for Lte Test
Line 2130: SecMgr	ValidateSMC invalid SecCap
Line 2148: SecMgr	ValidateSMC DLMP Process failed
Line 2214: SecMgr State moved to SECURITYMGR_AWAITIPRESP
Line 2221: SecMgr State moved to SECURITYMGR_AWAITCIPHRESP as no IntegrityReconfiguring
Line 2226: No IntegrityReconfiguring and CipheringReconfiguring
Line 2255: SecMgr    SecModeCmd DlMsg failed to create UlFailure
Line 2259: SecMgr    Send SMCFailure to Utran
Line 2302: [SecMgr] SMC failed to create UlFailure
Line 2306: [SecMgr] Send SMCFailure to Utran
Line 2337: [SecMgr][CheckSmcValidityWithPendingSmc] SMC Not Available (NewSmc 0x%x, PendingSmc 0x%x)
Line 2360: SecMgr ValidateSimultaneousReconfiguration 
Line 2374: SecMgr Invalid Simultaneous Integrity Reconfig 
Line 2383: SecMgr Invalid Simultaneous Ciphering Reconfig 
Line 2434: SecMgr    SecModeCmd DlMsg failed to create ULSuccess
Line 2641: [SecMgr] abort SMC and return to NotReconfig
Line 2672: [SecMgr] abort SMC and discard pending SMC
Line 2682: [SecMgr] action pending SMI
Line 2750: [SecMgr] Handle pending config
Line 2755: [SecMgr] Begin the PendingConfig
Line 2795: SecMgr Configuration Aborted 
Line 2909: Start of HandleDelayedSMC
Line 2921: msg = NULL
Line 2931: L2U_PS: No need to update keys
Line 2936: L2U_SRVCC: Need to use PS and CS SRVCC keys
Line 2957: L2U_SRVCC: Normal PS keys and SRVCC CS keys will be used
Line 2968: rrc_SecurityMgr_UpdateSrvccKeys: invalid L2UHOType = %d
Line 2980: PendingCSKeyActivation  set to TRUE 
Line 2989: PendingPSKeyActivation  set to TRUE 
Line 2994: Invalid CN Domain %d
