//
//  Group.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 26/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Group_h
#define Group_h

#pragma once

#include "RenderData2D.h"

namespace KrewEngine {
    namespace Graphics {
        
        class Group : public RenderData2D {
            
        private:
            std::vector<RenderData2D*> m_Renderables;
            Maths::Matrices4 m_TransformationMatrix;
            
        public:
            Group(const Maths::Matrices4& Transform);
            ~Group();
            void Add(RenderData2D* renderable);
            void Submit(RenderPass2D* renderer) const override;
            
        };
    }
}

#endif /* Group_h */
