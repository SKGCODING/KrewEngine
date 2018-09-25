//
//  CGPDFStream.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 10/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef CGPDFStream_h
#define CGPDFStream_h

#ifndef CGPDFSTREAM_H_
#define CGPDFSTREAM_H_

typedef struct CGPDFStream *CGPDFStreamRef;

#include <CoreFoundation/CFBase.h>
#include <CoreFoundation/CFAvailability.h>
#include <stdint.h>

typedef CF_ENUM (int32_t, CGPDFDataFormat) {
    CGPDFDataFormatRaw, CGPDFDataFormatJPEGEncoded, CGPDFDataFormatJPEG2000
};

#include <CoreGraphics/CGBase.h>
#include <CoreGraphics/CGPDFDictionary.h>
#include <CoreGraphics/CGPDFStream.h>
#include <CoreFoundation/CFData.h>

CF_IMPLICIT_BRIDGING_ENABLED

CF_ASSUME_NONNULL_BEGIN

/* Return the dictionary of `stream'. */

CG_EXTERN CGPDFDictionaryRef __nullable CGPDFStreamGetDictionary(
                                                                 CGPDFStreamRef cg_nullable stream)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_2_0);

/* Return the data of `stream'. */

CG_EXTERN CFDataRef __nullable CGPDFStreamCopyData(
                                                   CGPDFStreamRef cg_nullable stream,
                                                   CGPDFDataFormat * cg_nullable format)
CG_AVAILABLE_STARTING(__MAC_10_3, __IPHONE_2_0);

CF_ASSUME_NONNULL_END

CF_IMPLICIT_BRIDGING_DISABLED

#endif /* CGPDFSTREAM_H_ */


#endif /* CGPDFStream_h */
