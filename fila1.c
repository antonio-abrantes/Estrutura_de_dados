#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct No{
	int conteudo;
	struct No *prox;   	
}no;
	
void exibir(no *FILA);	
	
no *aloca(){
	no *novo = (no*)malloc(sizeof(no));
	printf("Novo elemento: ");
	scanf("%d", &novo->conteudo);
	return novo;
}

void inicia(no *FILA){
	FILA->prox = NULL;
}

void entraFila(no *LISTA){
	no *novo = aloca();
	novo->prox = NULL;
	
	if(LISTA->prox == NULL){
		LISTA->prox = novo;
	}else{
		no *temp = LISTA->prox;
		while(temp->prox != NULL)
		{
			temp = temp->prox;
		}
		temp->prox = novo;
	}	
}

no *movimenta(no *FILA){
	no *temp = FILA->prox;
	FILA->prox = temp->prox;
	
	return temp;
}

void liberar(no *FILA){
	
  if(FILA->prox != NULL){
    no *proxNode,
        *atual;
        
    atual = FILA->prox;
    while(atual != NULL){
      proxNode = atual->prox;
      free(atual);
      atual = proxNode;
    }
  }
}

int main(int argc, char** argv)
{
	no *FILA = (no*)malloc(sizeof(no));
	inicia(FILA);

	exibir(FILA); printf("\n");
	entraFila(FILA);
	entraFila(FILA);
	entraFila(FILA);
	entraFila(FILA);
	//liberar(FILA);
	exibir(FILA); printf("\n");
	entraFila(FILA);
	entraFila(FILA);
	entraFila(FILA);
	entraFila(FILA);
	exibir(FILA);
	no *temp = movimenta(FILA);
	printf("\nRetira o %d\n", temp->conteudo);
	exibir(FILA);
	temp = movimenta(FILA);
	printf("\nRetira o %d\n", temp->conteudo);
	exibir(FILA);
	temp = movimenta(FILA);
	printf("\nRetira o %d\n", temp->conteudo);
	exibir(FILA);
	temp = movimenta(FILA);
	printf("\nRetira o %d\n", temp->conteudo);
	exibir(FILA);
	
	free(FILA);
	
	return 0;
}

void exibir(no *FILA){
	no *temp = FILA->prox;
	if(FILA->prox == NULL){
		printf("\nFila vazia...\n");
	}else{
		while(temp != NULL){
			printf("%2d", temp->conteudo);
			temp = temp->prox;
		}
	}
}