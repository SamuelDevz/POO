#include <iostream>
#include "Tempo.h"
using namespace std;

Tempo::Tempo()
{
    horas = 0;
    minutos = 0;
}

Tempo::Tempo(const int h, const int m)
{
    horas = h;
    minutos = m;
}

void Tempo::Exibir() const
{
    cout << horas << " horas, "
         << minutos << " minutos";
}

Tempo Tempo::operator+(const Tempo& t) const
{
    Tempo soma;
    soma.minutos = minutos + t.minutos;
    soma.horas = horas + t.horas;
    
    soma.horas += soma.minutos / 60;
    soma.minutos %= 60;
    return soma;
}

Tempo Tempo::operator-(const Tempo& t) const
{
	Tempo sub;
	sub.minutos = minutos - t.minutos;
	sub.horas = horas - t.horas;

	if (sub.horas < 0)
		sub.horas = 0;

	if (sub.minutos < 0)
		sub.minutos = 0;

	return sub;
}

Tempo Tempo::operator+(const int fator) const
{
	Tempo soma;
	soma.horas = horas + fator;
	return soma;
}

Tempo Tempo::operator*(const int fator) const
{
	Tempo mult;
	mult.minutos = minutos * fator;
	mult.horas = horas * fator;

	mult.horas += mult.minutos / 60;
	mult.minutos %= 60;

	return mult;
}