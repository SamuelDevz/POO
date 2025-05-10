using Item = char;

class Pilha
{
private:
    Item * itens;
    int topo;
    int max;

public:
    Pilha(int tam);
    ~Pilha();

    bool Vazia() const;
    bool Cheia() const;
    bool Empilhar(const Item & item);
    bool Desempilhar(Item & item);
};