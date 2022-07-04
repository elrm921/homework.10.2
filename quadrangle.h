#pragma once
#include <iostream>
#include "figure.h"

class Quadrangle : public Figure {
    public:
        Quadrangle();
        Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
        void print_side_values();
        void print_angle_values();
    protected:
        Quadrangle(std::string name, int a, int b, int c, int d, int A, int B, int C, int D);
    private:
        int a, b, c, d;
        int A, B, C, D;
};