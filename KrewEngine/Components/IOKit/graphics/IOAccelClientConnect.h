//
//  IOAccelClientConnect.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOAccelClientConnect_h
#define IOAccelClientConnect_h

#ifndef _IOACCEL_CLIENT_CONNECT_H
#define _IOACCEL_CLIENT_CONNECT_H


/*
 ** The IOAccelerator service name
 */
#define kIOAcceleratorClassName "IOAccelerator"


/*
 ** IOAccelerator public client types.  Private client types start with
 ** kIOAccelNumClientTypes.
 */
enum eIOAcceleratorClientTypes {
    kIOAccelSurfaceClientType,
    kIOAccelNumClientTypes
};


#endif /* _IOACCEL_CLIENT_CONNECT_H */

#endif /* IOAccelClientConnect_h */
