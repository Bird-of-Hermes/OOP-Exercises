#include <iostream>
#include <string>
using namespace std;

class Atleta
{
    private:
        string nome;
        unsigned int acertos;
        unsigned int tentativas;
        float percentual;

    public:
        void calcular() // used for who's calling
        {
            if (tentativas != 0)
            percentual = 100.0f * ((float)acertos / tentativas);
            else
            percentual = 0;
        }
        void calcular(Atleta& atl) // used for accumulate
        {
            if (atl.tentativas != 0)
            atl.percentual = 100.0f * ((float)atl.acertos / atl.tentativas);
            else
            atl.percentual = 0;
        }
        void exibir();
        Atleta& acumular(Atleta& soma, const Atleta& atl);

        // constructors
        Atleta(){nome = ""; acertos = 0; tentativas = 0; percentual = NULL;}
        Atleta(const string & nome, unsigned int Ac, unsigned int Tent)
        {
            this->nome = nome;
            acertos = Ac; 
            tentativas = Tent;
            calcular();
        }

        bool compare(Atleta & atl);
};

bool Atleta::compare(Atleta & atl)
{
    return this->percentual > atl.percentual ? true:false;
}

void Atleta::exibir()
        {
            cout << "Nome: " << nome;
            cout << " \tAcertos: " << acertos << " ";
            cout << " \tTentativas: " << tentativas << " ";
            cout << " \tPercentual: " << percentual << "%" << endl;
        }

Atleta&Atleta::acumular(Atleta& soma, const Atleta& atl)
        {
            soma.tentativas += atl.tentativas;
            soma.acertos += atl.acertos;
            calcular(soma);
            return soma;
        }

const int MAX = 5;

int main()
{
    Atleta Time[MAX] = {{"rick", 10, 14},{"john", 10, 16},{"mark", 12, 15},{"luis", 15, 20}};
    Atleta ABC = Time[0];
    for (size_t i = 0; i < MAX; i++)
    {
        if(ABC.compare(Time[i]) == false)
        ABC = Time[i];
    }
        ABC.exibir();
    
    return 0;
}