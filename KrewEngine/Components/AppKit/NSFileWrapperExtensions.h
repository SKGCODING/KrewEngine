//
//  NSFileWrapperExtensions.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSFileWrapperExtensions_h
#define NSFileWrapperExtensions_h

#import <Foundation/NSFileWrapper.h>

NS_ASSUME_NONNULL_BEGIN

@class NSImage;

@interface NSFileWrapper(NSExtensions)

/* The icon. -icon may return nil even if the receiver is the result of reading a parent from the file system (use NSFileWrapperReadingImmediately if appropriate to prevent that). The image that's returned might be shared by many NSFileWrappers so your application must not mutate it. If your application needs to mutate the returned image it should make a copy and mutate the copy instead.
 */
@property (nullable, strong) NSImage *icon;

@end

NS_ASSUME_NONNULL_END

#endif /* NSFileWrapperExtensions_h */
