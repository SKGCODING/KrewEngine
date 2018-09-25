//
//  Vector3.cpp
//  Krew Engine
//
//  Created by Diego Revilla Rubiera on 10/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include <stdio.h>

#include "Vector3.h"

namespace KrewEngine {
    namespace Maths {
    
    Vector3::Vector3() {
        
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
        
    }
    
    Vector3::Vector3(const float& x, const float& y, const float& z) {
        
        this->x = x;
        this->y = y;
        this->z = z;
        
    }
    
    Vector3& Vector3::Add(const Vector3& other) {
        
        x += other.x;
        y += other.y;
        z += other.z;
        
        return *this;
        
    }
    
    Vector3& Vector3::Subtract(const Vector3& other) {
        
        x -= other.x;
        y -= other.y;
        z -= other.z;
        
        return *this;
        
    }
    
    Vector3& Vector3::Multiply(const Vector3& other)
    {
        x *= other.x;
        y *= other.y;
        z *= other.z;
        
        return *this;
        
    }
    
    Vector3& Vector3::Divide(const Vector3& other)
    {
        x /= other.x;
        y /= other.y;
        z /= other.z;
        
        return *this;
        
    }
    
    Vector3 operator+(Vector3 left, const Vector3& right) {
        
        return left.Add(right);
        
    }
    
    Vector3 operator-(Vector3 left, const Vector3& right) {
        
        return left.Subtract(right);
        
    }
    
    Vector3 operator*(Vector3 left, const Vector3& right) {
        
        return left.Multiply(right);
        
    }
    
    Vector3 operator/(Vector3 left, const Vector3& right) {
        
        return left.Divide(right);
        
    }
    
    Vector3& Vector3::operator+=(const Vector3& other) {
        
        return Add(other);
        
    }
    
    Vector3& Vector3::operator-=(const Vector3& other) {
        
        return Subtract(other);
        
    }
    
    Vector3& Vector3::operator*=(const Vector3& other) {
        
        return Multiply(other);
        
    }
    
    Vector3& Vector3::operator/=(const Vector3& other) {
        
        return Divide(other);
        
    }
    
    bool Vector3::operator==(const Vector3& other) {
        
        return x == other.x && y == other.y && z == other.z;
        
    }
    
    bool Vector3::operator!=(const Vector3& other) {
        
        return !(*this == other);
        
    }
    
    std::ostream& operator<<(std::ostream& stream, const Vector3& vector) {
        
        stream << "Vector3: (" << vector.x << ", " << vector.y << ", " << vector.z << ")";
        
        return stream;
        
        }
    }
}
