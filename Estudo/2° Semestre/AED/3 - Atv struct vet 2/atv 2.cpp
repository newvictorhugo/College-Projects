#include<stdio.h>
#include<string.h>
#define tf 2
struct agenda{
	char texto[200];
	int dia, mes, ano, hrs, min, seg;
};
int main(){
	int i, listaMes;
	struct agenda a[tf];
	for(i=0;i<tf;i++){
		printf("\n-Seu compromisso- \n");
		printf("\nData do compromisso (dia/mes/ano): ");
		scanf("%d/%d/%d", &a[i].dia, &a[i].mes, &a[i].ano);
		printf("\nHorario do compromisso (Hora:Minuto:Segundo): ");
		scanf("%d:%d:%d", &a[i].hrs, &a[i].min, &a[i].seg);
		getchar();
		printf("\nTexto: ");
		scanf("%[^\n]", &a[i].texto);
		printf("\n");
	}
	
	printf("\nListar compromissos do mes: ");
	scanf("%d", &listaMes);
	while(listaMes!=0){
		for(i=0;i<tf;i++){
			if(listaMes==a[i].mes){
			printf("\n-%d/%d/%d- %d:%d:%d", a[i].dia, a[i].mes, a[i].ano, a[i].hrs, a[i].min, a[i].seg);
			printf("\n%s\n", a[i].texto);
			}
		}
		printf("\nListar compromissos do mes: ");
		scanf("%d", &listaMes);
	}
	
	return 0;
}
