#include <stdio.h>
#include "molde.h"

static int global = 3;

int soma (int n1){
    int sum = 0;
    sum += n1;
    return sum;
}

int sub(int n1, int n2){
    return n1 - n2;
}

int mult(int n1,int n2){
    return n1*n2+global;
}

void glob(){
    printf("%d\n",global);
}