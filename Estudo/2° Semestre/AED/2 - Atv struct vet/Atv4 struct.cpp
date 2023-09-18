#include <stdio.h>
#include <string.h>
#define tf 5
struct carro {
    char marca[50];
    int ano;
    float preco;
};

int main() {
    struct carro a[tf];
    int i;
    
    printf("Digite os dados de 5 carros:\n");
    for (i=0; i<tf; i++){
        printf("\nCarro %d:\n", i + 1);
        printf("Marca: ");
        scanf("%s", a[i].marca);
        printf("Ano: ");
        scanf("%d", &a[i].ano);
        printf("Preco: ");
        scanf("%f", &a[i].preco);
    }
    float p;
    printf("\nDigite o valor 'p': ");
    scanf("%f", &p);
    printf("\nCarros com preco menor que %.2f:\n", p);
    for (i=0; i<tf; i++){
        if (a[i].preco < p) {
            printf("Carro %d:\n", i + 1);
            printf("Marca: %s\n", a[i].marca);
            printf("Ano: %d\n", a[i].ano);
            printf("Preco: %.2f\n", a[i].preco);
            printf("\n");
        }
    }
    return 0;
}

