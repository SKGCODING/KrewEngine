//
//  CGPDFOperatorTable.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 10/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef CGPDFOperatorTable_h
#define CGPDFOperatorTable_h

#ifndef CGPDFOPERATORTABLE_H_
#define CGPDFOPERATORTABLE_H_

#include <CoreFoundation/CFBase.h>
#include <CoreFoundation/CFAvailability.h>
#include <stdint.h>

typedef struct CGPDFOperatorTable *CGPDFOperatorTableRef;

#include <CoreGraphics/CGPDFScanner.h>

CF_IMPLICIT_BRIDGING_ENABLED

CF_ASSUME_NONNULL_BEGIN

typedef void (*CGPDFOperatorCallback)(CGPDFScannerRef  scanner,
                                      void * __nullable info);

/* Return an empty operator table. */

CG_EXTERN CGPDFOperatorTableRef __nullable CGPDFOperatorTableCreate(void)
CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

/* Increment the retain count of `table'. */

CG_EXTERN CGPDFOperatorTableRef cg_nullable CGPDFOperatorTableRetain(
                                                                     CGPDFOperatorTableRef cg_nullable table)
CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

/* Decrement the retain count of `table'. */

CG_EXTERN void CGPDFOperatorTableRelease(
                                         CGPDFOperatorTableRef cg_nullable table)
CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

/* Set the callback for the operator named `name' to `callback' */

CG_EXTERN void CGPDFOperatorTableSetCallback(
                                             CGPDFOperatorTableRef cg_nullable table,
                                             const char * cg_nullable name, CGPDFOperatorCallback cg_nullable callback)
CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

CF_ASSUME_NONNULL_END

CF_IMPLICIT_BRIDGING_DISABLED

#endif  /* CGPDFOPERATORTABLE_H_ */


#endif /* CGPDFOperatorTable_h */
