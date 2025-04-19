#ifndef TESOURO_H //usando ifndef pois meu compilador nao aceita o pragma onde (sla o pq)
#define TESOURO_H

#include <string>
#include <iostream>

using namespace std;

class Tesouro{

    public:
        Tesouro();
        Tesouro(string novoNome, int novoValor);

        void setNome(string);
        void setValor(int);

        string getNome();
        int getValor();

        void imprimeInfo();

    private:
        string nome;
        int valor;
};

#endif