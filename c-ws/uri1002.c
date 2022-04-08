#include <math.h>
#include <stdio.h>

int main(void){
    double pi = 3.14159;
    double raio, area;
    
    scanf("%lf",&raio);

    area = pi * pow(raio,2);
    
    printf("A=%.4f\n", area);

    return 0;
}