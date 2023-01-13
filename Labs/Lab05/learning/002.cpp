#include <iostream>

class Point
{
    private:
        int x;
        int y;
    
    public:
        Point() { x = 0; y = 0; };
        Point(int Ax, int Ay) { x = Ax; y = Ay;}
        void MoveTo(int px, int py) { x = px; y = py; }
        void Translate(int dx, int dy) { x += dx; y += dy; }
        void Print() { std::cout << x << "\n" << y << std::endl;};
};