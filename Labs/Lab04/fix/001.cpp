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
    cout << sizeof(Point);
}

// sizeof(Point) = 8 (2x4 bytes)