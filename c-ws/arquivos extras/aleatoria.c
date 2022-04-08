#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>/*funcao do sorteio*/
#include <unistd.h> /*fucao sleep*/


/* O retorno é do tipo char*, um ponteiro*/
char *abrir_arquivo() {
    /* O cursor irá percorrer as letras do arquivo*/
    int cursor, i;
    /* Reserva memória que não será desalocada, para armazenar 20 chars*/
    char *palavra = malloc(sizeof(char) * 20);

    /* O arquivo de palavras que sera lido*/
    FILE *file;
    /*Abrindo o arquivo*/
    file = fopen("comidas.txt", "r");
    /* Se o arquivo for encontrado*/
    i = 0;
    /* Vendo se o arquivo foi encontrado*/
    if (file) {
        /* O cursor ira pegar cada caractere do arquivo e adicionar na variável palavra*/
        while ((cursor = fgetc(file)) != EOF) {
            palavra[i] = cursor;
            i++;
        }
        /* Adiciono um "null terminator", em C ele é interpretado como fim da string*/
        palavra[i] = '\0';
        /* Mostrando o conteudo do arquivo*/
        printf("%s", palavra);
        /* Fecha o arquivo*/
        fclose(file);

    }

    return palavra;
}

int main (void){

    char palavra[20];

    strcpy(palavra,abrir_arquivo)

    printf("%s",palavra);

    return 0;
}