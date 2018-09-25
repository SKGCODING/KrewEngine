//
//  CameraTransform.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 20/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include "CameraTransform.hpp"

namespace KrewEngine {
    // Default Ctor
    CameraTransform::CameraTransform() :
    position(0.0f, 0.0f),
    rotation(0.0f) {
        
    }
    
    // Copy Ctor
    CameraTransform::CameraTransform(const CameraTransform& other) :
    position(other.position),
    rotation(other.rotation) {
        
    }
    
    // Copy Assignment Overload
    CameraTransform& CameraTransform::operator=(const CameraTransform& rhs) {
        
        if(this != &rhs) {
            
            this->position = rhs.position;
            this->rotation = rhs.rotation;
            
        }
        
        return *this;
        
    }
    
    // Dtor
    CameraTransform::~CameraTransform() {
        
    }
}

