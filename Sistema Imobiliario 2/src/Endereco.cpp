#include "Endereco.h"
#include <string>

using namespace std;

Endereco::Endereco(): numero(0), logradouro(""),
                      bairro(""), cidade(""), cep("")
{

}

Endereco::Endereco(int numero,string logradouro, string bairro, string cidade, string cep)
{
    this->numero = numero;
    this->logradouro = logradouro;
    this->bairro = bairro;
    this->cidade = cidade;
    this->cep = cep;

}
