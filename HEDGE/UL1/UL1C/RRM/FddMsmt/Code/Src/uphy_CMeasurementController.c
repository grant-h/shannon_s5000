Line 188: uphy_CMeasurementController_processIndMsg(message->DestId.CompositeId.SubId=%d) 
Line 188: uphy_CMeasurementController_processIndMsg(message->DestId.CompositeId.SubId=%d) 
Line 198:   midServer == NULL pointer
Line 198:   midServer == NULL pointer
Line 220: uphy_CMeasurementController_processIndMsg:Clearing l1ps_measure_ongoing_for_ds flag as mid server is NULL
Line 220: uphy_CMeasurementController_processIndMsg:Clearing l1ps_measure_ongoing_for_ds flag as mid server is NULL
Line 237: uphy_CMeasurementController_processIndMsg:Clearing l1ps_measure_ongoing_for_ds flag as mid server is NULL
Line 237: uphy_CMeasurementController_processIndMsg:Clearing l1ps_measure_ongoing_for_ds flag as mid server is NULL
Line 285: Legal situation: Indication msg received but meanwhile mid server=%d suspended - receive message anyway
Line 285: Legal situation: Indication msg received but meanwhile mid server=%d suspended - receive message anyway
Line 320:   [DSDS] UMTS Meas. - Failed to send RF pause CNF.
Line 320:   [DSDS] UMTS Meas. - Failed to send RF pause CNF.
Line 337: mid=%d, isSuspended=%d, isInvalidResults=%d, detectCellChange=%d, isEventTrigger=%d
Line 337: mid=%d, isSuspended=%d, isInvalidResults=%d, detectCellChange=%d, isEventTrigger=%d
Line 428: Suspend All Measurements
Line 428: Suspend All Measurements
Line 436: Suspend Measurement mid server=%d 
Line 436: Suspend Measurement mid server=%d 
Line 441:   uphy_CMeasurementController_suspendAllMeasurements: NumOfObjects == 0
Line 441:   uphy_CMeasurementController_suspendAllMeasurements: NumOfObjects == 0
Line 465: Resume All Measurements
Line 465: Resume All Measurements
Line 474: Resume Measurement mid server=%d 
Line 474: Resume Measurement mid server=%d 
Line 580: notifyMidPending Controller %d
Line 580: notifyMidPending Controller %d
Line 627: notifyMidDone - no mid pending
Line 627: notifyMidDone - no mid pending
Line 640: notifyMidDone mid server=%d not done
Line 640: notifyMidDone mid server=%d not done
Line 655: notifyMidDone not DRX. measurementState=%d(0:NoCh/:Drx/2:Fach/3:Dch/4:Suspension)
Line 655: notifyMidDone not DRX. measurementState=%d(0:NoCh/:Drx/2:Fach/3:Dch/4:Suspension)
Line 674: [IRAT U2G] numOfOutstandingRequests=%d
Line 674: [IRAT U2G] numOfOutstandingRequests=%d
Line 697: [IRAT U2G] numOfOutstandingRequests in FACH=%d
Line 697: [IRAT U2G] numOfOutstandingRequests in FACH=%d
