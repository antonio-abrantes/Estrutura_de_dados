#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct No{
	int conteudo;
	struct No *prox;   	
}no;

void exibir(no *PILHA);
	
no *aloca(){
	no *novo = (no*)malloc(sizeof(no));
	printf("Novo elemento: ");
	scanf("%d", &novo->conteudo);
	return novo;
}

void inicia(no *PILHA){
	PILHA->prox = NULL;
}

void entraPilha(no *PILHA){
	no *novo = aloca();
	novo->prox = NULL;
	if(PILHA->prox == NULL){
		PILHA->prox = novo;
	}else{
		no *temp = PILHA->prox;
		while(temp->prox != NULL)
		{
			temp = temp->prox;
		}
		temp->prox = novo;
	}
}

void entraInicio(no *PILHA){
	no *novo = aloca();
	no *velhaCabeca = PILHA->prox;
	PILHA->prox = novo;
	novo->prox = velhaCabeca;
}

no *retiraPilha(no *PILHA){
	if(PILHA->prox == NULL){
		exibir(PILHA);
		return NULL;
	}else{
		no *ultimo = PILHA->prox;
		no *penultimo = PILHA;
		while(ultimo->prox != NULL)
		{
			penultimo = ultimo;
			ultimo = ultimo->prox;
		}
		penultimo->prox = NULL;
		return ultimo;
	}
}

no *retiraInicio(no *PILHA){
	if(PILHA->prox == NULL){
		exibir(PILHA);
		return NULL;
	}else{
		no *temp = PILHA->prox;
		PILHA->prox = temp->prox;
		return temp;
	}
}

int main(int argc, char** argv)
{
	no *PILHA = (no*)malloc(sizeof(no));
	inicia(PILHA);
	
	entraPilha(PILHA);
	entraPilha(PILHA);
	entraPilha(PILHA);
	entraPilha(PILHA);
	exibir(PILHA);
	no *temp = retiraPilha(PILHA);
	printf("O numero %d sai...\n", temp->conteudo);
	exibir(PILHA);
	temp = retiraInicio(PILHA);
	printf("O numero %d sai...\n", temp->conteudo);
	exibir(PILHA);
	entraInicio(PILHA);
	exibir(PILHA);
	   	
	return 0;
}

void exibir(no *PILHA){
	if(PILHA->prox == NULL){
		printf("Pilha vazia...\n");
	}else{
		no *temp = PILHA->prox;
		printf("PILHA: ");
		while(temp != NULL)
		{
			printf("%2d", temp->conteudo);
			temp = temp->prox;
		}
		printf("\n");
	}
}