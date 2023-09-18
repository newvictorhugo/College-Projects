#include<stdio.h>
#include<string.h>
#include<locale.h>
#define tf 2

typedef struct{
	int numConta;
	float saldo;
	char nome[100];
}conta;

int main(){
	conta a[tf];
	int i=0, tl=0, opcao, valNumConta;
	float saldoCor, valorRet, valorDep;
	printf("\n1 - Abrir Conta\n");
	printf("2 - Exibir Conta\n");
	printf("3 - Sacar Dinheiro\n");
	printf("4 - Depositar Dinheiro\n");
	printf("0 - Sair\n");
	fflush(stdin);
	scanf("%d", &opcao);
	
	while(opcao!=0){
		switch(opcao){
		
			case 1: printf("-Abrir Conta-\n");
					printf("Insira seu Nome Completo: ");
					fflush(stdin);
					scanf("%s", a[i].nome);
					printf("Insira o Numero da Conta: ");
					scanf("%d", &a[i].numConta);
					printf("Insira o Saldo Inicial: ");
					scanf("%f", &a[i].saldo);
					saldoCor=a[i].saldo;
					break;
					
			case 2: printf("-Exibir Conta-\n");
					for(i=0;i<tl;i++){
						printf("Nome: %s", a[i].nome);
						printf("Numero da Conta: %d", a[i].numConta);
						printf("Saldo: %5.2f", a[i].saldo);
					}

					break;
			
			case 3: printf("-Sacar Dinheiro-\n");
					printf("Insira o num da conta: ");
					scanf("%d", &valNumConta);
					for(i=0;i<tf;i++){
						if(valNumConta==a[i].numConta){
							printf("Insira o valor de Retirada: ");
							scanf("%f", &valorRet);
							if(a[i].saldo<valorRet){
								printf("Saldo insuficiente");
							}
							else{
								a[i].saldo-=valorRet;
								printf("Valor retirado: %5.2f\n", valorRet);
								printf("Saldo atual da Conta: %5.2f", a[i].saldo);
							}
						}
					}
					
					break;
					
			case 4: printf("-Depositar Dinheiro-");
						printf("Insira o num da conta: ");
						scanf("%d", &valNumConta);
						for(i=0;i<tf;i++){
							if(valNumConta==a[i].numConta){
								printf("Insira o valor de Deposito: ");
								scanf("%f", &valorDep);
								a[i].saldo+=valorDep;
								printf("Valor Depositado: %5.2f\n", valorDep);
								printf("Saldo atual da Conta: %5.2f", a[i].saldo);
							}
					}
					break;
		
		}
		tl++;
		i++;
		printf("1 - Abrir Conta\n");
		printf("2 - Exibir Conta\n");
		printf("3 - Sacar Dinheiro\n");
		printf("4 - Depositar Dinheiro\n");
		printf("0 - Sair\n");
		fflush(stdin);
		scanf("%d", &opcao);
	}

}
