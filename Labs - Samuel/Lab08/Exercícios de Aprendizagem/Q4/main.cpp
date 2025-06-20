#include "Lista.h"
#include <iostream>
using namespace std;

void Exibir(Item & i)
{
    cout << "[" << i << "] ";
}

void Dobrar(Item & i)
{
    i *= 2;
}

void Incrementar(Item & i)
{
    i++;
}

int main()
{
    Lista lista;
    
    cout << "\nAdicionando itens...\n";
    for (int i = 1; i <= 5; i++)
        lista.Add(i);
    
    cout << "Itens da lista: ";
    lista.Visitar(Exibir);
    cout << endl;
    
    cout << "\nDobrando os valores...\n";
    lista.Visitar(Dobrar);
    
    cout << "Itens da lista após dobrar: ";
    lista.Visitar(Exibir);
    cout << endl;
    
    cout << "\nIncrementando os valores...\n";
    lista.Visitar(Incrementar);
    
    cout << "Itens da lista após incrementar: ";
    lista.Visitar(Exibir);
    cout << endl;
    
    return 0;
} 