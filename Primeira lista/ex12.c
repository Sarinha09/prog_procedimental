#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km,m;
    printf("Digite uma distancia em milhas: ");
    scanf("%f",&m);

    km = m*1.61;

    printf("%f M = %fKM",m,km);

    return 0;
}