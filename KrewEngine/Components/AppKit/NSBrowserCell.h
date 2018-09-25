//
//  NSBrowserCell.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSBrowserCell_h
#define NSBrowserCell_h

#import <AppKit/NSCell.h>

NS_ASSUME_NONNULL_BEGIN

@class NSImage;

@interface NSBrowserCell : NSCell

- (instancetype)initTextCell:(NSString *)string NS_DESIGNATED_INITIALIZER;
- (instancetype)initImageCell:(nullable NSImage *)image NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER;

@property (class, readonly, nullable, strong) NSImage *branchImage;
@property (class, readonly, nullable, strong) NSImage *highlightedBranchImage;

- (nullable NSColor *)highlightColorInView:(NSView *)controlView;

@property (getter=isLeaf) BOOL leaf;
@property (getter=isLoaded) BOOL loaded;
- (void)reset;
- (void)set;
@property (nullable, strong) NSImage *image;
@property (nullable, strong) NSImage *alternateImage;

@end

NS_ASSUME_NONNULL_END

#endif /* NSBrowserCell_h */
