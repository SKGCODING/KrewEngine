//
//  NSNib.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSNib_h
#define NSNib_h

#import <AppKit/AppKitDefines.h>
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

typedef NSString * NSNibName NS_EXTENSIBLE_STRING_ENUM;

@class NSIBObjectData;

@interface NSNib : NSObject <NSCoding> {
@private
    NSData *_data;
    NSArray *_images;
    NSArray *_sounds;
    NSBundle *_bundle;
    struct _NSNibFlags {
        unsigned int _isKeyed:1;
        unsigned int _inheritsDecodeTimeBundle:1;
        unsigned int _inheritsDecodeTimePath:1;
        unsigned int _reserved:29;
    } _flags;
    NSString *_path;
    id _reusableDecoder;
}


// Initializes an instance with a nib file called nibName in the specified bundle.
// If bundle is nil, it tries to find the nib in the main bundle.
// The resulting bundle is used for locating resources such as images and localized
// strings.
//
- (nullable instancetype)initWithNibNamed:(NSNibName)nibName bundle:(nullable NSBundle *)bundle;

// Initializes an instance with nib data and specified bundle for locating resources
// such as images and localized strings. If bundle is nil, the main bundle is assumed.
//
- (instancetype)initWithNibData:(NSData *)nibData bundle:(nullable NSBundle *)bundle NS_AVAILABLE_MAC(10_8);

// Instantiates objects in the nib file with the specified owner.
// Upon success, the method returns YES and the optional out-parameter topLevelObjects is
// populated with the top level objects of the nib. The objects adhere to the standard
// Cocoa memory management rules and are autoreleased. IBOutlet properties to top level
// objects should be strong (retain) to demonstrate ownership and prevent deallocation.
// Alternatively, one may hold a strong reference to the top level objects array.
//
- (BOOL)instantiateWithOwner:(nullable id)owner topLevelObjects:(NSArray * __nullable * __nullable)topLevelObjects NS_AVAILABLE_MAC(10_8);

@end

@interface NSNib (NSDeprecated)
- (null_unspecified id)initWithContentsOfURL:(null_unspecified NSURL *)nibFileURL NS_DEPRECATED_MAC(10_0, 10_8); // Deprecated in Mac OS X 10.8
- (BOOL)instantiateNibWithExternalNameTable:(null_unspecified NSDictionary *)externalNameTable NS_DEPRECATED_MAC(10_0, 10_8); // Deprecated in Mac OS X 10.8
- (BOOL)instantiateNibWithOwner:(null_unspecified id)owner topLevelObjects:(NSArray * __null_unspecified* __null_unspecified)topLevelObjects NS_DEPRECATED_MAC(10_3, 10_8); // Deprecated in Mac OS X 10.8
@end

// ** External Name Table Keys **
APPKIT_EXTERN NSString * NSNibOwner NS_DEPRECATED_MAC(10_0, 10_8); // Deprecated in Mac OS X 10.8
APPKIT_EXTERN NSString * NSNibTopLevelObjects NS_DEPRECATED_MAC(10_0, 10_8); // Deprecated in Mac OS X 10.8

NS_ASSUME_NONNULL_END

#endif /* NSNib_h */
