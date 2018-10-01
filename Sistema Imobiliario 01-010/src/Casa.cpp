#include "Casa.h"

Casa::Casa(): numPavimentos(0), numQuartos(0),
              areaTerreno(0.0), areaConstruida(0.0)
{

}

void Casa::setNumPavimentos(int numPavimentos){
    this->numPavimentos = numPavimentos;
}
void Casa::setNumQuartos(int numQuartos){
    this->numQuartos = numQuartos;
}

void Casa::setAreaTerreno(float areaTerreno){
    this-> areaTerreno = areaTerreno;
}
void Casa::setAreaConstruida(float areaConstruida){
    this-> areaConstruida = areaConstruida;
}

int Casa::getNumPavimentos(){
    return numPavimentos;
}

int Casa::getNumQuartos(){
    return numQuartos;
}
float Casa::getAreaTerreno(){
    return areaTerreno;
}
float Casa::getAreaConstruida(){
    return areaConstruida;
}

