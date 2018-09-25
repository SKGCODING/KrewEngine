//
//  Sprite.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 16/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Sprite_h
#define Sprite_h

#pragma once

#include "RenderData2D.h"

namespace KrewEngine {
    namespace Graphics {
        
        class Sprite : public RenderData2D {
            
        public:
            Maths::Vector3& position;
            Sprite(float x, float y, float width, float height, unsigned int color);
            Sprite(float x, float y, float width, float height, Texture* texture);
            
        };
    }
}

#endif /* Sprite_h */
