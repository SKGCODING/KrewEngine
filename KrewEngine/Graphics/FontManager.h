//
//  FontManager.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 12/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef FontManager_h
#define FontManager_h

#pragma once

#include <vector>
#include "Font.h"

namespace KrewEngine {
    namespace Graphics {
        
        class FontManager {
            
        private:
            static std::vector<Font*> m_Fonts;
            
            FontManager() {};
            
        public:
            static void Add(Font* font);
            static Font* Get();
            static Font* Get(const std::string& name);
            static Font* Get(const std::string& name, unsigned int size);
            static void Clean();
            
        };
    }
}

#endif /* FontManager_h */
