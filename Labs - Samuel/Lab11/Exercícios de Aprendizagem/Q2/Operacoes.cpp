#include "Complexo.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Digite dois números complexos: ";
    Complexo a, b;
    cin >> a >> b;

    cout << "Complexo b: " << b << endl;
    cout << "Seu conjugado: " << ~b << endl;
    cout << "Complexo a: " << a << endl;
    cout << "a + b : " << a + b << endl;
    cout << "a - b : " << a - b << endl;
    cout << "a * b : " << a * b << endl;
    cout << "2 * b : " << 2 * b << endl;

    return 0;
}