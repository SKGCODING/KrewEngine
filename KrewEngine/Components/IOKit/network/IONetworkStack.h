//
//  IONetworkStack.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IONetworkStack_h
#define IONetworkStack_h

#ifndef _IONETWORKSTACK_H
#define _IONETWORKSTACK_H

// User-client keys
//
#define kIONetworkStackUserCommandKey   "IONetworkStackUserCommand"
#define kIONetworkStackUserCommand      "IONetworkStackUserCommand"

enum {
    kIONetworkStackRegisterInterfaceWithUnit        = 0,
    kIONetworkStackRegisterInterfaceWithLowestUnit  = 1,
    kIONetworkStackRegisterInterfaceAll             = 2
};

#endif /* !_IONETWORKSTACK_H */


#endif /* IONetworkStack_h */
