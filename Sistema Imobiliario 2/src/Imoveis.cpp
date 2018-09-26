#include "Imoveis.h"

using namespace std;

Imoveis::Imoveis(): descricao(""), valor(0.0), tipoOferta(0)
{

}

void Imoveis::setDescricao(string descricao){
    this->descricao = descricao;
}

void Imoveis::setValor(float valor){
    this->valor = valor;
}

void Imoveis::setTipoOferta(int tipoOferta){
    this->tipoOferta = tipoOferta;
}

void Imoveis::setEndereco(Endereco endereco){
    this->endereco.numero = endereco.numero;
    this->endereco.logradouro = endereco.logradouro;
    this->endereco.bairro = endereco.bairro;
    this->endereco.cidade = endereco.cidade;
    this->endereco.cep = endereco.cep;

}

string Imoveis::getDescricao(){
    return descricao;
}

float Imoveis::getValor(){
    return valor;
}

int Imoveis::getTipoOferta(){
    return tipoOferta;
}

Endereco Imoveis::getEndereco(){
    return endereco;
}
