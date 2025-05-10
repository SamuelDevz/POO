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
	int totalMin1 = horas * 60 + minutos;
	int totalMin2 = t.horas * 60 + t.minutos;
	int diff = totalMin1 - totalMin2;
	return Tempo { diff / 60, diff % 60 };
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

Tempo& Tempo::operator+=(const Tempo& t)
{
	int totalMin1 = horas * 60 + minutos;
	int totalMin2 = t.horas * 60 + t.minutos;
	int diff = totalMin1 - totalMin2;
	
	this->minutos += diff % 60;
	this->horas += diff / 60;
	return *this;
}

Tempo& Tempo::operator-=(const Tempo& t)
{
	int totalMin1 = horas * 60 + minutos;
	int totalMin2 = t.horas * 60 + t.minutos;
	int diff = totalMin1 - totalMin2;

	this->minutos -= diff % 60;
	this->horas -= diff / 60;
	return *this;
}