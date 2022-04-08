#include <stdio.h>
int main()
{
    int T, anos, m;
    int PA, PB;
    double G1, G2;
    scanf("%d", &T);
    for(m=1; m<=T; m++)
    {
        anos = 0;
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        while(PA <= PB)
        {
            PA *= (G1 / 100.0) + 1.0;
            PB *= (G2 / 100.0) + 1.0;
            anos++;
            if (anos > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (anos <= 100)
            printf("%d anos.\n", anos);
    }
    return 0;
}