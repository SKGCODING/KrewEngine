//
//  label.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 09/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include <stdio.h>

#include "Label.h"

namespace KrewEngine {
    namespace Graphics {
        
        Label::Label(std::string text, float x, float y, unsigned int color) : RenderData2D(), text(text), position(m_Position), m_Font(FontManager::Get("arial.ttf")) {
            
            m_Position = Maths::Vector3(x, y, 0.0f);
            m_Color = color;
            
        }
        
        Label::Label(std::string text, float x, float y, Font* font, unsigned int color) : RenderData2D(), text(text), position(m_Position), m_Font(font) {
            
            m_Position = Maths::Vector3(x, y, 0.0f);
            m_Color = color;
            
        }
        
        Label::Label(std::string text, float x, float y, const std::string& font, unsigned int color) : RenderData2D(), text(text), position(m_Position), m_Font(FontManager::Get(font)) {
            
            m_Position = Maths::Vector3(x, y, 0.0f);
            m_Color = color;
            
            ValidateFont(font);
            
        }
        
        Label::Label(std::string text, float x, float y, const std::string& font, unsigned int size, unsigned int color) : RenderData2D(), text(text), position(m_Position), m_Font(FontManager::Get(font, size)) {
            
            m_Position = Maths::Vector3(x, y, 0.0f);
            m_Color = color;
            
            ValidateFont(font, size);
            
        }
        
        void Label::Submit(RenderPass2D* renderer) const {
            
           renderer->DrawString(text, position, *m_Font, m_Color);
            
        }
        
        void Label::ValidateFont(const std::string& name, int size) {
            
            if (m_Font != nullptr) {
                return;
                
                std::cout << "Krew Engine-> Null Font, Font=" << name;
                
                if (size < 0) {
                    
                    std::cout << ", Size=" << size;
                    std::cout << std::endl;
                    
                    m_Font = FontManager::Get("arial.ttf");
                    
                }
            }
        }
    }
}
