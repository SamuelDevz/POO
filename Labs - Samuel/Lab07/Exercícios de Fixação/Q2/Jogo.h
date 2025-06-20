#include <string>
using std::string;

struct Jogo 
{
	string nome;
	float preco;
	int horas;
	float custo;
};

inline void Calcular(Jogo * este)
{
	if (este->horas > 0)
		este->custo = este->preco / este->horas;
}

void Atualizar(Jogo * este, const float valor);
void Jogar(Jogo * este, const int tempo);
void Exibir(const Jogo * este);