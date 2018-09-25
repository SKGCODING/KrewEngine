//
//  Font.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 12/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Font_h
#define Font_h

#pragma once

#include <string>
#include "Vector2.h"
#include "freetype-gl.h"

namespace KrewEngine {
    namespace Graphics {
        
        class Font {
            
        private:
            ftgl::texture_atlas_t* m_FTAtlas;
            ftgl::texture_font_t* m_FTFont;
            unsigned int m_Size;
            Maths::Vector2 m_Scale;
            std::string m_Name;
            std::string m_Filename;
            
        public:
            Font(std::string name, std::string filename, int size);
            
            inline ftgl::texture_font_t* getFTFont() const {
                
                return m_FTFont;
                
            }
            
            void SetScale(float x, float y);
            
            inline const unsigned int getID() const {
                
                return m_FTAtlas->id;
                
            }
            
            inline const std::string& getName() const {
                
                return m_Name;
                
            }
            
            inline const std::string& getFilename() const {
                
                return m_Filename;
                
            }
            
            inline const int getSize() const {
                
                return m_Size;
                
            }
            
            inline const Maths::Vector2 GetScale() const{
                
                return m_Scale;
                
            }
        };
    }
}

#endif /* Font_h */
