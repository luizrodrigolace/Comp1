#include <stdio.h>

int main(void){
    int x;
    int i = 1;
    int y = 1;

    scanf("%d",&x);

    while (y<x+1){
       i *= y;
       y += 1;

    }
    printf("%d\n",i);

    return 0;
}