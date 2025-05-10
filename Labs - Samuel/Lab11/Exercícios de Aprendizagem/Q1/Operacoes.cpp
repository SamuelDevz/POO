#include "Complexo.h"
#include <iostream>
using std::cout;

int main()
{
    cout << "Digite dois números complexos:\n";
    Complexo c1, c2, resul;
    c1.Ler();
    c2.Ler();

    cout << "Complexo b: ";
    c2.Exibir();

    cout << "Seu conjugado: ";
    c2.Conjugado();
    c2.Exibir();

    cout << "Complexo a: ";
    c1.Exibir();

    cout << "a + b : ";
    c2.Conjugado();
    resul = c1.Somar(c2);
    resul.Exibir();
    resul = Complexo();

    cout << "a - b : ";
    resul = c1.Subtrair(c2);
    resul.Exibir();
    resul = Complexo();

    cout << "a * b : ";
    resul = c1.Multiplicar(c2);
    resul.Exibir();
    resul = Complexo(); 

    cout << "2 * b : ";
    resul = c2.Multiplicar(2);
    resul.Exibir();
}