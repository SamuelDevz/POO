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

	void calcular() { if (horas > 0) custo = preco / horas; }

public:
	void adquirir(const string& titulo, float valor);
	void atualizar(float valor);
	void jogar(int tempo);
	void exibir();
};

int main()
{
	Jogo hollowKnight;
	hollowKnight.adquirir("Hollow Knight", 46.99);
	hollowKnight.atualizar(62.29);
	hollowKnight.exibir();

	hollowKnight.jogar(4);
	hollowKnight.exibir();

	hollowKnight.jogar(7);
	hollowKnight.exibir();
	
	hollowKnight.jogar(5);
	hollowKnight.exibir();
}

void Jogo::adquirir(const string& titulo, float valor) 
{
	nome = titulo;
	preco = valor;
	horas = 0;
	custo = valor;
}

void Jogo::atualizar(float valor) 
{
	preco = valor;
	calcular();
}

void Jogo::jogar(int tempo) 
{
	if (tempo > 0) 
	{
		horas += tempo;
		custo = preco / horas;
	}
}

void Jogo::exibir() 
{
	cout << "\nNome: " << nome << endl
		 << "Preco: R$" << preco << endl
		 << "Horas jogadas: " << horas << endl
		 << "Custo (preco/horas): R$" << custo << endl;
}