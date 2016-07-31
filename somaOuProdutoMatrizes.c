#include <stdio.h>

void matriz(int vet[3][3] ){
	
	int i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d", vet[i][j]);
			if(j < 2)
				printf(" ");
		}
		printf("\n");
	}
}

int main()
{	 
	int i, j, matA[3][3], matB[3][3], resul[3][3], acao;
	int lin, col;
	
	printf("Matriz A 3x3\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &matA[i][j]);
		}
	}
	col = j;
	
	printf("\nMatriz B 3x3\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &matB[i][j]);
		}
	}
	lin = i;
		
	printf("\nEscolha 1 para somar ou 2 para multiplicar: ");
	scanf("%d", &acao);
	
	//if para comar ou multiplicar as matrizes A e B
	if(acao == 1){ //Complexidade n2
		for(i = 0; i < 3; i++){
			for(j = 0; j < 3; j++){
				resul[i][j] = matA[i][j] + matB[i][j];
			}
		}
		matriz(resul);
	}else if(acao == 2){  // Complexidade n3
		if(lin == col){ //Verifica se é possivel calcular o produto da matriz...
		   	int d;
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					resul[i][j] = 0;
					for(d = 0; d < 3; d++){
						resul[i][j] = resul[i][j] + matA[i][d] * matB[d][j];
					}
				}
			}
			matriz(resul);
		}else{
			printf("Não é possivel calcular o produtos das matrizes\n");
		}
	}
		
	return 0;
}