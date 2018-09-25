//
//  StaticSprite.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 16/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef StaticSprite_h
#define StaticSprite_h

#pragma once

#include "RenderData2D.h"

namespace KrewEngine {
    namespace Graphics {
        
        class StaticSprite : public RenderData2D {
            
        private:
            VertexArray* m_VertexArray;
            IndexBuffer* m_IndexBuffer;
            Shader& m_Shader;
            
        public:
            StaticSprite(float x, float y, float width, float height, const Maths::Vector4& color, Shader& shader);
            ~StaticSprite();
            
            inline const VertexArray* getVAO() const {
                
                return m_VertexArray;
                
            }
            
            inline const IndexBuffer* getIBO() const {
                
                return m_IndexBuffer;
                
            }
            
            inline Shader& getShader() const {
                
                return m_Shader;
                
            }
        };
    }
}

#endif /* StaticSprite_h */
