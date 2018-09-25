//
//  layer.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 09/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef layer_h
#define layer_h

#pragma once

#include "RenderData2D.h"
#include "FontManager.h"

namespace KrewEngine {
    namespace Graphics {
        
        class Label : public RenderData2D {
            
        public:
            Label(std::string text, float x, float y, unsigned int color);
            Label(std::string text, float x, float y, Font* font, unsigned int color);
            Label(std::string text, float x, float y, const std::string& font, unsigned int color);
            Label(std::string text, float x, float y, const std::string& font, unsigned int size,unsigned int color);
            void Submit(RenderPass2D* renderer) const override;
            std::string text;
            Font* m_Font;
            float x, y;
            Maths::Vector3& position;
            void ValidateFont(const std::string& name, int size = -1);
            
        };
    }
}

#endif /* layer_h */
