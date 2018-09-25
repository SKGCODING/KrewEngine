//
//  IOHIDProperties.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOHIDProperties_h
#define IOHIDProperties_h

#ifndef IOHIDProperties_h
#define IOHIDProperties_h

/*!
 * @define      kIOHIDPointerAccelerationKey
 *
 * @abstract    CFNumber that contains the pointer acceleration value.
 */
#define kIOHIDPointerAccelerationKey                "HIDPointerAcceleration"

/*!
 * @define      kIOHIDPointerAccelerationTypeKey
 *
 * @abstract    CFString containing the type of acceleration for pointer.
 *              Supported types are:
 *                  <code>kIOHIDPointerAccelerationKey</code>
 *                  <code>kIOHIDMouseScrollAccelerationKey</code>
 *                  <code>kIOHIDTrackpadAccelerationType</code>
 */
#define kIOHIDPointerAccelerationTypeKey            "HIDPointerAccelerationType"

/*!
 * @define      kIOHIDMouseScrollAccelerationKey
 *
 * @abstract    CFNumber that contains the mouse scroll acceleration value.
 */
#define kIOHIDMouseScrollAccelerationKey            "HIDMouseScrollAcceleration"

/*!
 * @define      kIOHIDMouseAccelerationType
 *
 * @abstract    CFNumber that contains the mouse acceleration value.
 */
#define kIOHIDMouseAccelerationType                 "HIDMouseAcceleration"
#define kIOHIDMouseAccelerationTypeKey              kIOHIDMouseAccelerationType

/*!
 * @define      kIOHIDScrollAccelerationKey
 *
 * @abstract    CFNumber that contains the scroll acceleration value.
 */
#define kIOHIDScrollAccelerationKey                 "HIDScrollAcceleration"

/*!
 * @define      kIOHIDScrollAccelerationTypeKey
 *
 * @abstract    CFString containing the type of acceleration for scroll.
 *              Supported types are:
 *                  <code>kIOHIDMouseScrollAccelerationKey</code>
 *                  <code>kIOHIDTrackpadScrollAccelerationKey</code>
 */
#define kIOHIDScrollAccelerationTypeKey             "HIDScrollAccelerationType"

/*!
 * @define      kIOHIDPointerButtonMode
 *
 * @abstract    CFNumber containing the current pointer button mode.
 *              See IOHIDButtonModes enumerator for possible modes.
 */
#define kIOHIDPointerButtonMode                     "HIDPointerButtonMode"
#define kIOHIDPointerButtonModeKey                  kIOHIDPointerButtonMode

/*!
 * @define      kIOHIDUserUsageMapKey
 *
 * @abstract    CFArray of dictionaries that contain user defined key mappings.
 */
#define kIOHIDUserKeyUsageMapKey                     "UserKeyMapping"

/*!
 * @define      kIOHIDKeyboardCapsLockDelayOverride
 *
 * @abstract    CFNumber containing the delay (in ms) before the caps lock key is activated.
 */
#define kIOHIDKeyboardCapsLockDelayOverride         "CapsLockDelayOverride"
#define kIOHIDKeyboardCapsLockDelayOverrideKey      kIOHIDKeyboardCapsLockDelayOverride

/*!
 * @define      kIOHIDServiceEjectDelayKey
 *
 * @abstract    CFNumber containing the delay (in ms) before the eject key is activated.
 */
#define kIOHIDServiceEjectDelayKey                  "EjectDelay"

/*!
 * @define      kIOHIDServiceInitialKeyRepeatDelayKey
 *
 * @abstract    CFNumber containing the delay (in ns) before the initial key repeat.
 *              If value is 0, there are no repeats.
 */
#define kIOHIDServiceInitialKeyRepeatDelayKey       "HIDInitialKeyRepeat"

/*!
 * @define      kIOHIDServiceKeyRepeatDelayKey
 *
 * @abstract    CFNumber containing the delay (in ns) for subsequent key repeats.
 *              If value is 0, there are no repeats (including initial).
 */
#define kIOHIDServiceKeyRepeatDelayKey              "HIDKeyRepeat"

/*!
 * @define      kIOHIDIdleTimeMicrosecondsKey
 *
 * @abstract    CFNumber containing the HID idle time in microseconds.
 */
#define kIOHIDIdleTimeMicrosecondsKey               "HIDIdleTimeMicroseconds"

#endif /* IOHIDProperties_h */


#endif /* IOHIDProperties_h */
