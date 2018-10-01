#include "Apartamento.h"

using namespace std;

Apartamento::Apartamento(): posicao(""), numQuartos(0), vagasGaragem(0), area(0.0)
{

}

void Apartamento::setPosicao(string posicao){
    this->posicao = posicao;
}
void Apartamento::setNumQuartos(int numQuartos){
    this->numQuartos = numQuartos;
}
void Apartamento::setVagasGaragem(int vagasGaragem){
    this->vagasGaragem = vagasGaragem;
}
void Apartamento::setArea(float area){
    this-> area = area;
}

string Apartamento::getPosicao(){
    return posicao;
}
int Apartamento::getNumQuartos(){
    return numQuartos;
}
int Apartamento::getVagasGaragem(){
    return vagasGaragem;
}
float Apartamento::getArea(){
    return area = area;
}
