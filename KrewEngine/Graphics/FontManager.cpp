//
//  FontManager.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 12/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include <stdio.h>

#include "FontManager.h"

namespace KrewEngine {
    namespace Graphics {
        
        std::vector<Font*> FontManager::m_Fonts;
        
        void FontManager::Add(Font* font) {
            
            m_Fonts.push_back(font);
            
        }
        
        Font* FontManager::Get(const std::string& name) {
            
            for (Font* font : m_Fonts) {
                
                if (font->getName() == name) {
                    
                    return font;
                    
                }
            }
            
            return nullptr;
            
        }
        
        Font* FontManager::Get() {
            
            return m_Fonts[0];
            
        }
        
        Font* FontManager::Get(const std::string& name, unsigned int size) {
            
            for (Font* font : m_Fonts) {
                
                if (font->getSize() == size && font->getName() == name) {
                    
                    return font;
                    
                }
            }
            
            return nullptr;
            
        }
        
        void FontManager::Clean() {
            
            for (int i = 0; i < m_Fonts.size(); i++) {
                
                delete m_Fonts[i];
                
            }
            
        }
    }
}
