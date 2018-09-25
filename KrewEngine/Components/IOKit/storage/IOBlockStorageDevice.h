//
//  IOBlockStorageDevice.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOBlockStorageDevice_h
#define IOBlockStorageDevice_h

#ifndef _IOBLOCKSTORAGEDEVICE_H
#define _IOBLOCKSTORAGEDEVICE_H

#include <IOKit/IOTypes.h>
#include <IOKit/storage/IOStorageDeviceCharacteristics.h>

/*!
 * @defined kIOBlockStorageDeviceClass
 * @abstract
 * The name of the IOBlockStorageDevice class.
 */

#define kIOBlockStorageDeviceClass "IOBlockStorageDevice"

/*!
 * @defined kIOBlockStorageDeviceWriteCacheStateKey
 * @abstract
 * The name of the property used to get or set the write cache state of the
 * block storage device.
 */
#define kIOBlockStorageDeviceWriteCacheStateKey    "WriteCacheState"

#endif /* !_IOBLOCKSTORAGEDEVICE_H */


#endif /* IOBlockStorageDevice_h */
