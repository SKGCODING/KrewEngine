//
//  Matrices4.hpp
//  Krew Engine
//
//  Created by Diego Revilla Rubiera on 10/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Matrices4_h
#define Matrices4_h

#pragma once

#include "Vector3.h"
#include "Vector4.h"
#include "MathFunctions.h"

namespace KrewEngine {
    namespace Maths {
    
    struct Matrices4 {
        
        union {
            
            float elements[4 * 4];
            Vector4 columns[4];
            
        };
        
        Matrices4();
        Matrices4(float diagonal);
        
        Vector4 getColumn(int index) {
            
            index *= 4;
            
            return Vector4(elements[index], elements[index + 1], elements[index + 2], elements[index + 3]);
            
        }
        
        static Matrices4 Identity();
        
        Matrices4& Multiply(const Matrices4& other);
        friend Matrices4 operator*(Matrices4 left, const Matrices4& right);
        Matrices4& operator*=(const Matrices4& other);
        
        Vector3 Multiply(const Vector3& other) const;
        friend Vector3 operator*(const Matrices4& left, const Vector3& right);
        
        Vector4 Multiply(const Vector4& other) const;
        friend Vector4 operator*=(const Matrices4& left, const Vector4& right);
        
        Matrices4& Invert();
        
        static Matrices4 Orthographic(float left, float right, float bottom, float top, float near, float far);
        static Matrices4 Perspective(float fov, float aspectRatio, float near, float far);
        
        static Matrices4 Translation(const Vector3& translation);
        static Matrices4 Rotation(float angle, const Vector3& axis);
        static Matrices4 Scale(const Vector3& scale);
         
        };
    }
}

#endif
