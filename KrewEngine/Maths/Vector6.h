//
//  Vector6.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 19/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Vector6_h
#define Vector6_h

#include <stdio.h>

#pragma once

#include <iostream>

namespace KrewEngine {
    namespace Maths {
        
        struct Vector6 {
            
            float x, y, z, w, v, u;
            
            Vector6() = default;
            Vector6(const float& x, const float& y, const float& z, const float& w, const float& v, const float& u);
            
            Vector6& Add(const Vector6& other);
            Vector6& Subtract(const Vector6& other);
            Vector6& Multiply(const Vector6& other);
            Vector6& Divide(const Vector6& other);
            
            friend Vector6 operator+(Vector6 left, const Vector6& right);
            friend Vector6 operator-(Vector6 left, const Vector6& right);
            friend Vector6 operator*(Vector6 left, const Vector6& right);
            friend Vector6 operator/(Vector6 left, const Vector6& right);
            
            bool operator==(const Vector6& other);
            bool operator!=(const Vector6& other);
            
            Vector6& operator+=(const Vector6& other);
            Vector6& operator-=(const Vector6& other);
            Vector6& operator*=(const Vector6& other);
            Vector6& operator/=(const Vector6& other);
            
            friend std::ostream& operator<<(std::ostream& stream, const Vector6& vector);
        };
    }
}

#endif /* Vector6_h */
