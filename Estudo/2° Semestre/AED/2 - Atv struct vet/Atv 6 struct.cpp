#include<stdio.h>
#define tf 2
struct aluno{
	int codPeca, precoUni, qntEstq, qntEmFalta;
};
int main(){
	
	struct aluno a[tf];
	int i;
	for(i=0;i<tf;i++){
		printf("\nInsira o codigo da peca: ");
		scanf("%d", &a[i].codPeca);
		printf("Insira preco unitario da peca: ");
		scanf("%d", &a[i].precoUni);
		printf("Insira a quantidade em estoque: ");
		scanf("%d", &a[i].qntEstq);
		
	}
	for(i=0;i<tf;i++){
		if(a[i].qntEstq<10){
			printf("A peca de codigo %d precisa de reposicao - Quantidade: %d", a[i].codPeca, a[i].qntEstq);
		}
	}
	return 0;
}
