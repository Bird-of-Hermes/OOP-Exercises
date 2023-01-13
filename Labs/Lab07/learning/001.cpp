#include <string>
#include <iostream>
using namespace std;

class Jogo
{
    private:
        string nome; // nome do jogo
        float preco; // preço do jogo
        int horas; // quantidade de horas jogadas
        float custo; // valor por hora jogada
        void Calcular() { custo = preco/horas; }
    
    public:
        Jogo();
        Jogo(const string& titulo, float valor = 0, int tempo = 0);
        ~Jogo(){}
        void Atualizar(float valor);
        void Jogar(int tempo);
        void Exibir() const;
        Jogo MostPlayed(const Jogo & A, const Jogo & B);
        Jogo CheapestPerHour(const Jogo & A, const Jogo & B);
        Jogo Cheapest(const Jogo & A, const Jogo & B);
};

Jogo::Jogo(const string& titulo, float valor, int tempo)
{
    nome = titulo;
    preco = valor;
    horas = tempo;
    Calcular();
}

Jogo::Jogo()
{
    nome = "";
    preco = 0;
    horas = 0;
    custo = 0;
}

void Jogo::Exibir() const
{
    cout << "Title: "
         << this->nome  << "\tPricing: " 
         << this->preco << "\tHours played: " 
         << this->horas << "  Cost/Hour: " 
         << this->custo << endl;
}

Jogo Jogo::MostPlayed(const Jogo & A, const Jogo & B)
{
    Jogo temp = A.horas > B.horas ? A:B;
    return temp;
}

Jogo Jogo::CheapestPerHour(const Jogo & A, const Jogo & B)
{
    Jogo temp = A.custo < B.custo ? A:B;
    return temp;
}

Jogo Jogo::Cheapest(const Jogo & A, const Jogo & B)
{
    Jogo temp = A.preco < B.preco ? A:B;
    return temp;
}

const int MAX = 2;

int main()
{
    // Instantiating objects
    Jogo ArrayOfGames[MAX]{{"GOW",200.0f,10},{"RDR2",500.0f,43}};
    Jogo Cheapest_ = ArrayOfGames[0], CheapestPerHour_ = ArrayOfGames[0], MostPlayed_ = ArrayOfGames[0];
    //------------------------------------------------------------------------------------------------//
    // Comparisons
    //------------------------------------------------------------------------------------------------//
    for (size_t i = 0; i < MAX; i++)
    {
        Cheapest_ = Cheapest_.Cheapest(ArrayOfGames[i], Cheapest_);
    }
    Cheapest_.Exibir(); // printing output

    for (size_t i = 0; i < MAX; i++)
    {
        CheapestPerHour_ = CheapestPerHour_.CheapestPerHour(ArrayOfGames[i], CheapestPerHour_);
    }
    CheapestPerHour_.Exibir(); // printing output

    for (size_t i = 0; i < MAX; i++)
    {
        MostPlayed_ = MostPlayed_.MostPlayed(ArrayOfGames[i], MostPlayed_);
    }
    Cheapest_.Exibir(); // printing output
    //------------------------------------------------------------------------------------------------//
    //END
    return 0;
}