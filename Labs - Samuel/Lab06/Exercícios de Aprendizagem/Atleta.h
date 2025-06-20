class Atleta 
{ 
private:
    int acertos; 
    int tentativas; 
    float percentual; 

public:
    Atleta();
    Atleta(int acertos, int tentativas);
    void calcular();
    void exibir() const;
    Atleta& acumular(const Atleta& atl);
};