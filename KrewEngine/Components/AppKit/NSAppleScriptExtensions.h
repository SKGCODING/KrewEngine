//
//  NSAppleScriptExtensions.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSAppleScriptExtensions_h
#define NSAppleScriptExtensions_h

#import <Foundation/NSAppleScript.h>

NS_ASSUME_NONNULL_BEGIN

@class NSAttributedString;



@interface NSAppleScript(NSExtensions)

// Return the syntax-highlighted source code of the script if the script has been compiled and its source code is available, nil otherwise.  It is possible for an NSAppleScript that has been instantiated with -initWithContentsOfURL:error: to be a script for which the source code is not available, but is nonetheless executable.
@property (nullable, readonly, strong) NSAttributedString *richTextSource;

@end

NS_ASSUME_NONNULL_END

#endif /* NSAppleScriptExtensions_h */
