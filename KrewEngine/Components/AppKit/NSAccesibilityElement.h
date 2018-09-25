//
//  NSAccesibilityElement.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSAccesibilityElement_h
#define NSAccesibilityElement_h

#import <Foundation/Foundation.h>
#import <AppKit/NSAccessibility.h>

/* An NSAccessibilityElement is used to convey information regarding onscreen UI through the  accessibility API for UI that may not already have a single backing object. For example, if a single NSView subclass draws 4 buttons, it would vend 4 NSAccessibilityElements as accessibilityChildren. Note that as long as the UI is around, the vendor of NSAccessibilityElements must maintain ownership of the NSAccessibilityElements. */

NS_ASSUME_NONNULL_BEGIN

NS_CLASS_AVAILABLE(10_10, NA)
@interface NSAccessibilityElement : NSObject <NSAccessibility>
{
    id _private;
}

+ (id)accessibilityElementWithRole:(NSAccessibilityRole)role frame:(NSRect)frame label:(nullable NSString *)label parent:(nullable id)parent;
- (void)accessibilityAddChildElement:(NSAccessibilityElement *)childElement;

// Accessibility frame in the cordinate system of the accessibility parent
@property NSRect accessibilityFrameInParentSpace;

@end

NS_ASSUME_NONNULL_END


#endif /* NSAccesibilityElement_h */
