#include <iostream>
#include "Pilha.h"
using namespace std; 

int main()
{
	cout << "Digite uma palavra: ";
	char palavra[20];
	cin >> palavra;

	Pilha pilha;
	for(int i = 0; palavra[i] != '/0'; ++i)
		pilha.Empilhar(palavra[i]);

	int count{};

	cout << "Empilhando e desempilhando fica: ";
	while (!pilha.Vazia())
	{
		Item i{};
		int num{}; 
		
		pilha.Desempilhar(i);
		if(palavra[num++] != i)
			count++;
		
		cout << i;
	}

	if (count > 0)
		cout << "\nA palavra não é um palíndromo.";
	else
		cout << "\nA palavra é um palíndromo.";
}