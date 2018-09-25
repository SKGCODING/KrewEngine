//
//  IOEthernetController.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOEthernetController_h
#define IOEthernetController_h

#ifndef _IOETHERNETCONTROLLER_H
#define _IOETHERNETCONTROLLER_H

#include <IOKit/network/IONetworkController.h>

/*! @defined kIOEthernetControllerClass
 @abstract kIOEthernetControllerClass is the name of the
 IOEthernetController class. */

#define kIOEthernetControllerClass        "IOEthernetController"

/*! @defined kIOEthernetAddressSize
 @abstract The number of bytes in an Ethernet hardware address. */

#define kIOEthernetAddressSize            6

/*! @defined kIOEthernetMaxPacketSize
 @abstract The maximum size of an Ethernet packet, including
 the FCS bytes. */

#define kIOEthernetMaxPacketSize          1518

/*! @defined kIOEthernetMinPacketSize
 @abstract The minimum size of an Ethernet packet, including
 the FCS bytes. */

#define kIOEthernetMinPacketSize          64

/*! @defined kIOEthernetCRCSize
 @abstract The size in bytes of the 32-bit CRC value appended
 to the end of each Ethernet frame. */

#define kIOEthernetCRCSize                4

/*! @defined kIOEthernetWakeOnLANFilterGroup
 @abstract kIOEthernetWakeOnLANFilterGroup describes the name assigned
 to the Ethernet Wake-On-LAN filter group. This group represents
 wake filters that are supported by the controller. */

#define kIOEthernetWakeOnLANFilterGroup   "IOEthernetWakeOnLANFilterGroup"

/*! @defined kIOEthernetDisabledWakeOnLANFilterGroup
 @abstract kIOEthernetDisabledWakeOnLANFilterGroup describes the name
 assigned to the disabled Ethernet Wake-On-LAN filter group. This
 group represents wake filters that are currently disabled.
 Membership in this group is dynamic. */

#define kIOEthernetDisabledWakeOnLANFilterGroup \
"IOEthernetDisabledWakeOnLANFilterGroup"

/*! @enum Wake On LAN Filters
 @abstract All filters in the Wake-on-LAN filter group.
 @discussion Each filter listed will respond to a network event that
 will trigger a system wake-up.
 @constant kIOEthernetWakeOnMagicPacket Reception of a Magic Packet.
 @constant kIOEthernetWakeOnPacketAddressMatch Reception of a packet
 which passes through any of the address filtering mechanisms based
 on its destination Ethernet address. This may include unicast,
 broadcast, or multicast addresses depending on the current state
 and setting of the corresponding packet filters. */

enum {
    kIOEthernetWakeOnMagicPacket         = 0x00000001,
    kIOEthernetWakeOnPacketAddressMatch  = 0x00000002
};

#endif /* !_IOETHERNETCONTROLLER_H */


#endif /* IOEthernetController_h */
