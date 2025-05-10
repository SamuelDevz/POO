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
};