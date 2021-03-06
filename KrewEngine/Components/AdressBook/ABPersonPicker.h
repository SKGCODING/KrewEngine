//
//  ABPersonPicker.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 26/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef ABPersonPicker_h
#define ABPersonPicker_h

#import <Cocoa/Cocoa.h>

#ifdef __x86_64__

@protocol ABPersonPickerDelegate;

/*!
 * @abstract ABPersonPicker is a popover-based person picker for choosing an ABPerson or ABPerson's value, such as a phone number or email address.
 */
OBJC_GC_UNAVAILABLE
@interface ABPersonPicker : NSObject

/*!
 * @abstract The ABPerson properties to display when a person is expanded.
 * @discussion If no properties are provided, the picker will select people instead of values.
 */
@property (copy) NSArray * properties;

/*!
 * @abstract The picker delegate to be notified when the user chooses a person or value.
 */
@property (assign) id<ABPersonPickerDelegate> delegate;

/*!
 * @abstract Shows the picker popover relative to a positioning rect for a view with a preferred edge. See NSPopover for more information.
 */
- (void)showRelativeToRect:(NSRect)positioningRect ofView:(NSView *)positioningView preferredEdge:(NSRectEdge)preferredEdge;

/*!
 * @abstract Closes the popover.
 */
- (void)close;

@end

#endif


#endif /* ABPersonPicker_h */
