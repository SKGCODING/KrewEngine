//
//  Vector5.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 19/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Vector5_h
#define Vector5_h

#include <stdio.h>

#pragma once

#include <iostream>

namespace KrewEngine {
    namespace Maths {
        
        struct Vector5 {
            
            float x, y, z, w, v;
            
            Vector5() = default;
            Vector5(const float& x, const float& y, const float& z, const float& w, const float& v);
            
            Vector5& Add(const Vector5& other);
            Vector5& Subtract(const Vector5& other);
            Vector5& Multiply(const Vector5& other);
            Vector5& Divide(const Vector5& other);
            
            friend Vector5 operator+(Vector5 left, const Vector5& right);
            friend Vector5 operator-(Vector5 left, const Vector5& right);
            friend Vector5 operator*(Vector5 left, const Vector5& right);
            friend Vector5 operator/(Vector5 left, const Vector5& right);
            
            bool operator==(const Vector5& other);
            bool operator!=(const Vector5& other);
            
            Vector5& operator+=(const Vector5& other);
            Vector5& operator-=(const Vector5& other);
            Vector5& operator*=(const Vector5& other);
            Vector5& operator/=(const Vector5& other);
            
            friend std::ostream& operator<<(std::ostream& stream, const Vector5& vector);
        };
    }
}

#endif /* Vector5_h */
