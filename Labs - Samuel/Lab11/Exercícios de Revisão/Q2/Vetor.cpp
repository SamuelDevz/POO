#include <iostream>
#include <cmath>
#include "Vetor.h"
using std::ostream;

const double GrausPorRad = 45.0 / atan(1.0);

Vetor::Vetor()
{
    x = y = 0;
}

Vetor::Vetor(double n1, double n2)
{
    x = n1;
    y = n2;
}

double Vetor::Magnitude() const
{
    return sqrt(x * x + y * y);
}

double Vetor::Angulo() const
{
    return atan2(y, x) * GrausPorRad;
}

Vetor Vetor::operator+(const Vetor& v) const
{
    return Vetor(x + v.x, y + v.y);
}

Vetor Vetor::operator*(double n) const
{
    return Vetor(n * x, n * y);
}

Vetor Vetor::operator-(const Vetor& v) const
{
    return Vetor(x - v.x, y - v.y);
}

Vetor Vetor::operator-() const
{
    return Vetor(-x, -y);
}

Vetor operator*(double n, const Vetor& v)
{
    return Vetor(n * v.x, n * v.y);
}

ostream& operator<<(ostream& os, const Vetor& v)
{
    os << "(x,y) = (" << v.x << ", " << v.y << ")\n";
    os << "(m,a) = (" << v.Magnitude() << ", " << v.Angulo() << ")\n";
    return os;
}