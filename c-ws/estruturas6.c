#include<stdio.h>
typedef struct _TEMPO{
    int hora,minuto,segundo;
}TEMPO;

int main(void){
    TEMPO t1,t2,t3;
    t3.hora = 0;
    t3.minuto = 0; 
    t3.segundo = 0;


    printf("hora, minuto e segundo do primeiro tempo: ");
    scanf("%d %d %d",&t1.hora, &t1.minuto,&t1.segundo);
    printf("hora, minuto e segundo do segundo tempo: ");
    scanf("%d %d %d",&t2.hora, &t2.minuto,&t2.segundo);

    t3.segundo = t1.segundo + t2.segundo;
    while(t3.segundo>=60){
        t3.segundo -= 60;
        t3.minuto++;
    }

    t3.minuto += t1.minuto + t2.minuto;
    while(t3.minuto>=60){
        t3.minuto -= 60;
        t3.hora++;
    }
    
    t3.hora += (t1.hora + t2.hora);

    printf("%d %d %d\n",t3.hora,t3.minuto,t3.segundo);


    return 0;
}
