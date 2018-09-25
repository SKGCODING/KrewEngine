//
//  IOKitKeys.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOKitKeys_h
#define IOKitKeys_h

#ifndef _IOKIT_IOKITKEYS_H
#define _IOKIT_IOKITKEYS_H

// properties found in the registry root
#define kIOKitBuildVersionKey        "IOKitBuildVersion"
#define kIOKitDiagnosticsKey        "IOKitDiagnostics"
// a dictionary keyed by plane name
#define kIORegistryPlanesKey        "IORegistryPlanes"
#define kIOCatalogueKey            "IOCatalogue"

// registry plane names
#define kIOServicePlane            "IOService"
#define kIOPowerPlane            "IOPower"
#define kIODeviceTreePlane        "IODeviceTree"
#define kIOAudioPlane            "IOAudio"
#define kIOFireWirePlane        "IOFireWire"
#define kIOUSBPlane            "IOUSB"

// registry ID number
#define kIORegistryEntryIDKey        "IORegistryEntryID"
// property name to get array of property names
#define kIORegistryEntryPropertyKeysKey "IORegistryEntryPropertyKeys"

// IOService class name
#define kIOServiceClass            "IOService"

// IOResources class name
#define kIOResourcesClass        "IOResources"

// IOService driver probing property names
#define kIOClassKey            "IOClass"
#define kIOProbeScoreKey        "IOProbeScore"
#define kIOKitDebugKey            "IOKitDebug"

// IOService matching property names
#define kIOProviderClassKey        "IOProviderClass"
#define kIONameMatchKey            "IONameMatch"
#define kIOPropertyMatchKey        "IOPropertyMatch"
#define kIOPropertyExistsMatchKey    "IOPropertyExistsMatch"
#define kIOPathMatchKey            "IOPathMatch"
#define kIOLocationMatchKey        "IOLocationMatch"
#define kIOParentMatchKey        "IOParentMatch"
#define kIOResourceMatchKey        "IOResourceMatch"
#define kIOResourceMatchedKey        "IOResourceMatched"
#define kIOMatchedServiceCountKey    "IOMatchedServiceCountMatch"

#define kIONameMatchedKey        "IONameMatched"

#define kIOMatchCategoryKey        "IOMatchCategory"
#define kIODefaultMatchCategoryKey    "IODefaultMatchCategory"

// IOService default user client class, for loadable user clients
#define kIOUserClientClassKey        "IOUserClientClass"

// key to find IOMappers
#define kIOMapperIDKey                "IOMapperID"

#define kIOUserClientCrossEndianKey        "IOUserClientCrossEndian"
#define kIOUserClientCrossEndianCompatibleKey    "IOUserClientCrossEndianCompatible"
#define kIOUserClientSharedInstanceKey        "IOUserClientSharedInstance"
// diagnostic string describing the creating task
#define kIOUserClientCreatorKey        "IOUserClientCreator"

// IOService notification types
#define kIOPublishNotification        "IOServicePublish"
#define kIOFirstPublishNotification    "IOServiceFirstPublish"
#define kIOMatchedNotification        "IOServiceMatched"
#define kIOFirstMatchNotification    "IOServiceFirstMatch"
#define kIOTerminatedNotification    "IOServiceTerminate"
#define kIOWillTerminateNotification    "IOServiceWillTerminate"

// IOService interest notification types
#define kIOGeneralInterest        "IOGeneralInterest"
#define kIOBusyInterest            "IOBusyInterest"
#define kIOAppPowerStateInterest    "IOAppPowerStateInterest"
#define kIOPriorityPowerStateInterest    "IOPriorityPowerStateInterest"

#define kIOPlatformDeviceMessageKey     "IOPlatformDeviceMessage"

// IOService interest notification types
#define kIOCFPlugInTypesKey        "IOCFPlugInTypes"

// properties found in services that implement command pooling
#define kIOCommandPoolSizeKey        "IOCommandPoolSize"        // (OSNumber)

// properties found in services that implement priority
#define kIOMaximumPriorityCountKey    "IOMaximumPriorityCount"    // (OSNumber)

// properties found in services that have transfer constraints
#define kIOMaximumBlockCountReadKey             "IOMaximumBlockCountRead"             // (OSNumber)
#define kIOMaximumBlockCountWriteKey            "IOMaximumBlockCountWrite"            // (OSNumber)
#define kIOMaximumByteCountReadKey              "IOMaximumByteCountRead"              // (OSNumber)
#define kIOMaximumByteCountWriteKey             "IOMaximumByteCountWrite"             // (OSNumber)
#define kIOMaximumSegmentCountReadKey           "IOMaximumSegmentCountRead"           // (OSNumber)
#define kIOMaximumSegmentCountWriteKey          "IOMaximumSegmentCountWrite"          // (OSNumber)
#define kIOMaximumSegmentByteCountReadKey       "IOMaximumSegmentByteCountRead"       // (OSNumber)
#define kIOMaximumSegmentByteCountWriteKey      "IOMaximumSegmentByteCountWrite"      // (OSNumber)
#define kIOMinimumSegmentAlignmentByteCountKey  "IOMinimumSegmentAlignmentByteCount"  // (OSNumber)
#define kIOMaximumSegmentAddressableBitCountKey "IOMaximumSegmentAddressableBitCount" // (OSNumber)
#define kIOMinimumSaturationByteCountKey        "IOMinimumSaturationByteCount"        // (OSNumber)

// properties found in services that wish to describe an icon
//
// IOIcon =
// {
//     CFBundleIdentifier   = "com.example.driver.example";
//     IOBundleResourceFile = "example.icns";
// };
//
// where IOBundleResourceFile is the filename of the resource

#define kIOIconKey               "IOIcon"               // (OSDictionary)
#define kIOBundleResourceFileKey "IOBundleResourceFile" // (OSString)

#define kIOBusBadgeKey           "IOBusBadge"           // (OSDictionary)
#define kIODeviceIconKey         "IODeviceIcon"         // (OSDictionary)

// property of root that describes the machine's serial number as a string
#define kIOPlatformSerialNumberKey    "IOPlatformSerialNumber"    // (OSString)

// property of root that describes the machine's UUID as a string
#define kIOPlatformUUIDKey    "IOPlatformUUID"    // (OSString)

// IODTNVRAM property keys
#define kIONVRAMDeletePropertyKey    "IONVRAM-DELETE-PROPERTY"
#define kIONVRAMSyncNowPropertyKey    "IONVRAM-SYNCNOW-PROPERTY"
#define kIONVRAMActivateCSRConfigPropertyKey    "IONVRAM-ARMCSR-PROPERTY"
#define kIODTNVRAMPanicInfoKey        "aapl,panic-info"

// keys for complex boot information
#define kIOBootDeviceKey          "IOBootDevice"        // dict | array of dicts
#define kIOBootDevicePathKey      "IOBootDevicePath"    // arch-neutral OSString
#define kIOBootDeviceSizeKey      "IOBootDeviceSize"    // OSNumber of bytes

// keys for OS Version information
#define kOSBuildVersionKey        "OS Build Version"

#endif /* ! _IOKIT_IOKITKEYS_H */


#endif /* IOKitKeys_h */
