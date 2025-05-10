#include <iosfwd>
using std::istream;
using std::ostream;
using uint = unsigned int;

class Cor
{
private:
	uint R;
	uint G;
	uint B;

public:
	Cor(const uint r, const uint g, const uint b);
	Cor();
	Cor operator* (const Cor& c);

	friend istream& operator>>(istream& is, Cor& c);
	friend ostream& operator<<(ostream& os,const Cor& c);
};