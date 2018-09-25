//
//  CARenderer.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 17/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef CARenderer_h
#define CARenderer_h

#import <QuartzCore/CABase.h>
#import <CoreVideo/CVBase.h>
#import <Foundation/NSObject.h>

@class NSDictionary, CALayer;
@protocol MTLTexture;

NS_ASSUME_NONNULL_BEGIN

CA_CLASS_AVAILABLE (10.5)
@interface CARenderer : NSObject
{
@private
    struct CARendererPriv *_priv;
}

/* Create a new renderer object. Its render target is the specified
 * Core OpenGL context. 'dict' is an optional dictionary of parameters.  */

+ (CARenderer *)rendererWithCGLContext:(void *)ctx
                               options:(nullable NSDictionary *)dict;

/* Create a new renderer object. Its render target is the specified
 * texture. 'dict' is an optional dictionary of parameters.  */

+ (CARenderer *)rendererWithMTLTexture:(id<MTLTexture>)tex
                               options:(nullable NSDictionary *)dict CA_AVAILABLE_STARTING(10.13, 11.0, 11.0, 4.0);

/* The root layer associated with the renderer. */

@property(nullable, strong) CALayer *layer;

/* The bounds rect of the render target. */

@property CGRect bounds;

/* Begin rendering a frame at time 't'. If 'ts' is non-null it defines
 * the host time and update frequency of the target device. */

- (void)beginFrameAtTime:(CFTimeInterval)t timeStamp:(nullable CVTimeStamp *)ts;

/* Returns the bounds of the update region - the area that contains all
 * pixels that will be rendered by the current frame. Initially this
 * will include all differences between the current frame and the
 * previously rendered frame. */

- (CGRect)updateBounds;

/* Add rectangle 'r' to the update region of the current frame. */

- (void)addUpdateRect:(CGRect)r;

/* Render the update region of the current frame to the target context. */

- (void)render;

/* Returns the time at which the next update should happen. If infinite
 * no update needs to be scheduled yet. If the current frame time, a
 * continuous animation is running and an update should be scheduled
 * after a "natural" delay. */

- (CFTimeInterval)nextFrameTime;

/* Release any data associated with the current frame. */

- (void)endFrame;

@end

/** Options for the renderer options dictionary. **/

/* The CGColorSpaceRef object defining the output color space. */

CA_EXTERN NSString * const kCARendererColorSpace
CA_AVAILABLE_STARTING (10.6, 2.0, 9.0, 2.0);

NS_ASSUME_NONNULL_END


#endif /* CARenderer_h */
