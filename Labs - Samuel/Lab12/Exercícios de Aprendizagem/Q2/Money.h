#include <iosfwd>
using std::ostream;

class Money 
{ 
private: 
    double valor; 
 
public: 
    Money();
    Money(const double v);

    operator double();
};