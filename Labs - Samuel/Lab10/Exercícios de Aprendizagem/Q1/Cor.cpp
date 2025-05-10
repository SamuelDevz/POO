#include "Cor.h"
#include <iostream>
using namespace std;

Cor::Cor(const uint r, const uint g, const uint b)
{
	R = r;
	G = g;
	B = b;
}

Cor::Cor()
{
	R = 0;
	G = 0;
	B = 0;
}

Cor Cor::operator*(const Cor& c)
{
	return Cor 
	{
		R * c.R / 255, 
		G * c.G / 255, 
		B * c.B / 255
	};
}

istream& operator>>(istream& is, Cor& c)
{
	is >> c.R >> c.G >> c.B;
	return is;
}

ostream& operator<<(ostream& os, const Cor& c)
{
	os << "\x1b[38;2;" << c.R << ";" << c.G << ";" << c.B << "m";
	return os;
}