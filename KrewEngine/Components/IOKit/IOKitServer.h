//
//  IOKitServer.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOKitServer_h
#define IOKitServer_h

#ifndef _IOKIT_IOKITSERVER_H
#define _IOKIT_IOKITSERVER_H

#include <IOKit/IOTypes.h>
#include <IOKit/IOKitKeys.h>
#include <IOKit/OSMessageNotification.h>

#ifdef __cplusplus
extern "C" {
#endif
#include <mach/kmod.h>
#ifdef __cplusplus
}
#endif

// IOCatalogueSendData
/*!
 @enum IOCatalogueSendData user-client flags.
 @constant kIOCatalogAddDrivers  Signals a call to the addDrivers function in IOCatalogue.
 @constant kIOCatalogAddDriversNoMatch  Signals a call to the addDrivers function in IOCatalogue but does not start a matching thread.
 @constant kIOCatalogRemoveDrivers  Signals a call to the removeDrivers function in IOCatalogue.
 @constant kIOCatalogRemoveDriversNoMatch  Signals a call to the removedrivers function in IOCatalogue but does not start a matching thread.
 @constant kIOCatalogStartMatching  Signals the IOCatalogue to start an IOService matching thread.
 @constant kIOCatalogRemoveKernelLinker  Deprecated; does nothing.
 @constant kIOCatalogKextdActive  Signals the kernel that kextd is running.
 @constant kIOCatalogKextdFinishedLaunching  Signals the IOCatalogue that kextd has finished sending it information at startup.
 @constant kIOCatalogResetDrivers  Resets the IOCatalogue with a new set of personalities.
 @constant kIOCatalogResetDriversNoMatch  Resets the IOCatalogue with a new set of personalities but does not start a matching thread.
 */
enum {
    kIOCatalogAddDrivers    = 1,
    kIOCatalogAddDriversNoMatch,
    kIOCatalogRemoveDrivers,
    kIOCatalogRemoveDriversNoMatch,
    kIOCatalogStartMatching,
    kIOCatalogRemoveKernelLinker,
    kIOCatalogKextdActive,
    kIOCatalogKextdFinishedLaunching,
    kIOCatalogResetDrivers,
    kIOCatalogResetDriversNoMatch
};

// IOCatalogueGetData
/*!
 @enum IOCatalogueGetData user-client flags
 @constant kIOCatalogGetContents  Returns a snapshot of the database to the caller.
 */
enum {
    kIOCatalogGetContents      = 1,
    kIOCatalogGetModuleDemandList = 2,
    kIOCatalogGetCacheMissList      = 3,
    kIOCatalogGetROMMkextList     = 4
};

// IOCatalogueReset
/*!
 @enum IOCatalogueReset user-client flag
 @constant kIOCatalogResetDefault  Removes all entries from IOCatalogue except those used for booting the system.
 */
enum {
    kIOCatalogResetDefault    = 1
};

// IOCatalogueTerminate
/*!
 @enum IOCatalogueTerminate user-client flags.
 @constant kIOCatalogModuleUnload Terminates all services which depend on a particular module and unloads the module.
 @constant kIOCatalogModuleTerminate Terminates all services which depend on a particular module but does not unload the module.
 @constant kIOCatalogServiceTerminate Terminates a particular service by name.
 */
enum {
    kIOCatalogModuleUnload      = 1,
    kIOCatalogModuleTerminate,
    kIOCatalogServiceTerminate
};



#endif /* ! _IOKIT_IOKITSERVER_H */



#endif /* IOKitServer_h */
