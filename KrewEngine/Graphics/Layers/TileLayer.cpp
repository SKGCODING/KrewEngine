//
//  TileLayer.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 20/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include <stdio.h>

#include "TileLayer.h"

#include "Layer.h"
#include <stdio.h>

namespace KrewEngine {
    namespace Graphics {
        
        TileLayer::TileLayer(Shader* shader) : Layer(new BatchRenderer2D(), shader, Maths::Matrices4::Orthographic(-16.0f, 16.0f, -9.0f, 9.0f, -1.0f, 1.0f)) {
            
            
            
        }
        
        TileLayer::~TileLayer() {
            
            
            
        }
    }
}

