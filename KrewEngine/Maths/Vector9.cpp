//
//  Vector9.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 19/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include "Vector9.h"

namespace KrewEngine {
    namespace Maths {
        
        Vector9::Vector9(const float& x, const float& y, const float& z, const float& w, const float& v, const float& u, const float& t, const float& r, const float& s) {
            
            this->x = x;
            this->y = y;
            this->z = z;
            this->w = w;
            this->v = v;
            this->u = u;
            this->t = t;
            this->r = r;
            this->s = s;
            
        }
        
        Vector9& Vector9::Add(const Vector9& other) {
            
            x += other.x;
            y += other.y;
            z += other.z;
            w += other.w;
            v += other.v;
            u += other.u;
            t += other.t;
            r += other.r;
            s += other.s;
            
            return *this;
            
        }
        
        Vector9& Vector9::Subtract(const Vector9& other) {
            
            x -= other.x;
            y -= other.y;
            z -= other.z;
            w -= other.w;
            v -= other.v;
            u -= other.u;
            t -= other.t;
            r -= other.r;
            s -= other.s;
            
            return *this;
            
        }
        
        Vector9& Vector9::Multiply(const Vector9& other) {
            
            x *= other.x;
            y *= other.y;
            z *= other.z;
            w *= other.w;
            v *= other.v;
            u *= other.u;
            t *= other.t;
            r *= other.r;
            s *= other.s;
            
            return *this;
            
        }
        
        Vector9& Vector9::Divide(const Vector9& other) {
            
            x /= other.x;
            y /= other.y;
            z /= other.z;
            w /= other.w;
            v /= other.v;
            u /= other.u;
            t /= other.t;
            r /= other.r;
            s /= other.s;
            
            return *this;
            
        }
        
        Vector9 operator+(Vector9 left, const Vector9& right) {
            
            return left.Add(right);
            
        }
        
        Vector9 operator-(Vector9 left, const Vector9& right) {
            
            return left.Subtract(right);
            
        }
        
        Vector9 operator*(Vector9 left, const Vector9& right) {
            
            return left.Multiply(right);
            
        }
        
        Vector9 operator/(Vector9 left, const Vector9& right) {
            
            return left.Divide(right);
            
        }
        
        Vector9& Vector9::operator+=(const Vector9& other) {
            
            return Add(other);
            
        }
        
        Vector9& Vector9::operator-=(const Vector9& other) {
            
            return Subtract(other);
            
        }
        
        Vector9& Vector9::operator*=(const Vector9& other) {
            
            return Multiply(other);
            
        }
        
        Vector9& Vector9::operator/=(const Vector9& other) {
            
            return Divide(other);
            
        }
        
        bool Vector9::operator==(const Vector9& other) {
            
            return x == other.x && y == other.y && z == other.z && w == other.w && v == other.v && u == other.u && t == other.t && r == other.r && s == other.s;
            
        }
        
        bool Vector9::operator!=(const Vector9& other) {
            
            return !(*this == other);
            
        }
        
        std::ostream& operator<<(std::ostream& stream, const Vector9& vector) {
            
            stream << "Vector4: (" << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << ", " << vector.v << "," << vector.u << "," << vector.t << "," << vector.r << "," << vector.s << ")";
            
            return stream;
            
        }
    }
}
