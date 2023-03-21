#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m3,l;
    printf("Digite um valor em metros cubicos: ");
    scanf("%f",&m3);

    l = 1000*m3;

    printf("%f M3 = %f Litros",m3,l);

    return 0;
}