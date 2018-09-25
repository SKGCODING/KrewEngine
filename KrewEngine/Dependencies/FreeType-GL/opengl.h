//
//  opengl.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 06/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef opengl_h
#define opengl_h

#ifndef __OPEN_GL_H__
#define __OPEN_GL_H__

#if defined(__APPLE__)
#   include "TargetConditionals.h"
#   if TARGET_OS_SIMULATOR || TARGET_OS_IPHONE
#     if defined(FREETYPE_GL_ES_VERSION_3_0)
#       include <OpenGLES/ES3/gl.h>
#     else
#       include <OpenGLES/ES2/gl.h>
#     endif
#   else
#     include <OpenGL/gl.h>
#   endif
#elif defined(_WIN32) || defined(_WIN64)
#  include <GL/glew.h>
#elif defined(__ANDROID__)
#  include <GLES3/gl3.h>
#else
#  include <GL/glew.h>
#  include <GL/gl.h>
#endif

#endif /* OPEN_GL_H */

#endif /* opengl_h */
