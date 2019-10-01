Line 141: Initialisation of <RoutingAreaUpdate>, InitType=%d
Line 238: If T3323  is expired and UE comes back to NMO1, RAU type should be set as combined LA/RA updating with IMSI attach(0x02)
Line 243: If T3323  is expired and UE comes back to NMO1, RAU type should be set as normal RAU updating (0x00)
Line 254: After recovery from OOS, RAU type should be set as combined LA/RA updating with IMSI attach(0x02), previousCell no service flag = %d 
Line 266: If ISR is activated  in NMO1, RAU type should be set as combined LA/RA updating with IMSI attach(0x02)
Line 274: Required 'update type' -> Periodic updating
Line 297: Network operation mode change from %s to MM_NETWORK_MODE_1... 
Line 299: Required 'update type' -> combined RA/LA updating with IMSI attach
Line 307: Required 'update type' -> combined RA/LA updating
Line 322: MM in MM_LOC_UPD_INITIATED due to previous combined RAU procedure...
Line 337: Required 'update type' -> %s
Line 346: Required 'update type' -> RA updating (CS connection already exists)
Line 371:  Required 'update type' -> RA updating (%s) 
Line 389: Required 'update type' -> RA updating (MM_MOBILE_CLASS_C_PS)
Line 404: If T3423 starts after T3412expiry, RAU type should be set as combined LA/RA updating with IMSI attach(0x02)
Line 409: If T3423 starts after T3412expiry, RAU type should be set as normal RAU updating (0x00)
Line 458: Periodic RAU procedure to update both LA and RA (i.e. CS and PS domain)
Line 465: Periodic RAU procedure to update RA only (i.e. PS domain)
Line 520: Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
Line 525: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 535: GMM is in Suspended state, So RAU should not be triggered. Setting RAU Needed flag
Line 557: RAU Req cannot be performed during T3346 running..
Line 568: RAU Req will be delayed during Manual PLMN searching..(for FT TEST)
Line 583: RAU is already pended, dont send DRX again and Wait for MPLMN completion
Line 592: RAU REQ is not triggered since MM has sent a RESEL_HOLD to GRR
Line 614:  Inside mm_PerformRoutingAreaUpdate() function, PrevCSAD = %d, CurrentCSAD = %d
Line 630: RAU update type -> %s cannot be performed since MM_ALLOW_PS_REGISTRATION is set to FALSE
Line 633: RAU Type Before Domain Restrictions analysis %d
Line 648: DSAC for CS and PS are not barred
Line 651: Previous update is not combined
Line 656: Previous update is combined
Line 660: RAU Type After Domain Restrictions analysis %d
Line 750: RAU procedure with combined type last_update_is_not_combined is FALSE
Line 757: RAU procedure with combined type last_update_is_not_combined is TRUE
Line 766: RAU procedure with Update Type of %s not initiated due to %s 
Line 883: %s shall be used for RAU procedure
Line 996: RAU_REQUEST message contents:
Line 1002: Update type -> %s
Line 1028: (PREVENTION) When setting CSMT flag, we will set FOR in RAU (1411591)
Line 1046: GPRS Key Set Identifier (KSI) -> %d
Line 1057: Invalidating GMM CKSN for CRC Failure in GSM Only Mode
Line 1063: GPRS Cipher algo(%d), GmmCksm(%d) .... ALGO NOT PRESENT
Line 1069: GPRS ciphering key sequence number -> %d
Line 1083: Old routing area identification @ Eutran ->
Line 1091: Old routing area identification @ SIM ->
Line 1101: MS Radio Access Capability ->
Line 1116: Old P-TMSI signature....
Line 1128: Old P-TMSI signature....
Line 1147: Requested READY timer value (GPRS Format) -> %02X
Line 1166: DRX parameter ->
Line 1189: TMSI status -> MS performing a combined RAU and no valid TMSI is available
Line 1214: P-TMSI @ EUtran ->
Line 1228: P-TMSI @ SIM->
Line 1241: MS Network Capability ->
Line 1306: Supported Codec Length is 0
Line 1327: UE Network Capability ->
Line 1344: ADD P-TMSI->
Line 1357: ADD RAU->
Line 1381: voice domain Pref->
Line 1400: PtmsiType = %d
Line 1405: HcommonNasRelVersion = %d
Line 1426: Extended T3312 is supported
Line 1437: Encode Old LAI IE
Line 1481: 
Line 1531: 
Line 1578: 
Line 1579: Cipher State -> %s
Line 1580: PduId -> %04X
Line 1644: RAU_ACCEPT discarded due to semantically incorrect contents:
Line 1647: < 'RA updating' or 'Periodic updating' (for RA updating only) requested >
Line 1650: < but update result of 'RA updated' and GMM cause IE is present >
Line 1653: Processing RAU_ACCEPT to get PS service eventhough it's NW issue
Line 1666: RAU_ACCEPT discarded due to semantically incorrect contents:
Line 1669: < 'combined RA/LA updating' or 'combined RA/LA updating with IMSI attach' requested >
Line 1672: < but update result of 'RA updated' and GMM cause IE not present >
Line 1678: Update result is mismatched but bypass it to cover TE script error
Line 1694: RAU_ACCEPT discarded due to semantically incorrect contents:
Line 1697: < 'combined RA/LA updating' or 'combined RA/LA updating with IMSI attach' requested >
Line 1700: < but update result of 'RA updated' and abnormal GMM cause IE is present >
Line 1737: RAU_ACCEPT discarded due to integrity conditions failure: 4.1.1.1.1 @ 24.008
Line 1768: Force to standby -> Force to standby indicated
Line 1775: Force to standby -> Force to standby not indicated
Line 1801: Periodic RA update timer -> %02X
Line 1814: Periodic RA update timer will be last received value-> %02X
Line 1837: Routing area identification ->
Line 1849: ERROR: RAU_ACCEPT RAI IE does not match RAI of current cell ->
Line 1870: P-TMSI signature ->
Line 1876: P-TMSI signature -> NOT included
Line 1893: Allocated P-TMSI ->
Line 1900: Allocated P-TMSI -> NOT included
Line 1917: MS identity ->
Line 1927: MS identity -> NOT included
Line 1944: Network has Sent NPD-U List. Attempting to Get SNDCP's Version of this List....
Line 1973: List of Receive N-PDU Numbers -> NOT included
Line 2003: Negotiated READY timer value -> %02X
Line 2010: Negotiated READY timer value -> NOT included
Line 2032: GMM cause -> %s
Line 2039: GMM cause -> NOT included
Line 2056: mm_RauAccCheckAndSetMSInfoIe Value(utran-%d)(Eutran-%d)
Line 2096: T3302 value -> %02X
Line 2120: T3302 value -> NOT included; Setting default value 
Line 2147: T3323 value -> %02X
Line 2153: T3323 value -> NOT included
Line 2178: Cell Notification IE (GSM only) included by SGSN to indicate the ability to support Cell Notification
Line 2185: Cell Notification IE (GSM only) NOT included by SGSN
Line 2208: Assigned GMM_T3319...
Line 2231: Equivalent PLMNs ->
Line 2238: Equivalent PLMNs -> NOT included
Line 2260: PDP context status ->
Line 2267: PDP context status -> NOT included
Line 2297: Network Sent Emergency List !!!
Line 2306: Emergency list length is 0 or more than 16, %d
Line 2312: Emergency List ptr is NULL!!!
Line 2320: isMccChanged : %d, isEmerNumberBlank : %d, mm_GetLastSentMcc : 0x%x
Line 2468: Update result -> %s
Line 2487: NewMCC : 0x%x, OldMCC : 0x%x
Line 2583: NetworkFeatureSupport IE value received is: %d 
Line 2588: NetworkFeatureSupport IE not  received
Line 2600: T3312 Extended value received is: %d seconds
Line 2671: Set TbfRelAction to MM_COORD_TBF_REL_ACTION
Line 2676: Perform TBF release action in case of RAU complete is not sent
Line 2750: SendRauCompleteMsg = %s   |||   SendNPduNumbersIe = %s
Line 2784: NwExtUtbf= %d
Line 2820: NwExtUtbf= %d
Line 2945: Re-initiation of the Aborted GRPS Detach Procedure....
Line 2970: mm_ExtractMCC =%d
Line 3014: FOP is On so we Can Send SM Data Directly
Line 3072: SM informed of regained radio coverage....
Line 3088: CS call had been attempted, retry now...
Line 3154: skip to send Reg_ind_status at this point, and handle it after LU proc
Line 3188: mm_SendRauCompleteMsg:EutranInterRAtInfo(%d) UTRANInterRatInfo(%d)
Line 3207: List of Receive N-PDU Numbers ->
Line 3208: Length -> %02X
Line 3209: Value  ->
Line 3217: EutranInterRAtInfo set in RAU complete Msg...
Line 3235: UtranIratInfo set in RAU complete Msg...
Line 3270: LLGMM_UNITDATA_REQ Cipher = %s
Line 3273: PduId -> %04X
Line 3295: PduId -> %04X
Line 3327: Processing RAU Accept Cause
Line 3329: Cause = %s
Line 3431: RAU_REJECT discarded due to semantically incorrect contents:
Line 3434: < 'RA updating' or 'Periodic updating' requested >
Line 3437: < but network responded with RAU_REJECT containing an abnormal GMM cause value >
Line 3448: RAU_REJECT discarded due to semantically incorrect contents:
Line 3451: < 'combined RA/LA updating' or 'combined RA/LA updating with IMSI attach' requested >
Line 3454: < but network responded with RAU_REJECT containing an abnormal GMM cause value >
Line 3491: Power off detach is pending Hence discarding RAU retrails
Line 3503: Cause #25 received with out integrity protection, descard reject message
Line 3539: GMM cause -> %s
Line 3549: Force to standby -> Force to standby indicated
Line 3554: Force to standby -> Force to standby not indicated
Line 3639: Regi status ind will be sent later
Line 3647: mm_GetLocUpdRejCause =%d
Line 3762: Perform TbfRelAction, MM_COORD_TBF_REL_ACTION
Line 4112: Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG, CSG NOT SUPPORTED
Line 4151: RegistrationNeeded =%d
Line 4293: Serving cell RAI : Stored RAI
Line 4297: GPRS update status -> %s
Line 4359: Rau Request Type is Combined but Rau Upd Result is RA Update only. -> Keep GmmUpdateStatus and GPRS_ATTACH_FLG.
Line 4536: Set mm_RauRejCause: %d
Line 4549: mm_ResetRauRejCause: %d
Line 4627: Invalid RauType (0x%x) in mm_SetRauType().
Line 4698: RAU attempt count -> %d
Line 4710: RAU update type -> %s
Line 4740: pkthndIsUlTrf= %d
Line 4741: Prev: Uldata	NSAPI 5= %d, NSAPI 6=%d
Line 4742: Current: Uldata  NSAPI 5= %d, NSAPI 6=%d
Line 4772: FOR -> Follow-on request pending
Line 4776: We will not set FOR!!!
Line 4871: Wrong Action =%d 
