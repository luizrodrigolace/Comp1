#include <stdio.h>

#define TAM 81
void ConverteCadeiaParaMaiusculas(char v[]);
int TamanhoCadeia(char v[]);
char ConverteLetraParaMaiuscula(char c);
int EhLetraMinuscula (char c);

int main (void){
    char frase[TAM];
    while (TamanhoCadeia(frase)){
        ConverteCadeiaParaMaiusculas(frase);
        puts(frase);
        scanf("%s",frase);
    }
    return 0;
}
void ConverteCadeiaParaMaiucusculas(char v[]){
    int i;
    
    for(i=0; i<TamanhoCadeia(v);i++){
        v[i] = ConverteLetraParaMaiuscula(v[i]);
    }
}
char ConverteLetraParaMaiuscula(char c){
    if (EhLetraMinuscula (c)){
        switch(c){
            case 'a':
                c='A'
        }
    }
    return c;
}
int EhLetraMinuscula(char c){

}
int TamanhoCadeia (char v[]){

}