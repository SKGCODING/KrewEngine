//
//  Render2D.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 14/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include <stdio.h>

#include "Render2D.h"
#include "RenderData2D.h"
#include "RenderPass2D.h"

namespace KrewEngine { namespace Graphics {
    void Render2D::Submit(const RenderData2D* renderable)
    {
        m_RenderQueue.push_back((StaticSprite*) renderable);
    }
    void Render2D::Flush()
    {
        while (!m_RenderQueue.empty())
        {
            const StaticSprite* sprite = m_RenderQueue.front();
            sprite->getVAO()->Bind();
            sprite->getIBO()->Bind();
            sprite->getShader().setUniformMatrices4("ml_matrix", Maths::Matrices4::Translation(sprite->getPosition()));
            glDrawElements(GL_TRIANGLES, sprite->getIBO()->GetCount(), GL_UNSIGNED_SHORT, nullptr);
            sprite->getIBO()->UnBind();
            sprite->getVAO()->UnBind();
            m_RenderQueue.pop_front();
        }
    }
     
} }
