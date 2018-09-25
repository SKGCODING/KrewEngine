//
//  IOAccelTypes.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOAccelTypes_h
#define IOAccelTypes_h

#ifndef _IOACCEL_TYPES_H
#define _IOACCEL_TYPES_H

#include <IOKit/IOTypes.h>
#include <IOKit/IOKitKeys.h>

#define IOACCEL_TYPES_REV       12

#if !defined(OSTYPES_K64_REV) && !defined(MAC_OS_X_VERSION_10_6)
#define IOACCELTYPES_10_5       1
#endif

/* Integer rectangle in device coordinates */
typedef struct
{
    SInt16      x;
    SInt16      y;
    SInt16      w;
    SInt16      h;
} IOAccelBounds;

typedef struct
{
    SInt16      w;
    SInt16      h;
} IOAccelSize;

/* Surface information */

enum {
    kIOAccelVolatileSurface     = 0x00000001
};

typedef struct
{
#if IOACCELTYPES_10_5
    vm_address_t        address[4];
#else
    mach_vm_address_t   address[4];
#endif /* IOACCELTYPES_10_5 */
    UInt32              rowBytes;
    UInt32              width;
    UInt32              height;
    UInt32              pixelFormat;
    IOOptionBits        flags;
    IOFixed             colorTemperature[4];
    UInt32              typeDependent[4];
} IOAccelSurfaceInformation;

typedef struct
{
#if IOACCELTYPES_10_5
    long x, y, w, h;
    void *client_addr;
    unsigned long client_row_bytes;
#else
    SInt32                    x, y, w, h;
    mach_vm_address_t client_addr;
    UInt32            client_row_bytes;
#endif /* IOACCELTYPES_10_5 */
} IOAccelSurfaceReadData;

typedef struct {
    IOAccelBounds   buffer;
    IOAccelSize     source;
    UInt32          reserved[8];
} IOAccelSurfaceScaling;


typedef SInt32 IOAccelID;

enum {
    kIOAccelPrivateID           = 0x00000001
};


#endif /* _IOACCEL_TYPES_H */



#endif /* IOAccelTypes_h */
