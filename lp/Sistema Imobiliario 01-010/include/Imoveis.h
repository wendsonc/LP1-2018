#ifndef IMOVEIS_H
#define IMOVEIS_H
#include <string>
#include<vector>
#include "Endereco.h"

class Imoveis
{
    public:
        Imoveis();

        void setDescricao(std::string);
        void setValor (float);
        void setTipoOferta (int);
        void setEndereco (Endereco);
        void setTam(int);

        std::string getDescricao();
        float getValor();
        int getTipoOferta();
        Endereco getEndereco();
        int getTam();

    private:
        int tam;
        std::string descricao;
        float valor;
        int tipoOferta;
        Endereco endereco;

};

#endif // IMOVEIS_H
