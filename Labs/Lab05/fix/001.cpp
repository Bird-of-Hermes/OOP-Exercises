#include <string>
#include <iostream>
using namespace std;
 // doing only one exhibition
class Pessoa
{
    private:
        string nome_;
        string sobrenome_;
    public:
        Pessoa();
        Pessoa(const string& nome, const string& sobrenome = "");
        void Exibir(); // exibe apenas nome
        void Formal(); // exibe nome e sobrenome
};

Pessoa::Pessoa()
{
    nome_ = "";
    sobrenome_ = "";
}

Pessoa::Pessoa(const string& nome, const string& sobrenome)
{
    nome_ = nome;
    sobrenome_ = sobrenome;
}

void Pessoa::Exibir()
{
    cout << nome_ << endl;
}

void Pessoa::Formal()
{
    cout << nome_ << " " << sobrenome_ << endl;
}

int main()
{
    Pessoa John_Wick {"Keanu", "Reeves"};
    John_Wick.Exibir();
    John_Wick.Formal();
}