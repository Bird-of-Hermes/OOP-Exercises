struct Point
{
    int PosX;
    int PosY;
};

class Rect
{
    private:
        Point a;
        Point b;
    public:
        Rect(){ a.PosX = 0; a.PosY = 0; b.PosX = 0; b.PosY = 0; }
        Rect(int ax, int ay, int bx, int by) { a.PosX = ax; a.PosY = ay; b.PosX = bx; b.PosY = by;}
        void Translate(int dx, int dy);
};