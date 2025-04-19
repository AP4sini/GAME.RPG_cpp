#include <string>
#include <iostream>
#include "tesouro.h"
#include "itens.h"

using namespace std;

class Personagem{
    public:
        Personagem();
        Personagem(char* novoNome, int novaHabilidade, int novaEnergia, int novaSorte, int novoItem, tipoItem nomeItem, int novoTesouro, int novaProvisão);

        char* getnovoNome();
        int getnovaHabilidade();
        int getnovaEnergia();
        int getnovaSorte();
        int getnovosItem(); //qnts itens ganhou
        Item* getItem(); 
        int getnovosTesouro(); //qnts tesouros ganhou
        Tesouro* getTesouro();
        int getnovaProvisao();

        void setnovoNome(char* novoNome);
        void setnovaHabilidade(int novaHabilidade);
        void setnovaEnergia(int novaEnergia);
        void setnovaSorte(int novaSorte);
        void setnovosItem(int qtd);
        void setItem(Item* index); 
        void setnovosTesouro(int qtd); 
        void setTesouro(Tesouro* );
        void setnovaProvisao(int qtd);
};