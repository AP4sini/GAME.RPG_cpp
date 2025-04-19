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