#include "Money.h"
#include <iostream>
using namespace std;

int main() 
{ 
    Money compra; 
    compra = 10;
    cout << int(compra) << endl;

    /*
    
    Na questão anterior, depois de ter o construtor e a função de conversão para 
    double prontas, é necessário fazer mais alguma coisa para ter a conversão de 
    valores inteiros para o tipo Money? Teste e explique porque o programa abaixo 
    funciona.

    Esse programa funciona visto que é type cast explícito de money para double que 
    de double vai para int. Aqui é feita de forma explícita já no outro programa era
    de forma implícita.

    */
}