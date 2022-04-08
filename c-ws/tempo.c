#include <stdio.h>
#include <math.h>

int main (void){

    double tempo_para_chegar, conversao_minutos;
    tempo_para_chegar = ((15/25 + 1/3 + 0.25 + 0.25));
    conversao_minutos = (((tempo_para_chegar - 1)*60)/100);

    printf("%f",tempo_para_chegar);
    printf("%f\n",conversao_minutos);

    printf("Precisa sair de casa as %d horas e %f minutos\n",8-2,60-conversao_minutos);
   return 0;
}