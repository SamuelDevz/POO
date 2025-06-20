#include "Point.h"
#include <iostream>
using namespace std;

int main()
{
    Point p;

	p.MoveTo(10, 20);
    cout << '(' << p.X() << ',' << p.Y() << ")\n";

	p.Translate(2, 5);
    cout << '(' << p.X() << ',' << p.Y() << ")\n";
}