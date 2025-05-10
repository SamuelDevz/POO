#include <iosfwd>
using std::ostream;

class Vetor 
{ 
private: 
    double mag;       
    double ang;       
 
public: 
    Vetor(); 
    Vetor(const double n1, const double n2); 
 
    double X() const;
    double Y() const;

    double Magnitude() const { return mag; }
    double Angulo() const;
 
    Vetor operator+(const Vetor& v) const; 
    Vetor operator-(const Vetor& v) const; 
    Vetor operator-() const; 
    Vetor operator*(const double n) const; 
    friend Vetor operator*(const double n, const Vetor& v); 
    friend ostream& operator<<(ostream& os, const Vetor& v); 
};