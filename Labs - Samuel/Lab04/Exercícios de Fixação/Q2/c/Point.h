class Point
{
private: 
    int x; 
    int y; 
 
public: 
    void MoveTo(int px, int py);
    void Translate(int dx, int dy);
    int X();
    int Y();
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

inline int Point::X()
{ return x; }

inline int Point::Y()
{ return y; }