//
//  IONetworkUserClient.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IONetworkUserClient_h
#define IONetworkUserClient_h

#ifndef _IONETWORKUSERCLIENT_H
#define _IONETWORKUSERCLIENT_H

// IONetworkUserClient type ID.
//
#define kIONetworkUserClientTypeID   0xff000001
#define kIONUCType                   0xff000001  // FIXME

// IONetworkUserClient call structure definitions.
//
enum {
    kIONUCResetNetworkDataIndex          = 0,
    kIONUCWriteNetworkDataIndex          = 1,
    kIONUCReadNetworkDataIndex           = 2,
    kIONUCGetNetworkDataCapacityIndex    = 3,
    kIONUCGetNetworkDataHandleIndex      = 4,
    kIONUCLastIndex
};


#endif /* !_IONETWORKUSERCLIENT_H */

#endif /* IONetworkUserClient_h */
