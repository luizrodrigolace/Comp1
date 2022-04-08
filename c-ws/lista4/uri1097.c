#include <stdio.h>

int main(void){
    int i = 1;
    int j = 7;
    while(i<10){
        printf("I=%d J=%d\n",i,j);
        printf("I=%d J=%d\n",i,j-1);
        printf("I=%d J=%d\n",i,j-2);
        i += 2;
        j += 2;
    }
    return 0;
}