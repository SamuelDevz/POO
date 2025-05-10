using Item = int;

class Lista 
{ 
private: 
    Item * itens; 
    int size; 
    int max; 
 
public: 
    Lista(const int tam); 
    ~Lista(); 
 
    bool Vazia() const; 
    bool Cheia() const; 
    bool Adicionar(const Item & item);
    Item operator[](int index);
};