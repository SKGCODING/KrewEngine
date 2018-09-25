//
//  IOEthernetInterface.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOEthernetInterface_h
#define IOEthernetInterface_h

#ifndef _IOETHERNETINTERFACE_H
#define _IOETHERNETINTERFACE_H

/*! @defined kIOEthernetInterfaceClass
 @abstract The name of the
 IOEthernetInterface class.
 */

#define kIOEthernetInterfaceClass     "IOEthernetInterface"

/*! @defined kIOActivePacketFilters
 @abstract A property of IOEthernetInterface objects.
 @discussion The kIOActivePacketFilters property has an OSDictionary value that describes the current
 set of packet filters that have been successfully activated. Each
 entry in the dictionary is a key/value pair consisting of the filter
 group name, and an OSNumber describing the set of active filters for
 that group. Entries in this dictionary will mirror those in
 kIORequiredPacketFilters if the controller has reported success for
 all filter change requests from the IOEthernetInterface object.
 */

#define kIOActivePacketFilters        "IOActivePacketFilters"

/*! @defined kIORequiredPacketFilters
 @abstract A property of IOEthernetInterface objects.
 @discussion The kIORequiredPacketFilters property has an OSDictionary value that describes the current
 set of required packet filters. Each entry in the dictionary is a
 key/value pair consisting of the filter group name, and an OSNumber
 describing the set of required filters for that group.
 */

#define kIORequiredPacketFilters      "IORequiredPacketFilters"

/*! @defined kIOMulticastAddressList
 @abstract A property of IOEthernetInterface objects.
 @discussion The kIOMulticastAddressList property is an OSData object that describes the
 list of multicast addresses that are being used by the
 controller to match against the destination address of an
 incoming frame.
 */

#define kIOMulticastAddressList       "IOMulticastAddressList"
#define kIOMulticastFilterData        kIOMulticastAddressList

#endif /* !_IOETHERNETINTERFACE_H */


#endif /* IOEthernetInterface_h */
