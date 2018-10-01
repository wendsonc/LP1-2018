#ifndef SISTEMAIMOBILIARIO_H
#define SISTEMAIMOBILIARIO_H
#include <iostream>
#include <locale>
#include <algorithm>
#include <list>
#include <vector>
#include <cctype>
#include <fstream>
#include <iomanip>
#include <string>
#include "Imoveis.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include "Endereco.h"
#include <string>

class SistemaImobiliario
{
    public:
        vector<Casa> listaCasa;
        vector<Apartamento> listaAp;
        vector<Terreno> listaTerreno;

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

        void removerPorBairro();
        void removerPorCidade();
        void removerPorTitulo();
        void removerPorValorMaior();
        void removerPorValorMenor();

        void editarPorBairro();
        void editarPorCidade();
        void editarPorTitulo();
        void editarPorValorMaior();
        void editarPorValorMenor();

        string maiusculo(string texto);
        bool comparar(int id);
        string removeEspeciais(string texto);

};


#endif
