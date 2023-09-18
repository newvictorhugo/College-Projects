#include<stdio.h>
#include<string.h>
#include<locale.h>
#define tf 6

typedef struct{
	int cpf, idade, numE, cepE;
	float salario;
	char nome[100], sexo[50], ruaE[50], bairroE[50];
}cliente;

int main(){
	setlocale(LC_ALL,"");
	cliente a[tf];
	int i=0, contIdade=0, contSal=0;
	float mediaCli, somaIdadeCli=0;
	
	for(i=0;i<tf;i++){
		printf("Insira seu Nome: ");
		scanf("%s", &a[i].nome);
		printf("Insira seu sexo: ");
		scanf("%s", &a[i].sexo);
		printf("Insira seu CPF: ");
		scanf("%d", &a[i].cpf);
		printf("Insira sua idade: ");
		scanf("%d", &a[i].idade);
		printf("Insira seu endereço (Rua-Numero-Bairro-CEP): ");
		scanf("%s-%d-%s-%d", &a[i].ruaE, &a[i].numE, &a[i].bairroE, &a[i].cepE);
		printf("Insira seu Salario: ");
		scanf("%f", &a[i].salario);
		
		somaIdadeCli+=a[i].idade;
	}
	mediaCli+=somaIdadeCli/tf;
	
	for(i=0;i<tf;i++){
		if(a[i].idade>mediaCli){
			contIdade++;
			printf("\nIdade Media: %5.2f\n", mediaCli);
		}
		if(a[i].salario>4000){
			contSal++;
		}
	}
	printf("Num de clientes com idade superior à média: %d\n", contIdade);
	printf("Num de clientes que ganham mais de 3 salarios minimos: %d\n", contSal);
}
