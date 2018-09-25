//
//  MathFunctions.h
//  Krew Engine
//
//  Created by Diego Revilla Rubiera on 10/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef MathFunctions_h
#define MathFunctions_h

#pragma once

#define _USE_MATH_DEFINES
#include <math.h>

namespace KrewEngine {
    namespace Maths {
    
    inline float toRadians(float degrees) {
        
        return degrees * (M_PI / 180.0f);
        
        }
    }
}

#endif /* MathFunctions.h */
