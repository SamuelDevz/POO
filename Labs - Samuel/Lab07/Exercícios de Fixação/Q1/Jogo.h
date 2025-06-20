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
	Jogo(const string& titulo, float valor = 0, int tempo = 0);	
	~Jogo();

	const Jogo& Comparar(const Jogo& jogo) const;
	int Horas() const;
	float Custo() const;
	void atualizar(float valor);
	void jogar(int tempo);
	void exibir() const;
};

inline void Jogo::calcular()
{
	if (horas > 0)
		custo = preco / horas;
}

inline int Jogo::Horas() const
{ return horas; }

inline float Jogo::Custo() const
{ return custo; }

// ----------------------------------------------- 
// Funções Auxiliares 
// -----------------------------------------------

const Jogo& MaisJogado(const Jogo& a, const Jogo& b);
const Jogo& MenorCusto(const Jogo& a, const Jogo& b);