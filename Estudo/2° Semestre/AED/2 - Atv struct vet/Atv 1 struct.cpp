#include<stdio.h>
#define tf 2
struct aluno{
	char nome[30], curso[30];
	int numMat;
};
int main(){
	
	struct aluno a[tf];
	int i;
	for(i=0;i<tf;i++){
		printf("\nInsira seu nome: ");
		scanf("%s", &a[i].nome);
		printf("Numero de matricula: ");
		scanf("%d", &a[i].numMat);
		printf("Seu curso: ");
		scanf("%s", &a[i].curso);
		
	}
	for(i=0;i<tf;i++){
		printf("%s\n", a[i].nome);
		printf("%d\n", a[i].numMat);
		printf("%s\n", a[i].curso);
	}
	return 0;
}
