#include "Money.h"
#include <iostream>

Money::Money()
{
    valor = 0;
}

Money::Money(const double v)
{
    valor = v;
}

Money::operator double()
{
    return valor;
}