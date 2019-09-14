#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LINHA 4
#define COLUNA 6


void lin(){
	printf("##########################");
}

                                                

int main(){
	setlocale(LC_ALL, "");
	int op, op2;
	int x, y;
	int t = 0;
	int i = 0 ;
	int q = 1;
	int k = 1;
	int j = 1;
	int a = 1;
	int l = 1;
	int b = 0;
	int v = 0;
	int f, z;
	int media = 0;
	int lista[LINHA][COLUNA];	
	do 
	{
		system("cls");
		printf("\n");
		lin();
		printf("\n\tMenu\n");
		lin();
		printf("\n");
		printf("1. Preencher Vendas");
		printf("\n2. Exibir Vendas");
		printf("\n3. Média de Vendas");
		printf("\n0. Saír");
		printf("\n\nEscolha uma opção: ");
		scanf("%i", &op);
		fflush(stdin);
		
		switch(op){
			case 1: 
				system("cls");
				if(b < (LINHA*COLUNA)) {
					for (x=0; x < LINHA; x++) {
						for(y=0; y < COLUNA; y++) {
						printf("\nPreencha as vendas do dia %d: R$ ", k++);
						scanf("%d", &lista[x][y]);
						fflush(stdin);
											
						}
					}
				system("cls");
				lin(), lin();
				printf("\n\t\tVendas cadastradas\n");
				lin(), lin();
				printf("\n\n");
				system("pause");
				}else{
					printf("\n\nValores já cadastrado!\n");
					printf("\nDeseja fazer o recadastro dos valores?\n\n 1. Sim\n 2. Não\n\n Escolha uma opção: ");
					scanf("%d", &op2);
					switch(op2){
						case 1 : 
							system("cls");
							for (x=0; x < LINHA; x++) {
								for(y=0; y < COLUNA; y++) {
								printf("Preencha os valores do dia %d: R$  ", a++);
								scanf("%d", &lista[x][y]);
								fflush(stdin);
								
							
								}
							}
							l++;
							v=3;
							
							break;
						case 2 : 
							break;
						default : 
							system("cls");
							printf("\n\nEscolha uma opção válida!\n\n");
				system("pause");
					}
				}
				
				t++;
				b = LINHA*COLUNA;			
				q = 0;
				break;
			case 2: 
				system("cls");
				if(t < 1){
					
					printf("\n\nNenhum valor cadastrado!\n\n");
					}else{
					for (x=0; x < LINHA; x++){
						for(y=0; y < COLUNA; y++){
						if(l<1){
							printf("\nDia %d: R$ %2.2d,00", j++ , lista[x][y]);
							printf("\n\n");
						}else{
							if(l <= (LINHA*COLUNA)){
								printf("\nDia %d: R$ %2.2d,00", l++ , lista[x][y]);
								printf("\n\n");
							}
						}
		
		}
			
	}

				}
				system("pause");
				break;
			case 3 : 
				system("cls");
				if(q < 1){
					for (x=0; x< LINHA; x++){
						for(y=0; y < COLUNA; y++){
						  		if(v<1){
								  media = media + lista[x][y];
								}else{
									media = media + lista[x][y];
									z = media - media;
									f = z + lista[x][y];								
									
								}
						}
					}
					printf("Média das vendas: R$  %.2d,00\n\n", media/(LINHA*COLUNA));
					i++;
					}else{		
						printf("\n\nNenhum valor cadastrado!\n\n");
				}
				system("pause");
				break;
			case 0 : 
				exit(0);
			default: 
				system("cls");
				printf("\n\nEscolha uma opção válida!\n\n");
				system("pause");}		
	}while(op);
 
	
	
	
	
	return 0;
}
