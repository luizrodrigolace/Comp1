#include <stdio.h>
int MDC(int x,int y);
int main(void){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    printf("MDC(%d,%d) = %d",x,y,MDC(x,y));


    return 0;
}
int MDC(int x,int y){
    if(y==0){
        return x;
    }
    else{
        return MDC(y,x%y);
    }
}