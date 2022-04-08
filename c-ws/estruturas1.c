#include<stdio.h>
typedef struct _PONTO{
    float x,y;
} PONTO;

int main (void){
    PONTO p1;

    printf("Entre com as coordenadas do ponto p\n");
    scanf("%f %f", &p1.x,&p1.y);
    printf("Dados lidos\n");
    printf("Ponto p: x = %f, y = %f\n",p1.x,p1.y);

    if(p1.x>p1.y){
        printf("A distancia é de %f\n", p1.x-p1.y);
    }
    else if(p1.y>p1.x){
        printf("A distancia é de %f\n", p1.y-p1.x);
    }
    else{
        printf("A distancia é de 0\n");
    }



    return 0;
}