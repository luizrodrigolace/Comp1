/* Luiz Rodrigo Lace Rodrigues - 118049873*/

#include<stdio.h>

char converteCaractereParaMinuscula(char c);

int comprimentoTexto(char *p);

void converteFraseParaMinusculas(char *p);

int main (void){
    char frase[81];
    /*gets(frase); a funcao gets nao funciona no meu pc, diz que e perigoso de se usar*/
    fgets(frase, 81, stdin);
    converteFraseParaMinusculas(frase);
    puts(frase);
return 0;
}

/*funcao transformando verificando se eh maiusucla e retornando minuscula ou o
proprio c*/
char converteCaractereParaMinuscula(char c){
    if(c == 'A'){
        return 'a';
    }
    if(c =='B'){
        return 'b';
    }
    if(c== 'C'){
        return 'c';
    }
    if(c== 'D'){
        return 'd';
    }
    if(c=='E'){
        return 'e';
    }
    if(c== 'F'){
        return 'f';
    }
    if(c== 'G'){
        return 'g';
    }
    if(c== 'H'){
        return 'h';
    }
    if(c== 'I'){
        return 'i';
    }
    if(c=='J'){
        return 'j';
    }
    if(c=='K'){
        return 'k';
    }
    if(c=='L'){
        return 'l';
    }
    if(c=='M'){
        return 'm';
    }
    if(c=='N'){
        return 'n';
    }
    if(c== 'O'){
        return 'o';
    }
    if(c=='P'){
        return 'p';
    }
    if(c=='Q'){
        return 'q';
    }
    if(c=='R'){
        return 'r';
    }
    if(c=='S'){
        return 's';
    }
    if(c=='T'){
        return 't';
    }
    if(c=='U'){
        return 'u';
    }
    if(c=='V'){
        return 'v';
    }
    if(c=='W'){
        return 'w';
    }
    if(c=='X'){
        return 'x';
    }
    if(c=='Y'){
        return 'y';
    }
    if(c=='Z'){
        return 'z';
    }
    else{
        return c;
    }
}
/*contanto o numero de caracteres*/
int comprimentoTexto(char *p){
    int i;
    int contador = 0;
    for (i=0; ;i++){
        if(p[i] == '\0'){
            break;
        }
        contador ++;
    }

    return contador;
}

/*convertendo a frase usando as duas outras funcoes*/
void converteFraseParaMinusculas(char *p){
    int i;
    for (i=0;i<=comprimentoTexto(p);i++){
        p[i] = converteCaractereParaMinuscula(p[i]);
    }
}