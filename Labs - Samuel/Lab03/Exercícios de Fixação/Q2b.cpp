#include <iostream>
using namespace std;

class Coordenada
{
public:
    int x, y;

    void MoveTo(int, int);
    void Translate(int, int);
};

int main()
{
    Coordenada ponto { 2, 4 };

	cout << ponto.x << ", " << ponto.y << endl;
	ponto.MoveTo(1, 5);
	cout << ponto.x << ", " << ponto.y << endl;
	ponto.Translate(4, 16);
	cout << ponto.x << ", " << ponto.y << endl;
}

void Coordenada::MoveTo(int px, int py)
{
    x = px;
    y = py;
}

void Coordenada::Translate(int dx, int dy)
{
    x += x;
    y += y;
}