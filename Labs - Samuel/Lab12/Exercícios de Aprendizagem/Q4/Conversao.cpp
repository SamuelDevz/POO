#include "Dolar.h"
#include "Real.h"
#include <iostream>
using namespace std;

int main() 
{ 
    Dolar ganhos = 100;                // converte int para Dólar 
 
    Real carteira; 
    carteira = ganhos;                 // converte de Dólar para Real  
    cout << carteira << endl;          // mostra valor em Reais 
     
    carteira = carteira + Dolar{25}; 
    cout << carteira << endl;          // mostra valor em Reais 
}