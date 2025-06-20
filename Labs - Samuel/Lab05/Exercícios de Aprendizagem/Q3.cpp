#include <iostream>
using namespace std;

class Point 
{ 
private: 
    int x; 
    int y; 
 
public:
    Point();
    Point(int px, int py);
    void MoveTo(int px, int py); 
    void Translate(int dx, int dy);
    void Print();
    int X();
    int Y();
};

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(int px, int py)
{
    x = px;
    y = py;
}

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

inline void Point::Print()
{
    cout << '(' << x << ',' << y << ")\n";
}

inline int Point::X()
{
    return x;
}

inline int Point::Y()
{
    return y;
}

class Rect 
{ 
private: 
    Point a; 
    Point b; 
 
public:
    Rect();
    Rect(Point p1, Point p2);
    Rect(int ax, int ay, int bx, int by); 
    void Translate(int dx, int dy); 
};

Rect::Rect()
{
    a = Point();
    b = Point();
}

Rect::Rect(Point p1, Point p2)
{
    a = Point(p1.X(), p1.Y());
    b = Point(p2.X(), p2.Y());
}

Rect::Rect(int ax, int ay, int bx, int by)
{
    a = Point(ax, ay);
    b = Point(bx, by);
}

void Rect::Translate(int dx, int dy)
{
    a.Translate(dx, dy);
    b.Translate(dx, dy);
}