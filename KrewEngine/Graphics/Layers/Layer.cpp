//
//  Layer.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include "Layer.h"

namespace KrewEngine { namespace Graphics {
    
    Layer::Layer(RenderPass2D* renderer, Shader* shader, Maths::Matrices4 projectionMatrix)
    : m_Renderer(renderer), m_Shader(shader), m_ProjectionMatrix(projectionMatrix)
    {
        m_Shader->enable();
        m_Shader->setUniformMatrices4("pr_matrix", m_ProjectionMatrix);
        
        GLint texIDs[] = {
            
            0,  1,  2,  3,  4,  5,  6,  7,  8,  9,
            10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
            20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
            30, 31
            
        };
        
        m_Shader->setUniform1v("textures", texIDs, 32);
        m_Shader->disable();
    }
    
    Layer::~Layer()
    {
        delete m_Shader;
        delete m_Renderer;
        
        for (int i = 0; i < m_Renderables.size(); i++)
            delete m_Renderables[i];
    }
    
    void Layer::Add(RenderData2D* renderable)
    {
        m_Renderables.push_back(renderable);
    }
    
    void Layer::Render()
    {
        m_Shader->enable();
        m_Renderer->Begin();
        
        for (const RenderData2D* renderable : m_Renderables)
            renderable->Submit(m_Renderer);
        
        m_Renderer->End();
        m_Renderer->Flush();
    }
    
} }
