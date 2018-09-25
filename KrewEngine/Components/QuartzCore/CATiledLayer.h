//
//  CATiledLayer.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 17/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef CATiledLayer_h
#define CATiledLayer_h

#import <QuartzCore/CALayer.h>

NS_ASSUME_NONNULL_BEGIN

CA_CLASS_AVAILABLE (10.5, 2.0, 9.0, 2.0)
@interface CATiledLayer : CALayer

/* The time in seconds that newly added images take to "fade-in" to the
 * rendered representation of the tiled layer. The default implementation
 * returns 0.25 seconds. */

+ (CFTimeInterval)fadeDuration;

/* The number of levels of detail maintained by this layer. Defaults to
 * one. Each LOD is half the resolution of the previous level. If too
 * many levels are specified for the current size of the layer, then
 * the number of levels is clamped to the maximum value (the bottom
 * most LOD must contain at least a single pixel in each dimension). */

@property size_t levelsOfDetail;

/* The number of magnified levels of detail for this layer. Defaults to
 * zero. Each previous level of detail is twice the resolution of the
 * later. E.g. specifying 'levelsOfDetailBias' of two means that the
 * layer devotes two of its specified levels of detail to
 * magnification, i.e. 2x and 4x. */

@property size_t levelsOfDetailBias;

/* The maximum size of each tile used to create the layer's content.
 * Defaults to (256, 256). Note that there is a maximum tile size, and
 * requests for tiles larger than that limit will cause a suitable
 * value to be substituted. */

@property CGSize tileSize;

@end

NS_ASSUME_NONNULL_END


#endif /* CATiledLayer_h */
