//
//  CGColor.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 10/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef CGColor_h
#define CGColor_h

#ifndef CGCOLOR_H_
#define CGCOLOR_H_

#include <CoreFoundation/CFBase.h>
#include <CoreFoundation/CFAvailability.h>
#include <stdint.h>

typedef struct CF_BRIDGED_TYPE(id) CGColor *CGColorRef;

#include <CoreGraphics/CGBase.h>
#include <CoreGraphics/CGColorSpace.h>
#include <CoreGraphics/CGPattern.h>

CF_IMPLICIT_BRIDGING_ENABLED

CF_ASSUME_NONNULL_BEGIN

/* Create a color in the color space `space' with color components
 (including alpha) specified by `components'. `space' may be any color
 space except a pattern color space. */

CG_EXTERN CGColorRef __nullable CGColorCreate(CGColorSpaceRef cg_nullable space,
                                              const CGFloat * cg_nullable components)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_2_0);

/* Create a color in the "Generic" gray color space. */

CG_EXTERN CGColorRef  CGColorCreateGenericGray(CGFloat gray, CGFloat alpha)
CG_AVAILABLE_STARTING(__MAC_10_5, __IPHONE_NA);

/* Create a color in the "Generic" RGB color space. */

CG_EXTERN CGColorRef  CGColorCreateGenericRGB(CGFloat red, CGFloat green,
                                              CGFloat blue, CGFloat alpha) CG_AVAILABLE_STARTING(__MAC_10_5, __IPHONE_NA);

/* Create a color in the "Generic" CMYK color space. */

CG_EXTERN CGColorRef  CGColorCreateGenericCMYK(CGFloat cyan, CGFloat magenta,
                                               CGFloat yellow, CGFloat black, CGFloat alpha)
CG_AVAILABLE_STARTING(__MAC_10_5, __IPHONE_NA);

/* Return a constant color. As `CGColorGetConstantColor' is not a "Copy" or
 "Create" function, it does not necessarily return a new reference each
 time it's called. As a consequence, you should not release the returned
 value. However, colors returned from `CGColorGetConstantColor' can be
 retained and released in a properly nested fashion, just like any other
 CF type. */

CG_EXTERN CGColorRef __nullable CGColorGetConstantColor(CFStringRef cg_nullable colorName)
CG_AVAILABLE_STARTING(__MAC_10_5, __IPHONE_NA);

/* Create a color in color space `space' with pattern `pattern' and
 components `components'. `space' must be a pattern color space. */

CG_EXTERN CGColorRef __nullable CGColorCreateWithPattern(CGColorSpaceRef cg_nullable space,
                                                         CGPatternRef cg_nullable pattern, const CGFloat * cg_nullable components)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_2_0);

/* Create a copy of `color'. */

CG_EXTERN CGColorRef __nullable CGColorCreateCopy(CGColorRef cg_nullable color)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_2_0);

/* Create a copy of `color' with alpha set to `alpha'. */

CG_EXTERN CGColorRef __nullable CGColorCreateCopyWithAlpha(CGColorRef cg_nullable color,
                                                           CGFloat alpha) CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_2_0);

/* Create a copy of `color' by matching existing color to destination color space. */

CG_EXTERN CGColorRef __nullable CGColorCreateCopyByMatchingToColorSpace(cg_nullable CGColorSpaceRef,
                                                                        CGColorRenderingIntent intent, CGColorRef cg_nullable color, __nullable CFDictionaryRef options)
CG_AVAILABLE_STARTING(__MAC_10_11, __IPHONE_9_0);

/* Equivalent to `CFRetain(color)', except it doesn't crash (as CFRetain
 does) if `color' is NULL. */

CG_EXTERN CGColorRef cg_nullable CGColorRetain(CGColorRef cg_nullable color)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_2_0);

/* Equivalent to `CFRelease(color)', except it doesn't crash (as CFRelease
 does) if `color' is NULL. */

CG_EXTERN void CGColorRelease(CGColorRef cg_nullable color)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_2_0);

/* Return true if `color1' is equal to `color2'; false otherwise. */

CG_EXTERN bool CGColorEqualToColor(CGColorRef cg_nullable color1, CGColorRef cg_nullable color2)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_2_0);

/* Return the number of color components (including alpha) associated with
 `color'. */

CG_EXTERN size_t CGColorGetNumberOfComponents(CGColorRef cg_nullable color)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_2_0);

/* Return the color components (including alpha) associated with `color'. */

CG_EXTERN const CGFloat * __nullable CGColorGetComponents(CGColorRef cg_nullable color)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_2_0);

/* Return the alpha component associated with `color'. */

CG_EXTERN CGFloat CGColorGetAlpha(CGColorRef cg_nullable color)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_2_0);

/* Return the color space associated with `color'. */

CG_EXTERN CGColorSpaceRef __nullable CGColorGetColorSpace(CGColorRef cg_nullable color)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_2_0);

/* Return the pattern associated with `color', if it's a color in a pattern
 color space; NULL otherwise. */

CG_EXTERN CGPatternRef __nullable CGColorGetPattern(CGColorRef cg_nullable color)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_2_0);

/* Return the CFTypeID for CGColors. */

CG_EXTERN CFTypeID CGColorGetTypeID(void)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_2_0);

/*** Names of colors for use with `CGColorGetConstantColor'. ***/

/* Colors in the "Generic" gray color space. */

CG_EXTERN const CFStringRef  kCGColorWhite
CG_AVAILABLE_STARTING(__MAC_10_5, __IPHONE_NA);

CG_EXTERN const CFStringRef  kCGColorBlack
CG_AVAILABLE_STARTING(__MAC_10_5, __IPHONE_NA);

CG_EXTERN const CFStringRef  kCGColorClear
CG_AVAILABLE_STARTING(__MAC_10_5, __IPHONE_NA);

CF_ASSUME_NONNULL_END

CF_IMPLICIT_BRIDGING_DISABLED

#endif /* CGCOLOR_H_ */


#endif /* CGColor_h */