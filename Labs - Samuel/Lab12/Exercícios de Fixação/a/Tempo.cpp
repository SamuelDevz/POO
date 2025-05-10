#include "Tempo.h"
#include <iostream>
using std::cout;

Tempo::Tempo(int h, int m)
{
    horas = h;
    minutos = m;
}

Tempo Tempo::operator+(const Tempo& t) const
{
    Tempo soma;
    soma.horas = horas + t.horas;
    soma.minutos = minutos + t.minutos;
    
    soma.horas += soma.minutos / 60;
    soma.minutos %= 60;
    return soma;
}

Tempo operator+(int h, const Tempo& t)
{
    return t + h;
}

ostream& operator<<(ostream& os, const Tempo& t)
{
    os << t.horas << " horas, " << t.minutos << " minutos";
    return os;
}