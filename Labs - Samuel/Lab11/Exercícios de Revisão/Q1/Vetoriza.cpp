#include "Vetor.h"
#include <iostream>
using namespace std;

int main()
{
	Vetor A { 10, 10 };
	Vetor B { 20, 20 };
	
	cout << "Coordenadas Retangulares\n";
	cout << "------------------------\n";
	A.Exibir(); cout << '\n';
	B.Exibir(); cout << '\n';

	A.SetCoord(Vetor::POL);
	B.SetCoord(Vetor::POL);

	cout << "\nCoordenadas Polares\n";
	cout << "-------------------\n";
	A.Exibir();
	B.Exibir();

	cout << "\nOperacoes com Vetores";
	cout << "-----------------------";
	cout << "A + B = "; 
	A.Soma(B).Exibir();

	cout << "A - B = "; 
	A.Subtrair(B).Exibir();

	cout << "2 * A = "; 
	A.Multiplicar(2).Exibir();

	cout << "A * 2 = "; 
	A.Multiplicar(2).Exibir();

	cout << "   -A = "; 
	A.Inverter().Exibir();
}