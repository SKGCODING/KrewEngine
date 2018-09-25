//
//  NSEPSImageRep.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSEPSImageRep_h
#define NSEPSImageRep_h

#import <AppKit/NSImageRep.h>

NS_ASSUME_NONNULL_BEGIN

@class NSPDFImageRep;

@interface NSEPSImageRep : NSImageRep {
    /*All instance variables are private*/
    NSPoint _bBoxOrigin;
    NSData *_epsData;
    NSPDFImageRep* _pdfImageRep;
}

+ (nullable instancetype)imageRepWithData:(NSData *)epsData;    /* Convenience of initWithData: */
- (nullable instancetype)initWithData:(NSData *)epsData;

/* prepareGState is unused */
- (void)prepareGState NS_DEPRECATED_MAC(10_0, 10_10);

@property (readonly, copy) NSData *EPSRepresentation;

@property (readonly) NSRect boundingBox;

@end

NS_ASSUME_NONNULL_END

#endif /* NSEPSImageRep_h */
