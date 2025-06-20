#include "Pilha.h"

void Pilha::Expandir()
{
	Item * vet = new Item[2 * max + 1];

	for (int i = 0; i < max; i++)
		vet[i] = itens[i];

	delete[] itens;

	itens = vet;
	max = 2 * max + 1;
}

Pilha::Pilha()
{
	itens = nullptr;
	max = 0;
	topo = 0;
}

Pilha::Pilha(int tam)
{
	itens = new Item[tam];
	max = tam;
	topo = 0;
}

Pilha::~Pilha()
{
	delete[] itens;
}

bool Pilha::Vazia() const
{
	return topo == 0;
}

void Pilha::Empilhar(const Item& item)
{
	if (topo == max)
		Expandir();

	itens[topo++] = item;
}

bool Pilha::Desempilhar(Item& item)
{
	if (topo > 0)
	{
		item = itens[--topo];
		return true;
	}

	return false;
}