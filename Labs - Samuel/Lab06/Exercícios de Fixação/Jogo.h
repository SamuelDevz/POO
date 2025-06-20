#include <string>
using std::string;

class Jogo
{
private:
	string nome;
	float preco;
	int horas;
	float custo;
	
	void calcular();
	
public:
	Jogo();
	Jogo(const string& titulo, float valor = 0);
	~Jogo();

	void atualizar(float valor);
	void jogar(int tempo);
	void exibir() const;
};

inline void Jogo::calcular()
{
	if (horas > 0)
		custo = preco / horas;
}