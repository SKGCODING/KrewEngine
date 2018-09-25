//
//  IOFDiskPartitionScheme.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOFDiskPartitionScheme_h
#define IOFDiskPartitionScheme_h

#ifndef _IOFDISKPARTITIONSCHEME_H
#define _IOFDISKPARTITIONSCHEME_H

#include <IOKit/IOTypes.h>

/*
 * kIOFDiskPartitionSchemeClass is the name of the IOFDiskPartitionScheme class.
 */

#define kIOFDiskPartitionSchemeClass "IOFDiskPartitionScheme"

/*
 * FDisk Partition Map Definitions
 */

#pragma pack(push, 1)                        /* (enable 8-bit struct packing) */

/* Structure constants. */

#define DISK_BLK0SZ sizeof(struct disk_blk0)    /* (size of partition map)    */
#define DISK_BOOTSZ 446                         /* (size of boot code in map) */
#define DISK_NPART  4                           /* (number of entries in map) */

/* Partition map entry. */

struct fdisk_part
{
    UInt8   bootid;    /* (is active boot partition?)                         */
    UInt8   beghead;   /* (beginning head)                                    */
    UInt8   begsect;   /* (beginning sector; beginning cylinder, high 2 bits) */
    UInt8   begcyl;    /* (beginning cylinder, low 8 bits)                    */
    UInt8   systid;    /* (type)                                              */
    UInt8   endhead;   /* (ending head)                                       */
    UInt8   endsect;   /* (ending sector; ending cylinder, high 2 bits)       */
    UInt8   endcyl;    /* (ending cylinder, low 8 bits)                       */
    UInt32  relsect;   /* (block start)                                       */
    UInt32  numsect;   /* (block count)                                       */
};

/* Partition map, as found in block zero of the disk (or extended partition). */

struct disk_blk0
{
    UInt8             bootcode[DISK_BOOTSZ];    /* (boot code)                */
    struct fdisk_part parts[DISK_NPART];        /* (partition entries)        */
    UInt16            signature;                /* (unique signature for map) */
};

/* Partition map signature (signature). */

#define DISK_SIGNATURE 0xAA55

/* Partition map entry types (systid). */

#define FDISK_PARTITION_TYPE_01 "DOS_FAT_12"
#define FDISK_PARTITION_TYPE_04 "DOS_FAT_16_S"
#define FDISK_PARTITION_TYPE_06 "DOS_FAT_16"
#define FDISK_PARTITION_TYPE_07 "Windows_NTFS"
#define FDISK_PARTITION_TYPE_0B "DOS_FAT_32"
#define FDISK_PARTITION_TYPE_0C "Windows_FAT_32"
#define FDISK_PARTITION_TYPE_0E "Windows_FAT_16"
#define FDISK_PARTITION_TYPE_42 "Windows_LDM"
#define FDISK_PARTITION_TYPE_82 "Linux_Swap"
#define FDISK_PARTITION_TYPE_83 "Linux"
#define FDISK_PARTITION_TYPE_8E "Linux_LVM"
#define FDISK_PARTITION_TYPE_A5 "FreeBSD"
#define FDISK_PARTITION_TYPE_A6 "OpenBSD"
#define FDISK_PARTITION_TYPE_A7 "Apple_Rhapsody_UFS"
#define FDISK_PARTITION_TYPE_A8 "Apple_UFS"
#define FDISK_PARTITION_TYPE_A9 "NetBSD"
#define FDISK_PARTITION_TYPE_AB "Apple_Boot"
#define FDISK_PARTITION_TYPE_AE "Apple_Encrypted"
#define FDISK_PARTITION_TYPE_AF "Apple_HFS"
#define FDISK_PARTITION_TYPE_FD "Linux_RAID"

#pragma pack(pop)                        /* (reset to default struct packing) */

#endif /* !_IOFDISKPARTITIONSCHEME_H */


#endif /* IOFDiskPartitionScheme_h */
