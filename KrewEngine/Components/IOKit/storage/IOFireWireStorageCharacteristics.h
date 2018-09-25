//
//  IOFireWireStorageCharacteristics.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOFireWireStorageCharacteristics_h
#define IOFireWireStorageCharacteristics_h

#ifndef _IOKIT_IO_FIREWIRE_STORAGE_DEVICE_CHARACTERISTICS_H_
#define _IOKIT_IO_FIREWIRE_STORAGE_DEVICE_CHARACTERISTICS_H_

//
//    Bridge Characteristics - Characteristics defined for FireWire bridges.
//

/*!
 @defined kIOPropertyBridgeCharacteristicsKey
 @discussion This key is used to define Bridge Characteristics for a particular
 devices's bridge chipset. It has an associated dictionary which lists the
 bridge characteristics.
 
 Requirement: Optional
 
 Example:
 <pre>
 @textblock
 <dict>
 <key>Bridge Characteristics</key>
 <dict>
 <key>Bridge Vendor Name</key>
 <string>Oxford Semiconductor</string>
 <key>Bridge Model Name</key>
 <string>FW911</string>
 <key>Bridge Revision Level</key>
 <string>3.7</string>
 </dict>
 </dict>
 @/textblock
 </pre>
 */

#define kIOPropertyBridgeCharacteristicsKey        "Bridge Characteristics"
#define kIOPropertyBridgeVendorNameKey            "Bridge Vendor Name"
#define kIOPropertyBridgeModelNameKey            "Bridge Model Name"
#define kIOPropertyBridgeRevisionLevelKey        "Bridge Revision Level"

#endif    /* _IOKIT_IO_FIREWIRE_STORAGE_DEVICE_CHARACTERISTICS_H_ */


#endif /* IOFireWireStorageCharacteristics_h */
