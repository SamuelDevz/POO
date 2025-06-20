#include "Jogo.h"
#include <iostream>
using namespace std;

const int MAX = 3;

int main()
{
    Jogo colecao[MAX]
    {
        Jogo("Gears", 90.0f, 30),
        Jogo("Doom", 60.0f, 120),
        Jogo("Halo", 80.0f, 40) 
    };

    cout << "Colecao de Jogos:\n";
    for (int i = 0; i < MAX; i++)
        colecao[i].Exibir();

    // Encontra o jogo mais jogado
    const Jogo* maisJogado = &colecao[0];
    for (int i = 1; i < MAX; i++)
        if (colecao[i].Horas() > maisJogado->Horas())
            maisJogado = &colecao[i];
    cout << "\nJogo mais jogado:\n";
    maisJogado->Exibir();

    // Encontra o jogo com menor custo por hora jogada
    const Jogo* menorCusto = &colecao[0];
    for (int i = 1; i < MAX; i++)
        if (colecao[i].Custo() < menorCusto->Custo())
            menorCusto = &colecao[i];
    cout << "\nJogo com menor custo por hora jogada:\n";
    menorCusto->Exibir();

    // Encontra o jogo com menor preço
    const Jogo* menorPreco = &colecao[0];
    for (int i = 1; i < MAX; i++)
        if (colecao[i].Preco() < menorPreco->Preco())
            menorPreco = &colecao[i];
    cout << "\nJogo com menor preco:\n";
    menorPreco->Exibir();
}