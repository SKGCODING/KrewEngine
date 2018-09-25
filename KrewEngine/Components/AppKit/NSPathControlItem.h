//
//  NSPathControlItem.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSPathControlItem_h
#define NSPathControlItem_h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class NSPathComponentCell;

/*  NSPathControlItem is used to represent an individual path segment in an NSPathControl.
 NSPathControlItem should not be subclassed.
 */
NS_CLASS_AVAILABLE_MAC(10_10)
@interface NSPathControlItem : NSObject {
@private
    NSPathComponentCell *_secretCell;
}

/* The title of the path item.
 */
@property(copy) NSString *title;
@property(copy) NSAttributedString *attributedTitle;

/* The image/icon shown for this particular component along the path. The NSPathControlItem can display both an image and title.  When drawing, your image will be scaled to fit the available area, which in 10.10 and earlier releases is 16x16 points for NSPathStyleStandard or NSPathStylePopUp, and 14x14 points for NSPathStyleNavigationBar.
 */
@property (nullable, strong) NSImage *image;

/* A url for the partial path from the beginning up to this particular item.
 */
@property (nullable, readonly) NSURL *URL;

@end

NS_ASSUME_NONNULL_END

#endif /* NSPathControlItem_h */
