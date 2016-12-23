#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv)
{
	char resposta[20], nome[30];
	int resp, operacao = 0, num;
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	system("cls");
	
	printf("Posso tentar adivinhar sua idade %s?\n", nome);
	printf("Digite 1 para SIM ou 2 para NAO\nOpcao: ");
	scanf("%d", &resp);
	if(resp == 2){
		exit(1);
	}else{
		printf("Vamos la %s...\nEscolha um numero de 1 a 9\n", nome);
		printf("Pensou? Entao digite ele: ");
		//scanf("%s", num);
		operacao = (5 * 2) + 5;
		operacao = operacao * 50;
		printf("Este ano voce ja fez anivesario?\n");
		printf("Digite 1 para SIM ou 2 para NAO\nOpcao: ");
		scanf("%d", &resp);
		if(resp == 1){
			operacao += 1767;
		}else if(resp == 2){
			operacao += 1766;
		}
		
		operacao -= 1981;
		printf("Voce tem %d %s\n", operacao, nome );
		
	}
	
	
	
	return 0;
}