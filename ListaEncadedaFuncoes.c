#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct No{
	int conteudo;
	struct No *prox;   	
}no;

void exibir(no *LISTA);

int vazia(no *LISTA)
{
  if(LISTA->prox == NULL)
    return 1;
  else
    return 0;
}

no *aloca(){
	no *novo = (no*)malloc(sizeof(no));
	printf("Novo elemento: ");
	scanf("%d", &novo->conteudo);
	return novo;
}

void inicia(no *LISTA){
	LISTA->prox = NULL;
}

void incluiInicio(no *LISTA){
	no *novo = aloca(), *velhaCabeca;
	velhaCabeca = LISTA->prox;
	LISTA->prox = novo;
	novo->prox = velhaCabeca;
	
}

void incluiFinal(no *LISTA){
	no *novo = aloca();
	novo->prox = NULL;
	
	no *temp = LISTA->prox;
	while(temp->prox != NULL)
	{
		temp = temp->prox;
	}
	temp->prox = novo;
}

no *excluiInicio(no *LISTA){
	no *temp = LISTA->prox;
	LISTA->prox = temp->prox;
	
	return temp;
}

no *excluirFinal(no *LISTA){
	no *ultimo, *penultimo;
	ultimo = LISTA->prox;
	while(ultimo->prox != NULL)
	{
		penultimo = ultimo;
		ultimo = ultimo->prox;
	}	
	penultimo->prox = NULL;	
	return ultimo;
}

int main(int argc, char** argv)
{
	no *LISTA = (no*)malloc(sizeof(no));
	inicia(LISTA);
	
	incluiFinal(LISTA);
	incluiInicio(LISTA);
	incluiInicio(LISTA);
	incluiInicio(LISTA);
	exibir(LISTA); printf("\n");
	incluiFinal(LISTA);
	incluiFinal(LISTA);
	exibir(LISTA); printf("\nEXCLUIR PRIMEIRO\n");
	no *temp = excluiInicio(LISTA);
	printf("Item retirado: %d\n", temp->conteudo);
	exibir(LISTA); printf("\nEXCLUIR ULTIMO\n");
	temp = excluirFinal(LISTA);
	printf("Item retirado: %d\n", temp->conteudo);
	exibir(LISTA);
	
	free(LISTA);	
	
	return 0;
}

void exibir(no *LISTA){
	no *temp = LISTA->prox;
	while(temp != NULL)
	{
		printf("%2d", temp->conteudo);
		temp = temp->prox;
	}
}