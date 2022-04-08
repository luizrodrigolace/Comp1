#include <stdio.h>
#include <math.h>

int main(void){
    int A,B,C,D, DIFERENCA;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);

    DIFERENCA = (A*B - C*D);
    
    printf("DIFERENCA = %d\n", DIFERENCA);


    return 0;
}