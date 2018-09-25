//
//  Vector10.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 19/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include "Vector10.h"

namespace KrewEngine {
    namespace Maths {
        
        Vector10::Vector10(const float& x, const float& y, const float& z, const float& w, const float& v, const float& u, const float& t, const float& r, const float& s, const float& q) {
            
            this->x = x;
            this->y = y;
            this->z = z;
            this->w = w;
            this->v = v;
            this->u = u;
            this->t = t;
            this->r = r;
            this->s = s;
            this->q = q;
            
        }
        
        Vector10& Vector10::Add(const Vector10& other) {
            
            x += other.x;
            y += other.y;
            z += other.z;
            w += other.w;
            v += other.v;
            u += other.u;
            t += other.t;
            r += other.r;
            s += other.s;
            q += other.q;
            
            return *this;
            
        }
        
        Vector10& Vector10::Subtract(const Vector10& other) {
            
            x -= other.x;
            y -= other.y;
            z -= other.z;
            w -= other.w;
            v -= other.v;
            u -= other.u;
            t -= other.t;
            r -= other.r;
            s -= other.s;
            q -= other.q;
            
            return *this;
            
        }
        
        Vector10& Vector10::Multiply(const Vector10& other) {
            
            x *= other.x;
            y *= other.y;
            z *= other.z;
            w *= other.w;
            v *= other.v;
            u *= other.u;
            t *= other.t;
            r *= other.r;
            s *= other.s;
            q *= other.q;
            
            return *this;
            
        }
        
        Vector10& Vector10::Divide(const Vector10& other) {
            
            x /= other.x;
            y /= other.y;
            z /= other.z;
            w /= other.w;
            v /= other.v;
            u /= other.u;
            t /= other.t;
            r /= other.r;
            s /= other.s;
            q /= other.q;
            
            return *this;
            
        }
        
        Vector10 operator+(Vector10 left, const Vector10& right) {
            
            return left.Add(right);
            
        }
        
        Vector10 operator-(Vector10 left, const Vector10& right) {
            
            return left.Subtract(right);
            
        }
        
        Vector10 operator*(Vector10 left, const Vector10& right) {
            
            return left.Multiply(right);
            
        }
        
        Vector10 operator/(Vector10 left, const Vector10& right) {
            
            return left.Divide(right);
            
        }
        
        Vector10& Vector10::operator+=(const Vector10& other) {
            
            return Add(other);
            
        }
        
        Vector10& Vector10::operator-=(const Vector10& other) {
            
            return Subtract(other);
            
        }
        
        Vector10& Vector10::operator*=(const Vector10& other) {
            
            return Multiply(other);
            
        }
        
        Vector10& Vector10::operator/=(const Vector10& other) {
            
            return Divide(other);
            
        }
        
        bool Vector10::operator==(const Vector10& other) {
            
            return x == other.x && y == other.y && z == other.z && w == other.w && v == other.v && u == other.u && t == other.t && r == other.r && s == other.s && q == other.q;
            
        }
        
        bool Vector10::operator!=(const Vector10& other) {
            
            return !(*this == other);
            
        }
        
        std::ostream& operator<<(std::ostream& stream, const Vector10& vector) {
            
            stream << "Vector4: (" << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << ", " << vector.v << "," << vector.u << "," << vector.t << "," << vector.r << "," << vector.s << "," << vector.q << ")";
            
            return stream;
            
        }
    }
}
