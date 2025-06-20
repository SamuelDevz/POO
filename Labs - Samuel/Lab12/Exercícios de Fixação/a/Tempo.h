#include <iostream>
using std::ostream;

class Tempo 
{ 
private: 
    int horas; 
    int minutos; 
 
public: 
    Tempo(int h = 0, int m = 0); 
 
    Tempo operator+(const Tempo& t) const;   
    friend ostream& operator<<(ostream& os, const Tempo& t); 
};