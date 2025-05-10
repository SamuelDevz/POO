#include "Atleta.h"
#include <iostream>
using namespace std;

Atleta::Atleta()
{
    acertos = 0;
    tentativas = 0;
    percentual = 0;
}

Atleta::Atleta(const int qtdAcertos, const int qtdTentativas) 
{
    acertos = qtdAcertos;
    tentativas = qtdTentativas;
    percentual = 0;
}

void Atleta::Calcular()
{ 
    if (tentativas != 0) 
        percentual = 100.0f * acertos / tentativas; 
    else 
        percentual = 0; 
}

void Atleta::Exibir() const 
{ 
    cout << "Acertos: " << acertos << "  "; 
    cout << " Tentativas: " << tentativas << "  "; 
    cout << " Percentual: " << percentual << "\n"; 
} 

Atleta& Atleta::Acumular(const Atleta& atl) 
{ 
    tentativas += atl.tentativas; 
    acertos += atl.acertos; 
    Calcular(); 
    return *this; 
}

bool Atleta::Comparar(const Atleta & atl)
{
    if(this->acertos > atl.acertos)
        return true;
    else
        return false;
}