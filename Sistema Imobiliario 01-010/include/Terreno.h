#ifndef TERRENO_H
#define TERRENO_H
#include "Imoveis.h"

class Terreno:public Imoveis
{
    public:
        Terreno();

        void setArea(float);
        float getArea();

    private:
        float area;

};

#endif // TERRENO_H
