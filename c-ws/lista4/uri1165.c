#include <stdio.h>

int main(void){
    int testes;
    int x;
    int i;
    int total = 0;
    scanf("%d", &testes);
    while (testes != 0){
        scanf("%d",&x);
        for(i=1;i<=x;i++){
            if (x%i == 0){
                total += 1;
            }
        }
        if (total > 2){
            printf("%d nao eh primo\n",x);

        }
        else{
            printf("%d eh primo\n",x);
        }
        total = 0;
        testes -= 1;
    }
    return 0;
}