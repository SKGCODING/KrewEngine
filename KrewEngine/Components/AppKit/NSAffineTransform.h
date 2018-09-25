//
//  NSAffineTransform.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSAffineTransform_h
#define NSAffineTransform_h

#import <Foundation/NSAffineTransform.h>

NS_ASSUME_NONNULL_BEGIN

@class NSBezierPath;

@interface NSAffineTransform (NSAppKitAdditions)
// Transform a path
- (NSBezierPath *)transformBezierPath:(NSBezierPath *)path;

// Setting a transform in NSGraphicsContext
- (void)set;
- (void)concat;
@end

NS_ASSUME_NONNULL_END


#endif /* NSAffineTransform_h */
