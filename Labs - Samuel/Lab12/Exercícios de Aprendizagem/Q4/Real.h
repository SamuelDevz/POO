#pragma once

#include <iosfwd>
using std::ostream;

class Real
{
private:
    double valor;

public:
    Real();
    Real(const double v);

    operator double();

    friend Real operator+(const Real & r, const Real & r2);
    friend std::ostream& operator<<(std::ostream& os, const Real& r);
};