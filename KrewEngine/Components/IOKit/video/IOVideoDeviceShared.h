//
//  IOVideoDeviceShared.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOVideoDeviceShared_h
#define IOVideoDeviceShared_h

#if !defined(__IOKIT_IOVIDEODEVICESHARED_H)
#define __IOKIT_IOVIDEODEVICESHARED_H

#include <sys/cdefs.h>
#include <IOKit/IOTypes.h>

/*!
 @header IOVideoDeviceShared.h
 IOVideoDevice definitions shared between kernel and user space.
 */

__BEGIN_DECLS

/*!
 @enum Mach port types
 @constant kIOVideoDevicePortTypeNotification
 @constant kIOVideoDevicePortTypeOutput
 @constant kIOVideoDevicePortTypeInput
 @abstract Port types used with IOConnectSetNotificationPort().
 */
enum
{
    kIOVideoDevicePortTypeNotification,
    kIOVideoDevicePortTypeOutput,
    kIOVideoDevicePortTypeInput
};

__END_DECLS

#endif /* ! __IOKIT_IOVIDEODEVICESHARED_H */

#endif /* IOVideoDeviceShared_h */
