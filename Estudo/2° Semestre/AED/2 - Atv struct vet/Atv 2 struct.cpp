#include<stdio.h>
#include<string.h>
#define tf 2
struct aluno{
	char nome[30];
	float numMat, nota1, nota2, nota3, media;
};
int main(){
	
	struct aluno a[tf];
	int i;
	for(i=0;i<tf;i++){
		printf("\nInsira seu nome: ");
		scanf("%s", &a[i].nome);
		printf("Numero de matricula: ");
		scanf("%f", &a[i].numMat);
		printf("Nota primeira prova: ");
		scanf("%f", &a[i].nota1);
		printf("Nota segunda prova: ");
		scanf("%f", &a[i].nota2);
		printf("Nota terceira prova: ");
		scanf("%f", &a[i].nota3);
		
		a[i].media=(a[i].nota1 + a[i].nota2 + a[i].nota3)/3;
	}
	
	char alnMaiorNota[30], alnMaiorMedia[30],alnMenorMedia[30];
	float maiorNota=0, maiorMedia=0, menorMedia=9999;
	
	for(i=0;i<tf;i++){
		if(a[i].nota1>maiorNota){
			maiorNota=a[i].nota1;
			strcpy(alnMaiorNota, a[i].nome);
		}
		if(a[i].media>maiorMedia){
			maiorMedia=a[i].media;
			strcpy(alnMaiorMedia, a[i].nome);
		}
		if(a[i].media<menorMedia){
			menorMedia=a[i].media;
			strcpy(alnMenorMedia, a[i].nome);
		}
	}
	printf("Aluno com maior nota na primeira prova: %s\n", alnMaiorNota);
	printf("Aluno com maior media geral: %s\n", alnMaiorMedia);
	printf("Aluno com menor media geral: %s\n", alnMenorMedia);
	for(i=0;i<tf;i++){
		if(a[i].media>=6){
			printf("%s Aprovado\n", a[i].nome);
		}
		else{
			printf("%s Reprovado\n", a[i].nome);
		}
	}
	return 0;
}
