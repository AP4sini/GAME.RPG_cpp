#include <string>
#include <iostream>
#include "tipoItem.h"

using namespace std;

class Item{

    public: 
        Item();
        Item(string novoNome, tipoItem novoTipo, bool combate, int FA, int dano);

        void setNome(string);
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
        string nome;
        tipoItem item;
        bool combate;
        int FA;
        int dano;    
};