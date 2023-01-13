#include <string>
#include <iostream>
using namespace std;

class Game
{
    private:
        string Name_;
        float price_;
    public:
        Game();
        Game(const string & name, float price)
        {
            Name_ = name;
            price_ = price;
            cout << "Creating " << name << endl;
        }
        ~Game(){cout << "Destroying " << Name_ << endl;}
};

int main()
{
    Game sackboy{"Sackboy", 150.0f };
    Game spiderman{"Spiderman", 200.0f };
    Game horizon{"Horizon", 199.0f };
}