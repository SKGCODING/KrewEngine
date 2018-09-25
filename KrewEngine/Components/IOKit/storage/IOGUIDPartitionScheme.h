//
//  IOGUIDPartitionScheme.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOGUIDPartitionScheme_h
#define IOGUIDPartitionScheme_h

#ifndef _IOGUIDPARTITIONSCHEME_H
#define _IOGUIDPARTITIONSCHEME_H

#include <IOKit/IOTypes.h>

/*
 * kIOGUIDPartitionSchemeClass is the name of the IOGUIDPartitionScheme class.
 */

#define kIOGUIDPartitionSchemeClass "IOGUIDPartitionScheme"

/*
 * GUID Partition Map Definitions
 */

#include <uuid/uuid.h>

#pragma pack(push, 1)                        /* (enable 8-bit struct packing) */

/* Partition map. */

struct gpt_hdr
{
    uint8_t  hdr_sig[8];
    uint32_t hdr_revision;
    uint32_t hdr_size;
    uint32_t hdr_crc_self;
    uint32_t __reserved;
    uint64_t hdr_lba_self;
    uint64_t hdr_lba_alt;
    uint64_t hdr_lba_start;
    uint64_t hdr_lba_end;
    uuid_t   hdr_uuid;
    uint64_t hdr_lba_table;
    uint32_t hdr_entries;
    uint32_t hdr_entsz;
    uint32_t hdr_crc_table;
    uint32_t padding;
};

/* Partition map entry. */

struct gpt_ent
{
    uuid_t   ent_type;
    uuid_t   ent_uuid;
    uint64_t ent_lba_start;
    uint64_t ent_lba_end;
    uint64_t ent_attr;
    uint16_t ent_name[36];
};

/* Partition map signature (hdr_sig). */

#define GPT_HDR_SIG "EFI PART"

/* Partition map version (hdr_revision). */

#define GPT_HDR_REVISION 0x00010000

/* Partition map entry flags (ent_attr). */

#define GPT_ENT_ATTR_PLATFORM 0x00000001

/*!
 * @defined kIOGUIDPartitionSchemeUUIDKey
 * @abstract
 * A property of IOGUIDPartitionSchemeGUID objects
 * @discussion
 * The kIOGUIDPartitionSchemeUUIDKey property has an OSString value and contains
 * a persistent GUID for the disk define in GPT header
 */
#define kIOGUIDPartitionSchemeUUIDKey    "UUID"

/*!
 * @defined kIOMediaGPTPartitionAttributesKey
 * @abstrat
 * A property of IOMedia objects for GPT partitions
 * @discussion
 * The kIOMediaGPTPartitionAttributesKey property has an OSNumber value of 64bit
 * GPT partition attributes
 */
#define kIOMediaGPTPartitionAttributesKey "GPT Attributes"

#pragma pack(pop)                        /* (reset to default struct packing) */

#endif /* !_IOGUIDPARTITIONSCHEME_H */


#endif /* IOGUIDPartitionScheme_h */
