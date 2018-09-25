//
//  aglContext.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 27/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef aglContext_h
#define aglContext_h

#ifndef _AGLCONTEXT_H
#define _AGLCONTEXT_H

#include <OpenGL/OpenGLAvailability.h>
#include <OpenGL/gliContext.h>
#include <OpenGL/gliDispatch.h>

#ifdef __cplusplus
extern "C" {
#endif
    
    
    /*
     ** Opaque declaration for private AGLContext data.
     */
    typedef struct __AGLPrivateRec *AGLPrivate OPENGL_DEPRECATED(10_0, 10_9);
    
    /*
     ** AGLContext structure.
     */
    struct __AGLContextRec {
        GLIContext           rend;
        GLIFunctionDispatch  disp;
        AGLPrivate           priv;
    } OPENGL_DEPRECATED(10_0, 10_9);
    
    
#ifdef __cplusplus
}
#endif

#endif /* _AGLCONTEXT_H */


#endif /* aglContext_h */
