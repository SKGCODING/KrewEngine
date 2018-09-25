//
//  IOTypes.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOTypes_h
#define IOTypes_h

#ifndef    __IOKIT_IOTYPES_H
#define __IOKIT_IOTYPES_H

#ifndef IOKIT
#define IOKIT 1
#endif /* !IOKIT */

#include <mach/message.h>
#include <mach/vm_types.h>

#include <IOKit/IOReturn.h>

#ifdef __cplusplus
extern "C" {
#endif
    
#ifndef    NULL
#if defined (__cplusplus)
#define    NULL    0
#else
#define NULL ((void *)0)
#endif
#endif
    
    /*
     * Simple data types.
     */
#include <stdbool.h>
#include <libkern/OSTypes.h>
    
    
    typedef UInt32        IOOptionBits;
    typedef SInt32        IOFixed;
    typedef UInt32        IOVersion;
    typedef UInt32        IOItemCount;
    typedef UInt32      IOCacheMode;
    
    typedef UInt32         IOByteCount32;
    typedef UInt64         IOByteCount64;
    
    typedef UInt32    IOPhysicalAddress32;
    typedef UInt64    IOPhysicalAddress64;
    typedef UInt32    IOPhysicalLength32;
    typedef UInt64    IOPhysicalLength64;
    
#if !defined(__arm__) && !defined(__i386__)
    typedef mach_vm_address_t    IOVirtualAddress;
#else
    typedef vm_address_t        IOVirtualAddress;
#endif
    
#if !defined(__arm__) && !defined(__i386__) && !(defined(__x86_64__) && !defined(KERNEL))
    typedef IOByteCount64        IOByteCount;
#else
    typedef IOByteCount32         IOByteCount;
#endif
    
    typedef IOVirtualAddress    IOLogicalAddress;
    
#if !defined(__arm__) && !defined(__i386__) && !(defined(__x86_64__) && !defined(KERNEL))
    
    typedef IOPhysicalAddress64     IOPhysicalAddress;
    typedef IOPhysicalLength64     IOPhysicalLength;
#define IOPhysical32( hi, lo )        ((UInt64) lo + ((UInt64)(hi) << 32))
#define IOPhysSize    64
    
#else
    
    typedef IOPhysicalAddress32     IOPhysicalAddress;
    typedef IOPhysicalLength32     IOPhysicalLength;
#define IOPhysical32( hi, lo )        (lo)
#define IOPhysSize    32
    
#endif
    
    
    typedef struct
    {
        IOPhysicalAddress    address;
        IOByteCount        length;
    } IOPhysicalRange;
    
    typedef struct
    {
        IOVirtualAddress    address;
        IOByteCount        length;
    } IOVirtualRange;
    
#if !defined(__arm__) && !defined(__i386__)
    typedef IOVirtualRange    IOAddressRange;
#else
    typedef struct
    {
        mach_vm_address_t    address;
        mach_vm_size_t    length;
    } IOAddressRange;
#endif
    
    /*
     * Map between #defined or enum'd constants and text description.
     */
    typedef struct {
        int value;
        const char *name;
    } IONamedValue;
    
    
    /*
     * Memory alignment -- specified as a power of two.
     */
    typedef unsigned int    IOAlignment;
    
#define IO_NULL_VM_TASK        ((vm_task_t)0)
    
    
    /*
     * Pull in machine specific stuff.
     */
    
    //#include <IOKit/machine/IOTypes.h>
    
#ifndef MACH_KERNEL
    
#ifndef __IOKIT_PORTS_DEFINED__
#define __IOKIT_PORTS_DEFINED__
    typedef mach_port_t    io_object_t;
#endif /* __IOKIT_PORTS_DEFINED__ */
    
#include <device/device_types.h>
    
    typedef io_object_t    io_connect_t;
    typedef io_object_t    io_enumerator_t;
    typedef io_object_t    io_iterator_t;
    typedef io_object_t    io_registry_entry_t;
    typedef io_object_t    io_service_t;
    
#define    IO_OBJECT_NULL    ((io_object_t) 0)
    
#endif /* MACH_KERNEL */
    
    // IOConnectMapMemory memoryTypes
    enum {
        kIODefaultMemoryType    = 0
    };
    
    enum {
        kIODefaultCache        = 0,
        kIOInhibitCache        = 1,
        kIOWriteThruCache        = 2,
        kIOCopybackCache        = 3,
        kIOWriteCombineCache    = 4,
        kIOCopybackInnerCache    = 5,
        kIOPostedWrite        = 6
    };
    
    // IOMemory mapping options
    enum {
        kIOMapAnywhere        = 0x00000001,
        
        kIOMapCacheMask        = 0x00000700,
        kIOMapCacheShift        = 8,
        kIOMapDefaultCache        = kIODefaultCache       << kIOMapCacheShift,
        kIOMapInhibitCache        = kIOInhibitCache       << kIOMapCacheShift,
        kIOMapWriteThruCache    = kIOWriteThruCache     << kIOMapCacheShift,
        kIOMapCopybackCache        = kIOCopybackCache      << kIOMapCacheShift,
        kIOMapWriteCombineCache    = kIOWriteCombineCache  << kIOMapCacheShift,
        kIOMapCopybackInnerCache    = kIOCopybackInnerCache << kIOMapCacheShift,
        kIOMapPostedWrite        = kIOPostedWrite    << kIOMapCacheShift,
        
        kIOMapUserOptionsMask    = 0x00000fff,
        
        kIOMapReadOnly        = 0x00001000,
        
        kIOMapStatic        = 0x01000000,
        kIOMapReference        = 0x02000000,
        kIOMapUnique        = 0x04000000,
        kIOMapPrefault        = 0x10000000,
        kIOMapOverwrite     = 0x20000000
    };
    
    /*! @enum Scale Factors
     @discussion Used when a scale_factor parameter is required to define a unit of time.
     @constant kNanosecondScale Scale factor for nanosecond based times.
     @constant kMicrosecondScale Scale factor for microsecond based times.
     @constant kMillisecondScale Scale factor for millisecond based times.
     @constant kTickScale Scale factor for the standard (100Hz) tick.
     @constant kSecondScale Scale factor for second based times. */
    
    enum {
        kNanosecondScale  = 1,
        kMicrosecondScale = 1000,
        kMillisecondScale = 1000 * 1000,
        kSecondScale      = 1000 * 1000 * 1000,
        kTickScale        = (kSecondScale / 100)
    };
    
    enum {
        kIOConnectMethodVarOutputSize = -3
    };
    
    /* compatibility types */
    
    
    typedef unsigned int IODeviceNumber;
    
    
#ifdef __cplusplus
}
#endif

#endif /* ! __IOKIT_IOTYPES_H */


#endif /* IOTypes_h */
