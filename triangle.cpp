#include <iostream>
#include "figure.h"
#include "triangle.h"

Triangle::Triangle() : Figure("Треугольник", 3) {
    this->a = 1;
    this->b = 2;
    this->c = 3;
    this->A = 40;
    this->B = 60;            
    this->C = 80;
}
Triangle::Triangle(int a, int b, int c, int A, int B, int C) : Figure("Треугольник", 3)  {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;            
    this->C = C;
}
Triangle::Triangle(std::string name, int a, int b, int c, int A, int B, int C) : Figure(name, 3) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;            
    this->C = C;            
}
void Triangle::print_side_values() {
    std::cout << "a = " << a << " b = " << b << " c = " << c << "\n";
}
void Triangle::print_angle_values() {
    std::cout << "A = " << A << " B = " << B << " C = " << C << "\n";
}