//
//  NSPICTImageRep.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSPICTImageRep_h
#define NSPICTImageRep_h

#import <AppKit/NSImageRep.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSPICTImageRep : NSImageRep
{
    /*All instance variables are private*/
    NSPoint      _pictOrigin;        /* topLeft of picFrame */
    NSData*      _pictData;
#if !__LP64__
    unsigned int _reserved1;
    unsigned int _reserved2;
#else
    id         _imageRep;
    NSUInteger   _pictOffset;
    unsigned int _reserved1;
    unsigned int _reserved2;
#endif
}

+ (nullable instancetype)imageRepWithData:(NSData *)pictData;
- (nullable instancetype)initWithData:(NSData *)pictData;

@property (readonly, copy) NSData *PICTRepresentation;
@property (readonly) NSRect boundingBox;

@end

NS_ASSUME_NONNULL_END

#endif /* NSPICTImageRep_h */
