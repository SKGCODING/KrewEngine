//
//  IOCFPlugIn.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOCFPlugIn_h
#define IOCFPlugIn_h

#ifndef _IOKIT_IOCFPLUGIN_H_
#define _IOKIT_IOCFPLUGIN_H_

/* IOCFPlugIn.h
 */
#include <sys/cdefs.h>

__BEGIN_DECLS

#include <CoreFoundation/CFPlugIn.h>
#if COREFOUNDATION_CFPLUGINCOM_SEPARATE
#include <CoreFoundation/CFPlugInCOM.h>
#endif

#include <IOKit/IOKitLib.h>

/* C244E858-109C-11D4-91D4-0050E4C6426F */
#define kIOCFPlugInInterfaceID CFUUIDGetConstantUUIDWithBytes(NULL,    \
0xC2, 0x44, 0xE8, 0x58, 0x10, 0x9C, 0x11, 0xD4,            \
0x91, 0xD4, 0x00, 0x50, 0xE4, 0xC6, 0x42, 0x6F)


#define IOCFPLUGINBASE                            \
UInt16    version;                        \
UInt16    revision;                        \
IOReturn (*Probe)(void *thisPointer, CFDictionaryRef propertyTable,    \
io_service_t service, SInt32 * order);        \
IOReturn (*Start)(void *thisPointer, CFDictionaryRef propertyTable,    \
io_service_t service);                \
IOReturn (*Stop)(void *thisPointer)

typedef struct IOCFPlugInInterfaceStruct {
    IUNKNOWN_C_GUTS;
    IOCFPLUGINBASE;
} IOCFPlugInInterface;


kern_return_t
IOCreatePlugInInterfaceForService(io_service_t service,
                                  CFUUIDRef pluginType, CFUUIDRef interfaceType,
                                  IOCFPlugInInterface *** theInterface, SInt32 * theScore);

kern_return_t
IODestroyPlugInInterface(IOCFPlugInInterface ** interface);

__END_DECLS

#

#endif /* IOCFPlugIn_h */
