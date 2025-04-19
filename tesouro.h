#include <string>
#include <iostream>

using namespace std;

class Tesouro{

    public:
        Tesouro();
        Tesouro(string novoNome, int novoValor);

        void setNome(string);
        void setValor(int);

        char* getNome();
        int getValor();

    private:
        string nome;
        int valor;
};