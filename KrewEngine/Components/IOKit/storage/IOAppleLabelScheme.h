//
//  IOAppleLabelScheme.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOAppleLabelScheme_h
#define IOAppleLabelScheme_h

#ifndef _IOAPPLELABELSCHEME_H
#define _IOAPPLELABELSCHEME_H

#include <IOKit/IOTypes.h>

/*
 * kIOAppleLabelSchemeClass is the name of the IOAppleLabelScheme class.
 */

#define kIOAppleLabelSchemeClass "IOAppleLabelScheme"

/*
 * Apple Label Scheme Definitions
 */

#pragma pack(push, 1)                        /* (enable 8-bit struct packing) */

/* Label scheme. */

struct applelabel
{
    uint8_t  al_boot0[416];               /* (reserved for boot area)         */
    uint16_t al_magic;                    /* (the magic number)               */
    uint16_t al_type;                     /* (label type)                     */
    uint32_t al_flags;                    /* (generic flags)                  */
    uint64_t al_offset;                   /* (offset of property area, bytes) */
    uint32_t al_size;                     /* (size of property area, bytes)   */
    uint32_t al_checksum;                 /* (checksum of property area)      */
    uint8_t  al_boot1[72];                /* (reserved for boot area)         */
};

/* Label scheme signature (al_magic). */

#define AL_MAGIC 0x414C

/* Label scheme version (al_type). */

#define AL_TYPE_DEFAULT 0x0000

/* Label scheme flags (al_flags). */

#define AL_FLAG_DEFAULT 0x00000000

#pragma pack(pop)                        /* (reset to default struct packing) */

#endif /* !_IOAPPLELABELSCHEME_H */


#endif /* IOAppleLabelScheme_h */
