//
//  Layer.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Layer_h
#define Layer_h

#pragma once

#include "RenderData2D.h"
#include "RenderPass2D.h"
#include "VertexArray.h"

namespace KrewEngine {
    namespace Graphics {
        
        class Layer {
            
        protected:
            RenderPass2D* m_Renderer;
            std::vector<RenderData2D*> m_Renderables;
            Shader* m_Shader;
            Maths::Matrices4 m_ProjectionMatrix;
            
        public:
            Layer(RenderPass2D* renderer, Shader* shader, Maths::Matrices4 projectionMatrix);
            virtual ~Layer();
            virtual void Add(RenderData2D* renderable);
            virtual void Render();
            
            inline const std::vector<RenderData2D*>& getRenderables() const {
                
                return m_Renderables;
                
            };
        };
    }
}

#endif /* Layer_h */
