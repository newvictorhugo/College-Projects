#include <stdio.h>
#include <string.h>
#define tf 5

typedef struct{
    int codigo, horas;
    char titulo[100], instrutor[100];
    float preco;
}Curso;

int main() {
    Curso cursos[tf];
    float somaPrecos = 0, somaHoras = 0;
    int i;

    for (i=0; i<tf; i++) {
        printf("Curso %d:\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &cursos[i].codigo);
        printf("Titulo: ");
        scanf(" %s", cursos[i].titulo);
        printf("Instrutor: ");
        scanf(" %s", cursos[i].instrutor);
        printf("Horas: ");
        scanf("%d", &cursos[i].horas);
        printf("Preco: ");
        scanf("%f", &cursos[i].preco);

        somaPrecos += cursos[i].preco;
        somaHoras += cursos[i].horas;
    }
	int codigoProcurado;
    printf("Digite o codigo do curso que deseja procurar: ");
    scanf("%d", &codigoProcurado);

    Curso cursoEncontrado;
	
	int cursoEncontradoFlag = 0;
    for(i=0; i<tf; i++){
        if(cursos[i].codigo == codigoProcurado){
            cursoEncontrado = cursos[i];
            cursoEncontradoFlag = 1;
            break;
        }
    }

    if(cursoEncontradoFlag){
        printf("\nCurso Encontrado:\n");
        printf("Codigo: %d\n", cursoEncontrado.codigo);
        printf("Titulo: %s\n", cursoEncontrado.titulo);
        printf("Instrutor: %s\n", cursoEncontrado.instrutor);
        printf("Horas: %d\n", cursoEncontrado.horas);
        printf("Preco: %.2f\n", cursoEncontrado.preco);
    }else{
        printf("\nCurso nao encontrado.\n");
    }
	float mediaPreco = somaPrecos / tf;
    float mediaHoras = somaHoras / tf;
    printf("\nMedia de preco dos cursos: %.2f\n", mediaPreco);
    printf("Tempo medio de duracao dos cursos: %.2f horas\n", mediaHoras);

    return 0;
}

