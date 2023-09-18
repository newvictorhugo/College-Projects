#include<stdio.h>
struct aluno{
		char ra[12];
		float nota1, nota2;
};
int main(){
	
	struct aluno a;
	
	printf("Seu RA: ");
    gets(a.ra);
	printf("Nota 1: ");
	scanf("%f", &a.nota1);
	printf("Nota 2: ");
	scanf("%f", &a.nota2);
	printf("\nRA: %s\n", a.ra);
	printf("Nota 1: %5.2f \nNota 2: %5.2f", a.nota1, a.nota2);
	
	return 0;
}
