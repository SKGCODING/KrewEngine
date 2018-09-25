//
//  NSColorWell.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSColorWell_h
#define NSColorWell_h

#import <AppKit/NSControl.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSColorWell : NSControl
{
    /*All instance variables are private*/
    NSColor *_color;
    id _reserved;
    SEL _reserved2;
    struct __cwFlags {
        unsigned int        isActive:1;
        unsigned int        isBordered:1;
        unsigned int        cantDraw:1;
        unsigned int        isNotContinuous:1;
        unsigned int        refusesFR:1;
        unsigned int        reservedColorWell:27;
    } _cwFlags;
}

- (void)deactivate;
- (void)activate:(BOOL)exclusive;
@property (getter=isActive, readonly) BOOL active;

- (void)drawWellInside:(NSRect)insideRect;

@property (getter=isBordered) BOOL bordered;

- (void)takeColorFrom:(nullable id)sender;
@property (copy) NSColor *color;

@end

NS_ASSUME_NONNULL_END


#endif /* NSColorWell_h */
