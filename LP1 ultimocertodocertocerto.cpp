#include <stdio.h>
#include <stdlib.h>


typedef struct endereco {

    char rua[200];
    char bairro[100];
    char cidade[100];
    char estado[100];
    int cep;
    int numero;

} t_endereco;

typedef struct negocio {

    float valor;
    int tipoNegocio;

} t_negocio;

typedef struct casa {

    char tituloCasa;
    float areaConstruida;
    float areaTerreno;
    int nPavimentos;
    int nQuartos;
    int nBanheiros;
    int nSuites;

    t_endereco endereco;
    t_negocio negocio;

} t_casa;

typedef struct apartamento {

    char tituloApartamento;
    float area;
    int apartamentoAndar;
    int nQuartos;
    int nBanheiros;
    int nSuites;
    int andar;
    float valorCondominio;
    int vagasGaragem;
    int posicao;

    t_endereco endereco;
    t_negocio negocio;

} t_apartamento;

typedef struct terreno {

    float area;
    int muro;
    int saneamento;
    int posicao;
    int finalidade;

    t_endereco endereco;
    t_negocio negocio;

} t_terreno;


void CadastrarCasa (t_casa listaCasa[], int x) {
	
	int i;
	
	FILE*  casa;
    casa = fopen("casas_t.txt", "w");
    
    if  (casa <=0 ) {
        printf("Erro ao abrir o arquivo\n");

	}

	for (i=0 ; i < x ; i++) {
		
	    printf("Digite a area construida: ");
	    scanf("%f", &listaCasa[i].areaConstruida);
	    printf("Digite a area do terreno: ");
	    scanf("%f", &listaCasa[i].areaTerreno);
	    printf("Digite o numero de pavimentos: ");
	    scanf("%d", &listaCasa[i].nPavimentos);
	    printf("Digite o numero de quartos: ");
	    scanf("%d", &listaCasa[i].nQuartos);
	    printf("Digite o numero de banheiros: ");
	    scanf("%d", &listaCasa[i].nBanheiros);
	    printf("Digite o numero de suites: ");
	    scanf("%d", &listaCasa[i].nSuites);
	    printf("Digite a rua: ");
	    getchar();
	    gets(listaCasa[i].endereco.rua);
	    printf("Digite o numero: ");
	    scanf("%d", &listaCasa[i].endereco.numero);
	    printf("Digite o bairro: ");
	    getchar();
	    gets(listaCasa[i].endereco.bairro);
	    printf("Digite a cidade: ");
	    getchar();
	    gets(listaCasa[i].endereco.cidade);
		printf("Digite o estado: ");
		getchar();
	    gets(listaCasa[i].endereco.estado);
	    printf("Digite o CEP: ");
	    scanf("%d", &listaCasa[i].endereco.cep);
	    
	    int salvar;
	    
	    printf("Deseja salvar essa operacao? (SIM/NAO)\n");
	    printf("1. SIM\n");
	    printf("2. NAO\n");
	    scanf("%d", &salvar);
	    
	 	if (salvar == 1){
	    
	    fprintf(casa, "%.1f\n", listaCasa[i].areaConstruida);
		fprintf(casa, "%.1f\n", listaCasa[i].areaTerreno);
		fprintf(casa, "%d\n", listaCasa[i].nPavimentos);
		fprintf(casa, "%d\n", listaCasa[i].nQuartos);
		fprintf(casa, "%d\n", listaCasa[i].nBanheiros);
		fprintf(casa, "%d\n", listaCasa[i].nSuites);
		fprintf(casa, "%s\n", listaCasa[i].endereco.rua);
		fprintf(casa, "%d\n", listaCasa[i].endereco.numero);
		fprintf(casa, "%s\n", listaCasa[i].endereco.bairro);
		fprintf(casa, "%s\n", listaCasa[i].endereco.cidade);
		fprintf(casa, "%s\n", listaCasa[i].endereco.estado);
		fprintf(casa, "%d\n", listaCasa[i].endereco.cep);
	
		}else{
			
			//falta retornar ao menu
		}
		
	    

	}

}


void CadastrarAp (t_apartamento listaAp[], int x) {
	
	int i;
	
	FILE*  apartamentos;
    apartamentos = fopen("apartamentos_t.txt", "w");
    
    
    if  (apartamentos <=0 ) {
        printf("Erro ao abrir o arquivo\n");
	}

	for (i=0 ; i < x ; i++) {
		
	    printf("Digite a area: ");
	    scanf("%f", &listaAp[i].area);
	    printf("Digite a quantidade de apartamento por andar: ");
	    scanf("%d", &listaAp[i].apartamentoAndar);
	    printf("Digite o andar do apartamento: ");
	    scanf("%d", &listaAp[i].andar);
	    printf("Digite o numero de quartos: ");
	    scanf("%d", &listaAp[i].nQuartos);
	    printf("Digite o numero de banheiros: ");
	    scanf("%d", &listaAp[i].nBanheiros);
	    printf("Digite o numero de suites: ");
	    scanf("%d", &listaAp[i].nSuites);
	    printf("Digite o valor do condominio: ");
	    scanf("%f", &listaAp[i].valorCondominio);
	    printf("Digite o numero de vagas na garagem: ");
	    scanf("%d", &listaAp[i].vagasGaragem);
	    printf("Digite a posicao do apartamento: ");
	    scanf("%d", &listaAp[i].posicao);
	    printf("Digite a rua: ");
	    getchar();
	    gets(listaAp[i].endereco.rua);
	    printf("Digite o numero: ");
	    scanf("%d", &listaAp[i].endereco.numero);
	    printf("Digite o bairro: ");
	    getchar();
	    gets(listaAp[i].endereco.bairro);
	    printf("Digite a cidade: ");
	    getchar();
	    gets(listaAp[i].endereco.cidade);
		printf("Digite o estado: ");
		getchar();
	    gets(listaAp[i].endereco.estado);
	    printf("Digite o CEP: ");
	    scanf("%d", &listaAp[i].endereco.cep);
	    
	    int salvar;
	    
	    printf("Deseja salvar essa operacao? (SIM/NAO)\n");
	    printf("1. SIM\n");
	    printf("2. NAO\n");
	    scanf("%d", &salvar);
	    
	 	if (salvar == 1){
	    
	    fprintf(apartamentos, "%.1f\n", listaAp[i].area);
		fprintf(apartamentos, "%.1f\n", listaAp[i].apartamentoAndar);
		fprintf(apartamentos, "%d\n", listaAp[i].andar);
		fprintf(apartamentos, "%d\n", listaAp[i].nQuartos);
		fprintf(apartamentos, "%d\n", listaAp[i].nBanheiros);
		fprintf(apartamentos, "%d\n", listaAp[i].nSuites);
		fprintf(apartamentos, "%f\n", listaAp[i].valorCondominio);
		fprintf(apartamentos, "%d\n", listaAp[i].vagasGaragem);
		fprintf(apartamentos, "%d\n", listaAp[i].posicao);
		fprintf(apartamentos, "%s\n", listaAp[i].endereco.rua);
		fprintf(apartamentos, "%d\n", listaAp[i].endereco.numero);
		fprintf(apartamentos, "%s\n", listaAp[i].endereco.bairro);
		fprintf(apartamentos, "%s\n", listaAp[i].endereco.cidade);
		fprintf(apartamentos, "%s\n", listaAp[i].endereco.estado);
		fprintf(apartamentos, "%d\n", listaAp[i].endereco.cep);
	
		}else{
			
			//falta retornar oa menu
		}
		
	    

	}
	
	
	
	
}

void CadastrarTerreno (t_terreno listaTerreno[], int x) {
	
	int i;
	
	FILE*  terrenos;
    terrenos = fopen("terrenos_t.txt", "w");
    
    
    if  (terrenos <=0 ) {
        printf("Erro ao abrir o arquivo\n");
	}
	
	
	for (i=0 ; i < x ; i++) {
		
	    printf("Digite a area do terreno: ");
	    scanf("%f", &listaTerreno[i].area);
	    printf("O terreno e delimitado por muros ou cercas? (SIM/NAO) "); //Teria que ter um if com as opcoes sim e nao
	    scanf("%d", &listaTerreno[i].muro);
	    printf("O terreno possui saneamento na regiao? (SIM/NAO)"); //Idem
		scanf("%d", &listaTerreno[i].saneamento);
	    printf("Qual a posicao em que o terreno esta situado? ");
	    scanf("%d", &listaTerreno[i].posicao);
	    printf("Qual a finalidade do terreno?");
	    scanf("%d", &listaTerreno[i].finalidade);
	    printf("Digite a rua: ");
	    getchar();
	    gets(listaTerreno[i].endereco.rua);
	    printf("Digite o bairro: ");
	    getchar();
	    gets(listaTerreno[i].endereco.bairro);
	    printf("Digite a cidade: ");
	    getchar();
	    gets(listaTerreno[i].endereco.cidade);
		printf("Digite o estado: ");
		getchar();
	    gets(listaTerreno[i].endereco.estado);
	    printf("Digite o CEP: ");
	    scanf("%d", &listaTerreno[i].endereco.cep);
	    
	    int salvar;
	    
	    printf("Deseja salvar essa operacao? (SIM/NAO)\n");
	    printf("1. SIM\n");
	    printf("2. NAO\n");
	    scanf("%d", &salvar);
	    
	 	if (salvar == 1){
	 	
	    fprintf(terrenos, "%.1f\n", listaTerreno[i].area);
		fprintf(terrenos, "%s\n", listaTerreno[i].muro);
		fprintf(terrenos, "%s\n", listaTerreno[i].saneamento);
		fprintf(terrenos, "%d\n", listaTerreno[i].posicao);
		fprintf(terrenos, "%d\n", listaTerreno[i].finalidade);
		fprintf(terrenos, "%s\n", listaTerreno[i].endereco.rua);
		fprintf(terrenos, "%d\n", listaTerreno[i].endereco.numero);
		fprintf(terrenos, "%s\n", listaTerreno[i].endereco.bairro);
		fprintf(terrenos, "%s\n", listaTerreno[i].endereco.cidade);
		fprintf(terrenos, "%s\n", listaTerreno[i].endereco.estado);
		fprintf(terrenos, "%d\n", listaTerreno[i].endereco.cep);
		
		}else{
			
			//falta retornar ao menu
		}

	}
	
}

void Consultar () {
	
	printf("Consultar");
}


void Menu () {

	int opcao;
	int opcao2;
	int numeroCadastro;

	printf("Bem Vindo a WL Imobiliaria!!!!\n");
	printf("Selecione uma das opcoes abaixo:\n");
	printf("1. Cadastrar imoveis\n");
	printf("2. Consultar imoveis\n");
	scanf("%d", &opcao);

	if(opcao == 1){
		
		printf("Qual tipo de imovel voce deseja cadastrar?\n");
		printf("1. CASA\n");
		printf("2. APARTAMENTO\n");
		printf("3. TERRENO\n");
		scanf("%d", &opcao2);
		
		if(opcao2 == 1){
			
			printf("Quantas casas voce deseja cadastrar?\n");
			scanf("%d", &numeroCadastro);
	
			t_casa listaCasa[numeroCadastro];
	
			CadastrarCasa(listaCasa, numeroCadastro);
			
		}else if (opcao2 == 2){
			
			printf("Quantos apartamentos voce deseja cadastrar?\n");
			scanf("%d", &numeroCadastro);
			
			t_apartamento listaAp[numeroCadastro];
	
			CadastrarAp(listaAp, numeroCadastro);
			
			
			
		}else if (opcao2 == 3){
			
			printf("Quantos terrenos voce deseja cadastrar?\n");
			scanf("%d", &numeroCadastro);
			
			t_terreno listaTerreno[numeroCadastro];
	
			CadastrarTerreno(listaTerreno, numeroCadastro);
			
		}else{
	
			printf("Opcao invalida");
			
			//falta retornar ao menu
		}
		

	}else if(opcao == 2){
		Consultar();

	}else{
		printf("Opcao invalida");
	}
}


int main (void){

	Menu();
    


	return 0;
}

