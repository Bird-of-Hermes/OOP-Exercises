#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    private:
        string Name;
        int AccNumber;
        struct Wallet
        {
            double BTC;
            double ETH;
            double FIAT;
        };

    public:
        void AddClient();
        void ShowClient();
        void DepoistAmount();
        void SendAmount();
};