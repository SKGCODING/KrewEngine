//
//  IOBlockStorageDriver.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOBlockStorageDriver_h
#define IOBlockStorageDriver_h

#ifndef _IOBLOCKSTORAGEDRIVER_H
#define _IOBLOCKSTORAGEDRIVER_H

#include <IOKit/IOTypes.h>

/*!
 * @defined kIOBlockStorageDriverClass
 * @abstract
 * The name of the IOBlockStorageDriver class.
 */

#define kIOBlockStorageDriverClass "IOBlockStorageDriver"

/*!
 * @defined kIOBlockStorageDriverStatisticsKey
 * @abstract
 * Holds a table of numeric values describing the driver's
 * operating statistics.
 * @discussion
 * This property holds a table of numeric values describing the driver's
 * operating statistics.  The table is an OSDictionary, where each entry
 * describes one given statistic.
 */

#define kIOBlockStorageDriverStatisticsKey "Statistics"

/*!
 * @defined kIOBlockStorageDriverStatisticsBytesReadKey
 * @abstract
 * Describes the number of bytes read since the block storage
 * driver was instantiated.
 * @discussion
 * This property describes the number of bytes read since the block storage
 * driver was instantiated.  It is one of the statistic entries listed under
 * the top-level kIOBlockStorageDriverStatisticsKey property table.  It has
 * an OSNumber value.
 */

#define kIOBlockStorageDriverStatisticsBytesReadKey "Bytes (Read)"

/*!
 * @defined kIOBlockStorageDriverStatisticsBytesWrittenKey
 * @abstract
 * Describes the number of bytes written since the block storage
 * driver was instantiated.
 * @discussion
 * This property describes the number of bytes written since the block storage
 * driver was instantiated.  It is one of the statistic entries listed under the
 * top-level kIOBlockStorageDriverStatisticsKey property table.  It has an
 * OSNumber value.
 */

#define kIOBlockStorageDriverStatisticsBytesWrittenKey "Bytes (Write)"

/*!
 * @defined kIOBlockStorageDriverStatisticsReadErrorsKey
 * @abstract
 * Describes the number of read errors encountered since the block
 * storage driver was instantiated.
 * @discussion
 * This property describes the number of read errors encountered since the block
 * storage driver was instantiated.  It is one of the statistic entries listed
 * under the top-level kIOBlockStorageDriverStatisticsKey property table.  It
 * has an OSNumber value.
 */

#define kIOBlockStorageDriverStatisticsReadErrorsKey "Errors (Read)"

/*!
 * @defined kIOBlockStorageDriverStatisticsWriteErrorsKey
 * @abstract
 * Describes the number of write errors encountered since the
 * block storage driver was instantiated.
 * @discussion
 * This property describes the number of write errors encountered since the
 * block storage driver was instantiated.  It is one of the statistic entries
 * listed under the top-level kIOBlockStorageDriverStatisticsKey property table.
 * It has an OSNumber value.
 */

#define kIOBlockStorageDriverStatisticsWriteErrorsKey "Errors (Write)"

/*!
 * @defined kIOBlockStorageDriverStatisticsLatentReadTimeKey
 * @abstract
 * Describes the number of nanoseconds of latency during reads
 * since the block storage driver was instantiated.
 * @discussion
 * This property describes the number of nanoseconds of latency during reads
 * since the block storage driver was instantiated.  It is one of the statistic
 * entries listed under the top-level kIOBlockStorageDriverStatisticsKey
 * property table.  It has an OSNumber value.
 */

#define kIOBlockStorageDriverStatisticsLatentReadTimeKey "Latency Time (Read)"

/*!
 * @defined kIOBlockStorageDriverStatisticsLatentWriteTimeKey
 * @abstract
 * Describes the number of nanoseconds of latency during writes
 * since the block storage driver was instantiated.
 * @discussion
 * This property describes the number of nanoseconds of latency during writes
 * since the block storage driver was instantiated.  It is one of the statistic
 * entries listed under the top-level kIOBlockStorageDriverStatisticsKey
 * property table.  It has an OSNumber value.
 */

#define kIOBlockStorageDriverStatisticsLatentWriteTimeKey "Latency Time (Write)"

/*!
 * @defined kIOBlockStorageDriverStatisticsReadsKey
 * @abstract
 * Describes the number of read operations processed since the
 * block storage driver was instantiated.
 * @discussion
 * This property describes the number of read operations processed since the
 * block storage driver was instantiated.  It is one of the statistic entries
 * listed under the top-level kIOBlockStorageDriverStatisticsKey property table.
 * It has an OSNumber value.
 */

#define kIOBlockStorageDriverStatisticsReadsKey "Operations (Read)"

/*!
 * @defined kIOBlockStorageDriverStatisticsWritesKey
 * @abstract
 * Describes the number of write operations processed since the
 * block storage driver was instantiated.
 * @discussion
 * This property describes the number of write operations processed since the
 * block storage driver was instantiated.  It is one of the statistic entries
 * listed under the top-level kIOBlockStorageDriverStatisticsKey property table.
 * It has an OSNumber value.
 */

#define kIOBlockStorageDriverStatisticsWritesKey "Operations (Write)"

/*!
 * @defined kIOBlockStorageDriverStatisticsReadRetriesKey
 * @abstract
 * Describes the number of read retries required since the block
 * storage driver was instantiated.
 * @discussion
 * This property describes the number of read retries required since the block
 * storage driver was instantiated.  It is one of the statistic entries listed
 * under the top-level kIOBlockStorageDriverStatisticsKey property table.  It
 * has an OSNumber value.
 */

#define kIOBlockStorageDriverStatisticsReadRetriesKey "Retries (Read)"

/*!
 * @defined kIOBlockStorageDriverStatisticsWriteRetriesKey
 * @abstract
 * Describes the number of write retries required since the block
 * storage driver was instantiated.
 * @discussion
 * This property describes the number of write retries required since the block
 * storage driver was instantiated.  It is one of the statistic entries listed
 * under the top-level kIOBlockStorageDriverStatisticsKey property table.  It
 * has an OSNumber value.
 */

#define kIOBlockStorageDriverStatisticsWriteRetriesKey "Retries (Write)"

/*!
 * @defined kIOBlockStorageDriverStatisticsTotalReadTimeKey
 * @abstract
 * Describes the number of nanoseconds spent performing reads
 * since the block storage driver was instantiated.
 * @discussion
 * This property describes the number of nanoseconds spent performing reads
 * since the block storage driver was instantiated.  It is one of the statistic
 * entries listed under the top-level kIOBlockStorageDriverStatisticsKey
 * property table.  It has an OSNumber value.
 */

#define kIOBlockStorageDriverStatisticsTotalReadTimeKey "Total Time (Read)"

/*!
 * @defined kIOBlockStorageDriverStatisticsTotalWriteTimeKey
 * @abstract
 * Describes the number of nanoseconds spent performing writes
 * since the block storage driver was instantiated.
 * @discussion
 * This property describes the number of nanoseconds spent performing writes
 * since the block storage driver was instantiated.  It is one of the statistic
 * entries listed under the top-level kIOBlockStorageDriverStatisticsKey
 * property table.  It has an OSNumber value.
 */

#define kIOBlockStorageDriverStatisticsTotalWriteTimeKey "Total Time (Write)"

/*!
 * @enum IOMediaState
 * @abstract
 * The different states that getMediaState() can report.
 * @constant kIOMediaStateOffline
 * Media is not available.
 * @constant kIOMediaStateOnline
 * Media is available and ready for operations.
 * @constant kIOMediaStateBusy
 * Media is available, but not ready for operations.
 */

enum
{
    kIOMediaStateOffline = 0,
    kIOMediaStateOnline  = 1,
    kIOMediaStateBusy    = 2
};

typedef UInt32 IOMediaState;

#endif /* !_IOBLOCKSTORAGEDRIVER_H */


#endif /* IOBlockStorageDriver_h */
