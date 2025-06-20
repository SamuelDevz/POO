#include <iostream>
#include <cmath>
#include "Vetor.h"
using std::ostream;

const double GrausPorRad = 45.0 / atan(1.0);

Vetor::Vetor()
{
    mag = 0;
    ang = 0;
}

Vetor::Vetor(double n1, double n2)
{
    mag = n1;
    ang = n2 / GrausPorRad;
}

double Vetor::X() const
{
    return mag * cos(ang);
}

double Vetor::Y() const
{
    return mag * sin(ang);
}

double Vetor::Angulo() const 
{ 
    return ang * GrausPorRad;
}

Vetor Vetor::operator+(const Vetor& v) const
{
    double x = X() + v.X();
    double y = Y() + v.Y();
    return Vetor(sqrt(x*x + y*y), atan2(y, x) * GrausPorRad);
}

Vetor Vetor::operator*(double n) const
{
    return Vetor(n * mag, ang * GrausPorRad);
}

Vetor Vetor::operator-(const Vetor& v) const
{
    double x = X() - v.X();
    double y = Y() - v.Y();
    return Vetor(sqrt(x*x + y*y), atan2(y, x) * GrausPorRad);
}

Vetor Vetor::operator-() const
{
    const double PI = atan(1.0) * 4.0;
    return Vetor(mag, (ang + PI) * GrausPorRad);
}

Vetor operator*(double n, const Vetor& v)
{
    return Vetor(n * v.mag, v.ang * GrausPorRad);
}

ostream& operator<<(ostream& os, const Vetor& v)
{
    os << "(x,y) = (" << v.X() << ", " << v.Y() << ")\n";
    os << "(m,a) = (" << v.mag << ", " << v.ang * GrausPorRad << ")\n";
    return os;
}