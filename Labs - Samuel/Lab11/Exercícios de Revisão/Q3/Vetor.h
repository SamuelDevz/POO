#include <iosfwd>
using std::ostream;

class Vetor 
{ 
private: 
    double mag;       
    double ang;       
 
public: 
    Vetor(); 
    Vetor(double n1, double n2); 
 
    double X() const;      
    double Y() const;      
 
    double Magnitude() const { return mag; }
    double Angulo() const;
 
    Vetor operator+(const Vetor& v) const; 
    Vetor operator-(const Vetor& v) const; 
    Vetor operator-() const; 
    Vetor operator*(double n) const; 
    friend Vetor operator*(double n, const Vetor& v); 
    friend ostream& operator<<(ostream& os, const Vetor& v); 
};