//
//  NSDocumentScripting.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSDocumentScripting_h
#define NSDocumentScripting_h

#import <AppKit/NSDocument.h>

NS_ASSUME_NONNULL_BEGIN

@class NSCloseCommand;
@class NSScriptCommand;
@class NSScriptObjectSpecifier;
@class NSString;

@interface NSDocument (NSScripting)

@property (copy) NSString *lastComponentOfFileName;

- (nullable id)handleSaveScriptCommand:(NSScriptCommand *)command;
- (nullable id)handleCloseScriptCommand:(NSCloseCommand *)command;
- (nullable id)handlePrintScriptCommand:(NSScriptCommand *)command;

@property (readonly, strong) NSScriptObjectSpecifier *objectSpecifier;

@end

NS_ASSUME_NONNULL_END

#endif /* NSDocumentScripting_h */
