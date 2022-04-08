#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> /*fucao sleep*/
#include "molde.h"

int main(){
    char palavra[20], letra, palavraEscondida[20],tema[20],jogar;
    int a, i, vidas=6, cont, situacao;
    char escolha;
    char opcaoSelecionada;
    char erradas[7];/*string com as letras erradas*/

    printf("\n");
    printf("  ------------------------------- JOGO DA FORCA -------------------------------\n");
    printf("\n");
    printf("  Você deseja ler as regras do Jogo da Forca?(S/N) ");
    scanf("%c",&opcaoSelecionada);
    regras(opcaoSelecionada);
    system("clear");

    /*começando o loop do jogo*/
    while(1){
        /*menu com as opcoes de tema para escolher*/
        printf("\n");
        printf("  ------------------------ BEM VINDO AO JOGO DA FORCA! ------------------------\n");
        printf("\n");
        printf("  As opções de tema sao as seguintes:\n");
        printf("\n");
        printf("        1 - Animais\n");
        printf("        2 - Comidas\n");
        printf("        3 - Profissoes\n");
        printf("\n");

        printf("  Digite o número que corresponde ao tema que você deseja jogar:");

        /*um loop para aceitar apenas opcoes existentes*/
        while(1){
            scanf(" %c",&escolha);
            if(escolha == '1' || escolha == '2' || escolha == '3'){
                break;
            }
            else{
                printf("  Erro! Escolha uma opcao valida: ");
            }
            
        }
        /*escolhendo qual tema vai aparecer durante o jogo*/
        if (escolha == '1'){
            strcpy(tema,"Animais");
        }
        else if (escolha == '2'){
            strcpy(tema,"Comidas");
        }
        else if(escolha == '3'){
            strcpy(tema,"Profissoes");
        }

        /*copiando a palavra sorteada pela funcao para o nosso vetor string*/
        strcpy(palavra,sorteioPalavra(escolha));
        
        /*preenchendo a palavraEscondida escondida com traços, tomando o tamanho da palavra
        como base*/
        for(a=0;a<strlen(palavra);a++){
            palavraEscondida[a] = '_';
        }
        getchar();

        /*loop onde comeca a escolha de letras*/
        while(vidas>0 && situacao==0){
            system("clear");

            printf("Tema: %s.\n",tema);
            printf("A palavra possui %ld letras. \n",strlen(palavra));
            printf("Você possui %d vidas\n", vidas);
            printf("A palavra nao possui as letras: %s\n",erradas);
            boneco(vidas,situacao);
        
            /*mostrar as letras acertadas na  palavraEscondida*/
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

            /*verificando se a letra existe na palavra e somando 1 no contador*/
            for(a=0; a<strlen(palavra);a++){
                if (palavra[a] == letra){
                    palavraEscondida[a] = letra;
                    cont++;
                }
            }

            /*se o contador for 0, é porque a letra nao existe na palavra*/
            /*perde-se uma vida e colocamos a letra errada na string 'erradas'*/
            if(cont == 0){
                printf("A palavra NÃO possui essa letra!\n");
                erradas[6-vidas] = letra;
                vidas -= 1;
                sleep(1);
            }

            /* se for maior que 0, a letra existe na palavra*/
            if(cont>0){
                printf("A palavra POSSUI essa letra!\n");
                sleep(1);
            }

            /*se as vidas acabarem a situacao é igual a -1*/
            if(vidas == 0){
                situacao=-1;
            }

            /*verificando se as strings coincidem*/
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

        /*preparando as condicoes para o proximo jogo*/
        situacao = 0;
        vidas = 6;

        /*limpando a string de letras erradas*/
        for (i=0;i<7;i++){
            erradas[i] = '\0';
        }
        
        /*opcao para continuar jogando ou fechar o jogo*/
        printf("Deseja Jogar novamente? (S/N) ");
        scanf("%c",&jogar);
        system("clear");
        if(jogar == 'N'){
            printf("  ------------------------------- TCHAU! -------------------------------\n");
            sleep(3);
            break;
        }

    }

    return 0;
}
