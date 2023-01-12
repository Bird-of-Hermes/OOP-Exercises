#include "002.h"
#include <iostream>

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
void Point::Show()
{
    std::cout << x << "\n" << y;
}