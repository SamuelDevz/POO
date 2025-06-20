#include <iostream>
using std::ostream;
using std::istream;

class Tempo
{
private:
    int horas;
    int minutos;

public:
    Tempo(int h = 0, int m = 0);

    Tempo operator+(const Tempo& t) const;
    Tempo operator+(int num) const;
    ostream& operator>>(ostream& os);

    friend Tempo operator+(int num, const Tempo& t);
    friend istream& operator>>(istream& is, Tempo& t);
    friend ostream& operator<<(ostream& os, const Tempo& t);
    friend ostream& operator>>(const Tempo& t, ostream& os);
};