#include <iostream>
#include <string>
using namespace std;

class ContaBancaria
{
private:
	string nome;
	int idConta;
	float saldo;

public:
	void criarConta(const string & nome);
	void exibirConta();
	void depositar(float valor);
	void sacar(float valor);
};