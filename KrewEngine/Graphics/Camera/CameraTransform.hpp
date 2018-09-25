//
//  CameraTransform.hpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 20/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef CameraTransform_hpp
#define CameraTransform_hpp

#include <stdio.h>

#include "Vector2.hpp"

namespace KrewEngine {
    
    /// Contains data about a camera's position and rotation in the world
    struct CameraTransform {
        
        //
        // Methods
        //
        
        /// Default Ctor
        CameraTransform();
        
        /// Copy Ctor
        CameraTransform(const CameraTransform& other);
        
        /// Copy Assignment
        CameraTransform& operator=(const CameraTransform& other);
        
        /// Dtor
        ~CameraTransform();
        
        
        
        //
        // Data
        //
        
        Vector2 position;   ///< The world space position of the camera
        float rotation;     ///< The world space rotation of the camera (in radians)
        
    };
}

#endif /* CameraTransform_hpp */
