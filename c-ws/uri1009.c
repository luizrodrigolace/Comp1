#include <stdio.h>
#include <math.h>

int main(void){

    char nome[20];
    double salario, TOTAL, vendas;

    scanf("%s",nome);
    scanf("%lf",&salario);
    scanf("%lf",&vendas);

    TOTAL = salario + vendas *0.15;

    printf("TOTAL = R$ %.2f\n", TOTAL);
    
    return 0;
}