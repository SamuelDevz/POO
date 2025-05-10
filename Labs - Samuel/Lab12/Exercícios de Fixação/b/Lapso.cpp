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
	
	E se substituirmos a sobrecarga de operator+() por uma função amiga?

    Agora é possível realizar a operação de soma da atribuição de c

	*/
}