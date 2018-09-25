//
//  OSMessageNotification.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef OSMessageNotification_h
#define OSMessageNotification_h

#ifndef    __OS_OSMESSAGENOTIFICATION_H
#define __OS_OSMESSAGENOTIFICATION_H

#ifdef __cplusplus
extern "C" {
#endif
    
#include <mach/mach_types.h>
#include <device/device_types.h>
#include <IOKit/IOReturn.h>
    
    enum {
        kFirstIOKitNotificationType         = 100,
        kIOServicePublishNotificationType         = 100,
        kIOServiceMatchedNotificationType        = 101,
        kIOServiceTerminatedNotificationType    = 102,
        kIOAsyncCompletionNotificationType        = 150,
        kIOServiceMessageNotificationType        = 160,
        kLastIOKitNotificationType             = 199,
        
        // reserved bits
        kIOKitNoticationTypeMask                    = 0x00000FFF,
        kIOKitNoticationTypeSizeAdjShift            = 30,
        kIOKitNoticationMsgSizeMask                 = 3,
    };
    
    enum {
        kOSNotificationMessageID        = 53,
        kOSAsyncCompleteMessageID        = 57,
        kMaxAsyncArgs            = 16
    };
    
    enum {
        kIOAsyncReservedIndex     = 0,
        kIOAsyncReservedCount,
        
        kIOAsyncCalloutFuncIndex     = kIOAsyncReservedCount,
        kIOAsyncCalloutRefconIndex,
        kIOAsyncCalloutCount,
        
        kIOMatchingCalloutFuncIndex    = kIOAsyncReservedCount,
        kIOMatchingCalloutRefconIndex,
        kIOMatchingCalloutCount,
        
        kIOInterestCalloutFuncIndex    = kIOAsyncReservedCount,
        kIOInterestCalloutRefconIndex,
        kIOInterestCalloutServiceIndex,
        kIOInterestCalloutCount
    };
    
    
    
    // --------------
    enum {
        kOSAsyncRef64Count    = 8,
        kOSAsyncRef64Size     = kOSAsyncRef64Count * ((int) sizeof(io_user_reference_t))
    };
    typedef io_user_reference_t OSAsyncReference64[kOSAsyncRef64Count];
    
    struct OSNotificationHeader64 {
        mach_msg_size_t    size;        /* content size */
        natural_t        type;
        OSAsyncReference64    reference;
        
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
        unsigned char    content[];
#else
        unsigned char    content[0];
#endif
    };
    
#pragma pack(4)
    struct IOServiceInterestContent64 {
        natural_t        messageType;
        io_user_reference_t    messageArgument[1];
    };
#pragma pack()
    // --------------
    
#if !KERNEL_USER32
    
    enum {
        kOSAsyncRefCount    = 8,
        kOSAsyncRefSize     = 32
    };
    typedef natural_t OSAsyncReference[kOSAsyncRefCount];
    
    struct OSNotificationHeader {
        mach_msg_size_t    size;        /* content size */
        natural_t        type;
        OSAsyncReference    reference;
        
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
        unsigned char    content[];
#else
        unsigned char    content[0];
#endif
    };
    
#pragma pack(4)
    struct IOServiceInterestContent {
        natural_t    messageType;
        void *    messageArgument[1];
    };
#pragma pack()
    
#endif /* KERNEL_USER32  */
    
    struct IOAsyncCompletionContent {
        IOReturn result;
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
        void * args[] __attribute__ ((packed));
#else
        void * args[0] __attribute__ ((packed));
#endif
    };
    
#ifndef __cplusplus
    typedef struct OSNotificationHeader OSNotificationHeader;
    typedef struct IOServiceInterestContent IOServiceInterestContent;
    typedef struct IOAsyncCompletionContent IOAsyncCompletionContent;
#endif
    
#ifdef __cplusplus
}
#endif

#endif /*  __OS_OSMESSAGENOTIFICATION_H */



#endif /* OSMessageNotification_h */
