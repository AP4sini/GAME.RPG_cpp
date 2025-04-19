#include "tesouro.h"

Tesouro::Tesouro(){

}

Tesouro::Tesouro(string novoNome, int novoValor){
    nome= novoNome;
    valor= novoValor;
}

void Tesouro::setNome(string novoNome){
    nome=novoNome;
}

void Tesouro::setValor(int novoValor){
    valor=novoValor;
}


/*int valor;
cin >> valor;
cin.ignore(); // limpa o \n que ficou
getline(cin, nome);*/