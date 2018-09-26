#ifndef SISTEMAIMOBILIARIO_H
#define SISTEMAIMOBILIARIO_H
#include <iostream>
#include <locale>
#include <algorithm>
#include <list>
#include <cctype>
#include <fstream>
#include <iomanip>
#include "Imoveis.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include "Endereco.h"
#include <string>

class SistemaImobiliario
{
    public:
        list<Casa> listaCasa;
        list<Apartamento> listaAp;
        list<Terreno> listaTerreno;

        void imoveisVender();
        void imoveisAlugar();
        void exibirImoveis();
        void cadastraCasa();
        void exibirCasa();
        void recuperarCasa();
        void salvarCasa();

        void cadastraAp();
        void exibirAp();
        void recuperarAp();
        void salvarAp();

        void cadastraTerreno();
        void exibirTerreno();
        void recuperarTerreno();
        void salvarTerreno();

        void buscarPorBairro();
        void buscarPorCidade();
        void buscarPorTitulo();
        void buscarPorValorMaior();
        void buscarPorValorMenor();

        void removerCasa();


};


#endif
