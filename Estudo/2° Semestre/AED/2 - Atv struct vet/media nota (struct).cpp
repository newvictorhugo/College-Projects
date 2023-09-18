#include<stdio.h>
#define tf 2
struct aluno{
	int num_aluno;
	float nota1, nota2, nota3, media;
};
int main(){

	struct aluno a[tf];
	int i;
	for(i=0;i<tf;i++){
		printf("Numero Aluno: ");
		scanf("%d", &a[i].num_aluno);
		printf("Nota 1: ");
		scanf("%f", &a[i].nota1);
		printf("Nota 2: ");
		scanf("%f", &a[i].nota2);
		printf("Nota 3: ");
		scanf("%f", &a[i].nota3);
		
		a[i].media=(a[i].nota1+a[i].nota2+a[i].nota3)/3;
	}
	for(i=0;i<tf;i++){
		printf("\nAluno: %d\n", a[i].num_aluno);
		printf("Media: %5.2f", a[i].media);
	}
	
	return 0;
}
