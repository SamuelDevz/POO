#include <iostream>
#include <cmath>
#include "Vetor.h"
using std::cout;

const double GrausPorRad = 45.0 / atan(1.0);

void Vetor::SetMag()
{
    mag = sqrt(x * x + y * y);
}

void Vetor::SetAng()
{
    ang = atan2(y, x);
}

void Vetor::SetX()
{
    x = mag * cos(ang);
}

void Vetor::SetY()
{
    y = mag * sin(ang);
}

Vetor::Vetor()
{
    x = y = ang = mag = 0;
    rep = RET;
}

Vetor::Vetor(const double n1, const double n2, const Coord modo)
{
    rep = modo;
    if (rep == RET)
    {
        x = n1; y = n2;
        SetMag();
        SetAng();
    }
    else
    {
        mag = n1;
        ang = n2 / GrausPorRad;
        SetX();
        SetY();
    }
}

Vetor Vetor::Soma(const Vetor& v) const
{
    return Vetor(x + v.x, y + v.y);
}

Vetor Vetor::Multiplicar(const double n) const
{
    return Vetor(n * x, n * y);
}

Vetor Vetor::Subtrair(const Vetor& v) const
{
    return Vetor(x - v.x, y - v.y);
}

Vetor Vetor::Inverter() const
{
    return Vetor(-x, -y);
}

void Vetor::Exibir() const
{
    if (rep == RET)
        cout << "(x,y) = (" << x << ", " << y << ")\n";
    else
        cout << "(m,a) = (" << mag << ", " << ang * GrausPorRad << ")\n";
}