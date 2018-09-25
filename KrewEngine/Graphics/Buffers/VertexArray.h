//
//  VertexArray.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 13/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef VertexArray_h
#define VertexArray_h

#pragma once

#include "glew.h"
#include <vector>
#include "Buffer.h"

namespace KrewEngine {
    namespace Graphics {
        
        class VertexArray {
            
        private:
            GLuint m_ArrayID;
            std::vector<Buffer* > m_Buffers;
        public:
            VertexArray();
            ~VertexArray();
            
            void addBuffer(Buffer* buffer, GLuint index);
            void Bind() const;
            void UnBind() const;
            
        };
    }
}

#endif
