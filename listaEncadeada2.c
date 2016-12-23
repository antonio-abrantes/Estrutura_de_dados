#include <stdio.h>
#include <stdlib.h>

typedef struct No{
	int conteudo;
	struct No *prox;
} no;

int main(int argc, char** argv)
{
	int resp, i;
	no *inicio, *proximo;
	
	inicio = (no *)malloc(sizeof(no));
	if(inicio == NULL){
		exit(1);
	}
	
	proximo = inicio;

	i = 0;
	while(1)
	{
		i++;
		printf("ITEM %d: ", i);
		scanf("%d", &proximo->conteudo);
		printf("1 CONTINUAR / 2 SAIR: ");
		scanf("%d", &resp);
		if(resp == 1){
			proximo->prox = (no *)malloc(sizeof(no));	
			proximo = proximo->prox;
		}else{
			break;
		}
	}
	
	proximo->prox = NULL;
	proximo = inicio;
	
	while(1)
	{
		if(i == 0){
			printf("FIM DA FILA\n");
			break;
		}
		system("CLS");
		printf("1 - Exibir fila\n2 - Desenfileirar\n");
		printf("Digite a opcao: ");
		scanf("%d", &resp);
		
		if(resp == 2){
		proximo = proximo->prox;		
		
		no *temp;
		temp = proximo;		

		inicio = temp;
		
			while(proximo != NULL){
				printf("No 2: %d\n", proximo->conteudo);
				proximo = proximo->prox;
			}
			
			//printf("%d\n", proximo);
			//proximo->prox = NULL;
			proximo = inicio;
			i--;
			system("pause");

		}else if(resp == 1){
			while(proximo != NULL){
				printf("No 2: %d\n", proximo->conteudo);
				proximo = proximo->prox;
			}
			proximo = inicio;
			system("pause");
		}else
		{
			break;
		}	
	}
	
	//printf("No 1: %d\n", proximo->conteudo);
	return 0;
}