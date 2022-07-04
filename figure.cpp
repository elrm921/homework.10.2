#include <iostream>
#include "figure.h"

Figure::Figure() {
    this->name = "Фигура";
    this->sides = 0;
}
Figure::Figure(std::string name, int sides) {
    this->name = name;
    this->sides = sides;
}
void Figure::print() {
    std::cout << name << "\n";
    print_side_values();
    print_angle_values();
}
void Figure::print_side_values() {}
void Figure::print_angle_values() {}