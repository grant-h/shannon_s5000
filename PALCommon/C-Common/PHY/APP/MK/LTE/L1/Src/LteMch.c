Line 167: [MBSFN] IPC: MBSFNSfAssign(cc(%d), scellAIdx(%d)): pattern0~7(0x%08x/0x%08x/0x%08x/0x%08x)
Line 174: pattern8~15(0x%08x/0x%08x/0x%08x/0x%08x)
Line 233: [MBSFN] IPC: mbmsMCCHSched(cmd:%d)
Line 247: [MBSFNN] Cc/Df(0x%08x), earfcn(%d), aIndex/aId(0x%08x), nMbsfnRL/NotiInd(0x%08x), rPeriod/offset(0x%08x), modPeriod/sfAlloc(0x%08x), MCS/aSet(0x%08x)
Line 261: [MBSFN](F) _cfg_status is zero!!!
Line 352: [MBSFN] IPC: mbmsNotifySched: cmd(%d), Cc/scellAI(0x%08x), notiRepCoeff/notiOffset(0x%08x), notiSFindex(0x%08x)
Line 360: [MBSFN](F) _cfg_status is zero!!!
Line 373: [MBSFN] ScellInfoIdx(%d)
Line 400: [MBSFN] >NotiCfg: Coef(%d), off(%d), SFIndex(%d)
Line 417: [MBSFN] >NofiPeriod: mchIndex(%d), mchModP(%d), shortModP(%d)
Line 430: [MBSFN] >NotiBegin: Coef(%d), off(%d), SFIndex(%d), shortMP(%d), effMP(%d)
Line 443: [MBSFN] >NotiStop
Line 449: [MBSFN](F) Invalid command(%d)!!!
Line 484: [MBSFN] IPC: mbmsAreaSched : Cc/aIndex(0x%08x), comSFallocP/tAllocLen(0x%08x), sf_pattern0~7(0x%08x/0x%08x/0x%08x/0x%08x)
Line 492: [MBSFN] sf_pattern8~15(0x%08x/0x%08x/0x%08x/0x%08x)
Line 500: [MBSFN](F) _cfg_status is zero!!!
Line 522: [MBSFN](F) Invalid Index: ScellInfoIdx(%d), McchInfoIdx(%d)
Line 531: [MBSFN](F) Invalid MCCH: ScellInfoIdx(%d), McchInfoIdx(%d)
Line 542: [MBSFN] >AreaSched[scellInfoIdx(%d), mcchInfoIdx(%d)]: areaIdx(%d), period(%d), totLen(%d), state(%d), pt0(0x%x)
Line 583: [MBSFN] IPC: mbmsPMCHSched(cmd:%d) : Cc/aIndex(0x%08x), pIndex(0x%x), sfOffset/sfAllocEnd(0x%08x), MCS/SchedP(0x%08x)
Line 592: [MBSFN](F) _cfg_status is zero!!!
Line 664: [MBSFN] IPC: mbmsMSIsched : CC/aIndex(0x%08x), pIndex/numMTCH(0x%08x), sfAllocStart/End(0~3)(0x%08x/0x%08x/0x%08x/0x%08x)
Line 671: [MBSFN] sfAllocStart/End(4~9)(0x%08x/0x%08x/0x%08x/0x%08x/0x%08x/0x%08x)
Line 678: [MBSFN] sfAllocStart/End(10~15)(0x%08x/0x%08x/0x%08x/0x%08x/0x%08x/0x%08x)
Line 688: [MBSFN](F) _cfg_status is zero!!!
Line 711: [MBSFN](F) Invalid NumberOfMtch(%d)
Line 737: [MBSFN] mbmsMSISched info: ScellInfoIdx(%d), AreaIdx(%d), PMCH(%d), NumMTCH(%d), State(%d)
Line 757: [MBSFN] MTCH info updated: PmchInfoIndex(%d), MtchInfoIndex(%d), Start(%d), End(%d)
Line 764: [MBSFN] Empty MTCH not found !!!
Line 774: [MBSFN](F) Matched PMCH not found !!!
Line 811: [MBSFN] MBSFN is released: ScellInfoIdx(%d)
Line 819: [MBSFN] MBSFN Configured: ScellInfoIdx(%d), ScellIdx(%d), CcIdx(%d)
Line 850: [MBSFN](W) MCCHAdd Fail: ScellInfoIdx(%d), McchInfoIdx(%d), state(%d)
Line 870: [MBSFN] >MCCHAddReq: ScellInfoIdx/McchInfoIdx(%d), AreaID(%d), repP(%d), offset(%d), modP(%d), sfAlloc(0x%x), smcs(%d)
Line 897: [MBSFN] >MCCHRemove: ScellInfoIdx(%d), AreaIdx(%d), McchValidity(%d)
Line 922: [MBSFN](W) MCCHUpdate Fail: ScellInfoIdx(%d), McchInfoIdx(%d), state(%d)
Line 929: [MBSFN] >MCCHUpdate: ScellInfoIdx(%d), McchInfoIdx(%d), state(%d)
Line 960: [MBSFN](F) MCCH StateChange Fail: ScellInfoIdx(%d), McchInfoIdx(%d), state(%d)
Line 967: [MBSFN] MCCHStateChange: ScellInfoIdx(%d), McchInfoIdx(%d), state(%d)
Line 1015: [MBSFN] MCCH Recover: ScellInfoIdx(%d), ScellIdx(%d), ccIdx(%d)
Line 1058: [MBSFN] MCCH Recover(McchInfo): ScellInfoIdx(%d), AreaID(%d), repP(%d), offset(%d), modP(%d), sfAlloc(0x%x), smcs(%d)
Line 1092: [MBSFN] MCCH Recover(NotiInfo): Coef(%d), off(%d), SFIndex(%d), shortMP(%d), effMP(%d)
Line 1123: [MBSFN] MCCH Recover(AreaSched): AreaIdx(%d), period(%d), totLen(%d), state(%d), pt0(0x%x)
Line 1130: [MBSFN] pt1(0x%x), pt2(0x%x), pt3(0x%x), pt4(0x%x), pt5(0x%x), pt6(0x%x), pt7(0x%x)
Line 1147: [MBSFN] MCCH Recover(PmchInfo): AreaIndex(%d), PMCHIndex(%d)
Line 1173: [MBSFN] MCCH Recover(PmchInfo): PmchInfoIdx(%d), numPmch(%d), offset(%d), end(%d), dmcs(%d), MSP(%d)
Line 1213: [MBSFN] MCCH Recover(MSISched): AreaIdx(%d), PmchIdx(%d), NumMTCH(%d), State(%d)
Line 1233: [MBSFN] MCCH Recover(MtchInfo): PmchInfoIdx(%d), MtchInfoIdx(%d), Start(%d), End(%d)
Line 1244: [MBSFN] ValidMtchCnt reaches MAX !!!
Line 1251: [MBSFN] Empty MTCH not found !!!
Line 1261: [MBSFN](F) Matched PMCH not found !!!
Line 1265: [MBSFN] PMCH state updated:  PmchInfoIdx(%d) !!
Line 1291: [MBSFN] MCCHRemoveSet: ScellInfoIndex(%d), ScellIndex(%d), bitmap(0x%x)
Line 1322: [MBSFN] MCCHStopSet: ScellIndex(%d), bitmap(0x%x)
Line 1356: [MBSFN] PMCHAdd: From HAL (AreaIdx(%d), PmchIdx(%d))
Line 1361: [MBSFN](F) Invaild AreaIndex(%d)
Line 1367: [MBSFN](F) Invalid PmchIndex(%d)
Line 1376: [MBSFN](F) Invalid Area State
Line 1399: [MBSFN] PMCHAdd: ScellInfoIdx(%d), PmchInfoIdx(%d), numPmch(%d), offset(%d), end(%d), dmcs(%d), MSP(%d)
Line 1413: [MBSFN](F) Matched PMCH not found !!!
Line 1436: [MBSFN] PMCHRemove: From HAL (AreaIdx(%d), PmchIdx(%d))
Line 1442: [MBSFN](F) Invalid AreaIdx(%d)
Line 1447: [MBSFN](F) Invalid PmchIndex(%d)
Line 1474: [MBSFN] PMCHRemove: ScellInfoIdx(%d), PmchInfoIdx(%d), numPmch(%d), list(0x%x, 0x%x)
Line 1487: [MBSFN](F) Matched PMCH not found !!!
Line 1509: [MBSFN] PMCHUpdate: From HAL (AreaIdx(%d), PmchIdx(%d))
Line 1515: [MBSFN](F) Invalid AreaIdx(%d)
Line 1520: [MBSFN](F) Invalid PmchIndex(%d)
Line 1538: [MBSFN](F) Invalid PmchState(%d)
Line 1546: [MBSFN] PMCHUpdate: ScellInfoIdx(%d), PmchIdx(%d), numPmch(%d), offset(%d), end(%d), mcs(%d), period(%d)
Line 1562: [MBSFN](F) Matched PMCH not found !!!
Line 1883: [MBSFN](F) Invalid Index: AreaIndex(0%xX), pmchIndex(0%xX)
Line 1892: [MBSFN] PmchMsiVal: cc/mInfoIdx(0x%x), aIdx/aInfoIdx(0x%x), pIdx/pInfoIdx(0x%x), start/end(0x%x), offset(%d)
Line 1899: [MBSFN] MSI Begin
Line 1900: [MBSFN] MSI End
Line 2029: [MBSFN] gap more than MSP: diff(%d)
Line 2042: [MBSFN](I) MBSFN_UpdatePeriods(Gap): fn0(%d), fn(%d), gap(%d, %d), slip(%d), msp_exist(%d)
Line 2065: [MBSFN](I) update MSP: AreaIdx(%d), pmchIndex(%d), MSI ModP Indicator(%d)
Line 2075: [MBSFN](F) Invalid ScellInfoIndex(%d)
Line 2155: [MBSFN](F) PMCH List broken
Line 2171: [MBSFN](I) build_csp_info, Area is over: cnt_trace(%d), total_len(%d), ScellIndex(%d)
Line 2178: [MBSFN](I) build_csp_info: fn(%d), sfn(%d), period(%d), total_len(%d), pmch_offset(%d), ScellIndex(%d)
Line 2238: [MBSFN](F) GetDecInfo: Invalid Index (ScellIdx(%d), ScellInfoIdx(%d))
Line 2270: [MBSFN] GetDecoInfo: cc(%d), asfn(%d), bit(0x%x), duplex(%d)
Line 2287: [MBSFN] Look MCCH notification
Line 2318: [MBSFN](I) MCCH MODP Toggle:%d
Line 2329: [MBSFN] MCCH SUSP, Skip : McchInfoIndex(%d)
Line 2341: [MBSFN] Wakeup from SUSP
Line 2365: [MBSFN] McchInfo(%d): cc(%d), aIndex/aId(0x%08x), mcfi/modiPeriod(0x%08x), repPeriod/offset(0x%08x), sfAlloc/mcs(0x%08x)
Line 2393: [MBSFN] No Areas mapped: MBSFN Decoding State(%d)
Line 2401: [MBSFN] MIB decoding not completed yet)
Line 2407: [MBSFN] commonSF_AllocPeriod is zero
Line 2421: [MBSFN] AreaInfo(%d): cc(%d), aIndex/aId(0x%08x), state/nPmch(0x%08x), allocP/totL(0x%08x), pattern(0x%08x), cntTrace/curOffser(0x%08x)
Line 2455: [MBSFN] PmchInfo: PmchIdx(%d), modP_Ind/msiInd/state(%03d), offset(%d), end(%d), mcs(%d), msp(%d), cnt_trace(%d)
Line 2508: [MBSFN] MSI Info: type(%c), mbsfnId(%d), cfi(%d), mcs(%d)
Line 2596: [MBSFN](F) Invalid Index: PmchIdx(%d)
Line 2604: [MBSFN] MSI Index Info: areaIdx(%d), pmchIdx(%d), AreaInfoIdx(%d), PmchInfoIdx(%d)
Line 2609: [MBSFN](F) Invalid Index: AreaIdx(0x%X), PmchIdx(0x%X)
Line 2615: [MBSFN] Number of MTCH: %d
Line 2626: [MBSFN] Remove MTCH: MtchInfoIdx(%d)
Line 2685: [MBSFN](F) Matched PMCH not found
Line 2901: [MBSFN] MBSFN_ResetMBSFN
Line 2936: [MBSFN] Change Notification: cch_noti(0x%x)
Line 2944: [MBSFN](F) Invalid ScellInfoIdx(%d)
Line 2976: [MBSFN](F) Invalid ScellInfoIdx(%d)
Line 3074: [MBSFN](F) Invalid ScellInfoIdx(%d)
Line 3120: [MBSFN](F) Mismatch SubframeIndex: Rec(%d), DB(%d)
Line 3131: [MBSFN](F) Invalid ScellnfoIdx(%d)
Line 3165: [MBSFN](F) Invalid ScellInfoIdx(%d)
Line 3194: [MBSFN](F) Invalid ScellInfoIdx(%d)
Line 3230: [MBSFN](F) Invalid ScellInfoIdx(%d)
Line 3273: [MBSFN](F) Invalid ScellInfoIdx(%d)
Line 3315: (F)meas_type = %d is INVALID!!
Line 3354: (F)meas_type = %d is INVALID!!
Line 3425: [MBSFN](F) Invalid ScellInfoIdx(%d)
Line 3446: [MBSFN](F) Invalid Status(%d)
Line 3467: [MBSFN] cspRebuildStatus(%d)
Line 3633: [MBSFN](F) Invalid Index: ScellIdx(%d), CcIdx(%d)
Line 3644: [MBSFN](F) Invalid Index for Pcell: ScellIdx(%d), CcIdx(%d)
Line 3688: [MBSFN] No Empty sCellInfoIdx: ScellIdx(%d), CcIdx(%d)
Line 3695: [MBSFN] ScellInfo: ScellInfoIdx(%d), ScellIdx(%d), CcIdx(%d)
Line 3810: [MBSFN](F) Invalid Index : ScellInfoIdx(%d), ScellIdx(%d), CcIdx(%d)
Line 3821: [MBSFN] Recover ScellInfo: ScellInfoIdx(%d), ScellIdx(%d), CcIdx(%d)
