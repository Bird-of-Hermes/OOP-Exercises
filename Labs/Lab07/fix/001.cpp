#include "001.h"
#include <iostream>
using namespace std;

// -----------------------------------------------
// Defini��o da Classe Jogo
// -----------------------------------------------

Jogo::Jogo()
{
    nome = "";
    preco = custo = 0.0f;
    horas = 0;
}

Jogo::Jogo(const string& titulo, float valor, int tempo)
{
    nome = titulo;
    preco = valor;
    horas = tempo;
    custo = valor;
    calcular();
}

Jogo::~Jogo()
{
}

const Jogo& Jogo::comparar(
    const Jogo& jogo,
    const Jogo& (func)(const Jogo& a, const Jogo& b)) const
{
    return func(*this, jogo);
}

void Jogo::atualizar(float valor)
{
    preco = valor;
    calcular();
}

void Jogo::jogar(int tempo)
{
    horas = horas + tempo;
    calcular();
}

void Jogo::exibir() const
{
    cout << fixed;
    cout.precision(2);

    cout << nome << " R$"
        << preco << " "
        << horas << "h = R$"
        << custo << "/h\n";
}

const Jogo& MaisJogado(const Jogo& a, const Jogo& b)
{
    if (a.Horas() > b.Horas())
        return a;
    else
        return b;
}
const Jogo& MenorCusto(const Jogo& a, const Jogo& b)
{
    if (a.Custo() < b.Custo())
        return a;
    else
        return b;
}