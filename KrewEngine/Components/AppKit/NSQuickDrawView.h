//
//  NSQuickDrawView.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSQuickDrawView_h
#define NSQuickDrawView_h

#if !__LP64__
#import <AppKit/NSView.h>

NS_CLASS_DEPRECATED_MAC(10_0, 10_4)
@interface NSQuickDrawView : NSView
{
@private
    void*  _qdPort;
    void*  _savePort;
    BOOL   _synchToView;
}

- (void*) qdPort NS_RETURNS_INNER_POINTER NS_DEPRECATED_MAC(10_0, 10_4);

@end
#endif /* !__LP64__ */

#endif /* NSQuickDrawView_h */
