#pragma once
#include <iostream>
#include <stdio.h>
using namespace std;

class Function{
    double x;
public:
    Function();
    Function(double);
    ~Function();
    void set_x(double value) { x = value; };
    double get_x() { return x; };
    virtual double f_x() = 0;
    virtual void Display() = 0;
};
