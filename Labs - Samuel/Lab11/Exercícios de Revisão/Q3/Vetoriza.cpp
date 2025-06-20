#include "Vetor.h"
#include <iostream>
using namespace std;

int main()
{
	Vetor A { 10, 10 };
	Vetor B { 20, 20 };
	
	cout << "Vetor A:\n";
	cout << A << "\n\n";
	
	cout << "Vetor B:\n";
	cout << B << "\n\n";

	cout << "Operacoes com Vetores\n";
	cout << "-----------------------\n";
	cout << "A + B = " << A + B << endl;
	cout << "A - B = " << A - B << endl;
	cout << "2 * A = " << 2 * A << endl;
	cout << "A * 2 = " << A * 2 << endl;
	cout << "   -A = " << -A << endl;
}