#include "Complexo.h"
#include <iostream>
using namespace std;

Complexo::Complexo()
{
    real = img = 0;
}

Complexo::Complexo(const double numReal, const double numImg)
{
    real = numReal;
    img = numImg;
}

Complexo Complexo::operator+(const Complexo& c) const
{
    return Complexo(this->real + c.real, this->img + c.img);
}

Complexo Complexo::operator-(const Complexo& c) const
{
    return Complexo(this->real - c.real, this->img - c.img);
}

Complexo Complexo::operator*(const Complexo& c) const
{
    return Complexo(
        this->real * c.real - this->img * c.img, 
        this->img * c.real + this->real * c.img 
    );
}

Complexo Complexo::operator~() const
{
    return Complexo(this->real, -this->img);
}

ostream& operator<<(ostream& out, const Complexo& c)
{
    out << c.real << showpos << c.img << noshowpos << "i";
    return out;
}

istream& operator>>(istream& in, Complexo& c)
{
    in >> c.real >> c.img;
    return in;
}

Complexo operator*(const double n, const Complexo& c)
{
    return Complexo(c.real * n, c.img * n);
}