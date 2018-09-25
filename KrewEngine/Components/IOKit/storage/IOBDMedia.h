//
//  IOBDMedia.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOBDMedia_h
#define IOBDMedia_h

#ifndef _IOBDMEDIA_H
#define _IOBDMEDIA_H

/*!
 * @defined kIOBDMediaClass
 * @abstract
 * kIOBDMediaClass is the name of the IOBDMedia class.
 * @discussion
 * kIOBDMediaClass is the name of the IOBDMedia class.
 */

#define kIOBDMediaClass "IOBDMedia"

/*!
 * @defined kIOBDMediaTypeKey
 * @abstract
 * kIOBDMediaTypeKey is a property of IOBDMedia objects.  It has an OSString
 * value.
 * @discussion
 * The kIOBDMediaTypeKey property identifies the BD media type (BD-ROM, BD-R,
 * BD-RE, etc).  See the kIOBDMediaType contants for possible values.
 */

#define kIOBDMediaTypeKey "Type"

/*!
 * @defined kIOBDMediaTypeROM
 * The kIOBDMediaTypeKey constant for BD-ROM media.
 */

#define kIOBDMediaTypeROM "BD-ROM"

/*!
 * @defined kIOBDMediaTypeR
 * The kIOBDMediaTypeKey constant for BD-R media.
 */

#define kIOBDMediaTypeR "BD-R"

/*!
 * @defined kIOBDMediaTypeRE
 * The kIOBDMediaTypeKey constant for BD-RE media.
 */

#define kIOBDMediaTypeRE "BD-RE"

#endif /* !_IOBDMEDIA_H */


#endif /* IOBDMedia_h */
