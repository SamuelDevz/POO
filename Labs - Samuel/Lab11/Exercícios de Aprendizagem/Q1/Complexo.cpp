#include "Complexo.h"
#include <iostream>
using std::cout;
using std::showpos;
using std::noshowpos;
using std::cin;

Complexo::Complexo()
{
    real = img = 0;
}

Complexo::Complexo(const double numReal, const double numImg)
{
    real = numReal;
    img = numImg;
}

Complexo Complexo::Somar(const Complexo c) const
{
    return Complexo(this->real + c.real, this->img + c.img);
}

Complexo Complexo::Subtrair(const Complexo c) const
{
    return Complexo(this->real + c.real, this->img + c.img);
}

Complexo Complexo::Multiplicar(const Complexo c) const
{
    return Complexo(
        this->real * c.real - this->img * c.img, 
        this->img * c.real + this->real * c.img 
    );
}

Complexo Complexo::Multiplicar(const double n) const
{
    return Complexo(this->real * n, this->img * n);
}

void Complexo::Conjugado()
{
    this->img *= -1;
}

void Complexo::Exibir() const
{
    cout << this->real << showpos << this->img << noshowpos << "i\n";
}

void Complexo::Ler()
{
    cin >> this->real;
    cin >> this->img;
    cin.ignore();
}