#include <stdio.h>

int main(void){
    int x;
    int i;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        if (x%i == 0){
            printf("%d\n",i);
        }
    }

    return 0;
}