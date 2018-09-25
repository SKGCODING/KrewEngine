//
//  Vector8.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 19/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Vector8_h
#define Vector8_h

#include <stdio.h>

#pragma once

#include <iostream>

namespace KrewEngine {
    namespace Maths {
        
        struct Vector8 {
            
            float x, y, z, w, v, u, t, r;
            
            Vector8() = default;
            Vector8(const float& x, const float& y, const float& z, const float& w, const float& v, const float& u, const float& t, const float& r);
            
            Vector8& Add(const Vector8& other);
            Vector8& Subtract(const Vector8& other);
            Vector8& Multiply(const Vector8& other);
            Vector8& Divide(const Vector8& other);
            
            friend Vector8 operator+(Vector8 left, const Vector8& right);
            friend Vector8 operator-(Vector8 left, const Vector8& right);
            friend Vector8 operator*(Vector8 left, const Vector8& right);
            friend Vector8 operator/(Vector8 left, const Vector8& right);
            
            bool operator==(const Vector8& other);
            bool operator!=(const Vector8& other);
            
            Vector8& operator+=(const Vector8& other);
            Vector8& operator-=(const Vector8& other);
            Vector8& operator*=(const Vector8& other);
            Vector8& operator/=(const Vector8& other);
            
            friend std::ostream& operator<<(std::ostream& stream, const Vector8& vector);
        };
    }
}

#endif /* Vector8_h */
