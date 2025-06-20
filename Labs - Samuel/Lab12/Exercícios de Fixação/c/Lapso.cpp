#include <iostream>
#include "Tempo.h"
using namespace std;

int main()  
{ 
    Tempo a { 1,10 }; 
    Tempo b, c; 
 
    b = a + 2; 
    c = 2 + a; 
 
    cout << b << endl; 
    cout << c << endl;

	/*
	
	E se adicionarmos de volta a função de conversão para inteiros?

    Não conseguirmos nem realizar nenhuma das operações de soma.

	*/
}