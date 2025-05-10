#include <iostream>
#include <cstring>
#include "Pilha.h"
using namespace std;

enum Operadores
{
	ADICAO = '+',
	SUBTRACAO = '-',
	MULTIPLICACAO = '*',
	DIVISAO = '/'
};

int Operacao(int, int, char);

int main()
{
	cout << "Expressão: ";
	char expressao[20];
	cin >> expressao;

	Pilha pilha;
	for(int i = 0; expressao[i]; ++i)
	{
		if (isdigit(expressao[i])) 
		{
			pilha.Empilhar(expressao[i] - '0');
		}
		else 
		{
			char a, b;
			pilha.Desempilhar(a);
			pilha.Desempilhar(b);
			int r = Operacao(b, a, expressao[i]);
			pilha.Empilhar(r);
		}
	}

	char resultado;
	pilha.Desempilhar(resultado);
	
	cout << "Resultado: " << int(resultado);
}

int Operacao(int a, int b, char operador)
{
	switch (operador)
	{
		case ADICAO: return a + b;
		case SUBTRACAO: return a - b;
		case MULTIPLICACAO: return a * b;
		case DIVISAO: return a / b;
		default: cout << "Operador inválido!"; exit(0);
	}
}