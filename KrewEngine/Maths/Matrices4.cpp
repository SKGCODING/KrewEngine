//
//  Matrices4.cpp
//  Krew Engine
//
//  Created by Diego Revilla Rubiera on 10/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include <stdio.h>

#include "Matrices4.h"

namespace KrewEngine {
    namespace Maths {
    
    Matrices4::Matrices4() {
        
        for (int i = 0; i < 4 * 4; i++)
            elements[i] = 0.0f;
        
    }
    
    Matrices4::Matrices4(float diagonal) {
        
        for (int i = 0; i < 4 * 4; i++)
            elements[i] = 0.0f;
        
        elements[0 + 0 * 4] = diagonal;
        elements[1 + 1 * 4] = diagonal;
        elements[2 + 2 * 4] = diagonal;
        elements[3 + 3 * 4] = diagonal;
        
    }
    
    Matrices4 Matrices4::Identity() {
        
        return Matrices4(1.0f);
        
    }
    
    Matrices4& Matrices4::Multiply(const Matrices4& other) {
        
        float data[16];
        
        for (int y = 0; y < 4; y++) {
            
            for (int x = 0; x < 4; x++) {
                
                float sum = 0.0f;
                
                for (int e = 0; e < 4; e++) {
                    
                    sum += elements[x + e * 4] * other.elements[e + y * 4];
                    
                }
                
                data[x + y * 4] = sum;
                
            }
        }
        
        memcpy(elements, data, 4 * 4 * sizeof(float));
        
        return *this;
        
    }
    
    Vector3 Matrices4::Multiply(const Vector3& other) const {
        
        return Vector3(
                    columns[0].x * other.x + columns[1].x * other.y + columns[2].x * other.z + columns[3].x,
                    columns[0].y * other.x + columns[1].y * other.y + columns[2].y * other.z + columns[3].y,
                    columns[0].z * other.x + columns[1].z * other.y + columns[2].z * other.z + columns[3].z
                    );
        
    }
    
    Vector4 Matrices4::Multiply(const Vector4& other) const {
        
        return Vector4(
                    columns[0].x * other.x + columns[1].x * other.y + columns[2].x * other.z + columns[3].x * other.w,
                    columns[0].y * other.x + columns[1].y * other.y + columns[2].y * other.z + columns[3].y * other.w,
                    columns[0].z * other.x + columns[1].z * other.y + columns[2].z * other.z + columns[3].z * other.w,
                    columns[0].w * other.x + columns[1].w * other.y + columns[2].w * other.z + columns[3].w * other.w
                    );
        
    }
    
    Matrices4 operator*(Matrices4 left, const Matrices4& right) {
        
        return left.Multiply(right);
        
    }
    
    Matrices4& Matrices4::operator*=(const Matrices4& other) {
        
        return Multiply(other);
        
    }
    
    Vector3 operator*(const Matrices4& left, const Vector3& right) {
        
        return left.Multiply(right);
        
    }
    
    Vector4 operator*(const Matrices4& left, const Vector4& right) {
        
        return left.Multiply(right);
        
    }
    
    Matrices4& Matrices4::Invert() {
        
        double temp[16];
        
        temp[0] = elements[5]  * elements[10] * elements[15] -
        elements[5]  * elements[11] * elements[14] -
        elements[9]  * elements[6]  * elements[15] +
        elements[9]  * elements[7]  * elements[14] +
        elements[13] * elements[6]  * elements[11] -
        elements[13] * elements[7]  * elements[10];
        
        temp[4] = -elements[4]  * elements[10] * elements[15] +
        elements[4]  * elements[11] * elements[14] +
        elements[8]  * elements[6]  * elements[15] -
        elements[8]  * elements[7]  * elements[14] -
        elements[12] * elements[6]  * elements[11] +
        elements[12] * elements[7]  * elements[10];
        
        temp[8] = elements[4]  * elements[9] * elements[15] -
        elements[4]  * elements[11] * elements[13] -
        elements[8]  * elements[5] * elements[15] +
        elements[8]  * elements[7] * elements[13] +
        elements[12] * elements[5] * elements[11] -
        elements[12] * elements[7] * elements[9];
        
        temp[12] = -elements[4]  * elements[9] * elements[14] +
        elements[4]  * elements[10] * elements[13] +
        elements[8]  * elements[5] * elements[14] -
        elements[8]  * elements[6] * elements[13] -
        elements[12] * elements[5] * elements[10] +
        elements[12] * elements[6] * elements[9];
        
        temp[1] = -elements[1]  * elements[10] * elements[15] +
        elements[1]  * elements[11] * elements[14] +
        elements[9]  * elements[2] * elements[15] -
        elements[9]  * elements[3] * elements[14] -
        elements[13] * elements[2] * elements[11] +
        elements[13] * elements[3] * elements[10];
        
        temp[5] = elements[0]  * elements[10] * elements[15] -
        elements[0]  * elements[11] * elements[14] -
        elements[8]  * elements[2] * elements[15] +
        elements[8]  * elements[3] * elements[14] +
        elements[12] * elements[2] * elements[11] -
        elements[12] * elements[3] * elements[10];
        
        temp[9] = -elements[0]  * elements[9] * elements[15] +
        elements[0]  * elements[11] * elements[13] +
        elements[8]  * elements[1] * elements[15] -
        elements[8]  * elements[3] * elements[13] -
        elements[12] * elements[1] * elements[11] +
        elements[12] * elements[3] * elements[9];
        
        temp[13] = elements[0]  * elements[9] * elements[14] -
        elements[0]  * elements[10] * elements[13] -
        elements[8]  * elements[1] * elements[14] +
        elements[8]  * elements[2] * elements[13] +
        elements[12] * elements[1] * elements[10] -
        elements[12] * elements[2] * elements[9];
        
        temp[2] = elements[1]  * elements[6] * elements[15] -
        elements[1]  * elements[7] * elements[14] -
        elements[5]  * elements[2] * elements[15] +
        elements[5]  * elements[3] * elements[14] +
        elements[13] * elements[2] * elements[7] -
        elements[13] * elements[3] * elements[6];
        
        temp[6] = -elements[0]  * elements[6] * elements[15] +
        elements[0]  * elements[7] * elements[14] +
        elements[4]  * elements[2] * elements[15] -
        elements[4]  * elements[3] * elements[14] -
        elements[12] * elements[2] * elements[7] +
        elements[12] * elements[3] * elements[6];
        
        temp[10] = elements[0]  * elements[5] * elements[15] -
        elements[0]  * elements[7] * elements[13] -
        elements[4]  * elements[1] * elements[15] +
        elements[4]  * elements[3] * elements[13] +
        elements[12] * elements[1] * elements[7] -
        elements[12] * elements[3] * elements[5];
        
        temp[14] = -elements[0]  * elements[5] * elements[14] +
        elements[0]  * elements[6] * elements[13] +
        elements[4]  * elements[1] * elements[14] -
        elements[4]  * elements[2] * elements[13] -
        elements[12] * elements[1] * elements[6] +
        elements[12] * elements[2] * elements[5];
        
        temp[3] = -elements[1] * elements[6] * elements[11] +
        elements[1] * elements[7] * elements[10] +
        elements[5] * elements[2] * elements[11] -
        elements[5] * elements[3] * elements[10] -
        elements[9] * elements[2] * elements[7] +
        elements[9] * elements[3] * elements[6];
        
        temp[7] = elements[0] * elements[6] * elements[11] -
        elements[0] * elements[7] * elements[10] -
        elements[4] * elements[2] * elements[11] +
        elements[4] * elements[3] * elements[10] +
        elements[8] * elements[2] * elements[7] -
        elements[8] * elements[3] * elements[6];
        
        temp[11] = -elements[0] * elements[5] * elements[11] +
        elements[0] * elements[7] * elements[9] +
        elements[4] * elements[1] * elements[11] -
        elements[4] * elements[3] * elements[9] -
        elements[8] * elements[1] * elements[7] +
        elements[8] * elements[3] * elements[5];
        
        temp[15] = elements[0] * elements[5] * elements[10] -
        elements[0] * elements[6] * elements[9] -
        elements[4] * elements[1] * elements[10] +
        elements[4] * elements[2] * elements[9] +
        elements[8] * elements[1] * elements[6] -
        elements[8] * elements[2] * elements[5];
        
        double determinant = elements[0] * temp[0] + elements[1] * temp[4] + elements[2] * temp[8] + elements[3] * temp[12];
        
        determinant = 1.0 / determinant;
        
        for (int i = 0; i < 4 * 4; i++)
            elements[i] = temp[i] * determinant;
        
        return *this;
        
    }
    
    Matrices4 Matrices4::Orthographic(float left, float right, float bottom, float top, float near, float far) {
        
        Matrices4 result(1.0f);
        
        result.elements[0 + 0 * 4] = 2.0f / (right - left);
        
        result.elements[1 + 1 * 4] = 2.0f / (top - bottom);
        
        result.elements[2 + 2 * 4] = 2.0f / (near - far);
        
        result.elements[0 + 3 * 4] = (left + right) / (left - right);
        result.elements[1 + 3 * 4] = (bottom + top) / (bottom - top);
        result.elements[2 + 3 * 4] = (far + near) / (far - near);
        
        return result;
        
    }
    
    Matrices4 Matrices4::Perspective(float fov, float aspectRatio, float near, float far) {
        
        Matrices4 result(1.0f);
        
        float q = 1.0f / tan(toRadians(0.5f * fov));
        float a = q / aspectRatio;
        
        float b = (near + far) / (near - far);
        float c = (2.0f * near * far) / (near - far);
        
        result.elements[0 + 0 * 4] = a;
        result.elements[1 + 1 * 4] = q;
        result.elements[2 + 2 * 4] = b;
        result.elements[3 + 2 * 4] = -1.0f;
        result.elements[2 + 3 * 4] = c;
        
        return result;
        
    }
    
    Matrices4 Matrices4::Translation(const Vector3& translation) {
        
        Matrices4 result(1.0f);
        
        result.elements[0 + 3 * 4] = translation.x;
        result.elements[1 + 3 * 4] = translation.y;
        result.elements[2 + 3 * 4] = translation.z;
        
        return result;
        
    }
    
    Matrices4 Matrices4::Rotation(float angle, const Vector3& axis) {
        
        Matrices4 result(1.0f);
        
        float r = toRadians(angle);
        float c = cos(r);
        float s = sin(r);
        float omc = 1.0f - c;
        
        float x = axis.x;
        float y = axis.y;
        float z = axis.z;
        
        result.elements[0 + 0 * 4] = x * omc + c;
        result.elements[1 + 0 * 4] = y * x * omc + z * s;
        result.elements[2 + 0 * 4] = x * z * omc - y * s;
        
        result.elements[0 + 1 * 4] = x * y * omc - z * s;
        result.elements[1 + 1 * 4] = y * omc + c;
        result.elements[2 + 1 * 4] = y * z * omc + x * s;
        
        result.elements[0 + 2 * 4] = x * z * omc + y * s;
        result.elements[1 + 2 * 4] = y * z * omc - x * s;
        result.elements[2 + 2 * 4] = z * omc + c;
        
        return result;
        
    }
    
    Matrices4 Matrices4::Scale(const Vector3& scale) {
        
        Matrices4 result(1.0f);
        
        result.elements[0 + 0 * 4] = scale.x;
        result.elements[1 + 1 * 4] = scale.y;
        result.elements[2 + 2 * 4] = scale.z;
        
        return result;
        
        }
    }
}
