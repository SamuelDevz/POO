#include <iostream>
#include <string>
#include <random>
using namespace std;

class ContaBancaria
{
private:
	string nome;
	int idConta;
	float saldo;

public:
	void criarConta(const string & usuario);
	void exibirConta();
	void depositar(float valor);
	void sacar(float valor);
};

void ContaBancaria::criarConta(const string & usuario)
{
    nome = usuario;
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1000, 9999);
    idConta = dist(mt);
    saldo = 0;
}

void ContaBancaria::exibirConta()
{
    cout << "\nCliente: " << nome << endl
		 << "Numero da conta: " << idConta << endl
		 << "Saldo: R$" << saldo << endl;
}

void ContaBancaria::depositar(float valor)
{
    saldo += valor;
}

void ContaBancaria::sacar(float valor)
{
    if(valor > 0 && valor <= saldo)
        saldo -= valor;
}