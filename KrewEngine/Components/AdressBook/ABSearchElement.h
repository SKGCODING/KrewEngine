//
//  ABSearchElement.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 26/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef ABSearchElement_h
#define ABSearchElement_h

#ifndef __ABSEARCHELEMENT__
#define __ABSEARCHELEMENT__

#import <Foundation/Foundation.h>

#import <AddressBook/ABTypedefs.h>
#import <AddressBook/ABGlobals.h>

@class ABRecord;

// ================================================================================
//    interface ABSearchElement : NSObject
// ================================================================================
// Use -[ABPerson searchElementForProperty:...] and -[ABGroup searchElementForProperty:...] to create
// search elements on ABPerson and ABGroup.

@interface ABSearchElement : NSObject

+ (ABSearchElement *)searchElementForConjunction:(ABSearchConjunction)conjuction children:(NSArray *)children;
// Creates a search element combining several sub search elements.
// conjunction can be kABSearchAnd or kABSearchOr.
// Raises if children is nil or empty

- (BOOL)matchesRecord:(ABRecord *)record;
// Given a record returns YES if this record matches the search element
// Raises if record is nil
@end

#endif // __ABSEARCHELEMENT__


#endif /* ABSearchElement_h */
