//
//  CGError.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 10/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef CGError_h
#define CGError_h

#ifndef CGERROR_H_
#define CGERROR_H_

#include <CoreGraphics/CGBase.h>
#include <stdint.h>

#include <CoreFoundation/CFAvailability.h>


/* Types used for errors and error handlers. */

typedef CF_ENUM (int32_t, CGError) {
    kCGErrorSuccess = 0,
    kCGErrorFailure = 1000,
    kCGErrorIllegalArgument = 1001,
    kCGErrorInvalidConnection = 1002,
    kCGErrorInvalidContext = 1003,
    kCGErrorCannotComplete = 1004,
    kCGErrorNotImplemented = 1006,
    kCGErrorRangeCheck = 1007,
    kCGErrorTypeCheck = 1008,
    kCGErrorInvalidOperation = 1010,
    kCGErrorNoneAvailable = 1011,
};

#endif /* CGERROR_H_ */


#endif /* CGError_h */
