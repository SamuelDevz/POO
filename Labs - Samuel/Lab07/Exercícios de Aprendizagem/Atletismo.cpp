#include "Atleta.h"
#include <iostream>
using namespace std;

const int MAX = 4;

int main() 
{
    Atleta time[MAX]
    { 
        Atleta(10, 14),
        Atleta(10, 16),
        Atleta(12, 15),
        Atleta(15, 20)
    };

    Atleta melhorAtleta = time[0];
    for (int i = 0; i < MAX; i++) 
        if (time[i].Comparar(melhorAtleta)) 
            melhorAtleta = time[i];

    cout << "Atleta com o melhor percentual de acertos:\n";
    melhorAtleta.Exibir();
}