#include <stdio.h>
#include <string.h>

int QuantasVezes (char frase[],char procurado);
int main(void){
    char c;
    char frase[80];
    int vezes;
    
    scanf("%s",frase);
    c = 'a';
    vezes = QuantasVezes(frase,c);
    printf("O caracter %c apareceu %d vezes\n",c,vezes);
    return 0;
}
int QuantasVezes (char frase[],char procurado){
    int i;
    int contador = 0;
    for (i=0;i<strlen(frase);i++){
        if(frase[i] == procurado){
            contador++;
        }
    }
    return contador;
}
