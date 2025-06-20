#include "Jogo.h"
#include <iostream>
using namespace std;

Jogo::Jogo()
{
    nome = "";
    preco = custo = 0.0f;
    horas = 0;
}

Jogo::Jogo(const string& titulo, const float valor, const int tempo)
{
    nome = titulo;
    preco = valor;
    horas = tempo;
    custo = valor;
    Calcular();
}

Jogo::~Jogo()
{
}

void Jogo::Atualizar(const float valor)
{
    preco = valor;
    Calcular();
}

void Jogo::Jogar(const int tempo)
{
    horas += tempo;
    Calcular();
}

void Jogo::Exibir() const
{
    cout << fixed;
    cout.precision(2);

    cout << nome << " R$"
        << preco << " "
        << horas << "h = R$"
        << custo << "/h\n";
}