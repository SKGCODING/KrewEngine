//
//  RenderData2D.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 14/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef RenderData2D_h
#define RenderData2D_h

#pragma once

#include "Buffer.h"
#include "IndexBuffer.h"
#include "VertexArray.h"
#include "RenderPass2D.h"
#include "Maths.h"
#include "Shader.h"
#include "Texture.h"

namespace KrewEngine {
    namespace Graphics {
        
        struct VertexData{
            
            Maths::Vector3 vertex;
            Maths::Vector2 uv;
            float tid;
            unsigned int color;
            
        };
        
    class RenderData2D {
        
    protected:
        Maths::Vector3 m_Position;
        Maths::Vector2 m_Size;
        unsigned int m_Color;
        std::vector<Maths::Vector2> m_UV;
        Texture* m_Texture;
        
        RenderData2D() : m_Texture(nullptr) {
            
            SetUVDefaults();
            
        }
        
    public:
        RenderData2D(Maths::Vector3 position, Maths::Vector2 size, unsigned int color)
        : m_Position(position), m_Size(size), m_Color(color) {

            SetUVDefaults();
            
        }
        virtual ~RenderData2D() {}
        
        virtual void Submit(RenderPass2D* renderer) const {
            
            renderer->Submit(this);
            
        }
        
        void SetColor(unsigned int color) {
            
            m_Color = color;
            
        }
        
        void SetColor(const Maths::Vector4& color) {
        
            int r = color.x * 255.0f;
            int g = color.y * 255.0f;
            int b = color.z * 255.0f;
            int a = color.w * 255.0f;
            
            m_Color = a << 24 | b << 16 | g << 8 | r;
            
        }

        inline const Maths::Vector3& getPosition() const {
            
            return m_Position;
            
        }
        inline const Maths::Vector2& getSize() const {
            
            return m_Size;
            
        }
        inline const unsigned int getColor() const {
            
            return m_Color;
            
        }
        
        inline const std::vector<Maths::Vector2>& getUV() const {
            
            return m_UV;
            
        }
        
        inline const GLuint getTID() const {
            
            return m_Texture ? m_Texture->getID() : 0;
            
        }
        
    private:
        void SetUVDefaults() {
            
            m_UV.push_back(Maths::Vector2(0, 0));
            m_UV.push_back(Maths::Vector2(0, 1));
            m_UV.push_back(Maths::Vector2(1, 1));
            m_UV.push_back(Maths::Vector2(1, 0));
            
            }
        };
    }
}

#endif
