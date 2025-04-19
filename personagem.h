#include <string>
#include <iostream>
#include "tesouro.h"
#include "itens.h"

using namespace std;

class Personagem{
    public:
        Personagem();
        Personagem(char* novoNome, int novaHabilidade, int novaEnergia, int novaSorte, int novoItem, tipoItem nomeItem, int novoTesouro, int novaProvisao);

        char* getnovoNome();
        int getnovaHabilidade();
        int getnovaEnergia();
        int getnovaSorte();
        int getnovosItem(); //qnts itens ganhou
        Item* getItem(int index); 
        int getnovosTesouro(); //qnts tesouros ganhou
        Tesouro* getTesouro(int index);
        int getnovaProvisao();

        void setnovoNome(char* novoNome);
        void setnovaHabilidade(int novaHabilidade);
        void setnovaEnergia(int novaEnergia);
        void setnovaSorte(int novaSorte);
        void setnovosItem(int qtd);
        void setItem(Item* novoItem[10]); //array de 10 itens, um por cena 
        void setnovosTesouro(int qtd); 
        void setTesouro(Tesouro* novoTesouro); //array de 10 tesouros, um por cena
        void setnovaProvisao(int qtd);

        void ingerirProvisao(); //usar cura
        //pegar obetos
        void pegarTesouro();
        void pegarItem();
        void pegarProvisao();

        void imprimirInventario(); //mostrar inventario

    private:
        char* nome;
        int habilidade;
        int energia;
        int sorte;
        Item* item[10];
        Tesouro* tesouro[10];
        int provisao;    
};