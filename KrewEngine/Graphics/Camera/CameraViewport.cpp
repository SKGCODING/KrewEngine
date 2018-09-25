//
//  CameraViewport.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 20/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include "CameraViewport.hpp"

#include "engine/AppSys/App.hpp"

namespace KrewEngine {
    
    // Default Ctor
    CameraViewport::CameraViewport() :
    originX(0),
    originY(0),
    width((int)App::GetWindowWidth()),
    height((int)App::GetWindowHeight()) {
        
    }
    
    // Copy Ctor
    CameraViewport::CameraViewport(const CameraViewport& other) :
    originX(other.originX),
    originY(other.originY),
    width(other.width),
    height(other.height) {
        
    }
    
    // Copy Assignment Overload
    CameraViewport& CameraViewport::operator=(const CameraViewport& rhs) {
        
        if(this != &rhs) {
            
            this->originX = rhs.originX;
            this->originY = rhs.originY;
            this->width = rhs.width;
            this->height = rhs.height;
            
        }
        
        return *this;
        
    }
    
    // Dtor
    CameraViewport::~CameraViewport() {
        
    }
}
