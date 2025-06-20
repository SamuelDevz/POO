#include <string>
using std::string;

class Jogo 
{ 
private: 
    string nome;
    float preco;
    int horas;
    float custo;

    void Calcular();

public:
    Jogo();
    Jogo(const string& titulo, const float valor = 0, const int tempo = 0);
    ~Jogo();

    void Atualizar(const float valor);
    void Jogar(const int tempo);
    void Exibir() const;
    
    float Preco() const;
    float Custo() const;
    int Horas() const;
};

inline void Jogo::Calcular()
{
	if (horas > 0)
		custo = preco / horas;
}

inline float Jogo::Preco() const
{
    return preco;
}

inline float Jogo::Custo() const
{
    return custo;
}

inline int Jogo::Horas() const
{
    return horas;
}