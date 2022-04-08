#include<stdio.h>
#include<stdlib.h> /*rand()*/
#include <time.h> /*time()*/
#include <unistd.h> /*sleep()*/
#include <string.h>

/*Fun��o que sorteia*/
int sorteio ( int min, int max ) {
    return rand() % (max + 1 - min) + min ;
}

char* sorteioComida() {
     /*Declaramos aqui as variaveis restantes.*/
    /*char palavra[20];*/ /*guarda uma palavra qualquer de maximo 20 caracteres*/
    char *palavra = malloc(sizeof(char) * 20);
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
    while( fscanf( arquivo, "%s", palavra) != EOF ){
        nPalavras++;
    }
        /*voltamos o ponteiro ao principio do arquivo para poder ler uma nova palavra*/
        rewind(arquivo);

        /*Sorteia um numero de 0 at� o numero de linhas existentes no arquivo*/ 
        nSorteio = sorteio(0, nPalavras); 

        /*Percorre o arquivo e pega a palavra correspondente ao numero sorteado*/
        for(i=0; i<nSorteio; i++){
			fscanf(arquivo, "%s", palavra);
        }

        /*printf("Palavra sorteada: %s\n", palavra);*/
        sleep(0.5);
        
    
 	/*Fechando o arquivo*/
    fclose(arquivo);

    return palavra;
}

int main(void){

    char palavra[20];

    strcpy(palavra,sorteioComida());

    printf("%s\n",palavra);

    return 0;
}