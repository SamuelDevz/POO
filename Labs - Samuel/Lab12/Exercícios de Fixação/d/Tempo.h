#include <iostream>
using std::ostream;

class Tempo 
{ 
private: 
    int horas; 
    int minutos; 
 
public: 
    Tempo(int h = 0, int m = 0);

    operator int(); 
 
    //friend Tempo operator+(const Tempo& t1, const Tempo& t2);
    friend ostream& operator<<(ostream& os, const Tempo& t); 
};