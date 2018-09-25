//
//  NSMediaLibraryBrowserController.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSMediaLibraryBrowserController_h
#define NSMediaLibraryBrowserController_h

#import <Foundation/NSObject.h>
#import <Foundation/NSGeometry.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_OPTIONS(NSUInteger, NSMediaLibrary) {
    NSMediaLibraryAudio = 1UL << 0,
    NSMediaLibraryImage = 1UL << 1,
    NSMediaLibraryMovie = 1UL << 2
} NS_ENUM_AVAILABLE(10_9, NA);

/*
 class:
 
 NSMediaLibraryBrowserController configures and displays a Media Library Browser Panel.
 
 discussion:
 
 NSMediaLibraryBrowserController is not an NSPanel!  It has NSPanel like methods to remotely control the Media Library Browser.  Clients have no direct programmatic access to the panel displaying the Media Library Browser.
 */

NS_CLASS_AVAILABLE(10_9, NA)
@interface NSMediaLibraryBrowserController : NSObject
{
@private
    id _browserProxy;
}

@property (getter=isVisible) BOOL visible;
@property NSRect frame;
@property NSMediaLibrary mediaLibraries;

@property (class, readonly, strong) NSMediaLibraryBrowserController *sharedMediaLibraryBrowserController;
- (IBAction)togglePanel:(nullable id)sender;

@end

NS_ASSUME_NONNULL_END

#endif /* NSMediaLibraryBrowserController_h */
