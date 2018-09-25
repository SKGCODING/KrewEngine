//
//  NSMovie.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSMovie_h
#define NSMovie_h

#import <Foundation/Foundation.h>

@class NSPasteboard, NSURL;

#if __LP64__
@class QTMovie;
#endif

#if !__LP64__
NS_CLASS_DEPRECATED_MAC(10_0, 10_5, "Use QTMovie instead")
@interface NSMovie : NSObject <NSCopying, NSCoding> {
#else
    NS_CLASS_DEPRECATED_MAC(10_0, 10_5, "Use QTMovie instead")
    @interface NSMovie : NSObject <NSCoding> {
#endif
        
    @private
        void*    _movie;
        NSURL*   _url;
#ifndef __OBJC2__
        struct {
            int dispose:1;
            int reserved:31;
        } _movieFlags;
        long     _reserved1;
        long     _reserved2;
#endif
    }
    
#if !__LP64__
    
    - (id) initWithMovie:(void* /*Movie*/)movie NS_DEPRECATED_MAC(10_0, 10_5);            // When archived, saves contents
    - (id) initWithURL:(NSURL*)url byReference:(BOOL)byRef NS_DEPRECATED_MAC(10_0, 10_5);    // When archived, saves ref or contents
    - (id) initWithPasteboard:(NSPasteboard*)pasteboard NS_DEPRECATED_MAC(10_0, 10_5);
    
    - (void*/*Movie*/)QTMovie NS_RETURNS_INNER_POINTER NS_DEPRECATED_MAC(10_0, 10_5);
    - (NSURL*)URL NS_DEPRECATED_MAC(10_0, 10_5);
    
    + (NSArray<NSString *> *) movieUnfilteredFileTypes NS_DEPRECATED_MAC(10_0, 10_5);
    + (NSArray<NSString *> *) movieUnfilteredPasteboardTypes NS_DEPRECATED_MAC(10_0, 10_5);
    + (BOOL) canInitWithPasteboard:(NSPasteboard*)pasteboard NS_DEPRECATED_MAC(10_0, 10_5);
    
#else
    
    - (id) initWithMovie:(QTMovie*)movie;
    - (QTMovie *)QTMovie;
    
#endif
    
    @end

#endif /* NSMovie_h */
