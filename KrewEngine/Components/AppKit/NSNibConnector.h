//
//  NSNibConnector.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSNibConnector_h
#define NSNibConnector_h

#import <Foundation/NSObject.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSNibConnector : NSObject <NSCoding>
{
@private
    id _source;        /* The source of the connection. */
    id _destination;    /* The destination of the connection. */
    NSString *_label;    /* The label of the connection. */
}
@property (nullable, assign) id source;
@property (nullable, assign) id destination;
@property (copy) NSString *label;
- (void)replaceObject:(id)oldObject withObject:(id)newObject;
- (void)establishConnection;
@end

NS_ASSUME_NONNULL_END

#endif /* NSNibConnector_h */
