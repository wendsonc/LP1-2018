#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class Endereco
{
    public:
        Endereco();
        Endereco(int,std::string, std::string, std::string, std::string);
        int numero;
        std::string logradouro;
        std::string bairro;
        std::string cidade;
        std::string cep;


};

#endif // ENDERECO_H
