using Item = int;

class Lista
{
private:
	Item* itens;
	int topo;
	int max;

	void Expandir();

public:
	Lista();
	~Lista();
	bool Cheia();
	bool Vazia();
	void Add(const Item & item);
	void Visitar(void (*fn)(Item& i));
};

void Exibir(Item & i);