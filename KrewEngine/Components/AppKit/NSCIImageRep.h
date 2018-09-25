//
//  NSCIImageRep.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSCIImageRep_h
#define NSCIImageRep_h

#import <AppKit/NSImageRep.h>
#import <AppKit/NSGraphics.h>
#import <CoreImage/CIImage.h>


NS_ASSUME_NONNULL_BEGIN

@class NSBitmapImageRep;

@interface NSCIImageRep : NSImageRep
{
    CIImage *_ciImage;
}
+ (instancetype)imageRepWithCIImage:(CIImage *)image;
- (instancetype)initWithCIImage:(CIImage *)image;
@property (readonly, strong) CIImage *CIImage;
@end

@interface CIImage (NSAppKitAdditions)
- (nullable instancetype)initWithBitmapImageRep:(NSBitmapImageRep *)bitmapImageRep;

- (void)drawInRect:(NSRect)rect fromRect:(NSRect)fromRect operation:(NSCompositingOperation)op fraction:(CGFloat)delta;
- (void)drawAtPoint:(NSPoint)point fromRect:(NSRect)fromRect operation:(NSCompositingOperation)op fraction:(CGFloat)delta;
@end

NS_ASSUME_NONNULL_END

#endif /* NSCIImageRep_h */
