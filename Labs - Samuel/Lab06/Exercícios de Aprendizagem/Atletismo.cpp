#include "Atleta.h"
#include <iostream>
using namespace std;

int main() 
{
    Atleta rick { 13, 14 }; 
    Atleta john { 10, 16 }; 
    Atleta mark { 7, 9 }; 
    Atleta time;
    
    rick.calcular();
    john.calcular();
    mark.calcular();
    
    cout << "Resultados individuais:\n";

    cout << "Rick: ";
    rick.exibir();

    cout << "John: ";
    john.exibir();
    
    cout << "Mark: ";
    mark.exibir();
    
    time.acumular(rick);
    time.acumular(john);
    time.acumular(mark);
    
    cout << "\nResultado do time: ";
    time.exibir();
}