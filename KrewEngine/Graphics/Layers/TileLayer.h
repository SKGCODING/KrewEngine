//
//  TileLayer.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 20/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef TileLayer_h
#define TileLayer_h

#pragma once

#include "Layer.h"
#include "BatchRenderer2D.h"

namespace KrewEngine {
    namespace Graphics {
        
        class TileLayer : public Layer {
            
        public:
            TileLayer(Shader* shader);
            ~TileLayer();
        };
    }
}

#endif /* TileLayer_h */
