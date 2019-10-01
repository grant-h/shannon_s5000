Line 238: SRVCC HO -> FALSE
Line 242: SRVCC HO -> TRUE
Line 247: [W]Invalid value of Status
Line 287: [W]_mmc_UpdateH2LHandoverData - CS2PS_HO_TO_LTE_FROM_UMTS - RSRVCC is not supported
Line 300: [W]_mmc_UpdateH2LHandoverData - CS2PS_HO_TO_LTE_FROM_GSM - RSRVCC is not supported
Line 312: [W]Invalid RAT info
Line 325: [!]MALLOC FAIL
Line 386: [W]_mmc_UpdateH2LHandoverData - CS2PS_HO_TO_LTE_FROM_UMTS - RSRVCC is not supported
Line 407: [W]_mmc_UpdateH2LHandoverData - CS2PS_HO_TO_LTE_FROM_GSM - RSRVCC is not supported
Line 540:    PLMN ID received from MM : %06x
Line 559:    Index[%d], Arfcn(%d), Bsic(%d), BandInd(%d)
Line 582:    Index[%d], Arfcn(%d), Scrambling code(%d)
Line 699: [!]MALLOC FAIL
Line 717:    umts Valid info: %d, uarfcn = %d, plmnid = %06x, IsFastSearchForCSFB = %d
Line 723:    NumCellInfoList: %d
Line 729:    gsm valid info: %d, arfcn = %d, num_of_arfcns: %d,  arfcn: %d, %d, %d 
Line 736:    gsm valid info: plmnid = %06x
Line 741:    NumCellInfoList: %d
Line 845: [W]L2H HO container data is NULL or container data is 0 ! mobilityType - %d
Line 905: %s : %s (%d) 
Line 1087: %s : Action:%d 
Line 1114: %s : 
Line 1127:    Mmc_GetFlag(MMC_HEDGE_INIT_CNF_STATUS)=FALSE
Line 1161: [I]Plmn State : %s (%s)
Line 1162: [I]RatModeChangeState -> %s
Line 1164:    Sending L2H Redirection Failure and perform RR relase actions
Line 1183: %s : 
Line 1194:    Mmc_GetFlag(MMC_HEDGE_INIT_CNF_STATUS)=FALSE
Line 1238: %s : 
Line 1244:    Mmc_GetFlag(MMC_HEDGE_INIT_CNF_STATUS)=FALSE
Line 1277: %s : 
Line 1314: %s : 
Line 1353: %s : 
Line 1392:    Sending REDIR_RSP (%d) 
Line 1396: [I]Plmn State : %s (%s)
Line 1397: [I]RatModeChangeState -> %s
Line 1403:    Redirection fail - returning to previous RAT 
Line 1424: %s : 
Line 1467: [W]Sending RESEL_RSP (%d)
Line 1471: [I]Plmn State : %s (%s)
Line 1472: [I]RatModeChangeState -> %s
Line 1668: [W]CS2PS_HO_TO_LTE_FROM_GSM or CS2PS_HO_TO_LTE_FROM_UMTS : RSRVCC is not supported
Line 1698:    Block H2L Reselection - Plmn_CheckIsIratAllowed is FALSE
Line 1728:    Block H2L Redirection - Plmn_CheckIsIratAllowed is FALSE
Line 1729:    or PLMN(%x) is found in NO RR Rel. Plmn Action (%d)
Line 1805: %s :  %s (%d), %s (%d) 
Line 1829:    IRAT Status Allowed : %s
Line 1888: [!]Both HoInd (Srvcc/Csfb = TRUE), Need to check
Line 1901:    CCO-TO-GSM: HoCause to AP(HANDOVER)
Line 1909: [W]Mobility-Type(%d): currenly not supported, HoCause to AP(HANDOFF_CAUSE_MAX)
Line 2036:    IRAT Allowed : %s
Line 2071:    IRAT Allowed : %s
Line 2142: %s : Status %d
Line 2176:    Do  PLMN Scan on Resel Failed Rat :%d
Line 2247: %s : Status %d
Line 2251:    Suspend LTE
Line 2321: %s : Status %d
Line 2340:    LTE to HEDGE SRVCC HO COMMAND successful .... Inform IMSCC about SRVCC HO status
Line 2414:    H2L IRAT Mobility Cmd FAILED -> Suspend LTE 
Line 2458: %s : 
Line 2477: [W]MMC_MOB_CMD_CS2PS_HO_FROM_UMTS or MMC_MOB_CMD_CS2PS_HO_FROM_GSM : RSRVCC is not supported
Line 2487:    Sending HO CNF to HEDGE : Result (%d)
Line 2516:    Sending REDIR_RSP to HEDGE : Result (%d)
Line 2552:    Sending RESEL_RSP to HEDGE : Result (%d), t_barred (%d)
Line 2579: [!]Invalid G2L-CCO result(%d) from LTE AS
Line 2583: [W]G2L-CCO Failure (%d) from LTE AS
Line 2592:    Sending H2L-CCO CNF to HEDGE : Result (%d)
Line 2772: %s :  %s (%d), %s (%d) 
Line 2788: Do PLMN Scan on Resel Failed Rat :%d
Line 2843:    HandoffCause=%d, Result = %d
Line 2948: %s :  Deferred IRAT Action = %d  
Line 3007: %s:: Entry 
Line 3022: %s:: Exit 
Line 3051: %s:: Exit 
