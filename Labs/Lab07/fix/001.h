#include <string>
using std::string;

// -----------------------------------------------
// Declara��o da Classe Jogo
// -----------------------------------------------

class Jogo
{
private:
	string nome;									// nome do jogo
	float preco;									// pre�o do jogo
	int horas;										// quantidade de horas jogadas
	float custo;									// valor por hora jogada
	
	void calcular();								// calcular custo da hora jogada
	
public:
	Jogo();											// construtor padr�o
	Jogo(const string& titulo,						// construtor da classe
		 float valor = 0, 
		 int tempo = 0);	
	~Jogo();										// destrutor

	const Jogo& comparar
	(
		const Jogo& jogo, 
		const Jogo& (func)(const Jogo& a, const Jogo& b)
	) const;										// compara dois jogos
	void atualizar(float valor);					// atualizar pre�o do jogo
	void jogar(int tempo);							// registrar horas jogadas
	void exibir() const;							// mostrar informa��es
	int Horas() const;					    		// retorna horas
	float Custo() const;                    		// retorna custo
};

// -----------------------------------------------
inline int Jogo::Horas() const
{
    return horas;
}

inline float Jogo::Custo() const
{
    return custo;
}

inline void Jogo::calcular()
{
	if (horas > 0)
		custo = preco / horas;
}
// -----------------------------------------------

const Jogo& MaisJogado(const Jogo& a, const Jogo& b);
const Jogo& MenorCusto(const Jogo& a, const Jogo& b);