//
//  glfw3native.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef glfw3native_h
#define glfw3native_h

#if defined(GLFW_EXPOSE_NATIVE_WIN32)
// This is a workaround for the fact that glfw3.h needs to export APIENTRY (for
// example to allow applications to correctly declare a GL_ARB_debug_output
// callback) but windows.h assumes no one will define APIENTRY before it does
#undef APIENTRY
#include <windows.h>
#elif defined(GLFW_EXPOSE_NATIVE_COCOA)
#include <ApplicationServices/ApplicationServices.h>
#if defined(__OBJC__)
#import <Cocoa/Cocoa.h>
#else
typedef void* id;
#endif
#elif defined(GLFW_EXPOSE_NATIVE_X11)
#include <X11/Xlib.h>
#include <X11/extensions/Xrandr.h>
#else
#error "No window API selected"
#endif

#if defined(GLFW_EXPOSE_NATIVE_WGL)
/* WGL is declared by windows.h */
#elif defined(GLFW_EXPOSE_NATIVE_NSGL)
/* NSGL is declared by Cocoa.h */
#elif defined(GLFW_EXPOSE_NATIVE_GLX)
#include <GL/glx.h>
#elif defined(GLFW_EXPOSE_NATIVE_EGL)
#include <EGL/egl.h>
#else
#error "No context API selected"
#endif


/*************************************************************************
 * Functions
 *************************************************************************/

#if defined(GLFW_EXPOSE_NATIVE_WIN32)
/*! @brief Returns the adapter device name of the specified monitor.
 *
 *  @return The UTF-8 encoded adapter device name (for example `\\.\DISPLAY1`)
 *  of the specified monitor, or `NULL` if an [error](@ref error_handling)
 *  occurred.
 *
 *  @par Thread Safety
 *  This function may be called from any thread.  Access is not synchronized.
 *
 *  @par History
 *  Added in GLFW 3.1.
 *
 *  @ingroup native
 */
GLFWAPI const char* glfwGetWin32Adapter(GLFWmonitor* monitor);

/*! @brief Returns the display device name of the specified monitor.
 *
 *  @return The UTF-8 encoded display device name (for example
 *  `\\.\DISPLAY1\Monitor0`) of the specified monitor, or `NULL` if an
 *  [error](@ref error_handling) occurred.
 *
 *  @par Thread Safety
 *  This function may be called from any thread.  Access is not synchronized.
 *
 *  @par History
 *  Added in GLFW 3.1.
 *
 *  @ingroup native
 */
GLFWAPI const char* glfwGetWin32Monitor(GLFWmonitor* monitor);

/*! @brief Returns the `HWND` of the specified window.
 *
 *  @return The `HWND` of the specified window, or `NULL` if an
 *  [error](@ref error_handling) occurred.
 *
 *  @par Thread Safety
 *  This function may be called from any thread.  Access is not synchronized.
 *
 *  @par History
 *  Added in GLFW 3.0.
 *
 *  @ingroup native
 */
GLFWAPI HWND glfwGetWin32Window(GLFWwindow* window);
#endif

#if defined(GLFW_EXPOSE_NATIVE_WGL)
/*! @brief Returns the `HGLRC` of the specified window.
 *
 *  @return The `HGLRC` of the specified window, or `NULL` if an
 *  [error](@ref error_handling) occurred.
 *
 *  @par Thread Safety
 *  This function may be called from any thread.  Access is not synchronized.
 *
 *  @par History
 *  Added in GLFW 3.0.
 *
 *  @ingroup native
 */
GLFWAPI HGLRC glfwGetWGLContext(GLFWwindow* window);
#endif

#if defined(GLFW_EXPOSE_NATIVE_COCOA)
/*! @brief Returns the `CGDirectDisplayID` of the specified monitor.
 *
 *  @return The `CGDirectDisplayID` of the specified monitor, or
 *  `kCGNullDirectDisplay` if an [error](@ref error_handling) occurred.
 *
 *  @par Thread Safety
 *  This function may be called from any thread.  Access is not synchronized.
 *
 *  @par History
 *  Added in GLFW 3.1.
 *
 *  @ingroup native
 */
GLFWAPI CGDirectDisplayID glfwGetCocoaMonitor(GLFWmonitor* monitor);

/*! @brief Returns the `NSWindow` of the specified window.
 *
 *  @return The `NSWindow` of the specified window, or `nil` if an
 *  [error](@ref error_handling) occurred.
 *
 *  @par Thread Safety
 *  This function may be called from any thread.  Access is not synchronized.
 *
 *  @par History
 *  Added in GLFW 3.0.
 *
 *  @ingroup native
 */
GLFWAPI id glfwGetCocoaWindow(GLFWwindow* window);
#endif

#if defined(GLFW_EXPOSE_NATIVE_NSGL)
/*! @brief Returns the `NSOpenGLContext` of the specified window.
 *
 *  @return The `NSOpenGLContext` of the specified window, or `nil` if an
 *  [error](@ref error_handling) occurred.
 *
 *  @par Thread Safety
 *  This function may be called from any thread.  Access is not synchronized.
 *
 *  @par History
 *  Added in GLFW 3.0.
 *
 *  @ingroup native
 */
GLFWAPI id glfwGetNSGLContext(GLFWwindow* window);
#endif

#if defined(GLFW_EXPOSE_NATIVE_X11)
/*! @brief Returns the `Display` used by GLFW.
 *
 *  @return The `Display` used by GLFW, or `NULL` if an
 *  [error](@ref error_handling) occurred.
 *
 *  @par Thread Safety
 *  This function may be called from any thread.  Access is not synchronized.
 *
 *  @par History
 *  Added in GLFW 3.0.
 *
 *  @ingroup native
 */
GLFWAPI Display* glfwGetX11Display(void);

/*! @brief Returns the `RRCrtc` of the specified monitor.
 *
 *  @return The `RRCrtc` of the specified monitor, or `None` if an
 *  [error](@ref error_handling) occurred.
 *
 *  @par Thread Safety
 *  This function may be called from any thread.  Access is not synchronized.
 *
 *  @par History
 *  Added in GLFW 3.1.
 *
 *  @ingroup native
 */
GLFWAPI RRCrtc glfwGetX11Adapter(GLFWmonitor* monitor);

/*! @brief Returns the `RROutput` of the specified monitor.
 *
 *  @return The `RROutput` of the specified monitor, or `None` if an
 *  [error](@ref error_handling) occurred.
 *
 *  @par Thread Safety
 *  This function may be called from any thread.  Access is not synchronized.
 *
 *  @par History
 *  Added in GLFW 3.1.
 *
 *  @ingroup native
 */
GLFWAPI RROutput glfwGetX11Monitor(GLFWmonitor* monitor);

/*! @brief Returns the `Window` of the specified window.
 *
 *  @return The `Window` of the specified window, or `None` if an
 *  [error](@ref error_handling) occurred.
 *
 *  @par Thread Safety
 *  This function may be called from any thread.  Access is not synchronized.
 *
 *  @par History
 *  Added in GLFW 3.0.
 *
 *  @ingroup native
 */
GLFWAPI Window glfwGetX11Window(GLFWwindow* window);
#endif

#if defined(GLFW_EXPOSE_NATIVE_GLX)
/*! @brief Returns the `GLXContext` of the specified window.
 *
 *  @return The `GLXContext` of the specified window, or `NULL` if an
 *  [error](@ref error_handling) occurred.
 *
 *  @par Thread Safety
 *  This function may be called from any thread.  Access is not synchronized.
 *
 *  @par History
 *  Added in GLFW 3.0.
 *
 *  @ingroup native
 */
GLFWAPI GLXContext glfwGetGLXContext(GLFWwindow* window);
#endif

#if defined(GLFW_EXPOSE_NATIVE_EGL)
/*! @brief Returns the `EGLDisplay` used by GLFW.
 *
 *  @return The `EGLDisplay` used by GLFW, or `EGL_NO_DISPLAY` if an
 *  [error](@ref error_handling) occurred.
 *
 *  @par Thread Safety
 *  This function may be called from any thread.  Access is not synchronized.
 *
 *  @par History
 *  Added in GLFW 3.0.
 *
 *  @ingroup native
 */
GLFWAPI EGLDisplay glfwGetEGLDisplay(void);

/*! @brief Returns the `EGLContext` of the specified window.
 *
 *  @return The `EGLContext` of the specified window, or `EGL_NO_CONTEXT` if an
 *  [error](@ref error_handling) occurred.
 *
 *  @par Thread Safety
 *  This function may be called from any thread.  Access is not synchronized.
 *
 *  @par History
 *  Added in GLFW 3.0.
 *
 *  @ingroup native
 */
GLFWAPI EGLContext glfwGetEGLContext(GLFWwindow* window);

/*! @brief Returns the `EGLSurface` of the specified window.
 *
 *  @return The `EGLSurface` of the specified window, or `EGL_NO_SURFACE` if an
 *  [error](@ref error_handling) occurred.
 *
 *  @par Thread Safety
 *  This function may be called from any thread.  Access is not synchronized.
 *
 *  @par History
 *  Added in GLFW 3.0.
 *
 *  @ingroup native
 */
GLFWAPI EGLSurface glfwGetEGLSurface(GLFWwindow* window);
#endif

#ifdef __cplusplus
}
#endif

#endif /* _glfw3_native_h_ */



#endif /* glfw3native_h */
