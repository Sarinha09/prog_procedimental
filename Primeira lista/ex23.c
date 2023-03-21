#include <stdio.h>
#include <stdlib.h>

int main()
{
    float j,m;
    printf("Digite um valor comprimento em metros: ");
    scanf("%f",&m);

    j = m/0.91;

    printf("%f M = %f Jardas",m,j);

    return 0;
}