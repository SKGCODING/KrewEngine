//
//  Sprite.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 16/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include <stdio.h>

#include "Sprite.h"

namespace KrewEngine {
    namespace Graphics {
        
        Sprite::Sprite(float x, float y, float width, float height, unsigned int color) : RenderData2D(Maths::Vector3(x, y, 0), Maths::Vector2(width, height), color), position(m_Position) {
            
            
            
        }
        
        Sprite::Sprite(float x, float y, float width, float height, Texture* texture) : RenderData2D(Maths::Vector3(x, y, 0), Maths::Vector2(width, height), 0xffffff), position(m_Position) {
            
            m_Texture = texture;
            
        }
        
    }
}
