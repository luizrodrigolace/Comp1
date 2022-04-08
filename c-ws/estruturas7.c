#include<stdio.h>
typedef struct _TEMPO{
    int hora,minuto,segundo;
}TEMPO;
int maior(int t1,int t2);
int main(void){
    TEMPO t1,t2;
    printf("hora, minuto e segundo do t1 tempo: ");
    scanf("%d %d %d",&t1.hora, &t1.minuto,&t1.segundo);
    printf("hora, minuto e segundo do segundo tempo: ");
    scanf("%d %d %d",&t2.hora, &t2.minuto,&t2.segundo);

    if(maior(t1.hora,t2.hora)>0){
        printf("O maior tempo é de o t1\n");
    }
    else if(maior(t1.hora,t2.hora)<0){
        printf("O maior tempo é de o t2\n");
    }
    else{
        if(maior(t1.minuto,t2.minuto)>0){
            printf("O maior tempo é de o t1\n");
        }
        else if(maior(t1.minuto,t2.minuto)<0){
            printf("O maior tempo é de o t2\n");
        }
        else{
            if(maior(t1.segundo,t2.segundo)>0){
                printf("O maior tempo é de o t1\n");
            }
            if(maior(t1.segundo,t2.segundo)<0){
                printf("O maior tempo é de o t2\n");
            }
        }
        
    }
    return 0;
}
int maior(int t1,int t2){
    if(t1>t2){
        return 1;
    }
    else if(t1<t2){
        return -1;
    }
    else{
        return 0;
    }

}