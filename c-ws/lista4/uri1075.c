#include <stdio.h>

int main(void){
    int N,X,Y,i
    scanf("%d",&N);
    while(N != 0){
        int total = 0;
        scanf("%d %d",&X,&Y);
        if(X>Y){
            for(i=Y;i<X;i++){
                if(i%2 != 0){
                    total +=i;
                }
            }
        }
        else{
            for(i=X;i<Y;i++){
                if(i%2 != 0){
                    total +=i;
                }

            }
        }
        printf("%d",total);

    }
    
    return 0;
}