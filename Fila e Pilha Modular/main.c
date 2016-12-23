#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "teste.h"

int inicio, fim;

int main(){
    
    zerar(filmes, 0);
    
    int opcao = 0;
    inicio = 0;
    fim = 0;

    while(opcao != 4){
    	system("cls");
        menu();
        scanf("%d", &opcao);
        
        switch(opcao){
        case 1:
            printf("Digite a string: ");
            adicionar(filmes);      		
            break;
        case 2:        	
            retirarFila(filmes);
            getch();
            break;
        case 3:
            imprimir(filmes);
            getch();
            break;
        case 4:
        	printf("Encerrando o sistema\n");
        	break;
        default:
        	printf("Opcao invalida!\n");
        	getch();
        	break;		              
        }
    }
    return 0;
}