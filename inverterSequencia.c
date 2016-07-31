#include <stdio.h>

int main()
{	 
	int quant, i, temp, tam;
	
	scanf("%d", &quant);
	int vet[quant];	
	
	//tam = sizeof(vet) / sizeof(int);	-> Obter o tamanho do vetor	
	//printf("%d\n", tam);
	
	for(i = 0; i < quant; i++)
		scanf("%d", &vet[i]);	
	
	for(i = 0; i <= quant/2; i++){		
		temp = vet[i];
		vet[i] = vet[(quant -1) - i];
		vet[(quant -1) - i] = temp;
	}
			
	for(i = 0; i < quant; i++){
		printf("%d ", vet[i]);
	}
	
	return 0;
}