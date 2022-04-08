#include <stdio.h>
#include <stdlib.h>

int main (void){
    FILE *arquivo;
    char c;

    arquivo = fopen("aula11","a+");
    if (arquivo == NULL){
        printf("não consegui abrir o arquivo.\n");
        exit(1);
    }

    c = fgetc(stdin);

    while(c != '\n'){
        fputc(c,arquivo);
        c = fgetc(stdin);
    }

    rewind(arquivo);

    c = fgetc(arquivo);
    while(!feof(arquivo)){
        printf("%c",c);
        c=fgetc(arquivo);
    }
    printf("\n");

    fclose(arquivo);

    return 0;
}