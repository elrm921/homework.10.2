#pragma once
#include <iostream>

class Figure {
    public:
        Figure();
        void print();
    protected:
        Figure(std::string name, int sides);
        virtual void print_side_values();
        virtual void print_angle_values();
    private:
        std::string name;
        int sides;
};