struct Point 
{
    int x;
    int y;
};

class Rect
{
    private:
        Point a;
        Point b;
    public:
        void Create(Point &X, Point &Y);
        void Translate(int &dx, int &dy);
};

void Rect::Create(Point &X, Point &Y)
{
    a = X;
    b = Y;
}

void Rect::Translate(int &X, int &Y)
{
    a.x += X;
    a.y += Y;
    b.x += X;
    b.y += Y;
}