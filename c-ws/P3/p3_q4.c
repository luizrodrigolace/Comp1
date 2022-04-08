/* Luiz Rodrigo Lace Rodrigues - 118049873*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int letraPontos(char*p);

int numero(char*p,int numeros);

int main(void){
    char interessado[81],pretendente[81];
    int totalAmigos = 0;

    fgets(interessado, 81, stdin);
    printf("Em busca %s = %d\n", interessado,numero(interessado,letraPontos(interessado)));

    while(1){
        fgets(pretendente, 81, stdin);
        if(!strcmp(pretendente,"FIM") != 0){
            break;
        }
        printf("Disponivel %s = %d\n", pretendente,numero(pretendente,letraPontos(pretendente)));
        if(numero(interessado,letraPontos(interessado)) == numero(interessado,letraPontos(interessado))){
            printf("%s pode ser amigo de %s",pretendente,interessado);
            totalAmigos+=1;
        }
    }
    printf("ha %d candidatos a amigos(as) para %s", totalAmigos,interessado);
    return 0;
}

int numero(char*p,int numeros){
    int pontosPessoa = 0;
    int i;
    int total;
    for (i=0;i<strlen(p);i++){
        if(p[i] != ' '){
            pontosPessoa++;
        }

    }
    total = (pontosPessoa * letraPontos(p))%9;
    return total;
}

int letraPontos(char*p){
    int pontos = 0;
    int i;
    for(i=0;i<strlen(p);i+=2){
        if(p[i] == 'A' || p[i] == 'a'){
            pontos += 1;
        }
        if(p[i] == 'B' || p[i] == 'b'){
            pontos += 2;
        }
        if(p[i] == 'C' || p[i] == 'c'){
            pontos += 3;
        }
        if(p[i] == 'D' || p[i] == 'd'){
            pontos += 4;
        }
        if(p[i] == 'E' || p[i] == 'e'){
            pontos += 5;
        }
        if(p[i] == 'F' || p[i] == 'f'){
            pontos += 6;
        }
        if(p[i] == 'G' || p[i] == 'g'){
            pontos += 7;
        }
        if(p[i] == 'H' || p[i] == 'h'){
            pontos += 8;
        }
        if(p[i] == 'I' || p[i] == 'i'){
            pontos += 9;
        }
        if(p[i] == 'J' || p[i] == 'j'){
            pontos += 10;
        }
        if(p[i] == 'K' || p[i] == 'k'){
            pontos += 11;
        }
        if(p[i] == 'L' || p[i] == 'l'){
            pontos += 12;
        }
        if(p[i] == 'M' || p[i] == 'm'){
            pontos += 13;
        }
        if(p[i] == 'N' || p[i] == 'n'){
            pontos += 14;
        }
        if(p[i] == 'O' || p[i] == 'o'){
            pontos += 15;
        }
        if(p[i] == 'P' || p[i] == 'p'){
            pontos += 16;
        }
        if(p[i] == 'Q' || p[i] == 'q'){
            pontos += 17;
        }
        if(p[i] == 'R' || p[i] == 'r'){
            pontos += 18;
        }
        if(p[i] == 'S' || p[i] == 's'){
            pontos += 19;
        }
        if(p[i] == 'T' || p[i] == 't'){
            pontos += 20;
        }
        if(p[i] == 'U' || p[i] == 'u'){
            pontos += 21;
        }
        if(p[i] == 'V' || p[i] == 'v'){
            pontos += 22;
        }
        if(p[i] == 'W' || p[i] == 'w'){
            pontos += 23;
        }
        if(p[i] == 'X' || p[i] == 'x'){
            pontos += 24;
        }
        if(p[i] == 'Y' || p[i] == 'y'){
            pontos += 25;
        }
        if(p[i] == 'Z' || p[i] == 'z'){
            pontos += 26;
        }
    }
    return pontos;
}

