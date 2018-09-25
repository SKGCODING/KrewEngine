//
//  IndexBuffer.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 13/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include <stdio.h>

#include "IndexBuffer.h"

namespace KrewEngine {
    namespace Graphics {
        
        IndexBuffer::IndexBuffer(GLushort* data, GLsizei count) : m_Count(count){
            
            glGenBuffers(1, &m_BufferID);
            glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_BufferID);
            glBufferData(GL_ELEMENT_ARRAY_BUFFER, count * sizeof(GLushort), data, GL_STATIC_DRAW);
            glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
            
        }
        
        IndexBuffer::IndexBuffer(GLuint* data, GLsizei count) : m_Count(count){
            
            glGenBuffers(1, &m_BufferID);
            glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_BufferID);
            glBufferData(GL_ELEMENT_ARRAY_BUFFER, count * sizeof(GLuint), data, GL_STATIC_DRAW);
            glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
            
        }
        
        IndexBuffer::~IndexBuffer() {
            
            glDeleteBuffers(1, &m_BufferID);
            
        }
        
        void IndexBuffer::Bind() const {
            
            glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_BufferID);
            
        }
        
        void IndexBuffer::UnBind() const {
            
            glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
            
        }
    }
}
