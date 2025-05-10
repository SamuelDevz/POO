#pragma once
using Item = char;

class Pilha
{
private:
	Item * itens;
	int topo;
	int max;

	void Expandir();

public:
	Pilha();
	Pilha(int tam);
	~Pilha();

	bool Vazia() const;
	void Empilhar(const Item& item);
	bool Desempilhar(Item& item);
};