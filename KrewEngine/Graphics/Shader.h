//
//  Shader.h
//  Krew Engine
//
//  Created by Diego Revilla Rubiera on 10/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Shader_h
#define Shader_h

#pragma once

#include <iostream>
#include <vector>
#include "glew.h"
#include "FileUtilities.h"
#include "Maths.h"

namespace KrewEngine {
    namespace Graphics {
        
        class Shader {
            
        private:
            
            const char* m_VertPath;
            const char* m_FragPath;
            
        public:
            
            GLuint m_ShaderID;
            Shader(const char* VertPath, const char* FragPath);
            ~Shader();
            
            void setUniform1f(const GLchar* name, float value);
            void setUniform1fv(const GLchar* name, float* value, int count);
            void setUniform1i(const GLchar* name, int value);
            void setUniform1v(const GLchar* name, int* value, int count);
            void setUniform2f(const GLchar* name, const Maths::Vector2& vector);
            void setUniform3f(const GLchar* name, const Maths::Vector3& vector);
            void setUniform4f(const GLchar* name, const Maths::Vector4& vector);
            void setUniformMatrices4(const GLchar* name, const Maths::Matrices4& Matrix);
            
            void enable() const;
            void disable() const;
            
        private:
            
            GLuint load();
            GLint getUniformLocation(const GLchar* name);
            
        };
    }
}

#endif
