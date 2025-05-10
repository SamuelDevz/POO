#include "Atleta.h"
#include <iostream>
using namespace std;

Atleta::Atleta()
{
    acertos = 0;
    tentativas = 0;
    percentual = 0;
}

Atleta::Atleta(int qtdAcertos, int qtdTentativas) 
{
    acertos = qtdAcertos;
    tentativas = qtdTentativas;
    percentual = 0;
}

void Atleta::calcular()
{ 
    if (tentativas != 0) 
        percentual = 100.0f * acertos / tentativas; 
    else 
        percentual = 0; 
}

void Atleta::exibir() const 
{ 
    cout << "Acertos: " << acertos << "  "; 
    cout << " Tentativas: " << tentativas << "  "; 
    cout << " Percentual: " << percentual << "\n"; 
} 

Atleta& Atleta::acumular(const Atleta& atl) 
{ 
    tentativas += atl.tentativas; 
    acertos += atl.acertos; 
    calcular(); 
    return *this; 
}