#include <stdio.h>
#include <string.h>
#define tf 2

struct paciente {
    float peso, altura;
    int idade;
    char sexo;
};

int main() {
    struct paciente a[tf];
    int i;
    
    printf("Digite os dados de 30 pacientes:\n");
    for (i=0; i<tf; i++) {
        printf("\nPaciente %d:\n", i + 1);
        printf("Peso (kg): ");
        scanf("%f", &a[i].peso);
        printf("Altura (m): ");
        scanf("%f", &a[i].altura);
        printf("Idade: ");
        scanf("%d", &a[i].idade);
        printf("Sexo (M/F): ");
        scanf(" %c", &a[i].sexo);
    }
    
    int soma_idade_feminino = 0;
    int contador_feminino = 0;
    for (i=0; i<tf; i++){
        if (a[i].sexo == 'F') {
            soma_idade_feminino += a[i].idade;
            contador_feminino++;
        }
    }
    
    float media_idade_feminino = (float)soma_idade_feminino / contador_feminino;
    printf("\nMedia de idade dos pacientes do sexo Feminino: %.2f\n", media_idade_feminino);
    
    float maior_altura=-1.0;
    for (i=0; i<tf; i++){
        if(a[i].peso>80&&a[i].altura> maior_altura){
            maior_altura = a[i].altura;
        }
    }
    
    if (maior_altura!=-1.0) {
        printf("Maior altura dos pacientes que pesam mais de 80 kg: %.2f m\n", maior_altura);
    }else{
        printf("Nenhum paciente pesa mais de 80 kg.\n");
    }
    return 0;
}

