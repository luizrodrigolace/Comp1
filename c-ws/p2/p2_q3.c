/*Luiz Rodrigo Lacé Rodrigues - 118049873*/
/*por enquanto o programa lê a quantidade de numeros que quiser até um numero negativo ser lido
e depois imprime a lista encadeada*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NUMERO struct_NUMERO;

typedef struct NUMERO{
    int num;
    struct_NUMERO *prox;
}NUMERO;

NUMERO *inicio = NULL;
NUMERO *corrente = NULL;

/*funcao que insere dados numa lista*/

int Insere(int dado){
    NUMERO *p;
    p = (NUMERO *) malloc(sizeof(NUMERO));
    if (p==NULL){
        printf("Sem Memoria\n");
        return 0;
    }
    p->num = dado;
    p->prox = NULL;

    if (inicio==NULL){
        inicio = p;
    }

    else {
        p->prox = inicio;
        inicio  = p;
	}
    return 1;
}

/*funcao que imprime a lista*/
void imprime(){
    NUMERO *ptr;
    if (inicio == NULL){
        return;
    }

    ptr = inicio;
    while (ptr != NULL){
        printf("%d ",ptr->num);
        ptr = ptr->prox;
  }
}


int main (void){

    int num;

    do{
        scanf("%d",&num);
        Insere(num);
    }while(num>0);


    imprime();

    printf("\n");

    return 0;
}
