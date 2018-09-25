//
//  SFNTTypes.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 05/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef SFNTTypes_h
#define SFNTTypes_h

#ifndef __ATS_SFNTTYPES__
#define __ATS_SFNTTYPES__

#include <CoreText/SFNTTypes.h>

/*   Deprecated "don't care" values - use kFontNoPlatformCode, kFontNoScriptCode,
 kFontNoLanguageCode, kFontNoName instead
 */
enum {
    kFontNoPlatform                 = (unsigned int)(~0),
    kFontNoScript                   = (unsigned int)(~0),
    kFontNoLanguage                 = (unsigned int)(~0),
    kFontNoName                     = (unsigned int)(~0)
};

#endif /* __ATS_SFNTTYPES__ */

#endif /* SFNTTypes_h */
