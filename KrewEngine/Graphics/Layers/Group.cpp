//
//  Group.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 26/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include <stdio.h>

#include "Group.h"

namespace KrewEngine {
    namespace Graphics {
        
        Group::Group(const Maths::Matrices4& Transform) : m_TransformationMatrix(Transform) {
            
            
            
        }
        
        Group::~Group() {
            
            for (int i = 0; i < m_Renderables.size(); i++) {
                delete m_Renderables[i];
            }
            
        }
        
        void Group::Add(RenderData2D* renderable) {
            
            m_Renderables.push_back(renderable);
            
        }
        
        void Group::Submit(RenderPass2D* renderer) const {
            
            renderer->Push(m_TransformationMatrix);
            
            for (const RenderData2D* renderable: m_Renderables) {
                
                renderable->Submit(renderer);
                
            }
            
            renderer->Pop();
        }
    }
}
