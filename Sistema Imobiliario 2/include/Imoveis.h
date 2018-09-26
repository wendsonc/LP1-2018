#ifndef IMOVEIS_H
#define IMOVEIS_H
#include <string>
#include "Endereco.h"

class Imoveis
{
    public:
        Imoveis();

        void setDescricao(std::string);
        void setValor (float);
        void setTipoOferta (int);
        void setEndereco (Endereco);

        std::string getDescricao();
        float getValor();
        int getTipoOferta();
        Endereco getEndereco();

    private:
        std::string descricao;
        float valor;
        int tipoOferta;
        Endereco endereco;

};

#endif // IMOVEIS_H
