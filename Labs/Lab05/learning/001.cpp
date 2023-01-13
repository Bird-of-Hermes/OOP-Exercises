#include <string>
using namespace std;
// not doing the full program, only the significative part of it
class Jogo
{
    private:
        string nome; // nome do jogo
        float preco; // preço do jogo
        int horas; // quantidade de horas jogadas
        float custo; // valor por hora jogada
        void calcular(){ if (horas > 0) custo = preco/horas;}
    public:
        Jogo();
        Jogo(const string& titulo, float valor, int tempo);
        void atualizar(float valor);
        void jogar(int tempo){ horas += tempo;}
        void exibir();
};

Jogo::Jogo()
{
    nome = "";
    custo = 0;
    preco = 0;
    horas = 0;
}

Jogo::Jogo(const string& titulo, float valor, int tempo)
{
    nome = titulo;
    preco = valor;
    custo = valor;
    horas = tempo;
}