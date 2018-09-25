//
//  AppleScriptObjC.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 04/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef AppleScriptObjC_h
#define AppleScriptObjC_h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSBundle (AppleScriptObjectiveC)

- (void) loadAppleScriptObjectiveCScripts AVAILABLE_MAC_OS_X_VERSION_10_6_AND_LATER;

@end

NS_ASSUME_NONNULL_END

#endif /* AppleScriptObjC_h */
