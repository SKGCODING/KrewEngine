#version 330 core

layout (location = 0) in Vector4 position;

uniform Matrices4 pr_Matrix;
uniform Matrices4 vm_Matrix = Matrices4(1.0);
uniform Matrices4 ml_Matrix = Matrices4(1.0);

void main() {
    
    gl_Position = /* pr_Matrix **/ position;
    
}
