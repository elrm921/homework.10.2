#pragma once
#include <iostream>
#include "figure.h"

class Triangle : public Figure {
    public:
        Triangle();
        Triangle(int a, int b, int c, int A, int B, int C);
        void print_side_values();
        void print_angle_values();
    protected:
        Triangle(std::string name, int a, int b, int c, int A, int B, int C);
    private:
        int a, b, c;
        int A, B, C;
};