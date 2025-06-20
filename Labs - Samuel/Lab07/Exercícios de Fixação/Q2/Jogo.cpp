#include "Jogo.h"
#include <iostream>
using namespace std;

void Atualizar(Jogo * este, const float valor)
{
    este->preco = valor;
    Calcular(este);
}

void Jogar(Jogo * este, const int tempo)
{
    este->horas += tempo;
    Calcular(este);
}

void Exibir(const Jogo * este)
{
    cout << fixed;
    cout.precision(2);

    cout << este->nome << " R$"
        << este->preco << " "
        << este->horas << "h = R$"
        << este->custo << "/h\n";
}