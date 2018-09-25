//
//  Vector5.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 19/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include "Vector5.h"

namespace KrewEngine {
    namespace Maths {
        
        Vector5::Vector5(const float& x, const float& y, const float& z, const float& w, const float& v) {
            
            this->x = x;
            this->y = y;
            this->z = z;
            this->w = w;
            this->v = v;
            
        }
        
        Vector5& Vector5::Add(const Vector5& other) {
            
            x += other.x;
            y += other.y;
            z += other.z;
            w += other.w;
            v += other.v;
            
            return *this;
            
        }
        
        Vector5& Vector5::Subtract(const Vector5& other) {
            
            x -= other.x;
            y -= other.y;
            z -= other.z;
            w -= other.w;
            v -= other.v;
            
            return *this;
            
        }
        
        Vector5& Vector5::Multiply(const Vector5& other) {
            
            x *= other.x;
            y *= other.y;
            z *= other.z;
            w *= other.w;
            v *= other.v;
            
            return *this;
            
        }
        
        Vector5& Vector5::Divide(const Vector5& other) {
            
            x /= other.x;
            y /= other.y;
            z /= other.z;
            w /= other.w;
            v /= other.v;
            
            return *this;
            
        }
        
        Vector5 operator+(Vector5 left, const Vector5& right) {
            
            return left.Add(right);
            
        }
        
        Vector5 operator-(Vector5 left, const Vector5& right) {
            
            return left.Subtract(right);
            
        }
        
        Vector5 operator*(Vector5 left, const Vector5& right) {
            
            return left.Multiply(right);
            
        }
        
        Vector5 operator/(Vector5 left, const Vector5& right) {
            
            return left.Divide(right);
            
        }
        
        Vector5& Vector5::operator+=(const Vector5& other) {
            
            return Add(other);
            
        }
        
        Vector5& Vector5::operator-=(const Vector5& other) {
            
            return Subtract(other);
            
        }
        
        Vector5& Vector5::operator*=(const Vector5& other) {
            
            return Multiply(other);
            
        }
        
        Vector5& Vector5::operator/=(const Vector5& other) {
            
            return Divide(other);
            
        }
        
        bool Vector5::operator==(const Vector5& other) {
            
            return x == other.x && y == other.y && z == other.z && w == other.w && v == other.v;
            
        }
        
        bool Vector5::operator!=(const Vector5& other) {
            
            return !(*this == other);
            
        }
        
        std::ostream& operator<<(std::ostream& stream, const Vector5& vector) {
            
            stream << "Vector4: (" << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << "," << vector.v << ")";
            
            return stream;
            
        }
    }
}
