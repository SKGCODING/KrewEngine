//
//  IOMedia.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOMedia_h
#define IOMedia_h

#ifndef _IOMEDIA_H
#define _IOMEDIA_H

#include <IOKit/IOTypes.h>

/*!
 * @defined kIOMediaClass
 * @abstract
 * The name of the IOMedia class.
 */

#define kIOMediaClass "IOMedia"

/*!
 * @defined kIOMediaContentKey
 * @abstract
 * A property of IOMedia objects.
 * @discussion
 * The kIOMediaContentKey property has an OSString
 * value and contains a description of the media's
 * contents.  The description is the same as the hint at the time of the
 * object's creation, but it is possible that the description has been overridden
 * by a client (which has probed the media and identified the content correctly)
 * of the media object.  It is more accurate than the hint for this reason.  The
 * string is formed in the likeness of Apple's "Apple_HFS" strings or in the
 * likeness of a UUID.
 */

#define kIOMediaContentKey "Content"

/*!
 * @defined kIOMediaContentHintKey
 * @abstract
 * A property of IOMedia objects.
 * @discussion
 * The kIOMediaContentHintKey property has an OSString
 * value and contains a hint of the media's contents.
 * The hint is set at the time of the object's creation, should the creator have
 * a clue as to what it may contain.  The hint string does not change for the
 * lifetime of the object and is formed in the likeness of Apple's "Apple_HFS"
 * strings or in the likeness of a UUID.
 */

#define kIOMediaContentHintKey "Content Hint"

/*!
 * @defined kIOMediaEjectableKey
 * @abstract
 * A property of IOMedia objects.
 * @discussion
 * The kIOMediaEjectableKey property has an OSBoolean
 * value and describes whether the media is ejectable
 * from the drive mechanism under software control.  Implies IOMediaRemovable
 * is also true.
 */

#define kIOMediaEjectableKey "Ejectable"

/*!
 * @defined kIOMediaLeafKey
 * @abstract
 * A property of IOMedia objects.
 * @discussion
 * The kIOMediaLeafKey property has an OSBoolean value and describes whether the media is a leaf, that is,
 * it is the deepest media object in this branch of the I/O Registry.
 */

#define kIOMediaLeafKey "Leaf"

/*!
 * @defined kIOMediaOpenKey
 * @abstract
 * A property of IOMedia objects.
 * @discussion
 * The kIOMediaOpenKey property has an OSBoolean value and describes whether
 * a client presently has an open on this media.
 */

#define kIOMediaOpenKey "Open"

/*!
 * @defined kIOMediaPreferredBlockSizeKey
 * @abstract
 * A property of IOMedia objects.
 * @discussion
 * The kIOMediaPreferredBlockSizeKey property has an
 * OSNumber value and describes the media's natural
 * block size in bytes.  This information is useful to clients that want to
 * optimize access to the media.
 */

#define kIOMediaPreferredBlockSizeKey "Preferred Block Size"

/*!
 * @defined kIOMediaRemovableKey
 * @abstract
 * A property of IOMedia objects.
 * @discussion
 * The kIOMediaRemovableKey property has an OSBoolean
 * value and describes whether the media is removable
 * from the drive mechanism.
 */

#define kIOMediaRemovableKey "Removable"

/*!
 * @defined kIOMediaSizeKey
 * @abstract
 * A property of IOMedia objects.
 * @discussion
 * The kIOMediaSizeKey property has an OSNumber value and describes the total length of the media in
 * bytes.
 */

#define kIOMediaSizeKey "Size"

/*!
 * @defined kIOMediaUUIDKey
 * @abstract
 * A property of IOMedia objects.
 * @discussion
 * The kIOMediaUUIDKey property has an OSString value and contains a persistent
 * Universal Unique Identifier for the media if such an identifier is available.
 */

#define kIOMediaUUIDKey "UUID"

/*!
 * @defined kIOMediaWholeKey
 * @abstract
 * A property of IOMedia objects.
 * @discussion
 * The kIOMediaWholeKey property has an OSBoolean
 * value and describes whether the media is whole, that is,
 * it represents the whole disk (the physical disk, or a virtual replica
 * thereof).
 */

#define kIOMediaWholeKey "Whole"

/*!
 * @defined kIOMediaWritableKey
 * @abstract
 * A property of IOMedia objects.
 * @discussion
 * The kIOMediaWritableKey property has an OSBoolean
 * value and describes whether the media is writable.
 */

#define kIOMediaWritableKey "Writable"

/*!
 * @defined kIOMediaContentMaskKey
 * @abstract
 * A property of IOMedia clients.
 * @discussion
 * The kIOMediaContentMaskKey property has an OSString
 * value and must exist in all IOMedia clients that
 * drive new content (that is, produce new media objects).  When the client
 * matches against the provider media, the value of the client's
 * kIOMediaContentMaskKey property is used to replace the provider's
 * kIOMediaContentKey property.
 */

#define kIOMediaContentMaskKey "Content Mask"

/*!
 * @defined kIOMediaIconKey
 * @abstract
 * A property of any object in the media stack.
 * @discussion
 * kIOMediaIconKey is a property of any object in the media stack that wishes
 * to override the default icon shown for the media objects in the stack.  It
 * is usually defined in a provider object below the media object.  It has an
 * OSDictionary value, with properties identical to the kIOIconKey definition,
 * that is, kCFBundleIdentifierKey and kIOBundleResourceFileKey.
 */

#define kIOMediaIconKey "IOMediaIcon"

/*!
 * @enum IOMediaAttributeMask
 * @discussion
 * The IOMediaAttributeMask bit mask describes various attributes of
 * the media object, such as its ejectability and its removability.
 * @constant kIOMediaAttributeEjectableMask
 * Indicates whether the media is ejectable from the drive mechanism
 * under software control.  Implies kIOMediaAttributeRemovableMask.
 * @constant kIOMediaAttributeRemovableMask
 * Indicates whether the media is removable from the drive mechanism.
 */

enum
{
    kIOMediaAttributeEjectableMask = 0x00000001,
    kIOMediaAttributeRemovableMask = 0x00000002,
    kIOMediaAttributeReservedMask  = 0xFFFFFFFC
};

typedef UInt32 IOMediaAttributeMask;

#endif /* !_IOMEDIA_H */


#endif /* IOMedia_h */
