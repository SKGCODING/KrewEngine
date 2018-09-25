//
//  IOGraphicsEngine.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOGraphicsEngine_h
#define IOGraphicsEngine_h

struct IOGraphicsEngineContext {
    OSSpinLock          contextLock;
    IOOptionBits        state;
    void *              owner;
    UInt32              version;
    IOByteCount         structSize;
    UInt32              reserved[ 8 ];
};
#ifndef __cplusplus
typedef volatile struct IOGraphicsEngineContext IOGraphicsEngineContext;
#endif

enum {
    // memory type for IOMapMemory
    kIOGraphicsEngineContext            = 100
};

enum {
    // version
    kIOGraphicsEngineContextVersion     = 1
};


#endif /* IOGraphicsEngine_h */
