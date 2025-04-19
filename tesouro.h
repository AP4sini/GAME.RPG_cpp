#include <string>
#include <iostream>

using namespace std;

class Tesouro{

    public:
        Tesouro();
        Tesouro(char* novoNome, int novoValor);

        void setNome(char*);
        void setValor(int);

        char* getNome();
        int getValor();

    private:
        char* nome;
        int valor;
};