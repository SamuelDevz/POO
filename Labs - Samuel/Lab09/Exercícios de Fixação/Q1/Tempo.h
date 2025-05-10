class Tempo
{
private:
    int horas;
    int minutos;

public:
    Tempo();
    Tempo(const int h, const int m = 0);

    void Exibir() const;
    Tempo operator+(const Tempo& t) const;
    Tempo operator-(const Tempo& t) const;
    Tempo operator+(const int fator) const;
    Tempo operator*(const int fator) const;
    Tempo& operator+=(const Tempo& t);
    Tempo& operator-=(const Tempo& t);
};