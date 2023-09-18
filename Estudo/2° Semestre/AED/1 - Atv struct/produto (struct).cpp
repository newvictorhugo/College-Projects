#include<stdio.h>
struct produto{
	int cod;
	float preco;
};
main(){
	
	struct produto a;
	
	printf("Insira o codigo do produto: ");
	scanf("%d", &a.cod);
	printf("Insira o valor do produto %d: ", a.cod);
	scanf("%f", &a.preco);
	printf("\nCodigo do Produto: %d\n", a.cod);
	printf("Valor do Produto %d: %5.2f", a.cod, a.preco);
}
