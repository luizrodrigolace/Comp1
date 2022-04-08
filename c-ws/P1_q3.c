/*Luiz Rodrigo Lacé Rodrigues 118049873*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (void){
/* 3 --------------*/
/* tive dificuldade em inserir a string primeiro, mas inserindo o char primeiro
e depois verificando se ele está no vetor, dá certo, considerei o primeiro termo como 1.
Utilizei um contador para verificar a ocorrencia do char*/
    char vetor1[1024], letra1;
    int i;
    int contador = 0;
    scanf("%c",&letra1);
    scanf("%s",vetor1);
    for(i=0;i != strlen(vetor1);i++){
        if(vetor1[i] == letra1){
            printf("A primeira ocorrencia está na posição %d\n", i+1);
            contador +=1;
            break;
        }
    }
    if (contador == 0){
        printf("Não há ocorrencia.");
    }
	return 0;
}