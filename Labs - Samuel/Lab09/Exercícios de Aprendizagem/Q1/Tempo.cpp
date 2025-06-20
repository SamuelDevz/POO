#include "Tempo.h"
#include <iostream>
using namespace std;

Tempo::Tempo()
{
	horas = 0;
	minutos = 0;
}

Tempo::Tempo(int h, int m)
{
	horas = h;
	minutos = m;
}

void Tempo::Exibir() const
{
	cout << horas << ":" << minutos << endl;
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

bool Tempo::operator==(const Tempo& t) const
{
	return horas == t.horas && minutos == t.minutos;
}

Tempo Tempo::operator+(int h) const
{
	Tempo soma;
	soma.horas = horas + h;

	return soma;
}

Tempo Tempo::operator*(int h) const
{
	Tempo mult;
	mult.minutos = minutos * h;
	mult.horas = horas * h;

	mult.horas += mult.minutos / 60;
	mult.minutos %= 60;

	return mult;
}

const Tempo& Tempo::operator+=(const Tempo& t)
{
	horas += t.horas;
	minutos += t.minutos;

	horas += minutos / 60;
	minutos %= 60;

	return *this;
}

const Tempo& Tempo::operator-=(const Tempo& t)
{
	int min1 = (horas * 60) + minutos;
	int min2 = (t.horas * 60) + t.minutos;

	int diff = min1 - min2;

	horas = diff / 60;
	minutos = diff % 60;

	return *this;
}
