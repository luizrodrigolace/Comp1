#include <stdio.h>

int main (void){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    
    if(x>y && x>z){
        if(y>z){
            printf("%d\n",z);
            printf("%d\n",y);
        }
        else{
            printf("%d\n",y);
            printf("%d\n",z);
        }
        printf("%d\n",x);
    }
    if(y>x && y>z){
        if(x>z){
            printf("%d\n",z);
            printf("%d\n",x);
        }
        else{
            printf("%d\n",x);
            printf("%d\n",z);
        }
        printf("%d\n",y);
    }
    if(z>y && z>x){
        if(y>x){
            printf("%d\n",x);
            printf("%d\n",y);
        }
        else{
            printf("%d\n",y);
            printf("%d\n",x);
        }
        printf("%d\n",z);
    }
    printf("\n");
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);


    return 0;
}

