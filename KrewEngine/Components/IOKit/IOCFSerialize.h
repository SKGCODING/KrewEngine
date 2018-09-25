//
//  IOCFSerialize.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOCFSerialize_h
#define IOCFSerialize_h

#ifndef __IOKIT_IOCFSERIALIZE_H
#define __IOKIT_IOCFSERIALIZE_H

#include <CoreFoundation/CFBase.h>
#include <CoreFoundation/CFData.h>

#if defined(__cplusplus)
extern "C" {
#endif
    
    enum {
        kIOCFSerializeToBinary    = 0x00000001
    };
    
    CF_RETURNS_RETAINED
    CFDataRef
    IOCFSerialize( CFTypeRef object, CFOptionFlags options );
    
#if defined(__cplusplus)
}
#endif

#endif /* __IOKIT_IOCFSERIALIZE_H */


#endif /* IOCFSerialize_h */
