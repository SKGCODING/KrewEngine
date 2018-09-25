//
//  VertexArray.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 13/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include <stdio.h>

#include "VertexArray.h"

namespace KrewEngine {
    namespace Graphics {
        
        VertexArray::VertexArray() {
            
            glGenVertexArrays(1, &m_ArrayID);
            
        }
        
        VertexArray::~VertexArray() {
            
            for (int i = 0; i < m_Buffers.size(); i++)
            delete m_Buffers[i];
            
            glDeleteVertexArrays(1, &m_ArrayID);
            
        }
        
        void VertexArray::addBuffer(Buffer* buffer, GLuint index) {
            
            Bind();
            buffer->Bind();
            
            glEnableVertexAttribArray(index);
            glVertexAttribPointer(index, buffer->GetComponentCount(), GL_FLOAT, GL_FALSE, 0, 0);
            
            buffer->UnBind();
            UnBind();
            m_Buffers.push_back(buffer);
            
        }
        
        void VertexArray::Bind() const {
            
            glBindVertexArray(m_ArrayID);
            
        }
        
        void VertexArray::UnBind() const {
            
            glBindVertexArray(0);
            
        }
        
    }
}
