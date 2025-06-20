#pragma once

class Tempo
{
private:
	int horas;
	int minutos;
public:
	Tempo();
	Tempo(int h, int m = 0);
	void Exibir() const;
	Tempo operator+(const Tempo& t) const;
	Tempo operator-(const Tempo& t) const;
	bool operator==(const Tempo& t) const;
	Tempo operator+(int h) const;
	Tempo operator*(int h) const;
	const Tempo& operator+=(const Tempo& t);
	const Tempo& operator-=(const Tempo& t);
};