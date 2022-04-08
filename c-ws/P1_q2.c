/*Luiz Rodrigo Lacé Rodrigues 118049873*/


/*p1.a
Pseudocodigo

Selecionar casa
Caso tenha bomba na casa{
	numeros de 0 a 8 ou "Bomba, perdeu!"
Caso não tenha bomba na casa{
	Informar a quantidade de bomba nas casas ao redor
}
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (void){
/* 2 --------------*/
    char vetor1[1024], vetor2[1024];
    int j,k,i;
    scanf("%s", vetor1);
    scanf("%s",vetor2);
    for (i= strlen(vetor2)+3, j=strlen(vetor1), k=0 ; i>0 ; i--,j++,k++){
        
        vetor1[j] = vetor2[k];
    }
    printf("%s\n",vetor1);
/* fui adicionando os caracteres do vetor2 no final do vetor 1,
     não deu tempo de implementar o espaço */

    
	return 0;
}