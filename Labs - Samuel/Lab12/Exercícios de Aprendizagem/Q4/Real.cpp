#include "Real.h"
#include <iostream>

Real::Real()
{
    valor = 0;
}

Real::Real(const double v)
{
    valor = v;
}

Real::operator double()
{
    return valor;
}

Real operator+(const Real & r, const Real & r2)
{
    return Real(r.valor + r2.valor);
}

std::ostream& operator<<(std::ostream& os, const Real& r)
{
    os << r.valor;
    return os;
}