#include <iostream>
using namespace std;

class Point 
{ 
private: 
    int x; 
    int y; 
 
public: 
    void MoveTo(int px, int py)
    { 
        x = px; 
        y = py; 
    }

    void Translate(int dx, int dy)
    { 
        x += dx; 
        y += dy; 
    }
    
    int X()
    {
        return x;
    }

    int Y()
    {
        return y;
    }
};

int main()
{
    Point p;

	p.MoveTo(10, 20);
    cout << '(' << p.X() << ',' << p.Y() << ")\n";

	p.Translate(2, 5);
    cout << '(' << p.X() << ',' << p.Y() << ")\n";
}