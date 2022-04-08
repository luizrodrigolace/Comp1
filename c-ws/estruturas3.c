#include<stdio.h>
#include<math.h>
typedef struct _PONTO{
    float x,y;
} PONTO;

int main (void){
    PONTO p1,p2;
    float distancia;

    printf("Entre com as coordenadas do ponto p1:");
    scanf("%f %f", &p1.x,&p1.y);
    printf("Entre com as coordenadas do ponto p2:");
    scanf("%f %f", &p2.x,&p2.y);
    printf("Dados lidos\n");

    distancia = sqrt(pow(p2.x-p1.x,2) + pow(p2.y-p1.y,2));

    printf("%f\n",distancia);


    return 0;
}