//
//  CGLCurrent.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 16/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef CGLCurrent_h
#define CGLCurrent_h

#include <OpenGL/CGLTypes.h>

#ifdef __cplusplus
extern "C" {
#endif
    
    OPENGL_ASSUME_NONNULL_BEGIN
    
    /*
     ** Current context functions
     */
    extern CGLError CGLSetCurrentContext(CGLContextObj OPENGL_NULLABLE ctx);
    extern CGLContextObj OPENGL_NULLABLE CGLGetCurrentContext(void);
    
    OPENGL_ASSUME_NONNULL_END
    
#ifdef __cplusplus
}
#endif

#endif /* CGLCurrent_h */
