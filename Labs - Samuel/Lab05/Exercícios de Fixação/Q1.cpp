#include <iostream>
#include <string>
using namespace std;

class Pessoa 
{ 
private: 
    string nome_; 
    string sobrenome_; 
 
public: 
    Pessoa(); 
    Pessoa(const string& nome, const string& sobrenome = ""); 
 
    void Exibir();
    void Formal();
};

Pessoa::Pessoa()
{
    nome_ = "";
    sobrenome_ = "";
}

Pessoa::Pessoa(const string & nome, const string & sobrenome)
{
    nome_ = nome;
    sobrenome_ = sobrenome;
}

void Pessoa::Exibir()
{
    cout << nome_ << '\n';
}

void Pessoa::Formal()
{
    cout << nome_ << ' ' << sobrenome_ << '\n';
}

int main()
{
    Pessoa samuel;
    samuel.Exibir();

    Pessoa joao("João");
    joao.Exibir();

    Pessoa maria("Maria", "Silva");
    maria.Formal();

    Pessoa pessoa4 = Pessoa();
    pessoa4.Exibir();

    Pessoa jose = Pessoa("José");
    jose.Exibir();

    Pessoa ana = Pessoa("Ana", "Pereira");
    ana.Formal();

    Pessoa carlos = {"Carlos", "Santos"};
    carlos.Formal();

    Pessoa pedro("Pedro", "Almeida");
    pedro.Formal();
}