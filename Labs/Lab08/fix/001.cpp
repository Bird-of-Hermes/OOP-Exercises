#include <iostream>

using Item = int;

class Pilha
{
    private:
        Item * itens;
        int topo;
        int max;

    public:
        Pilha(int Size)
        {
            itens = new Item [Size];
            max = Size;
            topo = 0;
        }
        ~Pilha()
        {
            delete [] itens;
        }
        bool Vazia() const;
        bool Cheia() const;
        bool Empilhar(const Item & item);
        bool Desempilhar(Item & item);
};

bool Pilha::Vazia() const
{
	return topo == 0;
}

bool Pilha::Cheia() const
{
	return topo == max;
}

bool Pilha::Empilhar(const Item& item)
{
	if (topo < max)
	{
		itens[topo++] = item;
		return true;
	}

	return false;
}

bool Pilha::Desempilhar(Item& item)
{
	if (topo > 0)
	{
		item = itens[--topo];
		return true;
	}

	return false;
}

int main()
{
    Pilha Pilhagem (3);
    Pilhagem.Empilhar(1);
    Pilhagem.Empilhar(2);
    Pilhagem.Empilhar(3);
    
    while(!Pilhagem.Vazia())
    {
        Item i;
        Pilhagem.Desempilhar(i);
        std::cout << i;
    }

}