//
//  NSErrors.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSErrors_h
#define NSErrors_h

#import <AppKit/AppKitDefines.h>

@class NSString;

NS_ASSUME_NONNULL_BEGIN

// The following strings are the names of exceptions the AppKit can raise

APPKIT_EXTERN NSExceptionName NSTextLineTooLongException;
APPKIT_EXTERN NSExceptionName NSTextNoSelectionException;
APPKIT_EXTERN NSExceptionName NSWordTablesWriteException;
APPKIT_EXTERN NSExceptionName NSWordTablesReadException;
APPKIT_EXTERN NSExceptionName NSTextReadException;
APPKIT_EXTERN NSExceptionName NSTextWriteException;
APPKIT_EXTERN NSExceptionName NSPasteboardCommunicationException;
APPKIT_EXTERN NSExceptionName NSPrintingCommunicationException;
APPKIT_EXTERN NSExceptionName NSAbortModalException;
APPKIT_EXTERN NSExceptionName NSAbortPrintingException;
APPKIT_EXTERN NSExceptionName NSIllegalSelectorException;
APPKIT_EXTERN NSExceptionName NSAppKitVirtualMemoryException;
APPKIT_EXTERN NSExceptionName NSBadRTFDirectiveException;
APPKIT_EXTERN NSExceptionName NSBadRTFFontTableException;
APPKIT_EXTERN NSExceptionName NSBadRTFStyleSheetException;
APPKIT_EXTERN NSExceptionName NSTypedStreamVersionException;
APPKIT_EXTERN NSExceptionName NSTIFFException;
APPKIT_EXTERN NSExceptionName NSPrintPackageException;
APPKIT_EXTERN NSExceptionName NSBadRTFColorTableException;
APPKIT_EXTERN NSExceptionName NSDraggingException;
APPKIT_EXTERN NSExceptionName NSColorListIOException;
APPKIT_EXTERN NSExceptionName NSColorListNotEditableException;
APPKIT_EXTERN NSExceptionName NSBadBitmapParametersException;
APPKIT_EXTERN NSExceptionName NSWindowServerCommunicationException;
APPKIT_EXTERN NSExceptionName NSFontUnavailableException;
APPKIT_EXTERN NSExceptionName NSPPDIncludeNotFoundException;
APPKIT_EXTERN NSExceptionName NSPPDParseException;
APPKIT_EXTERN NSExceptionName NSPPDIncludeStackOverflowException;
APPKIT_EXTERN NSExceptionName NSPPDIncludeStackUnderflowException;
APPKIT_EXTERN NSExceptionName NSRTFPropertyStackOverflowException;
APPKIT_EXTERN NSExceptionName NSAppKitIgnoredException;
APPKIT_EXTERN NSExceptionName NSBadComparisonException;
APPKIT_EXTERN NSExceptionName NSImageCacheException;
APPKIT_EXTERN NSExceptionName NSNibLoadingException;
APPKIT_EXTERN NSExceptionName NSBrowserIllegalDelegateException;
APPKIT_EXTERN NSExceptionName NSAccessibilityException NS_DEPRECATED_MAC(10_1, 10_11, "Exceptions are no longer appropriate for indicating errors in accessibility API. Unexpected values should be handled through appropriate type checking.");

NS_ASSUME_NONNULL_END

#endif /* NSErrors_h */
