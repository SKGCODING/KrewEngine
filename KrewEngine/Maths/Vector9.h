//
//  Vector9.hpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 19/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Vector9_h
#define Vector9_h

#include <stdio.h>

#pragma once

#include <iostream>

namespace KrewEngine {
    namespace Maths {
        
        struct Vector9 {
            
            float x, y, z, w, v, u, t, r, s;
            
            Vector9() = default;
            Vector9(const float& x, const float& y, const float& z, const float& w, const float& v, const float& u, const float& t, const float& r, const float& s);
            
            Vector9& Add(const Vector9& other);
            Vector9& Subtract(const Vector9& other);
            Vector9& Multiply(const Vector9& other);
            Vector9& Divide(const Vector9& other);
            
            friend Vector9 operator+(Vector9 left, const Vector9& right);
            friend Vector9 operator-(Vector9 left, const Vector9& right);
            friend Vector9 operator*(Vector9 left, const Vector9& right);
            friend Vector9 operator/(Vector9 left, const Vector9& right);
            
            bool operator==(const Vector9& other);
            bool operator!=(const Vector9& other);
            
            Vector9& operator+=(const Vector9& other);
            Vector9& operator-=(const Vector9& other);
            Vector9& operator*=(const Vector9& other);
            Vector9& operator/=(const Vector9& other);
            
            friend std::ostream& operator<<(std::ostream& stream, const Vector9& vector);
        };
    }
}

#endif /* Vector9_h */
