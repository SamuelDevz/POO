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