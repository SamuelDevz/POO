#include "Dolar.h"

const double COTACAO_DOLAR = 5.65;

Dolar::Dolar()
{
    valor = 0;
}

Dolar::Dolar(const double v)
{
    valor = v;
}

Dolar::operator Real()
{
    return valor * COTACAO_DOLAR;
}