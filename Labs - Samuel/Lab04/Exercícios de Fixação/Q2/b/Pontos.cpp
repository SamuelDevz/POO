#include "Point.h"
#include <iostream>
using namespace std;

inline void Point::MoveTo(int px, int py)
{ 
    x = px; 
    y = py; 
}

inline void Point::Translate(int dx, int dy)
{ 
    x += dx; 
    y += dy; 
}

inline int Point::X()
{ return x; }

inline int Point::Y()
{ return y; }

int main()
{
    Point p;

	p.MoveTo(10, 20);
    cout << '(' << p.X() << ',' << p.Y() << ")\n";

	p.Translate(2, 5);
    cout << '(' << p.X() << ',' << p.Y() << ")\n";
}