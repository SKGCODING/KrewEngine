//
//  NSMagnificationGestureRecognizer.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSMagnificationGestureRecognizer_h
#define NSMagnificationGestureRecognizer_h

#import <Foundation/Foundation.h>
#import <AppKit/NSGestureRecognizer.h>

NS_ASSUME_NONNULL_BEGIN

NS_CLASS_AVAILABLE(10_10, NA)
@interface NSMagnificationGestureRecognizer : NSGestureRecognizer {
@private
    NSPoint _location;
    NSPoint _reserved1;
    NSInteger _mflags __unused;
    CGFloat _magnification;
    id _reserved2;
#ifndef __OBJC2__
    NSInteger _reserved3;
#endif
}

@property CGFloat magnification;

@end

NS_ASSUME_NONNULL_END

#endif /* NSMagnificationGestureRecognizer_h */
