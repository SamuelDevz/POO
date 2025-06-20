#include <iosfwd>
using std::ostream;
using std::istream;

class Complexo
{
private:
    double real;
    double img;

public:
    Complexo();
    Complexo(const double numReal, const double numImg);

    Complexo Somar(const Complexo c) const;
    Complexo Subtrair(const Complexo c) const;
    Complexo Multiplicar(const Complexo c) const;
    Complexo Multiplicar(const double n) const;
    void Conjugado();

    void Exibir() const;
    void Ler();

    Complexo operator+(const Complexo& c) const;
    Complexo operator-(const Complexo& c) const;
    Complexo operator*(const Complexo& c) const;
    Complexo operator~() const;

    friend ostream& operator<<(ostream& out, const Complexo& c);
    friend istream& operator>>(istream& in, Complexo& c);
    friend Complexo operator*(const double n, const Complexo& c);
};