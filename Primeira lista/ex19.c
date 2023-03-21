#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m3,l;
    printf("Digite um valor em litros: ");
    scanf("%f",&l);

    m3 = l/1000;

    printf("%f Litros = %f m3",l,m3);

    return 0;
}