#include <stdio.h>
#include <math.h>

int main (void){
    
    double PI = 3.14159;
    double volume; 
    volume = ((4/3) * PI * (pow(5,3)));
    
    printf("Volume da esfera de raio 5: %f\n",volume);

    return 0;
}