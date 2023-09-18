#include<stdio.h>
#include<string.h>
#define tf 2
struct pagamento{
	float salarioBase, beneficio, desconto, salarioLiq;
	char nome[50], cargo[50];
};

int main(){
	struct pagamento a[tf];
	int i;
	float mediaSalario=0, somaMediaSal=0;
	char conferirNome[50];
	
	for(i=0;i<tf;i++){
		printf("Nome do funcionario: ");
		scanf("%s", &a[i].nome);
		printf("\nCargo do funcionario: ");
		scanf("%s", &a[i].cargo);
		printf("\nSalario base do funcionario: ");
		scanf("%f", &a[i].salarioBase);
		printf("\nBeneficios do funcionario: ");
		scanf("%f", &a[i].beneficio);
		printf("\nDesconto salarial do funcionario: ");
		scanf("%f", &a[i].desconto);
		
		somaMediaSal += a[i].salarioBase;
		a[i].salarioLiq = (a[i].salarioBase + a[i].beneficio) - a[i].desconto;
	}
	mediaSalario = somaMediaSal/tf;
	
	printf("\nInforme seu nome: ");
	scanf("%s", conferirNome);
	for(i=0;i<tf;i++){
		if(strcmp(conferirNome, a[i].nome)==0){
			printf("\nNome: %s\nCargo: %s\nSalario Base: %5.2f\nBeneficios: %5.2f\nDesconto salarial: %5.2f"
			, a[i].nome, a[i].cargo, a[i].salarioBase, a[i].beneficio, a[i].desconto);
			printf("\nSalario Liquido: %5.2f", a[i].salarioLiq);
		}
	}
	printf("\nMedia salarial da empresa: %5.2f", mediaSalario);
	
}
