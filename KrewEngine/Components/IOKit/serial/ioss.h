//
//  ioss.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef ioss_h
#define ioss_h

#ifndef _SYS_IOSS_H
#define _SYS_IOSS_H

#ifndef _POSIX_SOURCE

#include <sys/termios.h>
#include <sys/ttycom.h>

/*
 * External clock baud rates, for use with cfsetospeed
 */
#define _MAKE_EXT(x)    (((x) << 1) | 1)
#define BEXT1            _MAKE_EXT(1)
#define BEXT2            _MAKE_EXT(2)
#define BEXT4            _MAKE_EXT(4)
#define BEXT8            _MAKE_EXT(8)
#define BEXT16            _MAKE_EXT(16)
#define BEXT32            _MAKE_EXT(32)
#define BEXT64            _MAKE_EXT(64)
#define BEXT128            _MAKE_EXT(128)
#define BEXT256            _MAKE_EXT(256)

// ul - unsigned long for x86_64
// us - unsigned long for i386
// speed and shspeed correspondingly
typedef __uint64_t    user_ul_t;
typedef __uint64_t    user_speed_t;
typedef __uint32_t    user_us_t;
typedef __uint32_t    user_shspeed_t;

/*
 * Sets the receive latency (in microseconds) with the default
 * value of 0 meaning a 256 / 3 character delay latency.
 */
#define IOSSDATALAT    _IOW('T', 0, unsigned long)
#define IOSSDATALAT_32    _IOW('T', 0, user_us_t)
#define IOSSDATALAT_64    _IOW('T', 0, user_ul_t)

/*
 * Controls the pre-emptible status of IOSS based serial dial in devices
 * (i.e. /dev/tty.* devices).  If true an open tty.* device is pre-emptible by
 * a dial out call.  Once a dial in call is established then setting pre-empt
 * to false will halt any further call outs on the cu device.
 */
#define IOSSPREEMPT    _IOW('T', 1, int)

/*
 * Sets the input speed and output speed to a non-traditional baud rate
 */
#define IOSSIOSPEED    _IOW('T', 2, speed_t)
#define IOSSIOSPEED_32    _IOW('T', 2, user_shspeed_t)
#define IOSSIOSPEED_64    _IOW('T', 2, user_speed_t)

#endif  /*_POSIX_SOURCE */

/*
 * END OF PROTECTED INCLUDE.
 */
#endif /* !_SYS_IOSS_H */


#endif /* ioss_h */
