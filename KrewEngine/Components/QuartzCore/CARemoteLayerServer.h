//
//  CARemoteLayerServer.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 17/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef CARemoteLayerServer_h
#define CARemoteLayerServer_h

#import <QuartzCore/CALayer.h>
#import <Foundation/NSObject.h>
#import <mach/mach.h>

NS_ASSUME_NONNULL_BEGIN

CA_CLASS_AVAILABLE (10.7)
@interface CARemoteLayerServer : NSObject
{
@private
    id _impl;
}

/* Return the singleton server instance. */

+ (CARemoteLayerServer *)sharedServer;

/* The Mach port that the server listens for new clients on. This
 * should be sent to other processes that want to export layer trees
 * into the server. */

@property(readonly) mach_port_t serverPort;

@end


@interface CALayer (CARemoteLayerServer)

/* Returns a layer that renders the root layer of the client with the given
 * identifier as an extra implicit sublayer. */

+ (CALayer *)layerWithRemoteClientId:(uint32_t)client_id;

@end

NS_ASSUME_NONNULL_END

#endif /* CARemoteLayerServer_h */
