//
//  CGLContext.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 16/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef CGLContext_h
#define CGLContext_h

#include <OpenGL/gliContext.h>
#include <OpenGL/gliDispatch.h>

#ifdef __cplusplus
extern "C" {
#endif
    
    
    /*
     ** Opaque declaration for private CGLContext data.
     */
    typedef struct _CGLPrivateObject *CGLPrivateObj;
    
    /*
     ** CGLContext structure.
     */
    struct _CGLContextObject {
        GLIContext            rend;
        GLIFunctionDispatch   disp;
        CGLPrivateObj         priv;
        void                 *stak;
    };
    
    
#ifdef __cplusplus
}
#endif

#endif /* CGLContext_h */
