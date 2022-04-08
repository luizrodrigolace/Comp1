#include <stdio.h>
#include <math.h>
double Pi(int termos);
int potencia(int base, int expoente);
int main(void){
    int termos;
    scanf("%d", &termos);
    printf("%f\n",Pi(termos));

    return 0;
}
double Pi(int termos){
    float pi = 1;
    float i,j;
    for(i=1,j=2; i<=termos;i++,j+=2){
        pi += (potencia(-1,i+2)) * (1/(1+j));
    }
    pi = pi*4.0;
    return pi;
}
int potencia(int base, int expoente){
    if(expoente == 0){
        return 1;
    }
    else{
        return (base * potencia(base, expoente-1));
    }
}