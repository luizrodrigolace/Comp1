#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 100
float inverte(float vet[],int n);
float interna(float vet[],int n, int i);

int main(void){
    float vet[tam];
    int i;
    
    for(i=0;i<tam;i++){
        scanf("%f",&vet[i]);
    }
    inverte(vet,100);
    
    for(i=0;i<tam;i++){
        printf("%ff",vet[i]);
    }
    return 0;
}
void interna(float vet[],int n, int i){
    float aux;
    if(n==i){
        return vet[n];
    }
    interna(vet,n-1,i+1);
    aux = vet[n-1];
    vet[n-1] = vet [i+1];
    vet[i+1] = aux;

    return void;
}

float inverte(float vet[],int n){
    int aux;
    if(n%2 == 0){
        aux = 0;
    }
    else{
        aux = -1;
    }
    return (interna(vet,n, aux));
}

