//
//  Vector8.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 19/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include "Vector8.h"

namespace KrewEngine {
    namespace Maths {
        
        Vector8::Vector8(const float& x, const float& y, const float& z, const float& w, const float& v, const float& u, const float& t, const float& r) {
            
            this->x = x;
            this->y = y;
            this->z = z;
            this->w = w;
            this->v = v;
            this->u = u;
            this->t = t;
            this->r = r;
            
        }
        
        Vector8& Vector8::Add(const Vector8& other) {
            
            x += other.x;
            y += other.y;
            z += other.z;
            w += other.w;
            v += other.v;
            u += other.u;
            t += other.t;
            r += other.r;
            
            return *this;
            
        }
        
        Vector8& Vector8::Subtract(const Vector8& other) {
            
            x -= other.x;
            y -= other.y;
            z -= other.z;
            w -= other.w;
            v -= other.v;
            u -= other.u;
            t -= other.t;
            r -= other.r;
            
            return *this;
            
        }
        
        Vector8& Vector8::Multiply(const Vector8& other) {
            
            x *= other.x;
            y *= other.y;
            z *= other.z;
            w *= other.w;
            v *= other.v;
            u *= other.u;
            t *= other.t;
            r *= other.r;
            
            return *this;
            
        }
        
        Vector8& Vector8::Divide(const Vector8& other) {
            
            x /= other.x;
            y /= other.y;
            z /= other.z;
            w /= other.w;
            v /= other.v;
            u /= other.u;
            t /= other.t;
            r /= other.r;
            
            return *this;
            
        }
        
        Vector8 operator+(Vector8 left, const Vector8& right) {
            
            return left.Add(right);
            
        }
        
        Vector8 operator-(Vector8 left, const Vector8& right) {
            
            return left.Subtract(right);
            
        }
        
        Vector8 operator*(Vector8 left, const Vector8& right) {
            
            return left.Multiply(right);
            
        }
        
        Vector8 operator/(Vector8 left, const Vector8& right) {
            
            return left.Divide(right);
            
        }
        
        Vector8& Vector8::operator+=(const Vector8& other) {
            
            return Add(other);
            
        }
        
        Vector8& Vector8::operator-=(const Vector8& other) {
            
            return Subtract(other);
            
        }
        
        Vector8& Vector8::operator*=(const Vector8& other) {
            
            return Multiply(other);
            
        }
        
        Vector8& Vector8::operator/=(const Vector8& other) {
            
            return Divide(other);
            
        }
        
        bool Vector8::operator==(const Vector8& other) {
            
            return x == other.x && y == other.y && z == other.z && w == other.w && v == other.v && u == other.u && t == other.t && r == other.r;
            
        }
        
        bool Vector8::operator!=(const Vector8& other) {
            
            return !(*this == other);
            
        }
        
        std::ostream& operator<<(std::ostream& stream, const Vector8& vector) {
            
            stream << "Vector4: (" << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << ", " << vector.v << "," << vector.u << "," << vector.t << "," << vector.r <<")";
            
            return stream;
            
        }
    }
}
