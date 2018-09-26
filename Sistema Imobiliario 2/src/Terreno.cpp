#include "Terreno.h"

Terreno::Terreno(): area(0.0)
{

}

void Terreno::setArea(float area){
    this->area = area;
}

float Terreno::getArea(){
    return area;
}
