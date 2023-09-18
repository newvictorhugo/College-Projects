#include<stdio.h>
#include<string.h>
#define tf 2

typedef struct{
	float altura, peso, calcIMC;
	char nome[50], sexo[50];
}IMC;
int main(){
	IMC a[tf];
	int i;
	
	for(i=0;i<tf;i++){
		printf("Insira o Nome: ");
		scanf("%s", &a[i].nome);
		printf("Insira o Sexo (M/F): ");
		scanf("%s", &a[i].sexo);
		printf("Insira a Altura: ");
		scanf("%f", &a[i].altura);
		printf("Insira o Peso: ");
		scanf("%f", &a[i].peso);
		
		a[i].calcIMC=a[i].peso/(a[i].altura*a[i].altura)
		
	}
	for(i=0;i<tf;i++){
		printf("\n%s", a[i].nome)
		if(a[i].calcIMC<18.5){
			
		}
	}
}
