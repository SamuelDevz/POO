#include "Tempo.h"
#include <iostream>
using std::cout;

Tempo::Tempo(int h, int m)
{
    horas = h;
    minutos = m;
}

Tempo operator+(const Tempo& t1, const Tempo& t2)
{
    return Tempo(t1.horas + t2.horas, t1.minutos + t2.minutos);
}

ostream& operator<<(ostream& os, const Tempo & t)
{
    os << t.horas << " horas, " << t.minutos << " minutos";
    return os;
}