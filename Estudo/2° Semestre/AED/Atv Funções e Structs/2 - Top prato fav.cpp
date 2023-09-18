#include <stdio.h>
#include <string.h>

#define QNT_PRATOS 5
#define TAM_PRATO 50

struct pratos{
	char nome[TAM_PRATO];
};

int main(){
	struct pratos prtsFavorito[QNT_PRATOS];
	int i;
	printf("Seu top 5 de pratos favoritos\n\n");
	
	for(i=0; i<QNT_PRATOS; i++){
		printf("\nDigite seu prato favorito top %d: ", i+1);
		fgets(prtsFavorito[i].nome, sizeof(prtsFavorito[i].nome), stdin);
		prtsFavorito[i].nome[strcspn(prtsFavorito[i].nome, "\n")];
	}
	for(i=0; i<QNT_PRATOS; i++){
		printf("Top %d. %s", i+1, prtsFavorito[i].nome);
	}
}
