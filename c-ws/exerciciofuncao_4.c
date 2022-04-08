#include <stdio.h>
#include <string.h>

void criptografia (char frase[]);
int main(void){
    char frase[80];
    fgets(frase, 80, stdin);
    criptografia(frase);
    printf("%s\n", frase);
    return 0;
}
void criptografia (char frase[]){
    int i;
    for (i=0;i<strlen(frase);i++){
        if (frase[i] == 'z'){
            frase[i] = 'a';
        }
        else if (frase[i] == 'Z'){
            frase[i] = 'A';
        }
        else if (frase[i] == ' '){
            frase[i] = ' ';
        }
        else{
            frase[i] = frase[i] + 1;
        }
    }
}