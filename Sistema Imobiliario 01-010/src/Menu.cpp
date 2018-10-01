#include "Menu.h"

void Menu::sistemaMenu(SistemaImobiliario& sistema){

    int op1, op2, op3, op4, op5, op6, op7, op8, op9, op10;
    int sup1, sup2, sup3, sup4, sup5, sup6;

        cout << "Bem-Vindo a WL imobiliaria!!!\n" << endl;
        cout << "Selecione a opcao desejada:\n" << endl;
        cout << "1.CADASTRAR\n" << endl;
        cout << "2.LISTAR\n" << endl;
        cout << "3.BUSCAR E EXIBIR\n" << endl;
        cout << "4.REMOVER E EDITAR\n" << endl;
        cin >> op1;

            if(op1 == 1){
                cout << "Qual tipo de imovel voce deseja cadastrar?\n" << endl;
                cout << "1.CASA\n" << endl;
                cout << "2.APARTAMENTO\n" << endl;
                cout << "3.TERRENO\n" << endl;
                cin >> op2;

                if(op2 == 1){
                    sistema.cadastraCasa();


                }
                else if(op2 == 2){
                    sistema.cadastraAp();


                }
                else if(op2 == 3){
                    sistema.cadastraTerreno();

                }
                else{
                    cout << "Opcao invalida\n" << endl;
                }

            }
            else if(op1 == 2){
                cout << "Selecione a categoria de listagem:\n" << endl;
                cout << "1.Todos os imoveis disponiveis\n" << endl;
                cout << "2.Todos os imoveis por tipo\n" << endl;
                cout << "3.Todos os imoveis por transacao\n" << endl;
                cin >> op3;

                if(op3 == 1){
                  sistema.exibirImoveis();

                }
                else if(op3 == 2){
                    cout << "Selecione o tipo de imovel:\n" << endl;
                    cout << "1.CASA\n" << endl;
                    cout << "2.APARTAMENTO\n" << endl;
                    cout << "3.TERRENO\n" << endl;
                    cin >> op4;

                    if(op4 == 1){
                        sistema.exibirCasa();
                    }
                    else if(op4 == 2){
                        sistema.exibirAp();
                    }
                    else if(op4 == 3){
                        sistema.exibirTerreno();
                    }
                    else{
                        cout << "Opcao invalida\n" << endl;
                    }

                }
                else if(op3 == 3){
                    cout << "Selecione o tipo de transacao:\n" << endl;
                    cout << "1.VENDER\n" << endl;
                    cout << "2.ALUGAR\n" << endl;
                    cin >> op5;

                    if(op5 == 1){
                             sistema.imoveisVender();
                    }
                    else if(op5 == 2){
                            sistema.imoveisAlugar();
                    }
                    else{
                        cout << "Opcao invalida\n" << endl;
                    }
                }
                else{
                    cout << "Opcao invalida\n" << endl;
                }
            }
            else if(op1 == 3){
                cout << "Selecione a categoria de busca:\n" << endl;
                cout << "1.BAIRRO\n" << endl;
                cout << "2.CIDADE\n" << endl;
                cout << "3.TITULO\n" << endl;
                cout << "4.VALOR MAIOR OU MENOR QUE ALGO\n" << endl;
                cin >> op6;

                if(op6 == 1){
                    string str;
                    getline(cin, str);
                    sistema.buscarPorBairro();
                }
                else if(op6 == 2){
                    string str;
                    getline(cin, str);
                    sistema.buscarPorCidade();
                }
                else if(op6 == 3){
                     string str;
                     getline(cin, str);
                     sistema.buscarPorTitulo();

                }
                else if(op6 == 4){

                     cout << "Selecione a categoria para busca do valor:\n" << endl;
                     cout << "1.Maior que algo\n" << endl;
                     cout << "2.Menor que algo\n" << endl;
                     cin >> op10;

                     if(op10 == 1){
                        float valor;
                        sistema.buscarPorValorMaior();
                     }
                     else if(op10 == 2){
                        float valor;
                        sistema.buscarPorValorMenor();
                     }
                     else{
                        cout << "Opcao invalida\n" << endl;
                     }

                }
                else{
                    cout << "Opcao invalida\n" << endl;
                }

            }

            else if(op1 == 4){
                cout << "Qual operacao voce deseja realizar?\n" << endl;
                cout << "1.REMOVER\n" << endl;
                cout << "2.EDITAR\n" << endl;
                cin >> op7;

                if(op7 == 1){
                    cout << "Selecione a categoria para remocao:\n" << endl;
                    cout << "1.BAIRRO\n" << endl;
                    cout << "2.CIDADE\n" << endl;
                    cout << "3.TITULO\n" << endl;
                    cout << "4.VALOR MAIOR QUE ALGO\n" << endl;
                    cout << "5.VALOR MENOR QUE ALGO\n" << endl;
                    cin >> op8;

                    if(op8 == 1){
                        string str;
                        getline(cin, str);
                        sistema.removerPorBairro();

                    }
                    else if(op8 == 2){
                        string str;
                        getline(cin, str);
                        sistema.removerPorCidade();

                    }
                    else if(op8 == 3){
                        string str;
                        getline(cin, str);
                      sistema.removerPorTitulo();
                    }
                    else if(op8 == 4){
                        sistema.removerPorValorMaior();
                    }
                    else if(op8 == 5){
                        sistema.removerPorValorMenor();

                    }
                    else{
                        cout << "Opcao invalida\n" << endl;
                    }
                }
                else if(op7 == 2){
                    cout << "Selecione a categoria para edicao:\n" << endl;
                    cout << "1.BAIRRO\n" << endl;
                    cout << "2.CIDADE\n" << endl;
                    cout << "3.TITULO\n" << endl;
                    cout << "4.VALOR MAIOR OU MENOR QUE ALGO\n" << endl;
                    cin >> op9;

                    if(op9 == 1){
//                        sistema.editarPorBairro();

                    }

                    else if(op9 == 2){
                    }
                    else if(op9 == 3){
                    }
                    else if(op9 == 4){
                    }
                    else{
                        cout << "Opcao invalida\n" << endl;
                    }
                }
            }

}
