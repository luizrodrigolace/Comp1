#include <stdio.h>
#include <math.h>
int main (void){

    int hora,minuto,segundo;
    double tempo_total_segundos,distancia,velocidade_media;
    printf("Horas: ");
    scanf("%d",&hora); 
    printf("Minutos: ");
    scanf("%d",&minuto);
    printf("Segundos: ");
    scanf("%d",&segundo);
    printf("Distancia(m): ");
    scanf("%le",&distancia);


    tempo_total_segundos = ((hora * 3600) + (minuto * 60) + segundo);
    
    velocidade_media = distancia/tempo_total_segundos;


    printf("Tempo total em segundos: %f\n",tempo_total_segundos);

    printf("Velocidade media(m/s): %f\n", velocidade_media);

    printf("Velocidade media(mph): %f\n", velocidade_media * 2.23694);


    return 0;
}