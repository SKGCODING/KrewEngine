//
//  NSCustomImageRep.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSCustomImageRep_h
#define NSCustomImageRep_h

#import <AppKit/NSImageRep.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSCustomImageRep : NSImageRep {
    /*All instance variables are private*/
    SEL _drawMethod;
    id _drawObject;
    unsigned int _reserved;
}
// Note that the block passed to the below method may be invoked whenever and on whatever thread the image itself is drawn on. Care should be taken to ensure that all state accessed within the drawingHandler block is done so in a thread safe manner.
- (instancetype)initWithSize:(NSSize)size flipped:(BOOL)drawingHandlerShouldBeCalledWithFlippedContext drawingHandler:(BOOL (^)(NSRect dstRect))drawingHandler NS_AVAILABLE_MAC(10_8);
@property (nullable, readonly, copy) BOOL (^drawingHandler)(NSRect) NS_AVAILABLE_MAC(10_8);

- (instancetype)initWithDrawSelector:(SEL)selector delegate:(id)delegate;
@property (nullable, readonly) SEL drawSelector;
@property (nullable, readonly, weak) id delegate;

@end

NS_ASSUME_NONNULL_END

#endif /* NSCustomImageRep_h */
