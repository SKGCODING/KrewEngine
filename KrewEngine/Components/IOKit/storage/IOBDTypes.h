//
//  IOBDTypes.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOBDTypes_h
#define IOBDTypes_h

#ifndef    _BDTYPES_H
#define    _BDTYPES_H

#include <IOKit/IOTypes.h>

#pragma pack(push, 1)                        /* (enable 8-bit struct packing) */

/*
 * Media Types
 */

enum
{
    kBDMediaTypeUnknown   = 0x0300,
    kBDMediaTypeROM       = 0x0302, /* BD-ROM */
    kBDMediaTypeRE        = 0x0303, /* BD-RE  */
    kBDMediaTypeR         = 0x0304, /* BD-R   */
    
    kBDMediaTypeMin       = 0x0300,
    kBDMediaTypeMax       = 0x03FF
};

typedef UInt32 BDMediaType;

/*
 * Media Speed (kB/s)
 */

#define kBDSpeedMin 0x1126
#define kBDSpeedMax 0xFFFF

/*
 * MMC Formats
 */

// Read Disc Information Format
struct BDDiscInfo
{
    UInt16 dataLength;
#ifdef __LITTLE_ENDIAN__
    UInt8  discStatus:2;
    UInt8  stateOfLastSession:2;
    UInt8  erasable:1;
    UInt8  dataType:3;
#else /* !__LITTLE_ENDIAN__ */
    UInt8  dataType:3;
    UInt8  erasable:1;
    UInt8  stateOfLastSession:2;
    UInt8  discStatus:2;
#endif /* !__LITTLE_ENDIAN__ */
    UInt8  reserved2;
    UInt8  numberOfSessionsLSB;
    UInt8  firstTrackNumberInLastSessionLSB;
    UInt8  lastTrackNumberInLastSessionLSB;
    UInt8  reserved4[2];
    UInt8  numberOfSessionsMSB;
    UInt8  firstTrackNumberInLastSessionMSB;
    UInt8  lastTrackNumberInLastSessionMSB;
    UInt8  reserved6[22];
};
typedef struct BDDiscInfo BDDiscInfo;

// Read Track Information Format
struct BDTrackInfo
{
    UInt16 dataLength;
    UInt8  trackNumberLSB;
    UInt8  sessionNumberLSB;
    UInt8  reserved;
#ifdef __LITTLE_ENDIAN__
    UInt8  reserved2:5;
    UInt8  damage:1;
    UInt8  reserved3:2;
    
    UInt8  reserved4:6;
    UInt8  blank:1;
    UInt8  reservedTrack:1;
    
    UInt8  nextWritableAddressValid:1;
    UInt8  lastRecordedAddressValid:1;
    UInt8  reserved5:6;
#else /* !__LITTLE_ENDIAN__ */
    UInt8  reserved3:2;
    UInt8  damage:1;
    UInt8  reserved2:5;
    
    UInt8  reservedTrack:1;
    UInt8  blank:1;
    UInt8  reserved4:6;
    
    UInt8  reserved5:6;
    UInt8  lastRecordedAddressValid:1;
    UInt8  nextWritableAddressValid:1;
#endif /* !__LITTLE_ENDIAN__ */
    UInt32 trackStartAddress;
    UInt32 nextWritableAddress;
    UInt32 freeBlocks;
    UInt32 clusterSize;
    UInt32 trackSize;
    UInt32 lastRecordedAddress;
    UInt8  trackNumberMSB;
    UInt8  sessionNumberMSB;
    UInt8  reserved6;
    UInt8  reserved7;
};
typedef struct BDTrackInfo BDTrackInfo;

#pragma pack(pop)                        /* (reset to default struct packing) */

#endif /* _BDTYPES_H */


#endif /* IOBDTypes_h */
