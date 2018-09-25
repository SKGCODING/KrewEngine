//
//  IndexBuffer.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 13/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef IndexBuffer_h
#define IndexBuffer_h

#pragma once

#include "glew.h"

namespace KrewEngine {
    namespace Graphics {
        
        class IndexBuffer {
            
        private:
            GLuint m_BufferID;
            GLuint m_Count;
            
        public:
            IndexBuffer(GLushort* data, GLsizei count);
            IndexBuffer(GLuint* data, GLsizei count);
            ~IndexBuffer();
            
            void Bind() const;
            void UnBind() const;
            
            inline GLuint GetCount() const { return m_Count; }
        };
    }
}

#endif
