#include <stdio.h>
#include <stdlib.h>

int main()
{
    float j,m;
    printf("Digite um valor comprimento em jardas: ");
    scanf("%f",&j);

    m = 0.91*j;

    printf("%f Jardas = %f M",j,m);

    return 0;
}