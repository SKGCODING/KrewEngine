//
//  IONetworkData.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IONetworkData_h
#define IONetworkData_h

#ifndef _IONETWORKDATA_H
#define _IONETWORKDATA_H

#define IONetworkParameter IONetworkData  // FIXME

/*! @enum NetworkDataAccessTypes
 @abstract Constants that describe access types.
 @constant kIONetworkDataAccessTypeRead  Read access.
 @constant kIONetworkDataAccessTypeWrite Write access (deprecated).
 @constant kIONetworkDataAccessTypeReset Reset access (deprecated).
 @constant kIONetworkDataAccessTypeSerialize Serialization access.
 */

enum {
    kIONetworkDataAccessTypeRead        = 0x01,
    kIONetworkDataAccessTypeWrite       = 0x02,
    kIONetworkDataAccessTypeReset       = 0x04,
    kIONetworkDataAccessTypeSerialize   = 0x08,
    kIONetworkDataAccessTypeMask        = 0xff
};

/*! @define kIONetworkDataBasicAccessTypes
 @discussion The default access types supported by an IONetworkData
 object. Allow read() and serialize(). */

#define kIONetworkDataBasicAccessTypes \
(kIONetworkDataAccessTypeRead | kIONetworkDataAccessTypeSerialize)

/*! @enum NetworkDataBufferTypes
 @abstract The types of data buffers that can be managed by an IONetworkData object.
 @constant kIONetworkDataBufferTypeInternal An internal data buffer
 allocated by the init() method.
 @constant kIONetworkDataBufferTypeExternal An external (persistent) data
 buffer.
 @constant kIONetworkDataBufferTypeNone No data buffer. The only useful
 action perfomed by an IONetworkData object with this buffer type
 is to call the access notification handler.
 */

enum {
    kIONetworkDataBufferTypeInternal = 0,
    kIONetworkDataBufferTypeExternal,
    kIONetworkDataBufferTypeNone
};

/*! @defined kIONetworkDataBytes
 @abstract A property of IONetworkData objects.
 @discussion The kIONetworkDataBytes property is an OSData that describes
 the data buffer of an IONetworkData object. This property is present
 only if kIONetworkDataAccessTypeSerialize access is supported.
 */

#define kIONetworkDataBytes             "Data"

/*! @defined kIONetworkDataAccessTypes
 @abstract A property of IONetworkData objects.
 @discussion The kIONetworkDataAccessTypes property is an OSNumber that
 describes the supported access types of an IONetworkData object.
 */

#define kIONetworkDataAccessTypes       "Access Types"

/*! @defined kIONetworkDataSize
 @abstract A property of IONetworkData objects.
 @discussion The kIONetworkDataSize property is an OSNumber that
 describes the size of the data buffer of an IONetworkData object.
 */

#define kIONetworkDataSize              "Size"


#endif /* !_IONETWORKDATA_H */


#endif /* IONetworkData_h */
