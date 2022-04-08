/*Luiz Rodrigo Lacé Rodrigues - 118049873*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NUMERO struct_NUMERO;

typedef struct NUMERO{
    int num;
    struct_NUMERO *num_prox;
}NUMERO;

NUMERO *num_head = NULL;

/*funcao que insere os numeros na lista*/
NUMERO *insere_numero(NUMERO *num_head,int num_novo){
    /*instanciando  ponteiro auxiliar*/
    NUMERO *num_alocado;

    /* alocando memoria*/
    num_alocado = (NUMERO *) malloc(sizeof(NUMERO));
    if(!num_alocado){
        printf("Erro na alocacao de memoria");
        return num_head;
    }

    /*Adicionando o numero no inicio na lista*/
    num_alocado->num = num_novo;
    num_alocado->num_prox = num_head;
    num_head  = num_alocado;
	

    return num_head;
}

/*funcao que imprime os numeros*/
void imprime_numeros(){
    NUMERO *aux;
    if (num_head == NULL){
        return;
    }
    aux = num_head;

    while (aux != NULL){
        printf("%d ",aux->num);
        aux = aux->num_prox;
    }
    printf("\n");
}

/*fucao que insere um numero dentro da lista ja montada*/
NUMERO *insere_meio(int x, int y, NUMERO *num_head){
   NUMERO *p, *q, *novo_num;
   novo_num = (NUMERO *) malloc(sizeof(NUMERO));
   novo_num->num = x;

    /*se o primeiro item da lista for nulo ou possuir o numero que queremos*/
   if(num_head==NULL || num_head->num == y){
       novo_num->num_prox = num_head;
       num_head = novo_num;
       return num_head;
   }

   p = num_head;
   q = num_head->num_prox;
   while (q != NULL && q->num != y) {
      p = q;
      q = q->num_prox;
   }
   novo_num->num_prox = q;
   p->num_prox = novo_num; 
   return num_head;
}

NUMERO *remover_num(int y, NUMERO *num_head){
    NUMERO *p, *q, *aux;

    if(num_head == NULL){
        return NULL;
    };

    if(num_head->num == y){
        aux = num_head;
        num_head = aux->num_prox; 
        free(aux);
        return num_head;
    };

    p = num_head;
    q = num_head->num_prox;
    while (q != NULL && q->num != y) {
        p = q;
        q = q->num_prox;
    }
    if (q != NULL) {
        p->num_prox = q->num_prox;
        free (q);
   }
   return num_head;
}

int main (void){
    int num, X, Y;
    char acao;

    /*adicionando os numeros na lista ate receber um numero negativo e
    nao adicionar mais*/
    while(1){
        scanf("%d",&num);
        if(num < 0){
            break;
        }
        else{
            num_head = insere_numero(num_head,num);
        }
    };

    /*escolhendo uma acao, X interrompe o loop e segue para imprimir a lista
    alterada ou nao*/
    while(1){
        scanf(" %c",&acao);
        if(acao == 'R'){
            scanf(" %d",&Y);
            num_head = remover_num(Y,num_head);
        }
        if(acao == 'I'){
            scanf(" %d",&Y);
            scanf(" %d",&X);
            num_head = insere_meio(X, Y, num_head);
        }
        if(acao == 'X'){
            break;
        }
    };
    
    imprime_numeros();


    return 0;
}