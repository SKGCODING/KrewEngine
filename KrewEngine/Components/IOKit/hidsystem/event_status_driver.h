//
//  event_status_driver.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef event_status_driver_h
#define event_status_driver_h

#ifndef _DRIVERS_EVENT_STATUS_DRIVER_
#define _DRIVERS_EVENT_STATUS_DRIVER_

__BEGIN_DECLS

#include <mach/port.h>
#include <IOKit/hidsystem/IOLLEvent.h>
#include <IOKit/hidsystem/IOHIDTypes.h>
#include <AvailabilityMacros.h>
#include <IOKit/IOKitLib.h>

/*
 * Event System Handle:
 *
 * Information used by the system between calls to NXOpenEventSystem and
 * NXCloseEventSystem.  The application should not
 * access any of the elements of this structure.
 */
typedef mach_port_t NXEventHandle;

/* Open and Close */
NXEventHandle NXOpenEventStatus(void) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_0, __MAC_10_12, __IPHONE_NA, __IPHONE_NA);
void NXCloseEventStatus(NXEventHandle handle) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_0, __MAC_10_12, __IPHONE_NA, __IPHONE_NA);

/* Status */
extern NXEventSystemInfoType NXEventSystemInfo(NXEventHandle handle,
                                               char *flavor,
                                               int *evs_info,
                                               unsigned int *evs_info_cnt) __deprecated;
/* Keyboard */
extern void NXSetKeyRepeatInterval(NXEventHandle handle, double seconds) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_0, __MAC_10_12, __IPHONE_NA, __IPHONE_NA);
extern double NXKeyRepeatInterval(NXEventHandle handle) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_0, __MAC_10_12, __IPHONE_NA, __IPHONE_NA);
extern void NXSetKeyRepeatThreshold(NXEventHandle handle, double threshold) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_0, __MAC_10_12, __IPHONE_NA, __IPHONE_NA);
extern double NXKeyRepeatThreshold(NXEventHandle handle) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_0, __MAC_10_12, __IPHONE_NA, __IPHONE_NA);
extern void NXResetKeyboard(NXEventHandle handle) __deprecated;

/* Mouse */
extern void NXSetClickTime(NXEventHandle handle, double seconds)__OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_0, __MAC_10_12, __IPHONE_NA, __IPHONE_NA);
extern double NXClickTime(NXEventHandle handle) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_0, __MAC_10_12, __IPHONE_NA, __IPHONE_NA);
extern void NXSetClickSpace(NXEventHandle handle, _NXSize_ *area) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_0, __MAC_10_12, __IPHONE_NA, __IPHONE_NA);
extern void NXGetClickSpace(NXEventHandle handle, _NXSize_ *area) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_0, __MAC_10_12, __IPHONE_NA, __IPHONE_NA);
extern void NXResetMouse(NXEventHandle handle) __deprecated;

/*
 * The following functions have been removed.
 *
 * NXIdleTime
 *     See CGEventSourceSecondsSinceLastEventType.
 *
 * NXSetKeyMapping
 * NXKeyMappingLength
 * NXGetKeyMapping
 *     These do not have a drop in replacement.  See UCKeyTranslate.
 *
 * NXSetMouseScaling
 *     See IOHIDSetAccelerationWithKey and IOHIDSetMouseAcceleration.
 *
 * NXGetMouseScaling
 *     See IOHIDGetAccelerationWithKey and IOHIDGetMouseAcceleration.
 *
 * NXSetAutoDimThreshold
 * NXSetAutoDimState
 *     See IOPMSetAggressiveness and kPMMinutesToDim.
 *
 * NXAutoDimThreshold
 * NXAutoDimTime
 * NXAutoDimState
 *     See IOPMGetAggressiveness and kPMMinutesToDim.
 *
 * NXSetAutoDimBrightness
 * NXAutoDimBrightness
 * NXSetScreenBrightness
 * NXScreenBrightness
 *     This functionality is unsupported.
 */

__END_DECLS

#endif /*_DRIVERS_EVENT_STATUS_DRIVER_ */



#endif /* event_status_driver_h */
