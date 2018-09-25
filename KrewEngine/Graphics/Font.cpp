//
//  Font.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 12/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include <stdio.h>

#include "Font.h"

namespace KrewEngine {
    namespace Graphics {
        
        Font::Font(std::string name, std::string filename, int size) : m_Name(name), m_Filename(filename), m_Size(size) {
            
            m_FTAtlas = ftgl::texture_atlas_new(512, 512, 2);
            m_FTFont = ftgl::texture_font_new_from_file(m_FTAtlas, size, filename.c_str());
            
        }
        
        void Font::SetScale(float x, float y)
        {
            m_Scale = Maths::Vector2(x, y);
        }
    }
}
