//
//  StaticSprite.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 16/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include <stdio.h>

#include "StaticSprite.h"

namespace KrewEngine {
    namespace Graphics {
        
        StaticSprite::StaticSprite(float x, float y, float width, float height, const Maths::Vector4& color, Shader& shader) : RenderData2D(Maths::Vector3(x, y, 0), Maths::Vector2(width, height), 0xffff00ff), m_Shader(shader){
            
            m_VertexArray = new VertexArray();
            GLfloat vertices[] =
            {
                0, 0, 0,
                0, height, 0,
                width, height, 0,
                width, 0, 0
            };
            GLfloat colors[] =
            {
                color.x, color.y, color.z, color.w,
                color.x, color.y, color.z, color.w,
                color.x, color.y, color.z, color.w,
                color.x, color.y, color.z, color.w
            };
            m_VertexArray->addBuffer(new Buffer(vertices, 4 * 3, 3), 0);
            m_VertexArray->addBuffer(new Buffer(colors, 4 * 4, 4), 1);
            GLushort indices[] = { 0, 1, 2, 2, 3, 0 };
            m_IndexBuffer = new IndexBuffer(indices, 6);
            
        }
        
        StaticSprite::~StaticSprite() {
            
            delete m_VertexArray;
            delete m_IndexBuffer;
            
        }
    }
}
