#include <iostream>
#include <locale>
#include <list>
#include "Imoveis.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include "Endereco.h"
#include "SistemaImobiliario.h"
#include "Menu.h"

using namespace std;

int main()
{

    SistemaImobiliario sistema;

    sistema.recuperarCasa();
    sistema.recuperarAp();
    sistema.recuperarTerreno();

    int opcao = 1;

	while(opcao){

		Menu menu;
		menu.sistemaMenu(sistema);

		cout << "\n\nO que deseja fazer agora?\n" << endl;
		cout << "1. Voltar ao menu\n" << endl;
		cout << "2. Encerrar programa\n" << endl;
		cin >> opcao;

		system("cls");

		if(opcao == 2){
			break;
		}
	}



    return 0;
}
