#include <iosfwd>
using std::ostream;

class Vetor 
{ 
private: 
   double x;
   double y;
 
public: 
    Vetor(); 
    Vetor(double n1, double n2); 
 
    double Magnitude() const;
    double Angulo() const;
 
    double X() const { return x; }
    double Y() const { return y; }
 
    Vetor operator+(const Vetor& v) const; 
    Vetor operator-(const Vetor& v) const; 
    Vetor operator-() const; 
    Vetor operator*(double n) const; 
    friend Vetor operator*(double n, const Vetor& v); 
    friend ostream& operator<<(ostream& os, const Vetor& v); 
};