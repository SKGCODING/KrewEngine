//
//  IOCFUnserialize.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOCFUnserialize_h
#define IOCFUnserialize_h

#ifndef __IOKIT_IOCFUNSERIALIZE_H
#define __IOKIT_IOCFUNSERIALIZE_H

#include <CoreFoundation/CFBase.h>
#include <CoreFoundation/CFString.h>

#if defined(__cplusplus)
extern "C" {
#endif
    
    // on success IOCFUnserialize sets errorString to 0 and returns
    // the unserialized object.
    
    // on failure IOCFUnserialize sets errorString to a CFString object
    // containing a error message suitable for logging and returns 0
    
    CF_RETURNS_RETAINED
    CFTypeRef
    IOCFUnserialize(const char *buffer,
                    CFAllocatorRef allocator,
                    CFOptionFlags options,
                    CFStringRef *errorString);
    
    CF_RETURNS_RETAINED
    CFTypeRef
    IOCFUnserializeBinary(const char    * buffer,
                          size_t          bufferSize,
                          CFAllocatorRef  allocator,
                          CFOptionFlags      options,
                          CFStringRef    * errorString);
    
    CF_RETURNS_RETAINED
    CFTypeRef
    IOCFUnserializeWithSize(const char      * buffer,
                            size_t          bufferSize,
                            CFAllocatorRef    allocator,
                            CFOptionFlags    options,
                            CFStringRef      * errorString);
    
#if defined(__cplusplus)
}
#endif

#endif /* __IOKIT_IOCFUNSERIALIZE_H */


#endif /* IOCFUnserialize_h */
