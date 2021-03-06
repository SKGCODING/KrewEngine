//
//  IOEthernetStats.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOEthernetStats_h
#define IOEthernetStats_h

#ifndef _IOETHERNETSTATS_H
#define _IOETHERNETSTATS_H

/*! @header IOEthernetStats.h
 @discussion Ethernet statistics. */

//---------------------------------------------------------------------------
// Ethernet-like statistics group.

/*! @typedef IODot3StatsEntry
 @discussion Ethernet MIB statistics structure.
 @field alignmentErrors            dot3StatsAlignmentErrors.
 @field fcsErrors                  dot3StatsFCSErrors.
 @field singleCollisionFrames      dot3StatsSingleCollisionFrames.
 @field multipleCollisionFrames    dot3StatsMultipleCollisionFrames.
 @field sqeTestErrors              dot3StatsSQETestErrors.
 @field deferredTransmissions      dot3StatsDeferredTransmissions.
 @field lateCollisions             dot3StatsLateCollisions.
 @field excessiveCollisions        dot3StatsExcessiveCollisions.
 @field internalMacTransmitErrors  dot3StatsInternalMacTransmitErrors.
 @field carrierSenseErrors         dot3StatsCarrierSenseErrors.
 @field frameTooLongs              dot3StatsFrameTooLongs.
 @field internalMacReceiveErrors   dot3StatsInternalMacReceiveErrors.
 @field etherChipSet               dot3StatsEtherChipSet.
 @field missedFrames               dot3StatsMissedFrames (not in RFC1650).
 */

typedef struct {
    UInt32 alignmentErrors;
    UInt32 fcsErrors;
    UInt32 singleCollisionFrames;
    UInt32 multipleCollisionFrames;
    UInt32 sqeTestErrors;
    UInt32 deferredTransmissions;
    UInt32 lateCollisions;
    UInt32 excessiveCollisions;
    UInt32 internalMacTransmitErrors;
    UInt32 carrierSenseErrors;
    UInt32 frameTooLongs;
    UInt32 internalMacReceiveErrors;
    UInt32 etherChipSet;
    UInt32 missedFrames;
} IODot3StatsEntry;

//---------------------------------------------------------------------------
// Ethernet-like collision statistics group (optional).

/*! @typedef IODot3CollEntry
 @discussion Collision statistics structure.
 @field collFrequencies            dot3StatsCollFrequencies. */

typedef struct {
    UInt32 collFrequencies[16];
} IODot3CollEntry;

//---------------------------------------------------------------------------
// Receiver extra statistics group (not defined by RFC 1650).

/*! @typedef IODot3RxExtraEntry
 @discussion Extra receiver statistics not defined by RFC1650.
 @field overruns            receiver overruns.
 @field watchdogTimeouts    watchdog timer expirations.
 @field frameTooShorts      runt frames.
 @field collisionErrors     frames damages by late collision.
 @field phyErrors           PHY receive errors.
 @field timeouts            receiver timeouts.
 @field interrupts          receiver interrupts.
 @field resets              receiver resets.
 @field resourceErrors      receiver resource shortages.
 */

typedef struct {
    UInt32 overruns;
    UInt32 watchdogTimeouts;
    UInt32 frameTooShorts;
    UInt32 collisionErrors;
    UInt32 phyErrors;
    UInt32 timeouts;
    UInt32 interrupts;
    UInt32 resets;
    UInt32 resourceErrors;
    UInt32 reserved[4];
} IODot3RxExtraEntry;

//---------------------------------------------------------------------------
// Transmitter extra statistics group (not defined by RFC 1650).

/*! @typedef IODot3TxExtraEntry
 @discussion Extra transmitter statistics not defined by RFC1650.
 @field underruns           transmit underruns.
 @field jabbers             jabber events.
 @field phyErrors           PHY transmit errors.
 @field timeouts            transmitter timeouts.
 @field interrupts          transmitter interrupts.
 @field resets              transmitter resets.
 @field resourceErrors      transmitter resource shortages.
 */

typedef struct {
    UInt32 underruns;
    UInt32 jabbers;
    UInt32 phyErrors;
    UInt32 timeouts;
    UInt32 interrupts;
    UInt32 resets;
    UInt32 resourceErrors;
    UInt32 reserved[4];
} IODot3TxExtraEntry;

//---------------------------------------------------------------------------
// Aggregate Ethernet statistics.

/*! @typedef IOEthernetStats
 @discussion Aggregate Ethernet statistics structure.
 @field dot3StatsEntry      IODot3StatsEntry statistics group.
 @field dot3CollEntry       IODot3CollEntry statistics group.
 @field dot3RxExtraEntry    IODot3RxExtraEntry statistics group.
 @field dot3TxExtraEntry    IODot3TxExtraEntry statistics group.
 */

typedef struct {
    IODot3StatsEntry    dot3StatsEntry;
    IODot3CollEntry     dot3CollEntry;
    IODot3RxExtraEntry  dot3RxExtraEntry;
    IODot3TxExtraEntry  dot3TxExtraEntry;
} IOEthernetStats;

/*! @defined kIOEthernetStatsKey
 @discussion Defines the name of an IONetworkData that contains
 an IOEthernetStats. */

#define kIOEthernetStatsKey             "IOEthernetStatsKey"

#endif /* !_IOETHERNETSTATS_H */


#endif /* IOEthernetStats_h */
