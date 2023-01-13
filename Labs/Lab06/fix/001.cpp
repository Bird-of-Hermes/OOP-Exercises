#include <iostream>
#include <string>
using namespace std;

class Game
{
    private: 
        string Name_;
        float Price_;
    public:
        Game();
        Game(const string & Name, float Price);
        ~Game();
        void testing();
};

Game::Game()
{
    Name_ = "";
    Price_ = 0;
    cout << "Object construction complete" << endl;
}

Game::Game(const string & Name, float Price)
{
    Name_ = Name;
    Price_ = Price;

    cout << "Object construction complete" << endl;
}

Game::~Game()
{
    cout << "Object destruction complete" << endl;
}

void Game::testing()
{
    Game ABC = Game{"Idk", 45.5f};
}

int main()
{
   Game ABC;
   ABC.testing();
}