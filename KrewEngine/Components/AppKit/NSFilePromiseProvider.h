//
//  NSFilePromiseProvider.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSFilePromiseProvider_h
#define NSFilePromiseProvider_h

#import <Foundation/NSObject.h>
#import <Foundation/NSArray.h>
#import <Foundation/NSGeometry.h>
#import <AppKit/AppKitDefines.h>
#import <AppKit/NSPasteboard.h>

NS_ASSUME_NONNULL_BEGIN

@protocol NSFilePromiseProviderDelegate;
@class NSOperationQueue;

NS_CLASS_AVAILABLE_MAC(10_12)
@interface NSFilePromiseProvider : NSObject <NSPasteboardWriting> {
@private
    NSString *_fileType;
    NSArray<NSString *> *_reservedA;
    id _reservedB;
    __weak id <NSFilePromiseProviderDelegate> _delegate;
    id _userInfo;
    NSURL *_destinationURL;
    NSInteger _dragggingSequenceNumber;
    struct {
        unsigned int valid;
        unsigned int reserved:31;
    } _flags;
    id _private __unused;
}

/* The UTI of the promised file type. An exception is thrown if the fileType does not conform to kUTTypeData or kUTTypeDirectory */
@property(copy) NSString *fileType;

/* Your object that is ultimately responsible for determining the final file name and writing the promised data to the destination. */
@property(weak, nullable) id <NSFilePromiseProviderDelegate> delegate;

/* When a simple string identifier is not enough. Store a pointer to an object that contains the source of the promised file data. */
@property(strong, nullable) id userInfo;

/* See fileType above for restrictions on the type of files to pass in */
- (instancetype)initWithFileType:(NSString *)fileType delegate:(id <NSFilePromiseProviderDelegate>)delegate;

- (instancetype)init NS_DESIGNATED_INITIALIZER;
@end

@protocol NSFilePromiseProviderDelegate <NSObject>
@required
/* Return the base filename (not a full path) for this promise item. Do not start writing the file yet. */
- (NSString *)filePromiseProvider:(NSFilePromiseProvider*)filePromiseProvider fileNameForType:(NSString *)fileType;


/* Write the contents of this promise item to the provided URL and call completionHandler when done. NSFilePromiseReceiver automatically wraps this message with NSFileCoordinator when the promise destination is an NSFilePromiseReceiver. Always use the supplied URL. Note: This request shall occur on the NSOperationQueue supplied by -promiseOperationQueue.
 */
- (void)filePromiseProvider:(NSFilePromiseProvider*)filePromiseProvider writePromiseToURL:(NSURL *)url completionHandler:(void (^)(NSError * __nullable errorOrNil))completionHandler;

@optional
/* The operation queue that the write request will be issued from. If this method is not implemented, the mainOperationQueue is used. */
- (NSOperationQueue *)operationQueueForFilePromiseProvider:(NSFilePromiseProvider*)filePromiseProvider;
@end

NS_ASSUME_NONNULL_END


#endif /* NSFilePromiseProvider_h */
