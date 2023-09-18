#include<stdio.h>
struct data{
		int dia, mes, ano;
};
int main(){
	
	struct data a;
	
	printf("Insira uma data DIA-MES-ANO: ");
	scanf("%d-%d-%d", &a.dia, &a.mes, &a.ano);
	
	printf("Data inserida foi %d-%d-%d", a.dia, a.mes, a.ano);
	return 0;
}
