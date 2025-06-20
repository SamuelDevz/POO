class Point 
{ 
private: 
    int x; 
    int y; 
 
public: 
    void MoveTo(int px, int py); 
    void Translate(int dx, int dy);
};

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

class Rect 
{ 
private: 
    Point a; 
    Point b; 
 
public: 
    void Create(int ax, int ay, int bx, int by); 
    void Translate(int dx, int dy); 
};

void Rect::Create(int ax, int ay, int bx, int by)
{
    a.MoveTo(ax, ay);
    b.MoveTo(bx, by);
}

void Rect::Translate(int dx, int dy)
{
    a.Translate(dx, dy);
    b.Translate(dx, dy);
}