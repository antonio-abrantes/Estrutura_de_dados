#include <stdio.h>
#include <stdlib.h>

void verifica(int vet[5][5]){
	int i, j, grau;
	for(i = 0; i < 5; i++){
		grau = 0;
		for(j = 0; j < 5; j++){
			if(vet[i][j] == 1){
				grau += 1;
			}
		}printf("O Vertice %d tem grau: %d\n",i, grau); 
	}
}

void mostrar_grafo(int vet[5][5]){
	char map_letra[] = "ABCDE";
	int i, j;
	for(i = 0; i < 5; i++){
		printf("Amigos de %c:\t", map_letra[i]);
		for(j = 0; j < 5; j++){
			if(vet[i][j] != -1){
				printf("%c\t", map_letra[vet[i][j]]);
			}
		}
		printf("\n"); 
	}
}

int completo(int vet[5][5]){
	int i, j;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(vet[i][j] == -1 && i != j){
				return 0;
			}
		}
	}
	return 1;
}


int main(int argc, char** argv)
{
	
	int vet[5][5] = { // A   B   C   D   E
						{2, -1, -1, -1, -1},//A 0
						{2, -1, -1, -1, -1},//B 1
						{0,  1,  3,  4, -1},//C 2
						{2,  4, -1, -1, -1},//D 3
						{2,  3, -1, -1, -1} //E 4
					//	 0   1   2   3   4	
					};
	
	//verifica(vet);
	mostrar_grafo(vet);
	
	if(completo(vet)){
		printf("Grafo completo\n");
	}else{
		printf("Grafo incompleto\n");
	}								
					
	
	return 0;
}