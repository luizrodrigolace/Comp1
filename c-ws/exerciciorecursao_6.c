#include <stdio.h>

int binario(int num);
int main(void){
    int num;
    scanf("%d",&num);
    printf("%d\n",binario(num));


    return 0;
}
int binario(int num){
    if (num<2){
        return num;
    }
    return (10 * binario(num/2)) + num%2;
}