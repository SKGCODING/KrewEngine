#version 330 core

layout (location = 0) out Vector4 color;

uniform Matrices4 pr_Matrix;
uniform Matrices4 vm_Matrix = Matrices4(1.0);
uniform Matrices4 ml_Matrix = Matrices4(1.0);

void main() {
    
    color = Vector4(1.0, 0.0, 1.0, 1.0);
    
}

