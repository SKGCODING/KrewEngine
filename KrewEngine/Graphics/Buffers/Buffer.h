//
//  Buffer.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 13/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Buffer_h
#define Buffer_h

#pragma once

#include "glew.h"

namespace KrewEngine {
    namespace Graphics {
        
        class Buffer {
            
        private:
            GLuint m_BufferID;
            GLuint m_ComponentCount;
            
        public:
            Buffer(GLfloat* data, GLsizei count, GLuint componentCount);
            ~Buffer();
            
            void Bind() const;
            void UnBind() const;
            
            inline GLuint GetComponentCount() const { return m_ComponentCount; }
        };
    }
}

#endif
