#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
	int x, y;
	struct ponto *proximo;
} t_ponto;

int main(int argc, char** argv)
{
	int resp;
	t_ponto *ini_ponto;
	t_ponto *proximo_ponto;
	
	ini_ponto = (t_ponto*)malloc(sizeof(t_ponto));
	if(ini_ponto == NULL)
		exit(1);
	proximo_ponto = ini_ponto;
	
	while(1)
	{
		printf("Digite o x: ");
		scanf("%d", &proximo_ponto->x);
		printf("Digite o y: ");
		scanf("%d", &proximo_ponto->y);
		printf("Deseja continuar? 1 - SIM ou 2 - NAO: ");
		scanf("%d", &resp);
		if(resp == 1){
			proximo_ponto-> proximo = (t_ponto *)malloc((sizeof(t_ponto)));
			proximo_ponto = proximo_ponto->proximo;
		}else
			break;
	}
	proximo_ponto->proximo = NULL;
	proximo_ponto = ini_ponto;
	
	printf("\n");
	while(proximo_ponto != NULL)
	{
		printf("x: %d, y: %d  ", proximo_ponto->x, proximo_ponto->y);
		proximo_ponto = proximo_ponto->proximo;
	}
	
	
	//printf("TAMANHO: %d", sizeof(vet)/4);

	return 0;
}
