#pragma once
#include <iostream>
#include <stdio.h>
#include "Function.hpp"
using namespace std;

class Hyperbola : public Function
{
    double a, b;
public:
    Hyperbola(void);
    Hyperbola(double, double, double);
    ~Hyperbola(void);
    void set_a(double value) { a = value; };
    void set_b(double value) { b = value; };
    virtual double f_x();
    virtual void Display();
};

