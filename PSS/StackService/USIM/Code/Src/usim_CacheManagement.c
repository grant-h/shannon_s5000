Line 70: [USIM_%d] >> usim_ReadEfFromCache
Line 79: [USIM_%d] EF Found ,Index-> 0x%02X
Line 88: [USIM_%d] >> usim_ReadEfFromCache CacheState=%d
Line 108: [USIM_%d] offset or offset Length are invalid
Line 137: [USIM_%d] Mode is Not Absolute Can't be Read From Cache
Line 168: [USIM_%d] MEMALLOC FAILS !
Line 175: [USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
Line 186: [USIM_%d] EfSize is zero!! skip to mem alloc !!
Line 192: [USIM_%d] EF Data Not Assigned
Line 207: [USIM_%d] EF Not Found!!
Line 227: [USIM_%d] >> ReadRecordFromCache,Rec Num -> 0x%02X
Line 240: [USIM_%d] Record found , Index -> 0x%02X
Line 252: [USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
Line 263: [USIM_%d] File Found,Record doesnt exist in cache
Line 279: [USIM_%d] EF Not Found !!
Line 300: [USIM_%d] >> ReadParamFromCache,ElementId-> 0x%02X, Record Num-> 0x%02X
Line 321: [USIM_%d] EF found in Cache, Index-> 0x%02X
Line 339: [USIM_%d] File Found but Requested Record Number Does Not Exist in Cache
Line 343: [USIM_%d] Parameter Offset -> 0x%02X
Line 358: [USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
Line 368: [USIM_%d] File Found but ElementId Doesnt Exist
Line 374: [USIM_%d] File Found but Record Num Doesnt Exist
Line 389: [USIM_%d] EF Not Found!!
Line 413: [USIM_%d] >> UpdateAllCacheData
Line 424: [USIM_%d] Found EF_UST ,Index -> %d
Line 433: [USIM_%d] Unable To Write To Cache
Line 442: [USIM_%d] Found EF_SST,Index -> %d
Line 451: [USIM_%d] Unable To Write To Cache
Line 493: [USIM_%d] Unable To Write To Cache
Line 500: [USIM_%d] UST_EST_SRVC_NUMB Service NOT Available
Line 521: [USIM_%d] Unable To Write To Cache
Line 527: [USIM_%d] UST_ACL_SRVC_NUMB Service NOT Available
Line 553: [USIM_%d] Unable To Write To Cache
Line 560: [USIM_%d] UST_HPLMNwACT_SRVC_NUMB Service NOT Available
Line 585: [USIM_%d] Unable To Write To Cache
Line 592: [USIM_%d] UST_UPLMNwACT_SRVC_NUMB Service NOT Available
Line 619: [USIM_%d] Unable To Write To Cache
Line 626: [USIM_%d] UST_OPLMNwACT_SRVC_NUMB Service NOT Available
Line 652: [USIM_%d] Unable To Write To Cache
Line 659: [USIM_%d] UST_CBMID_SRVC_NUMB Service NOT Available
Line 687: [USIM_%d] Unable To Write To Cache
Line 694: [USIM_%d] UST_RPLMNACT_SRVC_NUMB Service NOT Available
Line 725: [USIM_%d] Unable To Write To Cache
Line 732: [USIM_%d] UST_GSM_ACC_SRVC_NUMB Service NOT Available
Line 740: [USIM_%d] UST/SST already in Cache
Line 757: [USIM_%d] Unable To Write To Cache
Line 764: [USIM_%d] Not a USIM Appln(FileId-> 0x%02X)
Line 782: [USIM_%d] Unable To Write To Cache
Line 789: [USIM_%d] UST_LOCAL_PB_SRVC_NUMB(FileId-> 0x%02X) Service NOT Available
Line 806: [USIM_%d] Unable To Write To Cache
Line 821: [USIM_%d] FileID (0x%02X),Not Available in this Application
Line 831: [USIM_%d] IMSI Length > 8 bytes, limiting it to 8 Bytes
Line 845: [USIM_%d] IMSI Replacement is enabled so MCC & MNC of all 0XFF changed to 001 01
Line 913: [USIM_%d] usim_IsCsimProvisioned -> %d
Line 936: [USIM_%d] >> ReadFromSimAndWriteToCache,CacheFileIndex -> %d
Line 943: [USIM_%d] Reading IMSIP instead of IMSI
Line 1000: [USIM_%d] Unable to Write Ef into cache
Line 1005: [USIM_%d] Unable to Read Ef from SIM 
Line 1038: [USIM_%d] >> UpdateEfInCache
Line 1044: [USIM_%d] Found EF in Cache,Index -> %d
Line 1061: [USIM_%d] Record Can't be updated with this Mode- %d
Line 1089: [USIM_%d] Updated len > Cached len
Line 1101: [USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
Line 1117: [USIM_%d] Ef not updated in Cache
Line 1132: [USIM_%d] Ef not found!!
Line 1150: [USIM_%d] >> UpdateRecordInCache,FileId-> 0x%02X, Rec Num-> 0x%02X
Line 1159: [USIM_%d] Record Found ,Index-> %d
Line 1174: [USIM_%d] NULL buffer addr. usim_Cache[Index].EfData
Line 1189: [USIM_%d] File Found but Requested Record Number Does Not Exist in Cache
Line 1204: [USIM_%d] Record Not Found In Cache
Line 1225: [USIM_%d] >> UpdateParamInCache. ElementId -> 0x%02X, RecordNumber -> 0x%02X
Line 1244: [USIM_%d] EF found , Index -> 0x%02X
Line 1260: [USIM_%d] File Found but ElementId Doesnt Exist
Line 1265: [USIM_%d] Parameter Offset-> 0x%02X
Line 1272: [USIM_%d] NULL buffer addr. usim_Cache[Index].EfData
Line 1291: [USIM_%d] File Found but ElementId Does Not Exist
Line 1306: [USIM_%d] ElementID Not Found In Cache
Line 1339: [USIM_%d] >> WriteModifiedCahceDataToDevice
Line 1400: [USIM_%d] Using SFID:0x%X 
Line 1444: [USIM_%d] File(0x%X) not updated to UICC,rest of modified files will be skipped due to txrx error
Line 1450: [USIM_%d] File NOT Modified:0x%X
Line 1464: [USIM_%d] Attempting to Write Again,Attempt Count-> %d
Line 1468: [USIM_%d] Exceeded Write Attempt Count, Abroting ,Attempt Count-> %d
Line 1475: [USIM_%d] All Data Written to the UICC
Line 1499: [USIM_%d] >> FindModifiedCacheFiles
Line 1527: [USIM_%d] >> GetParamOffsetInEf
Line 1535: [USIM_%d] ELEMENT_IMSI,
Line 1544: [USIM_%d] ELEMENT_CK(or ELEMENT_CKPS),
Line 1553: [USIM_%d] ELEMENT_IK(or ELEMENT_IKPS),
Line 1562: [USIM_%d] ELEMENT_KSI(or ELEMENT_KSIPS),
Line 1570: [USIM_%d] ELEMENT_HPLMNPERIOD,
Line 1579: [USIM_%d] ELEMENT_ACMMAX ,
Line 1587: [USIM_%d] ELEMENT_SPN, 
Line 1595: [USIM_%d] ELEMENT_CURRCODE, 
Line 1603: [USIM_%d] ELEMENT_PRICEPERUNIT, 
Line 1611: [USIM_%d] ELEMENT_ACC, 
Line 1619: [USIM_%d] ELEMENT_TMSI, 
Line 1627: [USIM_%d] ELEMENT_LAI, 
Line 1635: [USIM_%d] ELEMENT_LAU_STATUS, 
Line 1643: [USIM_%d] ELEMENT_PTMSI, 
Line 1651: [USIM_%d] ELEMENT_PTMSI_SIG, 
Line 1659: [USIM_%d] ELEMENT_RAI, 
Line 1667: [USIM_%d] ELEMENT_RAU_STATUS, 
Line 1675: [USIM_%d] ELEMENT_UE_OPERATION_MODE, 
Line 1683: [USIM_%d] ELEMENT_LEN_OF_MNC_IN_IMSI, 
Line 1691: [USIM_%d] ELEMENT_LEN_OF_MNC_IN_IMSI, 
Line 1699: [USIM_%d] ELEMENT_LAST_USED_TP_MR, 
Line 1707: [USIM_%d] ELEMENT_MEM_CAP_EXCEEDED_NOTF_FLAG, 
Line 1715: [USIM_%d] ELEMENT_eMLPP_PRIORITY_LEVELS, 
Line 1723: [USIM_%d] ELEMENT_eMLPP_FAST_CALL_SETUP_CONDS, 
Line 1731: [USIM_%d] ELEMENT_AUTOMATIC_ANSWER_PRIORITY_LEVELS, 
Line 1739: [USIM_%d] ELEMENT_HIDDEN_KEY, 
Line 1747: [USIM_%d] ELEMENT_START_CS, 
Line 1755: [USIM_%d] ELEMENT_START_PS, 
Line 1763: [USIM_%d] ELEMENT_MAX_START_CS_OR_PS, 
Line 1771: [USIM_%d] ELEMENT_RPLMN_ACT, 
Line 1779: [USIM_%d] ELEMENT_ICCID, 
Line 1788: [USIM_%d] ELEMENT_Kc (or ELEMENT_KcGPRS), 
Line 1797: [USIM_%d] ELEMENT_CIPHER_KEY_SEQ_NUMB(or ELEMENT_CIPHER_KEY_SEQ_NUMB_GPRS), 
Line 1805: [USIM_%d] ELEMENT_BCCH_INFO, 
Line 1813: [USIM_%d] ELEMENT_VBSS_ACT_DEACT_FLAGS, 
Line 1821: [USIM_%d] ELEMENT_PTMSI_ON_SIM, 
Line 1829: [USIM_%d] ELEMENT_PTMSI_SIG_ON_SIM, 
Line 1837: [USIM_%d] ELEMENT_RAI_ON_SIM, 
Line 1845: [USIM_%d] ELEMENT_RAU_STATUS_ON_SIM, 
Line 1853: [USIM_%d] ELEMENT_CSIM_SMS_STATUS, 
Line 1861: [USIM_%d] ELEMENT_CSIM_MEM_CAP_EXCEEDED_FLAG, 
Line 1867: [USIM_%d] Invalid Element (0x%02X)
Line 1873: [USIM_%d] Offset-> %d,Len-> %d
Line 1942: [USIM_%d] >> CheckServiceAvailabilityInCacheEfUst SN-%d, result=%d
Line 1962: [USIM_%d] >> CheckServiceAvailabilityInCacheEfSst
Line 2068: [USIM_%d] Invalid Bit Position
Line 2135: [USIM_%d] File ID-> 0x%x
Line 2148: [USIM_%d] File exists in -> %d
Line 2161: [USIM_%d] File structure -> %d
Line 2174: [USIM_%d] File needs updating/not -> %d
Line 2260: [USIM_%d] usim_SetUpdateSimOnPowerDownStatus: %d
Line 2268: [USIM_%d] Invalid status!!!
Line 2293: [USIM_%d] Cache Available-> 
Line 2309: [USIM_%d]  Displaying Cache Ef Data 
Line 2317: [USIM_%d] EF_TYPE_TRANSPARENT
Line 2323: [USIM_%d] Cyclic or Linear
Line 2333: [USIM_%d] Needs Updating -> 
Line 2334: [USIM_%d] Num Of Records -> %d,DataLength -> %d,EfSize -> %d
Line 2339: [USIM_%d] EF Not Found 
Line 2392: [USIM_%d] File Exists In -> 
Line 2396: [USIM_%d] EF Not Found 
Line 2483: [USIM_%d] Cache And Save Status -> 
Line 2506: [USIM_%d] NORMAL Initialisation of <Cache>
Line 2528: [USIM_%d] RAT change Initialisation of <Cache>
Line 2548: [USIM_%d] Refresh Initialisation of <Cache>
Line 2569: [USIM_%d] Unknown Init Type (%x) 
Line 2842: [USIM_%d] Cache Memory Deleted
Line 2864: [USIM_%d] Cache Memory Deleted
Line 2868: [USIM_%d] Cache index is INVALID!!!
Line 2931: [USIM_%d] >> usim_DoUSimCache
Line 2945: [USIM_%d] Unable To Write To Cache
Line 2972: [USIM_%d] ISim Cache Memory Deleted
