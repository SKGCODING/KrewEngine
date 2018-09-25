//
//  IODVDMedia.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IODVDMedia_h
#define IODVDMedia_h

#ifndef _IODVDMEDIA_H
#define _IODVDMEDIA_H

/*!
 * @defined kIODVDMediaClass
 * @abstract
 * kIODVDMediaClass is the name of the IODVDMedia class.
 * @discussion
 * kIODVDMediaClass is the name of the IODVDMedia class.
 */

#define kIODVDMediaClass "IODVDMedia"

/*!
 * @defined kIODVDMediaTypeKey
 * @abstract
 * kIODVDMediaTypeKey is a property of IODVDMedia objects.  It has an OSString
 * value.
 * @discussion
 * The kIODVDMediaTypeKey property identifies the DVD media type (DVD-ROM,
 * DVD-R, DVD-RW, DVD+RW, DVD-RAM, etc).  See the kIODVDMediaType contants
 * for possible values.
 */

#define kIODVDMediaTypeKey "Type"

/*!
 * @defined kIODVDMediaTypeROM
 * The kIODVDMediaTypeKey constant for DVD-ROM media.
 */

#define kIODVDMediaTypeROM "DVD-ROM"

/*!
 * @defined kIODVDMediaTypeR
 * The kIODVDMediaTypeKey constant for DVD Recordable (DVD-R) media.
 */

#define kIODVDMediaTypeR "DVD-R"

/*!
 * @defined kIODVDMediaTypeRW
 * The kIODVDMediaTypeKey constant for DVD ReWritable (DVD-RW) media.
 */

#define kIODVDMediaTypeRW "DVD-RW"

/*!
 * @defined kIODVDMediaTypePlusR
 * The kIODVDMediaTypeKey constant for DVD "Plus" Recordable (DVD+R) media.
 */

#define kIODVDMediaTypePlusR "DVD+R"

/*!
 * @defined kIODVDMediaTypePlusRW
 * The kIODVDMediaTypeKey constant for DVD "Plus" ReWritable (DVD+RW) media.
 */

#define kIODVDMediaTypePlusRW "DVD+RW"

/*!
 * @defined kIODVDMediaTypeRAM
 * The kIODVDMediaTypeKey constant for DVD-RAM media.
 */

#define kIODVDMediaTypeRAM "DVD-RAM"

/*!
 * @defined kIODVDMediaTypeHDROM
 * The kIODVDMediaTypeKey constant for HD DVD-ROM media.
 */

#define kIODVDMediaTypeHDROM "HD DVD-ROM"

/*!
 * @defined kIODVDMediaTypeHDR
 * The kIODVDMediaTypeKey constant for HD DVD Recordable (HD DVD-R) media.
 */

#define kIODVDMediaTypeHDR "HD DVD-R"

/*!
 * @defined kIODVDMediaTypeHDRW
 * The kIODVDMediaTypeKey constant for HD DVD ReWritable (HD DVD-RW) media.
 */

#define kIODVDMediaTypeHDRW "HD DVD-RW"

/*!
 * @defined kIODVDMediaTypeHDRAM
 * The kIODVDMediaTypeKey constant for HD DVD-RAM media.
 */

#define kIODVDMediaTypeHDRAM "HD DVD-RAM"

#endif /* !_IODVDMEDIA_H */


#endif /* IODVDMedia_h */
