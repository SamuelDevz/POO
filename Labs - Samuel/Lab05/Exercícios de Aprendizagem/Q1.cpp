#include <iostream>
#include <string>
using namespace std;

class Jogo 
{ 
private: 
    string nome;   
    float preco;   
    int horas;     
    float custo;

    void calcular()  
    {  
       if (horas > 0)  
          custo = preco/horas;  
    } 
 
public:
    Jogo();
    Jogo(const string & titulo = "", float valor = 0); 
    Jogo(const string & titulo, float valor, int tempo);
    void atualizar(float valor); 
    void jogar(int tempo); 
    void exibir(); 
};

Jogo::Jogo()
{ 
    nome = "";
    preco = 0;
    horas = 0;
    custo = 0; 
}

Jogo::Jogo(const string & titulo, float valor)
{
    nome = titulo;
    preco = valor;
    horas = 0;
    custo = preco;
}

Jogo::Jogo(const string & titulo, float valor, int tempo)
{
    nome = titulo;
    preco = valor;
    horas = tempo;
    custo = preco;
}

void Jogo::atualizar(float valor)
{
    preco = valor;
    calcular();
}

void Jogo::jogar(int tempo)
{
    horas += tempo;
    calcular();
}

void Jogo::exibir()
{
    cout << fixed;
    cout.precision(2);

    cout << nome << " R$"
        << preco << " "
        << horas << "h = R$"
        << custo << "/h\n";
}

int main()
{
}