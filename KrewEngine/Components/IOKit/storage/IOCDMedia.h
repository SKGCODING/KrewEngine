//
//  IOCDMedia.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOCDMedia_h
#define IOCDMedia_h

#ifndef _IOCDMEDIA_H
#define _IOCDMEDIA_H

/*!
 * @defined kIOCDMediaClass
 * @abstract
 * kIOCDMediaClass is the name of the IOCDMedia class.
 * @discussion
 * kIOCDMediaClass is the name of the IOCDMedia class.
 */

#define kIOCDMediaClass "IOCDMedia"

/*!
 * @defined kIOCDMediaTOCKey
 * @abstract
 * kIOCDMediaTOCKey is a property of IOCDMedia objects.  It has an OSData value
 * and a CDTOC structure.
 * @discussion
 * The kIOCDMediaTOCKey property contains the CD's full table of contents,
 * formatted as a CDTOC structure.  The CDTOC structure is same as what is
 * returned by a READ TOC command, format 0x02.  All fields in the TOC are
 * guaranteed to be binary-encoded (no BCD-encoded numbers are ever passed).
 */

#define kIOCDMediaTOCKey "TOC"

/*!
 * @defined kIOCDMediaTypeKey
 * @abstract
 * kIOCDMediaTypeKey is a property of IOCDMedia objects.  It has an OSString
 * value.
 * @discussion
 * The kIOCDMediaTypeKey property identifies the CD media type (CD-ROM, CD-R,
 * CD-RW, etc).  See the kIOCDMediaType contants for possible values.
 */

#define kIOCDMediaTypeKey "Type"

/*!
 * @defined kIOCDMediaTypeROM
 * The kIOCDMediaTypeKey constant for CD-ROM media (inclusive of the CD-I,
 * CD-ROM XA, and CD Audio standards, and mixed mode combinations thereof).
 */

#define kIOCDMediaTypeROM "CD-ROM"

/*!
 * @defined kIOCDMediaTypeR
 * The kIOCDMediaTypeKey constant for CD Recordable (CD-R) media.
 */

#define kIOCDMediaTypeR "CD-R"

/*!
 * @defined kIOCDMediaTypeRW
 * The kIOCDMediaTypeKey constant for CD ReWritable (CD-RW) media.
 */

#define kIOCDMediaTypeRW "CD-RW"

#endif /* !_IOCDMEDIA_H */


#endif /* IOCDMedia_h */
