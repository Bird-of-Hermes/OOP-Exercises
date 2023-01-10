#include <string>
#include <iostream>
using namespace std;

class Jogo
{
    private:
        string nome; // nome do jogo
        float preco; // preço do jogo
        int horas = {}; // quantidade de horas jogadas
        float custo; // valor por hora jogada
        inline void calcular() { if (horas > 0) custo = preco/horas; }
    public:
        inline void adquirir(const string& titulo, float valor);
        inline void atualizar(float valor);
        inline void jogar(int tempo);
        inline void exibir();
};

inline void Jogo::adquirir(const string& titulo, float valor)
{
    nome = titulo;
    preco = valor;
    custo = valor;
}

inline void Jogo::atualizar(float valor)
{
    preco = valor;
    custo = valor;
}

inline void Jogo::jogar (int tempo)
{
    horas += tempo;
}

inline void Jogo::exibir()
{
    calcular();
    std::cout << "Name: " << nome << endl
              << "Price: " << preco << endl
              << "Hours: " << horas << endl
              << "Cost: " << custo << endl;
}

int main()
{
    Jogo Nier_Replicant;
    Nier_Replicant.adquirir("Nier Replicant", 60.0f);
    Nier_Replicant.jogar(6);
    Nier_Replicant.exibir();

    return 0;
}