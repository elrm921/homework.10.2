#include <iostream>
#include "figure.h"
#include "quadrangle.h"

Quadrangle::Quadrangle() : Figure("Четырехугольник", 4) {
    this->a = 1;
    this->b = 2;
    this->c = 3;
    this->d = 4;
    this->A = 20;
    this->B = 40;            
    this->C = 60;
    this->D = 80;
}
Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Figure("Четырехугольник", 4) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
}
Quadrangle::Quadrangle(std::string name, int a, int b, int c, int d, int A, int B, int C, int D) : Figure(name, 4) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
}
void Quadrangle::print_side_values() {
    std::cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << "\n";
}
void Quadrangle::print_angle_values() {
    std::cout << "A = " << A << " B = " << B << " C = " << C << " D = " << D << "\n";
}