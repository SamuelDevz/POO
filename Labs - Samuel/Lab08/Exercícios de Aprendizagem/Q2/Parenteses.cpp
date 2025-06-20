#include <iostream>
#include "Pilha.h"
using namespace std; 

int main()
{
	cout << "Digite uma expressao: ";
	char expressao[50];
	cin >> expressao;

	Pilha pilha;
	for(int i = 0; expressao[i] != '/0'; ++i)
		pilha.Empilhar(expressao[i]);

	int count{};

	while(!pilha.Vazia())
	{
		Item i;
		int num{};
		pilha.Desempilhar(i);

		if(expressao[num++] == '(')
			count++;
		else if(expressao[num++] == ')')
			count--;
	}

	if(count > 0)
		cout << "[Erro] Parentese não foi fechado\n";
	else
		cout << "[Ok] Parênteses corretos\n";
}