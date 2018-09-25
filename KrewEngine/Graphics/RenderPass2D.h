//
//  RenderPass2D.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 14/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef RenderPass2D_h
#define RenderPass2D_h

#pragma once

#include <vector>
#include "glew.h"
#include "Font.h"
#include "maths.h"
#include "RenderData2D.h"

namespace KrewEngine { namespace Graphics {
    
    class RenderData2D;
    
    class RenderPass2D
    {
    protected:
        std::vector<Maths::Matrices4> m_TransformationStack;
        const Maths::Matrices4* m_TransformationBack;
    protected:
        RenderPass2D()
        {
           
            m_TransformationStack.push_back(Maths::Matrices4::Identity());
            m_TransformationBack = &m_TransformationStack.back();
        }
    public:
        void Push(const Maths::Matrices4& matrix, bool override = false)
        {
            
            if (override)
                m_TransformationStack.push_back(matrix);
            else
                m_TransformationStack.push_back(m_TransformationStack.back() * matrix);
            
            m_TransformationBack = &m_TransformationStack.back();
        }
        void Pop()
        {
            if (m_TransformationStack.size() > 1)
                m_TransformationStack.pop_back();
            
            m_TransformationBack = &m_TransformationStack.back();
        }
        
        virtual void Begin() {}
        virtual void Submit(const RenderData2D* renderable) = 0;
        virtual void DrawString(const std::string& text, const Maths::Vector3 position,const Font& font, unsigned int color) {}
        virtual void End() {}
        virtual void Flush() = 0;
        
    };
}
}
     
#endif /* RenderPass2D_h */
