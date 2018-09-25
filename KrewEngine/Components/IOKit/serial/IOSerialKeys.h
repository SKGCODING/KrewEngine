//
//  IOSerialKeys.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOSerialKeys_h
#define IOSerialKeys_h

#define kIOSerialBSDServiceValue    "IOSerialBSDClient"

/* Matching keys */
#define kIOSerialBSDTypeKey        "IOSerialBSDClientType"

/* Currently possible kIOSerialBSDTypeKey values. */
#define kIOSerialBSDAllTypes        "IOSerialStream"
#define kIOSerialBSDModemType        "IOModemSerialStream"
#define kIOSerialBSDRS232Type        "IORS232SerialStream"

// Properties that resolve to a /dev device node to open for
// a particular service
#define kIOTTYDeviceKey            "IOTTYDevice"
#define kIOTTYBaseNameKey        "IOTTYBaseName"
#define kIOTTYSuffixKey            "IOTTYSuffix"

#define kIOCalloutDeviceKey        "IOCalloutDevice"
#define kIODialinDeviceKey        "IODialinDevice"

// Property 'ioctl' wait for the tty device to go idle.
#define kIOTTYWaitForIdleKey        "IOTTYWaitForIdle"

#if KERNEL
extern const OSSymbol *gIOSerialBSDServiceValue;
extern const OSSymbol *gIOSerialBSDTypeKey;
extern const OSSymbol *gIOSerialBSDAllTypes;
extern const OSSymbol *gIOSerialBSDModemType;
extern const OSSymbol *gIOSerialBSDRS232Type;
extern const OSSymbol *gIOTTYDeviceKey;
extern const OSSymbol *gIOTTYBaseNameKey;
extern const OSSymbol *gIOTTYSuffixKey;
extern const OSSymbol *gIOCalloutDeviceKey;
extern const OSSymbol *gIODialinDeviceKey;
#endif /* KERNEL */


#endif /* IOSerialKeys_h */
