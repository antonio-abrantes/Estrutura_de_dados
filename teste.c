#include <stdio.h>
#include <stdlib.h>

typedef struct No{
	int conteudo;
	struct No *prox;
} no;

void inicia(no *Lista){
	Lista->prox = NULL;
}

int vazia(no *LISTA)
{
	if(LISTA->prox == NULL)
		return 1;
	else
		return 0;
}


void exibe(no *LISTA)
{
	if(vazia(LISTA)){
		printf("Lista vazia!\n\n");
		return ;
	}
	
	no *tmp;
	tmp = LISTA->prox;
	
	while( tmp != NULL){
		printf("%5d", tmp->conteudo);
		tmp = tmp->prox;
	}
	printf("\n\n");
}

no *retirarUltimo(no *LISTA){
	
	no *ultimo, *penultimo;
	ultimo = LISTA->prox;
	
	while(ultimo->prox != NULL)
	{
		penultimo = ultimo;
		ultimo = ultimo->prox;
	}
	
	penultimo->prox = NULL;
	printf("\n%d\n\n", ultimo->conteudo);
	return ultimo;
}

int main(int argc, char** argv)
{
	no *LISTA = (no *)malloc(sizeof(no));
	inicia(LISTA);
	no *inicio;
	
	
		
	/*no *novo1 = (no *) malloc(sizeof(no));
	novo1->conteudo = 20;  //Atribui novo elemento
	
	no *velhaCabeca = LISTA; //Guarda a cabeça da lista
	LISTA = novo1; //Substitui a lista atual pela nova
	LISTA->prox = velhaCabeca; //Atribui a lista velha e proxima
	
	no *novo2 = (no *) malloc(sizeof(no));
	
	novo2->conteudo = 30;	
	velhaCabeca = LISTA;
	LISTA = novo2;
	LISTA->prox = velhaCabeca;
	
	no *novo3 = (no *) malloc(sizeof(no));
	
	novo3->conteudo = 40;
	velhaCabeca = LISTA;
	LISTA = novo3;
	LISTA->prox = velhaCabeca;
	
	
	while(LISTA != NULL){
		printf("%d ", LISTA->conteudo);
		LISTA = LISTA->prox;
    }	   	*/	
    	
	no *novo1 = (no *) malloc(sizeof(no));
	novo1->conteudo = 20;  //Atribui novo elemento
	no *velhaCabeca = LISTA->prox; //Guarda a cabeça da lista
	LISTA->prox = novo1; //Aponta para o novo elemento
	novo1->prox = velhaCabeca; //Aponta o novo elemento para a cabeça
	
	
	no *novo2 = (no *) malloc(sizeof(no)); //1º passo
	novo2->conteudo = 30;	
	velhaCabeca = LISTA->prox;	//2º passo
	LISTA->prox = novo2; //3º passo
	novo2->prox = velhaCabeca; //4º passo
	
	no *novo3 = (no *) malloc(sizeof(no));	
	novo3->conteudo = 40;
	velhaCabeca = LISTA->prox;
	LISTA->prox = novo3;
	novo3->prox = velhaCabeca;
	
	no *novo4 = (no *) malloc(sizeof(no));
	novo4->conteudo = 55;
	velhaCabeca = LISTA->prox;
	LISTA->prox = novo4;
	novo4->prox = velhaCabeca;
	
	//no *tmp = LISTA->prox;
	  //O proximo apos a cabeca é tmp->prox
	//LISTA->prox = tmp->prox; //
	
	inicio = LISTA;
	
	
	//printf("%d\n", tmp->conteudo);
	
	//inicio = LISTA;
	
	retirarUltimo(LISTA);
	
	//printf("MAIS UM");
	
	LISTA = inicio->prox;
	
	//printf("%d\n", LISTA->conteudo);
	
	while(LISTA != NULL){
		printf("%d\n", LISTA->conteudo);
		LISTA = LISTA->prox;
   }
   
   
   LISTA = inicio;
   retirarUltimo(LISTA);
   
	exibe(LISTA);
	
	return 0;
}










