//
//  IOPMKeys.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOPMKeys_h
#define IOPMKeys_h

#ifndef _IOPMKEYS_H_
#define _IOPMKEYS_H_

/*
 * Types of power event
 * These are potential arguments to IOPMSchedulePowerEvent().
 * These are all potential values of the kIOPMPowerEventTypeKey in the CFDictionaries
 * returned by IOPMCopyScheduledPowerEvents().
 */
/*!
 @define kIOPMAutoWake
 @abstract Value for scheduled wake from sleep.
 */
#define kIOPMAutoWake                                   "wake"

/*!
 @define kIOPMAutoPowerOn
 @abstract Value for scheduled power on from off state.
 */
#define kIOPMAutoPowerOn                                "poweron"

/*!
 @define kIOPMAutoWakeOrPowerOn
 @abstract Value for scheduled wake from sleep, or power on. The system will either wake OR
 power on, whichever is necessary.
 */

#define kIOPMAutoWakeOrPowerOn                          "wakepoweron"
/*!
 @define kIOPMAutoSleep
 @abstract Value for scheduled sleep.
 */

#define kIOPMAutoSleep                                   "sleep"
/*!
 @define kIOPMAutoShutdown
 @abstract Value for scheduled shutdown.
 */

#define kIOPMAutoShutdown                               "shutdown"
/*!
 @define kIOPMAutoRestart
 @abstract Value for scheduled restart.
 */

#define kIOPMAutoRestart                                "restart"

/*
 * Keys for evaluating the CFDictionaries returned by IOPMCopyScheduledPowerEvents()
 */
/*!
 @define kIOPMPowerEventTimeKey
 @abstract Key for the time of the scheduled power event. Value is a CFDateRef.
 */
#define kIOPMPowerEventTimeKey                          "time"

/*!
 @define kIOPMPowerEventAppNameKey
 @abstract Key for the CFBundleIdentifier of the app that scheduled the power event. Value is a CFStringRef.
 */
#define kIOPMPowerEventAppNameKey                       "scheduledby"

/*!
 @define kIOPMPowerEventAppPIDKey
 @abstract Key for the PID the App that scheduled the power event. Value is a CFNumber integer.
 */
#define kIOPMPowerEventAppPIDKey                       "appPID"

/*!
 @define kIOPMPowerEventTypeKey
 @abstract Key for the type of power event. Value is a CFStringRef, with the c-string value of one of the "kIOPMAuto" strings.
 */
#define kIOPMPowerEventTypeKey                          "eventtype"

#endif


#endif /* IOPMKeys_h */
