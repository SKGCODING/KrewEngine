//
//  Render2D.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 14/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Render2D_h
#define Render2D_h

#pragma once
#include <deque>
#include "StaticSprite.h"

namespace KrewEngine { namespace Graphics {
    class Render2D : public RenderData2D
    {
    private:
        std::deque<const StaticSprite*> m_RenderQueue;
    public:
        void Submit(const RenderData2D* renderable) ;
        void Flush() ;
    };
} } 

#endif /* Render2D_h */

