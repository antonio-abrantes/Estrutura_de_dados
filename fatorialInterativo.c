#include <stdio.h>

//Modelo sem aplicação de recursividade
int main()
{	 
	int i, temp, quant, fatorial, resul;
	
	scanf("%d", &quant);
	fatorial = quant; // Atribui o valor para ser usado no segundo laço...
	
	printf("Primeira forma\n");
	temp = quant;
	for(i = quant; i > 1; i--){		
		resul = quant * (i-1);
		quant = resul;
	}	
	printf("%d", quant);
	
	printf("\n\nSegunda forma\n");
			
	resul = 1;
	for( ; fatorial >= 1; fatorial--){		
		resul *= fatorial;
	}
	printf("%d", resul);
	
	return 0;
}