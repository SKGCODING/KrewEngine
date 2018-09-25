//
//  Vector10.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 19/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Vector10_h
#define Vector10_h

#include <stdio.h>

#pragma once

#include <iostream>

namespace KrewEngine {
    namespace Maths {
        
        struct Vector10 {
            
            float x, y, z, w, v, u, t, r, s, q;
            
            Vector10() = default;
            Vector10(const float& x, const float& y, const float& z, const float& w, const float& v, const float& u, const float& t, const float& r, const float& s, const float& q);
            
            Vector10& Add(const Vector10& other);
            Vector10& Subtract(const Vector10& other);
            Vector10& Multiply(const Vector10& other);
            Vector10& Divide(const Vector10& other);
            
            friend Vector10 operator+(Vector10 left, const Vector10& right);
            friend Vector10 operator-(Vector10 left, const Vector10& right);
            friend Vector10 operator*(Vector10 left, const Vector10& right);
            friend Vector10 operator/(Vector10 left, const Vector10& right);
            
            bool operator==(const Vector10& other);
            bool operator!=(const Vector10& other);
            
            Vector10& operator+=(const Vector10& other);
            Vector10& operator-=(const Vector10& other);
            Vector10& operator*=(const Vector10& other);
            Vector10& operator/=(const Vector10& other);
            
            friend std::ostream& operator<<(std::ostream& stream, const Vector10& vector);
        };
    }
}

#endif /* Vector10_h */
