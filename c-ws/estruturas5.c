#include<stdio.h>
typedef struct _TEMPO{
    int hora,minuto,segundo;
}TEMPO;

int main(void){
    TEMPO primeiro,segundo;
    printf("hora, minuto e segundo do primeiro tempo: ");
    scanf("%d %d %d",&primeiro.hora, &primeiro.minuto,&primeiro.segundo);
    printf("hora, minuto e segundo do segundo tempo: ");
    scanf("%d %d %d",&segundo.hora, &segundo.minuto,&segundo.segundo);

    if(primeiro.hora>segundo.hora){
        printf("O maior tempo é de o primeiro\n");
    }
    else if(primeiro.hora<segundo.hora){
        printf("O maior tempo é de o segundo\n");
    }
    else{
        if(primeiro.minuto>segundo.minuto){
            printf("O maior tempo é de o primeiro\n");
        }
        else if(primeiro.minuto<segundo.minuto){
            printf("O maior tempo é de o segundo\n");
        }
        else{
            if(primeiro.segundo>segundo.segundo){
                printf("O maior tempo é de o primeiro\n");
            }
            if(primeiro.segundo<segundo.segundo){
                printf("O maior tempo é de o segundo\n");
            }
        }
        
    }






    return 0;
}