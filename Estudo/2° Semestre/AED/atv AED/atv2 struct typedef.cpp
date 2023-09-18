#include <stdio.h>
#include <string.h>
#define tf 5
typedef struct{
    char nome[100], sexo;
    float altura, peso;
}Atleta;

int main(){
    Atleta atletas[tf];
    int i;
    char *classificacao;
    float imc;

    for(i=0; i<tf; i++){
        printf("Atleta %d\n", i + 1);
        printf("Nome: ");
        scanf("%s", atletas[i].nome);
        printf("Sexo (M/F): ");
        scanf("%s", &atletas[i].sexo);
        printf("Altura (metros): ");
        scanf("%f", &atletas[i].altura);
        printf("Peso (kg): ");
        scanf("%f", &atletas[i].peso);
    }

    printf("\nRelatorio de IMC por sexo:\n");

    for(i=0; i<tf; i++){
        imc = atletas[i].peso / (atletas[i].altura * atletas[i].altura);

        if (imc < 18.5) {
            classificacao = "Abaixo do peso";
        } else if (imc < 24.9) {
            classificacao = "Peso normal";
        } else if (imc < 29.9) {
            classificacao = "Sobrepeso";
        } else if (imc < 34.9) {
            classificacao = "Obesidade grau 1";
        } else if (imc < 39.9) {
            classificacao = "Obesidade grau 2";
        } else {
            classificacao = "Obesidade grau 3";
        }

        printf("Atleta: %s\n", atletas[i].nome);
        printf("Sexo: %c\n", atletas[i].sexo);
        printf("IMC: %.2f\n", imc);
        printf("Classificação: %s\n\n", classificacao);
    }

    return 0;
}

