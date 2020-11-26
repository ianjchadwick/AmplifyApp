#include <iostream>
#include "Resistor.h"
#include <vector>

using namespace std;

// Default constructor sets value to 0
R::R()
{
  value = 0;
}

// Construtor
R::R(double val)
{
  value = val;
}

double R::getVal() const
{
    return this->value;
}


void R::assignVal(double newVal)
{
    this->value = newVal;
}

///////////////////////////////////////////////////

