#include <stdio.h>
#include <math.h>

int main (void){
    double temp_c, temp_f, temp_k;
    printf("Temperatura em celcius: ");
    scanf("%lf", &temp_c);
    temp_f = ((9*temp_c)/5 + 32);
    printf("Essa temperatura em fahrenheit é: %f\n", temp_f);
    temp_k = (temp_c + 273.15);
    printf("Essa temperatura em Kelvin é: %f\n", temp_k);


    return 0;
}