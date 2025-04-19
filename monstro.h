#include <string>
#include <iostream>
#include "personagem.h"

using namespace std;

class Monstro: public Personagem{
    public:
        Monstro();
        Monstro(bool novaVitoria, bool novaDerrota);

        bool getnovaVitoria();
        bool getnovaDerrota();

        void setnovaVitoria(bool);
        void setnovaDerrots(bool);

    private:
        bool vitoria;
        bool derrota;

};