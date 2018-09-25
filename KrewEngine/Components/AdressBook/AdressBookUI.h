//
//  AdressBookUI.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 26/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef AdressBookUI_h
#define AdressBookUI_h

#if __OBJC__
#if defined(__cplusplus)
extern "C" {
#endif
#import <AddressBook/ABPeoplePickerView.h>
#if MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_7
#import <AddressBook/ABPersonView.h>
#endif
#import <AddressBook/ABActions.h>
#if defined(__cplusplus)
}
#endif
#else
#include <AddressBook/ABPeoplePickerC.h>
#include <AddressBook/ABActionsC.h>
#endif

#endif /* AdressBookUI_h */
