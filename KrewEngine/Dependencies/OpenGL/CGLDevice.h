//
//  CGLDevice.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 16/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef CGLDevice_h
#define CGLDevice_h

#include <OpenGL/CGLTypes.h>
#include <OpenGL/gltypes.h>

#ifdef __cplusplus
extern "C" {
#endif
    
    OPENGL_ASSUME_NONNULL_BEGIN
    
    typedef struct CGLShareGroupRec    *CGLShareGroupObj OPENGL_AVAILABLE(10_6);
    
    CGLShareGroupObj OPENGL_NULLABLE CGLGetShareGroup(CGLContextObj ctx) OPENGL_AVAILABLE(10_6);
    
    typedef struct _cl_device_id *      cl_device_id OPENGL_AVAILABLE(10_10);
    
    /*
     ** CGLGetDeviceFromGLRenderer returns the cl_device_id corresponding to the
     ** specified GL renderer ID. Use CGLDescribeRenderer to check if the renderer
     ** supports kCGLRPAcceleratedCompute before calling this function. If there is
     ** no cl_device_id corresponding to the specified renderer ID, the result is
     ** undefined.
     */
    cl_device_id CGLGetDeviceFromGLRenderer(GLint rendererID) OPENGL_AVAILABLE(10_10);
    
    OPENGL_ASSUME_NONNULL_END
    
#ifdef __cplusplus
}
#endif

#endif /* CGLDevice_h */
