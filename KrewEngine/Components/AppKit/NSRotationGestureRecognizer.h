//
//  NSRotationGestureRecognizer.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSRotationGestureRecognizer_h
#define NSRotationGestureRecognizer_h

#import <Foundation/Foundation.h>
#import <AppKit/NSGestureRecognizer.h>

NS_ASSUME_NONNULL_BEGIN

NS_CLASS_AVAILABLE(10_10, NA)
@interface NSRotationGestureRecognizer : NSGestureRecognizer {
@private
    NSPoint _location;
    NSPoint _reserved1;
    NSInteger _rflags __unused;
    CGFloat _rotation;
#ifndef __OBJC2__
    NSInteger _reserved2;
    NSInteger _reserved3;
#endif
}

@property CGFloat rotation; // in radians
@property CGFloat rotationInDegrees;
@end

NS_ASSUME_NONNULL_END

#endif /* NSRotationGestureRecognizer_h */
