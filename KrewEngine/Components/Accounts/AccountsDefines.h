//
//  AccountsDefines.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 21/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef AccountsDefines_h
#define AccountsDefines_h

#ifdef __cplusplus
#define ACCOUNTS_EXTERN        extern "C" __attribute__((visibility ("default")))
#else
#define ACCOUNTS_EXTERN            extern __attribute__((visibility ("default")))
#endif

#define ACCOUNTS_CLASS_AVAILABLE(_desktopIntro, _iphoneIntro) __attribute__((visibility("default"))) NS_CLASS_AVAILABLE(_desktopIntro, _iphoneIntro)

#endif /* AccountsDefines_h */
