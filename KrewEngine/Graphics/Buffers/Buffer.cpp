//
//  Buffer.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 13/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include <stdio.h>

#include "Buffer.h"

namespace KrewEngine {
    namespace Graphics {
        
        Buffer::Buffer(GLfloat* data, GLsizei count, GLuint componentCount) : m_ComponentCount(componentCount){
            
            glGenBuffers(1, &m_BufferID);
            glBindBuffer(GL_ARRAY_BUFFER, m_BufferID);
            glBufferData(GL_ARRAY_BUFFER, count * sizeof(GLfloat), data, GL_STATIC_DRAW);
            glBindBuffer(GL_ARRAY_BUFFER, 0);
            
        }
        
        Buffer::~Buffer() {
            
            glDeleteBuffers(1, &m_BufferID);
            
        }
        
        void Buffer::Bind() const {
            
            glBindBuffer(GL_ARRAY_BUFFER, m_BufferID);
            
        }
        
        void Buffer::UnBind() const {
            
            glBindBuffer(GL_ARRAY_BUFFER, 0);
            
        }
    }
}
