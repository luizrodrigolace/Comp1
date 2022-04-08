/* Luiz Rodrigo Lace Rodrigues - 118049873*/

/*Fiz um codigo onde vamos adicionando a quantidade que quisermos até inserir o digito N == 0,
  onde ele vai verificar que não queremos mais colocar "peso" e retornar uma mensagem para decolar. 
  Essa verificação é feita com a função malloc, que retorna um ponteiro do tipo NULL, mas
  o convertemos para char, visto que queremos alocar byte a byte. Caso exista memoria suficiente,
   nosso progama permite que coloquemos mais peso, caso contrario ele retorna "Sobrepeso!" e finaliza o programa. */

#include <stdio.h>
#include <stdlib.h>

int main (void){

    int N;
    char *disponivel;

    do{
        scanf("%d",&N);
        disponivel = (char *) malloc(N * sizeof(char));
        if(!disponivel){
            puts("Sobrepeso!");
            return 1;
        }
    }while(N!=0);

    puts("Pronto para decolar!");
    
    free(disponivel);
    return 0;
}