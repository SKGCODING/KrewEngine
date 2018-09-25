//
//  Vector7.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 19/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Vector7_h
#define Vector7_h

#include <stdio.h>

#pragma once

#include <iostream>

namespace KrewEngine {
    namespace Maths {
        
        struct Vector7 {
            
            float x, y, z, w, v, u, t;
            
            Vector7() = default;
            Vector7(const float& x, const float& y, const float& z, const float& w, const float& v, const float& u, const float& t);
            
            Vector7& Add(const Vector7& other);
            Vector7& Subtract(const Vector7& other);
            Vector7& Multiply(const Vector7& other);
            Vector7& Divide(const Vector7& other);
            
            friend Vector7 operator+(Vector7 left, const Vector7& right);
            friend Vector7 operator-(Vector7 left, const Vector7& right);
            friend Vector7 operator*(Vector7 left, const Vector7& right);
            friend Vector7 operator/(Vector7 left, const Vector7& right);
            
            bool operator==(const Vector7& other);
            bool operator!=(const Vector7& other);
            
            Vector7& operator+=(const Vector7& other);
            Vector7& operator-=(const Vector7& other);
            Vector7& operator*=(const Vector7& other);
            Vector7& operator/=(const Vector7& other);
            
            friend std::ostream& operator<<(std::ostream& stream, const Vector7& vector);
        };
    }
}

#endif /* Vector7_h */
