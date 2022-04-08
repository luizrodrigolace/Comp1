#include <stdio.h>
int mult(int x,int y);
int main (void){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);

    printf("%d\n",mult(x,y));

    return 0;
}
int mult(int x,int y){
    if (y==0){
        return 0;
    }
    else{
        x += mult(x,y-1);
        return x;
    }
}
