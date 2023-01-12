#include <string>
#include <iostream>

class Class
{
    private:
        unsigned int A = 0, B = 0;
    public:
        void Store(int &NumX, int &NumY);
        void MoveTo(int &NumX, int &NumY); // updates pos
        void Translate(int &NumX, int &NumY); // adds pos
        void Show(){std::cout << "X = " << A << "\tB = " << B << std::endl;}
};

    void Class::Store(int &NumX, int &NumY)
    { 
        if(NumX < 0)
            A = 0;
        else if(NumX >= 1920)
            A = 1919;
        else
            A = NumX;
        if (NumY < 0)
            B = 0;
        else if(NumY >= 1080)
            B = 1079;
        else
            B = NumY;
    }

    void Class::MoveTo(int &NumX, int &NumY)// updates pos
    {
        if(NumX < 0)
            A = 0;
        else if(NumX >= 1920)
            A = 1919;
        else
            A = NumX;
        if (NumY < 0)
            B = 0;
        else if(NumY >= 1080)
            B = 1079;
        else
            B = NumY;
    }

    void Class::Translate(int &NumX, int &NumY) // adds pos
    {
        if(NumX+A < 0)
            A = 0;
        else if(NumX+A >= 1920)
            A = 1919;
        else
            A += NumX;
        if (NumY+B < 0)
            B = 0;
        else if(NumY+B >= 1080)
            B = 1079;
        else
            B += NumY;
    }

int main()
{
    int X, Y;
    Class C;
    std::cout << "Enter position X Y (Ex.: 1920 1080): ";
    std::cin >> X >> Y;
    C.Store(X, Y);
    std::cout << "\nPresent Coordinates are: ";
    C.Show();
    std::cout << "\nWhere to move them to? ";
    std::cin >> X >> Y;
    C.MoveTo(X, Y);
    std::cout << "\nPresent Coordinates are: ";
    C.Show();
    std::cout << "\nMove them for? ";
    std::cin >> X >> Y;
    C.Translate(X, Y);
    std::cout << "\nFinal Coordinates: ";
    C.Show();
}