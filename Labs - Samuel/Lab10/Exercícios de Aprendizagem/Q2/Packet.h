#include <iosfwd>
using std::istream;
using std::ostream;

union Data
{
    struct
    {
        short x;
        short y;
        short z;
        short w;
    } part;

    long long all;
};

class Packet
{
private:
    Data data;
    int index;

public:
    Packet();

    void begin();
    void end();
    void send() const;
    short& operator[](const int index);

    friend istream& operator>>(istream& is, Packet& p);
    friend ostream& operator<<(ostream& os, const Packet& p);
};