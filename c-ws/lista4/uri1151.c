#include <stdio.h>

int main(void){
    int N,i;
    int a = 1;
    int b = 0;
    int c;
    scanf("%d",&N);
    printf("%d %d",b,a);
    for(i=3;i<=N;i++){
        c = a+b;
        printf(" %d",c);
        b = a;
        a = c;
    }
    printf("\n");
    return 0;
}