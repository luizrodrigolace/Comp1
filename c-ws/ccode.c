#include <stdio.h>

int main(void){
    float x,y,total;
    total = 0;
    scanf("%f %f",&x,&y);
    if (x == 1) {
        total += y*4;
    }
    else if (x == 2){
        total += y*4.5;
    }
     else if (x == 3){
        total += y*5;
    }
     else if (x == 4){
        total += y*2;
    }
     else if (y == 5){
        total += y* 1.5;
    }
    printf("Total: R$ %.2f\n",total);
    return 0;
}