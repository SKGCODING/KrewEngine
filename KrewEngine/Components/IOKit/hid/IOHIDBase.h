//
//  IOHIDBase.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOHIDBase_h
#define IOHIDBase_h

#ifndef _IOKIT_HID_IOHIDBASE_H_
#define _IOKIT_HID_IOHIDBASE_H_

#include <IOKit/hid/IOHIDKeys.h>
#include <IOKit/IOTypes.h> /* IOOptionBits */
#include <stdint.h> /* uint32_t */

__BEGIN_DECLS

CF_ASSUME_NONNULL_BEGIN
CF_IMPLICIT_BRIDGING_ENABLED

/*! @typedef IOHIDDeviceRef
 This is the type of a reference to the IOHIDDevice.
 */
typedef struct CF_BRIDGED_TYPE(id) __IOHIDDevice * IOHIDDeviceRef;

/*! @typedef IOHIDElementRef
 This is the type of a reference to the IOHIDElement.
 */
typedef struct CF_BRIDGED_TYPE(id) __IOHIDElement * IOHIDElementRef;

/*! @typedef IOHIDValueRef
 This is the type of a reference to the IOHIDValue.
 */
typedef struct CF_BRIDGED_TYPE(id) __IOHIDValue * IOHIDValueRef;

/*!
 @typedef    IOHIDTransactionDirectionType
 @abstract   Direction for an IOHIDDeviceTransactionInterface.
 @constant   kIOHIDTransactionDirectionTypeInput Transaction direction used for requesting element values from a device.
 @constant   kIOHIDTransactionDirectionTypeOutput Transaction direction used for dispatching element values to a device.
 */
typedef CF_ENUM(uint32_t, IOHIDTransactionDirectionType) {
    kIOHIDTransactionDirectionTypeInput,
    kIOHIDTransactionDirectionTypeOutput
};

/*!
 @enum       IOHIDTransactionOption
 @abstract   Options to be used in conjuntion with an IOHIDDeviceTransactionInterface.
 @constant   kIOHIDTransactionOptionDefaultOutputValue Option to set the default element value to be used with an
 IOHIDDeviceTransactionInterface of direction kIOHIDTransactionDirectionTypeOutput.
 */
static const IOOptionBits kIOHIDTransactionOptionDefaultOutputValue = 0x0001;


/*! @typedef IOHIDCallback
 @discussion Type and arguments of callout C function that is used when a completion routine is called.
 @param context void * pointer to your data, often a pointer to an object.
 @param result Completion result of desired operation.
 @param refcon void * pointer to more data.
 @param sender Interface instance sending the completion routine.
 */
typedef void (*IOHIDCallback)(
                              void * _Nullable        context,
                              IOReturn                result,
                              void * _Nullable        sender);

/*! @typedef IOHIDReportCallback
 @discussion Type and arguments of callout C function that is used when a HID report completion routine is called.
 @param context void * pointer to your data, often a pointer to an object.
 @param result Completion result of desired operation.
 @param sender Interface instance sending the completion routine.
 @param type The type of the report that was completed.
 @param reportID The ID of the report that was completed.
 @param report Pointer to the buffer containing the contents of the report.
 @param reportLength Size of the buffer received upon completion.
 */
typedef void (*IOHIDReportCallback) (
                                     void * _Nullable        context,
                                     IOReturn                result,
                                     void * _Nullable        sender,
                                     IOHIDReportType         type,
                                     uint32_t                reportID,
                                     uint8_t *               report,
                                     CFIndex                 reportLength);

/*! @typedef IOHIDReportCallback
 @discussion Type and arguments of callout C function that is used when a HID report completion routine is called.
 @param context void * pointer to your data, often a pointer to an object.
 @param result Completion result of desired operation.
 @param sender Interface instance sending the completion routine.
 @param type The type of the report that was completed.
 @param reportID The ID of the report that was completed.
 @param report Pointer to the buffer containing the contents of the report.
 @param reportLength Size of the buffer received upon completion.
 @param timeStamp The time at which the report arrived.
 */
typedef void (*IOHIDReportWithTimeStampCallback) (
                                                  void * _Nullable        context,
                                                  IOReturn                result,
                                                  void * _Nullable        sender,
                                                  IOHIDReportType         type,
                                                  uint32_t                reportID,
                                                  uint8_t *               report,
                                                  CFIndex                 reportLength,
                                                  uint64_t                timeStamp);

/*! @typedef IOHIDValueCallback
 @discussion Type and arguments of callout C function that is used when an element value completion routine is called.
 @param context void * pointer to more data.
 @param result Completion result of desired operation.
 @param sender Interface instance sending the completion routine.
 @param value IOHIDValueRef containing the returned element value.
 */
typedef void (*IOHIDValueCallback) (
                                    void * _Nullable        context,
                                    IOReturn                result,
                                    void * _Nullable        sender,
                                    IOHIDValueRef           value);

/*! @typedef IOHIDValueMultipleCallback
 @discussion Type and arguments of callout C function that is used when an element value completion routine is called.
 @param context void * pointer to more data.
 @param result Completion result of desired operation.
 @param sender Interface instance sending the completion routine.
 @param multiple CFDictionaryRef containing the returned element key value pairs.
 */
typedef void (*IOHIDValueMultipleCallback) (
                                            void * _Nullable        context,
                                            IOReturn                result,
                                            void * _Nullable        sender,
                                            CFDictionaryRef         multiple);

/*! @typedef IOHIDDeviceCallback
 @discussion Type and arguments of callout C function that is used when a device routine is called.
 @param context void * pointer to more data.
 @param result Completion result of desired operation.
 @param device IOHIDDeviceRef containing the sending device.
 */
typedef void (*IOHIDDeviceCallback) (
                                     void * _Nullable        context,
                                     IOReturn                result,
                                     void * _Nullable        sender,
                                     IOHIDDeviceRef          device);

CF_IMPLICIT_BRIDGING_DISABLED
CF_ASSUME_NONNULL_END

__END_DECLS

#endif /* _IOKIT_HID_IOHIDBASE_H_ */


#endif /* IOHIDBase_h */
