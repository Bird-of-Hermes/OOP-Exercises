#include <iostream>
#include <string>

class Game
{
    private:
        std::string Name_;
    public:
        inline void Name(const std::string & Nam){Name_ = Nam;} 
};

int main()
{
    Game A, B;
    std::cout << &A << "\n" << &B;
}