//
//  IOHIDEventSystemClient.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IOHIDEventSystemClient_h
#define IOHIDEventSystemClient_h

#ifndef IOHIDEventSystemClient_h
#define IOHIDEventSystemClient_h

#include <CoreFoundation/CoreFoundation.h>

__BEGIN_DECLS
CF_ASSUME_NONNULL_BEGIN
CF_IMPLICIT_BRIDGING_ENABLED

/*!
 @header IOHIDEventSystemClient
 
 IOHIDEventSystemClient serves as a client that can be used
 for reading/writing specific properties of the HID event system, as
 well as getting services of the HID event system. A list of accessible
 properties can be found in <code>IOKit/hid/IOHIDProperties.h</code>.
 
 @seealso IOKit/hidsystem/IOHIDServiceClient.h
 */

typedef struct CF_BRIDGED_TYPE(id) __IOHIDEventSystemClient * IOHIDEventSystemClientRef;

/*!
 * @function    IOHIDEventSystemClientCreateSimpleClient
 *
 * @abstract    Creates a client of the HID event system that has to ability to read/write certain
 *              properties.
 *
 * @discussion  Certain properties have the ability to be set/read by clients, see
 *              <code>IOHIDProperties.h</code> for a list of these properties.
 *
 * @param       allocator a custom allocator reference to be used for allocation of the result.
 *
 * @result      Returns a <code>IOHIDEventSystemClientRef</code> on success.
 *              Caller should CFRelease the client when they are finished with it, or keep a
 *              reference to the client if multiple properties need to be set/read.
 */
IOHIDEventSystemClientRef IOHIDEventSystemClientCreateSimpleClient(CFAllocatorRef _Nullable allocator);

/*!
 * @function    IOHIDEventSystemClientSetProperty
 *
 * @abstract    Sets a property on the HID event system.
 *
 * @param       client the HID client that created via <code>IOHIDEventSystemClientCreateSimpleClient()</code>.
 *
 * @param       key the property key to set. A list of keys can be found in <code>HIDProperties.h</code>.
 *
 * @param       property the value to set the property.
 *
 * @result      Returns true on success.
 */
Boolean IOHIDEventSystemClientSetProperty(IOHIDEventSystemClientRef client, CFStringRef key, CFTypeRef property);

/*!
 * @function    IOHIDEventSystemClientCopyProperty
 *
 * @abstract    Copies a property from the HID event system.
 *
 * @param       client the HID client created via <code>IOHIDEventSystemClientCreateSimpleClient()</code>.
 *
 * @param       key the property key to copy. A list of keys can be found in <code>HIDProperties.h</code>.
 *
 * @result      Returns a CFTypeRef of the property to be copied on success, otherwise NULL.
 *              Caller is responsible for calling CFRelease on the property.
 */
CFTypeRef _Nullable IOHIDEventSystemClientCopyProperty(IOHIDEventSystemClientRef client, CFStringRef key);

/*!
 * @function    IOHIDEventSystemClientGetTypeID
 *
 * @result      Returns the CFTypeID of the <code>IOHIDEventSystemClient</code> class.
 */
CFTypeID IOHIDEventSystemClientGetTypeID(void);

/*!
 * @function    IOHIDEventSystemClientCopyServices
 *
 * @abstract    Copies all services available to the client.
 *
 * @discussion  Useful for seeing services that are available. Clients can further probe
 *              the services with the APIs available in <code>IOHIDServiceClient.h</code>.
 *
 * @param       client the HID client that created via <code>IOHIDEventSystemClientCreateSimpleClient()</code>.
 *
 * @result      On success, returns a CFArrayRef of <code>IOHIDServiceClientRefs</code> that are
 *              available to the client. Caller is responsible for releasing the array.
 */
CFArrayRef _Nullable IOHIDEventSystemClientCopyServices(IOHIDEventSystemClientRef client);

CF_IMPLICIT_BRIDGING_DISABLED
CF_ASSUME_NONNULL_END
__END_DECLS

#endif /* IOHIDEventSystemClient_h */


#endif /* IOHIDEventSystemClient_h */
