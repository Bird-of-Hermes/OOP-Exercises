#include <string>
#include <iostream>
using namespace std;

class Game
{
    private:
        string Name_;
        float Price_;
    public:
        Game();
        Game(const string & name, float price)
        {
            Name_ = name;
            Price_ = price;
            cout << "Creating " << name << endl;
        }
        ~Game(){cout << "Destroying " << Name_ << endl;}
        void update(float Price)
        {
            Price_ = Price;
        }
        void show() const
        {
            cout << Name_ << endl;
            cout << Price_ << endl;
        }
};
int main()
{
    const Game ratchet { "Ratchet & Clank", 150.0f };
  //  ratchet.update(125.0f); // modifica
    ratchet.show(); // não modifica
}