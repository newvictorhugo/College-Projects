#include <stdio.h>
#include <string.h>
#define tfnum 10
main()
{
  int vet[tfnum], tl_num=0,cod_vol,i,pos,opcao;
  char name_user[100], vetnome[tfnum][100];
  	printf("\n---Sistema de Gerenciamento ONGADAPV---:\n\n");
	printf("1 - Cadastrar\n");
	printf("2 - Exclusao\n");
	printf("3 - Lancamento\n");
	printf("4 - Relatorio\n");
	printf("9 - Finalizar\n\n");
	fflush(stdin);
	scanf("%d", &opcao);
	
	while(opcao!=9){

		while(opcao!=9){
			switch(opcao){
				
				case 0:
					printf("\n---Cadastrar---\n\n");
					printf("1 - Cadastrar Voluntario\n");
					printf("2 - Cadastrar Empresa\n");
					printf("3 - Cadastrar Projeto\n");
					printf("9 - Voltar\n\n");
					fflush(stdin);
					scanf("%d", &opcao);
					
					
					switch(opcao){
					}
					
					case 1:
						printf("\n---Cadastrar Voluntario---\n\n");
						
							printf("Entre com o codigo:");
							scanf("%d",&cod_vol);  
							
						
						while(cod_vol>0 && tl_num<tfnum) //elemento é válido? e tem espaço?
						{
						pos=0;
						while(cod_vol!=vet[pos]&&pos<tl_num)
						  pos++;
						if(pos<tl_num) //achou
						  printf("\ncodigo ja cadastrado!!\n");
						else
						{
						    vet[tl_num]=cod_vol;
							printf("digite o nome do usuario");
							fflush(stdin);
							gets(name_user);
							strcpy(vetnome[tl_num],name_user) ;  
						    tl_num++;
						  }
						  if(tl_num<tfnum)
						  {
						    printf("\nEntre com o codigo do voluntario:");
						    scanf("%d",&cod_vol); 
						  }
						} 
						for(i=0;i<tl_num;i++) //imprimir até TF e até TL
						printf("\n[%d]=%d && c",i,vet[i],name_user);
}

					
					
					
					
					
					
					
					
					
					
					break;
					
					
			}
		}
  	}

  	
  
  
  
