//
//  anchor.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef anchor_h
#define anchor_h

#ifndef ANCHOR_H_62B23520_7C8E_11DE_8A39_0800200C9A66
#define ANCHOR_H_62B23520_7C8E_11DE_8A39_0800200C9A66

#if defined(_MSC_VER) ||                                            \
(defined(__GNUC__) && (__GNUC__ == 3 && __GNUC_MINOR__ >= 4) || \
(__GNUC__ >= 4))  // GCC supports "pragma once" correctly since 3.4
#pragma once
#endif

#include <cstddef>

namespace YAML {
    typedef std::size_t anchor_t;
    const anchor_t NullAnchor = 0;
}

#endif  // ANCHOR_H_62B23520_7C8E_11DE_8A39_0800200C9A66

#endif /* anchor_h */
