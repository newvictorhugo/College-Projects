#include <stdio.h>
#include <string.h>
#define tf 10

typedef struct {
    char plataforma[50], nome[100], genero[50], atorPrincipal[100];
    int duracaoMinutos;
} SerieFilme;

int main(){
    SerieFilme catalogo[tf];
    int i, quantidadeCatalogo=0, opcao;

    while(1){
        printf("\nMenu:\n");
        printf("1 - Cadastrar Filme/Serie\n");
        printf("2 - Listar todos cadastros\n");
        printf("3 - Listar Filme/Serie por genero\n");
        printf("4 - Listar Filme/Serie com duracao entre 90 e 120 minutos\n");
        printf("5 - Listar Filme/Serie por plataforma\n");
        printf("6 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Cadastrar Filme/Serie:\n");
                printf("Plataforma: ");
                scanf("%s", catalogo[quantidadeCatalogo].plataforma);
                printf("Nome: ");
                scanf("%s", catalogo[quantidadeCatalogo].nome);
                printf("Genero: ");
                scanf("%s", catalogo[quantidadeCatalogo].genero);
                printf("Ator Principal: ");
                scanf("%s", catalogo[quantidadeCatalogo].atorPrincipal);
                printf("Duracao (minutos): ");
                scanf("%d", &catalogo[quantidadeCatalogo].duracaoMinutos);

                quantidadeCatalogo++;
                break;

            case 2:
                printf("\nLista de todos os cadastros:\n");
                for(i=0; i<quantidadeCatalogo; i++){
                    printf("Plataforma: %s\n", catalogo[i].plataforma);
                    printf("Nome: %s\n", catalogo[i].nome);
                    printf("Genero: %s\n", catalogo[i].genero);
                    printf("Ator Principal: %s\n", catalogo[i].atorPrincipal);
                    printf("Duracao (minutos): %d\n\n", catalogo[i].duracaoMinutos);
                }
                break;

            case 3:
                printf("Digite o genero: ");
                char generoBusca[50];
                scanf("%s", generoBusca);

                printf("\nLista de Filme/Serie por genero %s:\n", generoBusca);
                for(i=0; i<quantidadeCatalogo; i++){
                    if (strcmp(catalogo[i].genero, generoBusca) ==0) {
                        printf("Plataforma: %s\n", catalogo[i].plataforma);
                        printf("Nome: %s\n", catalogo[i].nome);
                        printf("Ator Principal: %s\n", catalogo[i].atorPrincipal);
                        printf("Duracao (minutos): %d\n\n", catalogo[i].duracaoMinutos);
                    }
                }
                break;

            case 4:
                printf("\nLista de Filme/Serie com duracao entre 90 e 120 minutos:\n");
                for(i=0; i<quantidadeCatalogo; i++){
                    if (catalogo[i].duracaoMinutos >= 90 && catalogo[i].duracaoMinutos <= 120) {
                        printf("Plataforma: %s\n", catalogo[i].plataforma);
                        printf("Nome: %s\n", catalogo[i].nome);
                        printf("Ator Principal: %s\n", catalogo[i].atorPrincipal);
                        printf("Duracao (minutos): %d\n\n", catalogo[i].duracaoMinutos);
                    }
                }
                break;

            case 5:
                printf("Digite a plataforma: ");
                char plataformaBusca[50];
                scanf("%s", plataformaBusca);

                printf("\nLista de Filme/Serie por plataforma %s:\n", plataformaBusca);
                for(i=0; i<quantidadeCatalogo; i++){
                    if (strcmp(catalogo[i].plataforma, plataformaBusca) ==0) {
                        printf("Nome: %s\n", catalogo[i].nome);
                        printf("Genero: %s\n", catalogo[i].genero);
                        printf("Ator Principal: %s\n", catalogo[i].atorPrincipal);
                        printf("Duracao (minutos): %d\n\n", catalogo[i].duracaoMinutos);
                    }
                }
                break;

            case 6:
                printf("Encerrando o programa.\n");
                return 0;

            default:
                printf("Opção invalida. Escolha uma opcao valida.\n");
        }
    }
    return 0;
}

