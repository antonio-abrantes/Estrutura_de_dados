// Arquivo teste.h
#define TAMANHO 5

/* Com as variaveis inicio e fim definidas no arquivo de cabe�alho 
fora da struct, ficar� mais claro e manipulavel o controle da fila*/

extern int inicio, fim; //Variaveis globais

typedef struct filme{
    char valor[20];
}Filme;

Filme filmes[TAMANHO];

/* Todo o vetor � referenciado por um unico ponteiro, 
desta forma, as modificacoes n�o v�o precisar de retorno. */
void zerar(Filme *f, int idx);
void menu();
void adicionar(Filme *f);
void retirarFila(Filme *f);
void retirarPilha(Filme *f);
void imprimir(Filme *f);