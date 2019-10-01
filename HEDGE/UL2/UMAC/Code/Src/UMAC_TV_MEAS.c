Line 193: Init begin
Line 217: Init end
Line 229: Re-mapping init begin init will be called
Line 241: Re-mapping init end
Line 250: Shut down
Line 261: Reset
Line 275: TxInterruptT4a %d, TxInterrupt4a %d, TxInterruptT4b %d, TxInterrupt4b %d
Line 279: RACH can be interrupted
Line 285: RACH cannot be interrupted
Line 307: Retrieve MeasId %i details from DB (TransactId %i)
Line 314: Removing meas
Line 324: Adding new or modifying existing meas
Line 357: All TrChs in meas object
Line 363: Looking for DCHs mapped
Line 378: Looking for USCHs mapped
Line 390: Looking if RACH mapped
Line 403: Selected TrChs in meas object
Line 446: Includes event trigger and applies to specific TrCh
Line 470: Includes event trigger and applies to all TrCh
Line 478: No transport channels listed!
Line 484: Doesn't include event trigger and thus applies to all TrCh
Line 510: Adding meas for DCH (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) %d
Line 528: Reset Meas list
Line 575: WARNING: TrChMeasInfoTail->Next is NULL
Line 595: WARNING: TrChMeasInfoTail or TrChMeasInfoHead is NULL
Line 673: Copying MeasParams, Mode %i, ReportingInt %i
Line 729: UpperThreshold set %i
Line 737: LowerThreshold set %i
Line 744: TimeToTrigger4a set %i
Line 757: PendingTime4a set %i, PendingTimeT4a set %i
Line 767: TxInterrupt4a set %i
Line 774: TimeToTrigger4b set %i
Line 787: PendingTime4b set %i, PendingTimeT4b set %i
Line 797: TxInterrupt4b set %i
Line 817: Setting up for E-DCH TVM (NO 0 YES 1: %i) MeasId %i
Line 837: WARNING: Receive RemoveRB(RbId %d) and MeasurementConfig at the same time
Line 860: RB %i LC %i mapped to TrCh (non-TM): Finally storing in RbMeas structure E-DCH TVM: (NO 0 YES 1: %i)
Line 876: MeasId %i, Rb %i, LC %i
Line 877: RlcBuffPlMeas %i, AveOfRlcBuffPlMeas %i, AveTimeInt %i, VarOfRlcBuffPlMeas %i
Line 900: RB %i LC %i mapped to TrCh (non-TM) but no action
Line 917: Reset RbMeas list
Line 963: WARNING: RbMeasDataTail->Next is NULL
Line 981: WARNING: RbMeasDataTail is NULL
Line 1086: Do (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) measurements
Line 1099:  TDD EDCH TVM: Consider Traces for EDCH meas same as RACH meas
Line 1100: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) meas
Line 1104: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Inc PendingTimeT4a %i
Line 1107: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Inc PendingTimeT4b %i
Line 1115: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Inc TxInterruptT4a %i %i
Line 1121: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Inc TxInterruptT4b %i %i
Line 1154: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) TotalBO %i
Line 1209: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Timer check for periodical tests: ReportingIntCtr: %d ReportingInt / (gMinTtiIndex * 10): %d
Line 1217: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Do periodical test
Line 1226: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Suppressing periodical test
Line 1238: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Do trigger test
Line 1273: (Periodical 0 or Triggered 1:%d)Test MeasInd, MeasId %i (-1!), UlTrChType %i, UlTrChId %i
Line 1351: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Periodical test
Line 1392: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) MeasId %i, RbId %i, BuffPlPres %i, BuffPl %i, AveBuffPlPres %i, AveBuffPl %i,
Line 1394: ...  VarBuffPlPres %i, VarBuffPl %i
Line 1404: Sending periodical report to U-RRC
Line 1448: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Trigger test
Line 1522:  Forced for DSDS , InTresh %i TimeToTrigger %i
Line 1526: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) %x Test, Bo %i, Thresh %i, Trigger %i, PendingTime %i, TimeToTrigger %i
Line 1528: ..., ThresValid %i, PendingTimeT %i TimeToTriggerT %i
Line 1571: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Trigger %x BuffPl Report %i, RB %i
Line 1580: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Trigger %x AveOfBuffPl Report %i, RB %i
Line 1589: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Trigger %x VarOfBuffPl Report %i, RB %i
Line 1604: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Report %x!
Line 1609: Sending 4a report to U-RRC
Line 1614: Sending 4b report to U-RRC
Line 1648: umac_tv_meas_SendOutReport: Null pointer, PrimHandle
Line 1775: (%i) RB %i, LC ?, U-RLC BO = %i
Line 1818: (%i) RB %i, LC ?, U-RLC BO = %i
Line 1837: RB %i, LC %i, Calc AveOfRlcBuffPl %i
Line 1870: RB %i, LC %i, Calc VarOfRlcBuffPl %i
