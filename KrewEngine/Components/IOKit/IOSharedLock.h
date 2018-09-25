//
//  IOSharedLock.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOSharedLock_h
#define IOSharedLock_h

#ifndef _IOKIT_IOSHAREDLOCK_H
#define _IOKIT_IOSHAREDLOCK_H

#include <libkern/OSAtomic.h>

#define IOSharedLockData OSSpinLock
#define ev_lock_data_t   OSSpinLock


#endif /* ! _IOKIT_IOSHAREDLOCK_H */

#endif /* IOSharedLock_h */
