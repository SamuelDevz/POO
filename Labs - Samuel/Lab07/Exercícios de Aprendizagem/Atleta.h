class Atleta 
{ 
private:
    int acertos; 
    int tentativas; 
    float percentual; 

public:
    Atleta();
    Atleta(const int acertos, const int tentativas);

    bool Comparar(const Atleta & atl);
    Atleta& Acumular(const Atleta& atl);
    void Calcular();
    void Exibir() const;
};