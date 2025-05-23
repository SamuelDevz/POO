#include "Lista.h"
#include <iostream>
using std::cout;

Lista::Lista(const int tam)
{
	itens = new Item[tam];
	size = 0;
	max = tam;
}

Lista::~Lista()
{
	delete[] itens;
}

bool Lista::Vazia() const
{
	return size == 0;
}

bool Lista::Cheia() const
{
	return size == max;
}

bool Lista::Adicionar(const Item& item)
{
	if (size < max)
	{
		itens[size++] = item;
		return true;
	}
	else
	{
		return false;
	}
}

Item Lista::operator[](int index)
{
    if(size > index)
    {
        return itens[index];
    }
    else
    {
        cout << "Nao possui elemento na posicao indicada";
        return 0;
    }
}