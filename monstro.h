#include <string>
#include <iostream>
#include "personagem.h"
#include "tesouro.h"

using namespace std;

class Monstro: public Personagem{
    public:
        Monstro();
        Monstro(string nome, int vida, int FA, int defesa, Tesouro* loot);

        int atacar() const;
        int recebeDano(int dano);
        bool estaVivo() const;

        Tesouro* dropaLoot() const;

    private:
        string nome;
        int vida;
        int FA;
        int defesa;
        Tesouro* loot;
};