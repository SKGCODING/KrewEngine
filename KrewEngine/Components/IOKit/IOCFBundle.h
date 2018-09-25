//
//  IOCFBundle.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOCFBundle_h
#define IOCFBundle_h

#ifndef __IOKIT_IOCFBUNDLE_H
#define __IOKIT_IOCFBUNDLE_H

#include <CoreFoundation/CoreFoundation.h>

#define kIOBundleInfoDictionaryVersionKey    CFSTR("CFBundleInfoDictionaryVersion")
#define kIOBundleExecutableKey            CFSTR("CFBundleExecutable")
#define kIOBundleIdentifierKey            CFSTR("CFBundleIdentifier")
#define kIOBundleVersionKey            CFSTR("CFBundleVersion")
#define kIOBundleDevelopmentRegionKey        CFSTR("CFBundleDevelopmentRegion")
#define kIOBundleNameKey            CFSTR("CFBundleName")

#endif /* __IOKIT_IOCFBUNDLE_H */

#endif /* IOCFBundle_h */
