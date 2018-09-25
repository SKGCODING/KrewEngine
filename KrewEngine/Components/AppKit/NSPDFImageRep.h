//
//  NSPDFImageRep.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSPDFImageRep_h
#define NSPDFImageRep_h

#import <AppKit/NSImageRep.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSPDFImageRep : NSImageRep
{
@private
    NSData* _pdfData;
    int     _reserved1 __unused;
    int     _reserved2 __unused;
    
    id      _private;
}

+ (nullable instancetype)imageRepWithData:(NSData*)pdfData;
- (nullable instancetype)initWithData:(NSData*)pdfData;

@property (readonly, strong) NSData *PDFRepresentation;
@property (readonly) NSRect bounds;            // for current page
@property NSInteger currentPage;    // 0 based
@property (readonly) NSInteger pageCount;

@end

NS_ASSUME_NONNULL_END

#endif /* NSPDFImageRep_h */
