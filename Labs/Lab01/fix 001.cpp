#include <iostream>
#include <string>
using namespace std;

struct Jogo
{
    string nome; // nome do jogo
    float preco; // preço do jogo
    int horas; // quantidade de horas jogadas
    float custo; // valor por hora jogada
};

Jogo adquirir(const string& titulo, float valor);
void atualizar(Jogo& jogo, float valor);
void jogar(Jogo& jogo, int tempo);
void exibir(const Jogo& jogo);

int main()
{ 
    Jogo Random;
    Random = adquirir("Doom", 35.6f);
    jogar(Random, 2);
    atualizar(Random, 35.5f);
    exibir(Random);
}

Jogo adquirir(const string& titulo, float valor)
{
    Jogo Acquired = {};
    Acquired.nome = titulo;
    Acquired.preco = valor;
    Acquired.custo = valor;
    return Acquired;
}

void atualizar(Jogo& jogo, float valor)
{
    jogo.preco = valor;
    jogo.custo = jogo.preco/jogo.horas;
}

void jogar(Jogo& jogo, int tempo)
{
    jogo.horas += tempo;
}

void exibir (const Jogo& jogo)
{
    cout << "Name: " << jogo.nome << endl
         << "Hours: " << jogo.horas << endl
         << "Cost per hours: " << jogo.custo << endl;
}