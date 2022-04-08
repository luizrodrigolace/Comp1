#include <stdlib.h>
#include <stdio.h>
int main (void) {
    int i,n, *pvetor;
    float media ;

    /* Define um valor para n , scanf ou n = */
    scanf ("%d", &n);

    /* aloca espaco na memoria */
    pvetor = ( int *) malloc (n * sizeof( int ));
    if (! pvetor ) {
        puts (" Sem memória .");
        return 1;
    }

    /* aqui uso pvetor , vamos ler um vetor */
    for (i = 0; i < n; i++) {
        scanf ("%d", pvetor + i);
    }

    /* faco alguma coisa */
    media = 0.0;
    for ( i = 0; i < n; i ++) {
        media += *( pvetor + i);
    }
    printf ("media = %.1f\n", media/n);

    for(i=0;i<n;i++){
        if(*(pvetor+i)> media/n){
            printf("%d é maior que a media\n",*(pvetor+i));
        }
    }

    /* aqui nao preciso mais de pvetor */
    free ( pvetor );
    return 0;
}