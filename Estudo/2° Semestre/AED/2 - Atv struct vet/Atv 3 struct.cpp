#include<stdio.h>
#define tf 1
struct aluno{
	char nome[30], sexo[30], cargo[30];
	float salario;
	int idade, cpf, dia, mes, ano, codSet;
};
int main(){
	
	struct aluno a[tf];
	int i;
	for(i=0;i<tf;i++){
		printf("\nInsira seu nome: ");
		scanf("%s", a[i].nome);
		printf("Insira sua idade: ");
		scanf("%d", &a[i].idade);
		printf("Insira seu genero (M/F): ");
		scanf("%s", a[i].sexo);
		printf("Insira seu CPF: ");
		scanf("%d", &a[i].cpf);
		printf("Insira sua Data de Nascimento (dia-mes-ano): ");
		scanf("%d-%d-%d", &a[i].dia, &a[i].mes, &a[i].ano);
		printf("Insira seu codigo de setor: ");
		scanf("%d", &a[i].codSet);
		printf("Insira seu Cargo: ");
		scanf("%s", a[i].cargo);
		printf("Insira seu salario: ");
		scanf("%f", &a[i].salario);
		
	}
	for(i=0;i<tf;i++){
		printf("%s\n", a[i].nome);
		printf("%d\n", a[i].idade);
		printf("%s\n", a[i].sexo);
		printf("%d\n", a[i].cpf);
		printf("%d-%d-%d\n", a[i].dia, a[i].mes, a[i].ano);
		printf("%d\n", a[i].codSet);
		printf("%s\n", a[i].cargo);
		printf("%f\n", a[i].salario);
	}
	return 0;
}
