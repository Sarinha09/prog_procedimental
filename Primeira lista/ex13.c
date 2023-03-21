#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km,m;
    printf("Digite uma distancia em Km: ");
    scanf("%f",&km);

    m = km/1.61;

    printf("%f KM = %fM",km,m);

    return 0;
}