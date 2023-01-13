#include "001.cpp"
using namespace std;

const int MAX = 3;

int main()
{
    Jogo gears {"Gears", 200.0f, 100};
    Jogo doom {"Doom", 120.0f, 80};

    const Jogo& topPlay = gears.comparar(doom, MaisJogado);
    const Jogo& topValue = gears.comparar(doom, MenorCusto);

    cout << "Jogo mais jogado: ";
    topPlay.exibir();

    cout << "\nMenor custo: ";
    topValue.exibir();
}