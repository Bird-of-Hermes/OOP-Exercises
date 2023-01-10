#include <iostream>
#include <string>
#include <random>
using namespace std;

class BankAccount
{
    private:
        string Name;
        int AccNumber = 0;
        struct
        {
            double BTC = {};
            double ETH = {};
            double FIAT = {};
        }Wallet;

    public:
        void Add_Client(const string &Nam);
        void Show_Client();
        void Deposit_Amount(double Amount);
        void Withdrawal_Amount(double Amount); // I'll only put in work on this one
};

void BankAccount::Add_Client(const string &Nam)
{
    Name = Nam;
    srand(Nam[0]+Nam[1]+Nam[2]*Nam[4]);
    AccNumber = rand();
}

void BankAccount::Deposit_Amount(double Amount)
{
    Wallet.FIAT = Amount;
}

void BankAccount::Withdrawal_Amount(double Amount)
{ // could organize it better

    cout << "What kind of currency do you want to withdraw? \nAvailable BTC: "
         << Wallet.BTC << "\nAvailable ETH: " << Wallet.ETH <<  "\nAvailable FIAT: "
         << Wallet.FIAT << "\n[B] for BTC\t[E] for ETH\t[F] for FIAT\n[ ]\b\b";

    char Answer;
    cin >> Answer;

    switch (Answer)
    {
        case 'B':
        case 'b': if(Wallet.BTC >= Amount) Wallet.BTC -= Amount; else cout << "Not enough funds" << endl;
            break;
        case 'f':
        case 'F': if(Wallet.FIAT >= Amount) Wallet.FIAT -= Amount; else cout << "Not enough funds" << endl;
            break;
        case 'E':
        case 'e': if(Wallet.ETH >= Amount) Wallet.ETH -= Amount; else cout << "Not enough funds" << endl;
            break;
        default: cout << "You entered an invalid answer, try again";
            break;
    }
}

void BankAccount::Show_Client()
{
    cout << Name << endl << AccNumber << endl << Wallet.FIAT << endl
         << Wallet.ETH  << endl << Wallet.BTC << endl;
}

int main()
{
    BankAccount Client;
    Client.Add_Client("Norris");
    Client.Deposit_Amount(564.45);
    Client.Withdrawal_Amount(264.45);
    Client.Show_Client();
}