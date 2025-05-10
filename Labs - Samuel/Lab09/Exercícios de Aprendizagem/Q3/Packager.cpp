#include "Packager.h"
#include "Packet.h"
#include <iostream>
using namespace std;

Packager::Packager(int size)
{
	elements = new short[size];
	tam = size;
	pack = 0;
}

Packager::~Packager()
{
	delete[] elements;
}

short &Packager::operator[](int index)
{
	if (index < tam) {
		return elements[index];
	}
	else {
		cout << "Não podemos colocar no indice " << index << endl;
		return elements[0];
	}
}

void Packager::send()
{
	Packet packet;
	for (int i = 0; i < 4; i++) {
		if (pack < tam) {
			packet[i] = elements[pack++];
		}
		else {
			packet[i] = 0;
		}
		cout << packet[i];
	}
	cout << endl;
}
