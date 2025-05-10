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
    void send();
    void operator<<(const short val);
    void operator>>(short& val) const;
};