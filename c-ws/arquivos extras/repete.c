#include <stdio.h>
#include <stdlib.h>
#include <time.h> /*time()*/
#include <string.h>
#include <unistd.h> /*fucao sleep*/
#include "molde.h"

int main(){
    while(1){
        char palavra[20], letra, palavraEscondida[20],tema[20],jogar,erradas[7];
        int a, i, escolha, vidas=6, cont, situacao;
    
        /*menu com as opcoes de tema para escolher*/
        printf("------------ JOGO DA FORCA ------------\n");
        printf("1 - Animais\n");
        printf("2 - Comidas\n");
        printf("3 - Profissões\n");
        printf("Escolha um tema para a palavra: ");
        scanf("%d",&escolha);
        

        /*direcionando qual tema vai aparecer durante o jogo*/
        if (escolha == 1){
            strcpy(tema,"Animais");
        }
        else if (escolha == 2){
            strcpy(tema,"Comidas");
        }
        else{
            strcpy(tema,"Profissoes");
        }

        strcpy(palavra,sorteioComida(escolha));
        
        /*preenchendo a palavraEscondida escondida com tracos*/
        for(a=0;a<strlen(palavra);a++){
            palavraEscondida[a] = '_';
        }
        getchar();

        /*comeca o loop de escolha de letras*/
        while(vidas>0 && situacao==0){
            system("clear");
            /*printf("%s\n",palavra);*/
            printf("Tema: %s.\n",tema);
            printf("A palavra possui %ld letras. \n",strlen(palavra));
            printf("Não possui as letras: %s\n",erradas);
            printf("Você possui %d vidas\n", vidas);
            boneco(vidas,situacao);
        
            /*digitar na palavraEscondida onde ficam as letras acertadas*/
            for(i=0; i<strlen(palavra); i++){
                if(palavraEscondida[i] == '\0'){
                    printf("_");
                }
                else{
                    printf("%c",palavraEscondida[i]);
                }
            }
            printf("\n\n");
            printf("Digite uma letra: ");
            letra = getchar();
            getchar();

            for(a=0; a<strlen(palavra);a++){
                if (palavra[a] == letra){
                    palavraEscondida[a] = letra;
                    cont++; /*para saber se acertou a letra*/
                }
            }

            if(cont == 0){
                printf("a palavra nao possui essa letra!\n");
                erradas[6-vidas] = letra;
                vidas -= 1;
                sleep(0.9);
            }

            if(cont>0){
                printf("A palavra possui essa letra\n");
                sleep(0.9);
            }

            if(vidas == 0){
                situacao=-1;
            }

            if(!strstr(palavraEscondida,palavra)==0){
                situacao=1;
            }

            cont = 0;
        }
        system("clear");

        if(situacao == 1){
            boneco(vidas,situacao);
            printf("Você se salvou!\n");
            printf("A palavra era: %s\n",palavra);
        }

        if(situacao == -1){
            boneco(vidas,situacao);
            printf("MORREU!\n");
            printf("A palavra era: %s\n",palavra);
        }

        /*situacao = 0;
        vidas = 6;*/
        strcat(erradas,"");
        printf("Deseja Jogar novamente? ");
        scanf("%c",&jogar);
        system("clear");
        if(jogar == 'N'){
            break;
        }

    }

    return 0;
}
