#include <stdio.h>
int resto(int x,int y);
int main(void){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if (resto(x,y) == 0){
        printf("Resto = 0\n");
    }
    else{
        printf("resto da divisao de %d por %d é %.d\n",x,y,resto(x,y));
    }

    return 0;
}
int resto(int x,int y){
    if(x>y){
        return resto (x-y,y);
    }
    if(x<y){
        return x;
    }
    else{
        return 0;
    }
}