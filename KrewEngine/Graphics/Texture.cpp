//
//  Texture.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include <stdio.h>

#include "Texture.h"

namespace KrewEngine {
    namespace Graphics {
        
        Texture::Texture(const std::string& filename) : m_Filename(filename) {
            
            m_TID = Load();
            
        }
        
        Texture::~Texture() {
            
            
            
        }
        
        GLuint Texture::Load() {
            
            BYTE* pixels = LoadImage(m_Filename.c_str(), &m_Width, &m_Height);
            
            GLuint result;
            glGenTextures(1, &result);
            glBindTexture(GL_TEXTURE_2D, result);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, m_Width, m_Height, 0, GL_BGR, GL_UNSIGNED_BYTE, pixels);
            glBindTexture(GL_TEXTURE_2D, 0);
            
            delete[] pixels;
            
            return result;
            
        }
        
        void Texture::Bind() const {
            
            glBindTexture(GL_TEXTURE_2D, m_TID);
            
        }
        void Texture::Unbind() const {
            
            glBindTexture(GL_TEXTURE_2D, 0);
            
        }
    }
}
