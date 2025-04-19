#include <string>
#include <iostream>
#include "tipoItem.h"

using namespace std;

class Item{

    public: 
        Item();
        Item(char* novoNome, tipoItem novoTipo, bool combate, int FA, int dano);

        void setNome(char*);
        void setTipo(tipoItem);
        void setCombate(bool);
        void setFA(int);
        void setDano(int);

        string getNome();
        tipoItem getTipo();
        bool getCombate();
        int getFA();
        int getDani();

    private:
        char* nome;
        tipoItem item;
        bool combate;
        int FA;
        int dano;    
};