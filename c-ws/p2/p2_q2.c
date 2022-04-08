/*Luiz Rodrigo Lacé Rodrigues - 118049873*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct PESSOA struct_PESSOA;
typedef struct PESSOA{
    char nome[50];
    char sexo;
    int idade;
    struct_PESSOA *p_prox;
}PESSOA;

int insere_pessoa(PESSOA *p_head, struct_PESSOA *p_novo) { 
    /*instanciando um ponteiro auxiliar*/
    PESSOA *aux, *p_alocado;
    aux = p_head;

    /*verificando se queremos colocar adicionar algo na lista que não seja nulo*/ 
    if(p_novo == NULL){
        return 1;
    }

    /*percorrendo até encontrar o ultimo elemento da lista*/
    while (aux->p_prox != NULL) {
        aux = aux->p_prox;
    }

    /* fazendo alocação de memoria como exigida no enunciado*/
    p_alocado = (PESSOA *) malloc(sizeof(PESSOA));
    strcpy(p_alocado->nome,p_novo->nome);
    p_alocado->sexo = p_novo->sexo;
    p_alocado->idade = p_novo->idade;

    /*colocando o p_alocado como o elemento final da lista*/
    aux->p_prox = p_alocado;


    /*garantindo que aponta pro nulo*/
    p_alocado->p_prox = NULL;


    return 0;
}

int main(void) {

    PESSOA *p_head, *p, pessoa1;

    p_head = NULL;

    if ((p = (PESSOA *) malloc(sizeof(PESSOA))) == NULL) {
        printf("Falta Memoria \n");
        return 1;
    }

    /* insere os 1os dados na lista */
    strcpy(p->nome, "Pessoa1");
    p->sexo = 'F';
    p->idade = 42;
    p->p_prox = NULL;

    p_head = p;

    /* cria novos dados */
    strcpy (pessoa1.nome, "Pessoa2");
    pessoa1.sexo = 'M';
    pessoa1.idade = 18;
    pessoa1.p_prox = NULL;

    insere_pessoa(p_head, &pessoa1);

    p = p_head;

    while (p != NULL) {
        printf("%s %c %d\n", p->nome, p->sexo, p->idade);
        p = p->p_prox;  
    }

    return 0;
}
