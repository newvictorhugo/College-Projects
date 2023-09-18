#include <stdio.h>
#include <string.h>
#define tf 5

typedef struct {
    int codigo, mesFabricacao, anoFabricacao, mesValidade, anoValidade;
    char tipo[50], descricao[100];
    float preco;
    
}Produto;

int main() {
    Produto produtos[tf];
    int i, quantidadeProdutos= 0;
	char continuar;

    printf("Cadastro de Produtos:\n");
    for(i=0; i<tf; i++){
        printf("Produto %d:\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);
        printf("Tipo: ");
        scanf(" %s", produtos[i].tipo);
        printf("Descricao: ");
        scanf(" %s", produtos[i].descricao);
        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
        printf("Mes de Fabricacao: ");
        scanf("%d", &produtos[i].mesFabricacao);
        printf("Ano de Fabricacao: ");
        scanf("%d", &produtos[i].anoFabricacao);
        printf("Mes de Validade: ");
        scanf("%d", &produtos[i].mesValidade);
        printf("Ano de Validade: ");
        scanf("%d", &produtos[i].anoValidade);

        quantidadeProdutos++;
        
        printf("Deseja cadastrar outro produto? (S/N): ");
        scanf("%c", &continuar);
        if(continuar!='S' && continuar!='s'){
            break;
        }
    }

    printf("\nRelatorio por Tipo de Produto:\n");
    for(i=0; i<quantidadeProdutos; i++) {
        printf("Tipo: %s\n", produtos[i].tipo);
        printf("Codigo: %d\n", produtos[i].codigo);
        printf("Descricao: %s\n", produtos[i].descricao);
        printf("Preco: %.2f\n", produtos[i].preco);
        printf("Fabricacao: %02d/%04d\n", produtos[i].mesFabricacao, produtos[i].anoFabricacao);
        printf("Validade: %02d/%04d\n", produtos[i].mesValidade, produtos[i].anoValidade);
    }

    printf("\nRelatorio por Mes e Ano de Validade:\n");
    for(i=0; i<quantidadeProdutos; i++){
        printf("Mes/Ano de Validade: %02d/%04d\n", produtos[i].mesValidade, produtos[i].anoValidade);
        printf("Codigo: %d\n", produtos[i].codigo);
        printf("Tipo: %s\n", produtos[i].tipo);
        printf("Descricao: %s\n", produtos[i].descricao);
        printf("Preco: %.2f\n", produtos[i].preco);
        printf("Fabricacao: %02d/%04d\n", produtos[i].mesFabricacao, produtos[i].anoFabricacao);
    }
    return 0;
}

