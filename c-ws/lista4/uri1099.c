#include <stdio.h>
int main(void){
    int N,X,Y,i;
    scanf("%d",&N);
    while(N != 0){
        int total = 0;
        scanf("%d %d",&X,&Y);
        if(X>Y){
            for(i=Y+1;i<X;i++){
                if(i%2 != 0){
                    total +=i;
                }
            }
        }
        if(X == Y){
            total += 0;
        }
        if(Y>X){
            for(i=X+1;i<Y;i++){
                if(i%2 != 0){
                    total +=i;
                }
            }
        }
        printf("%d\n",total);
        N -= 1;
        
    }
    return 0;
}
