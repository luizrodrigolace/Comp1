#include <stdio.h>
int fatorial(int N);
int main(void){
    int N;
    scanf("%d",&N);
    printf("%d\n",fatorial(N));


    return 0;
}
int fatorial(int N){
    if(N>0){
        return  N*fatorial(N-1);;
    }
    else{
        return 1;
    }
}

