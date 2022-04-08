#include <math.h>
#include <stdio.h>

int main(void){
    double A, B, MEDIA;

    scanf("%lf",&A);
    scanf("%lf",&B);

    MEDIA = (A*3.5 + B*7.5)/11;

    printf("MEDIA = %.5f\n",MEDIA);


    return 0;
}