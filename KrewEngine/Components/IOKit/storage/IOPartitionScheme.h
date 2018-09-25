//
//  IOPartitionScheme.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOPartitionScheme_h
#define IOPartitionScheme_h

#ifndef _IOPARTITIONSCHEME_H
#define _IOPARTITIONSCHEME_H

/*!
 * @defined kIOPartitionSchemeClass
 * @abstract
 * The name of the IOPartitionScheme class.
 * @discussion
 * kIOPartitionSchemeClass is the name of the IOPartitionScheme class.
 */

#define kIOPartitionSchemeClass "IOPartitionScheme"

/*!
 * @defined kIOMediaBaseKey
 * @abstract
 * A property of IOMedia objects.
 * @discussion
 * The kIOMediaBaseKey property has an OSNumber value and is placed into an
 * IOMedia instance created via the partition scheme. It describes the byte
 * offset of the partition relative to the provider media.
 */

#define kIOMediaBaseKey "Base"

/*!
 * @defined kIOMediaLiveKey
 * @abstract
 * A property of IOMedia objects.
 * @discussion
 * The kIOMediaLiveKey property has an OSBoolean
 * value and is placed into an IOMedia instance
 * created via the partition scheme.  It describes whether the
 * partition is live, that is, it is up-to-date with respect
 * to the on-disk partition table.
 */

#define kIOMediaLiveKey "Live"

/*!
 * @defined kIOMediaPartitionIDKey
 * @abstract
 * A property of IOMedia objects.
 * @discussion
 * The kIOMediaPartitionIDKey property has an OSNumber
 * value and is placed into an IOMedia instance
 * created via the partition scheme.  It is an ID that differentiates one
 * partition from the other (within a given scheme).  It is typically an index
 * into the on-disk partition table.
 */

#define kIOMediaPartitionIDKey "Partition ID"

#endif /* !_IOPARTITIONSCHEME_H */


#endif /* IOPartitionScheme_h */
