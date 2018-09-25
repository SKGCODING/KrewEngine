//
//  Vector6.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 19/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include "Vector6.h"

namespace KrewEngine {
    namespace Maths {
        
        Vector6::Vector6(const float& x, const float& y, const float& z, const float& w, const float& v, const float& u) {
            
            this->x = x;
            this->y = y;
            this->z = z;
            this->w = w;
            this->v = v;
            this-> u = u;
            
        }
        
        Vector6& Vector6::Add(const Vector6& other) {
            
            x += other.x;
            y += other.y;
            z += other.z;
            w += other.w;
            v += other.v;
            u += other.u;
            
            return *this;
            
        }
        
        Vector6& Vector6::Subtract(const Vector6& other) {
            
            x -= other.x;
            y -= other.y;
            z -= other.z;
            w -= other.w;
            v -= other.v;
            u -= other.u;
            
            return *this;
            
        }
        
        Vector6& Vector6::Multiply(const Vector6& other) {
            
            x *= other.x;
            y *= other.y;
            z *= other.z;
            w *= other.w;
            v *= other.v;
            u *= other.u;
            
            return *this;
            
        }
        
        Vector6& Vector6::Divide(const Vector6& other) {
            
            x /= other.x;
            y /= other.y;
            z /= other.z;
            w /= other.w;
            v /= other.v;
            u /= other.u;
            
            return *this;
            
        }
        
        Vector6 operator+(Vector6 left, const Vector6& right) {
            
            return left.Add(right);
            
        }
        
        Vector6 operator-(Vector6 left, const Vector6& right) {
            
            return left.Subtract(right);
            
        }
        
        Vector6 operator*(Vector6 left, const Vector6& right) {
            
            return left.Multiply(right);
            
        }
        
        Vector6 operator/(Vector6 left, const Vector6& right) {
            
            return left.Divide(right);
            
        }
        
        Vector6& Vector6::operator+=(const Vector6& other) {
            
            return Add(other);
            
        }
        
        Vector6& Vector6::operator-=(const Vector6& other) {
            
            return Subtract(other);
            
        }
        
        Vector6& Vector6::operator*=(const Vector6& other) {
            
            return Multiply(other);
            
        }
        
        Vector6& Vector6::operator/=(const Vector6& other) {
            
            return Divide(other);
            
        }
        
        bool Vector6::operator==(const Vector6& other) {
            
            return x == other.x && y == other.y && z == other.z && w == other.w && v == other.v && u ==other.u;
            
        }
        
        bool Vector6::operator!=(const Vector6& other) {
            
            return !(*this == other);
            
        }
        
        std::ostream& operator<<(std::ostream& stream, const Vector6& vector) {
            
            stream << "Vector4: (" << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << ", " << vector.v << "," << vector.u << ")";
            
            return stream;
            
        }
    }
}
