#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "quadrangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "rectangle.h"
#include "parallelogram.h"
#include "square.h"
#include "rhombus.h"

void print(Figure &figure) {
    figure.print();
}

int main() {
    Triangle t0;
    Quadrangle q0;

    RightTriangle t1(1, 2, 3, 30, 60);
    IsoscelesTriangle t2(2, 1, 30, 90);
    EquilateralTriangle t3(3);

    Rectangle q1(1, 4);
    Square q2(4);
    Parallelogram q3(1, 4, 60, 120);
    Rhombus q4(4, 60, 40);

    print(t0);
    print(q0);
    print(t1);
    print(t2);
    print(t3);
    print(q1);
    print(q2);
    print(q3);
    print(q4);

    return 0;
}