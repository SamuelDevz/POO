#include <iostream>
using namespace std;

class Coordenada
{
private:
    int x, y;

public:
    void MoveTo(int, int);
    void Translate(int, int);
};

void Coordenada::MoveTo(int px, int py)
{
    x = px % 1920;
	y = py % 1080;
}

void Coordenada::Translate(int dx, int dy)
{
    x = (x + dx) % 1920;
	y = (y + dy) % 1080;
}