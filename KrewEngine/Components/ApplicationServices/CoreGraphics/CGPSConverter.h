//
//  CGPSConvert.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 10/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef CGPSConvert_h
#define CGPSConvert_h

#define CGPSCONVERTER_H_

#include <CoreFoundation/CFBase.h>
#include <CoreFoundation/CFAvailability.h>
#include <stdint.h>

typedef struct CF_BRIDGED_TYPE(id) CGPSConverter *CGPSConverterRef;

#include <CoreGraphics/CGBase.h>
#include <CoreGraphics/CGDataConsumer.h>
#include <CoreGraphics/CGDataProvider.h>
#include <CoreFoundation/CFDictionary.h>
#include <CoreFoundation/CFString.h>

CF_IMPLICIT_BRIDGING_ENABLED

CF_ASSUME_NONNULL_BEGIN

/* CGPSConverter callbacks.
 
 `version' is the version number of the structure passed in as a parameter
 to the converter creation functions. The structure defined below is
 version 0.
 
 `beginDocument', if non-NULL, is called at the beginning of the
 conversion of the PostScript document.
 
 `endDocument', if non-NULL, is called at the end of conversion of the
 PostScript document.
 
 `beginPage', if non-NULL, is called at the start of the conversion of
 each page in the PostScript document.
 
 `endPage', if non-NULL, is called at the end of the conversion of each
 page in the PostScript document.
 
 `noteProgress', if non-NULL, is called periodically during the conversion
 to indicate that conversion is proceeding.
 
 `noteMessage', if non-NULL, is called to pass any messages that might
 result during the conversion.
 
 `releaseInfo', if non-NULL, is called when the converter is
 deallocated. */

typedef void (*CGPSConverterBeginDocumentCallback)(void * __nullable info);

typedef void (*CGPSConverterEndDocumentCallback)(void * __nullable info,
                                                 bool success);

typedef void (*CGPSConverterBeginPageCallback)(void * __nullable info,
                                               size_t pageNumber,
                                               CFDictionaryRef  pageInfo);

typedef void (*CGPSConverterEndPageCallback)(void * __nullable info,
                                             size_t pageNumber,
                                             CFDictionaryRef  pageInfo);

typedef void (*CGPSConverterProgressCallback)(void * __nullable info);

typedef void (*CGPSConverterMessageCallback)(void * __nullable info,
                                             CFStringRef  message);

typedef void (*CGPSConverterReleaseInfoCallback)(void * __nullable info);

struct CGPSConverterCallbacks {
    unsigned int version;
    CGPSConverterBeginDocumentCallback __nullable beginDocument;
    CGPSConverterEndDocumentCallback __nullable endDocument;
    CGPSConverterBeginPageCallback __nullable beginPage;
    CGPSConverterEndPageCallback __nullable endPage;
    CGPSConverterProgressCallback __nullable noteProgress;
    CGPSConverterMessageCallback __nullable noteMessage;
    CGPSConverterReleaseInfoCallback __nullable releaseInfo;
};
typedef struct CGPSConverterCallbacks CGPSConverterCallbacks;

/* Create a CGPSConverter, using `callbacks' to populate its callback table.
 Each callback will be supplied the `info' value when called. */

CG_EXTERN CGPSConverterRef __nullable CGPSConverterCreate(void * __nullable info,
                                                          const CGPSConverterCallbacks *  callbacks,
                                                          CFDictionaryRef __nullable options)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_NA);

/* Use `converter' to convert PostScript data to PDF data. The PostScript
 data is supplied by `provider'; the resulting PDF is written to
 `consumer'. Returns true if the conversion succeeded; false otherwise. */

CG_EXTERN bool CGPSConverterConvert(CGPSConverterRef  converter,
                                    CGDataProviderRef  provider, CGDataConsumerRef  consumer,
                                    CFDictionaryRef __nullable options)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_NA);

/* Tell the `converter' to abort conversion at the next possible
 opportunity. */

CG_EXTERN bool CGPSConverterAbort(CGPSConverterRef  converter)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_NA);

/* Return true if `converter' is currently converting data. */

CG_EXTERN bool CGPSConverterIsConverting(CGPSConverterRef  converter)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_NA);

/* Return the CFTypeID of the CGPSConverter class. */

CG_EXTERN CFTypeID CGPSConverterGetTypeID(void)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_NA);

CF_ASSUME_NONNULL_END

CF_IMPLICIT_BRIDGING_DISABLED

#endif /* CGPSCONVERTER_H_ */


#endif /* CGPSConvert_h */
