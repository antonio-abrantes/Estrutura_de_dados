#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10

int pilha[STACK_SIZE];
int topo;

void iniciliza(){
	topo = -1;
}

void empilha(int elemento){
	if(topo+1 < STACK_SIZE){
		topo++;
		pilha[topo] = elemento;
	}
}

int desempilha(){
	int aux = -1;
	if(topo > -1){
		aux = pilha[topo];
		topo--;
	}	
	return aux;
}

int main(int argc, char** argv)
{
	int i;
	iniciliza();
	
	empilha(2);
	empilha(3);
	empilha(4);
	empilha(5);
	
	if(topo >= 0){
		for(i = 0; i <= topo; i++){
			printf("%3d", pilha[i]);
		}
		printf("\n");
	}
	
	desempilha();
	desempilha();
	
	if(topo >= 0){
		for(i = 0; i <= topo; i++){
			printf("%3d", pilha[i]);
		}
		printf("\n");
	}
		
	return 0;
}