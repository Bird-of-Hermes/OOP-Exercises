#include <iostream>
#include <string>
using namespace std;

class Atleta
{
    private:
        unsigned int acertos;
        unsigned int tentativas;
        float percentual;

    public:
        void calcular(Atleta& atl)
        {
            if (atl.tentativas != 0)
            atl.percentual = 100.0f * ((float)atl.acertos / atl.tentativas);
            else
            atl.percentual = 0;
        }
        void exibir();
        Atleta& acumular(Atleta& soma, const Atleta& atl);
        Atleta(){acertos = 0; tentativas = 0; percentual = NULL;}
        Atleta(int Acertos, int Tentativas)
        {
            acertos = Acertos; 
            tentativas = Tentativas; 
            if(Tentativas != 0)
                percentual = 100.0f * ((float)Acertos / Tentativas);
            else
               percentual = 0;
        }
};

void Atleta::exibir()
        {
            cout << "Acertos: " << acertos << " ";
            cout << " Tentativas: " << tentativas << " ";
            cout << " Percentual: " << percentual << "%\n";
        }

Atleta&Atleta::acumular(Atleta& soma, const Atleta& atl)
        {
            soma.tentativas += atl.tentativas;
            soma.acertos += atl.acertos;
            calcular(soma);
            return soma;
        }

int main()
{
    Atleta rick { 13, 14 };
    Atleta john { 10, 16 };
    Atleta mark { 7, 9 };
    Atleta time;
    time.acumular(time, rick);
    time.acumular(time, john);
    time.acumular(time, mark);
    time.exibir();
}