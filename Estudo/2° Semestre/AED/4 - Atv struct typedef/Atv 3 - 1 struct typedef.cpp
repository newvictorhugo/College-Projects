#include <stdio.h>
#include <string.h>
#define tf 2

typedef struct{
    int codigo, horas;
    char titulo[50], instrutor[50];
    float preco;
} Curso;

int main(){
    Curso cursos[tf];
    float somaPrecos = 0;
    int somaHoras = 0, cursoEncontrado = 0;;
    char buscaTitulo[50];

    for (int i=0;i<tf;i++){
        printf("Curso %d:\n", i + 1);
        scanf("%d", &cursos[i].codigo);
        printf("Titulo: ");
        scanf("%s", cursos[i].titulo);
        printf("Instrutor: ");
        scanf("%s", cursos[i].instrutor);
        printf("Horas: ");
        scanf("%d", &cursos[i].horas);
        printf("Preco: ");
        scanf("%f", &cursos[i].preco);

        somaPrecos += cursos[i].preco;
        somaHoras += cursos[i].horas;
    }

    printf("Digite o titulo do curso que deseja buscar: ");
    scanf("%s", buscaTitulo);

    for (int i=0;i<tf;i++) {
        if (strcmp(buscaTitulo, cursos[i].titulo) == 0){
            printf("\nCurso Encontrado:\n");
            printf("Codigo: %d\n", cursos[i].codigo);
            printf("Titulo: %s\n", cursos[i].titulo);
            printf("Instrutor: %s\n", cursos[i].instrutor);
            printf("Horas: %d\n", cursos[i].horas);
            printf("Preco: 5.2fR$\n", cursos[i].preco);
            cursoEncontrado = 1;
            break;
        }
    }

    if (!cursoEncontrado){
        printf("\nCurso nao encontrado.\n");
    }

    float mediaPreco = somaPrecos / tf;
    float mediaHoras = (float)somaHoras / tf;
    
    printf("\nMedia de Preco dos Cursos: %5.2fR$\n", mediaPreco);
    printf("Tempo Medio de Duracao dos Cursos: %5.2f horas\n", mediaHoras);

    return 0;
}

