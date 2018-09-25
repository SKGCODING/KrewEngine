//
//  Vector7.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 19/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include "Vector7.h"

namespace KrewEngine {
    namespace Maths {
        
        Vector7::Vector7(const float& x, const float& y, const float& z, const float& w, const float& v, const float& u, const float& t) {
            
            this->x = x;
            this->y = y;
            this->z = z;
            this->w = w;
            this->v = v;
            this->u = u;
            this->t = t;
            
        }
        
        Vector7& Vector7::Add(const Vector7& other) {
            
            x += other.x;
            y += other.y;
            z += other.z;
            w += other.w;
            v += other.v;
            u += other.u;
            t += other.t;
            
            return *this;
            
        }
        
        Vector7& Vector7::Subtract(const Vector7& other) {
            
            x -= other.x;
            y -= other.y;
            z -= other.z;
            w -= other.w;
            v -= other.v;
            u -= other.u;
            t -= other.t;
            
            return *this;
            
        }
        
        Vector7& Vector7::Multiply(const Vector7& other) {
            
            x *= other.x;
            y *= other.y;
            z *= other.z;
            w *= other.w;
            v *= other.v;
            u *= other.u;
            t *= other.t;
            
            return *this;
            
        }
        
        Vector7& Vector7::Divide(const Vector7& other) {
            
            x /= other.x;
            y /= other.y;
            z /= other.z;
            w /= other.w;
            v /= other.v;
            u /= other.u;
            t /= other.t;
            
            return *this;
            
        }
        
        Vector7 operator+(Vector7 left, const Vector7& right) {
            
            return left.Add(right);
            
        }
        
        Vector7 operator-(Vector7 left, const Vector7& right) {
            
            return left.Subtract(right);
            
        }
        
        Vector7 operator*(Vector7 left, const Vector7& right) {
            
            return left.Multiply(right);
            
        }
        
        Vector7 operator/(Vector7 left, const Vector7& right) {
            
            return left.Divide(right);
            
        }
        
        Vector7& Vector7::operator+=(const Vector7& other) {
            
            return Add(other);
            
        }
        
        Vector7& Vector7::operator-=(const Vector7& other) {
            
            return Subtract(other);
            
        }
        
        Vector7& Vector7::operator*=(const Vector7& other) {
            
            return Multiply(other);
            
        }
        
        Vector7& Vector7::operator/=(const Vector7& other) {
            
            return Divide(other);
            
        }
        
        bool Vector7::operator==(const Vector7& other) {
            
            return x == other.x && y == other.y && z == other.z && w == other.w && v == other.v && u == other.u && t == other.t;
            
        }
        
        bool Vector7::operator!=(const Vector7& other) {
            
            return !(*this == other);
            
        }
        
        std::ostream& operator<<(std::ostream& stream, const Vector7& vector) {
            
            stream << "Vector4: (" << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << ", " << vector.v << "," << vector.u << "," << vector.t << ")";
            
            return stream;
            
        }
    }
}
