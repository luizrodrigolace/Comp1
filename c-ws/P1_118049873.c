/*Luiz Rodrigo Lacé Rodrigues 118049873*/
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


    
	return 0;
}