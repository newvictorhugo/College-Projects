#include<stdio.h>
#include<string.h>

#define MAX_CHAR 50
#define TF_VOL 10
#define TF_EMP 10
#define TF_PROJ 10
#define TF_HORAS 10
#define TF_RELAT 100

struct lista{
	int vNum[TF_VOL], TLV = 0, cod_vol, somahr_vol;
	char vVoluntario[TF_VOL][100];
	
	int vCod[TF_EMP], TLE = 0, cod_emp;
	char vEmpresa[TF_EMP][100];
	
	int vProj[TF_PROJ], TLP = 0, cod_proj;
	char vDescricao[TF_PROJ][100];
	
	int vHoras[TF_HORAS], TLH = 0, cod_horas;
	
	int vRelat[TF_RELAT], TLR = 0, cod_relat;
};

void cadastrarVoluntario(struct lista *b){
	int i, pos, verificar;
	
	printf("\n\n---Cadastrar Voluntario---\n\n");
	printf("Para finalizar digite '0' no campo codigo.");
	do{
		verificar = 0;
		printf("\nCodigo do Voluntario: ");
		fflush(stdin);
		if(scanf("%d", &b->cod_vol) != 1){
			printf("\n--Codigo Invalido!!--\n");
			verificar = 1;
		}
	}while(verificar != 0);
	
	
	while(b->cod_vol > 0 && b->TLV < TF_VOL){
		pos = 0;
		while(pos < b->TLV && b->cod_vol != b->vNum[pos]){
			pos++;
		}
		if(pos < b->TLV){
			printf("\nCodigo ja cadastrado!!\n");
		}else{
			b->vNum[b->TLV] = b->cod_vol;
			printf("Digite o nome do Voluntario: ");
			fflush(stdin);
			fgets(b->vVoluntario[b->TLV], sizeof(b->vVoluntario[b->TLV]), stdin);
			b->TLV++;
		}
		if(b->TLV<TF_VOL){
			do{
				verificar = 0;
				printf("\nCodigo do Voluntario: ");
				fflush(stdin);
				if(scanf("%d", &b->cod_vol) != 1){
					printf("\n--Codigo Invalido!!--\n");
					verificar = 1;
				}
			}while(verificar != 0);
		}
		
	}
	printf("Vetor Atualizado: ");
	    for (i = 0; i < b->TLV; i++) {
	        printf("%d ", b->vNum[i]);
	    }
}

void cadastrarEmpresa(struct lista *b){
	int i, pos, verificar;
	
	printf("\n\n---Cadastrar Empresa---\n\n");
	printf("Para finalizar digite '0' no campo codigo.");
	
	do{
		verificar = 0;
		printf("\nCodigo da Empresa: ");
		fflush(stdin);
		if(scanf("%d", &b->cod_emp) != 1){
			printf("\n--Codigo Invalido!!--\n");
			verificar = 1;
		}
	}while(verificar != 0);
	
	while(b->cod_emp > 0 && b->TLE != TF_EMP){
		pos = 0;
		while(pos < b->TLE && b->cod_emp != b->vCod[pos]){
			pos++;
		}
		if(pos < b->TLE){
			printf("\nCodigo ja cadastrado!!\n");
		}else{
			b->vCod[b->TLE] = b->cod_emp;
			printf("Digite o nome da Empresa: ");
			fflush(stdin);
			fgets(b->vEmpresa[b->TLE], sizeof(b->vEmpresa[b->TLE]), stdin);
			b->TLE++;
		}
		if(b->TLE<TF_EMP){
			do{
				verificar = 0;
				printf("\nCodigo da Empresa: ");
				fflush(stdin);
				if(scanf("%d", &b->cod_emp) != 1){
					printf("\n--Codigo Invalido!!--\n");
					verificar = 1;
				}
			}while(verificar != 0);
		}
		
	}
}

void cadastrarProjeto(struct lista *b){
	int i, pos, verificar;
	
	printf("\n\n---Cadastrar Projetos---\n\n");
	printf("Para finalizar digite '0' no campo codigo->");
	do{
		verificar = 0;
		printf("\nCodigo do Projeto: ");
		fflush(stdin);
		if(scanf("%d", &b->cod_proj) != 1){
			printf("\n--Codigo Invalido!!--\n");
			verificar = 1;
		}
	}while(verificar != 0);
	
	while(b->cod_proj > 0 && b->TLP != TF_PROJ){
		pos = 0;
		while(pos < b->TLP && b->cod_proj != b->vProj[pos]){
			pos++;
		}
		if(pos < b->TLP){
			printf("\nCodigo ja cadastrado!!\n");
		}else{
			b->vProj[b->TLP] = b->cod_proj;
			printf("Digite o nome para o Projeto: ");
			fflush(stdin);
			fgets(b->vDescricao[b->TLP], sizeof(b->vDescricao[b->TLP]), stdin);
			b->TLP++;
		}
		if(b->TLP<TF_PROJ){
			do{
				verificar = 0;
				printf("\nCodigo do Projeto: ");
				fflush(stdin);
				if(scanf("%d", &b->cod_proj) != 1){
					printf("\n--Codigo Invalido!!--\n");
					verificar = 1;
				}
			}while(verificar != 0);
		}
		
	}
}

void exclusaoVoluntario(struct lista *b){
	int i, j, pos, verificar, verificarVolExis;
	
	printf("\n\n---Excluir Voluntario---\n\n");
	printf("Para finalizar digite '0' no campo codigo.");
	do{
		// Verificar se o codigo é int
		do{
			verificar = 0;
			printf("\nDigite o Codigo do Voluntario: ");
			fflush(stdin);
			if(scanf("%d", &pos) != 1){
				printf("\n--Codigo Invalido!!--\n\n");
				verificar = 1;
			}
		}while(verificar != 0);
		
		// Verificar se o voluntario existe
		verificarVolExis = 0;
		
		for(i=0;i<b->TLV;i++){
			if(b->vNum[i]==pos){
				// Verifica se existe horas registradas no voluntario
				for(j=0;j<b->TLR;j++){
					if(pos == b->vRelat[j]){
						printf("\nNao e impossivel excluir este voluntario pois existem horas registradas.\n");
						verificarVolExis = 1;
						verificar = 1;
						break;
					}
				}
				// Remanejar codigo de voluntario
				if(verificar == 0){
					for(j = i; j < b->TLV - 1; j++){
						b->vNum[j] = b->vNum[j+1];
						strcpy(b->vVoluntario[j], b->vVoluntario[j + 1]);
					}
					b->TLV--;
					verificarVolExis = 1;
					printf("\nVoluntario excluido com sucesso!!\n");
					break;
				}
			}
		}
		if(!verificarVolExis && pos !=0){
			printf("\n--Codigo nao existe--\n\n");
		}
		
	}while(pos != 0);
	
}

void exclusaoEmpresa(struct lista *b){
	int i, j, pos, verificar, verificarEmpExis;
	
	printf("\n\n---Excluir Empresa---\n\n");
	printf("Para finalizar digite '0' no campo codigo.");
	do{
		// Verificar se o codigo é int
		do{
			verificar = 0;
			printf("\nDigite o Codigo da Empresa: ");
			fflush(stdin);
			if(scanf("%d", &pos) != 1){
				printf("\n--Codigo Invalido!!--\n\n");
				verificar = 1;
			}
		}while(verificar != 0);
		
		// Verificar se a empresa existe
		verificarEmpExis = 0;
		
		for(i=0;i<b->TLE;i++){
			if(b->vCod[i]==pos){
				// Verifica se existe horas registradas na empresa
				for(j=0;j<b->TLR;j++){
					if(pos == b->vRelat[j]){
						printf("\nNao e impossivel excluir esta empresa pois existem horas registradas.\n");
						verificarEmpExis = 1;
						verificar = 1;
						break;
					}
				}
				// Remanejar codigo de voluntario
				if(verificar == 0){
					for(j = i; j < b->TLE - 1; j++){
						b->vCod[j] = b->vCod[j+1];
						strcpy(b->vEmpresa[j], b->vEmpresa[j + 1]);
					}
					b->TLE--;
					verificarEmpExis = 1;
					printf("\nEmpresa excluida com sucesso!!\n");
					break;
				}
			}
		}
		if(!verificarEmpExis && pos !=0){
			printf("\n--Codigo nao existe--\n\n");
		}
		
	}while(pos != 0);
}

void exclusaoProjeto(struct lista *b){
	int i, j, pos, verificar, verificarProjExis;
	
	printf("\n\n---Excluir Projeto---\n\n");
	printf("Para finalizar digite '0' no campo codigo.");
	
	do{
		// Verificar se o codigo é int
		do{
			verificar = 0;
			printf("\nDigite o Codigo do Projeto: ");
			fflush(stdin);
			if(scanf("%d", &pos) != 1){
				printf("\n--Codigo Invalido!!--\n\n");
				verificar = 1;
			}
		}while(verificar != 0);
		
		// Verificar se o projeto existe
		verificarProjExis = 0;
		
		for(i=0;i<b->TLP;i++){
			// Se sim
			if(b->vProj[i]==pos){
				// Verifica se existe horas registradas no projeto
				for(j=0;j<b->TLR;j++){
					if(pos == b->vRelat[j]){
						printf("\nNao e impossivel excluir este projeto pois existem horas registradas.\n");
						verificarProjExis = 1;
						verificar = 1;
						break;
					}
				}
				// Remanejar codigo de voluntario
				if(verificar == 0){
					for(j = i; j < b->TLP - 1; j++){
						b->vProj[j] = b->vProj[j+1];
						strcpy(b->vDescricao[j], b->vDescricao[j + 1]);
					}
					b->TLP--;
					verificarProjExis = 1;
					printf("\nVoluntario excluido com sucesso!!\n");
					break;
				}
			}
		}
		// Se não
		if(!verificarProjExis && pos !=0){
			printf("\n--Codigo nao existe--\n\n");
		}
		
	}while(pos != 0);
}

void lancamento (struct lista *b){
	int i, verificar, verificarSeExiste;
	
	printf("\n\n---Lancamento de Horas---\n");
	printf("\nPara finalizar digite '0' no campo codigo.");
	do{
		// Verificar se o codigo é int
		do{
			do{
				verificar = 0;
				printf("\nDigite o codigo do Voluntario: ");
				fflush(stdin);
				if(scanf("%d", &b->cod_vol) != 1){
					printf("\n--Codigo Invalido!!--\n\n");
					verificar = 1;
				}
			}while(verificar != 0);
			
			// Verificar se o codigo existe
			
			verificarSeExiste = 0;
			for(i=0;i<b->TLV;i++){
				// Se sim
				if(b->vNum[i]==b->cod_vol){
					verificarSeExiste = 1;
				}
			}
			// Se não
			if(!verificarSeExiste && b->cod_vol !=0){
				printf("\n--Codigo nao existe!!--\n\n");
				verificar = 0;
			}
		}while(verificarSeExiste == 0 && b->cod_vol != 0);
		if(b->cod_vol == 0){
			break;
		}
	    
	    // Verificar se o codigo é int
		do{
			do{
				verificar = 0;
				printf("\nDigite o codigo da Empresa: ");
				fflush(stdin);
				if(scanf("%d", &b->cod_emp) != 1){
					printf("\n--Codigo Invalido!!--\n\n");
					verificar = 1;
				}
			}while(verificar != 0);
			
			// Verificar se o codigo existe
			
			verificarSeExiste = 0;
			for(i=0;i<b->TLE;i++){
				// Se sim
				if(b->vCod[i]==b->cod_emp){
					verificarSeExiste = 1;
				}
			}
			// Se não
			if(!verificarSeExiste && b->cod_emp !=0){
				printf("\n--Codigo nao existe!!--\n\n");
				verificar = 0;
			}
		}while(verificarSeExiste == 0 && b->cod_emp != 0);
		if(b->cod_emp == 0){
			break;
		}
	
	    // Verificar se o codigo é int
		do{
			do{
				verificar = 0;
				printf("\nDigite o codigo do Projeto: ");
				fflush(stdin);
				if(scanf("%d", &b->cod_proj) != 1){
					printf("\n--Codigo Invalido!!--\n\n");
					verificar = 1;
				}
			}while(verificar != 0);
			
			// Verificar se o codigo existe
			
			verificarSeExiste = 0;
			for(i=0;i<b->TLP;i++){
				// Se sim
				if(b->vProj[i]==b->cod_proj){
					verificarSeExiste = 1;
				}
			}
			// Se não
			if(!verificarSeExiste && b->cod_proj !=0){
				printf("\n--Codigo nao existe!!--\n\n");
				verificar = 0;
			}
		}while(verificarSeExiste == 0 && b->cod_proj != 0);
		if(b->cod_proj == 0){
			break;
		}
		
		do{
			verificar = 0;
			printf("\nDigite a quantidade de horas: ");
			fflush(stdin);
			if(scanf("%d", &b->cod_horas) != 1){
				printf("\n--Codigo Invalido!!--\n\n");
				verificar = 1;
			}
		}while(verificar != 0);
		
		b->vHoras[b->TLH] = b->cod_horas;
		b->TLH++;
		printf("\n\nHoras registradas com sucesso!!\n\n");
		
		b->vRelat[b->TLR] = b->cod_vol;
		b->TLR++;
		b->vRelat[b->TLR] = b->cod_emp;
		b->TLR++;
		b->vRelat[b->TLR] = b->cod_proj;
		b->TLR++;
		b->vRelat[b->TLR] = b->cod_horas;
		b->TLR++;


	}while(verificar ==0);
	
}

void relatorioVol(struct lista *b){
	int i, pos, verificar, verificarSeExiste, cont, somarhr = 0;
	
	printf("\nPara finalizar digite '0' no campo codigo.");
    do{
		do{
			verificar = 0;
			printf("\nDigite o codigo do Voluntario: ");
			fflush(stdin);
			if(scanf("%d", &pos) != 1){
				printf("\n--Codigo Invalido!!--\n\n");
				verificar = 1;
			}
		}while(verificar != 0);
		
		// Verificar se o codigo existe
		
		verificarSeExiste = 0;
		for(i=0;i<b->TLV;i++){
			// Se sim
			if(b->vNum[i]==pos){
				verificarSeExiste = 1;
				break;
			}
		}
		// Se não
		if(!verificarSeExiste && pos !=0){
			printf("\n--Codigo nao existe!!--\n\n");
			verificar = 0;
		}
	}while(verificarSeExiste == 0 && pos != 0);
	
	for(i=0;i<b->TLR;i+=4){
		if(b->vRelat[i]==pos){
			somarhr += b->vRelat[i+3];
		}
	}
	for(i=0;i<b->TLV;i++){
		if(b->vNum[i] == pos){
			printf("\n\n---Total Horas Registradas---\n");
			printf("\n[%d] - %s: %d", b->vNum[i], b->vVoluntario[i], somarhr);
			break;
		}
	}

}

void relatorioEmp (struct lista *b){
	int i, pos, verificar, verificarSeExiste, cont, somarhr = 0;
	
	printf("\nPara finalizar digite '0' no campo codigo.");
    do{
		do{
			verificar = 0;
			printf("\nDigite o codigo da Empresa: ");
			fflush(stdin);
			if(scanf("%d", &pos) != 1){
				printf("\n--Codigo Invalido!!--\n\n");
				verificar = 1;
			}
		}while(verificar != 0);
		
		// Verificar se o codigo existe
		
		verificarSeExiste = 0;
		for(i=0;i<b->TLE;i++){
			// Se sim
			if(b->vCod[i]==pos){
				verificarSeExiste = 1;
				break;
			}
		}
		// Se não
		if(!verificarSeExiste && pos !=0){
			printf("\n--Codigo nao existe!!--\n\n");
			verificar = 0;
		}
	}while(verificarSeExiste == 0 && pos != 0);
	
	for(i=1;i<b->TLR;i+=4){
		if(b->vRelat[i]==pos){
			somarhr += b->vRelat[i+2];
		}
	}
	for(i=0;i<b->TLE;i++){
		if(b->vCod[i] == pos){
			printf("\n\n---Total Horas Registradas---\n");
			printf("\n[%d] - %s: %d", b->vCod[i], b->vEmpresa[i], somarhr);
			break;
		}
	}
}

void relatorioProj (struct lista *b){
	int i, pos, verificar, verificarSeExiste, cont, somarhr = 0;
	
	printf("\nPara finalizar digite '0' no campo codigo.");
    do{
		do{
			verificar = 0;
			printf("\nDigite o codigo do Projeto: ");
			fflush(stdin);
			if(scanf("%d", &pos) != 1){
				printf("\n--Codigo Invalido!!--\n\n");
				verificar = 1;
			}
		}while(verificar != 0);
		
		// Verificar se o codigo existe
		
		verificarSeExiste = 0;
		for(i=0;i<b->TLP;i++){
			// Se sim
			if(b->vProj[i]==pos){
				verificarSeExiste = 1;
				break;
			}
		}
		// Se não
		if(!verificarSeExiste && pos !=0){
			printf("\n--Codigo nao existe!!--\n\n");
			verificar = 0;
		}
	}while(verificarSeExiste == 0 && pos != 0);
	
	for(i=2;i<b->TLR;i+=4){
		if(b->vRelat[i]==pos){
			somarhr += b->vRelat[i+1];
		}
	}
	for(i=0;i<b->TLP;i++){
		if(b->vProj[i] == pos){
			printf("\n\n---Total Horas Registradas---\n");
			printf("\n[%d] - %s: %d", b->vProj[i], b->vDescricao[i], somarhr);
			break;
		}
	}
	
}

void relatorioComp(struct lista *b){
	int i, j;
	
	printf("\n\n---Relatorio Completo---\n");
	for(i=0;i<b->TLR;i++){
		
		printf("Voluntario: [%d]", b->vRelat[i]);
		for(j=0; j<b->TLV; j++){
			if(b->vRelat[i]==b->vNum[j]){
				printf("-%s", b->vVoluntario[j]);
			}
		}
		i++;
		printf("Empresa:    [%d]", b->vRelat[i]);
		for(j=0; j<b->TLE; j++){
			if(b->vRelat[i]==b->vCod[j]){
				printf("-%s", b->vEmpresa[j]);
			}
		}
		i++;
		printf("Projeto:    [%d]", b->vRelat[i]);
		for(j=0; j<b->TLP; j++){
			if(b->vRelat[i]==b->vProj[j]){
				printf("-%s", b->vDescricao[j]);
			}
		}
		i++;
		printf("- %d Horas -", b->vRelat[i]);
		printf("\n\n");
		
	}
	
}

int menuGerenciar(){
	int opcaoGerenciar, verificar;
	
	do{
		do{
			verificar = 0;
			printf("\n\n---Sistema de Gerenciamento ONGADAPV---\n");
			printf("\n1 - Cadastrar\n");
			printf("2 - Exclusao\n");
			printf("3 - Lancamento\n");
			printf("4 - Relatorio\n");
			printf("0 - Sair\n\n");
			fflush(stdin);
			if(scanf("%d", &opcaoGerenciar) != 1){
				printf("\n- Opcao Invalida -\n");
				verificar = 1;
			}
		}while(verificar != 0);
			if(opcaoGerenciar > 4 || opcaoGerenciar < 0){
				printf("\n- Opcao Invalida -\n");
			}else{
				break;
			};
	
	
	}while(opcaoGerenciar != 0);
	return opcaoGerenciar;
};

int menuCadastrar(){
	int opcaoCadastrar, verificar;
	
	do{
		do{
			verificar = 0;
			printf("\n\n---Sistema de Cadastro---\n");
			printf("\n1 - Cadastrar Voluntario\n");
			printf("2 - Cadastrar Empresa\n");
			printf("3 - Cadastrar Projeto\n");
			printf("0 - Sair\n\n");
			fflush(stdin);
			if(scanf("%d", &opcaoCadastrar) != 1){
				printf("\n- Opcao Invalida -\n");
				verificar = 1;
			}
		}while(verificar != 0);
		
		if(opcaoCadastrar > 3 || opcaoCadastrar < 0){
			printf("\n- Opcao Invalida -\n");
		}else{
			break;
		};
	}while(opcaoCadastrar != 0);
	return opcaoCadastrar;
}

int menuExclusao(){
	int opcaoExclusao, verificar;
	
	do{
		do{
			verificar = 0;
			printf("\n\n---Sistema de Exclusao---\n");
			printf("\n1 - Excluir Voluntario\n");
			printf("2 - Excluir Empresa\n");
			printf("3 - Excluir Projeto\n");
			printf("0 - Sair\n\n");
			fflush(stdin);
			if(scanf("%d", &opcaoExclusao) != 1){
				printf("\n- Opcao Invalida -\n");
				verificar = 1;
			}
		}while(verificar != 0);
		
		
		if(opcaoExclusao > 3 || opcaoExclusao < 0){
			printf("\n- Opcao Invalida -\n");
		}else{
			break;
		};
	}while(opcaoExclusao != 0);
	return opcaoExclusao;
}

int menuRelatorio(){
	int opcaoRelatorio, verificar;
	
	do{
		do{
			verificar = 0;
			printf("\n\n---Relatorios---\n");
			printf("\n1 - Relatorio por Voluntario\n");
		    printf("2 - Relatorio por Empresa\n");
		    printf("3 - Relatorio por Projeto\n");
		    printf("4 - Relatorio completo\n");
		    printf("0 - Finalizar\n\n");
		    fflush(stdin);
			if(scanf("%d", &opcaoRelatorio) != 1){
				printf("\n--Codigo Invalido!!--\n");
				verificar = 1;
			}
		}while(verificar != 0);
		
		if(opcaoRelatorio > 4 || opcaoRelatorio < 0){
				printf("\n- Opcao Invalida -\n");
		}else{
			break;
		};
	}while(opcaoRelatorio != 0);
	return opcaoRelatorio;
}

int main(){
	struct lista b;
	int opcaoGerenciar, opcaoCadastrar, opcaoExclusao, opcaoRelatorio;
	
	
	do{
		opcaoGerenciar = menuGerenciar();
		switch(opcaoGerenciar){
			case 1:
				do{
					opcaoCadastrar = menuCadastrar();
				
					switch(opcaoCadastrar){
						case 1:
							cadastrarVoluntario(&b);
							break;
							
						case 2:
							cadastrarEmpresa(&b);
							break;
							
						case 3:
							cadastrarProjeto(&b);
							break;
					}
					
				}while(opcaoCadastrar != 0);
				break;
				
			case 2:
				do{
					opcaoExclusao = menuExclusao();
					switch(opcaoExclusao){
						case 1:
							exclusaoVoluntario(&b);
							break;
							
						case 2:
							exclusaoEmpresa(&b);
							break;
							
						case 3:
							exclusaoProjeto(&b);
							break;
					}
				
				}while(opcaoExclusao != 0);
				break;
			
			case 3:
				lancamento (&b);
				break;
				
			case 4:
				do{
					opcaoRelatorio = menuRelatorio();
					switch(opcaoRelatorio){
						case 1:
							relatorioVol(&b);
							break;
						case 2:
							relatorioEmp(&b);
							break;
						case 3:
							relatorioProj(&b);
							break;
						case 4:
							relatorioComp(&b);
							break;
							
							
					}
					
				}while(opcaoRelatorio != 0);
				
				
		}
	}while(opcaoGerenciar != 0);
	printf("--Programa finalizado!!--");
}
