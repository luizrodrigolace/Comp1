#include<stdio.h>
#include<string.h>
typedef struct _JOGADOR {
    int pontos;
    char nome[42];
} JOGADOR;

int main(void){
    JOGADOR jogador[6];
    int i;
    for(i=0;i<5;i++){
        scanf("%s",jogador[i].nome);
        scanf("%d",&jogador[i].pontos);
    }
    printf("\n");
    for(i=0;i<5;i++){
        printf("%s fez %d gols\n",jogador[i].nome,jogador[i].pontos);
    }
    


    return 0;
}