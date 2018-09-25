//
//  IOUPSPlugIn.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOUPSPlugIn_h
#define IOUPSPlugIn_h

#ifndef _IOKIT_PM_IOUPSPLUGIN_H
#define _IOKIT_PM_IOUPSPLUGIN_H

#include <CoreFoundation/CoreFoundation.h>
#include <IOKit/IOCFPlugIn.h>


/* 40A57A4E-26A0-11D8-9295-000A958A2C78 */
/*!
 @define kIOUPSPlugInTypeID
 @discussion Type ID for the IOUPSPlugInInterface. Corresponds to an
 available UPS device.
 */
#define kIOUPSPlugInTypeID CFUUIDGetConstantUUIDWithBytes(NULL,     \
0x40, 0xa5, 0x7a, 0x4e, 0x26, 0xa0, 0x11, 0xd8,            \
0x92, 0x95, 0x00, 0x0a, 0x95, 0x8a, 0x2c, 0x78)

/* 63F8BFC4-26A0-11D8-88B4-000A958A2C78 */
/*!
 @define kIOUPSPlugInInterfaceID
 @discussion Interface ID for the IOUPSPlugInInterface. Corresponds to an
 available UPS device.
 */
#define kIOUPSPlugInInterfaceID CFUUIDGetConstantUUIDWithBytes(NULL,     \
0x63, 0xf8, 0xbf, 0xc4, 0x26, 0xa0, 0x11, 0xd8,             \
0x88, 0xb4, 0x0, 0xa, 0x95, 0x8a, 0x2c, 0x78)

/* E60E0799-9AA6-49DF-B55B-A5C94BA07A4A */
/*!
 @define kIOUPSPlugInInterfaceID_v140
 @discussion Interface ID for the IOUPSPlugInInterface. Corresponds to an
 available UPS device.
 */
#define kIOUPSPlugInInterfaceID_v140 CFUUIDGetConstantUUIDWithBytes(NULL,     \
0xe6, 0xe, 0x7, 0x99, 0x9a, 0xa6, 0x49, 0xdf,               \
0xb5, 0x5b, 0xa5, 0xc9, 0x4b, 0xa0, 0x7a, 0x4a)


/*!
 @typedef IOUPSEventCallbackFunction
 @discussion Type and arguments of callout C function that is used when a
 completion routine is called.  This function pointer is set
 via setEventCallback and is called when an event is available
 from the UPS.
 @param target void * pointer to your data, often a pointer to an object.
 @param result Completion result of desired operation.
 @param refcon void * pointer to more data.
 @param sender Interface instance sending the completion routine.
 @param event CFDictionaryRef containing event data.
 */
typedef void (*IOUPSEventCallbackFunction)
(void *             target,
 IOReturn         result,
 void *             refcon,
 void *             sender,
 CFDictionaryRef  event);

#define IOUPSPLUGINBASE                            \
IOReturn (*getProperties)(    void * thisPointer,             \
CFDictionaryRef * properties);        \
IOReturn (*getCapabilities)(void * thisPointer,             \
CFSetRef * capabilities);        \
IOReturn (*getEvent)(    void * thisPointer,             \
CFDictionaryRef * event);        \
IOReturn (*setEventCallback)(void * thisPointer,             \
IOUPSEventCallbackFunction callback,    \
void * callbackTarget,          \
void * callbackRefcon);            \
IOReturn (*sendCommand)(    void * thisPointer,             \
CFDictionaryRef command)

#define IOUPSPLUGIN_V140                            \
IOReturn (*createAsyncEventSource)(void * thisPointer,      \
CFTypeRef * source)


typedef struct IOUPSPlugInInterface {
    IUNKNOWN_C_GUTS;
    IOUPSPLUGINBASE;
} IOUPSPlugInInterface;

typedef struct IOUPSPlugInInterface_v140 {
    IUNKNOWN_C_GUTS;
    IOUPSPLUGINBASE;
    IOUPSPLUGIN_V140;
} IOUPSPlugInInterface_v140;

//
//  BEGIN READABLE STRUCTURE DEFINITIONS
//
//  This portion of uncompiled code provides a more reader friendly representation of
//  the CFPlugin methods defined above.

#if 0
/*!
 @interface IOUPSPlugInInterface
 @discussion Represents and provides management functions for a UPS device.
 */

typedef struct IOUPSPlugInInterface {
    IUNKNOWN_C_GUTS;
    
    /*!
     @function     getProperties
     @abstract    Used to obtain the properties of the UPS device such as the
     name and transport.
     @discussion Property keys are defined in IOPSKeys.h.  This is not an
     allocation method.  Thus the caller does not release the
     CFDictionary that is returned.
     @param    thisPointer     The UPS Interface to use.
     @param       properties     Pointer to a CFDictionaryRef that contains
     the properties.
     @result    An IOReturn error code.
     */
    IOReturn (*getProperties)(    void * thisPointer,
                              CFDictionaryRef * properties);
    
    /*!
     @function     getCapabilities
     @abstract    Used to obtain the capabilities of the UPS device.
     @discussion Keys are defined in IOPSKeys.h and begin with kIOPS.  This
     is not an allocation method.  Thus the caller does not
     release the CFSet that is returned.
     @param    thisPointer     The UPS Interface to use.
     @param       capabilities     Pointer to a CFSetRef that contains the
     capabilities.
     @result    An IOReturn error code.
     */
    IOReturn (*getCapabilities)(void * thisPointer,
                                CFSetRef * capabilities);
    
    /*!
     @function     getEvent
     @abstract    Used to poll the current state of the UPS.
     @discussion Keys are defined in IOPSKeys.h and begin with kIOPS.  This
     is not an allocation method.  Thus the caller does not
     release the CFDictionary that is returned.
     @param    thisPointer     The UPS Interface to use.
     @param       event         Pointer to a CFDictionaryRef that contains
     the current event state.
     @result    An IOReturn error code.
     */
    IOReturn (*getEvent)(    void * thisPointer,
                         CFDictionaryRef * event);
    
    /*!
     @function    setEventCallback
     @abstract    Set the callback that should be called to handle an event
     from the UPS.
     @discussion The proivided callback method should be called whenever there
     is a change of state in the UPS.  This should be used in
     conjunction with createAsyncEventSource.
     @param      thisPointer     The UPS Interface to use.
     @param       callback        A callback handler of type
     IOUPSEventCallbackFunction.
     @param       callbackTarget    The address to be targeted by this callback.
     @param       callbackRefcon    A user specified reference value. This will
     be passed to all callback functions.
     @result    An IOReturn error code.
     */
    IOReturn (*setEventCallback)(void * thisPointer,
                                 IOUPSEventCallbackFunction callback,
                                 void * callbackTarget,
                                 void * callbackRefcon);
    
    /*!
     @function     sendCommand
     @abstract    Send a command to the UPS.
     @discussion    Command keys are defined in IOPSKeys.h and begin with
     kIOPSCommand.  An error should be returned if your device does
     not know how to respond to a command.
     @param      thisPointer     The UPS Interface to use.
     @param       command         CFDictionaryRef that contains the command.
     @result    An IOReturn error code.
     */
    IOReturn (*sendCommand)(    void * thisPointer,
                            CFDictionaryRef command);
    
    /*!
     @function     createAsyncEventSource
     @abstract    Used to create an async run loop event source of the plugin.
     @discussion This is an allocation method.  Thus the caller must
     release the object that is returned.
     @param      thisPointer     The UPS Interface to use.
     @param       source          Pointer to a CFTypeRef.  It is expected that this
     point to either a CFRunLoopSourceRef, a
     CFRunLoopTimerRef or a CFArray containing the
     aforementioned types.
     @result    An IOReturn error code.
     */
    IOReturn (*createAsyncEventSource)(    void * thisPointer,
                                       CFTypeRef * source);
    
    
} IOUPSPlugInInterface;
#endif

//  END READABLE STRUCTURE DEFINITIONS

#endif /* !_IOKIT_PM_IOUPSPLUGIN_H */


#endif /* IOUPSPlugIn_h */
