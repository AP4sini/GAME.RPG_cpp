#include "itens.h"

Item::Item(){

}

Item::Item(string novoNome, tipoItem novoTipo, bool ehCombate, int novaFA, int novoDano){
    nome=novoNome;
    item=novoTipo;
    combate=ehCombate;
    FA=novaFA;
    dano=novoDano;
}

void Item::setNome(string novoNome){
    nome=novoNome;
}

void Item::setTipo(tipoItem novoTipo){
    item=novoTipo;
}

void Item::setehCombate(bool ehCombate){
    combate=ehCombate;
}

void Item::setFA(int novaFA){
    FA=novaFA;
}

void Item::setDano(int novoDano){
    dano=novoDano;
}

string Item::getNome(){
    return nome;
}

tipoItem Item::getTipo(){
    return item;
}

bool Item::getehCombate(){
   return combate;
}   

int Item::getFA(){
    return FA;
}

int Item::getDano(){
    return dano;
}

void Item::imprimeInfo(){
    // nao sei como dar um cout
}