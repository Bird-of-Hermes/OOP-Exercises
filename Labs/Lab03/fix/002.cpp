#include <string>
#include <iostream>

class Class
{
    private:
        int A = 0, B = 0;
    public:
        void StoreC(int &NumX, int &NumY){ A = NumX; B = NumY;}
        void MoveCto(int &NumX, int &NumY){ A = NumX; B = NumY;} // updates pos
        void MoveCfor(int &NumX, int &NumY){ A += NumX; B += NumY;} // adds pos
        void Show(){std::cout << "X = " << A << "\tB = " << B << std::endl;}
};

struct Register
{
    private:
        int A = 0, B = 0;
    public:
        void StoreS(int &Num, int &NumY) {A = Num; B = NumY;}
        void MoveSto(int &Num, int &NumY) {A = Num; B = NumY;} // updates pos
        void MoveSfor(int &Num, int &NumY) {A += Num; B += NumY;} // adds pos
        void Show(){std::cout << "X = " << A << "\tB = " << B << std::endl;}
};

int main()
{
    Register S;
    Class C;
    int X, Y;
    std::cout << "Enter coordinates X and Y: ";
    std::cin >> X >> Y;
    C.StoreC(X, Y);
    S.StoreS(X, Y);
    std::cout << "\nWhere to move them to? ";
    std::cin >> X >> Y;
    C.MoveCto(X, Y);
    S.MoveSto(X, Y);
    std::cout << "\nPresent Coordinates are: ";
    S.Show();
    std::cout << "\nMove them for? ";
    std::cin >> X >> Y;
    C.MoveCfor(X, Y);
    S.MoveSfor(X, Y);
    std::cout << "\nCoordinates: ";
    C.Show();
}