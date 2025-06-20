#include "Packet.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    Packet packet;

    cout << "Empacotando...\n";
    packet.begin();
    packet << 9;
    packet << 4;
    packet << 3;
    packet << 7;
    packet.end();

    cout << "Enviando...\n";
    packet.send();
    cout << "Recebendo...\n";

    cout << "Desempacotando...\n";
    short a = 0, b = 0, c = 0, d = 0;
    packet >> a;
    packet >> b;
    packet >> c;
    packet >> d;
    cout << a << b << c << d << endl;
}