//
//  NSSecureTextField.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSSecureTextField_h
#define NSSecureTextField_h

#import <AppKit/NSTextField.h>
#import <AppKit/NSTextFieldCell.h>

@interface NSSecureTextField : NSTextField {
    /*All instance variables are private*/
}
@end

@interface NSSecureTextFieldCell : NSTextFieldCell {
    /*All instance variables are private*/
@private
    BOOL _echosBullets;
    BOOL _csMode __unused;
}

@property BOOL echosBullets;

@end

#endif /* NSSecureTextField_h */
