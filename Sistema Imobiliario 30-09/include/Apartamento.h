#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include <string>
#include "Imoveis.h"

class Apartamento:public Imoveis
{
    public:
        Apartamento();

        void setPosicao(std::string);
        void setNumQuartos(int);
        void setVagasGaragem(int);
        void setArea(float);

        std::string getPosicao();
        int getNumQuartos();
        int getVagasGaragem();
        float getArea();


    private:
        std::string posicao;
        int numQuartos;
        int vagasGaragem;
        float area;

};

#endif // APARTAMENTO_H
