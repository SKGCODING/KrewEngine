//
//  Texture.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Texture_h
#define Texture_h

#pragma once

#include "FreeImage.h"
#include <string>
#include "glew.h"
#include "LoadImage.h"

namespace KrewEngine {
    namespace Graphics {
        
        class Texture {
            
        private:
            std::string m_Filename;
            GLuint m_TID;
            GLsizei m_Width, m_Height;
            
            GLuint Load();
            
        public:
            Texture(const std::string& filename);
            ~Texture();
            void Bind() const;
            void Unbind() const;
            
            inline const unsigned int getID() const {
                
                return m_TID;
                
            }
            
            inline const unsigned int getWidth() const {
                
                return m_Width;
                
            }
            
            inline const unsigned int getHeight() const {
                
                return m_Height;
                
            }
            
        };
    }
}

#endif /* Texture_h */
