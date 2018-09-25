//
//  IOCDPartitionScheme.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOCDPartitionScheme_h
#define IOCDPartitionScheme_h

#ifndef _IOCDPARTITIONSCHEME_H
#define _IOCDPARTITIONSCHEME_H

#include <IOKit/storage/IOCDTypes.h>

/*
 * @defined kIOCDPartitionSchemeClass
 * @abstract
 * kIOCDPartitionSchemeClass is the name of the IOCDPartitionScheme class.
 * @discussion
 * kIOCDPartitionSchemeClass is the name of the IOCDPartitionScheme class.
 */

#define kIOCDPartitionSchemeClass "IOCDPartitionScheme"

/*
 * @defined kIOMediaSessionIDKey
 * @abstract
 * kIOMediaSessionIDKey is property of IOMedia objects.  It has an OSNumber
 * value.
 * @discussion
 * The kIOMediaSessionIDKey property is placed into each IOMedia instance
 * created by the CD partition scheme.  It identifies the session number
 * the track was recorded on.
 */

#define kIOMediaSessionIDKey "Session ID"

#endif /* !_IOCDPARTITIONSCHEME_H */


#endif /* IOCDPartitionScheme_h */
