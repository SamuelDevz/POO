#include <iostream>
using namespace std;

class Point 
{ 
private: 
    int x; 
    int y; 
 
public: 
    void MoveTo(int px, int py); 
    void Translate(int dx, int dy); 
};

int main()
{
    Point p;
	cout << sizeof(p) << '\n';
}

void Point::MoveTo(int px, int py)
{
    x = px;
    y = py;
}

void Point::Translate(int dx, int dy)
{
    x += dx;
    y += dy;
}