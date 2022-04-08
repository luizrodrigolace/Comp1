#include <stdio.h>

int main(void){
    int N,X,i;
    scanf("%d",&N);
    while (N != 0){
        int total = 0;
        scanf("%d",&X);
        for(i=1;i<X;i++){
            if(X%i == 0){
                total += i;
            }
        }
        if (total == X){
            printf("%d eh perfeito\n",X);
        }
        else{
            printf("%d nao eh perfeito\n",X);
        }
        N -= 1;
    }
    return 0;
}