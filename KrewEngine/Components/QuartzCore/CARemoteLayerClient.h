//
//  CARemoteLayerClient.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 17/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef CARemoteLayerClient_h
#define CARemoteLayerClient_h

#import <QuartzCore/CABase.h>
#import <Foundation/NSObject.h>
#import <mach/mach.h>

@class CALayer;

NS_ASSUME_NONNULL_BEGIN

CA_CLASS_AVAILABLE (10.7)
@interface CARemoteLayerClient : NSObject
{
@private
    id _impl;
}

/* The designated initializer. The port must have been obtained from
 * -[CARemoteLayerServer serverPort]. */

- (instancetype)initWithServerPort:(mach_port_t)port;

/* Invalidate the object, i.e. delete all state from the server. This
 * is called implicitly when the object is finalized. */

- (void)invalidate;

/* An integer used by the server to identify the client. The value
 * should be passed back to the server so it can display the client's
 * root layer. */

@property(readonly) uint32_t clientId;

/* The root layer. Defaults to nil. */

@property(nullable, strong) CALayer *layer;

@end

NS_ASSUME_NONNULL_END


#endif /* CARemoteLayerClient_h */
