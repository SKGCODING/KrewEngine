//
//  AdressBook.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 26/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef AdressBook_h
#define AdressBook_h

#if __OBJC__

#if defined(__cplusplus)
extern "C" {
#endif
    
#import <AddressBook/ABTypedefs.h>
#import <AddressBook/ABGlobals.h>
#import <AddressBook/ABAddressBook.h>
#import <AddressBook/ABRecord.h>
#import <AddressBook/ABGroup.h>
#import <AddressBook/ABPerson.h>
#import <AddressBook/ABImageLoading.h>
#import <AddressBook/ABSearchElement.h>
#import <AddressBook/ABMultiValue.h>
#if defined(__cplusplus)
}
#endif
#else
#include <AddressBook/ABTypedefs.h>
#include <AddressBook/ABGlobalsC.h>
#include <AddressBook/ABAddressBookC.h>
#endif

#endif /* AdressBook_h */
