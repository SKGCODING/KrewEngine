//
//  CameraViewport.hpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 20/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef CameraViewport_hpp
#define CameraViewport_hpp

#include <stdio.h>

namespace KrewEngine {
    
    /// Contains data about a camera's mapping onto the OpenGL viewport
    struct CameraViewport {
        
        //
        // Methods
        //
        
        /// Default Ctor
        CameraViewport();
        
        /// Copy Ctor
        CameraViewport(const CameraViewport& other);
        
        /// Copy Assignment
        CameraViewport& operator=(const CameraViewport& other);
        
        /// Dtor
        ~CameraViewport();
        
        
        
        //
        // Data
        //
        
        int originX;    ///< X origin (lower left corner)
        int originY;    ///< Y origin (lower left corner)
        int width;      ///< Width of viewport
        int height;     ///< Height of viewport
        
    };
}

#endif /* CameraViewport_hpp */
