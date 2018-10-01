#ifndef CASA_H
#define CASA_H
#include "Imoveis.h"
#include <iostream>

class Casa:public Imoveis
{
    public:
        Casa();

        void setNumPavimentos(int);
        void setNumQuartos(int);
        void setAreaTerreno(float);
        void setAreaConstruida(float);

        int getNumPavimentos();
        int getNumQuartos();
        float getAreaTerreno();
        float getAreaConstruida();

    private:
        int numPavimentos;
        int numQuartos;
        float areaTerreno;
        float areaConstruida;
};

#endif // CASA_H
