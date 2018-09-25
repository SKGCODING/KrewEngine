//
//  Vector2.h
//  Krew Engine
//
//  Created by Diego Revilla Rubiera on 10/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Vector2_h
#define Vector2_h

#pragma once

#include <iostream>

namespace KrewEngine {
    namespace Maths {
    
    struct Vector2 {
        
        float x, y;
        
        Vector2();
        Vector2(const float& x, const float& y);
        
        Vector2& Add(const Vector2& other);
        Vector2& Subtract(const Vector2& other);
        Vector2& Multiply(const Vector2& other);
        Vector2& Divide(const Vector2& other);
        
        friend Vector2 operator+(Vector2 left, const Vector2& right);
        friend Vector2 operator-(Vector2 left, const Vector2& right);
        friend Vector2 operator*(Vector2 left, const Vector2& right);
        friend Vector2 operator/(Vector2 left, const Vector2& right);
        
        bool operator==(const Vector2& other);
        bool operator!=(const Vector2& other);
        
        Vector2& operator+=(const Vector2& other);
        Vector2& operator-=(const Vector2& other);
        Vector2& operator*=(const Vector2& other);
        Vector2& operator/=(const Vector2& other);
        
        friend std::ostream& operator<<(std::ostream& stream, const Vector2& vector);
        };
    }
}

#endif
 
