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
       
    for(i=0;i<5;i++){
        char auxnome[42];
        int aux;
        aux == jogador[0].pontos;
        auxnome == jogador[0].nome;
        for(i=1;i<4;i++){
            if(jogador[i].pontos < jogador[i-1].pontos){
                aux = jogador[i].pontos;
                auxnome = jogador[i].nome;
                jogador[i].pontos = jogador[i-1].pontos;
                jogador[i].nome = jogador[i-1].nome;
            }
        }
    }

    printf("\n");
    for(i=0;i<5;i++){
        printf("%s fez %d gols\n",jogador[i].nome,jogador[i].pontos);
    }

    return 0;
}