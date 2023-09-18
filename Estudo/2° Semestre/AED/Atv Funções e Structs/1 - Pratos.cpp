#include <stdio.h>
#include <string.h>
#define QNT_PRAT 5
#define MAX_CHAR 50

struct Pratos {
    char nome[MAX_CHAR];        
    char tipo[MAX_CHAR];        
    int numIngredientes;  
    int ranking;          
};

void valPratos(struct Pratos meuPratoFavorito[QNT_PRAT]){
	int i;
	for(i=0;i<QNT_PRAT;i++){
		fflush(stdin);
    	printf("\nSeu prato favorito: ");
    	fgets(meuPratoFavorito[i].nome, sizeof(meuPratoFavorito[i].nome), stdin);
    	
    	printf("\nTipo do prato: ");
    	fgets(meuPratoFavorito[i].tipo, sizeof(meuPratoFavorito[i].tipo), stdin);
    	
    	printf("\nNumero de ingredientes: ");
    	scanf("%d", &meuPratoFavorito[i].numIngredientes);
    	
    	printf("\nRanking pessoal do prato: ");
    	scanf("%d", &meuPratoFavorito[i].ranking);
    	fflush(stdin);
    	if(meuPratoFavorito[i].ranking==0){
    		break;
    	}
	}
};

void exibirInfoRank(struct Pratos meuPratoFavorito[], int posicao){
	printf("Digite a posicao do prato que deseja exibir: ");
    scanf("%d", &posicao);
	if(posicao >= 1&& posicao <=QNT_PRAT){
		printf("\nNome do prato: %s\n", meuPratoFavorito[posicao - 1].nome);
	    printf("Tipo do prato: %s\n", meuPratoFavorito[posicao - 1].tipo);
	    printf("Numero de ingredientes: %d\n\n", meuPratoFavorito[posicao - 1].numIngredientes);
	    printf("Posicao no ranking: %d\n\n", meuPratoFavorito[posicao - 1].ranking);
	}
	else{
		("Posicao invalida. Insira um valor entre 1 e %d.", QNT_PRAT);
	}
}

void exibirInfoNome(struct Pratos meuPratoFavorito[]){
	int i;
	char pratoInfoNome[QNT_PRAT];
	printf("Digite o nome do prato: ");
	fflush(stdin);
	fgets(pratoInfoNome, sizeof(pratoInfoNome), stdin);
	for(i=0;i<QNT_PRAT;i++){
		
		int resultadoInfoNome = strcmp(pratoInfoNome, meuPratoFavorito[i].nome);
		if(resultadoInfoNome == 0){
			printf("\nNome do prato: %s\n", meuPratoFavorito[i].nome);
		    printf("Tipo do prato: %s\n", meuPratoFavorito[i].tipo);
		    printf("Numero de ingredientes: %d\n\n", meuPratoFavorito[i].numIngredientes);
		    printf("Posicao no ranking: %d\n\n", meuPratoFavorito[i].ranking);
		}
	}
}

int menuExibirTipo(){
	int opcoesExibirTipo;
	printf("1 - Entrada\n");
	printf("2 - Prato Principal\n");
	printf("3 - Sobremesa\n");
	printf("Digite a posicao do prato que deseja exibir: ");
	fflush(stdin);
    scanf("%d", &opcoesExibirTipo);
    return opcoesExibirTipo;
}

int menuPrincipal(){
	int opcoes;
	printf("1 - Cadastrar pratos\n");
	printf("2 - Exibir informacoes dos pratos\n");
	printf("0 - Sair\n");
	scanf("%d", &opcoes);
	return opcoes;
}
int menuExibir(){
	int opcoesExibir;
	printf("1 - Exibir por ranking\n");
	printf("2 - Exibir por tipo\n");
	printf("3 - Exibir por nome\n");
	scanf("%d", &opcoesExibir);
	return opcoesExibir;
}

int main() {
    struct Pratos meuPratoFavorito[QNT_PRAT];
    int opcoes;
    int opcoesExibir;
    int opcoesExibirTipo;
    int posicao;
    int posicaoExibir;
    int encontrou;
    do{
    	opcoes = menuPrincipal();
    	switch(opcoes){
	    	case 1:
				valPratos(meuPratoFavorito);
			break;
	    	case 2:
	    		opcoesExibir = menuExibir();
	    		switch(opcoesExibir){
	    			case 1:
	    				exibirInfoRank(meuPratoFavorito, posicao);
	    				break;
	    				
	    			case 2:
						opcoesExibirTipo = menuExibirTipo();
						switch(opcoesExibirTipo){
					    	case 1:
							    printf("\n- PRATOS DE ENTRADA -\n");
							    
							    for(int i = 0; i < QNT_PRAT; i++) {
							    	encontrou = 0;
							        if(strcmp(meuPratoFavorito[i].tipo, "Entrada") == 0) {
							            printf("Top %d. %s\n", i + 1, meuPratoFavorito[i].nome);
							            printf("Tipo do prato: %s\n", meuPratoFavorito[i].tipo);
							            printf("Numero de ingredientes: %d\n\n", meuPratoFavorito[i].numIngredientes);
							            printf("Posicao no ranking: %d\n\n", meuPratoFavorito[i].ranking);
							            encontrou = 1;
							        }
							        else{
										printf("\nNao existe prato de Entrada na lista!!\n\n");
										break;
									}
							    }
							    
							    break;
					    		
					    	case 2:
					    		printf("\n- PRATOS PRINCIPAIS -\n");
								for(int i=0; i<QNT_PRAT; i++){
									if(strcmp(meuPratoFavorito[i].tipo, "Prato Principal") == 0){
										printf("Top %d. %s\n", i + 1, meuPratoFavorito[i].nome);
					                    printf("Tipo do prato: %s\n", meuPratoFavorito[i].tipo);
					                    printf("Numero de ingredientes: %d\n\n", meuPratoFavorito[i].numIngredientes);
					                    printf("Posicao no ranking: %d\n\n", meuPratoFavorito[i].ranking);
					                }
					                else{
										printf("\nNao existe Prato Principal na lista!!\n\n");
										break;
									}
								}
								break;
					    		
					    	case 3:
					    		printf("\n- PRATOS DE SOBREMESA -\n");
					    		for(int i=0; i<QNT_PRAT; i++){
					    			if(strcmp(meuPratoFavorito[i].tipo, "Sobremesa") == 0){
					    				printf("Top %d. %s\n", i + 1, meuPratoFavorito[i].nome);
					                    printf("Tipo do prato: %s\n", meuPratoFavorito[i].tipo);
					                    printf("Numero de ingredientes: %d\n\n", meuPratoFavorito[i].numIngredientes);
					                    printf("Posicao no ranking: %d\n\n", meuPratoFavorito[i].ranking);
					                }
					                else{
										printf("\nNao existe prato de Sobremesa na lista!!\n\n");
										break;
									}
					    		}
					    		break;
					    	default:
					     	   printf("Opcao invalida.\n");
								break;
			    				
			    		}

	    		
	    			break;
	    			
	    			case 3:
	    				exibirInfoNome(meuPratoFavorito);
	    				
	   			}
	   	}
    }while(opcoes != 0);
    
    return 0;
}

