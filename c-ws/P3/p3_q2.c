/* Luiz Rodrigo Lace Rodrigues - 118049873*/

#include <stdio.h>

double npow(double x,unsigned long int n);

int main(void){
    double x;
    unsigned long int n;

    while(1){
        scanf("%lf", &x);
        scanf("%lu",&n);

        if(x== 0 && n == 0){
            break;
        }

        printf("%f\n",npow(x,n));
    }


    return 0;
}

double npow(double x,unsigned long int n){
    if(n == 0){
        return 1;
    }
    else{
        return (x * npow(x, n-1));
    }
}