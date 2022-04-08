#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>/*funcao do sorteio*/
#include <unistd.h> /*fucao sleep*/

void boneco(int vidas, int situacao);
int sorteio ( int min, int max );

int main(){
    char letra, palavraEscondida[20];
    int a,vidas=6, cont, situacao;
     /*Declaramos aqui as variaveis restantes.*/
    char palavra[20]; /*guarda uma palavra qualquer de maximo 20 caracteres*/
    int nPalavras = 0;  /*contador de palavras que haver� no arquivo*/
    int nSorteio;       /*Guarda um numero sorteado de 0 a X que � o numero de palavras que poder�a conter no arquivo*/
    int i;
    /*'Chamando' o arquivo comidas*/
    FILE *arquivo;
	/*O que faz inicializar o genador de numeros aleatorios*/
    srand (time(NULL));
    /*Abrindo o arquivo para leitura*/
    arquivo = fopen("comidas.txt", "r");

    /*Analisando se o arquivo foi aberto corretamente*/
    if( arquivo == NULL ) {
        printf("Erro: ");
        getchar();
        exit(1);
    }

    /*Contando quantas palavras tem o arquivo*/
    while(fscanf( arquivo, "%s", palavra) != EOF ){
        nPalavras++;
    }
    /*voltamos o ponteiro ao principio do arquivo para poder ler uma nova palavra*/
    rewind(arquivo);

    /*Sorteia um numero de 0 at� o numero de linhas existentes no arquivo*/ 
    nSorteio = sorteio(0, nPalavras); 

    /*Percorre o arquivo e pega a palavra correspondente ao numero sorteado*/
    for(i=0; i<nSorteio; i++){
		fscanf( arquivo, "%s", palavra);
    }

    printf("Palavra sorteada: %s\n", palavra);
    sleep(0.9);
    

 	/*Fechando o arquivo*/
    fclose(arquivo);

 
    /*preenchendo a palavraEscondida=palavra escondida com tracos*/
    for(a=0;a<strlen(palavra);a++){
        palavraEscondida[a] = '_';
    }

    while(vidas>0 && situacao==0){
        system("clear");
        printf("Dica: Comida\n");
        printf("A palavra possui %ld letras. \n",strlen(palavra));
        printf("Voce possui %d vidas\n", vidas);
        boneco(vidas,situacao);

                
        /*digitar a palavraEscondida onde ficam as letras acertadas*/
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
        getchar(); /*mais um pra consumir a entrada*/
        letra = getchar();

        for(a=0; a<strlen(palavra);a++){
            if (palavra[a] == letra){
                palavraEscondida[a] = letra;
                cont++; /*para saber se acertou a letra*/
            }
        }

        if(cont == 0){
            printf("a palavra nao possui essa letra!\n");
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
    }

    if(situacao == -1){
        boneco(vidas,situacao);
        printf("MORREU!\n");
        printf("A palavra era: %s\n",palavra);
    }

    printf("pressione qualquer tecla para continuar.\n");
    getchar();
    return 0;
}

void boneco(int vidas, int situacao){
    if(vidas > 0 && situacao == 1){
        printf("  O\n");
        printf(" \\|/ \n");
        printf("  |   \n");
        printf(" / \\  \n");

    }
    if(vidas == 0 && situacao ==-1){
        printf("  -----------\n");
        printf(" |         O\n");
        printf(" |        /|\\ \n");
        printf(" |         |   \n");
        printf(" |        / \\  \n");
        printf(" |  \n");
        printf("---\n");
    }
    if(vidas == 1 && situacao ==0){
        printf("  -----------\n");
        printf(" |         O\n");
        printf(" |        /|\\ \n");
        printf(" |         |   \n");
        printf(" |        /   \n");
        printf(" |  \n");
        printf("---\n");
    }
    if(vidas == 2 && situacao ==0){
        printf("  -----------\n");
        printf(" |         O\n");
        printf(" |        /|\\ \n");
        printf(" |         |   \n");
        printf(" |             \n");
        printf(" |  \n");
        printf("---\n");
    }
    if(vidas == 3 && situacao ==0){
        printf("  -----------\n");
        printf(" |         O\n");
        printf(" |        /|\\ \n");
        printf(" |            \n");
        printf(" |             \n");
        printf(" |  \n");
        printf("---\n");
    }
    if(vidas == 4 && situacao ==0){
        printf("  -----------\n");
        printf(" |         O\n");
        printf(" |        /| \n");
        printf(" |            \n");
        printf(" |             \n");
        printf(" |  \n");
        printf("---\n");
    }
    if(vidas == 5 && situacao ==0){
        printf("  -----------\n");
        printf(" |         O\n");
        printf(" |          \n");
        printf(" |            \n");
        printf(" |             \n");
        printf(" |  \n");
        printf("---\n");
    }

    if(vidas == 6 && situacao ==0){
        printf("  -----------\n");
        printf(" |         \n");
        printf(" |          \n");
        printf(" |            \n");
        printf(" |             \n");
        printf(" |  \n");
        printf("---\n");
    }
}

/*Funcao que sorteia o numero*/
int sorteio ( int min, int max ) {
    return rand() % (max + 1 - min) + min ;
}
