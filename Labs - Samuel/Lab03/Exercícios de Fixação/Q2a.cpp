#include <iostream>
using namespace std;

struct Coordenada
{
    int x, y;

    void MoveTo(int, int);
    void Translate(int, int);
};

int main()
{
    Coordenada ponto { 3, 9 };

	cout << ponto.x << ", " << ponto.y << endl;
	ponto.MoveTo(1, 7);
	cout << ponto.x << ", " << ponto.y << endl;
	ponto.Translate(5, 25);
	cout << ponto.x << ", " << ponto.y << endl;
}

void Coordenada::MoveTo(int px, int py)
{
    x = px;
    y = py;
}

void Coordenada::Translate(int dx, int dy)
{
    x += dx;
    y += dy;
}